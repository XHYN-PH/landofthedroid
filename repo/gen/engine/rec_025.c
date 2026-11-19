#include "recomp.h"
#include "rec_mod.h"

void f_7734d8(void) {
  LOAD_REGS();
  goto L_7734d8;
L_773470: /* 773470: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 773473: cmp edx, dword ptr [eax + 0x50] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 773476: jge 0x7737ad */
  if ((sf == of)) goto L_7737ad;
L_77347c: /* 77347c: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* 77347f: mov ebx, edx */
  ebx = edx;
/* 773481: imul ebx, ebx, 0x44 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x44u);
  ebx = (uint32_t)r;
  }
/* 773484: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 773486: mov ecx, 0x10 */
  ecx = 0x10u;
/* 77348b: mov esi, ebx */
  esi = ebx;
/* 77348d: lea edi, [ebp - 0x138] */
  edi = (uint32_t)(ebp + 0xfffffec8u);
/* 773493: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 773495: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 773499: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 77349f: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7734a6: fmul dword ptr [ebp - 0x108] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffef8u)));
/* 7734ac: fstp dword ptr [ebp - 0x108] */
  WF32((uint32_t)(ebp + 0xfffffef8u), ST0); FPOP();
/* 7734b2: fld dword ptr [ebp - 0x104] */
  { double v = F32((uint32_t)(ebp + 0xfffffefcu)); FPUSH(v); }
/* 7734b8: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 7734be: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 7734c4: fld dword ptr [ebp - 0x100] */
  { double v = F32((uint32_t)(ebp + 0xffffff00u)); FPUSH(v); }
/* 7734ca: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 7734d0: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 7734d6: jmp 0x7734e0 */
  goto L_7734e0;
L_7734d8: /* 7734d8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 7734df: nop  */
L_7734e0: /* 7734e0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7734e3: cmp eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7734e6: jge 0x773792 */
  if ((sf == of)) goto L_773792;
L_7734ec: /* 7734ec: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 7734ef: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7734f2: lea eax, [esi + 0xa07750] */
  eax = (uint32_t)(esi + 0xa07750u);
/* 7734f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7734f9: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7734fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7734fd: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x773502u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 773502: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 773508: fmul dword ptr [ebx + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x40u)));
/* 77350b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77350e: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 773511: lea edx, [esi + 0xa0775c] */
  edx = (uint32_t)(esi + 0xa0775cu);
/* 773517: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 773518: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 77351a: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 77351d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77351e: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 773521: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 773524: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 773526: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 773529: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 77352c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 77352e: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 773531: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 773533: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x773538u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 773538: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 77353e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 773541: fmul dword ptr [ebx + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x40u)));
/* 773544: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 773547: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 773549: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 77354c: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 77354f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 773551: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 773554: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 773557: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 773559: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 77355c: fld dword ptr [0xa07704] */
  { double v = F32((uint32_t)(0xa07704u)); FPUSH(v); }
/* 773562: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 773568: call 0x99c958 */
  esp -= 4; W32(esp, 0x77356du); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 77356d: fld dword ptr [0xa07700] */
  { double v = F32((uint32_t)(0xa07700u)); FPUSH(v); }
/* 773573: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 773579: mov byte ptr [ebp - 0x4c], al */
  W8((uint32_t)(ebp + 0xffffffb4u), (eax & 0xffu));
/* 77357c: call 0x99c958 */
  esp -= 4; W32(esp, 0x773581u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 773581: fld dword ptr [0xa076fc] */
  { double v = F32((uint32_t)(0xa076fcu)); FPUSH(v); }
/* 773587: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 77358d: mov byte ptr [ebp - 0x28], al */
  W8((uint32_t)(ebp + 0xffffffd8u), (eax & 0xffu));
/* 773590: call 0x99c958 */
  esp -= 4; W32(esp, 0x773595u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 773595: fstp dword ptr [ebp - 0xac] */
  WF32((uint32_t)(ebp + 0xffffff54u), ST0); FPOP();
/* 77359b: mov cl, byte ptr [ebp - 0x4c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffb4u))) & 0xffu);
/* 77359e: mov dl, byte ptr [ebp - 0x28] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffd8u))) & 0xffu);
/* 7735a1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7735a3: mov byte ptr [ebp - 0x12], al */
  W8((uint32_t)(ebp + 0xffffffeeu), (eax & 0xffu));
/* 7735a6: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7735a9: mov byte ptr [ebp - 0x14], cl */
  W8((uint32_t)(ebp + 0xffffffecu), (ecx & 0xffu));
/* 7735ac: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7735af: mov byte ptr [ebp - 0x13], dl */
  W8((uint32_t)(ebp + 0xffffffedu), (edx & 0xffu));
/* 7735b2: mov dword ptr [ebp - 0xa8], eax */
  W32((uint32_t)(ebp + 0xffffff58u), eax);
/* 7735b8: lea edx, [ebp - 0xac] */
  edx = (uint32_t)(ebp + 0xffffff54u);
/* 7735be: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 7735c4: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 7735c8: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 7735ce: mov dword ptr [ebp - 0xa0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x3f800000u);
/* 7735d8: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7735db: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7735de: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7735e1: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7735e4: lea edi, [ebp - 0x80] */
  edi = (uint32_t)(ebp + 0xffffff80u);
/* 7735e7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7735e9: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 7735eb: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7735ed: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 7735f0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7735f2: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7735f5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7735f7: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7735fa: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7735fd: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 773600: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773603: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 773606: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773609: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 77360c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 77360f: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 773612: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773614: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773616: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773618: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77361a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77361c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 77361f: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 773622: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773625: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 773628: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 77362b: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 77362e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773631: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 773634: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773636: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773638: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77363a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77363c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77363e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773641: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 773644: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773647: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 77364a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 77364d: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 773650: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773653: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 773656: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773658: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 77365a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77365c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77365e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773660: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773662: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 773664: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 773666: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 773669: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 77366c: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 77366f: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 773672: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 773675: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 773678: mov dword ptr [ebp - 0x13c], edx */
  W32((uint32_t)(ebp + 0xfffffec4u), edx);
/* 77367e: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 773681: mov dword ptr [ebp - 0x9c], edx */
  W32((uint32_t)(ebp + 0xffffff64u), edx);
/* 773687: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 77368a: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 773690: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 773693: mov dword ptr [ebp - 0x94], edx */
  W32((uint32_t)(ebp + 0xffffff6cu), edx);
/* 773699: lea edx, [ebp - 0x9c] */
  edx = (uint32_t)(ebp + 0xffffff64u);
/* 77369f: mov dword ptr [ebp - 0x90], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x3f800000u);
/* 7736a9: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7736ac: lea edx, [ebp - 0x138] */
  edx = (uint32_t)(ebp + 0xfffffec8u);
/* 7736b2: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7736b5: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7736b8: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7736bb: lea edi, [ebp - 0xbc] */
  edi = (uint32_t)(ebp + 0xffffff44u);
/* 7736c1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7736c3: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 7736c5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7736c7: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 7736ca: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7736cc: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7736cf: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7736d1: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7736d4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7736d7: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7736da: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7736dd: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7736e0: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7736e3: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7736e6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7736e9: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7736ec: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7736ee: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7736f0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7736f2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7736f4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7736f6: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7736f9: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7736fc: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7736ff: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 773702: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773705: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 773708: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 77370b: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 77370e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773710: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773712: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773714: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773716: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773718: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 77371b: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 77371e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773721: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 773724: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773727: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 77372a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 77372d: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 773730: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773732: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773734: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773736: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773738: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77373a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 77373c: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 77373e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 773740: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 773743: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 773746: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 773749: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77374c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77374d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 773750: mov edx, esp */
  edx = esp;
/* 773752: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 773754: mov eax, dword ptr [ebp - 0x13c] */
  eax = R32((uint32_t)(ebp + 0xfffffec4u));
/* 77375a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 77375d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 773760: mov edx, dword ptr [ebp - 0xbc] */
  edx = R32((uint32_t)(ebp + 0xffffff44u));
/* 773766: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 77376c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77376f: mov ecx, esp */
  ecx = esp;
/* 773771: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 773773: mov edx, dword ptr [ebp - 0xb4] */
  edx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 773779: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 77377c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 77377f: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 773785: call 0x6cc74d */
  esp -= 4; W32(esp, 0x77378au); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 77378a: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 77378d: jmp 0x7734e0 */
  goto L_7734e0;
L_773792: /* 773792: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* 773798: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 77379c: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7737a2u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7737a2: inc dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd4u), r);
  }
/* 7737a5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7737a8: jmp 0x773470 */
  goto L_773470;
L_7737ad: /* 7737ad: xor ebx, ebx */
  ebx = 0;
L_7737af: /* 7737af: cmp ebx, dword ptr [eax + 0x68] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x68u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7737b2: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 7737b5: jge 0x773b28 */
  if ((sf == of)) goto L_773b28;
L_7737bb: /* 7737bb: mov edx, dword ptr [eax + 0x64] */
  edx = R32((uint32_t)(eax + 0x64u));
/* 7737be: lea ecx, [ebx + ebx*8] */
  ecx = (uint32_t)(ebx + ebx*8);
/* 7737c1: fld dword ptr [edx + ecx*8 + 0x44] */
  { double v = F32((uint32_t)(edx + ecx*8 + 0x44u)); FPUSH(v); }
/* 7737c5: mov eax, dword ptr [edx + ecx*8 + 0x40] */
  eax = R32((uint32_t)(edx + ecx*8 + 0x40u));
/* 7737c9: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 7737cf: lea esi, [edx + ecx*8] */
  esi = (uint32_t)(edx + ecx*8);
/* 7737d2: fld dword ptr [esi + 0x40] */
  { double v = F32((uint32_t)(esi + 0x40u)); FPUSH(v); }
/* 7737d5: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7737da: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7737dd: lea edi, [ebp - 0x138] */
  edi = (uint32_t)(ebp + 0xfffffec8u);
/* 7737e3: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 7737e6: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7737e9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7737eb: xor eax, eax */
  eax = 0;
/* 7737ed: fld dword ptr [ebp - 0x108] */
  { double v = F32((uint32_t)(ebp + 0xfffffef8u)); FPUSH(v); }
/* 7737f3: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7737f7: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 7737fd: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 773800: fstp dword ptr [ebp - 0x108] */
  WF32((uint32_t)(ebp + 0xfffffef8u), ST0); FPOP();
/* 773806: fld dword ptr [ebp - 0x104] */
  { double v = F32((uint32_t)(ebp + 0xfffffefcu)); FPUSH(v); }
/* 77380c: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 773812: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 773818: fld dword ptr [ebp - 0x100] */
  { double v = F32((uint32_t)(ebp + 0xffffff00u)); FPUSH(v); }
/* 77381e: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 773824: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 77382a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_773830: /* 773830: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 773833: jge 0x773b0f */
  if ((sf == of)) goto L_773b0f;
L_773839: /* 773839: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 77383c: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 77383f: lea ecx, [esi + 0xa07ab0] */
  ecx = (uint32_t)(esi + 0xa07ab0u);
/* 773845: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 773846: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 773849: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77384a: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x77384fu); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 77384f: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 773852: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 773858: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77385b: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 77385e: lea eax, [ebp - 0xc8] */
  eax = (uint32_t)(ebp + 0xffffff38u);
/* 773864: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 77386a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77386b: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 77386e: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 773874: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 77387a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77387b: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 77387e: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 773884: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 77388a: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 773890: call dword ptr [0xcfa528] */
  esp -= 4; W32(esp, 0x773896u); SPILL(); f_4e2374(); if (g_unwind) return; /* Core!??XFVector@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 773896: lea edx, [esi + 0xa07abc] */
  edx = (uint32_t)(esi + 0xa07abcu);
/* 77389c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77389d: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 7738a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7738a1: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7738a6u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7738a6: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 7738a9: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 7738af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7738b2: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7738b5: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7738b8: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 7738be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7738bf: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7738c2: lea edx, [ebp - 0x1f0] */
  edx = (uint32_t)(ebp + 0xfffffe10u);
/* 7738c8: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 7738ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7738cf: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7738d2: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7738d5: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7738d8: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7738db: call dword ptr [0xcfa528] */
  esp -= 4; W32(esp, 0x7738e1u); SPILL(); f_4e2374(); if (g_unwind) return; /* Core!??XFVector@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7738e1: fld dword ptr [0xa07704] */
  { double v = F32((uint32_t)(0xa07704u)); FPUSH(v); }
/* 7738e7: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 7738ed: call 0x99c958 */
  esp -= 4; W32(esp, 0x7738f2u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7738f2: fld dword ptr [0xa07700] */
  { double v = F32((uint32_t)(0xa07700u)); FPUSH(v); }
/* 7738f8: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 7738fe: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 773900: call 0x99c958 */
  esp -= 4; W32(esp, 0x773905u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 773905: fld dword ptr [0xa076fc] */
  { double v = F32((uint32_t)(0xa076fcu)); FPUSH(v); }
/* 77390b: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 773911: mov byte ptr [ebp - 0x28], al */
  W8((uint32_t)(ebp + 0xffffffd8u), (eax & 0xffu));
/* 773914: call 0x99c958 */
  esp -= 4; W32(esp, 0x773919u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 773919: mov cl, byte ptr [ebp - 0x28] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffd8u))) & 0xffu);
/* 77391c: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 77391f: mov byte ptr [ebp - 0x12], al */
  W8((uint32_t)(ebp + 0xffffffeeu), (eax & 0xffu));
/* 773922: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 773925: mov byte ptr [ebp - 0x13], cl */
  W8((uint32_t)(ebp + 0xffffffedu), (ecx & 0xffu));
/* 773928: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 77392b: mov dword ptr [ebp - 0xd8], edx */
  W32((uint32_t)(ebp + 0xffffff28u), edx);
/* 773931: mov dword ptr [ebp - 0xd4], eax */
  W32((uint32_t)(ebp + 0xffffff2cu), eax);
/* 773937: lea edx, [ebp - 0xd8] */
  edx = (uint32_t)(ebp + 0xffffff28u);
/* 77393d: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 773943: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 773946: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 77394a: mov dword ptr [ebp - 0xd0], ecx */
  W32((uint32_t)(ebp + 0xffffff30u), ecx);
/* 773950: mov dword ptr [ebp - 0xcc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x3f800000u);
/* 77395a: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 77395d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 773960: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 773963: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 773966: lea edi, [ebp - 0x80] */
  edi = (uint32_t)(ebp + 0xffffff80u);
/* 773969: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 77396b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 77396d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 77396f: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 773972: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773974: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 773977: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773979: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 77397c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 77397f: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 773982: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773985: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 773988: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 77398b: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 77398e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773991: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 773994: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773996: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773998: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77399a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77399c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77399e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7739a1: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7739a4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7739a7: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7739aa: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7739ad: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7739b0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7739b3: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7739b6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7739b8: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7739ba: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7739bc: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7739be: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7739c0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7739c3: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7739c6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7739c9: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7739cc: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7739cf: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7739d2: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7739d5: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7739d8: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7739da: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7739dc: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7739de: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7739e0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7739e2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7739e4: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7739e6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7739e8: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7739eb: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7739ee: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7739f1: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7739f4: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 7739f7: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 7739fa: mov ebx, dword ptr [ebp - 0x78] */
  ebx = R32((uint32_t)(ebp + 0xffffff88u));
/* 7739fd: mov dword ptr [ebp - 0x9c], edx */
  W32((uint32_t)(ebp + 0xffffff64u), edx);
/* 773a03: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 773a06: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 773a0c: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 773a0f: mov dword ptr [ebp - 0x94], edx */
  W32((uint32_t)(ebp + 0xffffff6cu), edx);
/* 773a15: lea edx, [ebp - 0x9c] */
  edx = (uint32_t)(ebp + 0xffffff64u);
/* 773a1b: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 773a1e: lea edx, [ebp - 0x138] */
  edx = (uint32_t)(ebp + 0xfffffec8u);
/* 773a24: mov dword ptr [ebp - 0x90], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x3f800000u);
/* 773a2e: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 773a31: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 773a34: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 773a37: lea edi, [ebp - 0xbc] */
  edi = (uint32_t)(ebp + 0xffffff44u);
/* 773a3d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773a3f: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 773a41: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773a43: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 773a46: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773a48: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 773a4b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773a4d: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 773a50: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773a53: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 773a56: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773a59: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 773a5c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773a5f: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 773a62: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773a65: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 773a68: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773a6a: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773a6c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773a6e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773a70: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773a72: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773a75: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 773a78: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773a7b: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 773a7e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773a81: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 773a84: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773a87: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 773a8a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773a8c: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773a8e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773a90: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773a92: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773a94: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773a97: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 773a9a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773a9d: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 773aa0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773aa3: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 773aa6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773aa9: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 773aac: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773aae: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773ab0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773ab2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773ab4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773ab6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773ab8: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 773aba: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 773abc: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 773abf: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 773ac2: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 773ac5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 773ac8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 773ac9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 773acc: mov edx, esp */
  edx = esp;
/* 773ace: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 773ad0: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 773ad3: mov ecx, dword ptr [ebp - 0xbc] */
  ecx = R32((uint32_t)(ebp + 0xffffff44u));
/* 773ad9: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 773adc: mov edx, dword ptr [ebp - 0xb8] */
  edx = R32((uint32_t)(ebp + 0xffffff48u));
/* 773ae2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 773ae5: mov eax, esp */
  eax = esp;
/* 773ae7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 773ae9: mov ecx, dword ptr [ebp - 0xb4] */
  ecx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 773aef: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 773af2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 773af5: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 773afb: call 0x6cc74d */
  esp -= 4; W32(esp, 0x773b00u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 773b00: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 773b03: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 773b06: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 773b07: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 773b0a: jmp 0x773830 */
  goto L_773830;
L_773b0f: /* 773b0f: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* 773b15: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 773b19: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x773b1fu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 773b1f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 773b22: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 773b23: jmp 0x7737af */
  goto L_7737af;
L_773b28: /* 773b28: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 773b2f: nop  */
L_773b30: /* 773b30: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 773b33: cmp edx, dword ptr [eax + 0x74] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x74u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 773b36: jge 0x774627 */
  if ((sf == of)) goto L_774627;
L_773b3c: /* 773b3c: mov ebx, edx */
  ebx = edx;
/* 773b3e: mov edx, dword ptr [eax + 0x70] */
  edx = R32((uint32_t)(eax + 0x70u));
/* 773b41: imul ebx, ebx, 0x58 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x58u);
  ebx = (uint32_t)r;
  }
/* 773b44: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 773b46: mov ecx, 0x10 */
  ecx = 0x10u;
/* 773b4b: mov esi, ebx */
  esi = ebx;
/* 773b4d: lea edi, [ebp - 0x138] */
  edi = (uint32_t)(ebp + 0xfffffec8u);
/* 773b53: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 773b55: xor eax, eax */
  eax = 0;
/* 773b57: fld dword ptr [ebp - 0x108] */
  { double v = F32((uint32_t)(ebp + 0xfffffef8u)); FPUSH(v); }
/* 773b5d: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 773b61: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 773b67: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 773b6a: fstp dword ptr [ebp - 0x108] */
  WF32((uint32_t)(ebp + 0xfffffef8u), ST0); FPOP();
/* 773b70: fld dword ptr [ebp - 0x104] */
  { double v = F32((uint32_t)(ebp + 0xfffffefcu)); FPUSH(v); }
/* 773b76: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 773b7c: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 773b82: fld dword ptr [ebp - 0x100] */
  { double v = F32((uint32_t)(ebp + 0xffffff00u)); FPUSH(v); }
/* 773b88: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 773b8e: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 773b94: mov ecx, dword ptr [ebx + 0x50] */
  ecx = R32((uint32_t)(ebx + 0x50u));
/* 773b97: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 773b99: jne 0x773fe3 */
  if (!zf) goto L_773fe3;
L_773b9f: /* 773b9f: nop  */
L_773ba0: /* 773ba0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 773ba3: cmp eax, dword ptr [ebx + 0x44] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 773ba6: jge 0x774609 */
  if ((sf == of)) goto L_774609;
L_773bac: /* 773bac: mov edx, dword ptr [ebx + 0x40] */
  edx = R32((uint32_t)(ebx + 0x40u));
/* 773baf: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 773bb5: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 773bb8: fmul dword ptr [edx + ecx*4 + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + ecx*4 + 0x8u)));
/* 773bbc: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 773bbf: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* 773bc5: mov dword ptr [ebp - 0x154], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeacu), 0x3f800000u);
/* 773bcf: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 773bd2: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 773bd5: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 773bdb: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 773bde: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 773be1: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 773be7: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 773be9: lea eax, [ebp - 0x160] */
  eax = (uint32_t)(ebp + 0xfffffea0u);
/* 773bef: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 773bf2: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 773bf8: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 773bfb: fst dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0);
/* 773bfe: fld dword ptr [ebp - 0xc8] */
  { double v = F32((uint32_t)(ebp + 0xffffff38u)); FPUSH(v); }
/* 773c04: fadd dword ptr [0xa07fe4] */
  ST0 = ST0 + (F32((uint32_t)(0xa07fe4u)));
/* 773c0a: fstp dword ptr [ebp - 0x160] */
  WF32((uint32_t)(ebp + 0xfffffea0u), ST0); FPOP();
/* 773c10: fstp dword ptr [ebp - 0x15c] */
  WF32((uint32_t)(ebp + 0xfffffea4u), ST0); FPOP();
/* 773c16: fstp dword ptr [ebp - 0x158] */
  WF32((uint32_t)(ebp + 0xfffffea8u), ST0); FPOP();
/* 773c1c: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 773c1f: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 773c22: lea edi, [ebp - 0x18c] */
  edi = (uint32_t)(ebp + 0xfffffe74u);
/* 773c28: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773c2a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 773c2c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773c2e: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 773c31: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773c33: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 773c36: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773c38: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 773c3b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773c3e: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 773c41: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773c44: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 773c47: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773c4a: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 773c4d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773c50: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 773c53: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773c55: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773c57: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773c59: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773c5b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773c5d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773c60: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 773c63: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773c66: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 773c69: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773c6c: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 773c6f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773c72: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 773c75: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773c77: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773c79: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773c7b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773c7d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773c7f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773c82: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 773c85: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773c88: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 773c8b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773c8e: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 773c91: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773c94: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 773c97: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773c99: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773c9b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773c9d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773c9f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773ca1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773ca3: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 773ca5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 773ca7: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 773caa: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 773cad: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 773cb0: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 773cb3: mov edx, dword ptr [ebp - 0x184] */
  edx = R32((uint32_t)(ebp + 0xfffffe7cu));
/* 773cb9: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 773cbc: mov eax, dword ptr [ebp - 0x18c] */
  eax = R32((uint32_t)(ebp + 0xfffffe74u));
/* 773cc2: mov ecx, dword ptr [ebp - 0x188] */
  ecx = R32((uint32_t)(ebp + 0xfffffe78u));
/* 773cc8: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 773ccb: fld dword ptr [ebp - 0xc8] */
  { double v = F32((uint32_t)(ebp + 0xffffff38u)); FPUSH(v); }
/* 773cd1: mov dword ptr [ebp - 0x288], edx */
  W32((uint32_t)(ebp + 0xfffffd78u), edx);
/* 773cd7: fsub dword ptr [0xa07fe4] */
  ST0 = ST0 - (F32((uint32_t)(0xa07fe4u)));
/* 773cdd: lea edx, [ebp - 0x1d4] */
  edx = (uint32_t)(ebp + 0xfffffe2cu);
/* 773ce3: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 773ce6: lea edx, [ebp - 0x138] */
  edx = (uint32_t)(ebp + 0xfffffec8u);
/* 773cec: fstp dword ptr [ebp - 0x1d4] */
  WF32((uint32_t)(ebp + 0xfffffe2cu), ST0); FPOP();
/* 773cf2: mov dword ptr [ebp - 0x1c8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe38u), 0x3f800000u);
/* 773cfc: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 773cff: fstp dword ptr [ebp - 0x1d0] */
  WF32((uint32_t)(ebp + 0xfffffe30u), ST0); FPOP();
/* 773d05: fstp dword ptr [ebp - 0x1cc] */
  WF32((uint32_t)(ebp + 0xfffffe34u), ST0); FPOP();
/* 773d0b: mov esi, dword ptr [ebp - 0x48] */
  esi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 773d0e: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 773d11: lea edi, [ebp - 0x200] */
  edi = (uint32_t)(ebp + 0xfffffe00u);
/* 773d17: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773d19: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 773d1b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773d1d: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 773d20: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773d22: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 773d25: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773d27: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 773d2a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773d2d: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 773d30: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773d33: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 773d36: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773d39: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 773d3c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773d3f: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 773d42: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773d44: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773d46: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773d48: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773d4a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773d4c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773d4f: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 773d52: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773d55: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 773d58: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773d5b: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 773d5e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773d61: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 773d64: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773d66: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773d68: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773d6a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773d6c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773d6e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773d71: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 773d74: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773d77: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 773d7a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773d7d: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 773d80: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773d83: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 773d86: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773d88: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773d8a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773d8c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773d8e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773d90: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773d92: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 773d94: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 773d96: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 773d99: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 773d9c: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 773d9f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 773da0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 773da3: mov edx, esp */
  edx = esp;
/* 773da5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 773da7: mov eax, dword ptr [ebp - 0x288] */
  eax = R32((uint32_t)(ebp + 0xfffffd78u));
/* 773dad: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 773db0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 773db3: mov edx, dword ptr [ebp - 0x200] */
  edx = R32((uint32_t)(ebp + 0xfffffe00u));
/* 773db9: mov eax, dword ptr [ebp - 0x1fc] */
  eax = R32((uint32_t)(ebp + 0xfffffe04u));
/* 773dbf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 773dc2: mov ecx, esp */
  ecx = esp;
/* 773dc4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 773dc6: mov edx, dword ptr [ebp - 0x1f8] */
  edx = R32((uint32_t)(ebp + 0xfffffe08u));
/* 773dcc: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 773dcf: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 773dd2: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 773dd8: call 0x6cc74d */
  esp -= 4; W32(esp, 0x773dddu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 773ddd: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 773de0: fadd dword ptr [0xa07fe4] */
  ST0 = ST0 + (F32((uint32_t)(0xa07fe4u)));
/* 773de6: mov eax, dword ptr [ebp - 0xc8] */
  eax = R32((uint32_t)(ebp + 0xffffff38u));
/* 773dec: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 773def: lea ecx, [ebp - 0x170] */
  ecx = (uint32_t)(ebp + 0xfffffe90u);
/* 773df5: fstp dword ptr [ebp - 0x16c] */
  WF32((uint32_t)(ebp + 0xfffffe94u), ST0); FPOP();
/* 773dfb: lea edx, [ebp - 0x138] */
  edx = (uint32_t)(ebp + 0xfffffec8u);
/* 773e01: mov dword ptr [ebp - 0x170], eax */
  W32((uint32_t)(ebp + 0xfffffe90u), eax);
/* 773e07: fstp dword ptr [ebp - 0x168] */
  WF32((uint32_t)(ebp + 0xfffffe98u), ST0); FPOP();
/* 773e0d: mov dword ptr [ebp - 0x164], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe9cu), 0x3f800000u);
/* 773e17: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 773e1a: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 773e1d: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 773e20: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 773e23: lea edi, [ebp - 0x19c] */
  edi = (uint32_t)(ebp + 0xfffffe64u);
/* 773e29: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773e2b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 773e2d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773e2f: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 773e32: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773e34: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 773e37: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773e39: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 773e3c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773e3f: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 773e42: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773e45: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 773e48: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773e4b: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 773e4e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773e51: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 773e54: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773e56: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773e58: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773e5a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773e5c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773e5e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773e61: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 773e64: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773e67: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 773e6a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773e6d: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 773e70: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773e73: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 773e76: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773e78: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773e7a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773e7c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773e7e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773e80: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773e83: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 773e86: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773e89: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 773e8c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773e8f: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 773e92: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773e95: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 773e98: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773e9a: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773e9c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773e9e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773ea0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773ea2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773ea4: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 773ea6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 773ea8: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 773eab: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 773eae: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 773eb1: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 773eb4: mov edx, dword ptr [ebp - 0x194] */
  edx = R32((uint32_t)(ebp + 0xfffffe6cu));
/* 773eba: fsub dword ptr [0xa07fe4] */
  ST0 = ST0 - (F32((uint32_t)(0xa07fe4u)));
/* 773ec0: mov eax, dword ptr [ebp - 0x19c] */
  eax = R32((uint32_t)(ebp + 0xfffffe64u));
/* 773ec6: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 773ec9: mov ecx, dword ptr [ebp - 0x198] */
  ecx = R32((uint32_t)(ebp + 0xfffffe68u));
/* 773ecf: mov dword ptr [ebp - 0x264], edx */
  W32((uint32_t)(ebp + 0xfffffd9cu), edx);
/* 773ed5: mov edx, dword ptr [ebp - 0xc8] */
  edx = R32((uint32_t)(ebp + 0xffffff38u));
/* 773edb: mov dword ptr [ebp - 0x1e4], edx */
  W32((uint32_t)(ebp + 0xfffffe1cu), edx);
/* 773ee1: fstp dword ptr [ebp - 0x1e0] */
  WF32((uint32_t)(ebp + 0xfffffe20u), ST0); FPOP();
/* 773ee7: lea edx, [ebp - 0x1e4] */
  edx = (uint32_t)(ebp + 0xfffffe1cu);
/* 773eed: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 773ef0: fstp dword ptr [ebp - 0x1dc] */
  WF32((uint32_t)(ebp + 0xfffffe24u), ST0); FPOP();
/* 773ef6: lea edx, [ebp - 0x138] */
  edx = (uint32_t)(ebp + 0xfffffec8u);
/* 773efc: mov dword ptr [ebp - 0x1d8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe28u), 0x3f800000u);
/* 773f06: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 773f09: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 773f0c: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 773f0f: lea edi, [ebp - 0x220] */
  edi = (uint32_t)(ebp + 0xfffffde0u);
/* 773f15: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773f17: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 773f19: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773f1b: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 773f1e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773f20: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 773f23: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 773f25: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 773f28: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773f2b: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 773f2e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773f31: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 773f34: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773f37: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 773f3a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 773f3d: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 773f40: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773f42: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773f44: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773f46: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773f48: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773f4a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773f4d: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 773f50: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773f53: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 773f56: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773f59: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 773f5c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 773f5f: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 773f62: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773f64: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773f66: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773f68: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773f6a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773f6c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773f6f: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 773f72: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773f75: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 773f78: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773f7b: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 773f7e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 773f81: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 773f84: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773f86: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 773f88: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773f8a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 773f8c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 773f8e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 773f90: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 773f92: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 773f94: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 773f97: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 773f9a: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 773f9d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 773f9e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 773fa1: mov edx, esp */
  edx = esp;
/* 773fa3: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 773fa5: mov eax, dword ptr [ebp - 0x264] */
  eax = R32((uint32_t)(ebp + 0xfffffd9cu));
/* 773fab: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 773fae: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 773fb1: mov edx, dword ptr [ebp - 0x220] */
  edx = R32((uint32_t)(ebp + 0xfffffde0u));
/* 773fb7: mov eax, dword ptr [ebp - 0x21c] */
  eax = R32((uint32_t)(ebp + 0xfffffde4u));
/* 773fbd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 773fc0: mov ecx, esp */
  ecx = esp;
/* 773fc2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 773fc4: mov edx, dword ptr [ebp - 0x218] */
  edx = R32((uint32_t)(ebp + 0xfffffde8u));
/* 773fca: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 773fcd: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 773fd0: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 773fd6: call 0x6cc74d */
  esp -= 4; W32(esp, 0x773fdbu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 773fdb: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 773fde: jmp 0x773ba0 */
  goto L_773ba0;
L_773fe3: /* 773fe3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 773fe6: cmp eax, dword ptr [ebx + 0x50] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 773fe9: jge 0x774609 */
  if ((sf == of)) goto L_774609;
L_773fef: /* 773fef: mov edi, dword ptr [0xcfa1e0] */
  edi = R32((uint32_t)(0xcfa1e0u));
/* 773ff5: mov dword ptr [ebp - 0x20], 0x10 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x10u);
/* 773ffc: lea esi, [ebp - 0x3c0] */
  esi = (uint32_t)(ebp + 0xfffffc40u);
L_774002: /* 774002: dec dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 774005: js 0x774014 */
  if (sf) goto L_774014;
L_774007: /* 774007: mov ecx, esi */
  ecx = esi;
/* 774009: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x77400bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77400b: mov eax, 0xc */
  eax = 0xcu;
/* 774010: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 774012: jmp 0x774002 */
  goto L_774002;
L_774014: /* 774014: lea ecx, [ebp - 0x2f4] */
  ecx = (uint32_t)(ebp + 0xfffffd0cu);
/* 77401a: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x774020u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 774020: mov edi, dword ptr [0xcfa1e0] */
  edi = R32((uint32_t)(0xcfa1e0u));
/* 774026: mov dword ptr [ebp - 0x20], 3 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x3u);
/* 77402d: lea esi, [ebp - 0x2d4] */
  esi = (uint32_t)(ebp + 0xfffffd2cu);
L_774033: /* 774033: dec dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 774036: js 0x774045 */
  if (sf) goto L_774045;
L_774038: /* 774038: mov ecx, esi */
  ecx = esi;
/* 77403a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x77403cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77403c: mov eax, 0xc */
  eax = 0xcu;
/* 774041: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 774043: jmp 0x774033 */
  goto L_774033;
L_774045: /* 774045: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 774048: mov ecx, dword ptr [ebx + 0x4c] */
  ecx = R32((uint32_t)(ebx + 0x4cu));
/* 77404b: mov esi, edi */
  esi = edi;
/* 77404d: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 774050: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 774052: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 774054: mov dword ptr [ebp - 0x3e4], edx */
  W32((uint32_t)(ebp + 0xfffffc1cu), edx);
/* 77405a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 77405d: mov dword ptr [ebp - 0x3e0], eax */
  W32((uint32_t)(ebp + 0xfffffc20u), eax);
/* 774063: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 774066: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 774069: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77406a: lea eax, [ebp - 0x150] */
  eax = (uint32_t)(ebp + 0xfffffeb0u);
/* 774070: mov dword ptr [ebp - 0x3dc], ecx */
  W32((uint32_t)(ebp + 0xfffffc24u), ecx);
/* 774076: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 774077: lea ecx, [ebp - 0x3e4] */
  ecx = (uint32_t)(ebp + 0xfffffc1cu);
/* 77407d: mov dword ptr [ebp - 0x2f0], 4 */
  W32((uint32_t)(ebp + 0xfffffd10u), 0x4u);
/* 774087: call dword ptr [0xcfa524] */
  esp -= 4; W32(esp, 0x77408du); SPILL(); f_4e2757(); if (g_unwind) return; /* Core!?FindBestAxisVectors@FVector@@QAEXAAV1@0@Z */ RELOAD();
/* 77408d: mov ecx, dword ptr [ebx + 0x4c] */
  ecx = R32((uint32_t)(ebx + 0x4cu));
/* 774090: mov edx, dword ptr [ecx + esi + 0xc] */
  edx = R32((uint32_t)(ecx + esi + 0xcu));
/* 774094: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 774096: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 774097: lea eax, [ebp - 0x400] */
  eax = (uint32_t)(ebp + 0xfffffc00u);
/* 77409d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77409e: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x7740a4u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 7740a4: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 7740a7: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 7740ad: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7740af: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7740b2: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7740b5: fst dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0);
/* 7740b8: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 7740bb: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7740be: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 7740c1: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 7740c7: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 7740ca: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 7740cd: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7740d0: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 7740d6: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 7740d9: fstp dword ptr [ebp - 0x23c] */
  WF32((uint32_t)(ebp + 0xfffffdc4u), ST0); FPOP();
/* 7740df: fld dword ptr [ebp - 0x148] */
  { double v = F32((uint32_t)(ebp + 0xfffffeb8u)); FPUSH(v); }
/* 7740e5: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 7740eb: fst dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0);
/* 7740ee: fld dword ptr [ebp - 0x14c] */
  { double v = F32((uint32_t)(ebp + 0xfffffeb4u)); FPUSH(v); }
/* 7740f4: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 7740fa: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 7740fd: fld dword ptr [ebp - 0x150] */
  { double v = F32((uint32_t)(ebp + 0xfffffeb0u)); FPUSH(v); }
/* 774103: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 774109: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 77410c: fstp dword ptr [ebp - 0x230] */
  WF32((uint32_t)(ebp + 0xfffffdd0u), ST0); FPOP();
/* 774112: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 774115: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 774117: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 77411a: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 77411d: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 77411f: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 774122: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 774124: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 774126: fld dword ptr [ebp - 0x230] */
  { double v = F32((uint32_t)(ebp + 0xfffffdd0u)); FPUSH(v); }
/* 77412c: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 77412f: fstp dword ptr [ebp - 0x278] */
  WF32((uint32_t)(ebp + 0xfffffd88u), ST0); FPOP();
/* 774135: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 774138: fadd dword ptr [ebp - 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff94u)));
/* 77413b: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 77413e: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 774141: fld dword ptr [ebp - 0x278] */
  { double v = F32((uint32_t)(ebp + 0xfffffd88u)); FPUSH(v); }
/* 774147: fadd dword ptr [ebp - 0x23c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffdc4u)));
/* 77414d: fstp dword ptr [ebp - 0x1b8] */
  WF32((uint32_t)(ebp + 0xfffffe48u), ST0); FPOP();
/* 774153: mov ecx, dword ptr [ebp - 0x1b8] */
  ecx = R32((uint32_t)(ebp + 0xfffffe48u));
/* 774159: mov dword ptr [ebp - 0x3c0], ecx */
  W32((uint32_t)(ebp + 0xfffffc40u), ecx);
/* 77415f: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 774162: fstp dword ptr [ebp - 0x1b4] */
  WF32((uint32_t)(ebp + 0xfffffe4cu), ST0); FPOP();
/* 774168: mov edx, dword ptr [ebp - 0x1b4] */
  edx = R32((uint32_t)(ebp + 0xfffffe4cu));
/* 77416e: fstp dword ptr [ebp - 0x1b0] */
  WF32((uint32_t)(ebp + 0xfffffe50u), ST0); FPOP();
/* 774174: mov eax, dword ptr [ebp - 0x1b0] */
  eax = R32((uint32_t)(ebp + 0xfffffe50u));
/* 77417a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77417c: mov dword ptr [ebp - 0x3bc], edx */
  W32((uint32_t)(ebp + 0xfffffc44u), edx);
/* 774182: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 774184: mov dword ptr [ebp - 0x3b8], eax */
  W32((uint32_t)(ebp + 0xfffffc48u), eax);
/* 77418a: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 77418d: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 774190: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 774193: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 774196: mov dword ptr [ebp - 0x254], edx */
  W32((uint32_t)(ebp + 0xfffffdacu), edx);
/* 77419c: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 77419f: mov dword ptr [ebp - 0x284], ecx */
  W32((uint32_t)(ebp + 0xfffffd7cu), ecx);
/* 7741a5: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 7741a7: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7741aa: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7741ad: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 7741af: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 7741b2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7741b4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7741b6: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 7741b9: fsub dword ptr [ebp - 0x254] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffdacu)));
/* 7741bf: fstp dword ptr [ebp - 0x2a8] */
  WF32((uint32_t)(ebp + 0xfffffd58u), ST0); FPOP();
/* 7741c5: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7741c8: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7741cb: fadd dword ptr [ebp - 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff94u)));
/* 7741ce: fld dword ptr [ebp - 0x2a8] */
  { double v = F32((uint32_t)(ebp + 0xfffffd58u)); FPUSH(v); }
/* 7741d4: fadd dword ptr [ebp - 0x284] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffd7cu)));
/* 7741da: fstp dword ptr [ebp - 0x1c4] */
  WF32((uint32_t)(ebp + 0xfffffe3cu), ST0); FPOP();
/* 7741e0: mov eax, dword ptr [ebp - 0x1c4] */
  eax = R32((uint32_t)(ebp + 0xfffffe3cu));
/* 7741e6: mov dword ptr [ebp - 0x3b4], eax */
  W32((uint32_t)(ebp + 0xfffffc4cu), eax);
/* 7741ec: fstp dword ptr [ebp - 0x1c0] */
  WF32((uint32_t)(ebp + 0xfffffe40u), ST0); FPOP();
/* 7741f2: mov ecx, dword ptr [ebp - 0x1c0] */
  ecx = R32((uint32_t)(ebp + 0xfffffe40u));
/* 7741f8: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7741fb: fstp dword ptr [ebp - 0x1bc] */
  WF32((uint32_t)(ebp + 0xfffffe44u), ST0); FPOP();
/* 774201: mov dword ptr [ebp - 0x3b0], ecx */
  W32((uint32_t)(ebp + 0xfffffc50u), ecx);
/* 774207: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 77420a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77420c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77420e: mov dword ptr [ebp - 0x248], ecx */
  W32((uint32_t)(ebp + 0xfffffdb8u), ecx);
/* 774214: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 774217: mov edx, dword ptr [ebp - 0x1bc] */
  edx = R32((uint32_t)(ebp + 0xfffffe44u));
/* 77421d: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 774220: mov dword ptr [ebp - 0x260], eax */
  W32((uint32_t)(ebp + 0xfffffda0u), eax);
/* 774226: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 774229: mov dword ptr [ebp - 0x3ac], edx */
  W32((uint32_t)(ebp + 0xfffffc54u), edx);
/* 77422f: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 774232: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 774234: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 774237: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 77423a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 77423c: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 77423f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 774241: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 774243: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 774246: fsub dword ptr [ebp - 0x248] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffdb8u)));
/* 77424c: fstp dword ptr [ebp - 0x29c] */
  WF32((uint32_t)(ebp + 0xfffffd64u), ST0); FPOP();
/* 774252: fsubr dword ptr [ebp - 0x30] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffd0u))) - ST0;
/* 774255: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 774258: fsub dword ptr [ebp - 0x6c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff94u)));
/* 77425b: fld dword ptr [ebp - 0x29c] */
  { double v = F32((uint32_t)(ebp + 0xfffffd64u)); FPUSH(v); }
/* 774261: fsub dword ptr [ebp - 0x260] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffda0u)));
/* 774267: fstp dword ptr [ebp - 0x1a8] */
  WF32((uint32_t)(ebp + 0xfffffe58u), ST0); FPOP();
/* 77426d: mov edx, dword ptr [ebp - 0x1a8] */
  edx = R32((uint32_t)(ebp + 0xfffffe58u));
/* 774273: mov dword ptr [ebp - 0x3a8], edx */
  W32((uint32_t)(ebp + 0xfffffc58u), edx);
/* 774279: fstp dword ptr [ebp - 0x1a4] */
  WF32((uint32_t)(ebp + 0xfffffe5cu), ST0); FPOP();
/* 77427f: mov eax, dword ptr [ebp - 0x1a4] */
  eax = R32((uint32_t)(ebp + 0xfffffe5cu));
/* 774285: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 774288: fstp dword ptr [ebp - 0x1a0] */
  WF32((uint32_t)(ebp + 0xfffffe60u), ST0); FPOP();
/* 77428e: mov ecx, dword ptr [ebp - 0x1a0] */
  ecx = R32((uint32_t)(ebp + 0xfffffe60u));
/* 774294: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 774296: mov dword ptr [ebp - 0x3a4], eax */
  W32((uint32_t)(ebp + 0xfffffc5cu), eax);
/* 77429c: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 77429f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7742a2: mov dword ptr [ebp - 0x3a0], ecx */
  W32((uint32_t)(ebp + 0xfffffc60u), ecx);
/* 7742a8: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 7742ab: mov dword ptr [ebp - 0xa8], edx */
  W32((uint32_t)(ebp + 0xffffff58u), edx);
/* 7742b1: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7742b4: mov dword ptr [ebp - 0xd4], eax */
  W32((uint32_t)(ebp + 0xffffff2cu), eax);
/* 7742ba: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7742bd: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7742c0: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 7742c2: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7742c5: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7742c8: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7742ca: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 7742cd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7742cf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7742d1: fld dword ptr [ebp - 0xd4] */
  { double v = F32((uint32_t)(ebp + 0xffffff2cu)); FPUSH(v); }
/* 7742d7: xor esi, esi */
  esi = 0;
/* 7742d9: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 7742dc: fstp dword ptr [ebp - 0x1f0] */
  WF32((uint32_t)(ebp + 0xfffffe10u), ST0); FPOP();
/* 7742e2: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7742e5: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 7742e8: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 7742eb: fsub dword ptr [ebp - 0x70] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff90u)));
/* 7742ee: fld dword ptr [ebp - 0x1f0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe10u)); FPUSH(v); }
/* 7742f4: fsub dword ptr [ebp - 0xa8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff58u)));
/* 7742fa: fstp dword ptr [ebp - 0x17c] */
  WF32((uint32_t)(ebp + 0xfffffe84u), ST0); FPOP();
/* 774300: mov ecx, dword ptr [ebp - 0x17c] */
  ecx = R32((uint32_t)(ebp + 0xfffffe84u));
/* 774306: mov dword ptr [ebp - 0x39c], ecx */
  W32((uint32_t)(ebp + 0xfffffc64u), ecx);
/* 77430c: fstp dword ptr [ebp - 0x178] */
  WF32((uint32_t)(ebp + 0xfffffe88u), ST0); FPOP();
/* 774312: mov edx, dword ptr [ebp - 0x178] */
  edx = R32((uint32_t)(ebp + 0xfffffe88u));
/* 774318: mov dword ptr [ebp - 0x398], edx */
  W32((uint32_t)(ebp + 0xfffffc68u), edx);
/* 77431e: fstp dword ptr [ebp - 0x174] */
  WF32((uint32_t)(ebp + 0xfffffe8cu), ST0); FPOP();
/* 774324: mov eax, dword ptr [ebp - 0x174] */
  eax = R32((uint32_t)(ebp + 0xfffffe8cu));
/* 77432a: mov dword ptr [ebp - 0x394], eax */
  W32((uint32_t)(ebp + 0xfffffc6cu), eax);
L_774330: /* 774330: cmp esi, dword ptr [ebx + 0x50] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 774333: jge 0x7743cb */
  if ((sf == of)) goto L_7743cb;
L_774339: /* 774339: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77433b: je 0x7743c5 */
  if (zf) goto L_7743c5;
L_774341: /* 774341: mov edx, dword ptr [ebx + 0x4c] */
  edx = R32((uint32_t)(ebx + 0x4cu));
/* 774344: mov ecx, esi */
  ecx = esi;
/* 774346: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 774349: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 77434b: mov eax, ecx */
  eax = ecx;
/* 77434d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 77434f: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 774355: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 774358: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 77435b: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 774361: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 774367: fchs  */
  ST0 = -ST0;
/* 774369: mov dword ptr [ebp - 0x88], edx */
  W32((uint32_t)(ebp + 0xffffff78u), edx);
/* 77436f: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 774375: lea eax, [ebp - 0x410] */
  eax = (uint32_t)(ebp + 0xfffffbf0u);
/* 77437b: fchs  */
  ST0 = -ST0;
/* 77437d: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 774383: fchs  */
  ST0 = -ST0;
/* 774385: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 77438b: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 774391: fstp dword ptr [ebp - 0x13c] */
  WF32((uint32_t)(ebp + 0xfffffec4u), ST0); FPOP();
/* 774397: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 77439a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77439b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77439c: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x7743a2u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 7743a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7743a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7743a5: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 7743ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7743ac: lea ecx, [ebp - 0x3f0] */
  ecx = (uint32_t)(ebp + 0xfffffc10u);
/* 7743b2: call 0x6cb096 */
  esp -= 4; W32(esp, 0x7743b7u); SPILL(); f_6cb096(); if (g_unwind) return; RELOAD();
/* 7743b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7743b9: jne 0x7743c5 */
  if (!zf) goto L_7743c5;
L_7743bb: /* 7743bb: xor esi, esi */
  esi = 0;
/* 7743bd: mov dword ptr [ebp - 0x2f0], esi */
  W32((uint32_t)(ebp + 0xfffffd10u), esi);
/* 7743c3: jmp 0x7743d1 */
  goto L_7743d1;
L_7743c5: /* 7743c5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7743c6: jmp 0x774330 */
  goto L_774330;
L_7743cb: /* 7743cb: mov esi, dword ptr [ebp - 0x2f0] */
  esi = R32((uint32_t)(ebp + 0xfffffd10u));
L_7743d1: /* 7743d1: xor ecx, ecx */
  ecx = 0;
L_7743d3: /* 7743d3: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7743d5: jge 0x774601 */
  if ((sf == of)) goto L_774601;
L_7743db: /* 7743db: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* 7743de: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 7743e1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7743e2: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x7743e2);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 7743e4: mov dword ptr [ebp - 0x74], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x3f800000u);
/* 7743eb: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 7743ee: fld dword ptr [ebp + eax*4 - 0x3b8] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xfffffc48u)); FPUSH(v); }
/* 7743f5: mov edx, dword ptr [ebp + eax*4 - 0x3c0] */
  edx = R32((uint32_t)(ebp + eax*4 + 0xfffffc40u));
/* 7743fc: fld dword ptr [ebp + eax*4 - 0x3bc] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xfffffc44u)); FPUSH(v); }
/* 774403: lea eax, [ebp + eax*4 - 0x3c0] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffc40u);
/* 77440a: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 77440d: mov dword ptr [ebp - 0x80], edx */
  W32((uint32_t)(ebp + 0xffffff80u), edx);
/* 774410: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 774413: lea edx, [ebp - 0x138] */
  edx = (uint32_t)(ebp + 0xfffffec8u);
/* 774419: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 77441c: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 77441f: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 774422: mov esi, dword ptr [ebp - 0x50] */
  esi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 774425: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 774428: lea edi, [ebp - 0x9c] */
  edi = (uint32_t)(ebp + 0xffffff64u);
/* 77442e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 774430: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 774432: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 774434: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 774437: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 774439: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 77443c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 77443e: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 774441: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 774444: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 774447: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 77444a: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 77444d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 774450: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 774453: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 774456: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 774459: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 77445b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 77445d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77445f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 774461: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 774463: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 774466: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 774469: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 77446c: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 77446f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 774472: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 774475: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 774478: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 77447b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 77447d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 77447f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 774481: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 774483: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 774485: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 774488: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 77448b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 77448e: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 774491: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 774494: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 774497: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 77449a: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 77449d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 77449f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7744a1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7744a3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7744a5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7744a7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7744a9: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7744ab: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7744ad: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7744b0: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7744b3: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7744b6: mov eax, dword ptr [ebp - 0x9c] */
  eax = R32((uint32_t)(ebp + 0xffffff64u));
/* 7744bc: mov edx, dword ptr [ebp - 0x98] */
  edx = R32((uint32_t)(ebp + 0xffffff68u));
/* 7744c2: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 7744c5: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 7744cb: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 7744ce: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 7744d1: fld dword ptr [ebp + eax*4 - 0x3b8] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xfffffc48u)); FPUSH(v); }
/* 7744d8: mov ecx, dword ptr [ebp + eax*4 - 0x3c0] */
  ecx = R32((uint32_t)(ebp + eax*4 + 0xfffffc40u));
/* 7744df: fld dword ptr [ebp + eax*4 - 0x3bc] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xfffffc44u)); FPUSH(v); }
/* 7744e6: lea eax, [ebp + eax*4 - 0x3c0] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffc40u);
/* 7744ed: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 7744f3: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 7744f6: lea edx, [ebp - 0xbc] */
  edx = (uint32_t)(ebp + 0xffffff44u);
/* 7744fc: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 774502: fstp dword ptr [ebp - 0xb4] */
  WF32((uint32_t)(ebp + 0xffffff4cu), ST0); FPOP();
/* 774508: mov dword ptr [ebp - 0xbc], ecx */
  W32((uint32_t)(ebp + 0xffffff44u), ecx);
/* 77450e: mov dword ptr [ebp - 0xb0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x3f800000u);
/* 774518: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 77451b: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 77451e: mov esi, dword ptr [ebp - 0x50] */
  esi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 774521: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 774524: lea edi, [ebp - 0x210] */
  edi = (uint32_t)(ebp + 0xfffffdf0u);
/* 77452a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 77452c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 77452e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 774530: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 774533: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 774535: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 774538: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 77453a: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 77453d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 774540: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 774543: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 774546: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 774549: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 77454c: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 77454f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 774552: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 774555: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 774557: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 774559: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77455b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77455d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77455f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 774562: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 774565: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 774568: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 77456b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 77456e: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 774571: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 774574: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 774577: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 774579: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 77457b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77457d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77457f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 774581: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 774584: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 774587: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 77458a: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 77458d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 774590: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 774593: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 774596: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 774599: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 77459b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 77459d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 77459f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7745a1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7745a3: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7745a5: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7745a7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7745a9: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7745ac: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7745af: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7745b2: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 7745b5: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7745b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7745b9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7745bc: mov ecx, esp */
  ecx = esp;
/* 7745be: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7745c0: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7745c3: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7745c6: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7745c9: mov ecx, dword ptr [ebp - 0x210] */
  ecx = R32((uint32_t)(ebp + 0xfffffdf0u));
/* 7745cf: mov edx, dword ptr [ebp - 0x20c] */
  edx = R32((uint32_t)(ebp + 0xfffffdf4u));
/* 7745d5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7745d8: mov eax, esp */
  eax = esp;
/* 7745da: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7745dc: mov ecx, dword ptr [ebp - 0x208] */
  ecx = R32((uint32_t)(ebp + 0xfffffdf8u));
/* 7745e2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7745e5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7745e8: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 7745ee: call 0x6cc74d */
  esp -= 4; W32(esp, 0x7745f3u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 7745f3: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 7745f6: mov esi, dword ptr [ebp - 0x2f0] */
  esi = R32((uint32_t)(ebp + 0xfffffd10u));
/* 7745fc: jmp 0x7743d3 */
  goto L_7743d3;
L_774601: /* 774601: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 774604: jmp 0x773fe3 */
  goto L_773fe3;
L_774609: /* 774609: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* 77460f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 774613: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x774619u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 774619: inc dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd4u), r);
  }
/* 77461c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77461f: jmp 0x773b30 */
  goto L_773b30;
L_774627: /* 774627: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 77462a: test ch, 0x20 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77462d: je 0x774a27 */
  if (zf) goto L_774a27;
L_774633: /* 774633: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 774639: fmul dword ptr [eax + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x48u)));
/* 77463c: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 77463f: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 774645: fmul dword ptr [eax + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x44u)));
/* 774648: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 77464b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77464e: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 774654: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 774657: fmul dword ptr [eax + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x40u)));
/* 77465a: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 77465d: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 774660: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 774663: fld dword ptr [0xa076e8] */
  { double v = F32((uint32_t)(0xa076e8u)); FPUSH(v); }
/* 774669: fmul dword ptr [0xa07c90] */
  ST0 = ST0 * (F32((uint32_t)(0xa07c90u)));
/* 77466f: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 774675: fld dword ptr [0xa07710] */
  { double v = F32((uint32_t)(0xa07710u)); FPUSH(v); }
/* 77467b: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 774681: call 0x99c958 */
  esp -= 4; W32(esp, 0x774686u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 774686: fld dword ptr [0xa0770c] */
  { double v = F32((uint32_t)(0xa0770cu)); FPUSH(v); }
/* 77468c: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 774692: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 774694: call 0x99c958 */
  esp -= 4; W32(esp, 0x774699u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 774699: fld dword ptr [0xa07708] */
  { double v = F32((uint32_t)(0xa07708u)); FPUSH(v); }
/* 77469f: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 7746a5: mov byte ptr [ebp - 0x28], al */
  W8((uint32_t)(ebp + 0xffffffd8u), (eax & 0xffu));
/* 7746a8: call 0x99c958 */
  esp -= 4; W32(esp, 0x7746adu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7746ad: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 7746b3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7746b5: mov cl, byte ptr [ebp - 0x28] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffd8u))) & 0xffu);
/* 7746b8: mov byte ptr [ebp - 0x46], al */
  W8((uint32_t)(ebp + 0xffffffbau), (eax & 0xffu));
/* 7746bb: mov byte ptr [ebp - 0x47], cl */
  W8((uint32_t)(ebp + 0xffffffb9u), (ecx & 0xffu));
/* 7746be: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 7746c1: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7746c4: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 7746c7: mov byte ptr [ebp - 0x48], bl */
  W8((uint32_t)(ebp + 0xffffffb8u), (ebx & 0xffu));
/* 7746ca: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 7746cd: mov byte ptr [ebp - 0x45], 0xff */
  W8((uint32_t)(ebp + 0xffffffbbu), 0xffu);
/* 7746d1: mov ebx, dword ptr [ebp - 0x48] */
  ebx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7746d4: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 7746d7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7746d8: fst dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0);
/* 7746de: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7746e1: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7746e4: mov eax, esp */
  eax = esp;
/* 7746e6: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7746e9: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7746ec: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7746ef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7746f2: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 7746f5: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 7746f8: fsub dword ptr [ebp - 0xa8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff58u)));
/* 7746fe: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 774701: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 774704: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 774706: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 774709: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 77470c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 77470f: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 774712: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 774715: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 774718: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 77471b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 77471d: mov edx, esp */
  edx = esp;
/* 77471f: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 774725: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 774728: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 77472b: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 77472e: fld dword ptr [ebp - 0xa8] */
  { double v = F32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* 774734: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 774737: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 77473d: mov eax, dword ptr [ebp - 0x8c] */
  eax = R32((uint32_t)(ebp + 0xffffff74u));
/* 774743: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 774745: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 77474b: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 774751: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 774754: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 77475a: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 774760: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 774766: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 774769: call 0x6cc74d */
  esp -= 4; W32(esp, 0x77476eu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 77476e: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 774771: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 774774: fsubr dword ptr [ebp - 0x2c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffd4u))) - ST0;
/* 774777: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77477a: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 77477d: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 774780: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 774783: mov dword ptr [ebp - 0xa8], edx */
  W32((uint32_t)(ebp + 0xffffff58u), edx);
/* 774789: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 77478c: mov eax, ecx */
  eax = ecx;
/* 77478e: fsub dword ptr [ebp - 0xa8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff58u)));
/* 774794: mov ecx, edx */
  ecx = edx;
/* 774796: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 774799: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 77479f: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7747a2: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 7747a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7747a6: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7747a9: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7747ac: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7747af: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7747b2: mov edx, esp */
  edx = esp;
/* 7747b4: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7747b7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7747b9: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7747bc: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7747bf: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7747c2: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7747c5: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7747c8: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7747cb: fld dword ptr [ebp - 0xa8] */
  { double v = F32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* 7747d1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7747d4: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 7747d7: mov ecx, esp */
  ecx = esp;
/* 7747d9: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 7747df: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* 7747e5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7747e7: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 7747ed: mov eax, dword ptr [ebp - 0x88] */
  eax = R32((uint32_t)(ebp + 0xffffff78u));
/* 7747f3: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7747f6: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 7747fc: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 774802: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 774805: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 77480b: call 0x6cc74d */
  esp -= 4; W32(esp, 0x774810u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 774810: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 774813: fsubr dword ptr [ebp - 0x2c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffd4u))) - ST0;
/* 774816: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 774819: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 77481c: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 77481f: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 774822: mov ecx, eax */
  ecx = eax;
/* 774824: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 774827: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 77482d: fsub dword ptr [ebp - 0xa8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff58u)));
/* 774833: mov edx, eax */
  edx = eax;
/* 774835: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 774838: mov dword ptr [ebp - 0xa8], eax */
  W32((uint32_t)(ebp + 0xffffff58u), eax);
/* 77483e: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 774841: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 774844: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 774845: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 774848: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 77484b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77484e: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 774851: mov ecx, esp */
  ecx = esp;
/* 774853: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 774856: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 774858: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 77485b: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 77485e: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 774861: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 774864: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 774867: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77486a: fld dword ptr [ebp - 0xa8] */
  { double v = F32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* 774870: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 774873: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 774876: mov eax, esp */
  eax = esp;
/* 774878: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 77487e: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 774884: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 77488a: mov ecx, dword ptr [ebp - 0x8c] */
  ecx = R32((uint32_t)(ebp + 0xffffff74u));
/* 774890: mov edx, dword ptr [ebp - 0x88] */
  edx = R32((uint32_t)(ebp + 0xffffff78u));
/* 774896: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 774898: mov ecx, dword ptr [ebp - 0x84] */
  ecx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 77489e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7748a1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7748a4: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 7748aa: call 0x6cc74d */
  esp -= 4; W32(esp, 0x7748afu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 7748af: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7748b2: fld dword ptr [eax + 0x3c] */
  { double v = F32((uint32_t)(eax + 0x3cu)); FPUSH(v); }
/* 7748b5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7748b8: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 7748bb: fsub dword ptr [eax + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x28u)));
/* 7748be: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 7748c4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7748c7: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x7748cdu); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 7748cd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7748d0: fstp qword ptr [ebp - 0x34] */
  WF64((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7748d3: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 7748d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7748dc: fmul qword ptr [ebp - 0x34] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffccu)));
/* 7748df: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7748e2: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 7748e8: fld dword ptr [eax + 0x3c] */
  { double v = F32((uint32_t)(eax + 0x3cu)); FPUSH(v); }
/* 7748eb: fadd dword ptr [eax + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x28u)));
/* 7748ee: fsub dword ptr [eax + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x34u)));
/* 7748f1: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 7748f7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7748fa: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x774900u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 774900: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 774903: fstp qword ptr [ebp - 0x34] */
  WF64((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 774906: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 77490c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77490f: fmul qword ptr [ebp - 0x34] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffccu)));
/* 774912: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 774915: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 77491b: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* 77491e: fadd dword ptr [eax + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x28u)));
/* 774921: fsub dword ptr [eax + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x3cu)));
/* 774924: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 77492a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 77492d: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x774933u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 774933: fstp qword ptr [ebp - 0x34] */
  WF64((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 774936: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 774939: fld dword ptr [0xa07c90] */
  { double v = F32((uint32_t)(0xa07c90u)); FPUSH(v); }
/* 77493f: xor edi, edi */
  edi = 0;
/* 774941: fmul qword ptr [ebp - 0x34] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffccu)));
/* 774944: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 77494a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_774950: /* 774950: cmp edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 774953: jge 0x774a27 */
  if ((sf == of)) goto L_774a27;
L_774959: /* 774959: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 77495c: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 77495f: lea edx, [esi + 0xa07990] */
  edx = (uint32_t)(esi + 0xa07990u);
/* 774965: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 774966: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 774969: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77496a: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x77496fu); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 77496f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 774972: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 774978: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 774979: lea edx, [ebp - 0xa8] */
  edx = (uint32_t)(ebp + 0xffffff58u);
/* 77497f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 774980: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 774983: call dword ptr [0xcfa528] */
  esp -= 4; W32(esp, 0x774989u); SPILL(); f_4e2374(); if (g_unwind) return; /* Core!??XFVector@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 774989: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 77498c: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 77498f: lea eax, [esi + 0xa0799c] */
  eax = (uint32_t)(esi + 0xa0799cu);
/* 774995: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 774996: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 774999: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 77499c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77499d: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7749a0: fadd dword ptr [ebp - 0x58] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 7749a3: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7749a6: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7749a9: fadd dword ptr [ebp - 0x54] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffacu)));
/* 7749ac: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7749af: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7749b4u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7749b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7749b7: lea edx, [ebp - 0xc8] */
  edx = (uint32_t)(ebp + 0xffffff38u);
/* 7749bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7749be: lea eax, [ebp - 0x1f0] */
  eax = (uint32_t)(ebp + 0xfffffe10u);
/* 7749c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7749c5: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7749c8: call dword ptr [0xcfa528] */
  esp -= 4; W32(esp, 0x7749ceu); SPILL(); f_4e2374(); if (g_unwind) return; /* Core!??XFVector@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7749ce: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7749d1: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 7749d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7749d5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7749d8: mov ecx, esp */
  ecx = esp;
/* 7749da: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7749dd: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7749e0: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7749e3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7749e5: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 7749e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7749eb: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7749ee: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7749f1: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7749f4: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7749f7: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7749fa: mov eax, esp */
  eax = esp;
/* 7749fc: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7749ff: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 774a02: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 774a05: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 774a08: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 774a0b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 774a0d: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 774a10: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 774a13: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 774a16: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 774a1c: call 0x6cc74d */
  esp -= 4; W32(esp, 0x774a21u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 774a21: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 774a22: jmp 0x774950 */
  goto L_774950;
L_774a27: /* 774a27: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 774a2d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 774a31: call 0x6cadcb */
  esp -= 4; W32(esp, 0x774a36u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 774a36: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 774a39: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 774a3a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 774a3b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 774a42: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 774a43: mov esp, ebp */
  esp = ebp;
/* 774a45: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 774a46: ret 8 */
  esp += 12; SPILL(); return;
}

void f_774a49(void) {
  LOAD_REGS();
L_774a49: /* 774a49: mov edx, dword ptr [ebp - 0x224] */
  edx = R32((uint32_t)(ebp + 0xfffffddcu));
/* 774a4f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 774a54: lea eax, [ebp - 0x1ac] */
  eax = (uint32_t)(ebp + 0xfffffe54u);
/* 774a5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 774a5b: mov dword ptr [ebp - 0x1ac], edx */
  W32((uint32_t)(ebp + 0xfffffe54u), edx);
/* 774a61: call 0x99caf8 */
  esp -= 4; W32(esp, 0x774a66u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_774a66(); return;
}

void f_774a66(void) {
  LOAD_REGS();
L_774a66: /* 774a66: push 0xa07fb0 */
  { uint32_t v = 0xa07fb0u; esp -= 4; W32(esp, v); }
/* 774a6b: push 0xac4740 */
  { uint32_t v = 0xac4740u; esp -= 4; W32(esp, v); }
/* 774a70: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x774a76u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 774a76: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 774a79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 774a7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 774a7d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x774a82u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_774a82: guest_badaddr(0x774a82); return;
}

void f_775120(void) {
  LOAD_REGS();
L_775120: /* 775120: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 775123: xor eax, eax */
  eax = 0;
/* 775125: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 775127: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 77512f: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 775134: cmp ax, 1 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x1u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 775138: jne 0x77514a */
  if (!zf) goto L_77514a;
L_77513a: /* 77513a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77513b: call 0x92d570 */
  esp -= 4; W32(esp, 0x775140u); SPILL(); f_92d570(); if (g_unwind) return; RELOAD();
/* 775140: fmul dword ptr [0xa07fec] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fecu)));
/* 775146: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 775149: ret  */
  esp += 4; SPILL(); return;
L_77514a: /* 77514a: cmp ax, 2 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 77514e: jne 0x7751d8 */
  if (!zf) goto L_7751d8;
L_775154: /* 775154: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 775158: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 775159: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 77515d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77515e: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 775162: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 775163: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 775164: call 0x92de40 */
  esp -= 4; W32(esp, 0x775169u); SPILL(); f_92de40(); if (g_unwind) return; RELOAD();
/* 775169: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 77516d: fcomp dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
  FPOP();
/* 775171: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 775173: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 775176: jp 0x77517e */
  if (pf) goto L_77517e;
L_775178: /* 775178: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 77517c: jmp 0x775182 */
  goto L_775182;
L_77517e: /* 77517e: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
L_775182: /* 775182: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 775186: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 775188: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 77518b: jp 0x7751c4 */
  if (pf) goto L_7751c4;
L_77518d: /* 77518d: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 775191: fcomp dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
  FPOP();
/* 775195: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 775197: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 77519a: jp 0x7751b0 */
  if (pf) goto L_7751b0;
L_77519c: /* 77519c: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 7751a0: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7751a6: fmul dword ptr [0xa07fec] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fecu)));
/* 7751ac: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7751af: ret  */
  esp += 4; SPILL(); return;
L_7751b0: /* 7751b0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 7751b4: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7751ba: fmul dword ptr [0xa07fec] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fecu)));
/* 7751c0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7751c3: ret  */
  esp += 4; SPILL(); return;
L_7751c4: /* 7751c4: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 7751c8: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7751ce: fmul dword ptr [0xa07fec] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fecu)));
/* 7751d4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7751d7: ret  */
  esp += 4; SPILL(); return;
L_7751d8: /* 7751d8: cmp ax, 4 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x4u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7751dc: jne 0x77520b */
  if (!zf) goto L_77520b;
L_7751de: /* 7751de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7751df: call 0x92e600 */
  esp -= 4; W32(esp, 0x7751e4u); SPILL(); f_92e600(); if (g_unwind) return; RELOAD();
/* 7751e4: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 7751e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7751e9: call 0x92e620 */
  esp -= 4; W32(esp, 0x7751eeu); SPILL(); f_92e620(); if (g_unwind) return; RELOAD();
/* 7751ee: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 7751f2: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7751f4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7751f6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7751f9: jp 0x775201 */
  if (pf) goto L_775201;
L_7751fb: /* 7751fb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7751fd: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_775201: /* 775201: fmul dword ptr [0xa07fec] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fecu)));
/* 775207: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77520a: ret  */
  esp += 4; SPILL(); return;
L_77520b: /* 77520b: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 77520f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 775212: ret  */
  esp += 4; SPILL(); return;
}

void f_775260(void) {
  LOAD_REGS();
L_775260: /* 775260: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 775261: mov ebp, esp */
  ebp = esp;
/* 775263: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 775265: push 0x9cc350 */
  { uint32_t v = 0x9cc350u; esp -= 4; W32(esp, v); }
/* 77526a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 775270: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 775271: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 775278: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77527b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77527c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77527d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77527e: xor esi, esi */
  esi = 0;
/* 775280: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 775283: mov ebx, ecx */
  ebx = ecx;
/* 775285: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
L_775288: /* 775288: cmp esi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77528b: jge 0x775303 */
  if ((sf == of)) goto L_775303;
L_77528d: /* 77528d: mov eax, dword ptr [ebx + esi*4] */
  eax = R32((uint32_t)(ebx + esi*4));
/* 775290: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 775291: call 0x6cafbf */
  esp -= 4; W32(esp, 0x775296u); SPILL(); f_6cafbf(); if (g_unwind) return; RELOAD();
/* 775296: mov edi, eax */
  edi = eax;
/* 775298: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77529a: jne 0x7752b4 */
  if (!zf) goto L_7752b4;
L_77529c: /* 77529c: push 0x226 */
  { uint32_t v = 0x226u; esp -= 4; W32(esp, v); }
/* 7752a1: push 0xac497c */
  { uint32_t v = 0xac497cu; esp -= 4; W32(esp, v); }
/* 7752a6: push 0xac498c */
  { uint32_t v = 0xac498cu; esp -= 4; W32(esp, v); }
/* 7752ab: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7752b1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7752b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7752b4: /* 7752b4: cmp byte ptr [edi + 0x50], 0xe */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x50u))); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7752b8: jne 0x7752d0 */
  if (!zf) goto L_7752d0;
L_7752ba: /* 7752ba: mov eax, 1 */
  eax = 0x1u;
/* 7752bf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7752c2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7752c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7752ca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7752cb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7752cc: mov esp, ebp */
  esp = ebp;
/* 7752ce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7752cf: ret  */
  esp += 4; SPILL(); return;
L_7752d0: /* 7752d0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7752d1: jmp 0x775288 */
  goto L_775288;
L_775303: /* 775303: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 775306: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 775307: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 775308: xor eax, eax */
  eax = 0;
/* 77530a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 775311: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 775312: mov esp, ebp */
  esp = ebp;
/* 775314: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 775315: ret  */
  esp += 4; SPILL(); return;
}

void f_7752d3(void) {
  LOAD_REGS();
L_7752d3: /* 7752d3: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7752d6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7752db: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7752de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7752df: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7752e2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7752e7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7752e7(); return;
}

void f_7752e7(void) {
  LOAD_REGS();
L_7752e7: /* 7752e7: push 0xa07ff0 */
  { uint32_t v = 0xa07ff0u; esp -= 4; W32(esp, v); }
/* 7752ec: push 0xac4994 */
  { uint32_t v = 0xac4994u; esp -= 4; W32(esp, v); }
/* 7752f1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7752f7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7752f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7752fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7752fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7752fe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x775303u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 775303: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 775306: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 775307: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 775308: xor eax, eax */
  eax = 0;
/* 77530a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 775311: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 775312: mov esp, ebp */
  esp = ebp;
/* 775314: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 775315: ret  */
  esp += 4; SPILL(); return;
}

void f_775350(void) {
  LOAD_REGS();
L_775350: /* 775350: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 775351: mov ebp, esp */
  ebp = esp;
/* 775353: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 775355: push 0x9cc360 */
  { uint32_t v = 0x9cc360u; esp -= 4; W32(esp, v); }
/* 77535a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 775360: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 775361: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 775368: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77536b: mov eax, dword ptr [0xb1e3a0] */
  eax = R32((uint32_t)(0xb1e3a0u));
/* 775370: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 775371: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 775372: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 775373: xor edi, edi */
  edi = 0;
/* 775375: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 775376: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 775379: mov ebx, ecx */
  ebx = ecx;
/* 77537b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 77537e: mov dword ptr [0xb1e3a0], eax */
  W32((uint32_t)(0xb1e3a0u), eax);
L_775383: /* 775383: cmp edi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 775386: jge 0x775403 */
  if ((sf == of)) goto L_775403;
L_775388: /* 775388: mov eax, dword ptr [ebx + edi*4] */
  eax = R32((uint32_t)(ebx + edi*4));
/* 77538b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77538c: call 0x6cafbf */
  esp -= 4; W32(esp, 0x775391u); SPILL(); f_6cafbf(); if (g_unwind) return; RELOAD();
/* 775391: mov esi, eax */
  esi = eax;
/* 775393: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 775395: jne 0x7753af */
  if (!zf) goto L_7753af;
L_775397: /* 775397: push 0x23f */
  { uint32_t v = 0x23fu; esp -= 4; W32(esp, v); }
/* 77539c: push 0xac499c */
  { uint32_t v = 0xac499cu; esp -= 4; W32(esp, v); }
/* 7753a1: push 0xac49ac */
  { uint32_t v = 0xac49acu; esp -= 4; W32(esp, v); }
/* 7753a6: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7753acu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7753ac: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7753af: /* 7753af: mov eax, dword ptr [0xb1e3a0] */
  eax = R32((uint32_t)(0xb1e3a0u));
/* 7753b4: cmp dword ptr [esi + 0x310], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x310u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7753ba: je 0x7753d0 */
  if (zf) goto L_7753d0;
L_7753bc: /* 7753bc: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7753bf: mov dword ptr [esi + 0x310], eax */
  W32((uint32_t)(esi + 0x310u), eax);
/* 7753c5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7753c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7753c8: mov ecx, esi */
  ecx = esi;
/* 7753ca: call dword ptr [eax + 0x144] */
  { uint32_t t = R32((uint32_t)(eax + 0x144u)); esp -= 4; W32(esp, 0x7753d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7753d0: /* 7753d0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7753d1: jmp 0x775383 */
  goto L_775383;
L_775403: /* 775403: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 775406: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 775407: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 775408: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77540f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 775410: mov esp, ebp */
  esp = ebp;
/* 775412: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 775413: ret  */
  esp += 4; SPILL(); return;
}

void f_7753d3(void) {
  LOAD_REGS();
L_7753d3: /* 7753d3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7753d6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7753db: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7753de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7753df: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7753e2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7753e7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7753e7(); return;
}

void f_7753e7(void) {
  LOAD_REGS();
L_7753e7: /* 7753e7: push 0xa0802c */
  { uint32_t v = 0xa0802cu; esp -= 4; W32(esp, v); }
/* 7753ec: push 0xac49b4 */
  { uint32_t v = 0xac49b4u; esp -= 4; W32(esp, v); }
/* 7753f1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7753f7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7753f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7753fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7753fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7753fe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x775403u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 775403: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 775406: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 775407: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 775408: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77540f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 775410: mov esp, ebp */
  esp = ebp;
/* 775412: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 775413: ret  */
  esp += 4; SPILL(); return;
}

void f_775460(void) {
  LOAD_REGS();
L_775460: /* 775460: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 775461: mov ebp, esp */
  ebp = esp;
/* 775463: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 775465: push 0x9cc370 */
  { uint32_t v = 0x9cc370u; esp -= 4; W32(esp, v); }
/* 77546a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 775470: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 775471: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 775478: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77547b: mov eax, dword ptr [0xb1e3a0] */
  eax = R32((uint32_t)(0xb1e3a0u));
/* 775480: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 775481: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 775484: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 775485: xor esi, esi */
  esi = 0;
/* 775487: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 775488: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 775489: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77548c: mov edi, ecx */
  edi = ecx;
/* 77548e: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 775491: mov dword ptr [0xb1e3a0], eax */
  W32((uint32_t)(0xb1e3a0u), eax);
L_775496: /* 775496: cmp esi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 775499: jge 0x7754fa */
  if ((sf == of)) goto L_7754fa;
L_77549b: /* 77549b: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 77549e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77549f: call 0x90bdb0 */
  esp -= 4; W32(esp, 0x7754a4u); SPILL(); f_90bdb0(); if (g_unwind) return; RELOAD();
/* 7754a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7754a6: je 0x7754c7 */
  if (zf) goto L_7754c7;
L_7754a8: /* 7754a8: mov ecx, dword ptr [0xb1e3a0] */
  ecx = R32((uint32_t)(0xb1e3a0u));
/* 7754ae: cmp dword ptr [eax + 0x310], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x310u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7754b4: je 0x7754c7 */
  if (zf) goto L_7754c7;
L_7754b6: /* 7754b6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7754b8: mov dword ptr [eax + 0x310], ecx */
  W32((uint32_t)(eax + 0x310u), ecx);
/* 7754be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7754bf: mov ecx, eax */
  ecx = eax;
/* 7754c1: call dword ptr [edx + 0x144] */
  { uint32_t t = R32((uint32_t)(edx + 0x144u)); esp -= 4; W32(esp, 0x7754c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7754c7: /* 7754c7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7754c8: jmp 0x775496 */
  goto L_775496;
L_7754fa: /* 7754fa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7754fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7754fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7754ff: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 775506: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 775507: mov esp, ebp */
  esp = ebp;
/* 775509: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77550a: ret  */
  esp += 4; SPILL(); return;
}

void f_7754ca(void) {
  LOAD_REGS();
L_7754ca: /* 7754ca: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7754cd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7754d2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7754d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7754d6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7754d9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7754deu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7754de(); return;
}

void f_7754de(void) {
  LOAD_REGS();
L_7754de: /* 7754de: push 0xa08054 */
  { uint32_t v = 0xa08054u; esp -= 4; W32(esp, v); }
/* 7754e3: push 0xac49bc */
  { uint32_t v = 0xac49bcu; esp -= 4; W32(esp, v); }
/* 7754e8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7754eeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7754ee: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7754f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7754f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7754f5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7754fau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7754fa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7754fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7754fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7754ff: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 775506: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 775507: mov esp, ebp */
  esp = ebp;
/* 775509: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77550a: ret  */
  esp += 4; SPILL(); return;
}

void f_775540(void) {
  LOAD_REGS();
L_775540: /* 775540: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 775542: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 775544: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 775547: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 77554a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 77554d: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 775550: ret  */
  esp += 4; SPILL(); return;
}

void f_775570(void) {
  LOAD_REGS();
L_775570: /* 775570: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 775574: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 775578: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 77557a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 77557e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 775581: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 775584: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7755a0(void) {
  LOAD_REGS();
L_7755a0: /* 7755a0: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7755a3: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 7755a6: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7755a9: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 7755ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7755ae: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7755b0: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7755b2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7755b4: ret  */
  esp += 4; SPILL(); return;
}

void f_7755d0(void) {
  LOAD_REGS();
L_7755d0: /* 7755d0: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7755d3: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7755d5: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7755d8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7755da: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7755dc: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 7755de: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 7755e0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7755e2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7755e4: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7755e6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7755e8: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 7755ea: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7755ec: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7755ee: ret  */
  esp += 4; SPILL(); return;
}

void f_775600(void) {
  LOAD_REGS();
L_775600: /* 775600: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 775604: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 775606: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 775608: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 77560c: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 77560f: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 775612: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 775616: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 775619: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 77561c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_775630(void) {
  LOAD_REGS();
L_775630: /* 775630: xor ecx, ecx */
  ecx = 0;
/* 775632: mov edx, 0x3f800000 */
  edx = 0x3f800000u;
/* 775637: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 775639: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 77563c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 77563f: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 775642: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 775645: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 775648: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 77564b: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 77564e: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 775651: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 775654: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 775657: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 77565a: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 77565d: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 775660: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 775663: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 775666: ret  */
  esp += 4; SPILL(); return;
}

void f_775680(void) {
  LOAD_REGS();
L_775680: /* 775680: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 775683: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 775686: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 775689: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 77568c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77568e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 775690: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 775692: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 775694: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 775697: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 775699: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 77569c: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 77569f: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7756a2: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 7756a4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7756a6: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 7756a9: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 7756ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7756ae: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 7756b1: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 7756b4: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 7756b7: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 7756ba: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7756bd: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 7756bf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7756c1: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 7756c4: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 7756c7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7756c9: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 7756cc: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 7756cf: ret  */
  esp += 4; SPILL(); return;
}

void f_7756f0(void) {
  LOAD_REGS();
L_7756f0: /* 7756f0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7756f2: mov dword ptr [ecx + 0x30], edx */
  W32((uint32_t)(ecx + 0x30u), edx);
/* 7756f5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7756f8: mov dword ptr [ecx + 0x34], edx */
  W32((uint32_t)(ecx + 0x34u), edx);
/* 7756fb: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7756fe: mov dword ptr [ecx + 0x38], eax */
  W32((uint32_t)(ecx + 0x38u), eax);
/* 775701: ret  */
  esp += 4; SPILL(); return;
}

void f_775720(void) {
  LOAD_REGS();
L_775720: /* 775720: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 775722: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 775724: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 775727: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 77572a: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 77572d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 775730: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 775733: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 775736: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 775739: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 77573c: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 77573f: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 775742: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 775745: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 775748: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 77574b: mov dword ptr [ecx + 0x1c], edx */
  W32((uint32_t)(ecx + 0x1cu), edx);
/* 77574e: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 775751: mov dword ptr [ecx + 0x20], edx */
  W32((uint32_t)(ecx + 0x20u), edx);
/* 775754: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 775757: mov dword ptr [ecx + 0x24], edx */
  W32((uint32_t)(ecx + 0x24u), edx);
/* 77575a: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 77575d: mov dword ptr [ecx + 0x28], edx */
  W32((uint32_t)(ecx + 0x28u), edx);
/* 775760: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 775763: mov dword ptr [ecx + 0x2c], edx */
  W32((uint32_t)(ecx + 0x2cu), edx);
/* 775766: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 775769: mov dword ptr [ecx + 0x30], edx */
  W32((uint32_t)(ecx + 0x30u), edx);
/* 77576c: mov edx, dword ptr [eax + 0x34] */
  edx = R32((uint32_t)(eax + 0x34u));
/* 77576f: mov dword ptr [ecx + 0x34], edx */
  W32((uint32_t)(ecx + 0x34u), edx);
/* 775772: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 775775: mov dword ptr [ecx + 0x38], edx */
  W32((uint32_t)(ecx + 0x38u), edx);
/* 775778: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 77577b: mov dword ptr [ecx + 0x3c], eax */
  W32((uint32_t)(ecx + 0x3cu), eax);
/* 77577e: ret  */
  esp += 4; SPILL(); return;
}

void f_7757a0(void) {
  LOAD_REGS();
L_7757a0: /* 7757a0: mov eax, ecx */
  eax = ecx;
/* 7757a2: ret  */
  esp += 4; SPILL(); return;
}

void f_7757c0(void) {
  LOAD_REGS();
L_7757c0: /* 7757c0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 7757c4: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 7757c8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7757ca: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7757cd: jp 0x7757d4 */
  if (pf) goto L_7757d4;
L_7757cf: /* 7757cf: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 7757d3: ret  */
  esp += 4; SPILL(); return;
L_7757d4: /* 7757d4: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 7757d8: ret  */
  esp += 4; SPILL(); return;
}

void f_7757f0(void) {
  LOAD_REGS();
L_7757f0: /* 7757f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7757f1: mov ebp, esp */
  ebp = esp;
/* 7757f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7757f5: push 0x9cc380 */
  { uint32_t v = 0x9cc380u; esp -= 4; W32(esp, v); }
/* 7757fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 775800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 775801: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 775808: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77580b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77580e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77580f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 775810: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 775811: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 775814: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 775815: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77581c: call 0x6cafbf */
  esp -= 4; W32(esp, 0x775821u); SPILL(); f_6cafbf(); if (g_unwind) return; RELOAD();
/* 775821: mov esi, eax */
  esi = eax;
/* 775823: mov eax, dword ptr [esi + 0x30c] */
  eax = R32((uint32_t)(esi + 0x30cu));
/* 775829: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77582b: jne 0x775842 */
  if (!zf) goto L_775842;
L_77582d: /* 77582d: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* 77582f: push 0xac4770 */
  { uint32_t v = 0xac4770u; esp -= 4; W32(esp, v); }
/* 775834: push 0xac4780 */
  { uint32_t v = 0xac4780u; esp -= 4; W32(esp, v); }
/* 775839: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x77583fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 77583f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_775842: /* 775842: mov ecx, dword ptr [esi + 0x30c] */
  ecx = R32((uint32_t)(esi + 0x30cu));
/* 775848: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 77584d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x775853u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 775853: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 775855: jne 0x77586c */
  if (!zf) goto L_77586c;
L_775857: /* 775857: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 775859: push 0xac4790 */
  { uint32_t v = 0xac4790u; esp -= 4; W32(esp, v); }
/* 77585e: push 0xac47a0 */
  { uint32_t v = 0xac47a0u; esp -= 4; W32(esp, v); }
/* 775863: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x775869u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 775869: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77586c: /* 77586c: mov ecx, dword ptr [esi + 0x30c] */
  ecx = R32((uint32_t)(esi + 0x30cu));
/* 775872: mov eax, dword ptr [ecx + 0x90] */
  eax = R32((uint32_t)(ecx + 0x90u));
/* 775878: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77587b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77587c: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 77587f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 775880: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 775883: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77588a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77588b: mov esp, ebp */
  esp = ebp;
/* 77588d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77588e: ret  */
  esp += 4; SPILL(); return;
}

void f_77588f(void) {
  LOAD_REGS();
L_77588f: /* 77588f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 775892: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 775897: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 77589a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77589b: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 77589e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7758a3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7758a3(); return;
}

void f_7758a3(void) {
  LOAD_REGS();
L_7758a3: /* 7758a3: push 0xa08088 */
  { uint32_t v = 0xa08088u; esp -= 4; W32(esp, v); }
/* 7758a8: push 0xac47d4 */
  { uint32_t v = 0xac47d4u; esp -= 4; W32(esp, v); }
/* 7758ad: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7758b3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7758b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7758b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7758b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7758ba: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7758bfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7758bf: guest_badaddr(0x7758bf); return;
}

void f_775900(void) {
  LOAD_REGS();
L_775900: /* 775900: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 775901: mov ebp, dword ptr [esp + 8] */
  ebp = R32((uint32_t)(esp + 0x8u));
/* 775905: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 775906: mov esi, eax */
  esi = eax;
/* 775908: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77590a: je 0x775939 */
  if (zf) goto L_775939;
L_77590c: /* 77590c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_775910: /* 775910: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 775913: test byte ptr [eax + 0x1ec], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1ecu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77591a: jne 0x775929 */
  if (!zf) goto L_775929;
L_77591c: /* 77591c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77591d: call 0x7757f0 */
  esp -= 4; W32(esp, 0x775922u); SPILL(); f_7757f0(); if (g_unwind) return; RELOAD();
/* 775922: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 775925: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 775927: je 0x77593e */
  if (zf) goto L_77593e;
L_775929: /* 775929: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77592a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77592b: call 0x972770 */
  esp -= 4; W32(esp, 0x775930u); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 775930: mov esi, eax */
  esi = eax;
/* 775932: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 775935: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 775937: jne 0x775910 */
  if (!zf) goto L_775910;
L_775939: /* 775939: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77593a: xor eax, eax */
  eax = 0;
/* 77593c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77593d: ret  */
  esp += 4; SPILL(); return;
L_77593e: /* 77593e: mov eax, esi */
  eax = esi;
/* 775940: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 775941: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 775942: ret  */
  esp += 4; SPILL(); return;
}

void f_775970(void) {
  LOAD_REGS();
L_775970: /* 775970: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 775971: mov ebp, esp */
  ebp = esp;
/* 775973: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 775975: push 0x9cc390 */
  { uint32_t v = 0x9cc390u; esp -= 4; W32(esp, v); }
/* 77597a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 775980: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 775981: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 775988: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77598b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77598c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77598d: mov esi, ecx */
  esi = ecx;
/* 77598f: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 775992: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 775995: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 775998: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 775999: xor ebx, ebx */
  ebx = 0;
/* 77599b: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 77599e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7759a1: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7759a4: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7759a9u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7759a9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7759ac: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 7759af: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7759b2: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7759b5: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7759b8: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* 7759bb: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 7759be: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7759c3u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7759c3: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7759c6: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7759c9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7759cc: mov dword ptr [ebp - 0x34], esp */
  W32((uint32_t)(ebp + 0xffffffccu), esp);
/* 7759cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7759d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7759d1: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 7759d4: mov dword ptr [esi + 0x2c], ebx */
  W32((uint32_t)(esi + 0x2cu), ebx);
/* 7759d7: mov dword ptr [esi + 0x20], ebx */
  W32((uint32_t)(esi + 0x20u), ebx);
/* 7759da: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 7759dd: mov dword ptr [esi + 0x38], ebx */
  W32((uint32_t)(esi + 0x38u), ebx);
/* 7759e0: mov dword ptr [esi + 0x3c], ebx */
  W32((uint32_t)(esi + 0x3cu), ebx);
/* 7759e3: mov dword ptr [esi + 0x34], ebx */
  W32((uint32_t)(esi + 0x34u), ebx);
/* 7759e6: call 0x972710 */
  esp -= 4; W32(esp, 0x7759ebu); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 7759eb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7759ee: call 0x775900 */
  esp -= 4; W32(esp, 0x7759f3u); SPILL(); f_775900(); if (g_unwind) return; RELOAD();
/* 7759f3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7759f6: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7759f9: jmp 0x775a00 */
  goto L_775a00;
L_7759fb: /* 7759fb: xor ebx, ebx */
  ebx = 0;
/* 7759fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_775a00: /* 775a00: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 775a03: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 775a05: je 0x775d55 */
  if (zf) goto L_775d55;
L_775a0b: /* 775a0b: mov edi, dword ptr [eax + 0x14] */
  edi = R32((uint32_t)(eax + 0x14u));
/* 775a0e: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 775a11: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 775a14: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 775a17: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 775a1a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 775a1d: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 775a20: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 775a23: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 775a26: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 775a29: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 775a2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 775a2d: call 0x910080 */
  esp -= 4; W32(esp, 0x775a32u); SPILL(); f_910080(); if (g_unwind) return; RELOAD();
/* 775a32: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 775a35: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 775a38: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 775a3b: mov dword ptr [eax + edx*4], ecx */
  W32((uint32_t)(eax + edx*4), ecx);
/* 775a3e: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 775a41: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 775a44: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 775a47: mov dword ptr [eax + edx*4], ecx */
  W32((uint32_t)(eax + edx*4), ecx);
/* 775a4a: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 775a4d: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 775a50: mov ebx, dword ptr [eax + edx*4] */
  ebx = R32((uint32_t)(eax + edx*4));
/* 775a53: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 775a56: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 775a59: mov dword ptr [ecx + ebx*4], edi */
  W32((uint32_t)(ecx + ebx*4), edi);
/* 775a5c: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 775a5f: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 775a62: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 775a63: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 775a66: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 775a69: lea edx, [ebx + 1] */
  edx = (uint32_t)(ebx + 0x1u);
/* 775a6c: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 775a6f: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 775a72: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 775a75: mov dword ptr [edi + 0x1e8], ecx */
  W32((uint32_t)(edi + 0x1e8u), ecx);
/* 775a7b: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 775a7e: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 775a81: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 775a84: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 775a87: mov edx, dword ptr [eax + edx] */
  edx = R32((uint32_t)(eax + edx));
/* 775a8a: add edx, dword ptr [eax + ecx] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + ecx)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 775a8d: mov dword ptr [edi + 0x1e4], edx */
  W32((uint32_t)(edi + 0x1e4u), edx);
/* 775a93: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 775a96: mov dword ptr [edi + 0x1e0], eax */
  W32((uint32_t)(edi + 0x1e0u), eax);
/* 775a9c: or dword ptr [edi + 0x1ec], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x1ecu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi + 0x1ecu), r);
  }
/* 775aa3: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 775aa6: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 775aa9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 775aaa: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 775aad: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 775ab0: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 775ab3: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
L_775ab5: /* 775ab5: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 775ab8: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 775abb: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 775abe: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 775ac1: mov ecx, dword ptr [ecx + eax] */
  ecx = R32((uint32_t)(ecx + eax));
/* 775ac4: add ecx, dword ptr [edx + eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + eax)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 775ac7: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 775ac9: jge 0x775c89 */
  if ((sf == of)) goto L_775c89;
L_775acf: /* 775acf: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 775ad2: mov edi, dword ptr [edx + ebx*4] */
  edi = R32((uint32_t)(edx + ebx*4));
/* 775ad5: lea eax, [edi + 0x1fc] */
  eax = (uint32_t)(edi + 0x1fcu);
/* 775adb: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 775adc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 775add: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 775ae0: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 775ae3: call 0x972710 */
  esp -= 4; W32(esp, 0x775ae8u); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 775ae8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 775aeb: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 775aee: mov edi, edi */
  edi = edi;
L_775af0: /* 775af0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 775af2: je 0x775c61 */
  if (zf) goto L_775c61;
L_775af8: /* 775af8: mov ebx, dword ptr [eax + 0x14] */
  ebx = R32((uint32_t)(eax + 0x14u));
/* 775afb: test byte ptr [ebx + 0x5c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x5cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 775aff: jne 0x775c46 */
  if (!zf) goto L_775c46;
L_775b05: /* 775b05: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 775b08: cmp eax, dword ptr [esi + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 775b0b: jl 0x775b1c */
  if ((sf != of)) goto L_775b1c;
L_775b0d: /* 775b0d: push 0xac47dc */
  { uint32_t v = 0xac47dcu; esp -= 4; W32(esp, v); }
/* 775b12: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 775b14: call 0x971e40 */
  esp -= 4; W32(esp, 0x775b19u); SPILL(); f_971e40(); if (g_unwind) return; RELOAD();
/* 775b19: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_775b1c: /* 775b1c: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 775b1f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 775b21: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 775b24: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 775b27: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 775b2a: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 775b2d: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 775b30: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 775b31: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 775b32: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 775b35: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 775b38: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 775b3b: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 775b3e: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 775b41: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 775b44: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 775b45: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 775b47: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 775b4a: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 775b4d: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 775b50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 775b51: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 775b54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 775b55: call 0x9100a0 */
  esp -= 4; W32(esp, 0x775b5au); SPILL(); f_9100a0(); if (g_unwind) return; RELOAD();
/* 775b5a: or dword ptr [ebx + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx + 0x5cu), r);
  }
/* 775b5e: xor eax, eax */
  eax = 0;
L_775b60: /* 775b60: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 775b63: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 775b66: jge 0x775c43 */
  if ((sf == of)) goto L_775c43;
L_775b6c: /* 775b6c: mov edi, dword ptr [ebx + eax*4 + 0x54] */
  edi = R32((uint32_t)(ebx + eax*4 + 0x54u));
/* 775b70: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 775b72: je 0x775c37 */
  if (zf) goto L_775c37;
L_775b78: /* 775b78: cmp dword ptr [edi], 0x64 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 775b7b: je 0x775b8c */
  if (zf) goto L_775b8c;
L_775b7d: /* 775b7d: push 0xac4810 */
  { uint32_t v = 0xac4810u; esp -= 4; W32(esp, v); }
/* 775b82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 775b84: call 0x971e40 */
  esp -= 4; W32(esp, 0x775b89u); SPILL(); f_971e40(); if (g_unwind) return; RELOAD();
/* 775b89: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_775b8c: /* 775b8c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 775b8d: call 0x7757f0 */
  esp -= 4; W32(esp, 0x775b92u); SPILL(); f_7757f0(); if (g_unwind) return; RELOAD();
/* 775b92: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 775b95: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 775b98: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 775b9a: je 0x775bab */
  if (zf) goto L_775bab;
L_775b9c: /* 775b9c: push 0xac4858 */
  { uint32_t v = 0xac4858u; esp -= 4; W32(esp, v); }
/* 775ba1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 775ba3: call 0x971e40 */
  esp -= 4; W32(esp, 0x775ba8u); SPILL(); f_971e40(); if (g_unwind) return; RELOAD();
/* 775ba8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_775bab: /* 775bab: cmp edi, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 775bae: je 0x775c37 */
  if (zf) goto L_775c37;
L_775bb4: /* 775bb4: test byte ptr [edi + 0x1ec], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x1ecu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 775bbb: jne 0x775c37 */
  if (!zf) goto L_775c37;
L_775bbd: /* 775bbd: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 775bc0: cmp ecx, dword ptr [esi + 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 775bc3: jl 0x775bd4 */
  if ((sf != of)) goto L_775bd4;
L_775bc5: /* 775bc5: push 0xac48ac */
  { uint32_t v = 0xac48acu; esp -= 4; W32(esp, v); }
/* 775bca: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 775bcc: call 0x971e40 */
  esp -= 4; W32(esp, 0x775bd1u); SPILL(); f_971e40(); if (g_unwind) return; RELOAD();
/* 775bd1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_775bd4: /* 775bd4: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 775bd7: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 775bda: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 775bdd: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 775be0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 775be1: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 775be4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 775be7: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 775bea: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 775bed: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 775bee: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 775bf1: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 775bf4: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 775bf7: mov dword ptr [edi + 0x1e8], ecx */
  W32((uint32_t)(edi + 0x1e8u), ecx);
/* 775bfd: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 775c00: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 775c03: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 775c06: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 775c09: mov edx, dword ptr [edx + eax] */
  edx = R32((uint32_t)(edx + eax));
/* 775c0c: add edx, dword ptr [eax + ecx] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + ecx)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 775c0f: mov dword ptr [edi + 0x1e4], edx */
  W32((uint32_t)(edi + 0x1e4u), edx);
/* 775c15: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 775c18: mov dword ptr [edi + 0x1e0], eax */
  W32((uint32_t)(edi + 0x1e0u), eax);
/* 775c1e: or dword ptr [edi + 0x1ec], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x1ecu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi + 0x1ecu), r);
  }
/* 775c25: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 775c28: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 775c2b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 775c2c: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 775c2f: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 775c32: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 775c35: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
L_775c37: /* 775c37: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 775c3a: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 775c3d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 775c3e: jmp 0x775b60 */
  goto L_775b60;
L_775c43: /* 775c43: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_775c46: /* 775c46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 775c47: lea eax, [edi + 0x1fc] */
  eax = (uint32_t)(edi + 0x1fcu);
/* 775c4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 775c4e: call 0x972770 */
  esp -= 4; W32(esp, 0x775c53u); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 775c53: mov ebx, dword ptr [ebp - 0x38] */
  ebx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 775c56: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 775c59: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 775c5c: jmp 0x775af0 */
  goto L_775af0;
L_775c61: /* 775c61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 775c62: call 0x90f170 */
  esp -= 4; W32(esp, 0x775c67u); SPILL(); f_90f170(); if (g_unwind) return; RELOAD();
/* 775c67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 775c69: jne 0x775c7d */
  if (!zf) goto L_775c7d;
L_775c6b: /* 775c6b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 775c6c: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x775c71u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 775c71: or dword ptr [edi + 0x1ec], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x1ecu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi + 0x1ecu), r);
  }
/* 775c78: jmp 0x775ab5 */
  goto L_775ab5;
L_775c7d: /* 775c7d: and dword ptr [edi + 0x1ec], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x1ecu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(edi + 0x1ecu), r);
  }
/* 775c84: jmp 0x775ab5 */
  goto L_775ab5;
L_775c89: /* 775c89: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 775c8c: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 775c8f: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 775c92: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 775c95: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 775c97: mov ecx, eax */
  ecx = eax;
/* 775c99: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 775c9f: jns 0x775ca6 */
  if (!sf) goto L_775ca6;
L_775ca1: /* 775ca1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 775ca2: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 775ca5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  ecx = r;
  }
L_775ca6: /* 775ca6: je 0x775cad */
  if (zf) goto L_775cad;
L_775ca8: /* 775ca8: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 775caa: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_775cad: /* 775cad: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 775caf: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 775cb2: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 775cb5: mov ebx, dword ptr [esi + 0x34] */
  ebx = R32((uint32_t)(esi + 0x34u));
/* 775cb8: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* 775cbb: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 775cbe: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 775cc1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 775cc3: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 775cc5: mov dword ptr [esi + 0x34], ebx */
  W32((uint32_t)(esi + 0x34u), ebx);
/* 775cc8: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 775ccb: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 775ccd: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 775cd0: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
/* 775cd3: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 775cd6: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 775cd8: cmp eax, dword ptr [esi + 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 775cdb: mov dword ptr [esi + 0x38], edx */
  W32((uint32_t)(esi + 0x38u), edx);
/* 775cde: jl 0x775cef */
  if ((sf != of)) goto L_775cef;
L_775ce0: /* 775ce0: push 0xac48dc */
  { uint32_t v = 0xac48dcu; esp -= 4; W32(esp, v); }
/* 775ce5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 775ce7: call 0x971e40 */
  esp -= 4; W32(esp, 0x775cecu); SPILL(); f_971e40(); if (g_unwind) return; RELOAD();
/* 775cec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_775cef: /* 775cef: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 775cf2: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 775cf5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 775cf6: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 775cf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_775d00: /* 775d00: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 775d02: je 0x775d36 */
  if (zf) goto L_775d36;
L_775d04: /* 775d04: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 775d07: test byte ptr [eax + 0x1ec], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1ecu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 775d0e: jne 0x775d25 */
  if (!zf) goto L_775d25;
L_775d10: /* 775d10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 775d11: call 0x7757f0 */
  esp -= 4; W32(esp, 0x775d16u); SPILL(); f_7757f0(); if (g_unwind) return; RELOAD();
/* 775d16: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 775d19: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 775d1c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 775d1e: jne 0x775d25 */
  if (!zf) goto L_775d25;
L_775d20: /* 775d20: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 775d23: jmp 0x775d3d */
  goto L_775d3d;
L_775d25: /* 775d25: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 775d28: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 775d29: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 775d2a: call 0x972770 */
  esp -= 4; W32(esp, 0x775d2fu); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 775d2f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 775d32: mov edi, eax */
  edi = eax;
/* 775d34: jmp 0x775d00 */
  goto L_775d00;
L_775d36: /* 775d36: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_775d3d: /* 775d3d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 775d40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 775d42: je 0x7759fb */
  if (zf) goto L_7759fb;
L_775d48: /* 775d48: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 775d4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 775d4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 775d4d: call dword ptr [ebp + 0xc] */
  { uint32_t t = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, 0x775d50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 775d50: jmp 0x7759fb */
  goto L_7759fb;
L_775d55: /* 775d55: xor ecx, ecx */
  ecx = 0;
/* 775d57: mov edx, 0xfffffffd */
  edx = 0xfffffffdu;
/* 775d5c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_775d60: /* 775d60: cmp ecx, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 775d63: jge 0x775d71 */
  if ((sf == of)) goto L_775d71;
L_775d65: /* 775d65: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 775d68: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 775d6b: and dword ptr [eax + 0x5c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x5cu), r);
  }
/* 775d6e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 775d6f: jmp 0x775d60 */
  goto L_775d60;
L_775d71: /* 775d71: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 775d74: jge 0x775db5 */
  if ((sf == of)) goto L_775db5;
L_775d76: /* 775d76: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 775d79: mov eax, dword ptr [ecx + ebx*4] */
  eax = R32((uint32_t)(ecx + ebx*4));
/* 775d7c: and dword ptr [eax + 0x1ec], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1ecu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x1ecu), r);
  }
/* 775d82: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 775d83: jmp 0x775d71 */
  goto L_775d71;
L_775db5: /* 775db5: lea esp, [ebp - 0x4c] */
  esp = (uint32_t)(ebp + 0xffffffb4u);
/* 775db8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 775dbb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 775dc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 775dc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 775dc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 775dc5: mov esp, ebp */
  esp = ebp;
/* 775dc7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 775dc8: ret  */
  esp += 4; SPILL(); return;
}

void f_775d85(void) {
  LOAD_REGS();
L_775d85: /* 775d85: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 775d88: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 775d8d: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 775d90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 775d91: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 775d94: call 0x99caf8 */
  esp -= 4; W32(esp, 0x775d99u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_775d99(); return;
}

void f_775d99(void) {
  LOAD_REGS();
L_775d99: /* 775d99: push 0xa080b4 */
  { uint32_t v = 0xa080b4u; esp -= 4; W32(esp, v); }
/* 775d9e: push 0xac490c */
  { uint32_t v = 0xac490cu; esp -= 4; W32(esp, v); }
/* 775da3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x775da9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 775da9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 775dac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 775dae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 775db0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x775db5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 775db5: lea esp, [ebp - 0x4c] */
  esp = (uint32_t)(ebp + 0xffffffb4u);
/* 775db8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 775dbb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 775dc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 775dc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 775dc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 775dc5: mov esp, ebp */
  esp = ebp;
/* 775dc7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 775dc8: ret  */
  esp += 4; SPILL(); return;
}

void f_775ef0(void) {
  LOAD_REGS();
L_775ef0: /* 775ef0: fld dword ptr [ecx + 0x94] */
  { double v = F32((uint32_t)(ecx + 0x94u)); FPUSH(v); }
/* 775ef6: fld dword ptr [ecx + 0x90] */
  { double v = F32((uint32_t)(ecx + 0x90u)); FPUSH(v); }
/* 775efc: fld dword ptr [ecx + 0x98] */
  { double v = F32((uint32_t)(ecx + 0x98u)); FPUSH(v); }
/* 775f02: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 775f04: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 775f06: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 775f08: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 775f0a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 775f0c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 775f0e: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 775f10: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 775f12: fcomp dword ptr [edx + 4] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x4u)));
  FPOP();
/* 775f15: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 775f17: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 775f19: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 775f1b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 775f1e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 775f20: je 0x775fdc */
  if (zf) goto L_775fdc;
L_775f26: /* 775f26: fld dword ptr [ecx + 0xa4] */
  { double v = F32((uint32_t)(ecx + 0xa4u)); FPUSH(v); }
/* 775f2c: fld dword ptr [ecx + 0xa0] */
  { double v = F32((uint32_t)(ecx + 0xa0u)); FPUSH(v); }
/* 775f32: fld dword ptr [ecx + 0xa8] */
  { double v = F32((uint32_t)(ecx + 0xa8u)); FPUSH(v); }
/* 775f38: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 775f3a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 775f3c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 775f3e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 775f40: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 775f42: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 775f44: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 775f46: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 775f48: fcomp dword ptr [edx + 8] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x8u)));
  FPOP();
/* 775f4b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 775f4d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 775f4f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 775f51: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 775f54: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 775f56: je 0x775fdc */
  if (zf) goto L_775fdc;
L_775f5c: /* 775f5c: fld dword ptr [ecx + 0xc4] */
  { double v = F32((uint32_t)(ecx + 0xc4u)); FPUSH(v); }
/* 775f62: fld dword ptr [ecx + 0xc0] */
  { double v = F32((uint32_t)(ecx + 0xc0u)); FPUSH(v); }
/* 775f68: fld dword ptr [ecx + 0xc8] */
  { double v = F32((uint32_t)(ecx + 0xc8u)); FPUSH(v); }
/* 775f6e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 775f70: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 775f72: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 775f74: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 775f76: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 775f78: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 775f7a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 775f7c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 775f7e: fcomp dword ptr [edx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(edx + 0xcu)));
  FPOP();
/* 775f81: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 775f83: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 775f85: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 775f87: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 775f8a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 775f8c: je 0x775fdc */
  if (zf) goto L_775fdc;
L_775f8e: /* 775f8e: fld dword ptr [ecx + 0xd4] */
  { double v = F32((uint32_t)(ecx + 0xd4u)); FPUSH(v); }
/* 775f94: fld dword ptr [ecx + 0xd0] */
  { double v = F32((uint32_t)(ecx + 0xd0u)); FPUSH(v); }
/* 775f9a: fld dword ptr [ecx + 0xd8] */
  { double v = F32((uint32_t)(ecx + 0xd8u)); FPUSH(v); }
/* 775fa0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 775fa2: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 775fa4: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 775fa6: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 775fa8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 775faa: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 775fac: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 775fae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 775fb0: fcomp dword ptr [edx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x10u)));
  FPOP();
/* 775fb3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 775fb5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 775fb7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 775fb9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 775fbc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 775fbe: je 0x775fdc */
  if (zf) goto L_775fdc;
L_775fc0: /* 775fc0: fld dword ptr [ecx + 0x230] */
  { double v = F32((uint32_t)(ecx + 0x230u)); FPUSH(v); }
/* 775fc6: fcomp dword ptr [edx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x14u)));
  FPOP();
/* 775fc9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 775fcb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 775fce: jp 0x775fd9 */
  if (pf) goto L_775fd9;
L_775fd0: /* 775fd0: test byte ptr [ecx + 0x1ec], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1ecu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 775fd7: je 0x775fdc */
  if (zf) goto L_775fdc;
L_775fd9: /* 775fd9: xor eax, eax */
  eax = 0;
/* 775fdb: ret  */
  esp += 4; SPILL(); return;
L_775fdc: /* 775fdc: mov eax, 1 */
  eax = 0x1u;
/* 775fe1: ret  */
  esp += 4; SPILL(); return;
}

void f_776030(void) {
  LOAD_REGS();
L_776030: /* 776030: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 776031: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 776035: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 776037: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 776038: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 776039: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77603a: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 77603e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77603f: mov edi, dword ptr [esi + 0x2c] */
  edi = R32((uint32_t)(esi + 0x2cu));
/* 776042: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 776043: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 776045: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 77604d: je 0x77613f */
  if (zf) goto L_77613f;
L_776053: /* 776053: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 776056: mov ebx, dword ptr [eax + edi*4] */
  ebx = R32((uint32_t)(eax + edi*4));
/* 776059: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 77605c: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 77605f: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 776061: mov ebp, ebx */
  ebp = ebx;
/* 776063: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 776065: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 776069: jge 0x7760b4 */
  if ((sf == of)) goto L_7760b4;
L_77606b: /* 77606b: jmp 0x776070 */
  goto L_776070;
L_776070: /* 776070: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 776074: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 776076: jne 0x77613f */
  if (!zf) goto L_77613f;
L_77607c: /* 77607c: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 77607f: mov ecx, dword ptr [ecx + ebp*4] */
  ecx = R32((uint32_t)(ecx + ebp*4));
/* 776082: call 0x775ef0 */
  esp -= 4; W32(esp, 0x776087u); SPILL(); f_775ef0(); if (g_unwind) return; RELOAD();
/* 776087: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 776089: je 0x776093 */
  if (zf) goto L_776093;
L_77608b: /* 77608b: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
L_776093: /* 776093: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 776096: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 776099: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 77609c: add eax, dword ptr [ecx + edi*4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + edi*4)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 77609f: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 7760a0: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7760a2: jl 0x776070 */
  if ((sf != of)) goto L_776070;
L_7760a4: /* 7760a4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7760a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7760aa: jne 0x77613f */
  if (!zf) goto L_77613f;
L_7760b0: /* 7760b0: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
L_7760b4: /* 7760b4: mov ebp, ebx */
  ebp = ebx;
/* 7760b6: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7760b8: jge 0x7760eb */
  if ((sf == of)) goto L_7760eb;
L_7760ba: /* 7760ba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7760c0: /* 7760c0: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 7760c3: mov ebx, dword ptr [ecx + ebp*4] */
  ebx = R32((uint32_t)(ecx + ebp*4));
/* 7760c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7760c7: call 0x90f080 */
  esp -= 4; W32(esp, 0x7760ccu); SPILL(); f_90f080(); if (g_unwind) return; RELOAD();
/* 7760cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7760cd: call 0x90f180 */
  esp -= 4; W32(esp, 0x7760d2u); SPILL(); f_90f180(); if (g_unwind) return; RELOAD();
/* 7760d2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7760d3: call 0x90f1b0 */
  esp -= 4; W32(esp, 0x7760d8u); SPILL(); f_90f1b0(); if (g_unwind) return; RELOAD();
/* 7760d8: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 7760db: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 7760de: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 7760e1: mov edx, dword ptr [eax + edi*4] */
  edx = R32((uint32_t)(eax + edi*4));
/* 7760e4: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 7760e5: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7760e7: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7760e9: jl 0x7760c0 */
  if ((sf != of)) goto L_7760c0;
L_7760eb: /* 7760eb: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 7760ee: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 7760f1: mov ebp, dword ptr [esi + 0x20] */
  ebp = R32((uint32_t)(esi + 0x20u));
/* 7760f4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7760f7: mov ebx, dword ptr [esi + 0xc] */
  ebx = R32((uint32_t)(esi + 0xcu));
/* 7760fa: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7760fb: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 7760fe: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 776101: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 776103: mov dword ptr [esi + 0x20], ebp */
  W32((uint32_t)(esi + 0x20u), ebp);
/* 776106: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 776109: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 77610c: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 77610e: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 776111: mov edi, dword ptr [esi + 0x34] */
  edi = R32((uint32_t)(esi + 0x34u));
/* 776114: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 776117: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 77611a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 77611c: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 77611e: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 776121: mov dword ptr [esi + 0x34], edi */
  W32((uint32_t)(esi + 0x34u), edi);
/* 776124: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 776127: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 776129: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 77612c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 77612f: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 776132: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 776133: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 776135: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 776138: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 776139: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77613a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77613b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 77613c: ret 8 */
  esp += 12; SPILL(); return;
L_77613f: /* 77613f: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 776142: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 776145: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 776148: cmp eax, dword ptr [edx + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77614b: jle 0x776154 */
  if ((zf || sf != of)) goto L_776154;
L_77614d: /* 77614d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77614e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77614f: call 0x9104f0 */
  esp -= 4; W32(esp, 0x776154u); SPILL(); f_9104f0(); if (g_unwind) return; RELOAD();
L_776154: /* 776154: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 776155: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 776156: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 776157: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 776158: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 776159: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77606d(void) {
  LOAD_REGS();
L_77606d: /* 77606d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_776070: /* 776070: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 776074: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 776076: jne 0x77613f */
  if (!zf) goto L_77613f;
L_77607c: /* 77607c: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 77607f: mov ecx, dword ptr [ecx + ebp*4] */
  ecx = R32((uint32_t)(ecx + ebp*4));
/* 776082: call 0x775ef0 */
  esp -= 4; W32(esp, 0x776087u); SPILL(); f_775ef0(); if (g_unwind) return; RELOAD();
/* 776087: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 776089: je 0x776093 */
  if (zf) goto L_776093;
L_77608b: /* 77608b: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
L_776093: /* 776093: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 776096: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 776099: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 77609c: add eax, dword ptr [ecx + edi*4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + edi*4)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 77609f: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 7760a0: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7760a2: jl 0x776070 */
  if ((sf != of)) goto L_776070;
L_7760a4: /* 7760a4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7760a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7760aa: jne 0x77613f */
  if (!zf) goto L_77613f;
L_7760b0: /* 7760b0: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7760b4: mov ebp, ebx */
  ebp = ebx;
/* 7760b6: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7760b8: jge 0x7760eb */
  if ((sf == of)) goto L_7760eb;
L_7760ba: /* 7760ba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7760c0: /* 7760c0: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 7760c3: mov ebx, dword ptr [ecx + ebp*4] */
  ebx = R32((uint32_t)(ecx + ebp*4));
/* 7760c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7760c7: call 0x90f080 */
  esp -= 4; W32(esp, 0x7760ccu); SPILL(); f_90f080(); if (g_unwind) return; RELOAD();
/* 7760cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7760cd: call 0x90f180 */
  esp -= 4; W32(esp, 0x7760d2u); SPILL(); f_90f180(); if (g_unwind) return; RELOAD();
/* 7760d2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7760d3: call 0x90f1b0 */
  esp -= 4; W32(esp, 0x7760d8u); SPILL(); f_90f1b0(); if (g_unwind) return; RELOAD();
/* 7760d8: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 7760db: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 7760de: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 7760e1: mov edx, dword ptr [eax + edi*4] */
  edx = R32((uint32_t)(eax + edi*4));
/* 7760e4: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 7760e5: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7760e7: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7760e9: jl 0x7760c0 */
  if ((sf != of)) goto L_7760c0;
L_7760eb: /* 7760eb: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 7760ee: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 7760f1: mov ebp, dword ptr [esi + 0x20] */
  ebp = R32((uint32_t)(esi + 0x20u));
/* 7760f4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7760f7: mov ebx, dword ptr [esi + 0xc] */
  ebx = R32((uint32_t)(esi + 0xcu));
/* 7760fa: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7760fb: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 7760fe: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 776101: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 776103: mov dword ptr [esi + 0x20], ebp */
  W32((uint32_t)(esi + 0x20u), ebp);
/* 776106: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 776109: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 77610c: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 77610e: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 776111: mov edi, dword ptr [esi + 0x34] */
  edi = R32((uint32_t)(esi + 0x34u));
/* 776114: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 776117: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 77611a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 77611c: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 77611e: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 776121: mov dword ptr [esi + 0x34], edi */
  W32((uint32_t)(esi + 0x34u), edi);
/* 776124: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 776127: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 776129: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 77612c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 77612f: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 776132: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 776133: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 776135: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 776138: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 776139: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77613a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77613b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 77613c: ret 8 */
  esp += 12; SPILL(); return;
L_77613f: /* 77613f: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 776142: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 776145: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 776148: cmp eax, dword ptr [edx + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77614b: jle 0x776154 */
  if ((zf || sf != of)) goto L_776154;
L_77614d: /* 77614d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77614e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77614f: call 0x9104f0 */
  esp -= 4; W32(esp, 0x776154u); SPILL(); f_9104f0(); if (g_unwind) return; RELOAD();
L_776154: /* 776154: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 776155: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 776156: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 776157: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 776158: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 776159: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7761b0(void) {
  LOAD_REGS();
L_7761b0: /* 7761b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7761b4: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7761b7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7761b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7761b9: xor ebx, ebx */
  ebx = 0;
/* 7761bb: xor esi, esi */
  esi = 0;
/* 7761bd: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7761bf: je 0x7765b8 */
  if (zf) goto L_7765b8;
L_7761c5: /* 7761c5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7761c6: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 7761ca: add ebp, 0x34 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7761cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7761d0: /* 7761d0: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 7761d3: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 7761d7: fmul dword ptr [eax + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x90u)));
/* 7761dd: fadd dword ptr [ebp - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffffcu)));
/* 7761e0: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 7761e3: mov ecx, dword ptr [edi + esi*4] */
  ecx = R32((uint32_t)(edi + esi*4));
/* 7761e6: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 7761ea: fmul dword ptr [ecx + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x94u)));
/* 7761f0: fadd dword ptr [ebp] */
  ST0 = ST0 + (F32((uint32_t)(ebp)));
/* 7761f3: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 7761f6: mov edx, dword ptr [edi + esi*4] */
  edx = R32((uint32_t)(edi + esi*4));
/* 7761f9: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 7761fd: fmul dword ptr [edx + 0x98] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x98u)));
/* 776203: mov dword ptr [ebp + 8], 0x3f800000 */
  W32((uint32_t)(ebp + 0x8u), 0x3f800000u);
/* 77620a: fadd dword ptr [ebp + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x4u)));
/* 77620d: fstp dword ptr [ebp + 4] */
  WF32((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* 776210: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 776213: mov ecx, dword ptr [eax + 0xa4] */
  ecx = R32((uint32_t)(eax + 0xa4u));
/* 776219: fld dword ptr [eax + 0xa0] */
  { double v = F32((uint32_t)(eax + 0xa0u)); FPUSH(v); }
/* 77621f: mov edx, dword ptr [eax + 0xa8] */
  edx = R32((uint32_t)(eax + 0xa8u));
/* 776225: fst dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0);
/* 776229: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 77622d: test byte ptr [eax + 0xc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 776231: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 776235: je 0x7762a0 */
  if (zf) goto L_7762a0;
L_776237: /* 776237: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 77623b: lea ecx, [eax + 0xe0] */
  ecx = (uint32_t)(eax + 0xe0u);
/* 776241: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 776244: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 776245: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 776249: add eax, 0xb0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 77624e: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 776251: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 776253: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 776255: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 776257: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 776259: fst dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0);
/* 77625d: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 776261: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 776264: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 776265: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 776266: call 0x972e60 */
  esp -= 4; W32(esp, 0x77626bu); SPILL(); f_972e60(); if (g_unwind) return; RELOAD();
/* 77626b: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 77626f: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 776272: fmul dword ptr [eax + 0xe0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xe0u)));
/* 776278: fsubr dword ptr [esp + 0xc] */
  ST0 = (F32((uint32_t)(esp + 0xcu))) - ST0;
/* 77627c: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 776280: fmul dword ptr [eax + 0xe4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xe4u)));
/* 776286: fsubr dword ptr [esp + 0x10] */
  ST0 = (F32((uint32_t)(esp + 0x10u))) - ST0;
/* 77628a: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 77628e: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 776292: fmul dword ptr [eax + 0xe8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xe8u)));
/* 776298: fsubr dword ptr [esp + 0x14] */
  ST0 = (F32((uint32_t)(esp + 0x14u))) - ST0;
/* 77629c: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
L_7762a0: /* 7762a0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7762a2: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 7762a8: fchs  */
  ST0 = -ST0;
/* 7762aa: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 7762ae: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* 7762b4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7762b6: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7762ba: fmul dword ptr [eax + 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xbcu)));
/* 7762c0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7762c2: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7762c8: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 7762cc: fmul dword ptr [eax + 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xbcu)));
/* 7762d2: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 7762d4: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 7762da: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7762dc: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7762e0: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* 7762e6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7762e8: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7762ee: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7762f2: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 7762f8: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 7762fa: fmul dword ptr [eax + 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xbcu)));
/* 776300: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 776302: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 776306: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 77630c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77630e: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 776314: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 776318: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 77631a: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* 776320: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 776324: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 77632a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 77632c: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 776330: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 776336: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 776338: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 77633e: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 776342: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 776346: fadd dword ptr [eax + 0xb0] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xb0u)));
/* 77634c: fstp dword ptr [eax + 0xb0] */
  WF32((uint32_t)(eax + 0xb0u), ST0); FPOP();
/* 776352: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 776355: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 776359: fadd dword ptr [eax + 0xb4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xb4u)));
/* 77635f: fstp dword ptr [eax + 0xb4] */
  WF32((uint32_t)(eax + 0xb4u), ST0); FPOP();
/* 776365: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 776368: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 77636c: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 776370: fadd dword ptr [eax + 0xb8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xb8u)));
/* 776376: fstp dword ptr [eax + 0xb8] */
  WF32((uint32_t)(eax + 0xb8u), ST0); FPOP();
/* 77637c: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 77637f: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 776383: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 776387: fadd dword ptr [eax + 0xbc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xbcu)));
/* 77638d: fstp dword ptr [eax + 0xbc] */
  WF32((uint32_t)(eax + 0xbcu), ST0); FPOP();
/* 776393: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 776396: fld dword ptr [eax + 0xb0] */
  { double v = F32((uint32_t)(eax + 0xb0u)); FPUSH(v); }
/* 77639c: fld dword ptr [eax + 0xb4] */
  { double v = F32((uint32_t)(eax + 0xb4u)); FPUSH(v); }
/* 7763a2: fld dword ptr [eax + 0xb8] */
  { double v = F32((uint32_t)(eax + 0xb8u)); FPUSH(v); }
/* 7763a8: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 7763ae: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 7763b0: fmulp st(4) */
  STI(4) = STI(4) * ST0;
  FPOP();
/* 7763b2: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 7763b4: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7763b6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7763b8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7763ba: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7763bc: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7763be: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 7763c1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7763c3: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 7763c6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7763c8: mov dword ptr [ebp - 8], ebx */
  W32((uint32_t)(ebp + 0xfffffff8u), ebx);
/* 7763cb: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 7763ce: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7763d0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7763d2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7763d4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7763d6: fsqrt  */
  ST0 = sqrt(ST0);
/* 7763d8: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 7763de: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7763e0: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 7763e6: fstp dword ptr [eax + 0xb0] */
  WF32((uint32_t)(eax + 0xb0u), ST0); FPOP();
/* 7763ec: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 7763ef: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7763f1: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 7763f7: fstp dword ptr [eax + 0xb4] */
  WF32((uint32_t)(eax + 0xb4u), ST0); FPOP();
/* 7763fd: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 776400: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 776402: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* 776408: fstp dword ptr [eax + 0xb8] */
  WF32((uint32_t)(eax + 0xb8u), ST0); FPOP();
/* 77640e: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 776411: fmul dword ptr [eax + 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xbcu)));
/* 776417: fstp dword ptr [eax + 0xbc] */
  WF32((uint32_t)(eax + 0xbcu), ST0); FPOP();
/* 77641d: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 776420: fld dword ptr [eax + 0xb4] */
  { double v = F32((uint32_t)(eax + 0xb4u)); FPUSH(v); }
/* 776426: fld dword ptr [eax + 0xb0] */
  { double v = F32((uint32_t)(eax + 0xb0u)); FPUSH(v); }
/* 77642c: fld dword ptr [eax + 0xb8] */
  { double v = F32((uint32_t)(eax + 0xb8u)); FPUSH(v); }
/* 776432: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 776438: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 77643a: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 77643c: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 77643e: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 776440: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 776442: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 776444: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 776446: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 776448: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77644a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 77644c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 77644e: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 776451: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 776454: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 776456: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 776458: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77645a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77645c: fld dword ptr [eax + 0xb8] */
  { double v = F32((uint32_t)(eax + 0xb8u)); FPUSH(v); }
/* 776462: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 776468: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 77646a: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 776470: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 776476: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 776478: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 77647a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 77647d: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 776480: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 776486: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 77648c: fld dword ptr [eax + 0xb8] */
  { double v = F32((uint32_t)(eax + 0xb8u)); FPUSH(v); }
/* 776492: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 776498: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77649a: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 77649c: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 77649f: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 7764a2: fld dword ptr [eax + 0xb8] */
  { double v = F32((uint32_t)(eax + 0xb8u)); FPUSH(v); }
/* 7764a8: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 7764ae: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 7764b4: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 7764ba: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7764bc: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7764be: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7764c1: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 7764c4: fld dword ptr [eax + 0xb0] */
  { double v = F32((uint32_t)(eax + 0xb0u)); FPUSH(v); }
/* 7764ca: fld dword ptr [eax + 0xb4] */
  { double v = F32((uint32_t)(eax + 0xb4u)); FPUSH(v); }
/* 7764d0: fld dword ptr [eax + 0xb8] */
  { double v = F32((uint32_t)(eax + 0xb8u)); FPUSH(v); }
/* 7764d6: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 7764dc: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7764dd: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 7764df: add ebp, 0x40 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7764e2: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 7764e4: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 7764e6: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 7764e8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7764ea: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 7764ec: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7764ee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7764f0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7764f2: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7764f4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7764f6: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7764f9: mov eax, dword ptr [edi + esi*4 - 4] */
  eax = R32((uint32_t)(edi + esi*4 + 0xfffffffcu));
/* 7764fd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7764ff: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 776501: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 776503: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 776505: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 77650b: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* 776511: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 776513: fld dword ptr [eax + 0xb4] */
  { double v = F32((uint32_t)(eax + 0xb4u)); FPUSH(v); }
/* 776519: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 77651f: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 776521: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 776523: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 776526: mov eax, dword ptr [edi + esi*4 - 4] */
  eax = R32((uint32_t)(edi + esi*4 + 0xfffffffcu));
/* 77652a: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 776530: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 776536: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 776538: fld dword ptr [eax + 0xb8] */
  { double v = F32((uint32_t)(eax + 0xb8u)); FPUSH(v); }
/* 77653e: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 776544: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 776546: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 776548: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 77654b: mov eax, dword ptr [edi + esi*4 - 4] */
  eax = R32((uint32_t)(edi + esi*4 + 0xfffffffcu));
/* 77654f: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 776555: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* 77655b: fld dword ptr [eax + 0xb4] */
  { double v = F32((uint32_t)(eax + 0xb4u)); FPUSH(v); }
/* 776561: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 776567: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 776569: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 77656b: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 77656e: mov eax, dword ptr [edi + esi*4 - 4] */
  eax = R32((uint32_t)(edi + esi*4 + 0xfffffffcu));
/* 776572: fld dword ptr [eax + 0xb0] */
  { double v = F32((uint32_t)(eax + 0xb0u)); FPUSH(v); }
/* 776578: fld dword ptr [eax + 0xb4] */
  { double v = F32((uint32_t)(eax + 0xb4u)); FPUSH(v); }
/* 77657e: fld dword ptr [eax + 0xb8] */
  { double v = F32((uint32_t)(eax + 0xb8u)); FPUSH(v); }
/* 776584: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 77658a: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 77658e: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776590: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 776592: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 776594: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 776596: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 776598: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 77659a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 77659c: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 77659e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7765a0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7765a2: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7765a4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7765a6: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7765a9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7765ab: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7765ad: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7765af: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7765b1: jne 0x7761d0 */
  if (!zf) goto L_7761d0;
L_7765b7: /* 7765b7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_7765b8: /* 7765b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7765b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7765ba: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7765bd: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7766d0(void) {
  LOAD_REGS();
L_7766d0: /* 7766d0: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7766d3: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 7766d7: mov dword ptr [eax], 0x3f800000 */
  W32((uint32_t)(eax), 0x3f800000u);
/* 7766dd: mov dword ptr [eax + 0x14], 0x3f800000 */
  W32((uint32_t)(eax + 0x14u), 0x3f800000u);
/* 7766e4: mov dword ptr [eax + 0x28], 0x3f800000 */
  W32((uint32_t)(eax + 0x28u), 0x3f800000u);
/* 7766eb: mov dword ptr [eax + 0x3c], 0x3f800000 */
  W32((uint32_t)(eax + 0x3cu), 0x3f800000u);
/* 7766f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7766f3: xor esi, esi */
  esi = 0;
/* 7766f5: mov dword ptr [eax + 0x30], esi */
  W32((uint32_t)(eax + 0x30u), esi);
/* 7766f8: mov dword ptr [eax + 0x34], esi */
  W32((uint32_t)(eax + 0x34u), esi);
/* 7766fb: mov dword ptr [eax + 0x38], esi */
  W32((uint32_t)(eax + 0x38u), esi);
/* 7766fe: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 776701: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 776704: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* 776707: mov dword ptr [eax + 0x10], esi */
  W32((uint32_t)(eax + 0x10u), esi);
/* 77670a: mov dword ptr [eax + 0x18], esi */
  W32((uint32_t)(eax + 0x18u), esi);
/* 77670d: mov dword ptr [eax + 0x1c], esi */
  W32((uint32_t)(eax + 0x1cu), esi);
/* 776710: mov dword ptr [eax + 0x20], esi */
  W32((uint32_t)(eax + 0x20u), esi);
/* 776713: mov dword ptr [eax + 0x24], esi */
  W32((uint32_t)(eax + 0x24u), esi);
/* 776716: mov dword ptr [eax + 0x2c], esi */
  W32((uint32_t)(eax + 0x2cu), esi);
/* 776719: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 77671b: fadd dword ptr [ebx + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x30u)));
/* 77671e: fstp dword ptr [eax + 0x30] */
  WF32((uint32_t)(eax + 0x30u), ST0); FPOP();
/* 776721: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 776725: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 776728: fadd dword ptr [ebx + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x34u)));
/* 77672b: fstp dword ptr [eax + 0x34] */
  WF32((uint32_t)(eax + 0x34u), ST0); FPOP();
/* 77672e: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 776732: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 776735: fadd dword ptr [ebx + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x38u)));
/* 776738: fstp dword ptr [eax + 0x38] */
  WF32((uint32_t)(eax + 0x38u), ST0); FPOP();
/* 77673b: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 77673d: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 776740: fchs  */
  ST0 = -ST0;
/* 776742: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 776745: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 776748: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 77674a: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 77674d: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 776750: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 776752: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 776758: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 77675a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 77675c: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 77675f: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 776762: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 776764: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 776767: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 77676a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 77676c: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 776772: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 776775: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 776778: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 77677a: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 77677d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 77677f: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 776781: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 776784: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 776786: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 77678c: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 776790: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 776792: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 776795: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 776798: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 77679b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 77679d: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 77679f: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7767a2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7767a4: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7767aa: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 7767ae: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7767b0: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 7767b4: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 7767b6: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7767ba: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 7767be: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 7767c1: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 7767c5: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 7767c9: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 7767cc: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 7767d0: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 7767d4: fadd dword ptr [ecx + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xcu)));
/* 7767d7: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 7767db: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 7767df: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7767e1: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7767e3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7767e5: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 7767e7: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7767e9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7767eb: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7767ef: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 7767f3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7767f5: fsqrt  */
  ST0 = sqrt(ST0);
/* 7767f7: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 7767fd: fst dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0);
/* 776801: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 776805: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 776809: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 77680d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 77680f: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 776813: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 776817: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 776819: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 77681b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77681d: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 776821: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 776825: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 776829: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 77682d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 776831: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 776835: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 776837: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 776839: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 77683d: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 77683f: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 776841: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 776845: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 776847: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 776849: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 77684d: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* 776851: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 776853: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 776855: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 776859: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 77685b: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 77685d: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 776861: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 776863: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 776865: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 776867: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 77686a: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 77686c: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 776870: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 776872: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 776876: fld st(5) */
  { double v = STI(5); FPUSH(v); }
/* 776878: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 77687c: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 77687e: fst dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0);
/* 776882: fadd dword ptr [esp + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8u)));
/* 776886: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 776889: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 77688b: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 77688e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 776890: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 776892: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 776896: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 776897: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 776899: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 77689d: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 7768a1: fsub dword ptr [esp] */
  ST0 = ST0 - (F32((uint32_t)(esp)));
/* 7768a5: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 7768a8: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 7768aa: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7768ac: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7768b0: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 7768b4: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7768b6: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7768b8: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 7768ba: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 7768bd: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 7768c1: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* 7768c5: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7768c8: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7768ca: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 7768cd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7768cf: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 7768d3: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 7768d7: fadd dword ptr [esp] */
  ST0 = ST0 + (F32((uint32_t)(esp)));
/* 7768db: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
/* 7768de: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7768e1: ret  */
  esp += 4; SPILL(); return;
}

void f_776980(void) {
  LOAD_REGS();
L_776980: /* 776980: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 776983: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 776984: xor eax, eax */
  eax = 0;
/* 776986: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 776988: jle 0x77699e */
  if ((zf || sf != of)) goto L_77699e;
L_77698a: /* 77698a: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 77698e: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 776990: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
L_776992: /* 776992: cmp dword ptr [ecx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776994: je 0x7769a1 */
  if (zf) goto L_7769a1;
L_776996: /* 776996: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 776997: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 77699a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77699c: jl 0x776992 */
  if ((sf != of)) goto L_776992;
L_77699e: /* 77699e: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_7769a1: /* 7769a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7769a2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7769c0(void) {
  LOAD_REGS();
L_7769c0: /* 7769c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7769c1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7769c3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7769c5: mov esi, ecx */
  esi = ecx;
/* 7769c7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7769cdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7769cd: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7769d1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7769d3: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7769d5: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 7769d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7769d9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7769f0(void) {
  LOAD_REGS();
L_7769f0: /* 7769f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7769f1: mov ebp, esp */
  ebp = esp;
/* 7769f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7769f5: push 0x9cc3a0 */
  { uint32_t v = 0x9cc3a0u; esp -= 4; W32(esp, v); }
/* 7769fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 776a00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 776a01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 776a08: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 776a0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 776a0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 776a0d: xor ebx, ebx */
  ebx = 0;
/* 776a0f: xor eax, eax */
  eax = 0;
/* 776a11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 776a12: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 776a15: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 776a18: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 776a1b: xor esi, esi */
  esi = 0;
/* 776a1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_776a20: /* 776a20: cmp esi, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 776a23: jge 0x776a94 */
  if ((sf == of)) goto L_776a94;
L_776a25: /* 776a25: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776a27: jne 0x776a94 */
  if (!zf) goto L_776a94;
L_776a29: /* 776a29: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 776a2c: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 776a2f: xor eax, eax */
  eax = 0;
L_776a31: /* 776a31: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 776a34: jge 0x776a8e */
  if ((sf == of)) goto L_776a8e;
L_776a36: /* 776a36: mov edi, dword ptr [ecx + eax*4 + 0xc0] */
  edi = R32((uint32_t)(ecx + eax*4 + 0xc0u));
/* 776a3d: and edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 776a43: cmp edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776a49: je 0x776a84 */
  if (zf) goto L_776a84;
L_776a4b: /* 776a4b: mov edi, dword ptr [ecx + eax*4 + 0xd0] */
  edi = R32((uint32_t)(ecx + eax*4 + 0xd0u));
/* 776a52: and edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 776a58: cmp edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776a5e: je 0x776a84 */
  if (zf) goto L_776a84;
L_776a60: /* 776a60: mov edi, dword ptr [ecx + eax*4 + 0x10] */
  edi = R32((uint32_t)(ecx + eax*4 + 0x10u));
/* 776a64: and edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 776a6a: cmp edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776a70: je 0x776a84 */
  if (zf) goto L_776a84;
L_776a72: /* 776a72: mov edi, dword ptr [ecx + eax*4 + 0x20] */
  edi = R32((uint32_t)(ecx + eax*4 + 0x20u));
/* 776a76: and edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 776a7c: cmp edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776a82: jne 0x776a8b */
  if (!zf) goto L_776a8b;
L_776a84: /* 776a84: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
L_776a8b: /* 776a8b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 776a8c: jmp 0x776a31 */
  goto L_776a31;
L_776a8e: /* 776a8e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 776a91: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 776a92: jmp 0x776a20 */
  goto L_776a20;
L_776a94: /* 776a94: xor esi, esi */
  esi = 0;
L_776a96: /* 776a96: cmp esi, dword ptr [edx + 0x24] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 776a99: jge 0x776b0c */
  if ((sf == of)) goto L_776b0c;
L_776a9b: /* 776a9b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776a9d: jne 0x776b14 */
  if (!zf) goto L_776b14;
L_776a9f: /* 776a9f: mov ecx, dword ptr [edx + 0x44] */
  ecx = R32((uint32_t)(edx + 0x44u));
/* 776aa2: mov eax, esi */
  eax = esi;
/* 776aa4: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 776aa7: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 776aa9: xor ecx, ecx */
  ecx = 0;
/* 776aab: jmp 0x776ab0 */
  goto L_776ab0;
L_776ab0: /* 776ab0: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 776ab3: jge 0x776b06 */
  if ((sf == of)) goto L_776b06;
L_776ab5: /* 776ab5: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 776ab8: and edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 776abe: cmp edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776ac4: je 0x776afc */
  if (zf) goto L_776afc;
L_776ac6: /* 776ac6: mov edi, dword ptr [eax + ecx*4 + 0x10] */
  edi = R32((uint32_t)(eax + ecx*4 + 0x10u));
/* 776aca: and edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 776ad0: cmp edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776ad6: je 0x776afc */
  if (zf) goto L_776afc;
L_776ad8: /* 776ad8: mov edi, dword ptr [eax + ecx*4 + 0x20] */
  edi = R32((uint32_t)(eax + ecx*4 + 0x20u));
/* 776adc: and edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 776ae2: cmp edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776ae8: je 0x776afc */
  if (zf) goto L_776afc;
L_776aea: /* 776aea: mov edi, dword ptr [eax + ecx*4 + 0x30] */
  edi = R32((uint32_t)(eax + ecx*4 + 0x30u));
/* 776aee: and edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 776af4: cmp edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776afa: jne 0x776b03 */
  if (!zf) goto L_776b03;
L_776afc: /* 776afc: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
L_776b03: /* 776b03: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 776b04: jmp 0x776ab0 */
  goto L_776ab0;
L_776b06: /* 776b06: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 776b09: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 776b0a: jmp 0x776a96 */
  goto L_776a96;
L_776b0c: /* 776b0c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776b0e: je 0x776cea */
  if (zf) goto L_776cea;
L_776b14: /* 776b14: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 776b17: xor ecx, ecx */
  ecx = 0;
/* 776b19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_776b20: /* 776b20: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 776b22: jge 0x776b87 */
  if ((sf == of)) goto L_776b87;
L_776b24: /* 776b24: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 776b27: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 776b2a: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 776b2d: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 776b30: mov dword ptr [eax + 0x18], ebx */
  W32((uint32_t)(eax + 0x18u), ebx);
/* 776b33: mov dword ptr [eax + 0x20], ebx */
  W32((uint32_t)(eax + 0x20u), ebx);
/* 776b36: mov dword ptr [eax + 0x24], ebx */
  W32((uint32_t)(eax + 0x24u), ebx);
/* 776b39: mov dword ptr [eax + 0x28], ebx */
  W32((uint32_t)(eax + 0x28u), ebx);
/* 776b3c: mov dword ptr [eax + 0xc0], ebx */
  W32((uint32_t)(eax + 0xc0u), ebx);
/* 776b42: mov dword ptr [eax + 0xc4], ebx */
  W32((uint32_t)(eax + 0xc4u), ebx);
/* 776b48: mov dword ptr [eax + 0xc8], ebx */
  W32((uint32_t)(eax + 0xc8u), ebx);
/* 776b4e: mov dword ptr [eax + 0xd0], ebx */
  W32((uint32_t)(eax + 0xd0u), ebx);
/* 776b54: mov dword ptr [eax + 0xd4], ebx */
  W32((uint32_t)(eax + 0xd4u), ebx);
/* 776b5a: mov dword ptr [eax + 0xd8], ebx */
  W32((uint32_t)(eax + 0xd8u), ebx);
/* 776b60: mov dword ptr [eax + 0x90], ebx */
  W32((uint32_t)(eax + 0x90u), ebx);
/* 776b66: mov dword ptr [eax + 0x94], ebx */
  W32((uint32_t)(eax + 0x94u), ebx);
/* 776b6c: mov dword ptr [eax + 0x98], ebx */
  W32((uint32_t)(eax + 0x98u), ebx);
/* 776b72: mov dword ptr [eax + 0xa0], ebx */
  W32((uint32_t)(eax + 0xa0u), ebx);
/* 776b78: mov dword ptr [eax + 0xa4], ebx */
  W32((uint32_t)(eax + 0xa4u), ebx);
/* 776b7e: mov dword ptr [eax + 0xa8], ebx */
  W32((uint32_t)(eax + 0xa8u), ebx);
/* 776b84: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 776b85: jmp 0x776b20 */
  goto L_776b20;
L_776b87: /* 776b87: xor ecx, ecx */
  ecx = 0;
/* 776b89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_776b90: /* 776b90: cmp ecx, dword ptr [edx + 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 776b93: jge 0x776bf0 */
  if ((sf == of)) goto L_776bf0;
L_776b95: /* 776b95: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776b98: mov eax, ecx */
  eax = ecx;
/* 776b9a: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 776b9d: mov dword ptr [eax + esi], ebx */
  W32((uint32_t)(eax + esi), ebx);
/* 776ba0: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776ba3: mov dword ptr [esi + eax + 4], ebx */
  W32((uint32_t)(esi + eax + 0x4u), ebx);
/* 776ba7: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776baa: mov dword ptr [esi + eax + 8], ebx */
  W32((uint32_t)(esi + eax + 0x8u), ebx);
/* 776bae: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776bb1: mov dword ptr [esi + eax + 0x10], ebx */
  W32((uint32_t)(esi + eax + 0x10u), ebx);
/* 776bb5: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776bb8: mov dword ptr [esi + eax + 0x14], ebx */
  W32((uint32_t)(esi + eax + 0x14u), ebx);
/* 776bbc: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776bbf: mov dword ptr [esi + eax + 0x18], ebx */
  W32((uint32_t)(esi + eax + 0x18u), ebx);
/* 776bc3: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776bc6: mov dword ptr [esi + eax + 0x20], ebx */
  W32((uint32_t)(esi + eax + 0x20u), ebx);
/* 776bca: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776bcd: mov dword ptr [esi + eax + 0x24], ebx */
  W32((uint32_t)(esi + eax + 0x24u), ebx);
/* 776bd1: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776bd4: mov dword ptr [esi + eax + 0x28], ebx */
  W32((uint32_t)(esi + eax + 0x28u), ebx);
/* 776bd8: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776bdb: mov dword ptr [esi + eax + 0x30], ebx */
  W32((uint32_t)(esi + eax + 0x30u), ebx);
/* 776bdf: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776be2: mov dword ptr [esi + eax + 0x34], ebx */
  W32((uint32_t)(esi + eax + 0x34u), ebx);
/* 776be6: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776be9: mov dword ptr [esi + eax + 0x38], ebx */
  W32((uint32_t)(esi + eax + 0x38u), ebx);
/* 776bed: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 776bee: jmp 0x776b90 */
  goto L_776b90;
L_776bf0: /* 776bf0: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 776bf6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 776bf8: push 0xac492c */
  { uint32_t v = 0xac492cu; esp -= 4; W32(esp, v); }
/* 776bfd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 776bfe: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x776c04u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 776c04: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 776c07: xor eax, eax */
  eax = 0;
/* 776c09: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 776c0c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_776c10: /* 776c10: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 776c13: jge 0x776ca4 */
  if ((sf == of)) goto L_776ca4;
L_776c19: /* 776c19: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 776c1c: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 776c1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 776c20: call 0x6cafbf */
  esp -= 4; W32(esp, 0x776c25u); SPILL(); f_6cafbf(); if (g_unwind) return; RELOAD();
/* 776c25: mov edi, eax */
  edi = eax;
/* 776c27: cmp dword ptr [edi + 0x30c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x30cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776c2d: jne 0x776c47 */
  if (!zf) goto L_776c47;
L_776c2f: /* 776c2f: push 0x20c */
  { uint32_t v = 0x20cu; esp -= 4; W32(esp, v); }
/* 776c34: push 0xac4954 */
  { uint32_t v = 0xac4954u; esp -= 4; W32(esp, v); }
/* 776c39: push 0xac4964 */
  { uint32_t v = 0xac4964u; esp -= 4; W32(esp, v); }
/* 776c3e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x776c44u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 776c44: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_776c47: /* 776c47: mov esi, dword ptr [edi + 0x30c] */
  esi = R32((uint32_t)(edi + 0x30cu));
/* 776c4d: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776c4f: je 0x776c62 */
  if (zf) goto L_776c62;
L_776c51: /* 776c51: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 776c56: mov ecx, esi */
  ecx = esi;
/* 776c58: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x776c5eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 776c5e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776c60: jne 0x776c64 */
  if (!zf) goto L_776c64;
L_776c62: /* 776c62: xor esi, esi */
  esi = 0;
L_776c64: /* 776c64: test byte ptr [esi + 0x90], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 776c6b: je 0x776c98 */
  if (zf) goto L_776c98;
L_776c6d: /* 776c6d: xor eax, eax */
  eax = 0;
/* 776c6f: nop  */
L_776c70: /* 776c70: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 776c73: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 776c76: jge 0x776c87 */
  if ((sf == of)) goto L_776c87;
L_776c78: /* 776c78: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 776c7a: cmp dword ptr [edx + eax*4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776c7d: je 0x776c82 */
  if (zf) goto L_776c82;
L_776c7f: /* 776c7f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 776c80: jmp 0x776c70 */
  goto L_776c70;
L_776c82: /* 776c82: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776c85: jne 0x776c98 */
  if (!zf) goto L_776c98;
L_776c87: /* 776c87: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 776c89: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 776c8b: mov ecx, esi */
  ecx = esi;
/* 776c8d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x776c93u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 776c93: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 776c95: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
L_776c98: /* 776c98: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 776c9b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 776c9c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 776c9f: jmp 0x776c10 */
  goto L_776c10;
L_776ca4: /* 776ca4: mov eax, 1 */
  eax = 0x1u;
/* 776ca9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 776cac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 776cb3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 776cb4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 776cb5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 776cb6: mov esp, ebp */
  esp = ebp;
/* 776cb8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 776cb9: ret  */
  esp += 4; SPILL(); return;
L_776cea: /* 776cea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 776ced: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 776cee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 776cef: xor eax, eax */
  eax = 0;
/* 776cf1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 776cf8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 776cf9: mov esp, ebp */
  esp = ebp;
/* 776cfb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 776cfc: ret  */
  esp += 4; SPILL(); return;
}

void f_776aad(void) {
  LOAD_REGS();
  goto L_776aad;
L_776a96: /* 776a96: cmp esi, dword ptr [edx + 0x24] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 776a99: jge 0x776b0c */
  if ((sf == of)) goto L_776b0c;
L_776a9b: /* 776a9b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776a9d: jne 0x776b14 */
  if (!zf) goto L_776b14;
L_776a9f: /* 776a9f: mov ecx, dword ptr [edx + 0x44] */
  ecx = R32((uint32_t)(edx + 0x44u));
/* 776aa2: mov eax, esi */
  eax = esi;
/* 776aa4: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 776aa7: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 776aa9: xor ecx, ecx */
  ecx = 0;
/* 776aab: jmp 0x776ab0 */
  goto L_776ab0;
L_776aad: /* 776aad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_776ab0: /* 776ab0: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 776ab3: jge 0x776b06 */
  if ((sf == of)) goto L_776b06;
L_776ab5: /* 776ab5: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 776ab8: and edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 776abe: cmp edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776ac4: je 0x776afc */
  if (zf) goto L_776afc;
L_776ac6: /* 776ac6: mov edi, dword ptr [eax + ecx*4 + 0x10] */
  edi = R32((uint32_t)(eax + ecx*4 + 0x10u));
/* 776aca: and edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 776ad0: cmp edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776ad6: je 0x776afc */
  if (zf) goto L_776afc;
L_776ad8: /* 776ad8: mov edi, dword ptr [eax + ecx*4 + 0x20] */
  edi = R32((uint32_t)(eax + ecx*4 + 0x20u));
/* 776adc: and edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 776ae2: cmp edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776ae8: je 0x776afc */
  if (zf) goto L_776afc;
L_776aea: /* 776aea: mov edi, dword ptr [eax + ecx*4 + 0x30] */
  edi = R32((uint32_t)(eax + ecx*4 + 0x30u));
/* 776aee: and edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 776af4: cmp edi, 0x7f800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776afa: jne 0x776b03 */
  if (!zf) goto L_776b03;
L_776afc: /* 776afc: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
L_776b03: /* 776b03: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 776b04: jmp 0x776ab0 */
  goto L_776ab0;
L_776b06: /* 776b06: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 776b09: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 776b0a: jmp 0x776a96 */
  goto L_776a96;
L_776b0c: /* 776b0c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776b0e: je 0x776cea */
  if (zf) goto L_776cea;
L_776b14: /* 776b14: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 776b17: xor ecx, ecx */
  ecx = 0;
/* 776b19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_776b20: /* 776b20: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 776b22: jge 0x776b87 */
  if ((sf == of)) goto L_776b87;
L_776b24: /* 776b24: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 776b27: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 776b2a: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 776b2d: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 776b30: mov dword ptr [eax + 0x18], ebx */
  W32((uint32_t)(eax + 0x18u), ebx);
/* 776b33: mov dword ptr [eax + 0x20], ebx */
  W32((uint32_t)(eax + 0x20u), ebx);
/* 776b36: mov dword ptr [eax + 0x24], ebx */
  W32((uint32_t)(eax + 0x24u), ebx);
/* 776b39: mov dword ptr [eax + 0x28], ebx */
  W32((uint32_t)(eax + 0x28u), ebx);
/* 776b3c: mov dword ptr [eax + 0xc0], ebx */
  W32((uint32_t)(eax + 0xc0u), ebx);
/* 776b42: mov dword ptr [eax + 0xc4], ebx */
  W32((uint32_t)(eax + 0xc4u), ebx);
/* 776b48: mov dword ptr [eax + 0xc8], ebx */
  W32((uint32_t)(eax + 0xc8u), ebx);
/* 776b4e: mov dword ptr [eax + 0xd0], ebx */
  W32((uint32_t)(eax + 0xd0u), ebx);
/* 776b54: mov dword ptr [eax + 0xd4], ebx */
  W32((uint32_t)(eax + 0xd4u), ebx);
/* 776b5a: mov dword ptr [eax + 0xd8], ebx */
  W32((uint32_t)(eax + 0xd8u), ebx);
/* 776b60: mov dword ptr [eax + 0x90], ebx */
  W32((uint32_t)(eax + 0x90u), ebx);
/* 776b66: mov dword ptr [eax + 0x94], ebx */
  W32((uint32_t)(eax + 0x94u), ebx);
/* 776b6c: mov dword ptr [eax + 0x98], ebx */
  W32((uint32_t)(eax + 0x98u), ebx);
/* 776b72: mov dword ptr [eax + 0xa0], ebx */
  W32((uint32_t)(eax + 0xa0u), ebx);
/* 776b78: mov dword ptr [eax + 0xa4], ebx */
  W32((uint32_t)(eax + 0xa4u), ebx);
/* 776b7e: mov dword ptr [eax + 0xa8], ebx */
  W32((uint32_t)(eax + 0xa8u), ebx);
/* 776b84: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 776b85: jmp 0x776b20 */
  goto L_776b20;
L_776b87: /* 776b87: xor ecx, ecx */
  ecx = 0;
/* 776b89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_776b90: /* 776b90: cmp ecx, dword ptr [edx + 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 776b93: jge 0x776bf0 */
  if ((sf == of)) goto L_776bf0;
L_776b95: /* 776b95: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776b98: mov eax, ecx */
  eax = ecx;
/* 776b9a: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 776b9d: mov dword ptr [eax + esi], ebx */
  W32((uint32_t)(eax + esi), ebx);
/* 776ba0: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776ba3: mov dword ptr [esi + eax + 4], ebx */
  W32((uint32_t)(esi + eax + 0x4u), ebx);
/* 776ba7: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776baa: mov dword ptr [esi + eax + 8], ebx */
  W32((uint32_t)(esi + eax + 0x8u), ebx);
/* 776bae: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776bb1: mov dword ptr [esi + eax + 0x10], ebx */
  W32((uint32_t)(esi + eax + 0x10u), ebx);
/* 776bb5: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776bb8: mov dword ptr [esi + eax + 0x14], ebx */
  W32((uint32_t)(esi + eax + 0x14u), ebx);
/* 776bbc: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776bbf: mov dword ptr [esi + eax + 0x18], ebx */
  W32((uint32_t)(esi + eax + 0x18u), ebx);
/* 776bc3: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776bc6: mov dword ptr [esi + eax + 0x20], ebx */
  W32((uint32_t)(esi + eax + 0x20u), ebx);
/* 776bca: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776bcd: mov dword ptr [esi + eax + 0x24], ebx */
  W32((uint32_t)(esi + eax + 0x24u), ebx);
/* 776bd1: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776bd4: mov dword ptr [esi + eax + 0x28], ebx */
  W32((uint32_t)(esi + eax + 0x28u), ebx);
/* 776bd8: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776bdb: mov dword ptr [esi + eax + 0x30], ebx */
  W32((uint32_t)(esi + eax + 0x30u), ebx);
/* 776bdf: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776be2: mov dword ptr [esi + eax + 0x34], ebx */
  W32((uint32_t)(esi + eax + 0x34u), ebx);
/* 776be6: mov esi, dword ptr [edx + 0x44] */
  esi = R32((uint32_t)(edx + 0x44u));
/* 776be9: mov dword ptr [esi + eax + 0x38], ebx */
  W32((uint32_t)(esi + eax + 0x38u), ebx);
/* 776bed: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 776bee: jmp 0x776b90 */
  goto L_776b90;
L_776bf0: /* 776bf0: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 776bf6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 776bf8: push 0xac492c */
  { uint32_t v = 0xac492cu; esp -= 4; W32(esp, v); }
/* 776bfd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 776bfe: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x776c04u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 776c04: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 776c07: xor eax, eax */
  eax = 0;
/* 776c09: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 776c0c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_776c10: /* 776c10: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 776c13: jge 0x776ca4 */
  if ((sf == of)) goto L_776ca4;
L_776c19: /* 776c19: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 776c1c: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 776c1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 776c20: call 0x6cafbf */
  esp -= 4; W32(esp, 0x776c25u); SPILL(); f_6cafbf(); if (g_unwind) return; RELOAD();
/* 776c25: mov edi, eax */
  edi = eax;
/* 776c27: cmp dword ptr [edi + 0x30c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x30cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776c2d: jne 0x776c47 */
  if (!zf) goto L_776c47;
L_776c2f: /* 776c2f: push 0x20c */
  { uint32_t v = 0x20cu; esp -= 4; W32(esp, v); }
/* 776c34: push 0xac4954 */
  { uint32_t v = 0xac4954u; esp -= 4; W32(esp, v); }
/* 776c39: push 0xac4964 */
  { uint32_t v = 0xac4964u; esp -= 4; W32(esp, v); }
/* 776c3e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x776c44u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 776c44: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_776c47: /* 776c47: mov esi, dword ptr [edi + 0x30c] */
  esi = R32((uint32_t)(edi + 0x30cu));
/* 776c4d: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776c4f: je 0x776c62 */
  if (zf) goto L_776c62;
L_776c51: /* 776c51: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 776c56: mov ecx, esi */
  ecx = esi;
/* 776c58: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x776c5eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 776c5e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776c60: jne 0x776c64 */
  if (!zf) goto L_776c64;
L_776c62: /* 776c62: xor esi, esi */
  esi = 0;
L_776c64: /* 776c64: test byte ptr [esi + 0x90], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 776c6b: je 0x776c98 */
  if (zf) goto L_776c98;
L_776c6d: /* 776c6d: xor eax, eax */
  eax = 0;
/* 776c6f: nop  */
L_776c70: /* 776c70: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 776c73: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 776c76: jge 0x776c87 */
  if ((sf == of)) goto L_776c87;
L_776c78: /* 776c78: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 776c7a: cmp dword ptr [edx + eax*4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776c7d: je 0x776c82 */
  if (zf) goto L_776c82;
L_776c7f: /* 776c7f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 776c80: jmp 0x776c70 */
  goto L_776c70;
L_776c82: /* 776c82: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776c85: jne 0x776c98 */
  if (!zf) goto L_776c98;
L_776c87: /* 776c87: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 776c89: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 776c8b: mov ecx, esi */
  ecx = esi;
/* 776c8d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x776c93u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 776c93: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 776c95: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
L_776c98: /* 776c98: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 776c9b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 776c9c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 776c9f: jmp 0x776c10 */
  goto L_776c10;
L_776ca4: /* 776ca4: mov eax, 1 */
  eax = 0x1u;
/* 776ca9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 776cac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 776cb3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 776cb4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 776cb5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 776cb6: mov esp, ebp */
  esp = ebp;
/* 776cb8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 776cb9: ret  */
  esp += 4; SPILL(); return;
L_776cea: /* 776cea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 776ced: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 776cee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 776cef: xor eax, eax */
  eax = 0;
/* 776cf1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 776cf8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 776cf9: mov esp, ebp */
  esp = ebp;
/* 776cfb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 776cfc: ret  */
  esp += 4; SPILL(); return;
}

void f_776cba(void) {
  LOAD_REGS();
L_776cba: /* 776cba: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 776cbd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 776cc2: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 776cc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 776cc6: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 776cc9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x776cceu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_776cce(); return;
}

void f_776cce(void) {
  LOAD_REGS();
L_776cce: /* 776cce: push 0xa080dc */
  { uint32_t v = 0xa080dcu; esp -= 4; W32(esp, v); }
/* 776cd3: push 0xac4974 */
  { uint32_t v = 0xac4974u; esp -= 4; W32(esp, v); }
/* 776cd8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x776cdeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 776cde: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 776ce1: xor ebx, ebx */
  ebx = 0;
/* 776ce3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 776ce4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 776ce5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x776ceau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 776cea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 776ced: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 776cee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 776cef: xor eax, eax */
  eax = 0;
/* 776cf1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 776cf8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 776cf9: mov esp, ebp */
  esp = ebp;
/* 776cfb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 776cfc: ret  */
  esp += 4; SPILL(); return;
}

void f_776dd0(void) {
  LOAD_REGS();
L_776dd0: /* 776dd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 776dd1: mov ebp, esp */
  ebp = esp;
/* 776dd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 776dd5: push 0x9cc3b0 */
  { uint32_t v = 0x9cc3b0u; esp -= 4; W32(esp, v); }
/* 776dda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 776de0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 776de1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 776de8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 776deb: mov eax, dword ptr [0xb1e3a0] */
  eax = R32((uint32_t)(0xb1e3a0u));
/* 776df0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 776df1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 776df2: xor ebx, ebx */
  ebx = 0;
/* 776df4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 776df5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 776df6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 776df9: mov edi, ecx */
  edi = ecx;
/* 776dfb: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 776dfe: mov dword ptr [0xb1e3a0], eax */
  W32((uint32_t)(0xb1e3a0u), eax);
L_776e03: /* 776e03: cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 776e06: jge 0x776ec3 */
  if ((sf == of)) goto L_776ec3;
L_776e0c: /* 776e0c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 776e0f: mov eax, dword ptr [eax + ebx*4] */
  eax = R32((uint32_t)(eax + ebx*4));
/* 776e12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 776e13: call 0x6cafbf */
  esp -= 4; W32(esp, 0x776e18u); SPILL(); f_6cafbf(); if (g_unwind) return; RELOAD();
/* 776e18: mov esi, eax */
  esi = eax;
/* 776e1a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 776e1c: jne 0x776e36 */
  if (!zf) goto L_776e36;
L_776e1e: /* 776e1e: push 0x26a */
  { uint32_t v = 0x26au; esp -= 4; W32(esp, v); }
/* 776e23: push 0xac49c4 */
  { uint32_t v = 0xac49c4u; esp -= 4; W32(esp, v); }
/* 776e28: push 0xac49d4 */
  { uint32_t v = 0xac49d4u; esp -= 4; W32(esp, v); }
/* 776e2d: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x776e33u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 776e33: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_776e36: /* 776e36: mov eax, dword ptr [0xb1e3a0] */
  eax = R32((uint32_t)(0xb1e3a0u));
/* 776e3b: cmp dword ptr [esi + 0x310], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x310u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776e41: je 0x776e8d */
  if (zf) goto L_776e8d;
L_776e43: /* 776e43: mov dword ptr [esi + 0x310], eax */
  W32((uint32_t)(esi + 0x310u), eax);
/* 776e49: xor eax, eax */
  eax = 0;
/* 776e4b: jmp 0x776e50 */
  goto L_776e50;
L_776e50: /* 776e50: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 776e53: jge 0x776e7c */
  if ((sf == of)) goto L_776e7c;
L_776e55: /* 776e55: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 776e57: cmp dword ptr [ecx + eax*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776e5a: je 0x776e5f */
  if (zf) goto L_776e5f;
L_776e5c: /* 776e5c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 776e5d: jmp 0x776e50 */
  goto L_776e50;
L_776e5f: /* 776e5f: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776e62: je 0x776e7c */
  if (zf) goto L_776e7c;
L_776e64: /* 776e64: push 0x271 */
  { uint32_t v = 0x271u; esp -= 4; W32(esp, v); }
/* 776e69: push 0xac49dc */
  { uint32_t v = 0xac49dcu; esp -= 4; W32(esp, v); }
/* 776e6e: push 0xac49ec */
  { uint32_t v = 0xac49ecu; esp -= 4; W32(esp, v); }
/* 776e73: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x776e79u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 776e79: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_776e7c: /* 776e7c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 776e7e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 776e80: mov ecx, edi */
  ecx = edi;
/* 776e82: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x776e88u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 776e88: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 776e8a: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
L_776e8d: /* 776e8d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 776e8e: jmp 0x776e03 */
  goto L_776e03;
L_776ec3: /* 776ec3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 776ec6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 776ec7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 776ec8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 776ecf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 776ed0: mov esp, ebp */
  esp = ebp;
/* 776ed2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 776ed3: ret  */
  esp += 4; SPILL(); return;
}

void f_776e4d(void) {
  LOAD_REGS();
  goto L_776e4d;
L_776e03: /* 776e03: cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 776e06: jge 0x776ec3 */
  if ((sf == of)) goto L_776ec3;
L_776e0c: /* 776e0c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 776e0f: mov eax, dword ptr [eax + ebx*4] */
  eax = R32((uint32_t)(eax + ebx*4));
/* 776e12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 776e13: call 0x6cafbf */
  esp -= 4; W32(esp, 0x776e18u); SPILL(); f_6cafbf(); if (g_unwind) return; RELOAD();
/* 776e18: mov esi, eax */
  esi = eax;
/* 776e1a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 776e1c: jne 0x776e36 */
  if (!zf) goto L_776e36;
L_776e1e: /* 776e1e: push 0x26a */
  { uint32_t v = 0x26au; esp -= 4; W32(esp, v); }
/* 776e23: push 0xac49c4 */
  { uint32_t v = 0xac49c4u; esp -= 4; W32(esp, v); }
/* 776e28: push 0xac49d4 */
  { uint32_t v = 0xac49d4u; esp -= 4; W32(esp, v); }
/* 776e2d: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x776e33u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 776e33: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_776e36: /* 776e36: mov eax, dword ptr [0xb1e3a0] */
  eax = R32((uint32_t)(0xb1e3a0u));
/* 776e3b: cmp dword ptr [esi + 0x310], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x310u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776e41: je 0x776e8d */
  if (zf) goto L_776e8d;
L_776e43: /* 776e43: mov dword ptr [esi + 0x310], eax */
  W32((uint32_t)(esi + 0x310u), eax);
/* 776e49: xor eax, eax */
  eax = 0;
/* 776e4b: jmp 0x776e50 */
  goto L_776e50;
L_776e4d: /* 776e4d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_776e50: /* 776e50: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 776e53: jge 0x776e7c */
  if ((sf == of)) goto L_776e7c;
L_776e55: /* 776e55: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 776e57: cmp dword ptr [ecx + eax*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776e5a: je 0x776e5f */
  if (zf) goto L_776e5f;
L_776e5c: /* 776e5c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 776e5d: jmp 0x776e50 */
  goto L_776e50;
L_776e5f: /* 776e5f: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776e62: je 0x776e7c */
  if (zf) goto L_776e7c;
L_776e64: /* 776e64: push 0x271 */
  { uint32_t v = 0x271u; esp -= 4; W32(esp, v); }
/* 776e69: push 0xac49dc */
  { uint32_t v = 0xac49dcu; esp -= 4; W32(esp, v); }
/* 776e6e: push 0xac49ec */
  { uint32_t v = 0xac49ecu; esp -= 4; W32(esp, v); }
/* 776e73: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x776e79u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 776e79: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_776e7c: /* 776e7c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 776e7e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 776e80: mov ecx, edi */
  ecx = edi;
/* 776e82: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x776e88u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 776e88: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 776e8a: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
L_776e8d: /* 776e8d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 776e8e: jmp 0x776e03 */
  goto L_776e03;
L_776ec3: /* 776ec3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 776ec6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 776ec7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 776ec8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 776ecf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 776ed0: mov esp, ebp */
  esp = ebp;
/* 776ed2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 776ed3: ret  */
  esp += 4; SPILL(); return;
}

void f_776e93(void) {
  LOAD_REGS();
L_776e93: /* 776e93: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 776e96: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 776e9b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 776e9e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 776e9f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 776ea2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x776ea7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_776ea7(); return;
}

void f_776ea7(void) {
  LOAD_REGS();
L_776ea7: /* 776ea7: push 0xa080f4 */
  { uint32_t v = 0xa080f4u; esp -= 4; W32(esp, v); }
/* 776eac: push 0xac4a1c */
  { uint32_t v = 0xac4a1cu; esp -= 4; W32(esp, v); }
/* 776eb1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x776eb7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 776eb7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 776eba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 776ebc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 776ebe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x776ec3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 776ec3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 776ec6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 776ec7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 776ec8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 776ecf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 776ed0: mov esp, ebp */
  esp = ebp;
/* 776ed2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 776ed3: ret  */
  esp += 4; SPILL(); return;
}

void f_776f30(void) {
  LOAD_REGS();
L_776f30: /* 776f30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 776f31: mov ebp, esp */
  ebp = esp;
/* 776f33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 776f35: push 0x9cc3c0 */
  { uint32_t v = 0x9cc3c0u; esp -= 4; W32(esp, v); }
/* 776f3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 776f40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 776f41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 776f48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 776f4b: mov eax, dword ptr [0xb1e3a0] */
  eax = R32((uint32_t)(0xb1e3a0u));
/* 776f50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 776f51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 776f52: xor ebx, ebx */
  ebx = 0;
/* 776f54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 776f55: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 776f56: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 776f59: mov edi, ecx */
  edi = ecx;
/* 776f5b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 776f5e: mov dword ptr [0xb1e3a0], eax */
  W32((uint32_t)(0xb1e3a0u), eax);
L_776f63: /* 776f63: cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 776f66: jge 0x777003 */
  if ((sf == of)) goto L_777003;
L_776f6c: /* 776f6c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 776f6f: mov eax, dword ptr [eax + ebx*4] */
  eax = R32((uint32_t)(eax + ebx*4));
/* 776f72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 776f73: call 0x90bdb0 */
  esp -= 4; W32(esp, 0x776f78u); SPILL(); f_90bdb0(); if (g_unwind) return; RELOAD();
/* 776f78: mov esi, eax */
  esi = eax;
/* 776f7a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 776f7c: je 0x776fd0 */
  if (zf) goto L_776fd0;
L_776f7e: /* 776f7e: mov eax, dword ptr [0xb1e3a0] */
  eax = R32((uint32_t)(0xb1e3a0u));
/* 776f83: cmp dword ptr [esi + 0x310], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x310u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776f89: je 0x776fd0 */
  if (zf) goto L_776fd0;
L_776f8b: /* 776f8b: mov dword ptr [esi + 0x310], eax */
  W32((uint32_t)(esi + 0x310u), eax);
/* 776f91: xor eax, eax */
  eax = 0;
L_776f93: /* 776f93: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 776f96: jge 0x776fbf */
  if ((sf == of)) goto L_776fbf;
L_776f98: /* 776f98: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 776f9a: cmp dword ptr [ecx + eax*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776f9d: je 0x776fa2 */
  if (zf) goto L_776fa2;
L_776f9f: /* 776f9f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 776fa0: jmp 0x776f93 */
  goto L_776f93;
L_776fa2: /* 776fa2: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 776fa5: je 0x776fbf */
  if (zf) goto L_776fbf;
L_776fa7: /* 776fa7: push 0x288 */
  { uint32_t v = 0x288u; esp -= 4; W32(esp, v); }
/* 776fac: push 0xac4a24 */
  { uint32_t v = 0xac4a24u; esp -= 4; W32(esp, v); }
/* 776fb1: push 0xac4a34 */
  { uint32_t v = 0xac4a34u; esp -= 4; W32(esp, v); }
/* 776fb6: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x776fbcu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 776fbc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_776fbf: /* 776fbf: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 776fc1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 776fc3: mov ecx, edi */
  ecx = edi;
/* 776fc5: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x776fcbu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 776fcb: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 776fcd: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
L_776fd0: /* 776fd0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 776fd1: jmp 0x776f63 */
  goto L_776f63;
L_777003: /* 777003: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 777006: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 777007: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 777008: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77700f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 777010: mov esp, ebp */
  esp = ebp;
/* 777012: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 777013: ret  */
  esp += 4; SPILL(); return;
}

void f_776fd3(void) {
  LOAD_REGS();
L_776fd3: /* 776fd3: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 776fd6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 776fdb: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 776fde: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 776fdf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 776fe2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x776fe7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_776fe7(); return;
}

void f_776fe7(void) {
  LOAD_REGS();
L_776fe7: /* 776fe7: push 0xa0811c */
  { uint32_t v = 0xa0811cu; esp -= 4; W32(esp, v); }
/* 776fec: push 0xac4a68 */
  { uint32_t v = 0xac4a68u; esp -= 4; W32(esp, v); }
/* 776ff1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x776ff7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 776ff7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 776ffa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 776ffc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 776ffe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x777003u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 777003: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 777006: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 777007: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 777008: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77700f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 777010: mov esp, ebp */
  esp = ebp;
/* 777012: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 777013: ret  */
  esp += 4; SPILL(); return;
}

void f_777060(void) {
  LOAD_REGS();
L_777060: /* 777060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 777061: mov ebp, esp */
  ebp = esp;
/* 777063: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 777065: push 0x9cc3d0 */
  { uint32_t v = 0x9cc3d0u; esp -= 4; W32(esp, v); }
/* 77706a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 777070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777071: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 777078: sub esp, 0x118 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x118u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77707e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 777081: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 777082: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 777083: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 777084: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 777087: xor ebx, ebx */
  ebx = 0;
/* 777089: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77708a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 77708d: mov dword ptr [ebp - 0x40], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x3f800000u);
/* 777094: call 0x9287f0 */
  esp -= 4; W32(esp, 0x777099u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 777099: mov edi, eax */
  edi = eax;
/* 77709b: cmp byte ptr [edi], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77709e: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 7770a1: je 0x7770ba */
  if (zf) goto L_7770ba;
L_7770a3: /* 7770a3: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7770a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7770ac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7770b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7770b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7770b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7770b6: mov esp, ebp */
  esp = ebp;
/* 7770b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7770b9: ret  */
  esp += 4; SPILL(); return;
L_7770ba: /* 7770ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7770bb: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 7770be: call 0x926e80 */
  esp -= 4; W32(esp, 0x7770c3u); SPILL(); f_926e80(); if (g_unwind) return; RELOAD();
/* 7770c3: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7770c5: jge 0x7774aa */
  if ((sf == of)) goto L_7774aa;
L_7770cb: /* 7770cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7770cc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7770cd: call 0x926ea0 */
  esp -= 4; W32(esp, 0x7770d2u); SPILL(); f_926ea0(); if (g_unwind) return; RELOAD();
/* 7770d2: mov esi, eax */
  esi = eax;
/* 7770d4: call 0x775120 */
  esp -= 4; W32(esp, 0x7770d9u); SPILL(); f_775120(); if (g_unwind) return; RELOAD();
/* 7770d9: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 7770dc: fmul dword ptr [0xa07fe8] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe8u)));
/* 7770e2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7770e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7770e4: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 7770e7: fst dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0);
/* 7770ea: fst dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0);
/* 7770ed: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7770f0: call 0x926ec0 */
  esp -= 4; W32(esp, 0x7770f5u); SPILL(); f_926ec0(); if (g_unwind) return; RELOAD();
/* 7770f5: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 7770f8: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7770fb: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* 7770fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7770ff: fld dword ptr [eax + 0x38] */
  { double v = F32((uint32_t)(eax + 0x38u)); FPUSH(v); }
/* 777102: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 777105: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 777107: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 77710a: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 77710d: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 77710f: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 777112: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 777114: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 777116: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 777118: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77711a: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 77711d: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 777120: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 777122: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 777125: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 777127: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 77712a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77712c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 77712e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 777131: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 777133: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 777136: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 777139: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77713b: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 77713e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 777140: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 777143: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 777145: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 777147: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 77714a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77714c: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 77714f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 777152: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 777155: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 777157: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 77715a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 77715c: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 77715f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 777161: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 777163: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 777165: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 777167: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 77716a: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 777170: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 777172: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 777175: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 777177: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 77717a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77717c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 77717e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 777181: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 777183: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 777186: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 77718c: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 77718f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 777191: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 777194: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 777196: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 777198: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 77719b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77719d: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 7771a0: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 7771a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7771a7: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x7771acu); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 7771ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7771af: lea eax, [ebp - 0x98] */
  eax = (uint32_t)(ebp + 0xffffff68u);
/* 7771b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7771b6: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7771b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7771ba: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x7771bfu); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 7771bf: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 7771c5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7771c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7771c9: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 7771cf: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x7771d5u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 7771d5: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 7771d8: mov edx, dword ptr [edi + 0xb0] */
  edx = R32((uint32_t)(edi + 0xb0u));
/* 7771de: mov esi, dword ptr [ebp - 0x5c] */
  esi = R32((uint32_t)(ebp + 0xffffffa4u));
/* 7771e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7771e2: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 7771e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7771e8: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 7771ee: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7771f1: mov edx, esp */
  edx = esp;
/* 7771f3: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 7771f5: mov esi, dword ptr [ebp - 0x58] */
  esi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7771f8: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 7771fb: mov esi, dword ptr [ebp - 0x54] */
  esi = R32((uint32_t)(ebp + 0xffffffacu));
/* 7771fe: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 777201: mov esi, dword ptr [ebp - 0x38] */
  esi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 777204: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 777206: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 777209: mov edx, esp */
  edx = esp;
/* 77720b: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 77720d: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 777210: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 777213: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 777216: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 777219: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 77721c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77721f: mov edx, esp */
  edx = esp;
/* 777221: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 777223: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 777226: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 777229: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 77722c: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 77722f: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 777235: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777236: call dword ptr [eax + 0xd8] */
  { uint32_t t = R32((uint32_t)(eax + 0xd8u)); esp -= 4; W32(esp, 0x77723cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77723c: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 77723f: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 777244: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777246: je 0x77741d */
  if (zf) goto L_77741d;
L_77724c: /* 77724c: mov ecx, dword ptr [eax + 0x15220] */
  ecx = R32((uint32_t)(eax + 0x15220u));
/* 777252: test ch, 8 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 777255: je 0x77741d */
  if (zf) goto L_77741d;
L_77725b: /* 77725b: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 77725e: mov byte ptr [ebp - 0x18], 0xff */
  W8((uint32_t)(ebp + 0xffffffe8u), 0xffu);
/* 777262: mov byte ptr [ebp - 0x17], 0xff */
  W8((uint32_t)(ebp + 0xffffffe9u), 0xffu);
/* 777266: mov byte ptr [ebp - 0x16], 0 */
  W8((uint32_t)(ebp + 0xffffffeau), 0x0u);
/* 77726a: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 77726e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 777271: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777272: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 777275: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 777278: mov ecx, esp */
  ecx = esp;
/* 77727a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 77727c: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 77727f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 777282: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 777285: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 777288: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 77728b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77728e: mov eax, esp */
  eax = esp;
/* 777290: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 777292: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 777295: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 777298: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 77729b: mov ecx, dword ptr [0xcd8a5c] */
  ecx = R32((uint32_t)(0xcd8a5cu));
/* 7772a1: call 0x6c5b37 */
  esp -= 4; W32(esp, 0x7772a6u); SPILL(); f_6c5b37(); if (g_unwind) return; RELOAD();
/* 7772a6: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7772a9: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7772ac: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 7772af: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7772b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7772b3: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7772b6: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 7772bc: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7772bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7772c0: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7772c3: lea ecx, [ebp - 0x108] */
  ecx = (uint32_t)(ebp + 0xfffffef8u);
/* 7772c9: mov byte ptr [ebp - 0x1c], 0xff */
  W8((uint32_t)(ebp + 0xffffffe4u), 0xffu);
/* 7772cd: mov byte ptr [ebp - 0x1b], 0xff */
  W8((uint32_t)(ebp + 0xffffffe5u), 0xffu);
/* 7772d1: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 7772d4: mov byte ptr [ebp - 0x1a], 0 */
  W8((uint32_t)(ebp + 0xffffffe6u), 0x0u);
/* 7772d8: mov byte ptr [ebp - 0x19], 0xff */
  W8((uint32_t)(ebp + 0xffffffe7u), 0xffu);
/* 7772dc: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 7772df: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 7772e2: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7772e5: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7772e8: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7772eb: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7772ee: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7772f1: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7772f4: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 7772fa: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 777300: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 777306: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x77730cu); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 77730c: mov esi, eax */
  esi = eax;
/* 77730e: mov ecx, 7 */
  ecx = 0x7u;
/* 777313: lea edi, [ebp - 0xec] */
  edi = (uint32_t)(ebp + 0xffffff14u);
/* 777319: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 77731b: mov esi, dword ptr [0xcd8a5c] */
  esi = R32((uint32_t)(0xcd8a5cu));
/* 777321: mov ebx, esi */
  ebx = esi;
/* 777323: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 777325: add esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 777328: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 77732a: mov ecx, esi */
  ecx = esi;
/* 77732c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x777332u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 777332: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 777334: mov edi, eax */
  edi = eax;
/* 777336: imul edi, edi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x1cu);
  edi = (uint32_t)r;
  }
/* 777339: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 77733b: mov ecx, 7 */
  ecx = 0x7u;
/* 777340: lea esi, [ebp - 0xec] */
  esi = (uint32_t)(ebp + 0xffffff14u);
/* 777346: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 777348: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 77734a: lea esi, [ebx + 0x54] */
  esi = (uint32_t)(ebx + 0x54u);
/* 77734d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 77734f: mov ecx, esi */
  ecx = esi;
/* 777351: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x777357u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 777357: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 777359: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77735c: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 77735f: mov byte ptr [ebp - 0x20], 0xff */
  W8((uint32_t)(ebp + 0xffffffe0u), 0xffu);
/* 777363: mov byte ptr [ebp - 0x1f], 0xff */
  W8((uint32_t)(ebp + 0xffffffe1u), 0xffu);
/* 777367: mov byte ptr [ebp - 0x1e], 0 */
  W8((uint32_t)(ebp + 0xffffffe2u), 0x0u);
/* 77736b: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 77736e: lea eax, [ebp - 0xa4] */
  eax = (uint32_t)(ebp + 0xffffff5cu);
/* 777374: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 777377: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777378: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 77737b: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 77737e: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 777381: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777382: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 777385: lea ecx, [ebp - 0x124] */
  ecx = (uint32_t)(ebp + 0xfffffedcu);
/* 77738b: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 77738e: mov byte ptr [ebp - 0x1d], 0xff */
  W8((uint32_t)(ebp + 0xffffffe3u), 0xffu);
/* 777392: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 777398: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 77739e: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 7773a4: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7773a7: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7773aa: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7773ad: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7773b0: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7773b3: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7773b6: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 7773b9: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 7773bc: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 7773bf: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x7773c5u); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 7773c5: mov esi, eax */
  esi = eax;
/* 7773c7: mov eax, dword ptr [0xcd8a5c] */
  eax = R32((uint32_t)(0xcd8a5cu));
/* 7773cc: mov ecx, 7 */
  ecx = 0x7u;
/* 7773d1: lea edi, [ebp - 0xd0] */
  edi = (uint32_t)(ebp + 0xffffff30u);
/* 7773d7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7773d9: lea esi, [eax + 0x48] */
  esi = (uint32_t)(eax + 0x48u);
/* 7773dc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7773de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7773e0: mov ecx, esi */
  ecx = esi;
/* 7773e2: mov ebx, eax */
  ebx = eax;
/* 7773e4: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7773eau); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7773ea: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7773ec: mov edi, eax */
  edi = eax;
/* 7773ee: imul edi, edi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x1cu);
  edi = (uint32_t)r;
  }
/* 7773f1: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7773f3: mov ecx, 7 */
  ecx = 0x7u;
/* 7773f8: lea esi, [ebp - 0xd0] */
  esi = (uint32_t)(ebp + 0xffffff30u);
/* 7773fe: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 777400: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 777402: lea esi, [ebx + 0x54] */
  esi = (uint32_t)(ebx + 0x54u);
/* 777405: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 777407: mov ecx, esi */
  ecx = esi;
/* 777409: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x77740fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 77740f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 777411: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 777414: mov ebx, dword ptr [ebp - 0x44] */
  ebx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 777417: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 77741a: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_77741d: /* 77741d: mov esi, dword ptr [ebp - 0x50] */
  esi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 777420: mov dword ptr [ebp - 0x3c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x3f800000u);
L_777427: /* 777427: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777429: je 0x77744f */
  if (zf) goto L_77744f;
L_77742b: /* 77742b: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 77742e: cmp ecx, dword ptr [edi + 0xb0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xb0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 777434: je 0x777449 */
  if (zf) goto L_777449;
L_777436: /* 777436: push 0xce9010 */
  { uint32_t v = 0xce9010u; esp -= 4; W32(esp, v); }
/* 77743b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x777441u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 777441: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777443: jne 0x777449 */
  if (!zf) goto L_777449;
L_777445: /* 777445: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 777447: jmp 0x777427 */
  goto L_777427;
L_777449: /* 777449: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 77744c: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
L_77744f: /* 77744f: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 777455: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x77745bu); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 77745b: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 77745e: fcomp dword ptr [ebp - 0x3c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc4u)));
  FPOP();
/* 777461: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 777463: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 777466: jnp 0x77746e */
  if (!pf) goto L_77746e;
L_777468: /* 777468: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 77746b: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
L_77746e: /* 77746e: mov edi, dword ptr [ebp - 0x48] */
  edi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 777471: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 777472: jmp 0x7770ba */
  goto L_7770ba;
L_7774aa: /* 7774aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7774ad: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7774b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7774b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7774b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7774b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7774ba: mov esp, ebp */
  esp = ebp;
/* 7774bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7774bd: ret  */
  esp += 4; SPILL(); return;
}

void f_777477(void) {
  LOAD_REGS();
L_777477: /* 777477: mov ecx, dword ptr [ebp - 0xa8] */
  ecx = R32((uint32_t)(ebp + 0xffffff58u));
/* 77747d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 777482: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 777485: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777486: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 777489: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77748eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77748e(); return;
}

void f_77748e(void) {
  LOAD_REGS();
L_77748e: /* 77748e: push 0xa08150 */
  { uint32_t v = 0xa08150u; esp -= 4; W32(esp, v); }
/* 777493: push 0xac4924 */
  { uint32_t v = 0xac4924u; esp -= 4; W32(esp, v); }
/* 777498: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77749eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77749e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7774a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7774a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7774a5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7774aau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7774aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7774ad: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7774b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7774b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7774b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7774b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7774ba: mov esp, ebp */
  esp = ebp;
/* 7774bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7774bd: ret  */
  esp += 4; SPILL(); return;
}

void f_7775e0(void) {
  LOAD_REGS();
L_7775e0: /* 7775e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7775e1: mov ebp, esp */
  ebp = esp;
/* 7775e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7775e5: push 0x9cc3f0 */
  { uint32_t v = 0x9cc3f0u; esp -= 4; W32(esp, v); }
/* 7775ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7775f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7775f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7775f8: sub esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7775fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7775ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 777600: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 777601: xor esi, esi */
  esi = 0;
/* 777603: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 777606: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 777609: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 77760c: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x777612u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 777612: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 777615: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 777619: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x77761fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 77761f: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 777622: mov eax, dword ptr [edi + 0xf8] */
  eax = R32((uint32_t)(edi + 0xf8u));
/* 777628: mov ecx, dword ptr [edi + 0xb8] */
  ecx = R32((uint32_t)(edi + 0xb8u));
/* 77762e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77762f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777630: lea edx, [edi + 0x14c] */
  edx = (uint32_t)(edi + 0x14cu);
/* 777636: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777637: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 77763b: call 0x910010 */
  esp -= 4; W32(esp, 0x777640u); SPILL(); f_910010(); if (g_unwind) return; RELOAD();
/* 777640: mov ebx, eax */
  ebx = eax;
/* 777642: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 777645: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777646: lea ecx, [edi + 0x190] */
  ecx = (uint32_t)(edi + 0x190u);
/* 77764c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77764d: lea edx, [edi + 0x68] */
  edx = (uint32_t)(edi + 0x68u);
/* 777650: push 0x776030 */
  { uint32_t v = 0x776030u; esp -= 4; W32(esp, v); }
/* 777655: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777656: mov ecx, ebx */
  ecx = ebx;
/* 777658: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 77765b: call 0x775970 */
  esp -= 4; W32(esp, 0x777660u); SPILL(); f_775970(); if (g_unwind) return; RELOAD();
/* 777660: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 777663: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 777667: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 77766a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_777670: /* 777670: cmp esi, dword ptr [ebx + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 777673: jge 0x777d3e */
  if ((sf == of)) goto L_777d3e;
L_777679: /* 777679: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 77767c: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 77767f: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 777682: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 777685: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 777688: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 77768b: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* 77768e: lea edi, [eax*4] */
  edi = (uint32_t)(eax*4);
/* 777695: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 777698: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* 77769b: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 77769e: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7776a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7776a2: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7776a4: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 7776a7: call 0x775260 */
  esp -= 4; W32(esp, 0x7776acu); SPILL(); f_775260(); if (g_unwind) return; RELOAD();
/* 7776ac: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7776af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7776b1: je 0x7776c7 */
  if (zf) goto L_7776c7;
L_7776b3: /* 7776b3: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7776b6: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7776b9: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7776bc: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7776be: fmul dword ptr [eax + 0x3f8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x3f8u)));
/* 7776c4: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
L_7776c7: /* 7776c7: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* 7776ca: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 7776cd: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7776d0: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* 7776d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7776d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7776d5: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7776d7: call 0x775350 */
  esp -= 4; W32(esp, 0x7776dcu); SPILL(); f_775350(); if (g_unwind) return; RELOAD();
/* 7776dc: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 7776df: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7776e2: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 7776e5: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7776e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7776eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7776ec: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7776ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7776ef: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7776f2: call 0x775460 */
  esp -= 4; W32(esp, 0x7776f7u); SPILL(); f_775460(); if (g_unwind) return; RELOAD();
/* 7776f7: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* 7776fa: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7776fd: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 777700: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 777703: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 777706: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 777709: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77770a: lea ecx, [edi + 0xdc] */
  ecx = (uint32_t)(edi + 0xdcu);
/* 777710: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777711: call 0x974b30 */
  esp -= 4; W32(esp, 0x777716u); SPILL(); f_974b30(); if (g_unwind) return; RELOAD();
/* 777716: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 777719: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 77771c: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 77771f: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 777722: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 777725: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 777728: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777729: add edx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 77772c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77772d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 77772f: lea eax, [edi + 0x134] */
  eax = (uint32_t)(edi + 0x134u);
/* 777735: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777736: call 0x911880 */
  esp -= 4; W32(esp, 0x77773bu); SPILL(); f_911880(); if (g_unwind) return; RELOAD();
/* 77773b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77773e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77773f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777740: lea ecx, [edi + 0x1dc] */
  ecx = (uint32_t)(edi + 0x1dcu);
/* 777746: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777747: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 77774a: lea eax, [edi + 0x164] */
  eax = (uint32_t)(edi + 0x164u);
/* 777750: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777751: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 777754: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 777757: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777758: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 777759: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77775a: call 0x911470 */
  esp -= 4; W32(esp, 0x77775fu); SPILL(); f_911470(); if (g_unwind) return; RELOAD();
/* 77775f: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* 777762: add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 777765: mov edx, dword ptr [edi + 0x188] */
  edx = R32((uint32_t)(edi + 0x188u));
/* 77776b: mov dword ptr [edi + 0x1e4], edx */
  W32((uint32_t)(edi + 0x1e4u), edx);
/* 777771: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 777774: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 777777: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 77777a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 77777c: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* 77777f: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 777782: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777783: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777784: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 777787: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 777789: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 77778c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77778d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77778e: call 0x914d60 */
  esp -= 4; W32(esp, 0x777793u); SPILL(); f_914d60(); if (g_unwind) return; RELOAD();
/* 777793: mov esi, eax */
  esi = eax;
/* 777795: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 777796: lea eax, [edi + 0x9c] */
  eax = (uint32_t)(edi + 0x9cu);
/* 77779c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77779d: call 0x974b30 */
  esp -= 4; W32(esp, 0x7777a2u); SPILL(); f_974b30(); if (g_unwind) return; RELOAD();
/* 7777a2: mov dword ptr [edi + 0x1f0], eax */
  W32((uint32_t)(edi + 0x1f0u), eax);
/* 7777a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7777aa: mov dword ptr [edi + 0x1f4], esi */
  W32((uint32_t)(edi + 0x1f4u), esi);
/* 7777b0: call 0x915270 */
  esp -= 4; W32(esp, 0x7777b5u); SPILL(); f_915270(); if (g_unwind) return; RELOAD();
/* 7777b5: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7777b8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7777bb: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7777be: mov edi, esp */
  edi = esp;
/* 7777c0: mov ecx, 0x13 */
  ecx = 0x13u;
/* 7777c5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7777c7: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* 7777ca: mov eax, dword ptr [ecx + edx*4] */
  eax = R32((uint32_t)(ecx + edx*4));
/* 7777cd: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7777d0: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7777d3: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7777d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7777d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7777d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7777d9: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7777dc: mov edi, esp */
  edi = esp;
/* 7777de: mov ecx, 0x17 */
  ecx = 0x17u;
/* 7777e3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7777e5: call 0x914450 */
  esp -= 4; W32(esp, 0x7777eau); SPILL(); f_914450(); if (g_unwind) return; RELOAD();
/* 7777ea: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7777ed: mov ecx, dword ptr [eax + 0x22c] */
  ecx = R32((uint32_t)(eax + 0x22cu));
/* 7777f3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7777f5: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7777fc: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 777803: je 0x777829 */
  if (zf) goto L_777829;
L_777805: /* 777805: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* 777808: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 77780b: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 77780e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77780f: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 777812: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 777815: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 777818: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777819: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77781a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77781d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77781e: call 0x7769f0 */
  esp -= 4; W32(esp, 0x777823u); SPILL(); f_7769f0(); if (g_unwind) return; RELOAD();
/* 777823: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 777826: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
L_777829: /* 777829: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 77782f: mov eax, dword ptr [ecx + 0x1522c] */
  eax = R32((uint32_t)(ecx + 0x1522cu));
/* 777835: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777837: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 77783b: je 0x777bf2 */
  if (zf) goto L_777bf2;
L_777841: /* 777841: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 777844: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 777847: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77784a: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 77784d: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 777850: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 777853: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 777856: xor eax, eax */
  eax = 0;
/* 777858: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 77785b: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 77785e: mov edi, edi */
  edi = edi;
L_777860: /* 777860: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* 777863: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 777866: cmp eax, dword ptr [edx + ecx*4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + ecx*4)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 777869: jge 0x777b87 */
  if ((sf == of)) goto L_777b87;
L_77786f: /* 77786f: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 777872: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 777875: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 777878: fmul dword ptr [esi + 0xc0] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xc0u)));
/* 77787e: mov edi, dword ptr [esi + 0x234] */
  edi = R32((uint32_t)(esi + 0x234u));
/* 777884: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777886: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 777889: fadd dword ptr [esi + 0x90] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x90u)));
/* 77788f: fstp dword ptr [esi + 0x90] */
  WF32((uint32_t)(esi + 0x90u), ST0); FPOP();
/* 777895: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 777898: fmul dword ptr [esi + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xc4u)));
/* 77789e: fadd dword ptr [esi + 0x94] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x94u)));
/* 7778a4: fstp dword ptr [esi + 0x94] */
  WF32((uint32_t)(esi + 0x94u), ST0); FPOP();
/* 7778aa: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7778ad: fmul dword ptr [esi + 0xc8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xc8u)));
/* 7778b3: fadd dword ptr [esi + 0x98] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x98u)));
/* 7778b9: fstp dword ptr [esi + 0x98] */
  WF32((uint32_t)(esi + 0x98u), ST0); FPOP();
/* 7778bf: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7778c2: fmul dword ptr [esi + 0xd0] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xd0u)));
/* 7778c8: fadd dword ptr [esi + 0xa0] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xa0u)));
/* 7778ce: fstp dword ptr [esi + 0xa0] */
  WF32((uint32_t)(esi + 0xa0u), ST0); FPOP();
/* 7778d4: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7778d7: fmul dword ptr [esi + 0xd4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xd4u)));
/* 7778dd: fadd dword ptr [esi + 0xa4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xa4u)));
/* 7778e3: fstp dword ptr [esi + 0xa4] */
  WF32((uint32_t)(esi + 0xa4u), ST0); FPOP();
/* 7778e9: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7778ec: fmul dword ptr [esi + 0xd8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xd8u)));
/* 7778f2: fadd dword ptr [esi + 0xa8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xa8u)));
/* 7778f8: fstp dword ptr [esi + 0xa8] */
  WF32((uint32_t)(esi + 0xa8u), ST0); FPOP();
/* 7778fe: jne 0x777918 */
  if (!zf) goto L_777918;
L_777900: /* 777900: push 0x3a3 */
  { uint32_t v = 0x3a3u; esp -= 4; W32(esp, v); }
/* 777905: push 0xac4a90 */
  { uint32_t v = 0xac4a90u; esp -= 4; W32(esp, v); }
/* 77790a: push 0xac4aa0 */
  { uint32_t v = 0xac4aa0u; esp -= 4; W32(esp, v); }
/* 77790f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x777915u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 777915: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_777918: /* 777918: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 777919: call 0x9287f0 */
  esp -= 4; W32(esp, 0x77791eu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 77791e: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 777921: je 0x777b7b */
  if (zf) goto L_777b7b;
L_777927: /* 777927: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 777928: call 0x6c78e7 */
  esp -= 4; W32(esp, 0x77792du); SPILL(); f_6c78e7(); if (g_unwind) return; RELOAD();
/* 77792d: mov edi, eax */
  edi = eax;
/* 77792f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777931: mov dword ptr [ebp - 0x70], edi */
  W32((uint32_t)(ebp + 0xffffff90u), edi);
/* 777934: jne 0x77794e */
  if (!zf) goto L_77794e;
L_777936: /* 777936: push 0x3aa */
  { uint32_t v = 0x3aau; esp -= 4; W32(esp, v); }
/* 77793b: push 0xac4aa8 */
  { uint32_t v = 0xac4aa8u; esp -= 4; W32(esp, v); }
/* 777940: push 0xac4ab8 */
  { uint32_t v = 0xac4ab8u; esp -= 4; W32(esp, v); }
/* 777945: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x77794bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 77794b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77794e: /* 77794e: cmp byte ptr [edi + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 777952: jne 0x777b7b */
  if (!zf) goto L_777b7b;
L_777958: /* 777958: mov edi, dword ptr [edi + 0x30c] */
  edi = R32((uint32_t)(edi + 0x30cu));
/* 77795e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777960: jne 0x77797a */
  if (!zf) goto L_77797a;
L_777962: /* 777962: push 0x3b3 */
  { uint32_t v = 0x3b3u; esp -= 4; W32(esp, v); }
/* 777967: push 0xac4ac0 */
  { uint32_t v = 0xac4ac0u; esp -= 4; W32(esp, v); }
/* 77796c: push 0xac4ad0 */
  { uint32_t v = 0xac4ad0u; esp -= 4; W32(esp, v); }
/* 777971: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x777977u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 777977: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77797a: /* 77797a: mov al, byte ptr [edi + 0x9c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x9cu))) & 0xffu);
/* 777980: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 777982: je 0x777b7b */
  if (zf) goto L_777b7b;
L_777988: /* 777988: mov eax, dword ptr [esi + 0x130] */
  eax = R32((uint32_t)(esi + 0x130u));
/* 77798e: mov ecx, dword ptr [esi + 0x134] */
  ecx = R32((uint32_t)(esi + 0x134u));
/* 777994: mov edx, dword ptr [esi + 0x138] */
  edx = R32((uint32_t)(esi + 0x138u));
/* 77799a: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 77799d: mov dword ptr [ebp - 0xb8], eax */
  W32((uint32_t)(ebp + 0xffffff48u), eax);
/* 7779a3: mov eax, dword ptr [esi + 0x13c] */
  eax = R32((uint32_t)(esi + 0x13cu));
/* 7779a9: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* 7779af: mov ecx, dword ptr [esi + 0x140] */
  ecx = R32((uint32_t)(esi + 0x140u));
/* 7779b5: mov dword ptr [ebp - 0xb0], edx */
  W32((uint32_t)(ebp + 0xffffff50u), edx);
/* 7779bb: mov edx, dword ptr [esi + 0x144] */
  edx = R32((uint32_t)(esi + 0x144u));
/* 7779c1: mov dword ptr [ebp - 0xac], eax */
  W32((uint32_t)(ebp + 0xffffff54u), eax);
/* 7779c7: mov eax, dword ptr [esi + 0x148] */
  eax = R32((uint32_t)(esi + 0x148u));
/* 7779cd: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 7779d3: mov ecx, dword ptr [esi + 0x14c] */
  ecx = R32((uint32_t)(esi + 0x14cu));
/* 7779d9: mov dword ptr [ebp - 0xa4], edx */
  W32((uint32_t)(ebp + 0xffffff5cu), edx);
/* 7779df: mov edx, dword ptr [esi + 0x150] */
  edx = R32((uint32_t)(esi + 0x150u));
/* 7779e5: mov dword ptr [ebp - 0xa0], eax */
  W32((uint32_t)(ebp + 0xffffff60u), eax);
/* 7779eb: mov eax, dword ptr [esi + 0x154] */
  eax = R32((uint32_t)(esi + 0x154u));
/* 7779f1: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 7779f7: mov ecx, dword ptr [esi + 0x158] */
  ecx = R32((uint32_t)(esi + 0x158u));
/* 7779fd: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 777a03: mov edx, dword ptr [esi + 0x15c] */
  edx = R32((uint32_t)(esi + 0x15cu));
/* 777a09: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 777a0f: mov eax, dword ptr [esi + 0x160] */
  eax = R32((uint32_t)(esi + 0x160u));
/* 777a15: mov dword ptr [ebp - 0x90], ecx */
  W32((uint32_t)(ebp + 0xffffff70u), ecx);
/* 777a1b: mov ecx, dword ptr [esi + 0x164] */
  ecx = R32((uint32_t)(esi + 0x164u));
/* 777a21: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 777a27: mov edx, dword ptr [esi + 0x168] */
  edx = R32((uint32_t)(esi + 0x168u));
/* 777a2d: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 777a33: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 777a39: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 777a3f: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 777a42: mov dword ptr [ebp - 0x80], edx */
  W32((uint32_t)(ebp + 0xffffff80u), edx);
/* 777a45: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 777a48: shl ebx, 6 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 777a4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777a4c: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 777a4e: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 777a51: lea ecx, [esi + 0xb0] */
  ecx = (uint32_t)(esi + 0xb0u);
/* 777a57: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* 777a5d: lea edx, [esi + 0xa0] */
  edx = (uint32_t)(esi + 0xa0u);
/* 777a63: lea edi, [esi + 0x90] */
  edi = (uint32_t)(esi + 0x90u);
/* 777a69: call 0x7766d0 */
  esp -= 4; W32(esp, 0x777a6eu); SPILL(); f_7766d0(); if (g_unwind) return; RELOAD();
/* 777a6e: mov eax, dword ptr [esi + 0x19c] */
  eax = R32((uint32_t)(esi + 0x19cu));
/* 777a74: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 777a77: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777a79: je 0x777b37 */
  if (zf) goto L_777b37;
L_777a7f: /* 777a7f: fld dword ptr [esi + 0x190] */
  { double v = F32((uint32_t)(esi + 0x190u)); FPUSH(v); }
/* 777a85: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 777a8b: fld dword ptr [esi + 0x194] */
  { double v = F32((uint32_t)(esi + 0x194u)); FPUSH(v); }
/* 777a91: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 777a97: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 777a9a: fld dword ptr [esi + 0x198] */
  { double v = F32((uint32_t)(esi + 0x198u)); FPUSH(v); }
/* 777aa0: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 777aa6: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 777aa9: fld dword ptr [ebp - 0xf8] */
  { double v = F32((uint32_t)(ebp + 0xffffff08u)); FPUSH(v); }
/* 777aaf: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 777ab1: fld dword ptr [ebp - 0xd8] */
  { double v = F32((uint32_t)(ebp + 0xffffff28u)); FPUSH(v); }
/* 777ab7: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 777aba: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 777abc: fld dword ptr [ebp - 0xe8] */
  { double v = F32((uint32_t)(ebp + 0xffffff18u)); FPUSH(v); }
/* 777ac2: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 777ac5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 777ac7: fadd dword ptr [ebp - 0xc8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff38u)));
/* 777acd: fld dword ptr [ebp - 0xf4] */
  { double v = F32((uint32_t)(ebp + 0xffffff0cu)); FPUSH(v); }
/* 777ad3: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 777ad5: fld dword ptr [ebp - 0xd4] */
  { double v = F32((uint32_t)(ebp + 0xffffff2cu)); FPUSH(v); }
/* 777adb: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 777ade: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 777ae0: fld dword ptr [ebp - 0xe4] */
  { double v = F32((uint32_t)(ebp + 0xffffff1cu)); FPUSH(v); }
/* 777ae6: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 777ae9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 777aeb: fadd dword ptr [ebp - 0xc4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff3cu)));
/* 777af1: fld dword ptr [ebp - 0xf0] */
  { double v = F32((uint32_t)(ebp + 0xffffff10u)); FPUSH(v); }
/* 777af7: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 777af9: fld dword ptr [ebp - 0xd0] */
  { double v = F32((uint32_t)(ebp + 0xffffff30u)); FPUSH(v); }
/* 777aff: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 777b02: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 777b04: fld dword ptr [ebp - 0xe0] */
  { double v = F32((uint32_t)(ebp + 0xffffff20u)); FPUSH(v); }
/* 777b0a: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 777b0d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 777b0f: fadd dword ptr [ebp - 0xc0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff40u)));
/* 777b15: fstp dword ptr [ebp - 0x108] */
  WF32((uint32_t)(ebp + 0xfffffef8u), ST0); FPOP();
/* 777b1b: mov edx, dword ptr [ebp - 0x108] */
  edx = R32((uint32_t)(ebp + 0xfffffef8u));
/* 777b21: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 777b23: mov dword ptr [ebp - 0xc0], edx */
  W32((uint32_t)(ebp + 0xffffff40u), edx);
/* 777b29: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 777b2f: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 777b35: fstp st(0) */
  STI(0) = ST0; FPOP();
L_777b37: /* 777b37: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 777b3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777b3b: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 777b3e: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 777b44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777b45: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* 777b4b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777b4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777b4d: call 0x777060 */
  esp -= 4; W32(esp, 0x777b52u); SPILL(); f_777060(); if (g_unwind) return; RELOAD();
/* 777b52: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 777b55: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 777b58: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 777b5b: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 777b5e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 777b61: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 777b63: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 777b65: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 777b68: jnp 0x777b79 */
  if (!pf) goto L_777b79;
L_777b6a: /* 777b6a: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 777b6d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 777b70: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 777b71: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 777b74: jmp 0x777860 */
  goto L_777860;
L_777b79: /* 777b79: fstp st(0) */
  STI(0) = ST0; FPOP();
L_777b7b: /* 777b7b: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 777b7e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 777b7f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 777b82: jmp 0x777860 */
  goto L_777860;
L_777b87: /* 777b87: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 777b8a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 777b8d: fcomp dword ptr [ecx + 0x18c] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x18cu)));
  FPOP();
/* 777b93: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 777b95: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 777b98: jp 0x777ba3 */
  if (pf) goto L_777ba3;
L_777b9a: /* 777b9a: mov ecx, dword ptr [ecx + 0x18c] */
  ecx = R32((uint32_t)(ecx + 0x18cu));
/* 777ba0: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
L_777ba3: /* 777ba3: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 777ba6: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 777ba9: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 777bac: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 777baf: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 777bb2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777bb3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 777bb6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777bb7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777bb8: call 0x7761b0 */
  esp -= 4; W32(esp, 0x777bbdu); SPILL(); f_7761b0(); if (g_unwind) return; RELOAD();
/* 777bbd: jmp 0x777c21 */
  goto L_777c21;
L_777bf2: /* 777bf2: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 777bf5: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* 777bf8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 777bfb: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 777bfe: mov edi, esp */
  edi = esp;
/* 777c00: add esi, 0x1dc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1dcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 777c06: mov ecx, 0x13 */
  ecx = 0x13u;
/* 777c0b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 777c0d: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 777c10: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 777c13: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 777c16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777c17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777c18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777c19: call 0x914410 */
  esp -= 4; W32(esp, 0x777c1eu); SPILL(); f_914410(); if (g_unwind) return; RELOAD();
/* 777c1e: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_777c21: /* 777c21: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 777c24: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* 777c2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777c2b: lea edx, [edi + 0x9c] */
  edx = (uint32_t)(edi + 0x9cu);
/* 777c31: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777c32: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 777c39: call 0x974b90 */
  esp -= 4; W32(esp, 0x777c3eu); SPILL(); f_974b90(); if (g_unwind) return; RELOAD();
/* 777c3e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 777c41: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 777c42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 777c43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777c44: call 0x911600 */
  esp -= 4; W32(esp, 0x777c49u); SPILL(); f_911600(); if (g_unwind) return; RELOAD();
/* 777c49: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 777c4c: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 777c4f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 777c50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 777c51: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777c52: call 0x911660 */
  esp -= 4; W32(esp, 0x777c57u); SPILL(); f_911660(); if (g_unwind) return; RELOAD();
/* 777c57: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 777c5a: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 777c5d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 777c5f: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 777c62: je 0x777c7e */
  if (zf) goto L_777c7e;
L_777c64: /* 777c64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777c65: mov edx, eax */
  edx = eax;
/* 777c67: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 777c6c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 777c6e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777c6f: push 0xac4ae0 */
  { uint32_t v = 0xac4ae0u; esp -= 4; W32(esp, v); }
/* 777c74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777c75: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x777c7bu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 777c7b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_777c7e: /* 777c7e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 777c81: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 777c84: cmp edx, dword ptr [eax + 0x24] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 777c87: je 0x777ca1 */
  if (zf) goto L_777ca1;
L_777c89: /* 777c89: push 0x40a */
  { uint32_t v = 0x40au; esp -= 4; W32(esp, v); }
/* 777c8e: push 0xac4b50 */
  { uint32_t v = 0xac4b50u; esp -= 4; W32(esp, v); }
/* 777c93: push 0xac4b60 */
  { uint32_t v = 0xac4b60u; esp -= 4; W32(esp, v); }
/* 777c98: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x777c9eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 777c9e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_777ca1: /* 777ca1: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 777ca4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777ca6: jne 0x777cdf */
  if (!zf) goto L_777cdf;
L_777ca8: /* 777ca8: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* 777cab: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 777cae: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 777cb1: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 777cb4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777cb5: lea edx, [eax + ecx*4] */
  edx = (uint32_t)(eax + ecx*4);
/* 777cb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777cb9: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 777cbc: call 0x776dd0 */
  esp -= 4; W32(esp, 0x777cc1u); SPILL(); f_776dd0(); if (g_unwind) return; RELOAD();
/* 777cc1: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 777cc4: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 777cc7: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 777cc9: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 777ccc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 777ccf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777cd0: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 777cd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777cd4: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 777cd7: call 0x776f30 */
  esp -= 4; W32(esp, 0x777cdcu); SPILL(); f_776f30(); if (g_unwind) return; RELOAD();
/* 777cdc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_777cdf: /* 777cdf: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 777ce2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777ce3: lea eax, [edi + 0x134] */
  eax = (uint32_t)(edi + 0x134u);
/* 777ce9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777cea: call 0x974b90 */
  esp -= 4; W32(esp, 0x777cefu); SPILL(); f_974b90(); if (g_unwind) return; RELOAD();
/* 777cef: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 777cf2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777cf3: add edi, 0xdc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xdcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 777cf9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 777cfa: call 0x974b90 */
  esp -= 4; W32(esp, 0x777cffu); SPILL(); f_974b90(); if (g_unwind) return; RELOAD();
/* 777cff: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 777d02: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 777d03: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 777d06: jmp 0x777670 */
  goto L_777670;
L_777d3e: /* 777d3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 777d3f: lea ecx, [edi + 0x14c] */
  ecx = (uint32_t)(edi + 0x14cu);
/* 777d45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777d46: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 777d4d: call 0x974b90 */
  esp -= 4; W32(esp, 0x777d52u); SPILL(); f_974b90(); if (g_unwind) return; RELOAD();
/* 777d52: lea ebx, [edi + 0x68] */
  ebx = (uint32_t)(edi + 0x68u);
/* 777d55: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 777d56: call 0x972710 */
  esp -= 4; W32(esp, 0x777d5bu); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 777d5b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_777d5e: /* 777d5e: mov esi, eax */
  esi = eax;
/* 777d60: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777d62: je 0x777da4 */
  if (zf) goto L_777da4;
L_777d64: /* 777d64: mov edi, dword ptr [esi + 0x14] */
  edi = R32((uint32_t)(esi + 0x14u));
/* 777d67: test byte ptr [edi + 0x1ec], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x1ecu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 777d6e: jne 0x777d88 */
  if (!zf) goto L_777d88;
L_777d70: /* 777d70: push 0x425 */
  { uint32_t v = 0x425u; esp -= 4; W32(esp, v); }
/* 777d75: push 0xac4b8c */
  { uint32_t v = 0xac4b8cu; esp -= 4; W32(esp, v); }
/* 777d7a: push 0xac4b9c */
  { uint32_t v = 0xac4b9cu; esp -= 4; W32(esp, v); }
/* 777d7f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x777d85u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 777d85: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_777d88: /* 777d88: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 777d89: call 0x90f180 */
  esp -= 4; W32(esp, 0x777d8eu); SPILL(); f_90f180(); if (g_unwind) return; RELOAD();
/* 777d8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 777d8f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 777d90: mov dword ptr [edi + 0x238], 0x7f7fffff */
  W32((uint32_t)(edi + 0x238u), 0x7f7fffffu);
/* 777d9a: call 0x972770 */
  esp -= 4; W32(esp, 0x777d9fu); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 777d9f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 777da2: jmp 0x777d5e */
  goto L_777d5e;
L_777da4: /* 777da4: xor ebx, ebx */
  ebx = 0;
L_777da6: /* 777da6: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 777da9: xor esi, esi */
  esi = 0;
/* 777dab: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 777dad: jge 0x777de0 */
  if ((sf == of)) goto L_777de0;
L_777daf: /* 777daf: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 777db2: mov edi, dword ptr [edx + ebx*4] */
  edi = R32((uint32_t)(edx + ebx*4));
L_777db5: /* 777db5: cmp esi, dword ptr [ebp - 0x58] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 777db8: jge 0x777ddd */
  if ((sf == of)) goto L_777ddd;
L_777dba: /* 777dba: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 777dbd: cmp edi, dword ptr [eax + esi*4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + esi*4)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 777dc0: jne 0x777dda */
  if (!zf) goto L_777dda;
L_777dc2: /* 777dc2: push 0x434 */
  { uint32_t v = 0x434u; esp -= 4; W32(esp, v); }
/* 777dc7: push 0xac4bbc */
  { uint32_t v = 0xac4bbcu; esp -= 4; W32(esp, v); }
/* 777dcc: push 0xac4bcc */
  { uint32_t v = 0xac4bccu; esp -= 4; W32(esp, v); }
/* 777dd1: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x777dd7u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 777dd7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_777dda: /* 777dda: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 777ddb: jmp 0x777db5 */
  goto L_777db5;
L_777ddd: /* 777ddd: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 777dde: jmp 0x777da6 */
  goto L_777da6;
L_777de0: /* 777de0: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 777de4: mov edi, 0x200 */
  edi = 0x200u;
/* 777de9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_777df0: /* 777df0: cmp esi, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 777df3: jge 0x777e12 */
  if ((sf == of)) goto L_777e12;
L_777df5: /* 777df5: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 777df8: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 777dfb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777dfd: je 0x777e0f */
  if (zf) goto L_777e0f;
L_777dff: /* 777dff: test dword ptr [ecx + 0x80], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x80u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777e05: jne 0x777e0f */
  if (!zf) goto L_777e0f;
L_777e07: /* 777e07: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 777e09: call dword ptr [edx + 0x148] */
  { uint32_t t = R32((uint32_t)(edx + 0x148u)); esp -= 4; W32(esp, 0x777e0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_777e0f: /* 777e0f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 777e10: jmp 0x777df0 */
  goto L_777df0;
L_777e12: /* 777e12: xor esi, esi */
  esi = 0;
L_777e14: /* 777e14: cmp esi, dword ptr [ebp - 0x58] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 777e17: jge 0x777e6c */
  if ((sf == of)) goto L_777e6c;
L_777e19: /* 777e19: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 777e1c: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 777e1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777e21: je 0x777e39 */
  if (zf) goto L_777e39;
L_777e23: /* 777e23: test dword ptr [eax + 0x80], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777e29: jne 0x777e39 */
  if (!zf) goto L_777e39;
L_777e2b: /* 777e2b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 777e2e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 777e30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 777e32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777e33: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x777e39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_777e39: /* 777e39: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 777e3a: jmp 0x777e14 */
  goto L_777e14;
L_777e6c: /* 777e6c: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 777e6f: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 777e76: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x777e7bu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 777e7b: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 777e7e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 777e82: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x777e87u); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 777e87: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 777e8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 777e8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 777e8c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 777e93: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 777e94: mov esp, ebp */
  esp = ebp;
/* 777e96: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 777e97: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_777bbf(void) {
  LOAD_REGS();
L_777bbf: /* 777bbf: mov eax, dword ptr [ebp - 0x100] */
  eax = R32((uint32_t)(ebp + 0xffffff00u));
/* 777bc5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 777bca: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 777bcd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777bce: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 777bd1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x777bd6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_777bd6(); return;
}

void f_777bd6(void) {
  LOAD_REGS();
  goto L_777bd6;
L_777670: /* 777670: cmp esi, dword ptr [ebx + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 777673: jge 0x777d3e */
  if ((sf == of)) goto L_777d3e;
L_777679: /* 777679: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 77767c: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 77767f: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 777682: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 777685: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 777688: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 77768b: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* 77768e: lea edi, [eax*4] */
  edi = (uint32_t)(eax*4);
/* 777695: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 777698: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* 77769b: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 77769e: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7776a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7776a2: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7776a4: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 7776a7: call 0x775260 */
  esp -= 4; W32(esp, 0x7776acu); SPILL(); f_775260(); if (g_unwind) return; RELOAD();
/* 7776ac: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7776af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7776b1: je 0x7776c7 */
  if (zf) goto L_7776c7;
L_7776b3: /* 7776b3: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7776b6: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7776b9: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7776bc: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7776be: fmul dword ptr [eax + 0x3f8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x3f8u)));
/* 7776c4: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
L_7776c7: /* 7776c7: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* 7776ca: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 7776cd: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7776d0: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* 7776d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7776d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7776d5: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7776d7: call 0x775350 */
  esp -= 4; W32(esp, 0x7776dcu); SPILL(); f_775350(); if (g_unwind) return; RELOAD();
/* 7776dc: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 7776df: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7776e2: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 7776e5: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7776e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7776eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7776ec: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7776ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7776ef: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7776f2: call 0x775460 */
  esp -= 4; W32(esp, 0x7776f7u); SPILL(); f_775460(); if (g_unwind) return; RELOAD();
/* 7776f7: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* 7776fa: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7776fd: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 777700: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 777703: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 777706: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 777709: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77770a: lea ecx, [edi + 0xdc] */
  ecx = (uint32_t)(edi + 0xdcu);
/* 777710: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777711: call 0x974b30 */
  esp -= 4; W32(esp, 0x777716u); SPILL(); f_974b30(); if (g_unwind) return; RELOAD();
/* 777716: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 777719: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 77771c: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 77771f: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 777722: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 777725: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 777728: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777729: add edx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 77772c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77772d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 77772f: lea eax, [edi + 0x134] */
  eax = (uint32_t)(edi + 0x134u);
/* 777735: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777736: call 0x911880 */
  esp -= 4; W32(esp, 0x77773bu); SPILL(); f_911880(); if (g_unwind) return; RELOAD();
/* 77773b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77773e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77773f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777740: lea ecx, [edi + 0x1dc] */
  ecx = (uint32_t)(edi + 0x1dcu);
/* 777746: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777747: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 77774a: lea eax, [edi + 0x164] */
  eax = (uint32_t)(edi + 0x164u);
/* 777750: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777751: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 777754: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 777757: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777758: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 777759: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77775a: call 0x911470 */
  esp -= 4; W32(esp, 0x77775fu); SPILL(); f_911470(); if (g_unwind) return; RELOAD();
/* 77775f: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* 777762: add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 777765: mov edx, dword ptr [edi + 0x188] */
  edx = R32((uint32_t)(edi + 0x188u));
/* 77776b: mov dword ptr [edi + 0x1e4], edx */
  W32((uint32_t)(edi + 0x1e4u), edx);
/* 777771: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 777774: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 777777: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 77777a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 77777c: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* 77777f: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 777782: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777783: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777784: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 777787: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 777789: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 77778c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77778d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77778e: call 0x914d60 */
  esp -= 4; W32(esp, 0x777793u); SPILL(); f_914d60(); if (g_unwind) return; RELOAD();
/* 777793: mov esi, eax */
  esi = eax;
/* 777795: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 777796: lea eax, [edi + 0x9c] */
  eax = (uint32_t)(edi + 0x9cu);
/* 77779c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77779d: call 0x974b30 */
  esp -= 4; W32(esp, 0x7777a2u); SPILL(); f_974b30(); if (g_unwind) return; RELOAD();
/* 7777a2: mov dword ptr [edi + 0x1f0], eax */
  W32((uint32_t)(edi + 0x1f0u), eax);
/* 7777a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7777aa: mov dword ptr [edi + 0x1f4], esi */
  W32((uint32_t)(edi + 0x1f4u), esi);
/* 7777b0: call 0x915270 */
  esp -= 4; W32(esp, 0x7777b5u); SPILL(); f_915270(); if (g_unwind) return; RELOAD();
/* 7777b5: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7777b8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7777bb: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7777be: mov edi, esp */
  edi = esp;
/* 7777c0: mov ecx, 0x13 */
  ecx = 0x13u;
/* 7777c5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7777c7: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* 7777ca: mov eax, dword ptr [ecx + edx*4] */
  eax = R32((uint32_t)(ecx + edx*4));
/* 7777cd: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7777d0: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7777d3: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7777d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7777d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7777d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7777d9: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7777dc: mov edi, esp */
  edi = esp;
/* 7777de: mov ecx, 0x17 */
  ecx = 0x17u;
/* 7777e3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7777e5: call 0x914450 */
  esp -= 4; W32(esp, 0x7777eau); SPILL(); f_914450(); if (g_unwind) return; RELOAD();
/* 7777ea: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7777ed: mov ecx, dword ptr [eax + 0x22c] */
  ecx = R32((uint32_t)(eax + 0x22cu));
/* 7777f3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7777f5: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7777fc: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 777803: je 0x777829 */
  if (zf) goto L_777829;
L_777805: /* 777805: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* 777808: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 77780b: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 77780e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77780f: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 777812: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 777815: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 777818: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777819: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77781a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77781d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77781e: call 0x7769f0 */
  esp -= 4; W32(esp, 0x777823u); SPILL(); f_7769f0(); if (g_unwind) return; RELOAD();
/* 777823: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 777826: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
L_777829: /* 777829: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 77782f: mov eax, dword ptr [ecx + 0x1522c] */
  eax = R32((uint32_t)(ecx + 0x1522cu));
/* 777835: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777837: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 77783b: je 0x777bf2 */
  if (zf) goto L_777bf2;
L_777841: /* 777841: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 777844: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 777847: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77784a: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 77784d: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 777850: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 777853: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 777856: xor eax, eax */
  eax = 0;
/* 777858: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 77785b: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 77785e: mov edi, edi */
  edi = edi;
L_777860: /* 777860: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* 777863: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 777866: cmp eax, dword ptr [edx + ecx*4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + ecx*4)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 777869: jge 0x777b87 */
  if ((sf == of)) goto L_777b87;
L_77786f: /* 77786f: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 777872: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 777875: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 777878: fmul dword ptr [esi + 0xc0] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xc0u)));
/* 77787e: mov edi, dword ptr [esi + 0x234] */
  edi = R32((uint32_t)(esi + 0x234u));
/* 777884: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777886: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 777889: fadd dword ptr [esi + 0x90] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x90u)));
/* 77788f: fstp dword ptr [esi + 0x90] */
  WF32((uint32_t)(esi + 0x90u), ST0); FPOP();
/* 777895: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 777898: fmul dword ptr [esi + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xc4u)));
/* 77789e: fadd dword ptr [esi + 0x94] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x94u)));
/* 7778a4: fstp dword ptr [esi + 0x94] */
  WF32((uint32_t)(esi + 0x94u), ST0); FPOP();
/* 7778aa: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7778ad: fmul dword ptr [esi + 0xc8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xc8u)));
/* 7778b3: fadd dword ptr [esi + 0x98] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x98u)));
/* 7778b9: fstp dword ptr [esi + 0x98] */
  WF32((uint32_t)(esi + 0x98u), ST0); FPOP();
/* 7778bf: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7778c2: fmul dword ptr [esi + 0xd0] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xd0u)));
/* 7778c8: fadd dword ptr [esi + 0xa0] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xa0u)));
/* 7778ce: fstp dword ptr [esi + 0xa0] */
  WF32((uint32_t)(esi + 0xa0u), ST0); FPOP();
/* 7778d4: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7778d7: fmul dword ptr [esi + 0xd4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xd4u)));
/* 7778dd: fadd dword ptr [esi + 0xa4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xa4u)));
/* 7778e3: fstp dword ptr [esi + 0xa4] */
  WF32((uint32_t)(esi + 0xa4u), ST0); FPOP();
/* 7778e9: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7778ec: fmul dword ptr [esi + 0xd8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xd8u)));
/* 7778f2: fadd dword ptr [esi + 0xa8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xa8u)));
/* 7778f8: fstp dword ptr [esi + 0xa8] */
  WF32((uint32_t)(esi + 0xa8u), ST0); FPOP();
/* 7778fe: jne 0x777918 */
  if (!zf) goto L_777918;
L_777900: /* 777900: push 0x3a3 */
  { uint32_t v = 0x3a3u; esp -= 4; W32(esp, v); }
/* 777905: push 0xac4a90 */
  { uint32_t v = 0xac4a90u; esp -= 4; W32(esp, v); }
/* 77790a: push 0xac4aa0 */
  { uint32_t v = 0xac4aa0u; esp -= 4; W32(esp, v); }
/* 77790f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x777915u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 777915: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_777918: /* 777918: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 777919: call 0x9287f0 */
  esp -= 4; W32(esp, 0x77791eu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 77791e: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 777921: je 0x777b7b */
  if (zf) goto L_777b7b;
L_777927: /* 777927: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 777928: call 0x6c78e7 */
  esp -= 4; W32(esp, 0x77792du); SPILL(); f_6c78e7(); if (g_unwind) return; RELOAD();
/* 77792d: mov edi, eax */
  edi = eax;
/* 77792f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777931: mov dword ptr [ebp - 0x70], edi */
  W32((uint32_t)(ebp + 0xffffff90u), edi);
/* 777934: jne 0x77794e */
  if (!zf) goto L_77794e;
L_777936: /* 777936: push 0x3aa */
  { uint32_t v = 0x3aau; esp -= 4; W32(esp, v); }
/* 77793b: push 0xac4aa8 */
  { uint32_t v = 0xac4aa8u; esp -= 4; W32(esp, v); }
/* 777940: push 0xac4ab8 */
  { uint32_t v = 0xac4ab8u; esp -= 4; W32(esp, v); }
/* 777945: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x77794bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 77794b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77794e: /* 77794e: cmp byte ptr [edi + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 777952: jne 0x777b7b */
  if (!zf) goto L_777b7b;
L_777958: /* 777958: mov edi, dword ptr [edi + 0x30c] */
  edi = R32((uint32_t)(edi + 0x30cu));
/* 77795e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777960: jne 0x77797a */
  if (!zf) goto L_77797a;
L_777962: /* 777962: push 0x3b3 */
  { uint32_t v = 0x3b3u; esp -= 4; W32(esp, v); }
/* 777967: push 0xac4ac0 */
  { uint32_t v = 0xac4ac0u; esp -= 4; W32(esp, v); }
/* 77796c: push 0xac4ad0 */
  { uint32_t v = 0xac4ad0u; esp -= 4; W32(esp, v); }
/* 777971: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x777977u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 777977: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77797a: /* 77797a: mov al, byte ptr [edi + 0x9c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x9cu))) & 0xffu);
/* 777980: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 777982: je 0x777b7b */
  if (zf) goto L_777b7b;
L_777988: /* 777988: mov eax, dword ptr [esi + 0x130] */
  eax = R32((uint32_t)(esi + 0x130u));
/* 77798e: mov ecx, dword ptr [esi + 0x134] */
  ecx = R32((uint32_t)(esi + 0x134u));
/* 777994: mov edx, dword ptr [esi + 0x138] */
  edx = R32((uint32_t)(esi + 0x138u));
/* 77799a: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 77799d: mov dword ptr [ebp - 0xb8], eax */
  W32((uint32_t)(ebp + 0xffffff48u), eax);
/* 7779a3: mov eax, dword ptr [esi + 0x13c] */
  eax = R32((uint32_t)(esi + 0x13cu));
/* 7779a9: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* 7779af: mov ecx, dword ptr [esi + 0x140] */
  ecx = R32((uint32_t)(esi + 0x140u));
/* 7779b5: mov dword ptr [ebp - 0xb0], edx */
  W32((uint32_t)(ebp + 0xffffff50u), edx);
/* 7779bb: mov edx, dword ptr [esi + 0x144] */
  edx = R32((uint32_t)(esi + 0x144u));
/* 7779c1: mov dword ptr [ebp - 0xac], eax */
  W32((uint32_t)(ebp + 0xffffff54u), eax);
/* 7779c7: mov eax, dword ptr [esi + 0x148] */
  eax = R32((uint32_t)(esi + 0x148u));
/* 7779cd: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 7779d3: mov ecx, dword ptr [esi + 0x14c] */
  ecx = R32((uint32_t)(esi + 0x14cu));
/* 7779d9: mov dword ptr [ebp - 0xa4], edx */
  W32((uint32_t)(ebp + 0xffffff5cu), edx);
/* 7779df: mov edx, dword ptr [esi + 0x150] */
  edx = R32((uint32_t)(esi + 0x150u));
/* 7779e5: mov dword ptr [ebp - 0xa0], eax */
  W32((uint32_t)(ebp + 0xffffff60u), eax);
/* 7779eb: mov eax, dword ptr [esi + 0x154] */
  eax = R32((uint32_t)(esi + 0x154u));
/* 7779f1: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 7779f7: mov ecx, dword ptr [esi + 0x158] */
  ecx = R32((uint32_t)(esi + 0x158u));
/* 7779fd: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 777a03: mov edx, dword ptr [esi + 0x15c] */
  edx = R32((uint32_t)(esi + 0x15cu));
/* 777a09: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 777a0f: mov eax, dword ptr [esi + 0x160] */
  eax = R32((uint32_t)(esi + 0x160u));
/* 777a15: mov dword ptr [ebp - 0x90], ecx */
  W32((uint32_t)(ebp + 0xffffff70u), ecx);
/* 777a1b: mov ecx, dword ptr [esi + 0x164] */
  ecx = R32((uint32_t)(esi + 0x164u));
/* 777a21: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 777a27: mov edx, dword ptr [esi + 0x168] */
  edx = R32((uint32_t)(esi + 0x168u));
/* 777a2d: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 777a33: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 777a39: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 777a3f: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 777a42: mov dword ptr [ebp - 0x80], edx */
  W32((uint32_t)(ebp + 0xffffff80u), edx);
/* 777a45: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 777a48: shl ebx, 6 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 777a4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777a4c: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 777a4e: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 777a51: lea ecx, [esi + 0xb0] */
  ecx = (uint32_t)(esi + 0xb0u);
/* 777a57: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* 777a5d: lea edx, [esi + 0xa0] */
  edx = (uint32_t)(esi + 0xa0u);
/* 777a63: lea edi, [esi + 0x90] */
  edi = (uint32_t)(esi + 0x90u);
/* 777a69: call 0x7766d0 */
  esp -= 4; W32(esp, 0x777a6eu); SPILL(); f_7766d0(); if (g_unwind) return; RELOAD();
/* 777a6e: mov eax, dword ptr [esi + 0x19c] */
  eax = R32((uint32_t)(esi + 0x19cu));
/* 777a74: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 777a77: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777a79: je 0x777b37 */
  if (zf) goto L_777b37;
L_777a7f: /* 777a7f: fld dword ptr [esi + 0x190] */
  { double v = F32((uint32_t)(esi + 0x190u)); FPUSH(v); }
/* 777a85: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 777a8b: fld dword ptr [esi + 0x194] */
  { double v = F32((uint32_t)(esi + 0x194u)); FPUSH(v); }
/* 777a91: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 777a97: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 777a9a: fld dword ptr [esi + 0x198] */
  { double v = F32((uint32_t)(esi + 0x198u)); FPUSH(v); }
/* 777aa0: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 777aa6: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 777aa9: fld dword ptr [ebp - 0xf8] */
  { double v = F32((uint32_t)(ebp + 0xffffff08u)); FPUSH(v); }
/* 777aaf: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 777ab1: fld dword ptr [ebp - 0xd8] */
  { double v = F32((uint32_t)(ebp + 0xffffff28u)); FPUSH(v); }
/* 777ab7: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 777aba: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 777abc: fld dword ptr [ebp - 0xe8] */
  { double v = F32((uint32_t)(ebp + 0xffffff18u)); FPUSH(v); }
/* 777ac2: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 777ac5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 777ac7: fadd dword ptr [ebp - 0xc8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff38u)));
/* 777acd: fld dword ptr [ebp - 0xf4] */
  { double v = F32((uint32_t)(ebp + 0xffffff0cu)); FPUSH(v); }
/* 777ad3: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 777ad5: fld dword ptr [ebp - 0xd4] */
  { double v = F32((uint32_t)(ebp + 0xffffff2cu)); FPUSH(v); }
/* 777adb: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 777ade: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 777ae0: fld dword ptr [ebp - 0xe4] */
  { double v = F32((uint32_t)(ebp + 0xffffff1cu)); FPUSH(v); }
/* 777ae6: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 777ae9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 777aeb: fadd dword ptr [ebp - 0xc4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff3cu)));
/* 777af1: fld dword ptr [ebp - 0xf0] */
  { double v = F32((uint32_t)(ebp + 0xffffff10u)); FPUSH(v); }
/* 777af7: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 777af9: fld dword ptr [ebp - 0xd0] */
  { double v = F32((uint32_t)(ebp + 0xffffff30u)); FPUSH(v); }
/* 777aff: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 777b02: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 777b04: fld dword ptr [ebp - 0xe0] */
  { double v = F32((uint32_t)(ebp + 0xffffff20u)); FPUSH(v); }
/* 777b0a: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 777b0d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 777b0f: fadd dword ptr [ebp - 0xc0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff40u)));
/* 777b15: fstp dword ptr [ebp - 0x108] */
  WF32((uint32_t)(ebp + 0xfffffef8u), ST0); FPOP();
/* 777b1b: mov edx, dword ptr [ebp - 0x108] */
  edx = R32((uint32_t)(ebp + 0xfffffef8u));
/* 777b21: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 777b23: mov dword ptr [ebp - 0xc0], edx */
  W32((uint32_t)(ebp + 0xffffff40u), edx);
/* 777b29: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 777b2f: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 777b35: fstp st(0) */
  STI(0) = ST0; FPOP();
L_777b37: /* 777b37: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 777b3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777b3b: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 777b3e: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 777b44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777b45: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* 777b4b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777b4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777b4d: call 0x777060 */
  esp -= 4; W32(esp, 0x777b52u); SPILL(); f_777060(); if (g_unwind) return; RELOAD();
/* 777b52: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 777b55: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 777b58: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 777b5b: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 777b5e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 777b61: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 777b63: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 777b65: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 777b68: jnp 0x777b79 */
  if (!pf) goto L_777b79;
L_777b6a: /* 777b6a: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 777b6d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 777b70: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 777b71: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 777b74: jmp 0x777860 */
  goto L_777860;
L_777b79: /* 777b79: fstp st(0) */
  STI(0) = ST0; FPOP();
L_777b7b: /* 777b7b: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 777b7e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 777b7f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 777b82: jmp 0x777860 */
  goto L_777860;
L_777b87: /* 777b87: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 777b8a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 777b8d: fcomp dword ptr [ecx + 0x18c] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x18cu)));
  FPOP();
/* 777b93: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 777b95: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 777b98: jp 0x777ba3 */
  if (pf) goto L_777ba3;
L_777b9a: /* 777b9a: mov ecx, dword ptr [ecx + 0x18c] */
  ecx = R32((uint32_t)(ecx + 0x18cu));
/* 777ba0: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
L_777ba3: /* 777ba3: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 777ba6: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 777ba9: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 777bac: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 777baf: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 777bb2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777bb3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 777bb6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777bb7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777bb8: call 0x7761b0 */
  esp -= 4; W32(esp, 0x777bbdu); SPILL(); f_7761b0(); if (g_unwind) return; RELOAD();
/* 777bbd: jmp 0x777c21 */
  goto L_777c21;
L_777bd6: /* 777bd6: push 0xa08208 */
  { uint32_t v = 0xa08208u; esp -= 4; W32(esp, v); }
/* 777bdb: push 0xac4ad8 */
  { uint32_t v = 0xac4ad8u; esp -= 4; W32(esp, v); }
/* 777be0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x777be6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 777be6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 777be9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 777beb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 777bed: call 0x99caf8 */
  esp -= 4; W32(esp, 0x777bf2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_777bf2: /* 777bf2: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 777bf5: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* 777bf8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 777bfb: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 777bfe: mov edi, esp */
  edi = esp;
/* 777c00: add esi, 0x1dc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1dcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 777c06: mov ecx, 0x13 */
  ecx = 0x13u;
/* 777c0b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 777c0d: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 777c10: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 777c13: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 777c16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777c17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777c18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777c19: call 0x914410 */
  esp -= 4; W32(esp, 0x777c1eu); SPILL(); f_914410(); if (g_unwind) return; RELOAD();
/* 777c1e: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_777c21: /* 777c21: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 777c24: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* 777c2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777c2b: lea edx, [edi + 0x9c] */
  edx = (uint32_t)(edi + 0x9cu);
/* 777c31: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777c32: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 777c39: call 0x974b90 */
  esp -= 4; W32(esp, 0x777c3eu); SPILL(); f_974b90(); if (g_unwind) return; RELOAD();
/* 777c3e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 777c41: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 777c42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 777c43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777c44: call 0x911600 */
  esp -= 4; W32(esp, 0x777c49u); SPILL(); f_911600(); if (g_unwind) return; RELOAD();
/* 777c49: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 777c4c: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 777c4f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 777c50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 777c51: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777c52: call 0x911660 */
  esp -= 4; W32(esp, 0x777c57u); SPILL(); f_911660(); if (g_unwind) return; RELOAD();
/* 777c57: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 777c5a: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 777c5d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 777c5f: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 777c62: je 0x777c7e */
  if (zf) goto L_777c7e;
L_777c64: /* 777c64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777c65: mov edx, eax */
  edx = eax;
/* 777c67: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 777c6c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 777c6e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777c6f: push 0xac4ae0 */
  { uint32_t v = 0xac4ae0u; esp -= 4; W32(esp, v); }
/* 777c74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777c75: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x777c7bu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 777c7b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_777c7e: /* 777c7e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 777c81: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 777c84: cmp edx, dword ptr [eax + 0x24] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 777c87: je 0x777ca1 */
  if (zf) goto L_777ca1;
L_777c89: /* 777c89: push 0x40a */
  { uint32_t v = 0x40au; esp -= 4; W32(esp, v); }
/* 777c8e: push 0xac4b50 */
  { uint32_t v = 0xac4b50u; esp -= 4; W32(esp, v); }
/* 777c93: push 0xac4b60 */
  { uint32_t v = 0xac4b60u; esp -= 4; W32(esp, v); }
/* 777c98: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x777c9eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 777c9e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_777ca1: /* 777ca1: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 777ca4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777ca6: jne 0x777cdf */
  if (!zf) goto L_777cdf;
L_777ca8: /* 777ca8: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* 777cab: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 777cae: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 777cb1: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 777cb4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777cb5: lea edx, [eax + ecx*4] */
  edx = (uint32_t)(eax + ecx*4);
/* 777cb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777cb9: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 777cbc: call 0x776dd0 */
  esp -= 4; W32(esp, 0x777cc1u); SPILL(); f_776dd0(); if (g_unwind) return; RELOAD();
/* 777cc1: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 777cc4: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 777cc7: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 777cc9: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 777ccc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 777ccf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777cd0: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 777cd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777cd4: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 777cd7: call 0x776f30 */
  esp -= 4; W32(esp, 0x777cdcu); SPILL(); f_776f30(); if (g_unwind) return; RELOAD();
/* 777cdc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_777cdf: /* 777cdf: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 777ce2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 777ce3: lea eax, [edi + 0x134] */
  eax = (uint32_t)(edi + 0x134u);
/* 777ce9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777cea: call 0x974b90 */
  esp -= 4; W32(esp, 0x777cefu); SPILL(); f_974b90(); if (g_unwind) return; RELOAD();
/* 777cef: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 777cf2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777cf3: add edi, 0xdc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xdcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 777cf9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 777cfa: call 0x974b90 */
  esp -= 4; W32(esp, 0x777cffu); SPILL(); f_974b90(); if (g_unwind) return; RELOAD();
/* 777cff: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 777d02: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 777d03: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 777d06: jmp 0x777670 */
  goto L_777670;
L_777d3e: /* 777d3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 777d3f: lea ecx, [edi + 0x14c] */
  ecx = (uint32_t)(edi + 0x14cu);
/* 777d45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777d46: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 777d4d: call 0x974b90 */
  esp -= 4; W32(esp, 0x777d52u); SPILL(); f_974b90(); if (g_unwind) return; RELOAD();
/* 777d52: lea ebx, [edi + 0x68] */
  ebx = (uint32_t)(edi + 0x68u);
/* 777d55: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 777d56: call 0x972710 */
  esp -= 4; W32(esp, 0x777d5bu); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 777d5b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_777d5e: /* 777d5e: mov esi, eax */
  esi = eax;
/* 777d60: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777d62: je 0x777da4 */
  if (zf) goto L_777da4;
L_777d64: /* 777d64: mov edi, dword ptr [esi + 0x14] */
  edi = R32((uint32_t)(esi + 0x14u));
/* 777d67: test byte ptr [edi + 0x1ec], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x1ecu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 777d6e: jne 0x777d88 */
  if (!zf) goto L_777d88;
L_777d70: /* 777d70: push 0x425 */
  { uint32_t v = 0x425u; esp -= 4; W32(esp, v); }
/* 777d75: push 0xac4b8c */
  { uint32_t v = 0xac4b8cu; esp -= 4; W32(esp, v); }
/* 777d7a: push 0xac4b9c */
  { uint32_t v = 0xac4b9cu; esp -= 4; W32(esp, v); }
/* 777d7f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x777d85u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 777d85: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_777d88: /* 777d88: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 777d89: call 0x90f180 */
  esp -= 4; W32(esp, 0x777d8eu); SPILL(); f_90f180(); if (g_unwind) return; RELOAD();
/* 777d8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 777d8f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 777d90: mov dword ptr [edi + 0x238], 0x7f7fffff */
  W32((uint32_t)(edi + 0x238u), 0x7f7fffffu);
/* 777d9a: call 0x972770 */
  esp -= 4; W32(esp, 0x777d9fu); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 777d9f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 777da2: jmp 0x777d5e */
  goto L_777d5e;
L_777da4: /* 777da4: xor ebx, ebx */
  ebx = 0;
L_777da6: /* 777da6: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 777da9: xor esi, esi */
  esi = 0;
/* 777dab: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 777dad: jge 0x777de0 */
  if ((sf == of)) goto L_777de0;
L_777daf: /* 777daf: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 777db2: mov edi, dword ptr [edx + ebx*4] */
  edi = R32((uint32_t)(edx + ebx*4));
L_777db5: /* 777db5: cmp esi, dword ptr [ebp - 0x58] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 777db8: jge 0x777ddd */
  if ((sf == of)) goto L_777ddd;
L_777dba: /* 777dba: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 777dbd: cmp edi, dword ptr [eax + esi*4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + esi*4)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 777dc0: jne 0x777dda */
  if (!zf) goto L_777dda;
L_777dc2: /* 777dc2: push 0x434 */
  { uint32_t v = 0x434u; esp -= 4; W32(esp, v); }
/* 777dc7: push 0xac4bbc */
  { uint32_t v = 0xac4bbcu; esp -= 4; W32(esp, v); }
/* 777dcc: push 0xac4bcc */
  { uint32_t v = 0xac4bccu; esp -= 4; W32(esp, v); }
/* 777dd1: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x777dd7u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 777dd7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_777dda: /* 777dda: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 777ddb: jmp 0x777db5 */
  goto L_777db5;
L_777ddd: /* 777ddd: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 777dde: jmp 0x777da6 */
  goto L_777da6;
L_777de0: /* 777de0: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 777de4: mov edi, 0x200 */
  edi = 0x200u;
/* 777de9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_777df0: /* 777df0: cmp esi, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 777df3: jge 0x777e12 */
  if ((sf == of)) goto L_777e12;
L_777df5: /* 777df5: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 777df8: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 777dfb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777dfd: je 0x777e0f */
  if (zf) goto L_777e0f;
L_777dff: /* 777dff: test dword ptr [ecx + 0x80], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x80u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777e05: jne 0x777e0f */
  if (!zf) goto L_777e0f;
L_777e07: /* 777e07: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 777e09: call dword ptr [edx + 0x148] */
  { uint32_t t = R32((uint32_t)(edx + 0x148u)); esp -= 4; W32(esp, 0x777e0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_777e0f: /* 777e0f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 777e10: jmp 0x777df0 */
  goto L_777df0;
L_777e12: /* 777e12: xor esi, esi */
  esi = 0;
L_777e14: /* 777e14: cmp esi, dword ptr [ebp - 0x58] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 777e17: jge 0x777e6c */
  if ((sf == of)) goto L_777e6c;
L_777e19: /* 777e19: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 777e1c: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 777e1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777e21: je 0x777e39 */
  if (zf) goto L_777e39;
L_777e23: /* 777e23: test dword ptr [eax + 0x80], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777e29: jne 0x777e39 */
  if (!zf) goto L_777e39;
L_777e2b: /* 777e2b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 777e2e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 777e30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 777e32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777e33: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x777e39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_777e39: /* 777e39: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 777e3a: jmp 0x777e14 */
  goto L_777e14;
L_777e6c: /* 777e6c: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 777e6f: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 777e76: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x777e7bu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 777e7b: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 777e7e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 777e82: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x777e87u); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 777e87: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 777e8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 777e8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 777e8c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 777e93: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 777e94: mov esp, ebp */
  esp = ebp;
/* 777e96: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 777e97: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_777d0b(void) {
  LOAD_REGS();
L_777d0b: /* 777d0b: mov edx, dword ptr [ebp - 0x104] */
  edx = R32((uint32_t)(ebp + 0xfffffefcu));
/* 777d11: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 777d16: lea eax, [ebp - 0x64] */
  eax = (uint32_t)(ebp + 0xffffff9cu);
/* 777d19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777d1a: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 777d1d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x777d22u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_777d22(); return;
}

void f_777d22(void) {
  LOAD_REGS();
L_777d22: /* 777d22: push 0xa081dc */
  { uint32_t v = 0xa081dcu; esp -= 4; W32(esp, v); }
/* 777d27: push 0xac4b84 */
  { uint32_t v = 0xac4b84u; esp -= 4; W32(esp, v); }
/* 777d2c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x777d32u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 777d32: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 777d35: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 777d37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 777d39: call 0x99caf8 */
  esp -= 4; W32(esp, 0x777d3eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 777d3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 777d3f: lea ecx, [edi + 0x14c] */
  ecx = (uint32_t)(edi + 0x14cu);
/* 777d45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777d46: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 777d4d: call 0x974b90 */
  esp -= 4; W32(esp, 0x777d52u); SPILL(); f_974b90(); if (g_unwind) return; RELOAD();
/* 777d52: lea ebx, [edi + 0x68] */
  ebx = (uint32_t)(edi + 0x68u);
/* 777d55: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 777d56: call 0x972710 */
  esp -= 4; W32(esp, 0x777d5bu); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 777d5b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_777d5e: /* 777d5e: mov esi, eax */
  esi = eax;
/* 777d60: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777d62: je 0x777da4 */
  if (zf) goto L_777da4;
L_777d64: /* 777d64: mov edi, dword ptr [esi + 0x14] */
  edi = R32((uint32_t)(esi + 0x14u));
/* 777d67: test byte ptr [edi + 0x1ec], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x1ecu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 777d6e: jne 0x777d88 */
  if (!zf) goto L_777d88;
L_777d70: /* 777d70: push 0x425 */
  { uint32_t v = 0x425u; esp -= 4; W32(esp, v); }
/* 777d75: push 0xac4b8c */
  { uint32_t v = 0xac4b8cu; esp -= 4; W32(esp, v); }
/* 777d7a: push 0xac4b9c */
  { uint32_t v = 0xac4b9cu; esp -= 4; W32(esp, v); }
/* 777d7f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x777d85u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 777d85: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_777d88: /* 777d88: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 777d89: call 0x90f180 */
  esp -= 4; W32(esp, 0x777d8eu); SPILL(); f_90f180(); if (g_unwind) return; RELOAD();
/* 777d8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 777d8f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 777d90: mov dword ptr [edi + 0x238], 0x7f7fffff */
  W32((uint32_t)(edi + 0x238u), 0x7f7fffffu);
/* 777d9a: call 0x972770 */
  esp -= 4; W32(esp, 0x777d9fu); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 777d9f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 777da2: jmp 0x777d5e */
  goto L_777d5e;
L_777da4: /* 777da4: xor ebx, ebx */
  ebx = 0;
L_777da6: /* 777da6: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 777da9: xor esi, esi */
  esi = 0;
/* 777dab: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 777dad: jge 0x777de0 */
  if ((sf == of)) goto L_777de0;
L_777daf: /* 777daf: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 777db2: mov edi, dword ptr [edx + ebx*4] */
  edi = R32((uint32_t)(edx + ebx*4));
L_777db5: /* 777db5: cmp esi, dword ptr [ebp - 0x58] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 777db8: jge 0x777ddd */
  if ((sf == of)) goto L_777ddd;
L_777dba: /* 777dba: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 777dbd: cmp edi, dword ptr [eax + esi*4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + esi*4)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 777dc0: jne 0x777dda */
  if (!zf) goto L_777dda;
L_777dc2: /* 777dc2: push 0x434 */
  { uint32_t v = 0x434u; esp -= 4; W32(esp, v); }
/* 777dc7: push 0xac4bbc */
  { uint32_t v = 0xac4bbcu; esp -= 4; W32(esp, v); }
/* 777dcc: push 0xac4bcc */
  { uint32_t v = 0xac4bccu; esp -= 4; W32(esp, v); }
/* 777dd1: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x777dd7u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 777dd7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_777dda: /* 777dda: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 777ddb: jmp 0x777db5 */
  goto L_777db5;
L_777ddd: /* 777ddd: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 777dde: jmp 0x777da6 */
  goto L_777da6;
L_777de0: /* 777de0: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 777de4: mov edi, 0x200 */
  edi = 0x200u;
/* 777de9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_777df0: /* 777df0: cmp esi, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 777df3: jge 0x777e12 */
  if ((sf == of)) goto L_777e12;
L_777df5: /* 777df5: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 777df8: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 777dfb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777dfd: je 0x777e0f */
  if (zf) goto L_777e0f;
L_777dff: /* 777dff: test dword ptr [ecx + 0x80], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x80u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777e05: jne 0x777e0f */
  if (!zf) goto L_777e0f;
L_777e07: /* 777e07: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 777e09: call dword ptr [edx + 0x148] */
  { uint32_t t = R32((uint32_t)(edx + 0x148u)); esp -= 4; W32(esp, 0x777e0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_777e0f: /* 777e0f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 777e10: jmp 0x777df0 */
  goto L_777df0;
L_777e12: /* 777e12: xor esi, esi */
  esi = 0;
L_777e14: /* 777e14: cmp esi, dword ptr [ebp - 0x58] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 777e17: jge 0x777e6c */
  if ((sf == of)) goto L_777e6c;
L_777e19: /* 777e19: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 777e1c: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 777e1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777e21: je 0x777e39 */
  if (zf) goto L_777e39;
L_777e23: /* 777e23: test dword ptr [eax + 0x80], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 777e29: jne 0x777e39 */
  if (!zf) goto L_777e39;
L_777e2b: /* 777e2b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 777e2e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 777e30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 777e32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777e33: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x777e39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_777e39: /* 777e39: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 777e3a: jmp 0x777e14 */
  goto L_777e14;
L_777e6c: /* 777e6c: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 777e6f: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 777e76: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x777e7bu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 777e7b: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 777e7e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 777e82: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x777e87u); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 777e87: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 777e8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 777e8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 777e8c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 777e93: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 777e94: mov esp, ebp */
  esp = ebp;
/* 777e96: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 777e97: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_777e3c(void) {
  LOAD_REGS();
L_777e3c: /* 777e3c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 777e3f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 777e44: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 777e47: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 777e48: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 777e4b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x777e50u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_777e50(); return;
}

void f_777e50(void) {
  LOAD_REGS();
L_777e50: /* 777e50: push 0xa081ac */
  { uint32_t v = 0xa081acu; esp -= 4; W32(esp, v); }
/* 777e55: push 0xac4be4 */
  { uint32_t v = 0xac4be4u; esp -= 4; W32(esp, v); }
/* 777e5a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x777e60u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 777e60: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 777e63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 777e65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 777e67: call 0x99caf8 */
  esp -= 4; W32(esp, 0x777e6cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 777e6c: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 777e6f: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 777e76: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x777e7bu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 777e7b: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 777e7e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 777e82: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x777e87u); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 777e87: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 777e8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 777e8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 777e8c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 777e93: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 777e94: mov esp, ebp */
  esp = ebp;
/* 777e96: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 777e97: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_777e9a(void) {
  LOAD_REGS();
L_777e9a: /* 777e9a: mov edx, dword ptr [ebp - 0xfc] */
  edx = R32((uint32_t)(ebp + 0xffffff04u));
/* 777ea0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 777ea5: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 777ea8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 777ea9: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 777eac: call 0x99caf8 */
  esp -= 4; W32(esp, 0x777eb1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_777eb1(); return;
}

void f_777eb1(void) {
  LOAD_REGS();
L_777eb1: /* 777eb1: push 0xa0817c */
  { uint32_t v = 0xa0817cu; esp -= 4; W32(esp, v); }
/* 777eb6: push 0xac4bec */
  { uint32_t v = 0xac4becu; esp -= 4; W32(esp, v); }
/* 777ebb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x777ec1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 777ec1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 777ec4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 777ec6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 777ec8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x777ecdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_777ecd: guest_badaddr(0x777ecd); return;
}

void f_778110(void) {
  LOAD_REGS();
L_778110: /* 778110: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 778114: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 778118: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 77811a: jbe 0x778122 */
  if ((cf | zf)) goto L_778122;
L_77811c: /* 77811c: mov ecx, edx */
  ecx = edx;
/* 77811e: mov edx, eax */
  edx = eax;
/* 778120: mov eax, ecx */
  eax = ecx;
L_778122: /* 778122: ret  */
  esp += 4; SPILL(); return;
}

void f_778140(void) {
  LOAD_REGS();
L_778140: /* 778140: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 778143: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 778147: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 778148: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 77814c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77814d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77814e: call 0x928710 */
  esp -= 4; W32(esp, 0x778153u); SPILL(); f_928710(); if (g_unwind) return; RELOAD();
/* 778153: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 778157: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 77815b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77815c: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 778160: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 778161: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 778162: call 0x928710 */
  esp -= 4; W32(esp, 0x778167u); SPILL(); f_928710(); if (g_unwind) return; RELOAD();
/* 778167: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 77816b: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 77816f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 778171: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 778174: je 0x7781ca */
  if (zf) goto L_7781ca;
L_778176: /* 778176: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 77817a: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 77817e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 778180: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 778183: je 0x7781ca */
  if (zf) goto L_7781ca;
L_778185: /* 778185: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 778189: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 77818d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 77818f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 778192: je 0x7781ca */
  if (zf) goto L_7781ca;
L_778194: /* 778194: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 778198: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 77819c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 77819e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7781a1: je 0x7781ca */
  if (zf) goto L_7781ca;
L_7781a3: /* 7781a3: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 7781a7: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 7781ab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7781ad: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7781b0: je 0x7781ca */
  if (zf) goto L_7781ca;
L_7781b2: /* 7781b2: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 7781b6: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 7781ba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7781bc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7781bf: je 0x7781ca */
  if (zf) goto L_7781ca;
L_7781c1: /* 7781c1: mov eax, 1 */
  eax = 0x1u;
/* 7781c6: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7781c9: ret  */
  esp += 4; SPILL(); return;
L_7781ca: /* 7781ca: xor eax, eax */
  eax = 0;
/* 7781cc: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7781cf: ret  */
  esp += 4; SPILL(); return;
}

void f_778200(void) {
  LOAD_REGS();
L_778200: /* 778200: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 778202: je 0x778223 */
  if (zf) goto L_778223;
L_778204: /* 778204: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 778207: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77820a: fchs  */
  ST0 = -ST0;
/* 77820c: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 778210: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 778213: fchs  */
  ST0 = -ST0;
/* 778215: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 778219: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 77821c: fchs  */
  ST0 = -ST0;
/* 77821e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 778221: jmp 0x77822f */
  goto L_77822f;
L_778223: /* 778223: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 778226: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 778229: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 77822c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77822d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77822e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_77822f: /* 77822f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 778230: call 0x90fb10 */
  esp -= 4; W32(esp, 0x778235u); SPILL(); f_90fb10(); if (g_unwind) return; RELOAD();
/* 778235: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 778238: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 77823b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77823d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77823e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77823f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 778240: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 778241: call 0x90fae0 */
  esp -= 4; W32(esp, 0x778246u); SPILL(); f_90fae0(); if (g_unwind) return; RELOAD();
/* 778246: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 778249: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77824a: fchs  */
  ST0 = -ST0;
/* 77824c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 77824f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 778250: call 0x90fb40 */
  esp -= 4; W32(esp, 0x778255u); SPILL(); f_90fb40(); if (g_unwind) return; RELOAD();
/* 778255: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 778259: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77825a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77825b: call 0x90fb60 */
  esp -= 4; W32(esp, 0x778260u); SPILL(); f_90fb60(); if (g_unwind) return; RELOAD();
/* 778260: ret  */
  esp += 4; SPILL(); return;
}

void f_778290(void) {
  LOAD_REGS();
L_778290: /* 778290: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 778291: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 778292: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 778293: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 778297: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 77829a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77829b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77829c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77829d: call 0x928a30 */
  esp -= 4; W32(esp, 0x7782a2u); SPILL(); f_928a30(); if (g_unwind) return; RELOAD();
/* 7782a2: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 7782a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7782a6: movsx edi, ax */
  edi = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 7782a9: call 0x928a30 */
  esp -= 4; W32(esp, 0x7782aeu); SPILL(); f_928a30(); if (g_unwind) return; RELOAD();
/* 7782ae: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 7782b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7782b2: movsx ebx, ax */
  ebx = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 7782b5: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7782bau); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7782ba: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 7782be: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 7782c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7782c2: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7782c7u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7782c7: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7782cb: xor esi, esi */
  esi = 0;
/* 7782cd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7782cf: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7782d3: jne 0x778303 */
  if (!zf) goto L_778303;
L_7782d5: /* 7782d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7782d7: je 0x7783a3 */
  if (zf) goto L_7783a3;
L_7782dd: /* 7782dd: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7782e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7782e2: call 0x90fc60 */
  esp -= 4; W32(esp, 0x7782e7u); SPILL(); f_90fc60(); if (g_unwind) return; RELOAD();
/* 7782e7: mov esi, eax */
  esi = eax;
/* 7782e9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7782eb: jne 0x77831e */
  if (!zf) goto L_77831e;
L_7782ed: /* 7782ed: push 0xac53c8 */
  { uint32_t v = 0xac53c8u; esp -= 4; W32(esp, v); }
/* 7782f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7782f3: call 0x971e40 */
  esp -= 4; W32(esp, 0x7782f8u); SPILL(); f_971e40(); if (g_unwind) return; RELOAD();
/* 7782f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7782fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7782fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7782fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7782fe: xor eax, eax */
  eax = 0;
/* 778300: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 778301: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 778302: ret  */
  esp += 4; SPILL(); return;
L_778303: /* 778303: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 778305: jne 0x7782dd */
  if (!zf) goto L_7782dd;
L_778307: /* 778307: push 0xac5328 */
  { uint32_t v = 0xac5328u; esp -= 4; W32(esp, v); }
/* 77830c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77830e: call 0x971e40 */
  esp -= 4; W32(esp, 0x778313u); SPILL(); f_971e40(); if (g_unwind) return; RELOAD();
/* 778313: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 778316: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 778317: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 778318: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 778319: xor eax, eax */
  eax = 0;
/* 77831b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77831c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 77831d: ret  */
  esp += 4; SPILL(); return;
L_77831e: /* 77831e: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 778322: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 778324: je 0x778368 */
  if (zf) goto L_778368;
L_778326: /* 778326: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 77832a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77832b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77832c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77832d: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x778332u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 778332: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 778333: call 0x90c130 */
  esp -= 4; W32(esp, 0x778338u); SPILL(); f_90c130(); if (g_unwind) return; RELOAD();
/* 778338: shl edi, 0xf */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 77833b: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 77833d: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  edi = r;
  }
/* 77833f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 778340: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 778341: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x778346u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 778346: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 778347: call 0x90c7a0 */
  esp -= 4; W32(esp, 0x77834cu); SPILL(); f_90c7a0(); if (g_unwind) return; RELOAD();
/* 77834c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77834d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77834e: mov dword ptr [esi + 0x16c], 0 */
  W32((uint32_t)(esi + 0x16cu), 0x0u);
/* 778358: call 0x90fdd0 */
  esp -= 4; W32(esp, 0x77835du); SPILL(); f_90fdd0(); if (g_unwind) return; RELOAD();
/* 77835d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77835e: mov dword ptr [ebp + 0x18], esi */
  W32((uint32_t)(ebp + 0x18u), esi);
/* 778361: mov eax, esi */
  eax = esi;
/* 778363: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 778364: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 778365: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 778366: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 778367: ret  */
  esp += 4; SPILL(); return;
L_778368: /* 778368: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 77836c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77836e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77836f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 778370: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x778375u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 778375: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 778376: call 0x90c130 */
  esp -= 4; W32(esp, 0x77837bu); SPILL(); f_90c130(); if (g_unwind) return; RELOAD();
/* 77837b: shl ebx, 0xf */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 77837e: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 778380: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
/* 778382: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 778383: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 778384: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x778389u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 778389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77838a: call 0x90c7a0 */
  esp -= 4; W32(esp, 0x77838fu); SPILL(); f_90c7a0(); if (g_unwind) return; RELOAD();
/* 77838f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 778390: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 778391: mov dword ptr [esi + 0x16c], 1 */
  W32((uint32_t)(esi + 0x16cu), 0x1u);
/* 77839b: call 0x90fdd0 */
  esp -= 4; W32(esp, 0x7783a0u); SPILL(); f_90fdd0(); if (g_unwind) return; RELOAD();
/* 7783a0: mov dword ptr [ebp + 0x18], esi */
  W32((uint32_t)(ebp + 0x18u), esi);
L_7783a3: /* 7783a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7783a4: mov eax, esi */
  eax = esi;
/* 7783a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7783a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7783a8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7783a9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7783aa: ret  */
  esp += 4; SPILL(); return;
}

void f_778400(void) {
  LOAD_REGS();
L_778400: /* 778400: mov dx, word ptr [esp + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4u))) & 0xffffu);
/* 778405: mov word ptr [eax + 0x14], dx */
  W16((uint32_t)(eax + 0x14u), (edx & 0xffffu));
/* 778409: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 77840d: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 778410: lea edx, [ecx + 8] */
  edx = (uint32_t)(ecx + 0x8u);
/* 778413: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 778415: lea edx, [ecx + 0x14] */
  edx = (uint32_t)(ecx + 0x14u);
/* 778418: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 77841b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77841d: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 778420: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 778423: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 778426: ret  */
  esp += 4; SPILL(); return;
}

void f_778440(void) {
  LOAD_REGS();
L_778440: /* 778440: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 778441: mov ebp, esp */
  ebp = esp;
/* 778443: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 778445: push 0x9cc400 */
  { uint32_t v = 0x9cc400u; esp -= 4; W32(esp, v); }
/* 77844a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 778450: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 778451: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 778458: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77845b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77845c: xor edx, edx */
  edx = 0;
/* 77845e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77845f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 778460: mov edi, ecx */
  edi = ecx;
/* 778462: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 778465: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 778468: mov dword ptr [edi + 0x28], edx */
  W32((uint32_t)(edi + 0x28u), edx);
/* 77846b: mov dword ptr [edi + 0x1c], edx */
  W32((uint32_t)(edi + 0x1cu), edx);
/* 77846e: mov dword ptr [edi + 0x3c], 1 */
  W32((uint32_t)(edi + 0x3cu), 0x1u);
/* 778475: mov dword ptr [edi + 0x34], edx */
  W32((uint32_t)(edi + 0x34u), edx);
/* 778478: xor eax, eax */
  eax = 0;
/* 77847a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_778480: /* 778480: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 778483: mov esi, ecx */
  esi = ecx;
/* 778485: imul esi, ecx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ecx);
  esi = (uint32_t)r;
  }
/* 778488: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77848a: jge 0x778495 */
  if ((sf == of)) goto L_778495;
L_77848c: /* 77848c: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 77848f: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 778492: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 778493: jmp 0x778480 */
  goto L_778480;
L_778495: /* 778495: xor eax, eax */
  eax = 0;
L_778497: /* 778497: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77849a: jg 0x7784b0 */
  if ((!zf && sf == of)) goto L_7784b0;
L_77849c: /* 77849c: mov esi, dword ptr [edi + 0x38] */
  esi = R32((uint32_t)(edi + 0x38u));
/* 77849f: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7784a2: mov dword ptr [esi + ecx*4 + 4], edx */
  W32((uint32_t)(esi + ecx*4 + 0x4u), edx);
/* 7784a6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7784a7: jmp 0x778497 */
  goto L_778497;
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
