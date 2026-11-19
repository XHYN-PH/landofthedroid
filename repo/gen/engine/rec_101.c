#include "recomp.h"
#include "rec_mod.h"

void f_8b352a(void) {
  LOAD_REGS();
L_8b352a: /* 8b352a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8b3530: /* 8b3530: mov eax, dword ptr [edx + 0x27c] */
  eax = R32((uint32_t)(edx + 0x27cu));
/* 8b3536: cmp esi, dword ptr [eax + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b3539: jge 0x8b355f */
  if ((sf == of)) goto L_8b355f;
L_8b353b: /* 8b353b: mov edi, dword ptr [eax + 0x28] */
  edi = R32((uint32_t)(eax + 0x28u));
/* 8b353e: lea ecx, [eax + 0x28] */
  ecx = (uint32_t)(eax + 0x28u);
/* 8b3541: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 8b3544: mov eax, dword ptr [edi + eax*4] */
  eax = R32((uint32_t)(edi + eax*4));
/* 8b3547: test byte ptr [eax + 0x80], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b354e: je 0x8b355c */
  if (zf) goto L_8b355c;
L_8b3550: /* 8b3550: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b3552: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b3553: call 0x6c4dd1 */
  esp -= 4; W32(esp, 0x8b3558u); SPILL(); f_6c4dd1(); if (g_unwind) return; RELOAD();
/* 8b3558: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8b355b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_8b355c: /* 8b355c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b355d: jmp 0x8b3530 */
  goto L_8b3530;
L_8b355f: /* 8b355f: mov edx, dword ptr [edx + 0x27c] */
  edx = R32((uint32_t)(edx + 0x27cu));
/* 8b3565: inc dword ptr [edx + 0x4c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x4cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edx + 0x4cu), r);
  }
/* 8b3568: jmp 0x8b35e4 */
  goto L_8b35e4;
L_8b35e4: /* 8b35e4: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b35e7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b35ea: xor edx, edx */
  edx = 0;
/* 8b35ec: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8b35ef: nop  */
L_8b35f0: /* 8b35f0: cmp edx, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b35f3: jge 0x8b3bc5 */
  if ((sf == of)) goto L_8b3bc5;
L_8b35f9: /* 8b35f9: mov esi, dword ptr [ebp - 0x50] */
  esi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8b35fc: mov edi, dword ptr [esi + edx*4] */
  edi = R32((uint32_t)(esi + edx*4));
/* 8b35ff: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8b3602: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b3604: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 8b3607: je 0x8b361f */
  if (zf) goto L_8b361f;
L_8b3609: /* 8b3609: test byte ptr [ecx + 0x80], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b3610: jne 0x8b361f */
  if (!zf) goto L_8b361f;
L_8b3612: /* 8b3612: test byte ptr [edi + 0x80], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x80u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b3619: je 0x8b3bb9 */
  if (zf) goto L_8b3bb9;
L_8b361f: /* 8b361f: mov esi, dword ptr [ecx + 0x27c] */
  esi = R32((uint32_t)(ecx + 0x27cu));
/* 8b3625: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8b3627: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b362a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b362c: mov ecx, esi */
  ecx = esi;
/* 8b362e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b3634u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b3634: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b3636: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8b3639: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 8b363c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b363e: je 0x8b3654 */
  if (zf) goto L_8b3654;
L_8b3640: /* 8b3640: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8b3643: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b3649u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b3649: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 8b364b: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 8b3652: jmp 0x8b3656 */
  goto L_8b3656;
L_8b3654: /* 8b3654: xor esi, esi */
  esi = 0;
L_8b3656: /* 8b3656: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b3659: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 8b365c: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b365f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8b3660: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8b3663: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b3665: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b3667: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8b366a: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 8b366d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b366e: mov ecx, ebx */
  ecx = ebx;
/* 8b3670: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b3676u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b3676: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 8b3678: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8b367a: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 8b367d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b367e: lea ecx, [edi + 0x17c] */
  ecx = (uint32_t)(edi + 0x17cu);
/* 8b3684: mov byte ptr [ebp - 0x11], 1 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x1u);
/* 8b3688: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x8b368eu); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 8b368e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b3690: mov al, byte ptr [ecx + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x29u))) & 0xffu);
/* 8b3693: xor edx, edx */
  edx = 0;
/* 8b3695: cmp al, 0x13 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8b3697: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8b369a: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 8b36a1: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
L_8b36a4: /* 8b36a4: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b36a7: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8b36aa: cmp ecx, dword ptr [eax + 0x68] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x68u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b36ad: jge 0x8b3bb6 */
  if ((sf == of)) goto L_8b3bb6;
L_8b36b3: /* 8b36b3: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 8b36b6: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8b36b9: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8b36bc: fld dword ptr [eax + ecx + 8] */
  { double v = F32((uint32_t)(eax + ecx + 0x8u)); FPUSH(v); }
/* 8b36c0: mov edx, dword ptr [eax + ecx] */
  edx = R32((uint32_t)(eax + ecx));
/* 8b36c3: fld dword ptr [eax + ecx + 4] */
  { double v = F32((uint32_t)(eax + ecx + 0x4u)); FPUSH(v); }
/* 8b36c7: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b36c9: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 8b36cf: lea eax, [ebp - 0xa4] */
  eax = (uint32_t)(ebp + 0xffffff5cu);
/* 8b36d5: mov dword ptr [ebp - 0xa4], edx */
  W32((uint32_t)(ebp + 0xffffff5cu), edx);
/* 8b36db: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 8b36e1: mov dword ptr [ebp - 0x98], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x3f800000u);
/* 8b36eb: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8b36ee: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b36f1: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8b36f4: lea edi, [ebp - 0x44] */
  edi = (uint32_t)(ebp + 0xffffffbcu);
/* 8b36f7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b36f9: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8b36fb: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b36fd: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8b3700: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b3702: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8b3705: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b3707: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8b370a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b370d: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8b3710: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b3713: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8b3716: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b3719: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8b371c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b371f: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8b3722: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b3724: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b3726: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b3728: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b372a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b372c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b372f: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8b3732: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b3735: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8b3738: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b373b: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8b373e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b3741: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8b3744: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b3746: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b3748: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b374a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b374c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b374e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b3751: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8b3754: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b3757: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8b375a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b375d: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8b3760: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b3763: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8b3766: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b3768: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b376a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b376c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b376e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b3770: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b3772: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8b3774: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8b3776: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8b3779: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8b377c: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8b377f: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b3782: mov eax, dword ptr [edx + 0x64] */
  eax = R32((uint32_t)(edx + 0x64u));
/* 8b3785: fld dword ptr [eax + ecx + 0x14] */
  { double v = F32((uint32_t)(eax + ecx + 0x14u)); FPUSH(v); }
/* 8b3789: lea eax, [eax + ecx + 0xc] */
  eax = (uint32_t)(eax + ecx + 0xcu);
/* 8b378d: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8b3790: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8b3792: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 8b3798: lea edx, [ebp - 0xc4] */
  edx = (uint32_t)(ebp + 0xffffff3cu);
/* 8b379e: mov dword ptr [ebp - 0xc4], ecx */
  W32((uint32_t)(ebp + 0xffffff3cu), ecx);
/* 8b37a4: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* 8b37aa: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 8b37b4: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8b37b7: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b37ba: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8b37bd: lea edi, [ebp - 0xb4] */
  edi = (uint32_t)(ebp + 0xffffff4cu);
/* 8b37c3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b37c5: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8b37c7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b37c9: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8b37cc: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b37ce: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8b37d1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b37d3: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8b37d6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b37d9: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8b37dc: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b37df: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8b37e2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b37e5: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8b37e8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b37eb: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8b37ee: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b37f0: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b37f2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b37f4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b37f6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b37f8: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b37fb: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8b37fe: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b3801: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8b3804: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b3807: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8b380a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b380d: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8b3810: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b3812: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b3814: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b3816: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b3818: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b381a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b381d: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8b3820: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b3823: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8b3826: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b3829: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8b382c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b382f: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8b3832: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b3834: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b3836: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b3838: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b383a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b383c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b383e: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8b3840: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8b3842: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8b3845: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8b3848: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8b384b: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 8b3851: mov eax, dword ptr [ebp - 0xb4] */
  eax = R32((uint32_t)(ebp + 0xffffff4cu));
/* 8b3857: mov edx, dword ptr [ebp - 0xac] */
  edx = R32((uint32_t)(ebp + 0xffffff54u));
/* 8b385d: mov dword ptr [ebp - 0x90], ecx */
  W32((uint32_t)(ebp + 0xffffff70u), ecx);
/* 8b3863: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8b3866: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 8b386c: mov eax, dword ptr [ebp - 0xa8] */
  eax = R32((uint32_t)(ebp + 0xffffff58u));
/* 8b3872: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b3873: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 8b3879: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 8b387f: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 8b3885: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8b388bu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8b388b: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8b388e: xor edi, edi */
  edi = 0;
/* 8b3890: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b3892: jne 0x8b38e4 */
  if (!zf) goto L_8b38e4;
L_8b3894: /* 8b3894: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8b3897: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 8b389d: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8b38a0: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 8b38a6: fsub dword ptr [ebp - 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8b38a9: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 8b38af: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8b38b2: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 8b38b5: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8b38b7: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 8b38ba: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8b38bc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b38be: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8b38c0: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 8b38c3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b38c5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8b38cb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b38cd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8b38cf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b38d2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8b38d4: jp 0x8b391a */
  if (pf) goto L_8b391a;
L_8b38d6: /* 8b38d6: mov dl, byte ptr [ebp - 0x11] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* 8b38d9: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 8b38db: not dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(~(edx & 0xffu)) & 0xffu);
/* 8b38dd: and al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8b38df: jmp 0x8b3b9b */
  goto L_8b3b9b;
L_8b38e4: /* 8b38e4: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8b38e7: fmul dword ptr [ebp - 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 8b38ea: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8b38ed: fmul dword ptr [ebp - 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 8b38f0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b38f2: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8b38f5: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 8b38f8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b38fa: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8b3900: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b3902: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b3905: jne 0x8b3917 */
  if (!zf) goto L_8b3917;
L_8b3907: /* 8b3907: mov al, byte ptr [ebp - 0x11] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* 8b390a: mov cl, byte ptr [ebx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 8b390c: not al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(~(eax & 0xffu)) & 0xffu);
/* 8b390e: and cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8b3910: mov byte ptr [ebx], cl */
  W8((uint32_t)(ebx), (ecx & 0xffu));
/* 8b3912: jmp 0x8b3b9d */
  goto L_8b3b9d;
L_8b3917: /* 8b3917: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
L_8b391a: /* 8b391a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b391d: mov edx, dword ptr [eax + 0x84] */
  edx = R32((uint32_t)(eax + 0x84u));
/* 8b3923: test dh, dh */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((edx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 8b3925: js 0x8b3941 */
  if (sf) goto L_8b3941;
L_8b3927: /* 8b3927: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b3929: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 8b392b: je 0x8b3937 */
  if (zf) goto L_8b3937;
L_8b392d: /* 8b392d: mov cl, byte ptr [ebp - 0x11] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* 8b3930: or al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8b3932: jmp 0x8b3b9b */
  goto L_8b3b9b;
L_8b3937: /* 8b3937: mov dl, byte ptr [ebp - 0x11] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* 8b393a: or al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8b393c: jmp 0x8b3b9b */
  goto L_8b3b9b;
L_8b3941: /* 8b3941: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b3943: mov dword ptr [ebp - 0x124], edi */
  W32((uint32_t)(ebp + 0xfffffedcu), edi);
/* 8b3949: mov dword ptr [ebp - 0x120], edi */
  W32((uint32_t)(ebp + 0xfffffee0u), edi);
/* 8b394f: mov dword ptr [ebp - 0x11c], 0 */
  W32((uint32_t)(ebp + 0xfffffee4u), 0x0u);
/* 8b3959: mov dword ptr [ebp - 0x118], 0 */
  W32((uint32_t)(ebp + 0xfffffee8u), 0x0u);
/* 8b3963: mov dword ptr [ebp - 0x114], 0 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x0u);
/* 8b396d: mov dword ptr [ebp - 0x110], 0 */
  W32((uint32_t)(ebp + 0xfffffef0u), 0x0u);
/* 8b3977: mov dword ptr [ebp - 0x10c], 0 */
  W32((uint32_t)(ebp + 0xfffffef4u), 0x0u);
/* 8b3981: mov dword ptr [ebp - 0x108], 0 */
  W32((uint32_t)(ebp + 0xfffffef8u), 0x0u);
/* 8b398b: mov dword ptr [ebp - 0x104], edi */
  W32((uint32_t)(ebp + 0xfffffefcu), edi);
/* 8b3991: mov dword ptr [ebp - 0x100], 0 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x0u);
/* 8b399b: mov dword ptr [ebp - 0xfc], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff04u), 0xffffffffu);
/* 8b39a5: mov dword ptr [ebp - 0xf8], edi */
  W32((uint32_t)(ebp + 0xffffff08u), edi);
/* 8b39ab: je 0x8b3aab */
  if (zf) goto L_8b3aab;
L_8b39b1: /* 8b39b1: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8b39b4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b39b7: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 8b39bd: mov edx, esp */
  edx = esp;
/* 8b39bf: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8b39c2: mov dword ptr [ebp - 0x80], 0 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x0u);
/* 8b39c9: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 8b39cf: mov esi, dword ptr [ebp - 0x80] */
  esi = R32((uint32_t)(ebp + 0xffffff80u));
/* 8b39d2: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 8b39d4: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 8b39db: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8b39de: mov esi, dword ptr [ebp - 0x7c] */
  esi = R32((uint32_t)(ebp + 0xffffff84u));
/* 8b39e1: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8b39e4: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 8b39e7: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 8b39ed: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 8b39f4: mov esi, dword ptr [ebp - 0x78] */
  esi = R32((uint32_t)(ebp + 0xffffff88u));
/* 8b39f7: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 8b39fa: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 8b3a00: push 0x197 */
  { uint32_t v = 0x197u; esp -= 4; W32(esp, v); }
/* 8b3a05: lea edx, [ebp - 0xf4] */
  edx = (uint32_t)(ebp + 0xffffff0cu);
/* 8b3a0b: fsubr dword ptr [ebp - 0x3c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffc4u))) - ST0;
/* 8b3a0e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b3a0f: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8b3a12: lea edx, [ebp - 0xdc] */
  edx = (uint32_t)(ebp + 0xffffff24u);
/* 8b3a18: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8b3a1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b3a1c: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8b3a1f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b3a20: fsub dword ptr [ebp - 0x140] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffec0u)));
/* 8b3a26: lea edx, [ebp - 0x124] */
  edx = (uint32_t)(ebp + 0xfffffedcu);
/* 8b3a2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b3a2d: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 8b3a33: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 8b3a39: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 8b3a3f: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8b3a42: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 8b3a48: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8b3a4b: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 8b3a51: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8b3a54: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8b3a57: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 8b3a5d: fstp dword ptr [ebp - 0x14c] */
  WF32((uint32_t)(ebp + 0xfffffeb4u), ST0); FPOP();
/* 8b3a63: fsubr dword ptr [ebp - 0x3c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffc4u))) - ST0;
/* 8b3a66: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8b3a69: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8b3a6c: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8b3a6f: fsub dword ptr [ebp - 0x14c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffeb4u)));
/* 8b3a75: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 8b3a7b: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 8b3a81: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 8b3a87: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8b3a8d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8b3a8f: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x8b3a95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b3a95: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b3a97: je 0x8b3b92 */
  if (zf) goto L_8b3b92;
L_8b3a9d: /* 8b3a9d: mov cl, byte ptr [ebx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 8b3a9f: mov al, byte ptr [ebp - 0x11] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* 8b3aa2: or cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8b3aa4: mov byte ptr [ebx], cl */
  W8((uint32_t)(ebx), (ecx & 0xffu));
/* 8b3aa6: jmp 0x8b3b9d */
  goto L_8b3b9d;
L_8b3aab: /* 8b3aab: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 8b3ab1: add esi, 0x170 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b3ab7: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8b3aba: lea ecx, [ebp - 0x158] */
  ecx = (uint32_t)(ebp + 0xfffffea8u);
/* 8b3ac0: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b3ac3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b3ac4: fsub dword ptr [ebp - 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8b3ac7: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 8b3acd: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b3acf: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 8b3ad6: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8b3ad9: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 8b3ae0: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 8b3ae7: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 8b3aed: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 8b3af3: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 8b3af9: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8b3affu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8b3aff: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8b3b02: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8b3b05: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 8b3b0b: mov edi, dword ptr [ebp - 0x6c] */
  edi = R32((uint32_t)(ebp + 0xffffff94u));
/* 8b3b0e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8b3b11: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b3b14: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 8b3b1a: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8b3b1d: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8b3b1f: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 8b3b25: fstp dword ptr [ebp - 0x134] */
  WF32((uint32_t)(ebp + 0xfffffeccu), ST0); FPOP();
/* 8b3b2b: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8b3b2e: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8b3b31: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8b3b34: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8b3b37: fadd dword ptr [ebp - 0x134] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffeccu)));
/* 8b3b3d: fstp dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0); FPOP();
/* 8b3b43: fstp dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0); FPOP();
/* 8b3b49: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 8b3b4f: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 8b3b55: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8b3b57: mov edx, esp */
  edx = esp;
/* 8b3b59: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 8b3b5b: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* 8b3b5e: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 8b3b61: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8b3b64: push 0x197 */
  { uint32_t v = 0x197u; esp -= 4; W32(esp, v); }
/* 8b3b69: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 8b3b6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b3b6d: lea edx, [ebp - 0xd0] */
  edx = (uint32_t)(ebp + 0xffffff30u);
/* 8b3b73: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b3b74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b3b76: lea edx, [ebp - 0x124] */
  edx = (uint32_t)(ebp + 0xfffffedcu);
/* 8b3b7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b3b7d: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x8b3b83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b3b83: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b3b85: je 0x8b3b92 */
  if (zf) goto L_8b3b92;
L_8b3b87: /* 8b3b87: mov cl, byte ptr [ebx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 8b3b89: mov al, byte ptr [ebp - 0x11] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* 8b3b8c: or cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8b3b8e: mov byte ptr [ebx], cl */
  W8((uint32_t)(ebx), (ecx & 0xffu));
/* 8b3b90: jmp 0x8b3b9d */
  goto L_8b3b9d;
L_8b3b92: /* 8b3b92: mov cl, byte ptr [ebp - 0x11] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* 8b3b95: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 8b3b97: not cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(~(ecx & 0xffu)) & 0xffu);
/* 8b3b99: and al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_8b3b9b: /* 8b3b9b: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
L_8b3b9d: /* 8b3b9d: mov al, byte ptr [ebp - 0x11] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* 8b3ba0: shl al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 1;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8b3ba2: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b3ba4: mov byte ptr [ebp - 0x11], al */
  W8((uint32_t)(ebp + 0xffffffefu), (eax & 0xffu));
/* 8b3ba7: jne 0x8b3bae */
  if (!zf) goto L_8b3bae;
L_8b3ba9: /* 8b3ba9: mov byte ptr [ebp - 0x11], 1 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x1u);
/* 8b3bad: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_8b3bae: /* 8b3bae: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 8b3bb1: jmp 0x8b36a4 */
  goto L_8b36a4;
L_8b3bb6: /* 8b3bb6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_8b3bb9: /* 8b3bb9: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b3bbc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8b3bbd: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8b3bc0: jmp 0x8b35f0 */
  goto L_8b35f0;
L_8b3bc5: /* 8b3bc5: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8b3bc8: mov ecx, dword ptr [ecx + 0x27c] */
  ecx = R32((uint32_t)(ecx + 0x27cu));
/* 8b3bce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b3bcf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b3bd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b3bd1: call 0x6cac72 */
  esp -= 4; W32(esp, 0x8b3bd6u); SPILL(); f_6cac72(); if (g_unwind) return; RELOAD();
/* 8b3bd6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b3bd9: and dword ptr [eax + 0x80], 0xffffffdf */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0xffffffdfu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x80u), r);
  }
/* 8b3be0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b3be3: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8b3be6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b3bea: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x8b3befu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 8b3bef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b3bf2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b3bf3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b3bf4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b3bfb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b3bfc: mov esp, ebp */
  esp = ebp;
/* 8b3bfe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b3bff: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8b3c02(void) {
  LOAD_REGS();
L_8b3c02: /* 8b3c02: mov edx, dword ptr [ebp - 0x128] */
  edx = R32((uint32_t)(ebp + 0xfffffed8u));
/* 8b3c08: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b3c0d: lea eax, [ebp - 0x84] */
  eax = (uint32_t)(ebp + 0xffffff7cu);
/* 8b3c13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b3c14: mov dword ptr [ebp - 0x84], edx */
  W32((uint32_t)(ebp + 0xffffff7cu), edx);
/* 8b3c1a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b3c1fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b3c1f(); return;
}

void f_8b3c1f(void) {
  LOAD_REGS();
L_8b3c1f: /* 8b3c1f: push 0xa1b9a8 */
  { uint32_t v = 0xa1b9a8u; esp -= 4; W32(esp, v); }
/* 8b3c24: push 0xae9ea4 */
  { uint32_t v = 0xae9ea4u; esp -= 4; W32(esp, v); }
/* 8b3c29: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b3c2fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b3c2f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b3c32: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b3c34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b3c36: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b3c3bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8b3c3b: guest_badaddr(0x8b3c3b); return;
}

void f_8b3ea0(void) {
  LOAD_REGS();
L_8b3ea0: /* 8b3ea0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b3ea2: push 0x9d6b99 */
  { uint32_t v = 0x9d6b99u; esp -= 4; W32(esp, v); }
/* 8b3ea7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b3ead: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b3eae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b3eb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b3eb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b3eb7: mov esi, ecx */
  esi = ecx;
/* 8b3eb9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8b3ebd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8b3ec0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b3ec1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b3ec3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8b3ecb: call 0x6caed4 */
  esp -= 4; W32(esp, 0x8b3ed0u); SPILL(); f_6caed4(); if (g_unwind) return; RELOAD();
/* 8b3ed0: mov ecx, esi */
  ecx = esi;
/* 8b3ed2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 8b3eda: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8b3ee0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8b3ee0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8b3ee4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b3ee5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b3eec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b3eef: ret  */
  esp += 4; SPILL(); return;
}

void f_8b3f10(void) {
  LOAD_REGS();
L_8b3f10: /* 8b3f10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b3f11: mov ebp, esp */
  ebp = esp;
/* 8b3f13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b3f15: push 0x9d6bb0 */
  { uint32_t v = 0x9d6bb0u; esp -= 4; W32(esp, v); }
/* 8b3f1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b3f20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b3f21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b3f28: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b3f2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b3f2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b3f2d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8b3f30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b3f31: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8b3f34: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b3f37: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8b3f39: xor ebx, ebx */
  ebx = 0;
/* 8b3f3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b3f3c: mov ecx, edi */
  ecx = edi;
/* 8b3f3e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8b3f41: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8b3f47u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8b3f47: mov ecx, esi */
  ecx = esi;
/* 8b3f49: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8b3f4fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8b3f4f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b3f51: je 0x8b3fab */
  if (zf) goto L_8b3fab;
L_8b3f53: /* 8b3f53: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8b3f56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b3f57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b3f58: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8b3f5eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8b3f5e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b3f61: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b3f64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b3f65: mov ecx, edi */
  ecx = edi;
/* 8b3f67: call 0x6c409d */
  esp -= 4; W32(esp, 0x8b3f6cu); SPILL(); f_6c409d(); if (g_unwind) return; RELOAD();
/* 8b3f6c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b3f70: /* 8b3f70: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b3f73: jge 0x8b3fe0 */
  if ((sf == of)) goto L_8b3fe0;
L_8b3f75: /* 8b3f75: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8b3f77: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b3f79: mov ecx, edi */
  ecx = edi;
/* 8b3f7b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b3f81u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b3f81: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 8b3f84: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8b3f86: je 0x8b3f9c */
  if (zf) goto L_8b3f9c;
L_8b3f88: /* 8b3f88: mov ecx, eax */
  ecx = eax;
/* 8b3f8a: call 0x6c1604 */
  esp -= 4; W32(esp, 0x8b3f8fu); SPILL(); f_6c1604(); if (g_unwind) return; RELOAD();
/* 8b3f8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b3f90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b3f91: call 0x6c2775 */
  esp -= 4; W32(esp, 0x8b3f96u); SPILL(); f_6c2775(); if (g_unwind) return; RELOAD();
/* 8b3f96: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b3f99: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b3f9a: jmp 0x8b3f70 */
  goto L_8b3f70;
L_8b3f9c: /* 8b3f9c: xor eax, eax */
  eax = 0;
/* 8b3f9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b3f9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b3fa0: call 0x6c2775 */
  esp -= 4; W32(esp, 0x8b3fa5u); SPILL(); f_6c2775(); if (g_unwind) return; RELOAD();
/* 8b3fa5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b3fa8: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b3fa9: jmp 0x8b3f70 */
  goto L_8b3f70;
L_8b3fab: /* 8b3fab: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 8b3fae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b3faf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b3fb0: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8b3fb6u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8b3fb6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b3fb9: xor esi, esi */
  esi = 0;
/* 8b3fbb: jmp 0x8b3fc0 */
  goto L_8b3fc0;
L_8b3fc0: /* 8b3fc0: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b3fc2: jge 0x8b3fdd */
  if ((sf == of)) goto L_8b3fdd;
L_8b3fc4: /* 8b3fc4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8b3fc6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b3fc9: mov edx, esi */
  edx = esi;
/* 8b3fcb: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 8b3fce: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8b3fd0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b3fd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b3fd2: call 0x6c2775 */
  esp -= 4; W32(esp, 0x8b3fd7u); SPILL(); f_6c2775(); if (g_unwind) return; RELOAD();
/* 8b3fd7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b3fda: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b3fdb: jmp 0x8b3fc0 */
  goto L_8b3fc0;
L_8b3fdd: /* 8b3fdd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_8b3fe0: /* 8b3fe0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b3fe3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b3fe4: mov eax, esi */
  eax = esi;
/* 8b3fe6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b3fe7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b3fee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b3fef: mov esp, ebp */
  esp = ebp;
/* 8b3ff1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b3ff2: ret  */
  esp += 4; SPILL(); return;
}

void f_8b3fbd(void) {
  LOAD_REGS();
L_8b3fbd: /* 8b3fbd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b3fc0: /* 8b3fc0: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b3fc2: jge 0x8b3fdd */
  if ((sf == of)) goto L_8b3fdd;
L_8b3fc4: /* 8b3fc4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8b3fc6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b3fc9: mov edx, esi */
  edx = esi;
/* 8b3fcb: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 8b3fce: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8b3fd0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b3fd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b3fd2: call 0x6c2775 */
  esp -= 4; W32(esp, 0x8b3fd7u); SPILL(); f_6c2775(); if (g_unwind) return; RELOAD();
/* 8b3fd7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b3fda: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b3fdb: jmp 0x8b3fc0 */
  goto L_8b3fc0;
L_8b3fdd: /* 8b3fdd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8b3fe0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b3fe3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b3fe4: mov eax, esi */
  eax = esi;
/* 8b3fe6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b3fe7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b3fee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b3fef: mov esp, ebp */
  esp = ebp;
/* 8b3ff1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b3ff2: ret  */
  esp += 4; SPILL(); return;
}

void f_8b3ff3(void) {
  LOAD_REGS();
L_8b3ff3: /* 8b3ff3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b3ff6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b3ffb: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 8b3ffe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b3fff: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8b4002: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b4007u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b4007(); return;
}

void f_8b4007(void) {
  LOAD_REGS();
L_8b4007: /* 8b4007: push 0xa1b9e4 */
  { uint32_t v = 0xa1b9e4u; esp -= 4; W32(esp, v); }
/* 8b400c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8b4011: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b4017u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b4017: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b401a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b401c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b401e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b4023u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8b4023: guest_badaddr(0x8b4023); return;
}

void f_8b4080(void) {
  LOAD_REGS();
L_8b4080: /* 8b4080: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b4081: mov ebp, esp */
  ebp = esp;
/* 8b4083: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b4085: push 0x9d6bc8 */
  { uint32_t v = 0x9d6bc8u; esp -= 4; W32(esp, v); }
/* 8b408a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b4090: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b4091: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b4098: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b409b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b409c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b409d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8b40a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b40a1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b40a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b40a5: mov edi, ecx */
  edi = ecx;
/* 8b40a7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b40ae: call dword ptr [0xcfa29c] */
  esp -= 4; W32(esp, 0x8b40b4u); SPILL(); f_4e1519(); if (g_unwind) return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */ RELOAD();
/* 8b40b4: mov ecx, esi */
  ecx = esi;
/* 8b40b6: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b40bcu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b40bc: cmp eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b40bf: jge 0x8b40e9 */
  if ((sf == of)) goto L_8b40e9;
L_8b40c1: /* 8b40c1: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8b40c4: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b40cau); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b40ca: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 8b40cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b40ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b40cf: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b40d3: call 0x6ccedc */
  esp -= 4; W32(esp, 0x8b40d8u); SPILL(); f_6ccedc(); if (g_unwind) return; RELOAD();
/* 8b40d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b40db: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8b40de: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b40e2: call 0x6cbec4 */
  esp -= 4; W32(esp, 0x8b40e7u); SPILL(); f_6cbec4(); if (g_unwind) return; RELOAD();
/* 8b40e7: jmp 0x8b40f6 */
  goto L_8b40f6;
L_8b40e9: /* 8b40e9: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 8b40ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b40ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b40ee: call 0x6c2775 */
  esp -= 4; W32(esp, 0x8b40f3u); SPILL(); f_6c2775(); if (g_unwind) return; RELOAD();
/* 8b40f3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b40f6: /* 8b40f6: mov ecx, esi */
  ecx = esi;
/* 8b40f8: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b40feu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b40fe: cmp eax, 0x6e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6eu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b4101: jl 0x8b4110 */
  if ((sf != of)) goto L_8b4110;
L_8b4103: /* 8b4103: add edi, 0x28 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b4106: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b4107: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b4108: call 0x6c7428 */
  esp -= 4; W32(esp, 0x8b410du); SPILL(); f_6c7428(); if (g_unwind) return; RELOAD();
/* 8b410d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b4110: /* 8b4110: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b4113: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b4114: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b4115: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b411c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b411d: mov esp, ebp */
  esp = ebp;
/* 8b411f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b4120: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b4123(void) {
  LOAD_REGS();
L_8b4123: /* 8b4123: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b4126: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b412b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8b412e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b412f: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8b4132: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b4137u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b4137(); return;
}

void f_8b4137(void) {
  LOAD_REGS();
L_8b4137: /* 8b4137: push 0xa1b9fc */
  { uint32_t v = 0xa1b9fcu; esp -= 4; W32(esp, v); }
/* 8b413c: push 0xae9f40 */
  { uint32_t v = 0xae9f40u; esp -= 4; W32(esp, v); }
/* 8b4141: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b4147u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b4147: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b414a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b414c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b414e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b4153u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8b4153: guest_badaddr(0x8b4153); return;
}

void f_8b41a0(void) {
  LOAD_REGS();
L_8b41a0: /* 8b41a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b41a1: mov ebp, esp */
  ebp = esp;
/* 8b41a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b41a5: push 0x9d6be0 */
  { uint32_t v = 0x9d6be0u; esp -= 4; W32(esp, v); }
/* 8b41aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b41b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b41b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b41b8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b41bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b41bc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8b41bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b41c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b41c1: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8b41c4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b41c7: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8b41c9: xor esi, esi */
  esi = 0;
/* 8b41cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b41cc: mov ecx, edi */
  ecx = edi;
/* 8b41ce: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8b41d1: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8b41d7u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8b41d7: mov ecx, ebx */
  ecx = ebx;
/* 8b41d9: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8b41dfu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8b41df: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b41e1: je 0x8b4273 */
  if (zf) goto L_8b4273;
L_8b41e7: /* 8b41e7: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8b41ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b41eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b41ec: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8b41f2u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8b41f2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b41f5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b41f8: xor eax, eax */
  eax = 0;
/* 8b41fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8b4200: /* 8b4200: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b4203: jge 0x8b4208 */
  if ((sf == of)) goto L_8b4208;
L_8b4205: /* 8b4205: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b4206: jmp 0x8b4200 */
  goto L_8b4200;
L_8b4208: /* 8b4208: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b4209: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8b420b: mov ecx, edi */
  ecx = edi;
/* 8b420d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8b4213u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8b4213: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 8b4216: mov ebx, 0xffff */
  ebx = 0xffffu;
/* 8b421b: jmp 0x8b4220 */
  goto L_8b4220;
L_8b4220: /* 8b4220: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b4223: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b4226: jge 0x8b42a0 */
  if ((sf == of)) goto L_8b42a0;
L_8b4228: /* 8b4228: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8b422a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b422c: mov ecx, edi */
  ecx = edi;
/* 8b422e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b4234u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b4234: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8b4237: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8b4239: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8b423c: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b423e: je 0x8b425b */
  if (zf) goto L_8b425b;
L_8b4240: /* 8b4240: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 8b4242: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 8b4245: mov word ptr [eax + 0x10], si */
  W16((uint32_t)(eax + 0x10u), (esi & 0xffffu));
/* 8b4249: mov word ptr [eax + 0xe], si */
  W16((uint32_t)(eax + 0xeu), (esi & 0xffffu));
/* 8b424d: mov word ptr [eax + 8], si */
  W16((uint32_t)(eax + 0x8u), (esi & 0xffffu));
/* 8b4251: mov word ptr [eax + 0xc], bx */
  W16((uint32_t)(eax + 0xcu), (ebx & 0xffffu));
/* 8b4255: mov word ptr [eax + 0xa], bx */
  W16((uint32_t)(eax + 0xau), (ebx & 0xffffu));
/* 8b4259: jmp 0x8b425d */
  goto L_8b425d;
L_8b425b: /* 8b425b: xor eax, eax */
  eax = 0;
L_8b425d: /* 8b425d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b4260: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b4261: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b4262: call 0x6caf6a */
  esp -= 4; W32(esp, 0x8b4267u); SPILL(); f_6caf6a(); if (g_unwind) return; RELOAD();
/* 8b4267: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b426a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b426d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b426e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8b4271: jmp 0x8b4220 */
  goto L_8b4220;
L_8b4273: /* 8b4273: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8b4276: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 8b4279: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b427a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b427b: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8b4281u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8b4281: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b4284: /* 8b4284: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b4286: jge 0x8b42a0 */
  if ((sf == of)) goto L_8b42a0;
L_8b4288: /* 8b4288: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8b428a: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 8b428d: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 8b4290: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b4293: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b4294: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b4295: call 0x6caf6a */
  esp -= 4; W32(esp, 0x8b429au); SPILL(); f_6caf6a(); if (g_unwind) return; RELOAD();
/* 8b429a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b429d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b429e: jmp 0x8b4284 */
  goto L_8b4284;
L_8b42a0: /* 8b42a0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b42a3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b42a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b42a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b42a8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b42af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b42b0: mov esp, ebp */
  esp = ebp;
/* 8b42b2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b42b3: ret  */
  esp += 4; SPILL(); return;
}

void f_8b421d(void) {
  LOAD_REGS();
L_8b421d: /* 8b421d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b4220: /* 8b4220: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b4223: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b4226: jge 0x8b42a0 */
  if ((sf == of)) goto L_8b42a0;
L_8b4228: /* 8b4228: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8b422a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b422c: mov ecx, edi */
  ecx = edi;
/* 8b422e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b4234u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b4234: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8b4237: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8b4239: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8b423c: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b423e: je 0x8b425b */
  if (zf) goto L_8b425b;
L_8b4240: /* 8b4240: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 8b4242: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 8b4245: mov word ptr [eax + 0x10], si */
  W16((uint32_t)(eax + 0x10u), (esi & 0xffffu));
/* 8b4249: mov word ptr [eax + 0xe], si */
  W16((uint32_t)(eax + 0xeu), (esi & 0xffffu));
/* 8b424d: mov word ptr [eax + 8], si */
  W16((uint32_t)(eax + 0x8u), (esi & 0xffffu));
/* 8b4251: mov word ptr [eax + 0xc], bx */
  W16((uint32_t)(eax + 0xcu), (ebx & 0xffffu));
/* 8b4255: mov word ptr [eax + 0xa], bx */
  W16((uint32_t)(eax + 0xau), (ebx & 0xffffu));
/* 8b4259: jmp 0x8b425d */
  goto L_8b425d;
L_8b425b: /* 8b425b: xor eax, eax */
  eax = 0;
L_8b425d: /* 8b425d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b4260: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b4261: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b4262: call 0x6caf6a */
  esp -= 4; W32(esp, 0x8b4267u); SPILL(); f_6caf6a(); if (g_unwind) return; RELOAD();
/* 8b4267: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b426a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b426d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b426e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8b4271: jmp 0x8b4220 */
  goto L_8b4220;
L_8b42a0: /* 8b42a0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b42a3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b42a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b42a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b42a8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b42af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b42b0: mov esp, ebp */
  esp = ebp;
/* 8b42b2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b42b3: ret  */
  esp += 4; SPILL(); return;
}

void f_8b42b4(void) {
  LOAD_REGS();
L_8b42b4: /* 8b42b4: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b42b7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b42bc: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 8b42bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b42c0: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8b42c3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b42c8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b42c8(); return;
}

void f_8b42c8(void) {
  LOAD_REGS();
L_8b42c8: /* 8b42c8: push 0xa1ba48 */
  { uint32_t v = 0xa1ba48u; esp -= 4; W32(esp, v); }
/* 8b42cd: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8b42d2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b42d8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b42d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b42db: xor esi, esi */
  esi = 0;
/* 8b42dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b42de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b42df: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b42e4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8b42e4: guest_badaddr(0x8b42e4); return;
}

void f_8b4350(void) {
  LOAD_REGS();
L_8b4350: /* 8b4350: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b4351: mov ebp, esp */
  ebp = esp;
/* 8b4353: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b4355: push 0x9d6c28 */
  { uint32_t v = 0x9d6c28u; esp -= 4; W32(esp, v); }
/* 8b435a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b4360: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b4361: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b4368: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b436b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b436c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b436d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8b4370: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b4371: mov edi, ecx */
  edi = ecx;
/* 8b4373: xor ebx, ebx */
  ebx = 0;
/* 8b4375: mov ecx, esi */
  ecx = esi;
/* 8b4377: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b437a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8b437d: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b4383u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b4383: cmp eax, 0x55 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x55u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b4386: mov ecx, edi */
  ecx = edi;
/* 8b4388: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b4389: jge 0x8b4393 */
  if ((sf == of)) goto L_8b4393;
L_8b438b: /* 8b438b: call dword ptr [0xcfa29c] */
  esp -= 4; W32(esp, 0x8b4391u); SPILL(); f_4e1519(); if (g_unwind) return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */ RELOAD();
/* 8b4391: jmp 0x8b4398 */
  goto L_8b4398;
L_8b4393: /* 8b4393: call 0x6c974b */
  esp -= 4; W32(esp, 0x8b4398u); SPILL(); f_6c974b(); if (g_unwind) return; RELOAD();
L_8b4398: /* 8b4398: mov ecx, esi */
  ecx = esi;
/* 8b439a: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b43a0u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b43a0: cmp eax, 0x5c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b43a3: jge 0x8b43c1 */
  if ((sf == of)) goto L_8b43c1;
L_8b43a5: /* 8b43a5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8b43a7: lea ecx, [edi + 0x15c] */
  ecx = (uint32_t)(edi + 0x15cu);
/* 8b43ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b43ae: mov ecx, esi */
  ecx = esi;
/* 8b43b0: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x8b43b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b43b3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b43b5: lea ecx, [edi + 0x160] */
  ecx = (uint32_t)(edi + 0x160u);
/* 8b43bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b43bc: mov ecx, eax */
  ecx = eax;
/* 8b43be: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8b43c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8b43c1: /* 8b43c1: lea edx, [edi + 0x54] */
  edx = (uint32_t)(edi + 0x54u);
/* 8b43c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b43c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b43c6: call 0x6cbf87 */
  esp -= 4; W32(esp, 0x8b43cbu); SPILL(); f_6cbf87(); if (g_unwind) return; RELOAD();
/* 8b43cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b43ce: lea ecx, [edi + 0x28] */
  ecx = (uint32_t)(edi + 0x28u);
/* 8b43d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b43d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b43d3: call 0x6cc3f1 */
  esp -= 4; W32(esp, 0x8b43d8u); SPILL(); f_6cc3f1(); if (g_unwind) return; RELOAD();
/* 8b43d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b43db: mov ecx, esi */
  ecx = esi;
/* 8b43dd: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b43e3u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b43e3: cmp eax, 0x4a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4au);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b43e6: jge 0x8b43f6 */
  if ((sf == of)) goto L_8b43f6;
L_8b43e8: /* 8b43e8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8b43ea: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 8b43ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b43ee: mov ecx, esi */
  ecx = esi;
/* 8b43f0: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 8b43f3: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8b43f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8b43f6: /* 8b43f6: mov ecx, esi */
  ecx = esi;
/* 8b43f8: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b43feu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b43fe: cmp eax, 0x5c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b4401: jge 0x8b443f */
  if ((sf == of)) goto L_8b443f;
L_8b4403: /* 8b4403: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8b4406: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b440cu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b440c: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 8b440f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b4413: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x8b4419u); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 8b4419: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8b441c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b441d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b441e: call 0x6c7428 */
  esp -= 4; W32(esp, 0x8b4423u); SPILL(); f_6c7428(); if (g_unwind) return; RELOAD();
/* 8b4423: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b4426: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* 8b4429: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b442a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b442b: call 0x6c97d2 */
  esp -= 4; W32(esp, 0x8b4430u); SPILL(); f_6c97d2(); if (g_unwind) return; RELOAD();
/* 8b4430: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b4433: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8b4436: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b443a: call 0x6c63ac */
  esp -= 4; W32(esp, 0x8b443fu); SPILL(); f_6c63ac(); if (g_unwind) return; RELOAD();
L_8b443f: /* 8b443f: mov ecx, esi */
  ecx = esi;
/* 8b4441: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b4447u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b4447: cmp eax, 0x4a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4au);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b444a: jl 0x8b449a */
  if ((sf != of)) goto L_8b449a;
L_8b444c: /* 8b444c: mov ecx, esi */
  ecx = esi;
/* 8b444e: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b4454u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b4454: cmp eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b4457: jge 0x8b447f */
  if ((sf == of)) goto L_8b447f;
L_8b4459: /* 8b4459: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8b445c: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b4462u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b4462: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 8b4465: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b4466: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b4467: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8b446b: call 0x6c7e8c */
  esp -= 4; W32(esp, 0x8b4470u); SPILL(); f_6c7e8c(); if (g_unwind) return; RELOAD();
/* 8b4470: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b4473: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8b4476: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b447a: call 0x6c104b */
  esp -= 4; W32(esp, 0x8b447fu); SPILL(); f_6c104b(); if (g_unwind) return; RELOAD();
L_8b447f: /* 8b447f: mov ecx, esi */
  ecx = esi;
/* 8b4481: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b4487u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b4487: cmp eax, 0x5c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b448a: jge 0x8b449a */
  if ((sf == of)) goto L_8b449a;
L_8b448c: /* 8b448c: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8b448f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b4490: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b4491: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x8b4497u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 8b4497: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b449a: /* 8b449a: mov ecx, esi */
  ecx = esi;
/* 8b449c: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b44a2u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b44a2: cmp eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b44a5: jl 0x8b4655 */
  if ((sf != of)) goto L_8b4655;
L_8b44ab: /* 8b44ab: lea edx, [edi + 0x64] */
  edx = (uint32_t)(edi + 0x64u);
/* 8b44ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b44af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b44b0: call 0x6c83dc */
  esp -= 4; W32(esp, 0x8b44b5u); SPILL(); f_6c83dc(); if (g_unwind) return; RELOAD();
/* 8b44b5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b44b8: lea ecx, [edi + 0x78] */
  ecx = (uint32_t)(edi + 0x78u);
/* 8b44bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b44bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b44bd: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x8b44c3u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 8b44c3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b44c6: lea edx, [edi + 0x7c] */
  edx = (uint32_t)(edi + 0x7cu);
/* 8b44c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b44ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b44cb: call 0x6c2775 */
  esp -= 4; W32(esp, 0x8b44d0u); SPILL(); f_6c2775(); if (g_unwind) return; RELOAD();
/* 8b44d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b44d3: lea eax, [edi + 0x98] */
  eax = (uint32_t)(edi + 0x98u);
/* 8b44d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b44da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b44db: call 0x6c2775 */
  esp -= 4; W32(esp, 0x8b44e0u); SPILL(); f_6c2775(); if (g_unwind) return; RELOAD();
/* 8b44e0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b44e3: lea ecx, [edi + 0xb4] */
  ecx = (uint32_t)(edi + 0xb4u);
/* 8b44e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b44ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b44eb: call 0x6c5cfe */
  esp -= 4; W32(esp, 0x8b44f0u); SPILL(); f_6c5cfe(); if (g_unwind) return; RELOAD();
/* 8b44f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b44f3: lea edx, [edi + 0xc0] */
  edx = (uint32_t)(edi + 0xc0u);
/* 8b44f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b44fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b44fb: call 0x6c5dd0 */
  esp -= 4; W32(esp, 0x8b4500u); SPILL(); f_6c5dd0(); if (g_unwind) return; RELOAD();
/* 8b4500: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b4503: lea eax, [edi + 0xdc] */
  eax = (uint32_t)(edi + 0xdcu);
/* 8b4509: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b450a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b450b: call 0x6c5dd0 */
  esp -= 4; W32(esp, 0x8b4510u); SPILL(); f_6c5dd0(); if (g_unwind) return; RELOAD();
/* 8b4510: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8b4512: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b4515: lea eax, [edi + 0x104] */
  eax = (uint32_t)(edi + 0x104u);
/* 8b451b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b451c: mov ecx, esi */
  ecx = esi;
/* 8b451e: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8b4521u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b4521: mov ecx, esi */
  ecx = esi;
/* 8b4523: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b4529u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b4529: cmp eax, 0x7e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7eu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b452c: jge 0x8b457f */
  if ((sf == of)) goto L_8b457f;
L_8b452e: /* 8b452e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8b4531: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b4537u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b4537: mov bl, 3 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x3u) & 0xffu);
/* 8b4539: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8b453c: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8b453f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b4545u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b4545: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8b4548: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b4549: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b454a: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8b454e: call 0x6cae52 */
  esp -= 4; W32(esp, 0x8b4553u); SPILL(); f_6cae52(); if (g_unwind) return; RELOAD();
/* 8b4553: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b4556: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8b4559: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b455a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b455b: call 0x6c2130 */
  esp -= 4; W32(esp, 0x8b4560u); SPILL(); f_6c2130(); if (g_unwind) return; RELOAD();
/* 8b4560: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b4563: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8b4566: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8b4569: call 0x6ca556 */
  esp -= 4; W32(esp, 0x8b456eu); SPILL(); f_6ca556(); if (g_unwind) return; RELOAD();
/* 8b456e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8b4571: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b4575: call 0x6c47ff */
  esp -= 4; W32(esp, 0x8b457au); SPILL(); f_6c47ff(); if (g_unwind) return; RELOAD();
/* 8b457a: jmp 0x8b461b */
  goto L_8b461b;
L_8b457f: /* 8b457f: mov ecx, esi */
  ecx = esi;
/* 8b4581: call dword ptr [0xcfac48] */
  esp -= 4; W32(esp, 0x8b4587u); SPILL(); f_4e31a2(); if (g_unwind) return; /* Core!?LicenseeVer@FArchive@@QAEHXZ */ RELOAD();
/* 8b4587: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b458a: jge 0x8b45fe */
  if ((sf == of)) goto L_8b45fe;
L_8b458c: /* 8b458c: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8b458f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b4595u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b4595: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8b4598: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8b459c: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b45a2u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b45a2: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 8b45a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b45a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b45a7: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8b45ab: call 0x6c24c3 */
  esp -= 4; W32(esp, 0x8b45b0u); SPILL(); f_6c24c3(); if (g_unwind) return; RELOAD();
/* 8b45b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b45b3: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8b45b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b45b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b45b8: call 0x6c3963 */
  esp -= 4; W32(esp, 0x8b45bdu); SPILL(); f_6c3963(); if (g_unwind) return; RELOAD();
/* 8b45bd: mov ebx, dword ptr [0xcfa1b4] */
  ebx = R32((uint32_t)(0xcfa1b4u));
/* 8b45c3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b45c6: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 8b45c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b45ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b45cb: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b45cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b45cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b45d0: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8b45d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b45d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b45d5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b45d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b45d7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b45da: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b45dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b45de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b45df: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b45e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b45e1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b45e4: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8b45e7: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8b45eb: call 0x6c4a7a */
  esp -= 4; W32(esp, 0x8b45f0u); SPILL(); f_6c4a7a(); if (g_unwind) return; RELOAD();
/* 8b45f0: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8b45f3: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b45f7: call 0x6c3652 */
  esp -= 4; W32(esp, 0x8b45fcu); SPILL(); f_6c3652(); if (g_unwind) return; RELOAD();
/* 8b45fc: jmp 0x8b461b */
  goto L_8b461b;
L_8b45fe: /* 8b45fe: lea ebx, [edi + 0x108] */
  ebx = (uint32_t)(edi + 0x108u);
/* 8b4604: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b4605: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b4606: call 0x6c2e96 */
  esp -= 4; W32(esp, 0x8b460bu); SPILL(); f_6c2e96(); if (g_unwind) return; RELOAD();
/* 8b460b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b460e: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8b4611: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b4612: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b4613: call 0x6c72cf */
  esp -= 4; W32(esp, 0x8b4618u); SPILL(); f_6c72cf(); if (g_unwind) return; RELOAD();
/* 8b4618: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b461b: /* 8b461b: mov ecx, esi */
  ecx = esi;
/* 8b461d: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b4623u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b4623: cmp eax, 0x72 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x72u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b4626: jge 0x8b4655 */
  if ((sf == of)) goto L_8b4655;
L_8b4628: /* 8b4628: mov ebx, dword ptr [0xcfa280] */
  ebx = R32((uint32_t)(0xcfa280u));
/* 8b462e: lea eax, [edi + 0x120] */
  eax = (uint32_t)(edi + 0x120u);
/* 8b4634: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b4635: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b4636: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b4638u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b4638: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b463b: lea ecx, [edi + 0x124] */
  ecx = (uint32_t)(edi + 0x124u);
/* 8b4641: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b4642: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b4643: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b4645u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b4645: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b4648: lea edx, [edi + 0x128] */
  edx = (uint32_t)(edi + 0x128u);
/* 8b464e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b464f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b4650: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b4652u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b4652: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b4655: /* 8b4655: mov ecx, esi */
  ecx = esi;
/* 8b4657: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b465du); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b465d: cmp eax, 0x4d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4du);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b4660: jl 0x8b467d */
  if ((sf != of)) goto L_8b467d;
L_8b4662: /* 8b4662: mov ecx, esi */
  ecx = esi;
/* 8b4664: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b466au); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b466a: cmp eax, 0x5c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b466d: jge 0x8b467d */
  if ((sf == of)) goto L_8b467d;
L_8b466f: /* 8b466f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8b4671: lea ecx, [edi + 0x164] */
  ecx = (uint32_t)(edi + 0x164u);
/* 8b4677: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b4678: mov ecx, esi */
  ecx = esi;
/* 8b467a: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x8b467du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8b467d: /* 8b467d: mov ecx, esi */
  ecx = esi;
/* 8b467f: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b4685u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b4685: cmp eax, 0x4f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4fu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b4688: jl 0x8b4754 */
  if ((sf != of)) goto L_8b4754;
L_8b468e: /* 8b468e: mov ecx, esi */
  ecx = esi;
/* 8b4690: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b4696u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b4696: cmp eax, 0x61 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x61u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b4699: lea edx, [edi + 0x130] */
  edx = (uint32_t)(edi + 0x130u);
/* 8b469f: jge 0x8b4736 */
  if ((sf == of)) goto L_8b4736;
L_8b46a5: /* 8b46a5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b46a7: je 0x8b46b1 */
  if (zf) goto L_8b46b1;
L_8b46a9: /* 8b46a9: lea eax, [edi + 0x13c] */
  eax = (uint32_t)(edi + 0x13cu);
/* 8b46af: jmp 0x8b46b3 */
  goto L_8b46b3;
L_8b46b1: /* 8b46b1: xor eax, eax */
  eax = 0;
L_8b46b3: /* 8b46b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b46b4: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8b46b7: call 0x6c6ea1 */
  esp -= 4; W32(esp, 0x8b46bcu); SPILL(); f_6c6ea1(); if (g_unwind) return; RELOAD();
/* 8b46bc: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 8b46bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b46c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b46c1: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8b46c5: call 0x6cc347 */
  esp -= 4; W32(esp, 0x8b46cau); SPILL(); f_6cc347(); if (g_unwind) return; RELOAD();
/* 8b46ca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b46cd: mov ecx, esi */
  ecx = esi;
/* 8b46cf: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8b46d5u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8b46d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b46d7: je 0x8b4728 */
  if (zf) goto L_8b4728;
L_8b46d9: /* 8b46d9: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b46dc: lea ecx, [edi + 0x13c] */
  ecx = (uint32_t)(edi + 0x13cu);
/* 8b46e2: xor eax, eax */
  eax = 0;
L_8b46e4: /* 8b46e4: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b46e7: jge 0x8b46ec */
  if ((sf == of)) goto L_8b46ec;
L_8b46e9: /* 8b46e9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b46ea: jmp 0x8b46e4 */
  goto L_8b46e4;
L_8b46ec: /* 8b46ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b46ed: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 8b46f2: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8b46f8u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8b46f8: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b46fb: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 8b4700: lea ebx, [edi + 0x13c] */
  ebx = (uint32_t)(edi + 0x13cu);
/* 8b4706: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b4707: mov ecx, ebx */
  ecx = ebx;
/* 8b4709: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b470fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b470f: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b4712: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8b4715: imul edx, edx, 0x104 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x104u);
  edx = (uint32_t)r;
  }
/* 8b471b: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b471d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b471e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b471f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b4720: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8b4725u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8b4725: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b4728: /* 8b4728: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8b472b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b472f: call 0x6c14ec */
  esp -= 4; W32(esp, 0x8b4734u); SPILL(); f_6c14ec(); if (g_unwind) return; RELOAD();
/* 8b4734: jmp 0x8b4754 */
  goto L_8b4754;
L_8b4736: /* 8b4736: mov eax, dword ptr [0xcfa408] */
  eax = R32((uint32_t)(0xcfa408u));
/* 8b473b: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8b473d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b473e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b473f: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 8b4745: call 0x6cadda */
  esp -= 4; W32(esp, 0x8b474au); SPILL(); f_6cadda(); if (g_unwind) return; RELOAD();
/* 8b474a: mov eax, dword ptr [0xcfa408] */
  eax = R32((uint32_t)(0xcfa408u));
/* 8b474f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b4752: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
L_8b4754: /* 8b4754: mov ecx, esi */
  ecx = esi;
/* 8b4756: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b475cu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b475c: cmp eax, 0x51 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x51u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b475f: mov ecx, esi */
  ecx = esi;
/* 8b4761: jge 0x8b4791 */
  if ((sf == of)) goto L_8b4791;
L_8b4763: /* 8b4763: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8b4769u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8b4769: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b476b: jne 0x8b4785 */
  if (!zf) goto L_8b4785;
L_8b476d: /* 8b476d: push 0x1d6 */
  { uint32_t v = 0x1d6u; esp -= 4; W32(esp, v); }
/* 8b4772: push 0xae9e70 */
  { uint32_t v = 0xae9e70u; esp -= 4; W32(esp, v); }
/* 8b4777: push 0xae9e84 */
  { uint32_t v = 0xae9e84u; esp -= 4; W32(esp, v); }
/* 8b477c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8b4782u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8b4782: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b4785: /* 8b4785: mov dword ptr [edi + 0x148], 0xffffffff */
  W32((uint32_t)(edi + 0x148u), 0xffffffffu);
/* 8b478f: jmp 0x8b47c7 */
  goto L_8b47c7;
L_8b4791: /* 8b4791: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8b4797u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8b4797: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b4799: je 0x8b47a4 */
  if (zf) goto L_8b47a4;
L_8b479b: /* 8b479b: lea ecx, [edi + 0x148] */
  ecx = (uint32_t)(edi + 0x148u);
/* 8b47a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b47a2: jmp 0x8b47bd */
  goto L_8b47bd;
L_8b47a4: /* 8b47a4: mov ecx, esi */
  ecx = esi;
/* 8b47a6: call dword ptr [0xcfa404] */
  esp -= 4; W32(esp, 0x8b47acu); SPILL(); f_4e423c(); if (g_unwind) return; /* Core!?IsSaving@FArchive@@QAEHXZ */ RELOAD();
/* 8b47ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b47ae: je 0x8b47c7 */
  if (zf) goto L_8b47c7;
L_8b47b0: /* 8b47b0: lea eax, [edi + 0x148] */
  eax = (uint32_t)(edi + 0x148u);
/* 8b47b6: mov dword ptr [eax], 0x14 */
  W32((uint32_t)(eax), 0x14u);
/* 8b47bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_8b47bd: /* 8b47bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b47be: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x8b47c4u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 8b47c4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b47c7: /* 8b47c7: mov ecx, esi */
  ecx = esi;
/* 8b47c9: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b47cfu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b47cf: cmp eax, 0x64 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b47d2: jl 0x8b47e2 */
  if ((sf != of)) goto L_8b47e2;
L_8b47d4: /* 8b47d4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8b47d6: lea eax, [edi + 0x168] */
  eax = (uint32_t)(edi + 0x168u);
/* 8b47dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b47dd: mov ecx, esi */
  ecx = esi;
/* 8b47df: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8b47e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8b47e2: /* 8b47e2: mov ecx, esi */
  ecx = esi;
/* 8b47e4: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8b47eau); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8b47ea: cmp eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b47ed: jl 0x8b4800 */
  if ((sf != of)) goto L_8b4800;
L_8b47ef: /* 8b47ef: add edi, 0x158 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x158u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b47f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b47f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b47f7: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x8b47fdu); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 8b47fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b4800: /* 8b4800: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b4803: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b4804: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b4805: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b480c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b480d: mov esp, ebp */
  esp = ebp;
/* 8b480f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b4810: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b4813(void) {
  LOAD_REGS();
L_8b4813: /* 8b4813: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b4816: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b481b: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8b481e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b481f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8b4822: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b4827u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b4827(); return;
}

void f_8b4827(void) {
  LOAD_REGS();
L_8b4827: /* 8b4827: push 0xa1ba60 */
  { uint32_t v = 0xa1ba60u; esp -= 4; W32(esp, v); }
/* 8b482c: push 0xae9e94 */
  { uint32_t v = 0xae9e94u; esp -= 4; W32(esp, v); }
/* 8b4831: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b4837u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b4837: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b483a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b483c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b483e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b4843u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8b4843: guest_badaddr(0x8b4843); return;
}

void f_8b4990(void) {
  LOAD_REGS();
L_8b4990: /* 8b4990: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8b4994: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 8b4998: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8b499b: xor ecx, ecx */
  ecx = 0;
/* 8b499d: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 8b49a1: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8b49a4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b49a6: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 8b49aa: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8b49ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b49ae: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 8b49b2: fcom dword ptr [0xa1ba98] */
  fpu_com(ST0, F32((uint32_t)(0xa1ba98u)));
/* 8b49b8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b49ba: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b49bd: jp 0x8b49c8 */
  if (pf) goto L_8b49c8;
L_8b49bf: /* 8b49bf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8b49c1: mov ecx, 2 */
  ecx = 0x2u;
/* 8b49c6: jmp 0x8b49da */
  goto L_8b49da;
L_8b49c8: /* 8b49c8: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 8b49ce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b49d0: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b49d3: jne 0x8b49da */
  if (!zf) goto L_8b49da;
L_8b49d5: /* 8b49d5: mov ecx, 1 */
  ecx = 0x1u;
L_8b49da: /* 8b49da: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 8b49de: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8b49e1: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 8b49e5: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8b49e8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b49ea: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 8b49ee: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8b49f1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b49f3: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 8b49f7: fcom dword ptr [0xa1ba98] */
  fpu_com(ST0, F32((uint32_t)(0xa1ba98u)));
/* 8b49fd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b49ff: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b4a02: jp 0x8b4a1e */
  if (pf) goto L_8b4a1e;
L_8b4a04: /* 8b4a04: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b4a07: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8b4a09: jne 0x8b4a12 */
  if (!zf) goto L_8b4a12;
L_8b4a0b: /* 8b4a0b: mov ecx, 3 */
  ecx = 0x3u;
/* 8b4a10: jmp 0x8b4a41 */
  goto L_8b4a41;
L_8b4a12: /* 8b4a12: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b4a15: je 0x8b4a41 */
  if (zf) goto L_8b4a41;
L_8b4a17: /* 8b4a17: mov ecx, 2 */
  ecx = 0x2u;
/* 8b4a1c: jmp 0x8b4a41 */
  goto L_8b4a41;
L_8b4a1e: /* 8b4a1e: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 8b4a24: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b4a26: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b4a29: jne 0x8b4a41 */
  if (!zf) goto L_8b4a41;
L_8b4a2b: /* 8b4a2b: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b4a2e: jne 0x8b4a37 */
  if (!zf) goto L_8b4a37;
L_8b4a30: /* 8b4a30: mov ecx, 3 */
  ecx = 0x3u;
/* 8b4a35: jmp 0x8b4a41 */
  goto L_8b4a41;
L_8b4a37: /* 8b4a37: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b4a3a: je 0x8b4a41 */
  if (zf) goto L_8b4a41;
L_8b4a3c: /* 8b4a3c: mov ecx, 1 */
  ecx = 0x1u;
L_8b4a41: /* 8b4a41: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 8b4a45: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8b4a48: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 8b4a4c: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8b4a4f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b4a51: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 8b4a55: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8b4a58: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b4a5a: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 8b4a5e: fcom dword ptr [0xa1ba98] */
  fpu_com(ST0, F32((uint32_t)(0xa1ba98u)));
/* 8b4a64: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b4a66: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b4a69: jp 0x8b4a83 */
  if (pf) goto L_8b4a83;
L_8b4a6b: /* 8b4a6b: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b4a6e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8b4a70: jne 0x8b4a78 */
  if (!zf) goto L_8b4a78;
L_8b4a72: /* 8b4a72: mov eax, 3 */
  eax = 0x3u;
/* 8b4a77: ret  */
  esp += 4; SPILL(); return;
L_8b4a78: /* 8b4a78: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b4a7b: je 0x8b4a9f */
  if (zf) goto L_8b4a9f;
L_8b4a7d: /* 8b4a7d: mov eax, 2 */
  eax = 0x2u;
/* 8b4a82: ret  */
  esp += 4; SPILL(); return;
L_8b4a83: /* 8b4a83: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 8b4a89: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b4a8b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b4a8e: jne 0x8b4a9f */
  if (!zf) goto L_8b4a9f;
L_8b4a90: /* 8b4a90: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b4a93: je 0x8b4a72 */
  if (zf) goto L_8b4a72;
L_8b4a95: /* 8b4a95: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b4a98: mov eax, 1 */
  eax = 0x1u;
/* 8b4a9d: jne 0x8b4aa1 */
  if (!zf) goto L_8b4aa1;
L_8b4a9f: /* 8b4a9f: mov eax, ecx */
  eax = ecx;
L_8b4aa1: /* 8b4aa1: ret  */
  esp += 4; SPILL(); return;
}

void f_8b4b00(void) {
  LOAD_REGS();
L_8b4b00: /* 8b4b00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8b4b04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b4b05: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8b4b07: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8b4b0du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8b4b0d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b4b20(void) {
  LOAD_REGS();
L_8b4b20: /* 8b4b20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b4b21: mov esi, ecx */
  esi = ecx;
/* 8b4b23: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b4b29u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b4b29: mov eax, esi */
  eax = esi;
/* 8b4b2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b4b2c: ret  */
  esp += 4; SPILL(); return;
}

void f_8b4b40(void) {
  LOAD_REGS();
L_8b4b40: /* 8b4b40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8b4b44: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8b4b46: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8b4b49: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b4b4b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b4b60(void) {
  LOAD_REGS();
L_8b4b60: /* 8b4b60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b4b61: mov esi, ecx */
  esi = ecx;
/* 8b4b63: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b4b69u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b4b69: mov eax, esi */
  eax = esi;
/* 8b4b6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b4b6c: ret  */
  esp += 4; SPILL(); return;
}

void f_8b4b80(void) {
  LOAD_REGS();
L_8b4b80: /* 8b4b80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8b4b84: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8b4b86: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 8b4b89: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b4b8b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b4ba0(void) {
  LOAD_REGS();
L_8b4ba0: /* 8b4ba0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b4ba1: mov esi, ecx */
  esi = ecx;
/* 8b4ba3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b4ba9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b4ba9: mov eax, esi */
  eax = esi;
/* 8b4bab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b4bac: ret  */
  esp += 4; SPILL(); return;
}

void f_8b4bc0(void) {
  LOAD_REGS();
L_8b4bc0: /* 8b4bc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b4bc1: mov esi, ecx */
  esi = ecx;
/* 8b4bc3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b4bc9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b4bc9: mov eax, esi */
  eax = esi;
/* 8b4bcb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b4bcc: ret  */
  esp += 4; SPILL(); return;
}

void f_8b4be0(void) {
  LOAD_REGS();
L_8b4be0: /* 8b4be0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8b4be4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8b4be6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8b4be9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8b4bec: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b4c00(void) {
  LOAD_REGS();
L_8b4c00: /* 8b4c00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8b4c04: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 8b4c06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b4c07: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b4c0du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b4c0d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b4c20(void) {
  LOAD_REGS();
L_8b4c20: /* 8b4c20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8b4c24: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8b4c26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b4c27: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b4c2du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b4c2d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b4c40(void) {
  LOAD_REGS();
L_8b4c40: /* 8b4c40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8b4c44: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8b4c46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b4c47: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b4c4du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b4c4d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b4c60(void) {
  LOAD_REGS();
L_8b4c60: /* 8b4c60: mov eax, 1 */
  eax = 0x1u;
/* 8b4c65: ret  */
  esp += 4; SPILL(); return;
}

void f_8b4c80(void) {
  LOAD_REGS();
L_8b4c80: /* 8b4c80: mov eax, 1 */
  eax = 0x1u;
/* 8b4c85: ret  */
  esp += 4; SPILL(); return;
}

void f_8b4ca0(void) {
  LOAD_REGS();
L_8b4ca0: /* 8b4ca0: mov eax, 1 */
  eax = 0x1u;
/* 8b4ca5: ret  */
  esp += 4; SPILL(); return;
}

void f_8b4cc0(void) {
  LOAD_REGS();
L_8b4cc0: /* 8b4cc0: mov eax, 1 */
  eax = 0x1u;
/* 8b4cc5: ret  */
  esp += 4; SPILL(); return;
}

void f_8b4ce0(void) {
  LOAD_REGS();
L_8b4ce0: /* 8b4ce0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b4ce1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8b4ce5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8b4ce7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b4ce9: mov ecx, esi */
  ecx = esi;
/* 8b4ceb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b4cf1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b4cf1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b4cf3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8b4cf6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b4cf8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b4cf9: ret  */
  esp += 4; SPILL(); return;
}

void f_8b4d10(void) {
  LOAD_REGS();
L_8b4d10: /* 8b4d10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b4d11: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8b4d15: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b4d17: je 0x8b4d30 */
  if (zf) goto L_8b4d30;
L_8b4d19: /* 8b4d19: call dword ptr [0xcfaab0] */
  esp -= 4; W32(esp, 0x8b4d1fu); SPILL(); f_4e303f(); if (g_unwind) return; /* Core!?StaticClass@UPackage@@SAPAVUClass@@XZ */ RELOAD();
/* 8b4d1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b4d20: mov ecx, esi */
  ecx = esi;
/* 8b4d22: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8b4d28u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8b4d28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b4d2a: je 0x8b4d30 */
  if (zf) goto L_8b4d30;
L_8b4d2c: /* 8b4d2c: mov eax, esi */
  eax = esi;
/* 8b4d2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b4d2f: ret  */
  esp += 4; SPILL(); return;
L_8b4d30: /* 8b4d30: xor eax, eax */
  eax = 0;
/* 8b4d32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b4d33: ret  */
  esp += 4; SPILL(); return;
}

void f_8b4d50(void) {
  LOAD_REGS();
L_8b4d50: /* 8b4d50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b4d51: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8b4d55: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8b4d57: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b4d59: mov ecx, esi */
  ecx = esi;
/* 8b4d5b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b4d61u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b4d61: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 8b4d64: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b4d66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b4d67: ret  */
  esp += 4; SPILL(); return;
}

void f_8b4d80(void) {
  LOAD_REGS();
L_8b4d80: /* 8b4d80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8b4d84: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8b4d86: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8b4d89: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8b4d8c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b4da0(void) {
  LOAD_REGS();
L_8b4da0: /* 8b4da0: mov dx, word ptr [esp + 8] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x8u))) & 0xffffu);
/* 8b4da5: mov eax, ecx */
  eax = ecx;
/* 8b4da7: mov cx, word ptr [esp + 4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4u))) & 0xffffu);
/* 8b4dac: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 8b4daf: mov cx, word ptr [esp + 0xc] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0xcu))) & 0xffffu);
/* 8b4db4: mov word ptr [eax + 2], dx */
  W16((uint32_t)(eax + 0x2u), (edx & 0xffffu));
/* 8b4db8: mov word ptr [eax + 4], cx */
  W16((uint32_t)(eax + 0x4u), (ecx & 0xffffu));
/* 8b4dbc: mov word ptr [eax + 6], 0 */
  W16((uint32_t)(eax + 0x6u), 0x0u);
/* 8b4dc2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8b4de0(void) {
  LOAD_REGS();
L_8b4de0: /* 8b4de0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b4de1: mov ebp, esp */
  ebp = esp;
/* 8b4de3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b4de5: push 0x9d6c50 */
  { uint32_t v = 0x9d6c50u; esp -= 4; W32(esp, v); }
/* 8b4dea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b4df0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b4df1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b4df8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b4dfb: mov ax, word ptr [ebp + 8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x8u))) & 0xffffu);
/* 8b4dff: mov dx, word ptr [ebp + 0x10] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x10u))) & 0xffffu);
/* 8b4e03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b4e04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b4e05: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 8b4e08: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b4e0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b4e0b: mov edi, ecx */
  edi = ecx;
/* 8b4e0d: mov cx, word ptr [ebp + 0xc] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xcu))) & 0xffffu);
/* 8b4e11: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b4e14: mov word ptr [edi], ax */
  W16((uint32_t)(edi), (eax & 0xffffu));
/* 8b4e17: mov word ptr [edi + 2], cx */
  W16((uint32_t)(edi + 0x2u), (ecx & 0xffffu));
/* 8b4e1b: mov word ptr [edi + 4], dx */
  W16((uint32_t)(edi + 0x4u), (edx & 0xffffu));
/* 8b4e1f: mov word ptr [edi + 6], 0 */
  W16((uint32_t)(edi + 0x6u), 0x0u);
/* 8b4e25: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b4e2c: jne 0x8b4e43 */
  if (!zf) goto L_8b4e43;
L_8b4e2e: /* 8b4e2e: push 0x55 */
  { uint32_t v = 0x55u; esp -= 4; W32(esp, v); }
/* 8b4e30: push 0xaea320 */
  { uint32_t v = 0xaea320u; esp -= 4; W32(esp, v); }
/* 8b4e35: push 0xaea30c */
  { uint32_t v = 0xaea30cu; esp -= 4; W32(esp, v); }
/* 8b4e3a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8b4e40u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8b4e40: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b4e43: /* 8b4e43: mov ax, word ptr [esi + 0xf0] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0xf0u))) & 0xffffu);
/* 8b4e4a: mov word ptr [edi + 6], ax */
  W16((uint32_t)(edi + 0x6u), (eax & 0xffffu));
/* 8b4e4e: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 8b4e51: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 8b4e54: push 0x40400000 */
  { uint32_t v = 0x40400000u; esp -= 4; W32(esp, v); }
/* 8b4e59: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 8b4e5c: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8b4e5f: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 8b4e62: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b4e63: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8b4e66: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8b4e69: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b4e6c: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 8b4e6e: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8b4e71: fadd dword ptr [esi + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x20u)));
/* 8b4e74: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8b4e77: fadd dword ptr [esi + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x1cu)));
/* 8b4e7a: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8b4e7d: fadd dword ptr [esi + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x18u)));
/* 8b4e80: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8b4e83: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8b4e86: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8b4e89: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8b4e8fu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8b4e8f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8b4e91: lea edx, [edi + 8] */
  edx = (uint32_t)(edi + 0x8u);
/* 8b4e94: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8b4e96: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8b4e99: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8b4e9c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8b4e9f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b4ea2: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8b4ea5: mov eax, edi */
  eax = edi;
/* 8b4ea7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b4ea8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b4ea9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b4eb0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b4eb1: mov esp, ebp */
  esp = ebp;
/* 8b4eb3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b4eb4: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8b4eb7(void) {
  LOAD_REGS();
L_8b4eb7: /* 8b4eb7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8b4eba: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b4ebf: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8b4ec2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b4ec3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8b4ec6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b4ecbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b4ecb(); return;
}

void f_8b4ecb(void) {
  LOAD_REGS();
L_8b4ecb: /* 8b4ecb: push 0xa1ba9c */
  { uint32_t v = 0xa1ba9cu; esp -= 4; W32(esp, v); }
/* 8b4ed0: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8b4ed5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b4edbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b4edb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b4ede: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b4ee0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b4ee2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b4ee7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8b4ee7: guest_badaddr(0x8b4ee7); return;
}

void f_8b4f40(void) {
  LOAD_REGS();
L_8b4f40: /* 8b4f40: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8b4f44: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8b4f46: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8b4f4a: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 8b4f4c: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8b4f52: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b4f54: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b4f57: je 0x8b4f5b */
  if (zf) goto L_8b4f5b;
L_8b4f59: /* 8b4f59: fchs  */
  ST0 = -ST0;
L_8b4f5b: /* 8b4f5b: fcomp dword ptr [0xa1b8c4] */
  fpu_com(ST0, F32((uint32_t)(0xa1b8c4u)));
  FPOP();
/* 8b4f61: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b4f63: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b4f66: je 0x8b4fac */
  if (zf) goto L_8b4fac;
L_8b4f68: /* 8b4f68: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8b4f6b: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 8b4f6e: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8b4f74: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b4f76: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b4f79: je 0x8b4f7d */
  if (zf) goto L_8b4f7d;
L_8b4f7b: /* 8b4f7b: fchs  */
  ST0 = -ST0;
L_8b4f7d: /* 8b4f7d: fcomp dword ptr [0xa1b8c4] */
  fpu_com(ST0, F32((uint32_t)(0xa1b8c4u)));
  FPOP();
/* 8b4f83: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b4f85: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b4f88: je 0x8b4fac */
  if (zf) goto L_8b4fac;
L_8b4f8a: /* 8b4f8a: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8b4f8d: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 8b4f90: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8b4f96: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b4f98: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b4f9b: je 0x8b4f9f */
  if (zf) goto L_8b4f9f;
L_8b4f9d: /* 8b4f9d: fchs  */
  ST0 = -ST0;
L_8b4f9f: /* 8b4f9f: fcomp dword ptr [0xa1b8c4] */
  fpu_com(ST0, F32((uint32_t)(0xa1b8c4u)));
  FPOP();
/* 8b4fa5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b4fa7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b4faa: jne 0x8b4faf */
  if (!zf) goto L_8b4faf;
L_8b4fac: /* 8b4fac: xor eax, eax */
  eax = 0;
/* 8b4fae: ret  */
  esp += 4; SPILL(); return;
L_8b4faf: /* 8b4faf: mov eax, 1 */
  eax = 0x1u;
/* 8b4fb4: ret  */
  esp += 4; SPILL(); return;
}

void f_8b4fe0(void) {
  LOAD_REGS();
L_8b4fe0: /* 8b4fe0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8b4fe4: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8b4fe6: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8b4fea: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 8b4fec: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8b4ff2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b4ff4: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b4ff7: je 0x8b4ffb */
  if (zf) goto L_8b4ffb;
L_8b4ff9: /* 8b4ff9: fchs  */
  ST0 = -ST0;
L_8b4ffb: /* 8b4ffb: fcomp dword ptr [0xa1bae0] */
  fpu_com(ST0, F32((uint32_t)(0xa1bae0u)));
  FPOP();
/* 8b5001: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b5003: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b5006: je 0x8b504c */
  if (zf) goto L_8b504c;
L_8b5008: /* 8b5008: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8b500b: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 8b500e: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8b5014: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b5016: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b5019: je 0x8b501d */
  if (zf) goto L_8b501d;
L_8b501b: /* 8b501b: fchs  */
  ST0 = -ST0;
L_8b501d: /* 8b501d: fcomp dword ptr [0xa1bae0] */
  fpu_com(ST0, F32((uint32_t)(0xa1bae0u)));
  FPOP();
/* 8b5023: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b5025: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b5028: je 0x8b504c */
  if (zf) goto L_8b504c;
L_8b502a: /* 8b502a: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8b502d: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 8b5030: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8b5036: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b5038: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b503b: je 0x8b503f */
  if (zf) goto L_8b503f;
L_8b503d: /* 8b503d: fchs  */
  ST0 = -ST0;
L_8b503f: /* 8b503f: fcomp dword ptr [0xa1bae0] */
  fpu_com(ST0, F32((uint32_t)(0xa1bae0u)));
  FPOP();
/* 8b5045: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b5047: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b504a: jne 0x8b504f */
  if (!zf) goto L_8b504f;
L_8b504c: /* 8b504c: xor eax, eax */
  eax = 0;
/* 8b504e: ret  */
  esp += 4; SPILL(); return;
L_8b504f: /* 8b504f: mov eax, 1 */
  eax = 0x1u;
/* 8b5054: ret  */
  esp += 4; SPILL(); return;
}

void f_8b5080(void) {
  LOAD_REGS();
L_8b5080: /* 8b5080: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b5081: mov ebp, esp */
  ebp = esp;
/* 8b5083: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b5085: push 0x9d6c60 */
  { uint32_t v = 0x9d6c60u; esp -= 4; W32(esp, v); }
/* 8b508a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b5090: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b5091: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b5098: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b509b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b509c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b509d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8b50a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b50a1: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8b50a4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b50a7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b50ae: xor eax, eax */
  eax = 0;
L_8b50b0: /* 8b50b0: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b50b3: jge 0x8b50e8 */
  if ((sf == of)) goto L_8b50e8;
L_8b50b5: /* 8b50b5: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8b50b7: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 8b50ba: mov ecx, eax */
  ecx = eax;
/* 8b50bc: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8b50bf: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b50c1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8b50c3: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b50c5: jne 0x8b50e5 */
  if (!zf) goto L_8b50e5;
L_8b50c7: /* 8b50c7: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8b50ca: cmp edx, dword ptr [esi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b50cc: jne 0x8b50e5 */
  if (!zf) goto L_8b50e5;
L_8b50ce: /* 8b50ce: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 8b50d1: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 8b50d4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b50d7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b50de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b50df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b50e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b50e1: mov esp, ebp */
  esp = ebp;
/* 8b50e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b50e4: ret  */
  esp += 4; SPILL(); return;
L_8b50e5: /* 8b50e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b50e6: jmp 0x8b50b0 */
  goto L_8b50b0;
L_8b50e8: /* 8b50e8: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8b50ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b50ec: mov ecx, edi */
  ecx = edi;
/* 8b50ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b50f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b50f4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8b50f6: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8b50f9: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8b50fb: je 0x8b5113 */
  if (zf) goto L_8b5113;
L_8b50fd: /* 8b50fd: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b50ff: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8b5101: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 8b5104: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8b5107: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8b510a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8b510d: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 8b5110: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
L_8b5113: /* 8b5113: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8b5116: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b5119: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b511a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b511b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8b511c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b5123: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b5124: mov esp, ebp */
  esp = ebp;
/* 8b5126: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b5127: ret  */
  esp += 4; SPILL(); return;
}

void f_8b5128(void) {
  LOAD_REGS();
L_8b5128: /* 8b5128: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b512b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b5130: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8b5133: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b5134: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8b5137: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b513cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b513c(); return;
}

void f_8b513c(void) {
  LOAD_REGS();
L_8b513c: /* 8b513c: push 0xa1bae4 */
  { uint32_t v = 0xa1bae4u; esp -= 4; W32(esp, v); }
/* 8b5141: push 0xaea19c */
  { uint32_t v = 0xaea19cu; esp -= 4; W32(esp, v); }
/* 8b5146: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b514cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b514c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b514f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b5151: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b5153: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b5158u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8b5158: guest_badaddr(0x8b5158); return;
}

void f_8b51a0(void) {
  LOAD_REGS();
L_8b51a0: /* 8b51a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b51a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b51a2: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 8b51a4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b51a6: mov esi, ecx */
  esi = ecx;
/* 8b51a8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b51aeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b51ae: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8b51b0: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8b51b4: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8b51b7: lea edi, [edx + ecx*8] */
  edi = (uint32_t)(edx + ecx*8);
/* 8b51ba: mov ecx, 6 */
  ecx = 0x6u;
/* 8b51bf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8b51c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b51c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b51c3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b51e0(void) {
  LOAD_REGS();
L_8b51e0: /* 8b51e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b51e1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8b51e3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b51e5: mov esi, ecx */
  esi = ecx;
/* 8b51e7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b51edu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b51ed: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8b51ef: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8b51f3: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 8b51f5: mov dword ptr [edx + eax*8], esi */
  W32((uint32_t)(edx + eax*8), esi);
/* 8b51f8: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8b51fb: mov dword ptr [edx + eax*8 + 4], ecx */
  W32((uint32_t)(edx + eax*8 + 0x4u), ecx);
/* 8b51ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b5200: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b5220(void) {
  LOAD_REGS();
L_8b5220: /* 8b5220: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b5221: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8b5223: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b5225: mov esi, ecx */
  esi = ecx;
/* 8b5227: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b522du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b522d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8b522f: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8b5232: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8b5235: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8b5239: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 8b523b: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 8b523d: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 8b5240: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 8b5243: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8b5246: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8b5249: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b524a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b5260(void) {
  LOAD_REGS();
L_8b5260: /* 8b5260: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b5261: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b5262: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 8b5268: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b5269: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b526a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 8b526e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b5270: mov esi, ecx */
  esi = ecx;
/* 8b5272: jge 0x8b5288 */
  if ((sf == of)) goto L_8b5288;
L_8b5274: /* 8b5274: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8b5279: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b527e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8b5283: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8b5285u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b5285: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b5288: /* 8b5288: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b528b: jle 0x8b52a1 */
  if ((zf || sf != of)) goto L_8b52a1;
L_8b528d: /* 8b528d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8b5292: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b5297: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8b529c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8b529eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b529e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b52a1: /* 8b52a1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 8b52a5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8b52a8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 8b52ab: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b52ad: jle 0x8b52c3 */
  if ((zf || sf != of)) goto L_8b52c3;
L_8b52af: /* 8b52af: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8b52b4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b52b9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8b52be: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8b52c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b52c0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b52c3: /* 8b52c3: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8b52c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b52c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b52c7: mov ecx, esi */
  ecx = esi;
/* 8b52c9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8b52cfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8b52cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b52d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b52d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b52d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b52d3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8b5300(void) {
  LOAD_REGS();
L_8b5300: /* 8b5300: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b5301: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b5302: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 8b5308: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b5309: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b530a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 8b530e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b5310: mov esi, ecx */
  esi = ecx;
/* 8b5312: jge 0x8b5328 */
  if ((sf == of)) goto L_8b5328;
L_8b5314: /* 8b5314: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8b5319: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b531e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8b5323: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8b5325u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b5325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b5328: /* 8b5328: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b532b: jle 0x8b5341 */
  if ((zf || sf != of)) goto L_8b5341;
L_8b532d: /* 8b532d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8b5332: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b5337: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8b533c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8b533eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b533e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b5341: /* 8b5341: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 8b5345: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8b5348: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 8b534b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b534d: jle 0x8b5363 */
  if ((zf || sf != of)) goto L_8b5363;
L_8b534f: /* 8b534f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8b5354: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b5359: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8b535e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8b5360u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b5360: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b5363: /* 8b5363: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8b5365: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b5366: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b5367: mov ecx, esi */
  ecx = esi;
/* 8b5369: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8b536fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8b536f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b5370: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b5371: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b5372: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b5373: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8b53a0(void) {
  LOAD_REGS();
L_8b53a0: /* 8b53a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b53a1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b53a2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 8b53a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b53a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b53aa: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 8b53ae: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b53b0: mov esi, ecx */
  esi = ecx;
/* 8b53b2: jge 0x8b53c8 */
  if ((sf == of)) goto L_8b53c8;
L_8b53b4: /* 8b53b4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8b53b9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b53be: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8b53c3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8b53c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b53c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b53c8: /* 8b53c8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b53cb: jle 0x8b53e1 */
  if ((zf || sf != of)) goto L_8b53e1;
L_8b53cd: /* 8b53cd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8b53d2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b53d7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8b53dc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8b53deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b53de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b53e1: /* 8b53e1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 8b53e5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8b53e8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 8b53eb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b53ed: jle 0x8b5403 */
  if ((zf || sf != of)) goto L_8b5403;
L_8b53ef: /* 8b53ef: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8b53f4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b53f9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8b53fe: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8b5400u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b5400: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b5403: /* 8b5403: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8b5405: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b5406: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b5407: mov ecx, esi */
  ecx = esi;
/* 8b5409: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8b540fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8b540f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b5410: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b5411: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b5412: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b5413: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8b5440(void) {
  LOAD_REGS();
L_8b5440: /* 8b5440: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b5441: mov esi, ecx */
  esi = ecx;
/* 8b5443: call 0x6c6fb4 */
  esp -= 4; W32(esp, 0x8b5448u); SPILL(); f_6c6fb4(); if (g_unwind) return; RELOAD();
/* 8b5448: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b544d: je 0x8b545c */
  if (zf) goto L_8b545c;
L_8b544f: /* 8b544f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8b5454: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8b5456: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8b5458: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b5459: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8b545cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8b545c: /* 8b545c: mov eax, esi */
  eax = esi;
/* 8b545e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b545f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b5480(void) {
  LOAD_REGS();
L_8b5480: /* 8b5480: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b5481: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8b5485: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8b5487: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b5489: mov ecx, esi */
  ecx = esi;
/* 8b548b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b5491u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b5491: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b5493: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8b5496: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8b5499: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b549a: ret  */
  esp += 4; SPILL(); return;
}

void f_8b54b0(void) {
  LOAD_REGS();
L_8b54b0: /* 8b54b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b54b1: mov ebp, esp */
  ebp = esp;
/* 8b54b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b54b5: push 0x9d6c70 */
  { uint32_t v = 0x9d6c70u; esp -= 4; W32(esp, v); }
/* 8b54ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b54c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b54c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b54c8: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b54cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b54cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b54cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b54ce: xor esi, esi */
  esi = 0;
/* 8b54d0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b54d3: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8b54d6: mov dword ptr [ebp - 0x18], 0x3a800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3a800000u);
/* 8b54dd: mov dword ptr [ebp - 0x1c], 0x3a800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3a800000u);
/* 8b54e4: mov dword ptr [ebp - 0x14], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffecu), 0xffffffffu);
/* 8b54eb: jmp 0x8b54f0 */
  goto L_8b54f0;
L_8b54f0: /* 8b54f0: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8b54f3: cmp esi, dword ptr [ebx + 0x68] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x68u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b54f6: jge 0x8b55be */
  if ((sf == of)) goto L_8b55be;
L_8b54fc: /* 8b54fc: mov ecx, dword ptr [ebx + 0x64] */
  ecx = R32((uint32_t)(ebx + 0x64u));
/* 8b54ff: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 8b5502: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 8b5505: lea edi, [ecx + eax*8] */
  edi = (uint32_t)(ecx + eax*8);
/* 8b5508: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b5509: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b550a: call 0x6c285b */
  esp -= 4; W32(esp, 0x8b550fu); SPILL(); f_6c285b(); if (g_unwind) return; RELOAD();
/* 8b550f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b5512: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b5514: je 0x8b55b5 */
  if (zf) goto L_8b55b5;
L_8b551a: /* 8b551a: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 8b551d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b551f: jne 0x8b55bb */
  if (!zf) goto L_8b55bb;
L_8b5525: /* 8b5525: lea eax, [ebp + 0x18] */
  eax = (uint32_t)(ebp + 0x18u);
/* 8b5528: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b5529: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b552c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b552d: call 0x6c603c */
  esp -= 4; W32(esp, 0x8b5532u); SPILL(); f_6c603c(); if (g_unwind) return; RELOAD();
/* 8b5532: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b5535: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b5537: je 0x8b55b5 */
  if (zf) goto L_8b55b5;
L_8b5539: /* 8b5539: mov ecx, dword ptr [ebx + 0x80] */
  ecx = R32((uint32_t)(ebx + 0x80u));
/* 8b553f: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 8b5542: cmp dword ptr [ecx + esi*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + esi*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b5545: jne 0x8b55b5 */
  if (!zf) goto L_8b55b5;
L_8b5547: /* 8b5547: xor ecx, ecx */
  ecx = 0;
/* 8b5549: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b5550: /* 8b5550: cmp ecx, dword ptr [ebp + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5553: jge 0x8b55ac */
  if ((sf == of)) goto L_8b55ac;
L_8b5555: /* 8b5555: mov edx, dword ptr [ebx + 0xb4] */
  edx = R32((uint32_t)(ebx + 0xb4u));
/* 8b555b: mov edi, dword ptr [ebp + 0x28] */
  edi = R32((uint32_t)(ebp + 0x28u));
/* 8b555e: mov eax, ecx */
  eax = ecx;
/* 8b5560: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8b5563: mov eax, dword ptr [edx + eax + 4] */
  eax = R32((uint32_t)(edx + eax + 0x4u));
/* 8b5567: fld dword ptr [eax + esi*8] */
  { double v = F32((uint32_t)(eax + esi*8)); FPUSH(v); }
/* 8b556a: lea edx, [eax + esi*8] */
  edx = (uint32_t)(eax + esi*8);
/* 8b556d: fsub dword ptr [edi + ecx*8] */
  ST0 = ST0 - (F32((uint32_t)(edi + ecx*8)));
/* 8b5570: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8b5576: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b5578: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b557b: je 0x8b557f */
  if (zf) goto L_8b557f;
L_8b557d: /* 8b557d: fchs  */
  ST0 = -ST0;
L_8b557f: /* 8b557f: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 8b5582: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b5584: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b5587: je 0x8b55b5 */
  if (zf) goto L_8b55b5;
L_8b5589: /* 8b5589: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 8b558c: fsub dword ptr [edi + ecx*8 + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + ecx*8 + 0x4u)));
/* 8b5590: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8b5596: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b5598: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b559b: je 0x8b559f */
  if (zf) goto L_8b559f;
L_8b559d: /* 8b559d: fchs  */
  ST0 = -ST0;
L_8b559f: /* 8b559f: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* 8b55a2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b55a4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b55a7: je 0x8b55b5 */
  if (zf) goto L_8b55b5;
L_8b55a9: /* 8b55a9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8b55aa: jmp 0x8b5550 */
  goto L_8b5550;
L_8b55ac: /* 8b55ac: mov eax, 1 */
  eax = 0x1u;
/* 8b55b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b55b3: jne 0x8b55bb */
  if (!zf) goto L_8b55bb;
L_8b55b5: /* 8b55b5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b55b6: jmp 0x8b54f0 */
  goto L_8b54f0;
L_8b55bb: /* 8b55bb: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
L_8b55be: /* 8b55be: cmp dword ptr [ebp - 0x14], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b55c2: jne 0x8b5781 */
  if (!zf) goto L_8b5781;
L_8b55c8: /* 8b55c8: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 8b55cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b55cd: je 0x8b55e4 */
  if (zf) goto L_8b55e4;
L_8b55cf: /* 8b55cf: push 0x75 */
  { uint32_t v = 0x75u; esp -= 4; W32(esp, v); }
/* 8b55d1: push 0xae9fd0 */
  { uint32_t v = 0xae9fd0u; esp -= 4; W32(esp, v); }
/* 8b55d6: push 0xae9fe8 */
  { uint32_t v = 0xae9fe8u; esp -= 4; W32(esp, v); }
/* 8b55db: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8b55e1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8b55e1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b55e4: /* 8b55e4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8b55e7: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8b55ea: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8b55ed: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 8b55f0: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8b55f3: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8b55f6: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 8b55f9: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8b55fc: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 8b55ff: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 8b5601: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8b5604: lea esi, [ebx + 0x64] */
  esi = (uint32_t)(ebx + 0x64u);
/* 8b5607: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b5609: mov ecx, esi */
  ecx = esi;
/* 8b560b: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8b560e: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8b5611: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b5617u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b5617: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8b5619: mov ebx, eax */
  ebx = eax;
/* 8b561b: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 8b561e: lea edi, [edx + ecx*8] */
  edi = (uint32_t)(edx + ecx*8);
/* 8b5621: mov ecx, 6 */
  ecx = 0x6u;
/* 8b5626: lea esi, [ebp - 0x3c] */
  esi = (uint32_t)(ebp + 0xffffffc4u);
/* 8b5629: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8b562b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8b562e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b5630: lea esi, [edi + 0x80] */
  esi = (uint32_t)(edi + 0x80u);
/* 8b5636: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b5638: mov ecx, esi */
  ecx = esi;
/* 8b563a: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8b563d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b5643u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b5643: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b5645: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b5647: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 8b564a: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8b564d: je 0x8b5667 */
  if (zf) goto L_8b5667;
L_8b564f: /* 8b564f: push 0x81 */
  { uint32_t v = 0x81u; esp -= 4; W32(esp, v); }
/* 8b5654: push 0xae9ff8 */
  { uint32_t v = 0xae9ff8u; esp -= 4; W32(esp, v); }
/* 8b5659: push 0xaea010 */
  { uint32_t v = 0xaea010u; esp -= 4; W32(esp, v); }
/* 8b565e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8b5664u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8b5664: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b5667: /* 8b5667: mov al, 0xff */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 8b5669: mov byte ptr [ebp - 0x18], al */
  W8((uint32_t)(ebp + 0xffffffe8u), (eax & 0xffu));
/* 8b566c: mov byte ptr [ebp - 0x17], al */
  W8((uint32_t)(ebp + 0xffffffe9u), (eax & 0xffu));
/* 8b566f: mov byte ptr [ebp - 0x16], al */
  W8((uint32_t)(ebp + 0xffffffeau), (eax & 0xffu));
/* 8b5672: mov al, byte ptr [ebp + 0x27] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x27u))) & 0xffu);
/* 8b5675: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b5677: lea esi, [edi + 0x9c] */
  esi = (uint32_t)(edi + 0x9cu);
/* 8b567d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b567f: mov ecx, esi */
  ecx = esi;
/* 8b5681: mov byte ptr [ebp - 0x15], al */
  W8((uint32_t)(ebp + 0xffffffebu), (eax & 0xffu));
/* 8b5684: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b568au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b568a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b568c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b568e: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b5691: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8b5694: je 0x8b56ae */
  if (zf) goto L_8b56ae;
L_8b5696: /* 8b5696: push 0x82 */
  { uint32_t v = 0x82u; esp -= 4; W32(esp, v); }
/* 8b569b: push 0xaea054 */
  { uint32_t v = 0xaea054u; esp -= 4; W32(esp, v); }
/* 8b56a0: push 0xaea070 */
  { uint32_t v = 0xaea070u; esp -= 4; W32(esp, v); }
/* 8b56a5: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8b56abu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8b56ab: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b56ae: /* 8b56ae: xor esi, esi */
  esi = 0;
L_8b56b0: /* 8b56b0: mov eax, dword ptr [ebp + 0x2c] */
  eax = R32((uint32_t)(ebp + 0x2cu));
/* 8b56b3: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b56b5: jge 0x8b5708 */
  if ((sf == of)) goto L_8b5708;
L_8b56b7: /* 8b56b7: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 8b56bd: mov eax, esi */
  eax = esi;
/* 8b56bf: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8b56c2: lea edi, [eax + ecx + 4] */
  edi = (uint32_t)(eax + ecx + 0x4u);
/* 8b56c6: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8b56c8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b56ca: mov ecx, edi */
  ecx = edi;
/* 8b56cc: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b56d2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b56d2: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8b56d4: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 8b56d7: mov edi, dword ptr [ecx + esi*8] */
  edi = R32((uint32_t)(ecx + esi*8));
/* 8b56da: mov dword ptr [edx + eax*8], edi */
  W32((uint32_t)(edx + eax*8), edi);
/* 8b56dd: mov ecx, dword ptr [ecx + esi*8 + 4] */
  ecx = R32((uint32_t)(ecx + esi*8 + 0x4u));
/* 8b56e1: mov dword ptr [edx + eax*8 + 4], ecx */
  W32((uint32_t)(edx + eax*8 + 0x4u), ecx);
/* 8b56e5: cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b56e8: je 0x8b5702 */
  if (zf) goto L_8b5702;
L_8b56ea: /* 8b56ea: push 0x85 */
  { uint32_t v = 0x85u; esp -= 4; W32(esp, v); }
/* 8b56ef: push 0xaea0cc */
  { uint32_t v = 0xaea0ccu; esp -= 4; W32(esp, v); }
/* 8b56f4: push 0xaea0e8 */
  { uint32_t v = 0xaea0e8u; esp -= 4; W32(esp, v); }
/* 8b56f9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8b56ffu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8b56ff: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b5702: /* 8b5702: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8b5705: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b5706: jmp 0x8b56b0 */
  goto L_8b56b0;
L_8b5708: /* 8b5708: mov esi, eax */
  esi = eax;
/* 8b570a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8b5710: /* 8b5710: cmp esi, dword ptr [edi + 0xb8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xb8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5716: jge 0x8b5781 */
  if ((sf == of)) goto L_8b5781;
L_8b5718: /* 8b5718: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 8b571e: mov edx, esi */
  edx = esi;
/* 8b5720: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8b5723: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b5725: lea ecx, [edx + eax + 4] */
  ecx = (uint32_t)(edx + eax + 0x4u);
/* 8b5729: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8b572b: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8b5731u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8b5731: cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b5734: je 0x8b574e */
  if (zf) goto L_8b574e;
L_8b5736: /* 8b5736: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 8b573b: push 0xaea138 */
  { uint32_t v = 0xaea138u; esp -= 4; W32(esp, v); }
/* 8b5740: push 0xaea150 */
  { uint32_t v = 0xaea150u; esp -= 4; W32(esp, v); }
/* 8b5745: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8b574bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8b574b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b574e: /* 8b574e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b574f: jmp 0x8b5710 */
  goto L_8b5710;
L_8b5781: /* 8b5781: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b5784: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b5787: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b5788: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b5789: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b5790: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b5791: mov esp, ebp */
  esp = ebp;
/* 8b5793: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b5794: ret  */
  esp += 4; SPILL(); return;
}

void f_8b54ed(void) {
  LOAD_REGS();
L_8b54ed: /* 8b54ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b54f0: /* 8b54f0: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8b54f3: cmp esi, dword ptr [ebx + 0x68] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x68u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b54f6: jge 0x8b55be */
  if ((sf == of)) goto L_8b55be;
L_8b54fc: /* 8b54fc: mov ecx, dword ptr [ebx + 0x64] */
  ecx = R32((uint32_t)(ebx + 0x64u));
/* 8b54ff: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 8b5502: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 8b5505: lea edi, [ecx + eax*8] */
  edi = (uint32_t)(ecx + eax*8);
/* 8b5508: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b5509: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b550a: call 0x6c285b */
  esp -= 4; W32(esp, 0x8b550fu); SPILL(); f_6c285b(); if (g_unwind) return; RELOAD();
/* 8b550f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b5512: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b5514: je 0x8b55b5 */
  if (zf) goto L_8b55b5;
L_8b551a: /* 8b551a: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 8b551d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b551f: jne 0x8b55bb */
  if (!zf) goto L_8b55bb;
L_8b5525: /* 8b5525: lea eax, [ebp + 0x18] */
  eax = (uint32_t)(ebp + 0x18u);
/* 8b5528: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b5529: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b552c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b552d: call 0x6c603c */
  esp -= 4; W32(esp, 0x8b5532u); SPILL(); f_6c603c(); if (g_unwind) return; RELOAD();
/* 8b5532: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b5535: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b5537: je 0x8b55b5 */
  if (zf) goto L_8b55b5;
L_8b5539: /* 8b5539: mov ecx, dword ptr [ebx + 0x80] */
  ecx = R32((uint32_t)(ebx + 0x80u));
/* 8b553f: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 8b5542: cmp dword ptr [ecx + esi*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + esi*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b5545: jne 0x8b55b5 */
  if (!zf) goto L_8b55b5;
L_8b5547: /* 8b5547: xor ecx, ecx */
  ecx = 0;
/* 8b5549: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b5550: /* 8b5550: cmp ecx, dword ptr [ebp + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5553: jge 0x8b55ac */
  if ((sf == of)) goto L_8b55ac;
L_8b5555: /* 8b5555: mov edx, dword ptr [ebx + 0xb4] */
  edx = R32((uint32_t)(ebx + 0xb4u));
/* 8b555b: mov edi, dword ptr [ebp + 0x28] */
  edi = R32((uint32_t)(ebp + 0x28u));
/* 8b555e: mov eax, ecx */
  eax = ecx;
/* 8b5560: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8b5563: mov eax, dword ptr [edx + eax + 4] */
  eax = R32((uint32_t)(edx + eax + 0x4u));
/* 8b5567: fld dword ptr [eax + esi*8] */
  { double v = F32((uint32_t)(eax + esi*8)); FPUSH(v); }
/* 8b556a: lea edx, [eax + esi*8] */
  edx = (uint32_t)(eax + esi*8);
/* 8b556d: fsub dword ptr [edi + ecx*8] */
  ST0 = ST0 - (F32((uint32_t)(edi + ecx*8)));
/* 8b5570: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8b5576: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b5578: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b557b: je 0x8b557f */
  if (zf) goto L_8b557f;
L_8b557d: /* 8b557d: fchs  */
  ST0 = -ST0;
L_8b557f: /* 8b557f: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 8b5582: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b5584: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b5587: je 0x8b55b5 */
  if (zf) goto L_8b55b5;
L_8b5589: /* 8b5589: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 8b558c: fsub dword ptr [edi + ecx*8 + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + ecx*8 + 0x4u)));
/* 8b5590: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8b5596: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b5598: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b559b: je 0x8b559f */
  if (zf) goto L_8b559f;
L_8b559d: /* 8b559d: fchs  */
  ST0 = -ST0;
L_8b559f: /* 8b559f: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* 8b55a2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b55a4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b55a7: je 0x8b55b5 */
  if (zf) goto L_8b55b5;
L_8b55a9: /* 8b55a9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8b55aa: jmp 0x8b5550 */
  goto L_8b5550;
L_8b55ac: /* 8b55ac: mov eax, 1 */
  eax = 0x1u;
/* 8b55b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b55b3: jne 0x8b55bb */
  if (!zf) goto L_8b55bb;
L_8b55b5: /* 8b55b5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b55b6: jmp 0x8b54f0 */
  goto L_8b54f0;
L_8b55bb: /* 8b55bb: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
L_8b55be: /* 8b55be: cmp dword ptr [ebp - 0x14], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b55c2: jne 0x8b5781 */
  if (!zf) goto L_8b5781;
L_8b55c8: /* 8b55c8: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 8b55cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b55cd: je 0x8b55e4 */
  if (zf) goto L_8b55e4;
L_8b55cf: /* 8b55cf: push 0x75 */
  { uint32_t v = 0x75u; esp -= 4; W32(esp, v); }
/* 8b55d1: push 0xae9fd0 */
  { uint32_t v = 0xae9fd0u; esp -= 4; W32(esp, v); }
/* 8b55d6: push 0xae9fe8 */
  { uint32_t v = 0xae9fe8u; esp -= 4; W32(esp, v); }
/* 8b55db: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8b55e1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8b55e1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b55e4: /* 8b55e4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8b55e7: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8b55ea: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8b55ed: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 8b55f0: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8b55f3: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8b55f6: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 8b55f9: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8b55fc: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 8b55ff: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 8b5601: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8b5604: lea esi, [ebx + 0x64] */
  esi = (uint32_t)(ebx + 0x64u);
/* 8b5607: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b5609: mov ecx, esi */
  ecx = esi;
/* 8b560b: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8b560e: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8b5611: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b5617u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b5617: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8b5619: mov ebx, eax */
  ebx = eax;
/* 8b561b: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 8b561e: lea edi, [edx + ecx*8] */
  edi = (uint32_t)(edx + ecx*8);
/* 8b5621: mov ecx, 6 */
  ecx = 0x6u;
/* 8b5626: lea esi, [ebp - 0x3c] */
  esi = (uint32_t)(ebp + 0xffffffc4u);
/* 8b5629: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8b562b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8b562e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b5630: lea esi, [edi + 0x80] */
  esi = (uint32_t)(edi + 0x80u);
/* 8b5636: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b5638: mov ecx, esi */
  ecx = esi;
/* 8b563a: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8b563d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b5643u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b5643: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b5645: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b5647: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 8b564a: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8b564d: je 0x8b5667 */
  if (zf) goto L_8b5667;
L_8b564f: /* 8b564f: push 0x81 */
  { uint32_t v = 0x81u; esp -= 4; W32(esp, v); }
/* 8b5654: push 0xae9ff8 */
  { uint32_t v = 0xae9ff8u; esp -= 4; W32(esp, v); }
/* 8b5659: push 0xaea010 */
  { uint32_t v = 0xaea010u; esp -= 4; W32(esp, v); }
/* 8b565e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8b5664u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8b5664: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b5667: /* 8b5667: mov al, 0xff */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 8b5669: mov byte ptr [ebp - 0x18], al */
  W8((uint32_t)(ebp + 0xffffffe8u), (eax & 0xffu));
/* 8b566c: mov byte ptr [ebp - 0x17], al */
  W8((uint32_t)(ebp + 0xffffffe9u), (eax & 0xffu));
/* 8b566f: mov byte ptr [ebp - 0x16], al */
  W8((uint32_t)(ebp + 0xffffffeau), (eax & 0xffu));
/* 8b5672: mov al, byte ptr [ebp + 0x27] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x27u))) & 0xffu);
/* 8b5675: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b5677: lea esi, [edi + 0x9c] */
  esi = (uint32_t)(edi + 0x9cu);
/* 8b567d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b567f: mov ecx, esi */
  ecx = esi;
/* 8b5681: mov byte ptr [ebp - 0x15], al */
  W8((uint32_t)(ebp + 0xffffffebu), (eax & 0xffu));
/* 8b5684: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b568au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b568a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b568c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b568e: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b5691: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8b5694: je 0x8b56ae */
  if (zf) goto L_8b56ae;
L_8b5696: /* 8b5696: push 0x82 */
  { uint32_t v = 0x82u; esp -= 4; W32(esp, v); }
/* 8b569b: push 0xaea054 */
  { uint32_t v = 0xaea054u; esp -= 4; W32(esp, v); }
/* 8b56a0: push 0xaea070 */
  { uint32_t v = 0xaea070u; esp -= 4; W32(esp, v); }
/* 8b56a5: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8b56abu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8b56ab: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b56ae: /* 8b56ae: xor esi, esi */
  esi = 0;
L_8b56b0: /* 8b56b0: mov eax, dword ptr [ebp + 0x2c] */
  eax = R32((uint32_t)(ebp + 0x2cu));
/* 8b56b3: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b56b5: jge 0x8b5708 */
  if ((sf == of)) goto L_8b5708;
L_8b56b7: /* 8b56b7: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 8b56bd: mov eax, esi */
  eax = esi;
/* 8b56bf: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8b56c2: lea edi, [eax + ecx + 4] */
  edi = (uint32_t)(eax + ecx + 0x4u);
/* 8b56c6: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8b56c8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b56ca: mov ecx, edi */
  ecx = edi;
/* 8b56cc: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b56d2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b56d2: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8b56d4: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 8b56d7: mov edi, dword ptr [ecx + esi*8] */
  edi = R32((uint32_t)(ecx + esi*8));
/* 8b56da: mov dword ptr [edx + eax*8], edi */
  W32((uint32_t)(edx + eax*8), edi);
/* 8b56dd: mov ecx, dword ptr [ecx + esi*8 + 4] */
  ecx = R32((uint32_t)(ecx + esi*8 + 0x4u));
/* 8b56e1: mov dword ptr [edx + eax*8 + 4], ecx */
  W32((uint32_t)(edx + eax*8 + 0x4u), ecx);
/* 8b56e5: cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b56e8: je 0x8b5702 */
  if (zf) goto L_8b5702;
L_8b56ea: /* 8b56ea: push 0x85 */
  { uint32_t v = 0x85u; esp -= 4; W32(esp, v); }
/* 8b56ef: push 0xaea0cc */
  { uint32_t v = 0xaea0ccu; esp -= 4; W32(esp, v); }
/* 8b56f4: push 0xaea0e8 */
  { uint32_t v = 0xaea0e8u; esp -= 4; W32(esp, v); }
/* 8b56f9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8b56ffu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8b56ff: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b5702: /* 8b5702: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8b5705: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b5706: jmp 0x8b56b0 */
  goto L_8b56b0;
L_8b5708: /* 8b5708: mov esi, eax */
  esi = eax;
/* 8b570a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8b5710: /* 8b5710: cmp esi, dword ptr [edi + 0xb8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xb8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5716: jge 0x8b5781 */
  if ((sf == of)) goto L_8b5781;
L_8b5718: /* 8b5718: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 8b571e: mov edx, esi */
  edx = esi;
/* 8b5720: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8b5723: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b5725: lea ecx, [edx + eax + 4] */
  ecx = (uint32_t)(edx + eax + 0x4u);
/* 8b5729: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8b572b: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8b5731u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8b5731: cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b5734: je 0x8b574e */
  if (zf) goto L_8b574e;
L_8b5736: /* 8b5736: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 8b573b: push 0xaea138 */
  { uint32_t v = 0xaea138u; esp -= 4; W32(esp, v); }
/* 8b5740: push 0xaea150 */
  { uint32_t v = 0xaea150u; esp -= 4; W32(esp, v); }
/* 8b5745: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8b574bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8b574b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b574e: /* 8b574e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b574f: jmp 0x8b5710 */
  goto L_8b5710;
L_8b5781: /* 8b5781: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b5784: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b5787: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b5788: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b5789: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b5790: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b5791: mov esp, ebp */
  esp = ebp;
/* 8b5793: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b5794: ret  */
  esp += 4; SPILL(); return;
}

void f_8b5751(void) {
  LOAD_REGS();
L_8b5751: /* 8b5751: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8b5754: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b5759: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 8b575c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b575d: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8b5760: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b5765u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b5765(); return;
}

void f_8b5765(void) {
  LOAD_REGS();
L_8b5765: /* 8b5765: push 0xa1bb08 */
  { uint32_t v = 0xa1bb08u; esp -= 4; W32(esp, v); }
/* 8b576a: push 0xaea194 */
  { uint32_t v = 0xaea194u; esp -= 4; W32(esp, v); }
/* 8b576f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b5775u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b5775: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b5778: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b577a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b577c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b5781u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8b5781: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b5784: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b5787: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b5788: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b5789: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b5790: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b5791: mov esp, ebp */
  esp = ebp;
/* 8b5793: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b5794: ret  */
  esp += 4; SPILL(); return;
}

void f_8b5860(void) {
  LOAD_REGS();
L_8b5860: /* 8b5860: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b5862: push 0x9d6c89 */
  { uint32_t v = 0x9d6c89u; esp -= 4; W32(esp, v); }
/* 8b5867: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b586d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b586e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b5875: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b5876: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b5877: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b5878: mov esi, ecx */
  esi = ecx;
/* 8b587a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b587b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 8b587f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8b5882: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b5884: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 8b588a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8b5892: jge 0x8b58a8 */
  if ((sf == of)) goto L_8b58a8;
L_8b5894: /* 8b5894: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8b5899: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b589e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8b58a3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b58a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b58a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b58a8: /* 8b58a8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b58ab: jle 0x8b58c1 */
  if ((zf || sf != of)) goto L_8b58c1;
L_8b58ad: /* 8b58ad: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8b58b2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b58b7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8b58bc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b58beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b58be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b58c1: /* 8b58c1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8b58c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b58c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b58c6: mov ecx, esi */
  ecx = esi;
/* 8b58c8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8b58ceu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8b58ce: mov ecx, esi */
  ecx = esi;
/* 8b58d0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 8b58d8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8b58deu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8b58de: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8b58e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b58e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b58e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b58e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b58ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b58ef: ret  */
  esp += 4; SPILL(); return;
}

void f_8b5920(void) {
  LOAD_REGS();
L_8b5920: /* 8b5920: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b5922: push 0x9d6ca9 */
  { uint32_t v = 0x9d6ca9u; esp -= 4; W32(esp, v); }
/* 8b5927: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b592d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b592e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b5935: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b5936: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b5937: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b5938: mov esi, ecx */
  esi = ecx;
/* 8b593a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b593b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 8b593f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8b5942: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b5944: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 8b594a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8b5952: jge 0x8b5968 */
  if ((sf == of)) goto L_8b5968;
L_8b5954: /* 8b5954: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8b5959: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b595e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8b5963: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b5965u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b5965: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b5968: /* 8b5968: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b596b: jle 0x8b5981 */
  if ((zf || sf != of)) goto L_8b5981;
L_8b596d: /* 8b596d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8b5972: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b5977: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8b597c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b597eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b597e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b5981: /* 8b5981: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8b5983: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b5984: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b5986: mov ecx, esi */
  ecx = esi;
/* 8b5988: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8b598eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8b598e: mov ecx, esi */
  ecx = esi;
/* 8b5990: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 8b5998: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8b599eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8b599e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8b59a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b59a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b59a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b59a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b59ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b59af: ret  */
  esp += 4; SPILL(); return;
}

void f_8b59e0(void) {
  LOAD_REGS();
L_8b59e0: /* 8b59e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b59e2: push 0x9d6cc9 */
  { uint32_t v = 0x9d6cc9u; esp -= 4; W32(esp, v); }
/* 8b59e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b59ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b59ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b59f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b59f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b59f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b59f8: mov esi, ecx */
  esi = ecx;
/* 8b59fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b59fb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 8b59ff: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8b5a02: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b5a04: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 8b5a0a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8b5a12: jge 0x8b5a28 */
  if ((sf == of)) goto L_8b5a28;
L_8b5a14: /* 8b5a14: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8b5a19: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b5a1e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8b5a23: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b5a25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b5a25: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b5a28: /* 8b5a28: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5a2b: jle 0x8b5a41 */
  if ((zf || sf != of)) goto L_8b5a41;
L_8b5a2d: /* 8b5a2d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8b5a32: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b5a37: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8b5a3c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b5a3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b5a3e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b5a41: /* 8b5a41: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8b5a43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b5a44: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b5a46: mov ecx, esi */
  ecx = esi;
/* 8b5a48: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8b5a4eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8b5a4e: mov ecx, esi */
  ecx = esi;
/* 8b5a50: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 8b5a58: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8b5a5eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8b5a5e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8b5a62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b5a63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b5a64: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b5a65: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b5a6c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b5a6f: ret  */
  esp += 4; SPILL(); return;
}

void f_8b5aa0(void) {
  LOAD_REGS();
L_8b5aa0: /* 8b5aa0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b5aa1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 8b5aa5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b5aa7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b5aa8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b5aa9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 8b5aaf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b5ab0: mov ebp, ecx */
  ebp = ecx;
/* 8b5ab2: jge 0x8b5ac8 */
  if ((sf == of)) goto L_8b5ac8;
L_8b5ab4: /* 8b5ab4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8b5ab9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b5abe: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8b5ac3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b5ac5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b5ac5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b5ac8: /* 8b5ac8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5acb: jle 0x8b5ae1 */
  if ((zf || sf != of)) goto L_8b5ae1;
L_8b5acd: /* 8b5acd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8b5ad2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b5ad7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8b5adc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b5adeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b5ade: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b5ae1: /* 8b5ae1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8b5ae5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 8b5ae8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5aeb: jle 0x8b5b01 */
  if ((zf || sf != of)) goto L_8b5b01;
L_8b5aed: /* 8b5aed: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8b5af2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8b5af7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8b5afc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b5afeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b5afe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b5b01: /* 8b5b01: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5b03: jge 0x8b5b20 */
  if ((sf == of)) goto L_8b5b20;
L_8b5b05: /* 8b5b05: mov esi, ebx */
  esi = ebx;
/* 8b5b07: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 8b5b0a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8b5b0c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b5b10: /* 8b5b10: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 8b5b13: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b5b15: call 0x6c6fb4 */
  esp -= 4; W32(esp, 0x8b5b1au); SPILL(); f_6c6fb4(); if (g_unwind) return; RELOAD();
/* 8b5b1a: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b5b1d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 8b5b1e: jne 0x8b5b10 */
  if (!zf) goto L_8b5b10;
L_8b5b20: /* 8b5b20: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8b5b24: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8b5b26: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b5b27: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b5b28: mov ecx, ebp */
  ecx = ebp;
/* 8b5b2a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8b5b30u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8b5b30: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b5b31: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b5b32: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b5b33: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b5b34: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8b5b70(void) {
  LOAD_REGS();
L_8b5b70: /* 8b5b70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b5b72: push 0x9d6ce9 */
  { uint32_t v = 0x9d6ce9u; esp -= 4; W32(esp, v); }
/* 8b5b77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b5b7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b5b7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b5b85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b5b86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b5b87: mov esi, ecx */
  esi = ecx;
/* 8b5b89: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8b5b8d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8b5b90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b5b91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b5b93: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8b5b9b: call 0x6c7991 */
  esp -= 4; W32(esp, 0x8b5ba0u); SPILL(); f_6c7991(); if (g_unwind) return; RELOAD();
/* 8b5ba0: mov ecx, esi */
  ecx = esi;
/* 8b5ba2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 8b5baa: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8b5bb0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8b5bb0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8b5bb4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b5bb5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b5bbc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b5bbf: ret  */
  esp += 4; SPILL(); return;
}

void f_8b5be0(void) {
  LOAD_REGS();
L_8b5be0: /* 8b5be0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b5be1: mov ebp, esp */
  ebp = esp;
/* 8b5be3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b5be5: push 0x9d6d40 */
  { uint32_t v = 0x9d6d40u; esp -= 4; W32(esp, v); }
/* 8b5bea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b5bf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b5bf1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b5bf8: sub esp, 0xcc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b5bfe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b5bff: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8b5c02: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b5c04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b5c05: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b5c06: mov edi, ecx */
  edi = ecx;
/* 8b5c08: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b5c0b: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8b5c0e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b5c15: jne 0x8b5c5a */
  if (!zf) goto L_8b5c5a;
L_8b5c17: /* 8b5c17: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b5c18: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b5c19: call dword ptr [0xcfa884] */
  esp -= 4; W32(esp, 0x8b5c1fu); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* 8b5c1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b5c20: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 8b5c23: push 0xaea1a4 */
  { uint32_t v = 0xaea1a4u; esp -= 4; W32(esp, v); }
/* 8b5c28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b5c29: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b5c2fu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b5c2f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b5c32: mov ecx, eax */
  ecx = eax;
/* 8b5c34: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b5c38: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b5c3eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b5c3e: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 8b5c44: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8b5c46: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8b5c48: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b5c4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b5c4b: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8b5c4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b5c4e: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8b5c51: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8b5c54: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b5c5au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8b5c5a: /* 8b5c5a: mov ecx, edi */
  ecx = edi;
L_8b5c5c: /* 8b5c5c: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8b5c62u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8b5c62: mov esi, eax */
  esi = eax;
/* 8b5c64: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b5c66: je 0x8b5ca7 */
  if (zf) goto L_8b5ca7;
L_8b5c68: /* 8b5c68: mov ecx, esi */
  ecx = esi;
/* 8b5c6a: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8b5c70u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8b5c70: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b5c72: je 0x8b5c78 */
  if (zf) goto L_8b5c78;
L_8b5c74: /* 8b5c74: mov ecx, esi */
  ecx = esi;
/* 8b5c76: jmp 0x8b5c5c */
  goto L_8b5c5c;
L_8b5c78: /* 8b5c78: call dword ptr [0xcfaab0] */
  esp -= 4; W32(esp, 0x8b5c7eu); SPILL(); f_4e303f(); if (g_unwind) return; /* Core!?StaticClass@UPackage@@SAPAVUClass@@XZ */ RELOAD();
/* 8b5c7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b5c7f: mov ecx, esi */
  ecx = esi;
/* 8b5c81: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8b5c87u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8b5c87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b5c89: je 0x8b5ca7 */
  if (zf) goto L_8b5ca7;
L_8b5c8b: /* 8b5c8b: call dword ptr [0xcfaab0] */
  esp -= 4; W32(esp, 0x8b5c91u); SPILL(); f_4e303f(); if (g_unwind) return; /* Core!?StaticClass@UPackage@@SAPAVUClass@@XZ */ RELOAD();
/* 8b5c91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b5c92: mov ecx, esi */
  ecx = esi;
/* 8b5c94: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8b5c9au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8b5c9a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 8b5c9c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 8b5c9e: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8b5ca0: mov dword ptr [eax + 0x34], 1 */
  W32((uint32_t)(eax + 0x34u), 0x1u);
L_8b5ca7: /* 8b5ca7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b5ca9: jne 0x8b5d71 */
  if (!zf) goto L_8b5d71;
L_8b5caf: /* 8b5caf: lea ecx, [edi + 0x54] */
  ecx = (uint32_t)(edi + 0x54u);
/* 8b5cb2: xor eax, eax */
  eax = 0;
L_8b5cb4: /* 8b5cb4: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5cb7: jge 0x8b5cbc */
  if ((sf == of)) goto L_8b5cbc;
L_8b5cb9: /* 8b5cb9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b5cba: jmp 0x8b5cb4 */
  goto L_8b5cb4;
L_8b5cbc: /* 8b5cbc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b5cbe: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8b5cc0: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8b5cc6u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8b5cc6: lea ecx, [edi + 0x64] */
  ecx = (uint32_t)(edi + 0x64u);
/* 8b5cc9: xor eax, eax */
  eax = 0;
/* 8b5ccb: jmp 0x8b5cd0 */
  goto L_8b5cd0;
L_8b5cd0: /* 8b5cd0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5cd3: jge 0x8b5cd8 */
  if ((sf == of)) goto L_8b5cd8;
L_8b5cd5: /* 8b5cd5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b5cd6: jmp 0x8b5cd0 */
  goto L_8b5cd0;
L_8b5cd8: /* 8b5cd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b5cda: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 8b5cdc: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8b5ce2u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8b5ce2: lea ecx, [edi + 0x80] */
  ecx = (uint32_t)(edi + 0x80u);
/* 8b5ce8: xor eax, eax */
  eax = 0;
/* 8b5cea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8b5cf0: /* 8b5cf0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5cf3: jge 0x8b5cf8 */
  if ((sf == of)) goto L_8b5cf8;
L_8b5cf5: /* 8b5cf5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b5cf6: jmp 0x8b5cf0 */
  goto L_8b5cf0;
L_8b5cf8: /* 8b5cf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b5cfa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b5cfc: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8b5d02u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8b5d02: lea ecx, [edi + 0x9c] */
  ecx = (uint32_t)(edi + 0x9cu);
/* 8b5d08: xor eax, eax */
  eax = 0;
/* 8b5d0a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8b5d10: /* 8b5d10: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5d13: jge 0x8b5d18 */
  if ((sf == of)) goto L_8b5d18;
L_8b5d15: /* 8b5d15: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b5d16: jmp 0x8b5d10 */
  goto L_8b5d10;
L_8b5d18: /* 8b5d18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b5d1a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b5d1c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8b5d22u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8b5d22: lea ebx, [edi + 0xb4] */
  ebx = (uint32_t)(edi + 0xb4u);
/* 8b5d28: xor esi, esi */
  esi = 0;
/* 8b5d2a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8b5d30: /* 8b5d30: cmp esi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5d33: jge 0x8b5d49 */
  if ((sf == of)) goto L_8b5d49;
L_8b5d35: /* 8b5d35: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b5d37: mov eax, esi */
  eax = esi;
/* 8b5d39: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8b5d3c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b5d3e: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 8b5d41: call 0x6cc3e7 */
  esp -= 4; W32(esp, 0x8b5d46u); SPILL(); f_6cc3e7(); if (g_unwind) return; RELOAD();
/* 8b5d46: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b5d47: jmp 0x8b5d30 */
  goto L_8b5d30;
L_8b5d49: /* 8b5d49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b5d4b: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8b5d4d: mov ecx, ebx */
  ecx = ebx;
/* 8b5d4f: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8b5d55u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8b5d55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b5d57: lea ecx, [edi + 0xc4] */
  ecx = (uint32_t)(edi + 0xc4u);
/* 8b5d5d: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8b5d63u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8b5d63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b5d65: lea ecx, [edi + 0xe0] */
  ecx = (uint32_t)(edi + 0xe0u);
/* 8b5d6b: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8b5d71u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
L_8b5d71: /* 8b5d71: mov eax, dword ptr [edi + 0x140] */
  eax = R32((uint32_t)(edi + 0x140u));
/* 8b5d77: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b5d79: jne 0x8b5d89 */
  if (!zf) goto L_8b5d89;
L_8b5d7b: /* 8b5d7b: mov eax, dword ptr [edi + 0x130] */
  eax = R32((uint32_t)(edi + 0x130u));
/* 8b5d81: lea ecx, [edi + 0x130] */
  ecx = (uint32_t)(edi + 0x130u);
/* 8b5d87: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8b5d89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8b5d89: /* 8b5d89: mov eax, dword ptr [edi + 0x140] */
  eax = R32((uint32_t)(edi + 0x140u));
/* 8b5d8f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8b5d91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b5d92: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8b5d98: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x8b5d9eu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 8b5d9e: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8b5da2: xor esi, esi */
  esi = 0;
L_8b5da4: /* 8b5da4: cmp esi, dword ptr [edi + 0x140] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x140u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5daa: jge 0x8b5e38 */
  if ((sf == of)) goto L_8b5e38;
L_8b5db0: /* 8b5db0: mov ecx, dword ptr [edi + 0x13c] */
  ecx = R32((uint32_t)(edi + 0x13cu));
/* 8b5db6: mov edx, dword ptr [ebp - 0x88] */
  edx = R32((uint32_t)(ebp + 0xffffff78u));
/* 8b5dbc: mov eax, esi */
  eax = esi;
/* 8b5dbe: imul eax, eax, 0x104 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x104u);
  eax = (uint32_t)r;
  }
/* 8b5dc4: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b5dc6: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 8b5dc9: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8b5dcc: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8b5dcf: mov edx, eax */
  edx = eax;
/* 8b5dd1: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8b5dd3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b5dd6: mov ecx, esp */
  ecx = esp;
/* 8b5dd8: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8b5dda: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 8b5ddd: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8b5de0: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8b5de3: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8b5de6: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 8b5de9: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 8b5deb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b5dee: mov edx, esp */
  edx = esp;
/* 8b5df0: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8b5df2: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 8b5df5: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8b5df8: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8b5dfb: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8b5dfe: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b5e01: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8b5e03: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b5e06: mov edx, esp */
  edx = esp;
/* 8b5e08: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8b5e0a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8b5e0d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8b5e10: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8b5e13: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 8b5e16: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8b5e19: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x8b5e1fu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 8b5e1f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b5e21: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b5e24: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8b5e26: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8b5e29: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8b5e2c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8b5e2f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8b5e32: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b5e33: jmp 0x8b5da4 */
  goto L_8b5da4;
L_8b5e38: /* 8b5e38: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8b5e3b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b5e41u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b5e41: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b5e44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b5e46: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8b5e4a: jne 0x8b5f97 */
  if (!zf) goto L_8b5f97;
L_8b5e50: /* 8b5e50: xor ebx, ebx */
  ebx = 0;
L_8b5e52: /* 8b5e52: cmp ebx, dword ptr [edi + 0xfc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5e58: jge 0x8b5eb4 */
  if ((sf == of)) goto L_8b5eb4;
L_8b5e5a: /* 8b5e5a: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8b5e5c: lea esi, [edi + 0x54] */
  esi = (uint32_t)(edi + 0x54u);
/* 8b5e5f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b5e61: mov ecx, esi */
  ecx = esi;
/* 8b5e63: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b5e69u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b5e69: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8b5e6b: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 8b5e6e: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8b5e71: xor ecx, ecx */
  ecx = 0;
/* 8b5e73: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b5e75: je 0x8b5e95 */
  if (zf) goto L_8b5e95;
L_8b5e77: /* 8b5e77: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8b5e79: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8b5e7c: mov word ptr [eax + 0x10], cx */
  W16((uint32_t)(eax + 0x10u), (ecx & 0xffffu));
/* 8b5e80: mov word ptr [eax + 0xe], cx */
  W16((uint32_t)(eax + 0xeu), (ecx & 0xffffu));
/* 8b5e84: mov word ptr [eax + 8], cx */
  W16((uint32_t)(eax + 0x8u), (ecx & 0xffffu));
/* 8b5e88: mov ecx, 0xffff */
  ecx = 0xffffu;
/* 8b5e8d: mov word ptr [eax + 0xc], cx */
  W16((uint32_t)(eax + 0xcu), (ecx & 0xffffu));
/* 8b5e91: mov word ptr [eax + 0xa], cx */
  W16((uint32_t)(eax + 0xau), (ecx & 0xffffu));
L_8b5e95: /* 8b5e95: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8b5e97: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b5e99: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8b5e9c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b5ea2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b5ea2: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 8b5ea5: add eax, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8b5ea8: je 0x8b5eb1 */
  if (zf) goto L_8b5eb1;
L_8b5eaa: /* 8b5eaa: mov ecx, eax */
  ecx = eax;
/* 8b5eac: call 0x6c89b3 */
  esp -= 4; W32(esp, 0x8b5eb1u); SPILL(); f_6c89b3(); if (g_unwind) return; RELOAD();
L_8b5eb1: /* 8b5eb1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b5eb2: jmp 0x8b5e52 */
  goto L_8b5e52;
L_8b5eb4: /* 8b5eb4: xor ebx, ebx */
  ebx = 0;
L_8b5eb6: /* 8b5eb6: cmp ebx, dword ptr [edi + 0x140] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x140u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5ebc: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8b5ebf: jge 0x8b5f97 */
  if ((sf == of)) goto L_8b5f97;
L_8b5ec5: /* 8b5ec5: mov edx, dword ptr [edi + 0x13c] */
  edx = R32((uint32_t)(edi + 0x13cu));
/* 8b5ecb: imul ebx, ebx, 0x104 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x104u);
  ebx = (uint32_t)r;
  }
/* 8b5ed1: mov ecx, dword ptr [ebx + edx + 0xf8] */
  ecx = R32((uint32_t)(ebx + edx + 0xf8u));
/* 8b5ed8: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8b5eda: mov eax, 6 */
  eax = 0x6u;
/* 8b5edf: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5ee1: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8b5ee4: jle 0x8b5ef0 */
  if ((zf || sf != of)) goto L_8b5ef0;
L_8b5ee6: /* 8b5ee6: mov dword ptr [ebx + 0xf8], eax */
  W32((uint32_t)(ebx + 0xf8u), eax);
/* 8b5eec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b5ef0: /* 8b5ef0: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 8b5ef6: cmp eax, dword ptr [ebx + 0xf8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xf8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5efc: jge 0x8b5f8e */
  if ((sf == of)) goto L_8b5f8e;
L_8b5f02: /* 8b5f02: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8b5f04: lea esi, [edi + 0xb4] */
  esi = (uint32_t)(edi + 0xb4u);
/* 8b5f0a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b5f0c: mov ecx, esi */
  ecx = esi;
/* 8b5f0e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b5f14u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b5f14: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b5f16: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8b5f19: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8b5f1b: mov edi, eax */
  edi = eax;
/* 8b5f1d: je 0x8b5f78 */
  if (zf) goto L_8b5f78;
L_8b5f1f: /* 8b5f1f: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 8b5f22: mov dword ptr [edi], 0x9f94a4 */
  W32((uint32_t)(edi), 0x9f94a4u);
/* 8b5f28: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b5f2eu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b5f2e: mov eax, dword ptr [0xcfa1b0] */
  eax = R32((uint32_t)(0xcfa1b0u));
/* 8b5f33: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 8b5f36: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8b5f38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b5f3a: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8b5f3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b5f40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b5f41: call 0x99c910 */
  esp -= 4; W32(esp, 0x8b5f46u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8b5f46: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 8b5f4c: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 8b5f51: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8b5f54: add ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 8b5f57: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8b5f59: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 8b5f5f: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b5f62: adc esi, 0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  esi = r;
  }
/* 8b5f65: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 8b5f68: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* 8b5f6b: xor eax, eax */
  eax = 0;
/* 8b5f6d: mov dword ptr [edi + 0x18], edx */
  W32((uint32_t)(edi + 0x18u), edx);
/* 8b5f70: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 8b5f73: mov dword ptr [edi + 0x1c], eax */
  W32((uint32_t)(edi + 0x1cu), eax);
/* 8b5f76: jmp 0x8b5f7a */
  goto L_8b5f7a;
L_8b5f78: /* 8b5f78: xor edi, edi */
  edi = 0;
L_8b5f7a: /* 8b5f7a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b5f7d: mov eax, dword ptr [edx + 0xb8] */
  eax = R32((uint32_t)(edx + 0xb8u));
/* 8b5f83: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8b5f84: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 8b5f87: mov edi, edx */
  edi = edx;
/* 8b5f89: jmp 0x8b5ef0 */
  goto L_8b5ef0;
L_8b5f8e: /* 8b5f8e: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b5f91: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b5f92: jmp 0x8b5eb6 */
  goto L_8b5eb6;
L_8b5f97: /* 8b5f97: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 8b5f9d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b5fa3u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b5fa3: xor eax, eax */
  eax = 0;
/* 8b5fa5: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8b5fa9: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_8b5fac: /* 8b5fac: mov ecx, eax */
  ecx = eax;
/* 8b5fae: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8b5fb1: cmp ecx, dword ptr [edi + 0x140] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x140u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5fb7: jge 0x8b65c3 */
  if ((sf == of)) goto L_8b65c3;
L_8b5fbd: /* 8b5fbd: mov edx, dword ptr [edi + 0x13c] */
  edx = R32((uint32_t)(edi + 0x13cu));
/* 8b5fc3: mov ebx, ecx */
  ebx = ecx;
/* 8b5fc5: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 8b5fc8: imul ebx, ebx, 0x104 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x104u);
  ebx = (uint32_t)r;
  }
/* 8b5fce: mov eax, dword ptr [ebx + edx + 0xf0] */
  eax = R32((uint32_t)(ebx + edx + 0xf0u));
/* 8b5fd5: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8b5fd7: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8b5fda: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 8b5fdd: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 8b5fe3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8b5fe6: lea esi, [ebx + 0xc] */
  esi = (uint32_t)(ebx + 0xcu);
/* 8b5fe9: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 8b5fec: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 8b5fef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b5ff0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b5ff1: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8b5ff4: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 8b5ff7: call 0x6c285b */
  esp -= 4; W32(esp, 0x8b5ffcu); SPILL(); f_6c285b(); if (g_unwind) return; RELOAD();
/* 8b5ffc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b5fff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6001: jne 0x8b65b4 */
  if (!zf) goto L_8b65b4;
L_8b6007: /* 8b6007: lea eax, [ebx + 0x18] */
  eax = (uint32_t)(ebx + 0x18u);
/* 8b600a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b600b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b600c: call 0x6c285b */
  esp -= 4; W32(esp, 0x8b6011u); SPILL(); f_6c285b(); if (g_unwind) return; RELOAD();
/* 8b6011: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b6014: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6016: jne 0x8b65b4 */
  if (!zf) goto L_8b65b4;
L_8b601c: /* 8b601c: lea eax, [ebx + 0x18] */
  eax = (uint32_t)(ebx + 0x18u);
/* 8b601f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6020: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b6021: call 0x6c285b */
  esp -= 4; W32(esp, 0x8b6026u); SPILL(); f_6c285b(); if (g_unwind) return; RELOAD();
/* 8b6026: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b6029: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b602b: jne 0x8b65b4 */
  if (!zf) goto L_8b65b4;
L_8b6031: /* 8b6031: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b6034: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 8b603a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8b603d: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8b6040: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x8b6046u); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 8b6046: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6048: jne 0x8b65b4 */
  if (!zf) goto L_8b65b4;
L_8b604e: /* 8b604e: mov esi, dword ptr [edi + 0x140] */
  esi = R32((uint32_t)(edi + 0x140u));
/* 8b6054: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6055: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6056: mov ecx, edi */
  ecx = edi;
/* 8b6058: call dword ptr [0xcfa884] */
  esp -= 4; W32(esp, 0x8b605eu); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* 8b605e: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 8b6064: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8b6066: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8b6068: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6069: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b606c: push 0xaea1c0 */
  { uint32_t v = 0xaea1c0u; esp -= 4; W32(esp, v); }
/* 8b6071: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b6072: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6073: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6074: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8b6077u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b6077: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b607a: mov dword ptr [ebp - 0x24], 3 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3u);
/* 8b6081: mov dword ptr [ebp - 0x2c], 0xc */
  W32((uint32_t)(ebp + 0xffffffd4u), 0xcu);
/* 8b6088: lea esi, [ebp - 0xc8] */
  esi = (uint32_t)(ebp + 0xffffff38u);
/* 8b608e: mov edi, edi */
  edi = edi;
L_8b6090: /* 8b6090: dec dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 8b6093: js 0x8b60a2 */
  if (sf) goto L_8b60a2;
L_8b6095: /* 8b6095: mov ecx, esi */
  ecx = esi;
/* 8b6097: call dword ptr [0xcfa1e0] */
  esp -= 4; W32(esp, 0x8b609du); SPILL(); f_4e35b2(); if (g_unwind) return; /* Core!??0FVector@@QAE@XZ */ RELOAD();
/* 8b609d: add esi, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b60a0: jmp 0x8b6090 */
  goto L_8b6090;
L_8b60a2: /* 8b60a2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b60a5: xor esi, esi */
  esi = 0;
/* 8b60a7: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b60a9: je 0x8b60fe */
  if (zf) goto L_8b60fe;
L_8b60ab: /* 8b60ab: xor eax, eax */
  eax = 0;
/* 8b60ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b60b0: /* 8b60b0: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b60b3: jge 0x8b6453 */
  if ((sf == of)) goto L_8b6453;
L_8b60b9: /* 8b60b9: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8b60bc: lea edx, [ebp + ecx*4 - 0xc8] */
  edx = (uint32_t)(ebp + ecx*4 + 0xffffff38u);
/* 8b60c3: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* 8b60cd: mov ecx, dword ptr [ebp - 0x94] */
  ecx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 8b60d3: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8b60d5: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* 8b60df: mov ecx, dword ptr [ebp - 0x90] */
  ecx = R32((uint32_t)(ebp + 0xffffff70u));
/* 8b60e5: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8b60e8: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* 8b60f2: mov ecx, dword ptr [ebp - 0x8c] */
  ecx = R32((uint32_t)(ebp + 0xffffff74u));
/* 8b60f8: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8b60fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b60fc: jmp 0x8b60b0 */
  goto L_8b60b0;
L_8b60fe: /* 8b60fe: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8b6101: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b6103: je 0x8b6197 */
  if (zf) goto L_8b6197;
L_8b6109: /* 8b6109: mov eax, dword ptr [ebx + 0xf4] */
  eax = R32((uint32_t)(ebx + 0xf4u));
/* 8b610f: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b6112: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 8b6115: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b6117: mov dword ptr [ebp - 0xc8], edx */
  W32((uint32_t)(ebp + 0xffffff38u), edx);
/* 8b611d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8b6120: mov dword ptr [ebp - 0xc4], edx */
  W32((uint32_t)(ebp + 0xffffff3cu), edx);
/* 8b6126: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8b6129: mov dword ptr [ebp - 0xc0], eax */
  W32((uint32_t)(ebp + 0xffffff40u), eax);
/* 8b612f: mov eax, dword ptr [ebx + 0xfc] */
  eax = R32((uint32_t)(ebx + 0xfcu));
/* 8b6135: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b6138: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 8b613b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b613d: mov dword ptr [ebp - 0xbc], edx */
  W32((uint32_t)(ebp + 0xffffff44u), edx);
/* 8b6143: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8b6146: mov dword ptr [ebp - 0xb8], edx */
  W32((uint32_t)(ebp + 0xffffff48u), edx);
/* 8b614c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8b614f: mov dword ptr [ebp - 0xb4], eax */
  W32((uint32_t)(ebp + 0xffffff4cu), eax);
/* 8b6155: mov eax, dword ptr [ebx + 0x100] */
  eax = R32((uint32_t)(ebx + 0x100u));
/* 8b615b: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b615e: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 8b6161: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8b6163: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 8b6169: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8b616c: mov dword ptr [ebp - 0xac], edx */
  W32((uint32_t)(ebp + 0xffffff54u), edx);
/* 8b6172: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8b6175: mov dword ptr [ebp - 0xa8], eax */
  W32((uint32_t)(ebp + 0xffffff58u), eax);
/* 8b617b: mov eax, 1 */
  eax = 0x1u;
/* 8b6180: mov dword ptr [ebx + 0xf4], eax */
  W32((uint32_t)(ebx + 0xf4u), eax);
/* 8b6186: mov dword ptr [ebx + 0xfc], esi */
  W32((uint32_t)(ebx + 0xfcu), esi);
/* 8b618c: mov dword ptr [ebx + 0x100], eax */
  W32((uint32_t)(ebx + 0x100u), eax);
/* 8b6192: jmp 0x8b6453 */
  goto L_8b6453;
L_8b6197: /* 8b6197: xor eax, eax */
  eax = 0;
/* 8b6199: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b61a0: /* 8b61a0: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b61a3: jge 0x8b61d8 */
  if ((sf == of)) goto L_8b61d8;
L_8b61a5: /* 8b61a5: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8b61a8: lea edx, [ebp + ecx*4 - 0xc8] */
  edx = (uint32_t)(ebp + ecx*4 + 0xffffff38u);
/* 8b61af: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 8b61b6: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 8b61b9: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8b61bb: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 8b61c2: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8b61c5: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8b61c8: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 8b61cf: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8b61d2: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8b61d5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b61d6: jmp 0x8b61a0 */
  goto L_8b61a0;
L_8b61d8: /* 8b61d8: mov eax, dword ptr [ebx + 0xf4] */
  eax = R32((uint32_t)(ebx + 0xf4u));
/* 8b61de: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
L_8b61e1: /* 8b61e1: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b61e3: jle 0x8b61ec */
  if ((zf || sf != of)) goto L_8b61ec;
L_8b61e5: /* 8b61e5: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 8b61e8: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8b61ea: jmp 0x8b61e1 */
  goto L_8b61e1;
L_8b61ec: /* 8b61ec: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 8b61ef: nop  */
L_8b61f0: /* 8b61f0: cmp dword ptr [ebp - 0x28], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b61f4: jge 0x8b6451 */
  if ((sf == of)) goto L_8b6451;
L_8b61fa: /* 8b61fa: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8b61fd: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b6203u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b6203: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8b6207: xor esi, esi */
  esi = 0;
/* 8b6209: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b6210: /* 8b6210: cmp esi, dword ptr [edi + 0x140] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x140u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6216: jge 0x8b6288 */
  if ((sf == of)) goto L_8b6288;
L_8b6218: /* 8b6218: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b621b: mov eax, dword ptr [edx + 0x13c] */
  eax = R32((uint32_t)(edx + 0x13cu));
/* 8b6221: mov edi, esi */
  edi = esi;
/* 8b6223: imul edi, edi, 0x104 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x104u);
  edi = (uint32_t)r;
  }
/* 8b6229: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b622b: xor ebx, ebx */
  ebx = 0;
/* 8b622d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b6230: /* 8b6230: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6233: jge 0x8b627f */
  if ((sf == of)) goto L_8b627f;
L_8b6235: /* 8b6235: lea eax, [ebx + ebx*2] */
  eax = (uint32_t)(ebx + ebx*2);
/* 8b6238: lea ecx, [edi + eax*4] */
  ecx = (uint32_t)(edi + eax*4);
/* 8b623b: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8b623e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b6241: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b6244: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6245: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b6248: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6249: call 0x6c285b */
  esp -= 4; W32(esp, 0x8b624eu); SPILL(); f_6c285b(); if (g_unwind) return; RELOAD();
/* 8b624e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b6251: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6253: je 0x8b6285 */
  if (zf) goto L_8b6285;
L_8b6255: /* 8b6255: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b6258: xor edx, edx */
  edx = 0;
/* 8b625a: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b625c: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8b625f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8b6261: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b6263: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8b6266: mov edi, edx */
  edi = edx;
/* 8b6268: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b626eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b626e: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8b6271: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8b6274: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 8b6277: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 8b6279: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8b627c: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
L_8b627f: /* 8b627f: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b6282: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b6283: jmp 0x8b6210 */
  goto L_8b6210;
L_8b6285: /* 8b6285: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b6286: jmp 0x8b6230 */
  goto L_8b6230;
L_8b6288: /* 8b6288: mov eax, 1 */
  eax = 0x1u;
/* 8b628d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b6290: /* 8b6290: xor esi, esi */
  esi = 0;
/* 8b6292: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b6294: je 0x8b6389 */
  if (zf) goto L_8b6389;
L_8b629a: /* 8b629a: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
L_8b629d: /* 8b629d: cmp esi, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b62a0: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 8b62a3: jge 0x8b6381 */
  if ((sf == of)) goto L_8b6381;
L_8b62a9: /* 8b62a9: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8b62ac: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 8b62af: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8b62b2: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8b62b5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b62b7: je 0x8b637b */
  if (zf) goto L_8b637b;
L_8b62bd: /* 8b62bd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b62bf: mov eax, dword ptr [edi + 0x13c] */
  eax = R32((uint32_t)(edi + 0x13cu));
/* 8b62c5: imul edx, edx, 0x104 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x104u);
  edx = (uint32_t)r;
  }
/* 8b62cb: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8b62cd: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 8b62d0: xor eax, eax */
  eax = 0;
L_8b62d2: /* 8b62d2: cmp eax, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b62d5: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 8b62d8: jge 0x8b637b */
  if ((sf == of)) goto L_8b637b;
L_8b62de: /* 8b62de: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8b62e1: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8b62e4: lea ecx, [edi + ecx*4] */
  ecx = (uint32_t)(edi + ecx*4);
/* 8b62e7: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* 8b62ea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b62ec: jne 0x8b6372 */
  if (!zf) goto L_8b6372;
L_8b62f2: /* 8b62f2: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 8b62f4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b62f7: imul ebx, ebx, 0x104 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x104u);
  ebx = (uint32_t)r;
  }
/* 8b62fd: mov edi, dword ptr [ecx + 0x13c] */
  edi = R32((uint32_t)(ecx + 0x13cu));
/* 8b6303: mov ecx, dword ptr [ebx + edi + 0xf4] */
  ecx = R32((uint32_t)(ebx + edi + 0xf4u));
/* 8b630a: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8b630c: test dword ptr [edx + 0xf4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0xf4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6312: je 0x8b6372 */
  if (zf) goto L_8b6372;
L_8b6314: /* 8b6314: xor edi, edi */
  edi = 0;
/* 8b6316: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b6318: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 8b631b: je 0x8b6361 */
  if (zf) goto L_8b6361;
L_8b631d: /* 8b631d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b6320: /* 8b6320: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6323: jge 0x8b635b */
  if ((sf == of)) goto L_8b635b;
L_8b6325: /* 8b6325: xor esi, esi */
  esi = 0;
L_8b6327: /* 8b6327: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b632a: jge 0x8b634f */
  if ((sf == of)) goto L_8b634f;
L_8b632c: /* 8b632c: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 8b632f: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 8b6332: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b6335: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8b6338: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6339: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 8b633c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b633d: call 0x6c285b */
  esp -= 4; W32(esp, 0x8b6342u); SPILL(); f_6c285b(); if (g_unwind) return; RELOAD();
/* 8b6342: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b6345: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6347: je 0x8b634c */
  if (zf) goto L_8b634c;
L_8b6349: /* 8b6349: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
L_8b634c: /* 8b634c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b634d: jmp 0x8b6327 */
  goto L_8b6327;
L_8b634f: /* 8b634f: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8b6352: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8b6355: mov eax, dword ptr [ebp - 0x74] */
  eax = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8b6358: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8b6359: jmp 0x8b6320 */
  goto L_8b6320;
L_8b635b: /* 8b635b: cmp dword ptr [ebp - 0x40], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b635f: jle 0x8b6372 */
  if ((zf || sf != of)) goto L_8b6372;
L_8b6361: /* 8b6361: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8b6364: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8b6367: mov dword ptr [edi + ecx*4 + 8], 1 */
  W32((uint32_t)(edi + ecx*4 + 0x8u), 0x1u);
/* 8b636f: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
L_8b6372: /* 8b6372: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b6375: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b6376: jmp 0x8b62d2 */
  goto L_8b62d2;
L_8b637b: /* 8b637b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b637c: jmp 0x8b629d */
  goto L_8b629d;
L_8b6381: /* 8b6381: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8b6384: jmp 0x8b6290 */
  goto L_8b6290;
L_8b6389: /* 8b6389: mov esi, dword ptr [ebp - 0x88] */
  esi = R32((uint32_t)(ebp + 0xffffff78u));
/* 8b638f: xor ebx, ebx */
  ebx = 0;
L_8b6391: /* 8b6391: cmp ebx, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6394: jge 0x8b6436 */
  if ((sf == of)) goto L_8b6436;
L_8b639a: /* 8b639a: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8b639d: lea edx, [ebx + ebx*2] */
  edx = (uint32_t)(ebx + ebx*2);
/* 8b63a0: mov ecx, dword ptr [eax + edx*4 + 8] */
  ecx = R32((uint32_t)(eax + edx*4 + 0x8u));
/* 8b63a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b63a6: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8b63a9: je 0x8b6430 */
  if (zf) goto L_8b6430;
L_8b63af: /* 8b63af: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b63b1: cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b63b4: je 0x8b63ff */
  if (zf) goto L_8b63ff;
L_8b63b6: /* 8b63b6: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8b63b9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8b63ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b63bc: jl 0x8b63ff */
  if ((sf != of)) goto L_8b63ff;
L_8b63be: /* 8b63be: cmp eax, dword ptr [edi + 0x150] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x150u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b63c4: jge 0x8b63ff */
  if ((sf == of)) goto L_8b63ff;
L_8b63c6: /* 8b63c6: lea ecx, [edx + edx*2] */
  ecx = (uint32_t)(edx + edx*2);
/* 8b63c9: fld dword ptr [esi + ecx*4 + 8] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0x8u)); FPUSH(v); }
/* 8b63cd: lea eax, [esi + ecx*4] */
  eax = (uint32_t)(esi + ecx*4);
/* 8b63d0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b63d3: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8b63d6: fmul dword ptr [esi + ecx*4 + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + ecx*4 + 0x8u)));
/* 8b63da: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 8b63dd: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8b63e0: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8b63e3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b63e5: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8b63e7: mov eax, dword ptr [edi + 0x14c] */
  eax = R32((uint32_t)(edi + 0x14cu));
/* 8b63ed: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8b63ef: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8b63f2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b63f4: fcomp dword ptr [eax + ecx*4 - 4] */
  fpu_com(ST0, F32((uint32_t)(eax + ecx*4 + 0xfffffffcu)));
  FPOP();
/* 8b63f8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b63fa: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b63fd: jnp 0x8b6430 */
  if (!pf) goto L_8b6430;
L_8b63ff: /* 8b63ff: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8b6402: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 8b6405: fld dword ptr [esi + edx*4] */
  { double v = F32((uint32_t)(esi + edx*4)); FPUSH(v); }
/* 8b6408: lea ecx, [esi + edx*4] */
  ecx = (uint32_t)(esi + edx*4);
/* 8b640b: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8b640e: fadd dword ptr [ebp + eax*4 - 0xc8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + eax*4 + 0xffffff38u)));
/* 8b6415: lea eax, [ebp + eax*4 - 0xc8] */
  eax = (uint32_t)(ebp + eax*4 + 0xffffff38u);
/* 8b641c: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8b641e: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8b6421: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8b6424: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8b6427: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8b642a: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8b642d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
L_8b6430: /* 8b6430: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b6431: jmp 0x8b6391 */
  goto L_8b6391;
L_8b6436: /* 8b6436: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8b6439: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8b643d: call 0x6c3b8e */
  esp -= 4; W32(esp, 0x8b6442u); SPILL(); f_6c3b8e(); if (g_unwind) return; RELOAD();
/* 8b6442: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8b6445: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b6448: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b6449: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8b644c: jmp 0x8b61f0 */
  goto L_8b61f0;
L_8b6451: /* 8b6451: xor esi, esi */
  esi = 0;
L_8b6453: /* 8b6453: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6456: jge 0x8b646b */
  if ((sf == of)) goto L_8b646b;
L_8b6458: /* 8b6458: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 8b645b: lea ecx, [ebp + ecx*4 - 0xc8] */
  ecx = (uint32_t)(ebp + ecx*4 + 0xffffff38u);
/* 8b6462: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8b6468u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8b6468: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b6469: jmp 0x8b6453 */
  goto L_8b6453;
L_8b646b: /* 8b646b: xor edi, edi */
  edi = 0;
/* 8b646d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b6470: /* 8b6470: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6473: jge 0x8b64de */
  if ((sf == of)) goto L_8b64de;
L_8b6475: /* 8b6475: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b6478: mov edx, dword ptr [ebx + 0xf8] */
  edx = R32((uint32_t)(ebx + 0xf8u));
/* 8b647e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b647f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b6480: mov ecx, edi */
  ecx = edi;
/* 8b6482: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8b6485: lea edx, [ecx + ebx + 0x24] */
  edx = (uint32_t)(ecx + ebx + 0x24u);
/* 8b6489: mov ecx, dword ptr [ebx + edi*4 + 0xe4] */
  ecx = R32((uint32_t)(ebx + edi*4 + 0xe4u));
/* 8b6490: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b6491: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6492: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 8b6495: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8b6498: lea edx, [ebp + eax - 0xc8] */
  edx = (uint32_t)(ebp + eax + 0xffffff38u);
/* 8b649f: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 8b64a1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b64a4: mov ecx, esp */
  ecx = esp;
/* 8b64a6: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 8b64a8: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 8b64ab: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8b64ae: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 8b64b1: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8b64b4: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b64b6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b64b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b64bb: mov ecx, esp */
  ecx = esp;
/* 8b64bd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8b64bf: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8b64c2: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8b64c5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8b64c8: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8b64cb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b64ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b64cf: call 0x6c98fe */
  esp -= 4; W32(esp, 0x8b64d4u); SPILL(); f_6c98fe(); if (g_unwind) return; RELOAD();
/* 8b64d4: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b64d7: mov dword ptr [ebp + edi*4 - 0x5c], eax */
  W32((uint32_t)(ebp + edi*4 + 0xffffffa4u), eax);
/* 8b64db: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8b64dc: jmp 0x8b6470 */
  goto L_8b6470;
L_8b64de: /* 8b64de: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8b64e1: cmp edx, dword ptr [ebp - 0x58] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b64e4: je 0x8b65b7 */
  if (zf) goto L_8b65b7;
L_8b64ea: /* 8b64ea: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8b64ed: cmp dword ptr [ebp - 0x58], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b64f0: je 0x8b65b7 */
  if (zf) goto L_8b65b7;
L_8b64f6: /* 8b64f6: mov ecx, eax */
  ecx = eax;
/* 8b64f8: mov eax, edx */
  eax = edx;
/* 8b64fa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b64fc: je 0x8b65b7 */
  if (zf) goto L_8b65b7;
L_8b6502: /* 8b6502: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b6505: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6507: jne 0x8b6547 */
  if (!zf) goto L_8b6547;
L_8b6509: /* 8b6509: xor esi, esi */
  esi = 0;
/* 8b650b: jmp 0x8b6510 */
  goto L_8b6510;
L_8b6510: /* 8b6510: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6513: jge 0x8b653c */
  if ((sf == of)) goto L_8b653c;
L_8b6515: /* 8b6515: mov ecx, dword ptr [ebx + 0xf0] */
  ecx = R32((uint32_t)(ebx + 0xf0u));
/* 8b651b: xor edx, edx */
  edx = 0;
/* 8b651d: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8b6520: mov dx, word ptr [ebp + esi*4 - 0x5c] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + esi*4 + 0xffffffa4u))) & 0xffffu);
/* 8b6525: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 8b6528: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6529: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8b652c: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8b652f: lea ecx, [ecx + edx + 4] */
  ecx = (uint32_t)(ecx + edx + 0x4u);
/* 8b6533: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8b6539u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8b6539: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b653a: jmp 0x8b6510 */
  goto L_8b6510;
L_8b653c: /* 8b653c: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 8b653f: inc word ptr [eax + 0xe] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0xeu)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(eax + 0xeu), r);
  }
/* 8b6543: inc word ptr [eax + 0x10] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x10u)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(eax + 0x10u), r);
  }
L_8b6547: /* 8b6547: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8b654a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8b654d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b654f: je 0x8b65b7 */
  if (zf) goto L_8b65b7;
L_8b6551: /* 8b6551: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b6554: mov edx, dword ptr [ebp - 0x88] */
  edx = R32((uint32_t)(ebp + 0xffffff78u));
/* 8b655a: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8b655d: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8b6560: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8b6566u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8b6566: fst dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 8b6569: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8b656f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b6571: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6574: jne 0x8b65b7 */
  if (!zf) goto L_8b65b7;
L_8b6576: /* 8b6576: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8b6578: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b657a: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 8b6580: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b6586u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b6586: mov ecx, dword ptr [ebp - 0xd4] */
  ecx = R32((uint32_t)(ebp + 0xffffff2cu));
/* 8b658c: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8b658f: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8b6592: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6594: je 0x8b65b7 */
  if (zf) goto L_8b65b7;
L_8b6596: /* 8b6596: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8b6599: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8b659c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b659d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b659e: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8b65a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b65a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b65a3: call 0x6c3337 */
  esp -= 4; W32(esp, 0x8b65a8u); SPILL(); f_6c3337(); if (g_unwind) return; RELOAD();
/* 8b65a8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b65ab: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b65ae: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b65af: jmp 0x8b5fac */
  goto L_8b5fac;
L_8b65b4: /* 8b65b4: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_8b65b7: /* 8b65b7: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b65ba: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b65bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b65be: jmp 0x8b5fac */
  goto L_8b5fac;
L_8b65c3: /* 8b65c3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b65c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b65c8: jne 0x8b68fa */
  if (!zf) goto L_8b68fa;
L_8b65ce: /* 8b65ce: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b65d1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b65d3: je 0x8b65f5 */
  if (zf) goto L_8b65f5;
L_8b65d5: /* 8b65d5: mov ecx, edi */
  ecx = edi;
/* 8b65d7: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8b65ddu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8b65dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b65de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b65df: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8b65e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8b65e6: push 0xaea1f8 */
  { uint32_t v = 0xaea1f8u; esp -= 4; W32(esp, v); }
/* 8b65eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b65ec: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8b65f2u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8b65f2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b65f5: /* 8b65f5: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 8b65f8: mov ecx, dword ptr [edi + 0x94] */
  ecx = R32((uint32_t)(edi + 0x94u));
/* 8b65fe: mov eax, dword ptr [edi + 0xb0] */
  eax = R32((uint32_t)(edi + 0xb0u));
/* 8b6604: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8b6605: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8b6606: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b6607: mov dword ptr [edi + 0xb0], eax */
  W32((uint32_t)(edi + 0xb0u), eax);
/* 8b660d: mov dword ptr [edi + 0x78], edx */
  W32((uint32_t)(edi + 0x78u), edx);
/* 8b6610: mov dword ptr [edi + 0x94], ecx */
  W32((uint32_t)(edi + 0x94u), ecx);
/* 8b6616: xor eax, eax */
  eax = 0;
L_8b6618: /* 8b6618: cmp eax, dword ptr [edi + 0xb8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xb8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b661e: jge 0x8b6634 */
  if ((sf == of)) goto L_8b6634;
L_8b6620: /* 8b6620: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 8b6626: mov edx, eax */
  edx = eax;
/* 8b6628: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8b662b: lea ecx, [edx + ecx + 0x1c] */
  ecx = (uint32_t)(edx + ecx + 0x1cu);
/* 8b662f: inc dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx), r);
  }
/* 8b6631: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b6632: jmp 0x8b6618 */
  goto L_8b6618;
L_8b6634: /* 8b6634: xor ebx, ebx */
  ebx = 0;
/* 8b6636: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8b6639: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b6640: /* 8b6640: cmp ebx, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6643: jge 0x8b6792 */
  if ((sf == of)) goto L_8b6792;
L_8b6649: /* 8b6649: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b664c: mov esi, dword ptr [ecx + 0x54] */
  esi = R32((uint32_t)(ecx + 0x54u));
/* 8b664f: mov edx, dword ptr [ecx + 0x58] */
  edx = R32((uint32_t)(ecx + 0x58u));
/* 8b6652: lea edi, [ebx + ebx*4] */
  edi = (uint32_t)(ebx + ebx*4);
/* 8b6655: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b6657: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8b665a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b665c: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b665e: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 8b6661: call dword ptr [0xcfa884] */
  esp -= 4; W32(esp, 0x8b6667u); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* 8b6667: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 8b666d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8b666f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8b6671: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6672: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8b6675: push 0xaea23c */
  { uint32_t v = 0xaea23cu; esp -= 4; W32(esp, v); }
/* 8b667a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b667b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b667c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b667d: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8b6680u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b6680: imul ebx, ebx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x1cu);
  ebx = (uint32_t)r;
  }
/* 8b6683: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8b6686: mov eax, dword ptr [ecx + ebx + 8] */
  eax = R32((uint32_t)(ecx + ebx + 0x8u));
/* 8b668a: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b668c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b668f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6691: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* 8b6694: je 0x8b6784 */
  if (zf) goto L_8b6784;
L_8b669a: /* 8b669a: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b669d: cmp dword ptr [ebx + 0x148], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x148u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b66a4: jne 0x8b66cc */
  if (!zf) goto L_8b66cc;
L_8b66a6: /* 8b66a6: mov eax, ebx */
  eax = ebx;
/* 8b66a8: mov edx, dword ptr [eax + 0x54] */
  edx = R32((uint32_t)(eax + 0x54u));
/* 8b66ab: mov dword ptr [edx + edi + 4], 1 */
  W32((uint32_t)(edx + edi + 0x4u), 0x1u);
/* 8b66b3: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8b66b6: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8b66b9: mov ebx, dword ptr [eax + 0x54] */
  ebx = R32((uint32_t)(eax + 0x54u));
/* 8b66bc: mov eax, dword ptr [ecx + edx] */
  eax = R32((uint32_t)(ecx + edx));
/* 8b66bf: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b66c1: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8b66c3: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0x8b66c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b66c6: mov word ptr [ebx + 0x10], ax */
  W16((uint32_t)(ebx + 0x10u), (eax & 0xffffu));
/* 8b66ca: jmp 0x8b66f1 */
  goto L_8b66f1;
L_8b66cc: /* 8b66cc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8b66ce: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8b66d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b66d1: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8b66d4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8b66d7: mov ecx, dword ptr [ecx + eax + 8] */
  ecx = R32((uint32_t)(ecx + eax + 0x8u));
/* 8b66db: mov eax, 0x55555556 */
  eax = 0x55555556u;
/* 8b66e0: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8b66e2: mov ecx, dword ptr [ebx + 0x54] */
  ecx = R32((uint32_t)(ebx + 0x54u));
/* 8b66e5: mov eax, edx */
  eax = edx;
/* 8b66e7: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8b66ea: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8b66ec: mov word ptr [ecx + edi + 0x10], dx */
  W16((uint32_t)(ecx + edi + 0x10u), (edx & 0xffffu));
L_8b66f1: /* 8b66f1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b66f4: mov eax, dword ptr [ecx + 0xc8] */
  eax = R32((uint32_t)(ecx + 0xc8u));
/* 8b66fa: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 8b66fd: mov word ptr [esi + 8], ax */
  W16((uint32_t)(esi + 0x8u), (eax & 0xffffu));
/* 8b6701: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8b6704: mov eax, dword ptr [ebx + edx + 8] */
  eax = R32((uint32_t)(ebx + edx + 0x8u));
/* 8b6708: lea edi, [ecx + 0xc4] */
  edi = (uint32_t)(ecx + 0xc4u);
/* 8b670e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b670f: mov ecx, edi */
  ecx = edi;
/* 8b6711: call dword ptr [0xcfa64c] */
  esp -= 4; W32(esp, 0x8b6717u); SPILL(); f_4e437c(); if (g_unwind) return; /* Core!?Add@?$TArray@G@@QAEHH@Z */ RELOAD();
/* 8b6717: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6718: mov ecx, edi */
  ecx = edi;
/* 8b671a: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8b6720u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8b6720: mov edi, eax */
  edi = eax;
/* 8b6722: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8b6725: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b6727: lea ecx, [ebx + eax + 4] */
  ecx = (uint32_t)(ebx + eax + 0x4u);
/* 8b672b: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8b6731u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8b6731: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8b6734: mov word ptr [esi + 0xa], cx */
  W16((uint32_t)(esi + 0xau), (ecx & 0xffffu));
/* 8b6738: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8b673b: mov word ptr [esi + 0xc], dx */
  W16((uint32_t)(esi + 0xcu), (edx & 0xffffu));
/* 8b673f: xor ebx, ebx */
  ebx = 0;
L_8b6741: /* 8b6741: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8b6744: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8b6747: cmp ebx, dword ptr [edx + ecx + 8] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b674b: jge 0x8b6784 */
  if ((sf == of)) goto L_8b6784;
L_8b674d: /* 8b674d: mov cx, word ptr [esi + 0xa] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0xau))) & 0xffffu);
/* 8b6751: xor edx, edx */
  edx = 0;
/* 8b6753: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8b6756: cmp dx, cx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8b6759: ja 0x8b675d */
  if ((!cf && !zf)) goto L_8b675d;
L_8b675b: /* 8b675b: mov ecx, edx */
  ecx = edx;
L_8b675d: /* 8b675d: mov word ptr [esi + 0xa], cx */
  W16((uint32_t)(esi + 0xau), (ecx & 0xffffu));
/* 8b6761: mov cx, word ptr [esi + 0xc] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0xcu))) & 0xffffu);
/* 8b6765: xor edx, edx */
  edx = 0;
/* 8b6767: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8b676a: cmp dx, cx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 8b676d: jb 0x8b6771 */
  if (cf) goto L_8b6771;
L_8b676f: /* 8b676f: mov ecx, edx */
  ecx = edx;
L_8b6771: /* 8b6771: mov word ptr [esi + 0xc], cx */
  W16((uint32_t)(esi + 0xcu), (ecx & 0xffffu));
/* 8b6775: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8b6778: mov word ptr [edi], cx */
  W16((uint32_t)(edi), (ecx & 0xffffu));
/* 8b677b: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b677e: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b6781: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b6782: jmp 0x8b6741 */
  goto L_8b6741;
L_8b6784: /* 8b6784: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b6787: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b6788: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8b678b: mov ebx, eax */
  ebx = eax;
/* 8b678d: jmp 0x8b6640 */
  goto L_8b6640;
L_8b6792: /* 8b6792: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b6795: mov eax, dword ptr [esi + 0xd8] */
  eax = R32((uint32_t)(esi + 0xd8u));
/* 8b679b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b679c: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8b679f: mov dword ptr [esi + 0xd8], eax */
  W32((uint32_t)(esi + 0xd8u), eax);
/* 8b67a5: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b67abu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b67ab: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8b67af: xor edi, edi */
  edi = 0;
L_8b67b1: /* 8b67b1: mov ecx, dword ptr [esi + 0xc8] */
  ecx = R32((uint32_t)(esi + 0xc8u));
/* 8b67b7: mov eax, 0x55555556 */
  eax = 0x55555556u;
/* 8b67bc: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8b67be: mov eax, edx */
  eax = edx;
/* 8b67c0: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8b67c3: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8b67c5: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b67c7: jge 0x8b6836 */
  if ((sf == of)) goto L_8b6836;
L_8b67c9: /* 8b67c9: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 8b67cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b67cd: lea ecx, [esi + 0xc4] */
  ecx = (uint32_t)(esi + 0xc4u);
/* 8b67d3: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8b67d9u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8b67d9: mov ebx, eax */
  ebx = eax;
/* 8b67db: xor eax, eax */
  eax = 0;
/* 8b67dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b67e0: /* 8b67e0: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b67e3: jge 0x8b6830 */
  if ((sf == of)) goto L_8b6830;
L_8b67e5: /* 8b67e5: movzx edx, word ptr [ebx + eax*2] */
  edx = (uint32_t)(R16((uint32_t)(ebx + eax*2)));
/* 8b67e9: lea esi, [eax + 1] */
  esi = (uint32_t)(eax + 0x1u);
/* 8b67ec: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 8b67f2: mov eax, esi */
  eax = esi;
/* 8b67f4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8b67f5: mov ecx, 3 */
  ecx = 0x3u;
/* 8b67fa: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x8b67fa);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8b67fc: lea eax, [ebp - 0x98] */
  eax = (uint32_t)(ebp + 0xffffff68u);
/* 8b6802: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6803: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8b6806: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6807: mov dword ptr [ebp - 0x90], edi */
  W32((uint32_t)(ebp + 0xffffff70u), edi);
/* 8b680d: mov dword ptr [ebp - 0x8c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff74u), 0xffffffffu);
/* 8b6817: movzx edx, word ptr [ebx + edx*2] */
  edx = (uint32_t)(R16((uint32_t)(ebx + edx*2)));
/* 8b681b: mov dword ptr [ebp - 0x94], edx */
  W32((uint32_t)(ebp + 0xffffff6cu), edx);
/* 8b6821: call 0x6c8c24 */
  esp -= 4; W32(esp, 0x8b6826u); SPILL(); f_6c8c24(); if (g_unwind) return; RELOAD();
/* 8b6826: mov eax, esi */
  eax = esi;
/* 8b6828: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b682b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b682e: jmp 0x8b67e0 */
  goto L_8b67e0;
L_8b6830: /* 8b6830: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8b6831: jmp 0x8b67b1 */
  goto L_8b67b1;
L_8b6836: /* 8b6836: xor ebx, ebx */
  ebx = 0;
L_8b6838: /* 8b6838: cmp ebx, dword ptr [ebp - 0x64] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b683b: jge 0x8b687f */
  if ((sf == of)) goto L_8b687f;
L_8b683d: /* 8b683d: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 8b6840: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b6843: mov esi, ebx */
  esi = ebx;
/* 8b6845: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8b6848: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b684a: xor edx, edx */
  edx = 0;
/* 8b684c: mov dx, word ptr [esi] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 8b684f: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 8b6852: add edi, 0xe0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b6858: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6859: mov ecx, edi */
  ecx = edi;
/* 8b685b: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 8b685e: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8b6864u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8b6864: xor ecx, ecx */
  ecx = 0;
/* 8b6866: mov cx, word ptr [esi + 4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x4u))) & 0xffffu);
/* 8b686a: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 8b686d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b686e: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 8b6871: mov ecx, edi */
  ecx = edi;
/* 8b6873: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8b6879u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8b6879: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b687c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b687d: jmp 0x8b6838 */
  goto L_8b6838;
L_8b687f: /* 8b687f: inc dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0xf4u), r);
  }
/* 8b6885: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b6887: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 8b688d: call dword ptr [0xcfa260] */
  esp -= 4; W32(esp, 0x8b6893u); SPILL(); f_4e2ffe(); if (g_unwind) return; /* Core!??0FBox@@QAE@H@Z */ RELOAD();
/* 8b6893: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b6896: lea ebx, [edx + 0x28] */
  ebx = (uint32_t)(edx + 0x28u);
/* 8b6899: mov ecx, 7 */
  ecx = 0x7u;
/* 8b689e: mov esi, eax */
  esi = eax;
/* 8b68a0: mov edi, ebx */
  edi = ebx;
/* 8b68a2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8b68a4: xor esi, esi */
  esi = 0;
L_8b68a6: /* 8b68a6: cmp esi, dword ptr [edx + 0x68] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x68u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b68a9: jge 0x8b68c3 */
  if ((sf == of)) goto L_8b68c3;
L_8b68ab: /* 8b68ab: mov ecx, dword ptr [edx + 0x64] */
  ecx = R32((uint32_t)(edx + 0x64u));
/* 8b68ae: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 8b68b1: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* 8b68b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b68b5: mov ecx, ebx */
  ecx = ebx;
/* 8b68b7: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x8b68bdu); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 8b68bd: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b68c0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b68c1: jmp 0x8b68a6 */
  goto L_8b68a6;
L_8b68c3: /* 8b68c3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8b68c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b68c6: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 8b68cc: call dword ptr [0xcfa55c] */
  esp -= 4; W32(esp, 0x8b68d2u); SPILL(); f_4e34c2(); if (g_unwind) return; /* Core!??0FSphere@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 8b68d2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b68d4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b68d7: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b68da: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8b68dc: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8b68df: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8b68e2: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8b68e5: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8b68e8: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8b68eb: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 8b68ee: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8b68f1: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8b68f5: call 0x6c4f2a */
  esp -= 4; W32(esp, 0x8b68fau); SPILL(); f_6c4f2a(); if (g_unwind) return; RELOAD();
L_8b68fa: /* 8b68fa: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b68fd: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 8b6903: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6904: lea edx, [esi + 0x64] */
  edx = (uint32_t)(esi + 0x64u);
/* 8b6907: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b6908: lea ecx, [esi + 0x108] */
  ecx = (uint32_t)(esi + 0x108u);
/* 8b690e: call 0x6c7edc */
  esp -= 4; W32(esp, 0x8b6913u); SPILL(); f_6c7edc(); if (g_unwind) return; RELOAD();
/* 8b6913: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 8b6918: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b691b: jne 0x8b692c */
  if (!zf) goto L_8b692c;
L_8b691d: /* 8b691d: mov edx, dword ptr [esi + 0x130] */
  edx = R32((uint32_t)(esi + 0x130u));
/* 8b6923: lea ecx, [esi + 0x130] */
  ecx = (uint32_t)(esi + 0x130u);
/* 8b6929: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8b692cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8b692c: /* 8b692c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b692f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6931: jne 0x8b693f */
  if (!zf) goto L_8b693f;
L_8b6933: /* 8b6933: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 8b6938: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8b693a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8b693c: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8b693fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8b693f: /* 8b693f: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 8b6945: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8b6949: call 0x6c9eda */
  esp -= 4; W32(esp, 0x8b694eu); SPILL(); f_6c9eda(); if (g_unwind) return; RELOAD();
/* 8b694e: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8b6951: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6952: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b6954: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8b6957: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8b695b: call 0x6c7991 */
  esp -= 4; W32(esp, 0x8b6960u); SPILL(); f_6c7991(); if (g_unwind) return; RELOAD();
/* 8b6960: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8b6963: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8b6967: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8b696du); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8b696d: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8b6973: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b6977: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8b697cu); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8b697c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b697f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b6980: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b6981: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b6988: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b6989: mov esp, ebp */
  esp = ebp;
/* 8b698b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b698c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8b5ccd(void) {
  LOAD_REGS();
L_8b5ccd: /* 8b5ccd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b5cd0: /* 8b5cd0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5cd3: jge 0x8b5cd8 */
  if ((sf == of)) goto L_8b5cd8;
L_8b5cd5: /* 8b5cd5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b5cd6: jmp 0x8b5cd0 */
  goto L_8b5cd0;
L_8b5cd8: /* 8b5cd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b5cda: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 8b5cdc: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8b5ce2u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8b5ce2: lea ecx, [edi + 0x80] */
  ecx = (uint32_t)(edi + 0x80u);
/* 8b5ce8: xor eax, eax */
  eax = 0;
/* 8b5cea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8b5cf0: /* 8b5cf0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5cf3: jge 0x8b5cf8 */
  if ((sf == of)) goto L_8b5cf8;
L_8b5cf5: /* 8b5cf5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b5cf6: jmp 0x8b5cf0 */
  goto L_8b5cf0;
L_8b5cf8: /* 8b5cf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b5cfa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b5cfc: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8b5d02u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8b5d02: lea ecx, [edi + 0x9c] */
  ecx = (uint32_t)(edi + 0x9cu);
/* 8b5d08: xor eax, eax */
  eax = 0;
/* 8b5d0a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8b5d10: /* 8b5d10: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5d13: jge 0x8b5d18 */
  if ((sf == of)) goto L_8b5d18;
L_8b5d15: /* 8b5d15: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b5d16: jmp 0x8b5d10 */
  goto L_8b5d10;
L_8b5d18: /* 8b5d18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b5d1a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b5d1c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8b5d22u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8b5d22: lea ebx, [edi + 0xb4] */
  ebx = (uint32_t)(edi + 0xb4u);
/* 8b5d28: xor esi, esi */
  esi = 0;
/* 8b5d2a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8b5d30: /* 8b5d30: cmp esi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5d33: jge 0x8b5d49 */
  if ((sf == of)) goto L_8b5d49;
L_8b5d35: /* 8b5d35: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b5d37: mov eax, esi */
  eax = esi;
/* 8b5d39: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8b5d3c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b5d3e: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 8b5d41: call 0x6cc3e7 */
  esp -= 4; W32(esp, 0x8b5d46u); SPILL(); f_6cc3e7(); if (g_unwind) return; RELOAD();
/* 8b5d46: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b5d47: jmp 0x8b5d30 */
  goto L_8b5d30;
L_8b5d49: /* 8b5d49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b5d4b: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8b5d4d: mov ecx, ebx */
  ecx = ebx;
/* 8b5d4f: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8b5d55u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8b5d55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b5d57: lea ecx, [edi + 0xc4] */
  ecx = (uint32_t)(edi + 0xc4u);
/* 8b5d5d: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8b5d63u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8b5d63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b5d65: lea ecx, [edi + 0xe0] */
  ecx = (uint32_t)(edi + 0xe0u);
/* 8b5d6b: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8b5d71u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8b5d71: mov eax, dword ptr [edi + 0x140] */
  eax = R32((uint32_t)(edi + 0x140u));
/* 8b5d77: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b5d79: jne 0x8b5d89 */
  if (!zf) goto L_8b5d89;
L_8b5d7b: /* 8b5d7b: mov eax, dword ptr [edi + 0x130] */
  eax = R32((uint32_t)(edi + 0x130u));
/* 8b5d81: lea ecx, [edi + 0x130] */
  ecx = (uint32_t)(edi + 0x130u);
/* 8b5d87: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8b5d89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8b5d89: /* 8b5d89: mov eax, dword ptr [edi + 0x140] */
  eax = R32((uint32_t)(edi + 0x140u));
/* 8b5d8f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8b5d91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b5d92: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8b5d98: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x8b5d9eu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 8b5d9e: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8b5da2: xor esi, esi */
  esi = 0;
L_8b5da4: /* 8b5da4: cmp esi, dword ptr [edi + 0x140] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x140u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5daa: jge 0x8b5e38 */
  if ((sf == of)) goto L_8b5e38;
L_8b5db0: /* 8b5db0: mov ecx, dword ptr [edi + 0x13c] */
  ecx = R32((uint32_t)(edi + 0x13cu));
/* 8b5db6: mov edx, dword ptr [ebp - 0x88] */
  edx = R32((uint32_t)(ebp + 0xffffff78u));
/* 8b5dbc: mov eax, esi */
  eax = esi;
/* 8b5dbe: imul eax, eax, 0x104 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x104u);
  eax = (uint32_t)r;
  }
/* 8b5dc4: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b5dc6: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 8b5dc9: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8b5dcc: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8b5dcf: mov edx, eax */
  edx = eax;
/* 8b5dd1: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8b5dd3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b5dd6: mov ecx, esp */
  ecx = esp;
/* 8b5dd8: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8b5dda: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 8b5ddd: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8b5de0: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8b5de3: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8b5de6: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 8b5de9: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 8b5deb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b5dee: mov edx, esp */
  edx = esp;
/* 8b5df0: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8b5df2: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 8b5df5: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8b5df8: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8b5dfb: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8b5dfe: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b5e01: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8b5e03: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b5e06: mov edx, esp */
  edx = esp;
/* 8b5e08: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8b5e0a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8b5e0d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8b5e10: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8b5e13: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 8b5e16: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8b5e19: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x8b5e1fu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 8b5e1f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b5e21: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b5e24: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8b5e26: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8b5e29: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8b5e2c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8b5e2f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8b5e32: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b5e33: jmp 0x8b5da4 */
  goto L_8b5da4;
L_8b5e38: /* 8b5e38: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8b5e3b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b5e41u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b5e41: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b5e44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b5e46: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8b5e4a: jne 0x8b5f97 */
  if (!zf) goto L_8b5f97;
L_8b5e50: /* 8b5e50: xor ebx, ebx */
  ebx = 0;
L_8b5e52: /* 8b5e52: cmp ebx, dword ptr [edi + 0xfc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5e58: jge 0x8b5eb4 */
  if ((sf == of)) goto L_8b5eb4;
L_8b5e5a: /* 8b5e5a: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8b5e5c: lea esi, [edi + 0x54] */
  esi = (uint32_t)(edi + 0x54u);
/* 8b5e5f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b5e61: mov ecx, esi */
  ecx = esi;
/* 8b5e63: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b5e69u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b5e69: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8b5e6b: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 8b5e6e: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8b5e71: xor ecx, ecx */
  ecx = 0;
/* 8b5e73: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b5e75: je 0x8b5e95 */
  if (zf) goto L_8b5e95;
L_8b5e77: /* 8b5e77: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8b5e79: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8b5e7c: mov word ptr [eax + 0x10], cx */
  W16((uint32_t)(eax + 0x10u), (ecx & 0xffffu));
/* 8b5e80: mov word ptr [eax + 0xe], cx */
  W16((uint32_t)(eax + 0xeu), (ecx & 0xffffu));
/* 8b5e84: mov word ptr [eax + 8], cx */
  W16((uint32_t)(eax + 0x8u), (ecx & 0xffffu));
/* 8b5e88: mov ecx, 0xffff */
  ecx = 0xffffu;
/* 8b5e8d: mov word ptr [eax + 0xc], cx */
  W16((uint32_t)(eax + 0xcu), (ecx & 0xffffu));
/* 8b5e91: mov word ptr [eax + 0xa], cx */
  W16((uint32_t)(eax + 0xau), (ecx & 0xffffu));
L_8b5e95: /* 8b5e95: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8b5e97: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b5e99: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8b5e9c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b5ea2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b5ea2: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 8b5ea5: add eax, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8b5ea8: je 0x8b5eb1 */
  if (zf) goto L_8b5eb1;
L_8b5eaa: /* 8b5eaa: mov ecx, eax */
  ecx = eax;
/* 8b5eac: call 0x6c89b3 */
  esp -= 4; W32(esp, 0x8b5eb1u); SPILL(); f_6c89b3(); if (g_unwind) return; RELOAD();
L_8b5eb1: /* 8b5eb1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b5eb2: jmp 0x8b5e52 */
  goto L_8b5e52;
L_8b5eb4: /* 8b5eb4: xor ebx, ebx */
  ebx = 0;
L_8b5eb6: /* 8b5eb6: cmp ebx, dword ptr [edi + 0x140] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x140u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5ebc: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8b5ebf: jge 0x8b5f97 */
  if ((sf == of)) goto L_8b5f97;
L_8b5ec5: /* 8b5ec5: mov edx, dword ptr [edi + 0x13c] */
  edx = R32((uint32_t)(edi + 0x13cu));
/* 8b5ecb: imul ebx, ebx, 0x104 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x104u);
  ebx = (uint32_t)r;
  }
/* 8b5ed1: mov ecx, dword ptr [ebx + edx + 0xf8] */
  ecx = R32((uint32_t)(ebx + edx + 0xf8u));
/* 8b5ed8: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8b5eda: mov eax, 6 */
  eax = 0x6u;
/* 8b5edf: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5ee1: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8b5ee4: jle 0x8b5ef0 */
  if ((zf || sf != of)) goto L_8b5ef0;
L_8b5ee6: /* 8b5ee6: mov dword ptr [ebx + 0xf8], eax */
  W32((uint32_t)(ebx + 0xf8u), eax);
/* 8b5eec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b5ef0: /* 8b5ef0: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 8b5ef6: cmp eax, dword ptr [ebx + 0xf8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xf8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5efc: jge 0x8b5f8e */
  if ((sf == of)) goto L_8b5f8e;
L_8b5f02: /* 8b5f02: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8b5f04: lea esi, [edi + 0xb4] */
  esi = (uint32_t)(edi + 0xb4u);
/* 8b5f0a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b5f0c: mov ecx, esi */
  ecx = esi;
/* 8b5f0e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b5f14u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b5f14: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b5f16: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8b5f19: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8b5f1b: mov edi, eax */
  edi = eax;
/* 8b5f1d: je 0x8b5f78 */
  if (zf) goto L_8b5f78;
L_8b5f1f: /* 8b5f1f: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 8b5f22: mov dword ptr [edi], 0x9f94a4 */
  W32((uint32_t)(edi), 0x9f94a4u);
/* 8b5f28: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b5f2eu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b5f2e: mov eax, dword ptr [0xcfa1b0] */
  eax = R32((uint32_t)(0xcfa1b0u));
/* 8b5f33: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 8b5f36: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8b5f38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b5f3a: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8b5f3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b5f40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b5f41: call 0x99c910 */
  esp -= 4; W32(esp, 0x8b5f46u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8b5f46: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 8b5f4c: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 8b5f51: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8b5f54: add ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 8b5f57: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8b5f59: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 8b5f5f: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b5f62: adc esi, 0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  esi = r;
  }
/* 8b5f65: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 8b5f68: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* 8b5f6b: xor eax, eax */
  eax = 0;
/* 8b5f6d: mov dword ptr [edi + 0x18], edx */
  W32((uint32_t)(edi + 0x18u), edx);
/* 8b5f70: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 8b5f73: mov dword ptr [edi + 0x1c], eax */
  W32((uint32_t)(edi + 0x1cu), eax);
/* 8b5f76: jmp 0x8b5f7a */
  goto L_8b5f7a;
L_8b5f78: /* 8b5f78: xor edi, edi */
  edi = 0;
L_8b5f7a: /* 8b5f7a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b5f7d: mov eax, dword ptr [edx + 0xb8] */
  eax = R32((uint32_t)(edx + 0xb8u));
/* 8b5f83: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8b5f84: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 8b5f87: mov edi, edx */
  edi = edx;
/* 8b5f89: jmp 0x8b5ef0 */
  goto L_8b5ef0;
L_8b5f8e: /* 8b5f8e: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b5f91: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b5f92: jmp 0x8b5eb6 */
  goto L_8b5eb6;
L_8b5f97: /* 8b5f97: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 8b5f9d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b5fa3u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b5fa3: xor eax, eax */
  eax = 0;
/* 8b5fa5: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8b5fa9: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_8b5fac: /* 8b5fac: mov ecx, eax */
  ecx = eax;
/* 8b5fae: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8b5fb1: cmp ecx, dword ptr [edi + 0x140] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x140u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5fb7: jge 0x8b65c3 */
  if ((sf == of)) goto L_8b65c3;
L_8b5fbd: /* 8b5fbd: mov edx, dword ptr [edi + 0x13c] */
  edx = R32((uint32_t)(edi + 0x13cu));
/* 8b5fc3: mov ebx, ecx */
  ebx = ecx;
/* 8b5fc5: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 8b5fc8: imul ebx, ebx, 0x104 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x104u);
  ebx = (uint32_t)r;
  }
/* 8b5fce: mov eax, dword ptr [ebx + edx + 0xf0] */
  eax = R32((uint32_t)(ebx + edx + 0xf0u));
/* 8b5fd5: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8b5fd7: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8b5fda: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 8b5fdd: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 8b5fe3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8b5fe6: lea esi, [ebx + 0xc] */
  esi = (uint32_t)(ebx + 0xcu);
/* 8b5fe9: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 8b5fec: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 8b5fef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b5ff0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b5ff1: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8b5ff4: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 8b5ff7: call 0x6c285b */
  esp -= 4; W32(esp, 0x8b5ffcu); SPILL(); f_6c285b(); if (g_unwind) return; RELOAD();
/* 8b5ffc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b5fff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6001: jne 0x8b65b4 */
  if (!zf) goto L_8b65b4;
L_8b6007: /* 8b6007: lea eax, [ebx + 0x18] */
  eax = (uint32_t)(ebx + 0x18u);
/* 8b600a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b600b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b600c: call 0x6c285b */
  esp -= 4; W32(esp, 0x8b6011u); SPILL(); f_6c285b(); if (g_unwind) return; RELOAD();
/* 8b6011: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b6014: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6016: jne 0x8b65b4 */
  if (!zf) goto L_8b65b4;
L_8b601c: /* 8b601c: lea eax, [ebx + 0x18] */
  eax = (uint32_t)(ebx + 0x18u);
/* 8b601f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6020: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b6021: call 0x6c285b */
  esp -= 4; W32(esp, 0x8b6026u); SPILL(); f_6c285b(); if (g_unwind) return; RELOAD();
/* 8b6026: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b6029: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b602b: jne 0x8b65b4 */
  if (!zf) goto L_8b65b4;
L_8b6031: /* 8b6031: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b6034: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 8b603a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8b603d: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8b6040: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x8b6046u); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 8b6046: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6048: jne 0x8b65b4 */
  if (!zf) goto L_8b65b4;
L_8b604e: /* 8b604e: mov esi, dword ptr [edi + 0x140] */
  esi = R32((uint32_t)(edi + 0x140u));
/* 8b6054: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6055: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6056: mov ecx, edi */
  ecx = edi;
/* 8b6058: call dword ptr [0xcfa884] */
  esp -= 4; W32(esp, 0x8b605eu); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* 8b605e: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 8b6064: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8b6066: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8b6068: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6069: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b606c: push 0xaea1c0 */
  { uint32_t v = 0xaea1c0u; esp -= 4; W32(esp, v); }
/* 8b6071: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b6072: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6073: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6074: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8b6077u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b6077: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b607a: mov dword ptr [ebp - 0x24], 3 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3u);
/* 8b6081: mov dword ptr [ebp - 0x2c], 0xc */
  W32((uint32_t)(ebp + 0xffffffd4u), 0xcu);
/* 8b6088: lea esi, [ebp - 0xc8] */
  esi = (uint32_t)(ebp + 0xffffff38u);
/* 8b608e: mov edi, edi */
  edi = edi;
L_8b6090: /* 8b6090: dec dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 8b6093: js 0x8b60a2 */
  if (sf) goto L_8b60a2;
L_8b6095: /* 8b6095: mov ecx, esi */
  ecx = esi;
/* 8b6097: call dword ptr [0xcfa1e0] */
  esp -= 4; W32(esp, 0x8b609du); SPILL(); f_4e35b2(); if (g_unwind) return; /* Core!??0FVector@@QAE@XZ */ RELOAD();
/* 8b609d: add esi, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b60a0: jmp 0x8b6090 */
  goto L_8b6090;
L_8b60a2: /* 8b60a2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b60a5: xor esi, esi */
  esi = 0;
/* 8b60a7: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b60a9: je 0x8b60fe */
  if (zf) goto L_8b60fe;
L_8b60ab: /* 8b60ab: xor eax, eax */
  eax = 0;
/* 8b60ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b60b0: /* 8b60b0: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b60b3: jge 0x8b6453 */
  if ((sf == of)) goto L_8b6453;
L_8b60b9: /* 8b60b9: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8b60bc: lea edx, [ebp + ecx*4 - 0xc8] */
  edx = (uint32_t)(ebp + ecx*4 + 0xffffff38u);
/* 8b60c3: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* 8b60cd: mov ecx, dword ptr [ebp - 0x94] */
  ecx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 8b60d3: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8b60d5: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* 8b60df: mov ecx, dword ptr [ebp - 0x90] */
  ecx = R32((uint32_t)(ebp + 0xffffff70u));
/* 8b60e5: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8b60e8: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* 8b60f2: mov ecx, dword ptr [ebp - 0x8c] */
  ecx = R32((uint32_t)(ebp + 0xffffff74u));
/* 8b60f8: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8b60fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b60fc: jmp 0x8b60b0 */
  goto L_8b60b0;
L_8b60fe: /* 8b60fe: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8b6101: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b6103: je 0x8b6197 */
  if (zf) goto L_8b6197;
L_8b6109: /* 8b6109: mov eax, dword ptr [ebx + 0xf4] */
  eax = R32((uint32_t)(ebx + 0xf4u));
/* 8b610f: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b6112: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 8b6115: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b6117: mov dword ptr [ebp - 0xc8], edx */
  W32((uint32_t)(ebp + 0xffffff38u), edx);
/* 8b611d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8b6120: mov dword ptr [ebp - 0xc4], edx */
  W32((uint32_t)(ebp + 0xffffff3cu), edx);
/* 8b6126: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8b6129: mov dword ptr [ebp - 0xc0], eax */
  W32((uint32_t)(ebp + 0xffffff40u), eax);
/* 8b612f: mov eax, dword ptr [ebx + 0xfc] */
  eax = R32((uint32_t)(ebx + 0xfcu));
/* 8b6135: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b6138: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 8b613b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b613d: mov dword ptr [ebp - 0xbc], edx */
  W32((uint32_t)(ebp + 0xffffff44u), edx);
/* 8b6143: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8b6146: mov dword ptr [ebp - 0xb8], edx */
  W32((uint32_t)(ebp + 0xffffff48u), edx);
/* 8b614c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8b614f: mov dword ptr [ebp - 0xb4], eax */
  W32((uint32_t)(ebp + 0xffffff4cu), eax);
/* 8b6155: mov eax, dword ptr [ebx + 0x100] */
  eax = R32((uint32_t)(ebx + 0x100u));
/* 8b615b: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b615e: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 8b6161: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8b6163: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 8b6169: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8b616c: mov dword ptr [ebp - 0xac], edx */
  W32((uint32_t)(ebp + 0xffffff54u), edx);
/* 8b6172: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8b6175: mov dword ptr [ebp - 0xa8], eax */
  W32((uint32_t)(ebp + 0xffffff58u), eax);
/* 8b617b: mov eax, 1 */
  eax = 0x1u;
/* 8b6180: mov dword ptr [ebx + 0xf4], eax */
  W32((uint32_t)(ebx + 0xf4u), eax);
/* 8b6186: mov dword ptr [ebx + 0xfc], esi */
  W32((uint32_t)(ebx + 0xfcu), esi);
/* 8b618c: mov dword ptr [ebx + 0x100], eax */
  W32((uint32_t)(ebx + 0x100u), eax);
/* 8b6192: jmp 0x8b6453 */
  goto L_8b6453;
L_8b6197: /* 8b6197: xor eax, eax */
  eax = 0;
/* 8b6199: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b61a0: /* 8b61a0: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b61a3: jge 0x8b61d8 */
  if ((sf == of)) goto L_8b61d8;
L_8b61a5: /* 8b61a5: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8b61a8: lea edx, [ebp + ecx*4 - 0xc8] */
  edx = (uint32_t)(ebp + ecx*4 + 0xffffff38u);
/* 8b61af: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 8b61b6: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 8b61b9: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8b61bb: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 8b61c2: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8b61c5: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8b61c8: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 8b61cf: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8b61d2: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8b61d5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b61d6: jmp 0x8b61a0 */
  goto L_8b61a0;
L_8b61d8: /* 8b61d8: mov eax, dword ptr [ebx + 0xf4] */
  eax = R32((uint32_t)(ebx + 0xf4u));
/* 8b61de: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
L_8b61e1: /* 8b61e1: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b61e3: jle 0x8b61ec */
  if ((zf || sf != of)) goto L_8b61ec;
L_8b61e5: /* 8b61e5: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 8b61e8: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8b61ea: jmp 0x8b61e1 */
  goto L_8b61e1;
L_8b61ec: /* 8b61ec: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 8b61ef: nop  */
L_8b61f0: /* 8b61f0: cmp dword ptr [ebp - 0x28], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b61f4: jge 0x8b6451 */
  if ((sf == of)) goto L_8b6451;
L_8b61fa: /* 8b61fa: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8b61fd: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b6203u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b6203: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8b6207: xor esi, esi */
  esi = 0;
/* 8b6209: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b6210: /* 8b6210: cmp esi, dword ptr [edi + 0x140] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x140u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6216: jge 0x8b6288 */
  if ((sf == of)) goto L_8b6288;
L_8b6218: /* 8b6218: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b621b: mov eax, dword ptr [edx + 0x13c] */
  eax = R32((uint32_t)(edx + 0x13cu));
/* 8b6221: mov edi, esi */
  edi = esi;
/* 8b6223: imul edi, edi, 0x104 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x104u);
  edi = (uint32_t)r;
  }
/* 8b6229: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b622b: xor ebx, ebx */
  ebx = 0;
/* 8b622d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b6230: /* 8b6230: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6233: jge 0x8b627f */
  if ((sf == of)) goto L_8b627f;
L_8b6235: /* 8b6235: lea eax, [ebx + ebx*2] */
  eax = (uint32_t)(ebx + ebx*2);
/* 8b6238: lea ecx, [edi + eax*4] */
  ecx = (uint32_t)(edi + eax*4);
/* 8b623b: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8b623e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b6241: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b6244: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6245: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b6248: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6249: call 0x6c285b */
  esp -= 4; W32(esp, 0x8b624eu); SPILL(); f_6c285b(); if (g_unwind) return; RELOAD();
/* 8b624e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b6251: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6253: je 0x8b6285 */
  if (zf) goto L_8b6285;
L_8b6255: /* 8b6255: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b6258: xor edx, edx */
  edx = 0;
/* 8b625a: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b625c: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8b625f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8b6261: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b6263: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8b6266: mov edi, edx */
  edi = edx;
/* 8b6268: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b626eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b626e: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8b6271: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8b6274: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 8b6277: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 8b6279: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8b627c: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
L_8b627f: /* 8b627f: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b6282: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b6283: jmp 0x8b6210 */
  goto L_8b6210;
L_8b6285: /* 8b6285: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b6286: jmp 0x8b6230 */
  goto L_8b6230;
L_8b6288: /* 8b6288: mov eax, 1 */
  eax = 0x1u;
/* 8b628d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b6290: /* 8b6290: xor esi, esi */
  esi = 0;
/* 8b6292: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b6294: je 0x8b6389 */
  if (zf) goto L_8b6389;
L_8b629a: /* 8b629a: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
L_8b629d: /* 8b629d: cmp esi, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b62a0: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 8b62a3: jge 0x8b6381 */
  if ((sf == of)) goto L_8b6381;
L_8b62a9: /* 8b62a9: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8b62ac: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 8b62af: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8b62b2: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8b62b5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b62b7: je 0x8b637b */
  if (zf) goto L_8b637b;
L_8b62bd: /* 8b62bd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b62bf: mov eax, dword ptr [edi + 0x13c] */
  eax = R32((uint32_t)(edi + 0x13cu));
/* 8b62c5: imul edx, edx, 0x104 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x104u);
  edx = (uint32_t)r;
  }
/* 8b62cb: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8b62cd: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 8b62d0: xor eax, eax */
  eax = 0;
L_8b62d2: /* 8b62d2: cmp eax, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b62d5: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 8b62d8: jge 0x8b637b */
  if ((sf == of)) goto L_8b637b;
L_8b62de: /* 8b62de: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8b62e1: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8b62e4: lea ecx, [edi + ecx*4] */
  ecx = (uint32_t)(edi + ecx*4);
/* 8b62e7: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* 8b62ea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b62ec: jne 0x8b6372 */
  if (!zf) goto L_8b6372;
L_8b62f2: /* 8b62f2: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 8b62f4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b62f7: imul ebx, ebx, 0x104 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x104u);
  ebx = (uint32_t)r;
  }
/* 8b62fd: mov edi, dword ptr [ecx + 0x13c] */
  edi = R32((uint32_t)(ecx + 0x13cu));
/* 8b6303: mov ecx, dword ptr [ebx + edi + 0xf4] */
  ecx = R32((uint32_t)(ebx + edi + 0xf4u));
/* 8b630a: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8b630c: test dword ptr [edx + 0xf4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0xf4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6312: je 0x8b6372 */
  if (zf) goto L_8b6372;
L_8b6314: /* 8b6314: xor edi, edi */
  edi = 0;
/* 8b6316: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b6318: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 8b631b: je 0x8b6361 */
  if (zf) goto L_8b6361;
L_8b631d: /* 8b631d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b6320: /* 8b6320: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6323: jge 0x8b635b */
  if ((sf == of)) goto L_8b635b;
L_8b6325: /* 8b6325: xor esi, esi */
  esi = 0;
L_8b6327: /* 8b6327: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b632a: jge 0x8b634f */
  if ((sf == of)) goto L_8b634f;
L_8b632c: /* 8b632c: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 8b632f: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 8b6332: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b6335: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8b6338: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6339: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 8b633c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b633d: call 0x6c285b */
  esp -= 4; W32(esp, 0x8b6342u); SPILL(); f_6c285b(); if (g_unwind) return; RELOAD();
/* 8b6342: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b6345: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6347: je 0x8b634c */
  if (zf) goto L_8b634c;
L_8b6349: /* 8b6349: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
L_8b634c: /* 8b634c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b634d: jmp 0x8b6327 */
  goto L_8b6327;
L_8b634f: /* 8b634f: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8b6352: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8b6355: mov eax, dword ptr [ebp - 0x74] */
  eax = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8b6358: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8b6359: jmp 0x8b6320 */
  goto L_8b6320;
L_8b635b: /* 8b635b: cmp dword ptr [ebp - 0x40], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b635f: jle 0x8b6372 */
  if ((zf || sf != of)) goto L_8b6372;
L_8b6361: /* 8b6361: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8b6364: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8b6367: mov dword ptr [edi + ecx*4 + 8], 1 */
  W32((uint32_t)(edi + ecx*4 + 0x8u), 0x1u);
/* 8b636f: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
L_8b6372: /* 8b6372: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b6375: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b6376: jmp 0x8b62d2 */
  goto L_8b62d2;
L_8b637b: /* 8b637b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b637c: jmp 0x8b629d */
  goto L_8b629d;
L_8b6381: /* 8b6381: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8b6384: jmp 0x8b6290 */
  goto L_8b6290;
L_8b6389: /* 8b6389: mov esi, dword ptr [ebp - 0x88] */
  esi = R32((uint32_t)(ebp + 0xffffff78u));
/* 8b638f: xor ebx, ebx */
  ebx = 0;
L_8b6391: /* 8b6391: cmp ebx, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6394: jge 0x8b6436 */
  if ((sf == of)) goto L_8b6436;
L_8b639a: /* 8b639a: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8b639d: lea edx, [ebx + ebx*2] */
  edx = (uint32_t)(ebx + ebx*2);
/* 8b63a0: mov ecx, dword ptr [eax + edx*4 + 8] */
  ecx = R32((uint32_t)(eax + edx*4 + 0x8u));
/* 8b63a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b63a6: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8b63a9: je 0x8b6430 */
  if (zf) goto L_8b6430;
L_8b63af: /* 8b63af: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b63b1: cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b63b4: je 0x8b63ff */
  if (zf) goto L_8b63ff;
L_8b63b6: /* 8b63b6: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8b63b9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8b63ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b63bc: jl 0x8b63ff */
  if ((sf != of)) goto L_8b63ff;
L_8b63be: /* 8b63be: cmp eax, dword ptr [edi + 0x150] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x150u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b63c4: jge 0x8b63ff */
  if ((sf == of)) goto L_8b63ff;
L_8b63c6: /* 8b63c6: lea ecx, [edx + edx*2] */
  ecx = (uint32_t)(edx + edx*2);
/* 8b63c9: fld dword ptr [esi + ecx*4 + 8] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0x8u)); FPUSH(v); }
/* 8b63cd: lea eax, [esi + ecx*4] */
  eax = (uint32_t)(esi + ecx*4);
/* 8b63d0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b63d3: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8b63d6: fmul dword ptr [esi + ecx*4 + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + ecx*4 + 0x8u)));
/* 8b63da: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 8b63dd: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8b63e0: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8b63e3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b63e5: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8b63e7: mov eax, dword ptr [edi + 0x14c] */
  eax = R32((uint32_t)(edi + 0x14cu));
/* 8b63ed: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8b63ef: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8b63f2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b63f4: fcomp dword ptr [eax + ecx*4 - 4] */
  fpu_com(ST0, F32((uint32_t)(eax + ecx*4 + 0xfffffffcu)));
  FPOP();
/* 8b63f8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b63fa: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b63fd: jnp 0x8b6430 */
  if (!pf) goto L_8b6430;
L_8b63ff: /* 8b63ff: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8b6402: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 8b6405: fld dword ptr [esi + edx*4] */
  { double v = F32((uint32_t)(esi + edx*4)); FPUSH(v); }
/* 8b6408: lea ecx, [esi + edx*4] */
  ecx = (uint32_t)(esi + edx*4);
/* 8b640b: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8b640e: fadd dword ptr [ebp + eax*4 - 0xc8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + eax*4 + 0xffffff38u)));
/* 8b6415: lea eax, [ebp + eax*4 - 0xc8] */
  eax = (uint32_t)(ebp + eax*4 + 0xffffff38u);
/* 8b641c: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8b641e: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8b6421: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8b6424: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8b6427: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8b642a: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8b642d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
L_8b6430: /* 8b6430: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b6431: jmp 0x8b6391 */
  goto L_8b6391;
L_8b6436: /* 8b6436: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8b6439: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8b643d: call 0x6c3b8e */
  esp -= 4; W32(esp, 0x8b6442u); SPILL(); f_6c3b8e(); if (g_unwind) return; RELOAD();
/* 8b6442: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8b6445: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b6448: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b6449: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8b644c: jmp 0x8b61f0 */
  goto L_8b61f0;
L_8b6451: /* 8b6451: xor esi, esi */
  esi = 0;
L_8b6453: /* 8b6453: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6456: jge 0x8b646b */
  if ((sf == of)) goto L_8b646b;
L_8b6458: /* 8b6458: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 8b645b: lea ecx, [ebp + ecx*4 - 0xc8] */
  ecx = (uint32_t)(ebp + ecx*4 + 0xffffff38u);
/* 8b6462: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8b6468u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8b6468: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b6469: jmp 0x8b6453 */
  goto L_8b6453;
L_8b646b: /* 8b646b: xor edi, edi */
  edi = 0;
/* 8b646d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b6470: /* 8b6470: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6473: jge 0x8b64de */
  if ((sf == of)) goto L_8b64de;
L_8b6475: /* 8b6475: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b6478: mov edx, dword ptr [ebx + 0xf8] */
  edx = R32((uint32_t)(ebx + 0xf8u));
/* 8b647e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b647f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b6480: mov ecx, edi */
  ecx = edi;
/* 8b6482: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8b6485: lea edx, [ecx + ebx + 0x24] */
  edx = (uint32_t)(ecx + ebx + 0x24u);
/* 8b6489: mov ecx, dword ptr [ebx + edi*4 + 0xe4] */
  ecx = R32((uint32_t)(ebx + edi*4 + 0xe4u));
/* 8b6490: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b6491: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6492: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 8b6495: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8b6498: lea edx, [ebp + eax - 0xc8] */
  edx = (uint32_t)(ebp + eax + 0xffffff38u);
/* 8b649f: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 8b64a1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b64a4: mov ecx, esp */
  ecx = esp;
/* 8b64a6: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 8b64a8: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 8b64ab: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8b64ae: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 8b64b1: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8b64b4: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b64b6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b64b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b64bb: mov ecx, esp */
  ecx = esp;
/* 8b64bd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8b64bf: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8b64c2: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8b64c5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8b64c8: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8b64cb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b64ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b64cf: call 0x6c98fe */
  esp -= 4; W32(esp, 0x8b64d4u); SPILL(); f_6c98fe(); if (g_unwind) return; RELOAD();
/* 8b64d4: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b64d7: mov dword ptr [ebp + edi*4 - 0x5c], eax */
  W32((uint32_t)(ebp + edi*4 + 0xffffffa4u), eax);
/* 8b64db: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8b64dc: jmp 0x8b6470 */
  goto L_8b6470;
L_8b64de: /* 8b64de: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8b64e1: cmp edx, dword ptr [ebp - 0x58] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b64e4: je 0x8b65b7 */
  if (zf) goto L_8b65b7;
L_8b64ea: /* 8b64ea: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8b64ed: cmp dword ptr [ebp - 0x58], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b64f0: je 0x8b65b7 */
  if (zf) goto L_8b65b7;
L_8b64f6: /* 8b64f6: mov ecx, eax */
  ecx = eax;
/* 8b64f8: mov eax, edx */
  eax = edx;
/* 8b64fa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b64fc: je 0x8b65b7 */
  if (zf) goto L_8b65b7;
L_8b6502: /* 8b6502: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b6505: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6507: jne 0x8b6547 */
  if (!zf) goto L_8b6547;
L_8b6509: /* 8b6509: xor esi, esi */
  esi = 0;
/* 8b650b: jmp 0x8b6510 */
  goto L_8b6510;
L_8b6510: /* 8b6510: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6513: jge 0x8b653c */
  if ((sf == of)) goto L_8b653c;
L_8b6515: /* 8b6515: mov ecx, dword ptr [ebx + 0xf0] */
  ecx = R32((uint32_t)(ebx + 0xf0u));
/* 8b651b: xor edx, edx */
  edx = 0;
/* 8b651d: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8b6520: mov dx, word ptr [ebp + esi*4 - 0x5c] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + esi*4 + 0xffffffa4u))) & 0xffffu);
/* 8b6525: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 8b6528: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6529: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8b652c: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8b652f: lea ecx, [ecx + edx + 4] */
  ecx = (uint32_t)(ecx + edx + 0x4u);
/* 8b6533: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8b6539u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8b6539: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b653a: jmp 0x8b6510 */
  goto L_8b6510;
L_8b653c: /* 8b653c: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 8b653f: inc word ptr [eax + 0xe] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0xeu)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(eax + 0xeu), r);
  }
/* 8b6543: inc word ptr [eax + 0x10] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x10u)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(eax + 0x10u), r);
  }
L_8b6547: /* 8b6547: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8b654a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8b654d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b654f: je 0x8b65b7 */
  if (zf) goto L_8b65b7;
L_8b6551: /* 8b6551: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b6554: mov edx, dword ptr [ebp - 0x88] */
  edx = R32((uint32_t)(ebp + 0xffffff78u));
/* 8b655a: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8b655d: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8b6560: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8b6566u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8b6566: fst dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 8b6569: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8b656f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b6571: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6574: jne 0x8b65b7 */
  if (!zf) goto L_8b65b7;
L_8b6576: /* 8b6576: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8b6578: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b657a: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 8b6580: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b6586u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b6586: mov ecx, dword ptr [ebp - 0xd4] */
  ecx = R32((uint32_t)(ebp + 0xffffff2cu));
/* 8b658c: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8b658f: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8b6592: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6594: je 0x8b65b7 */
  if (zf) goto L_8b65b7;
L_8b6596: /* 8b6596: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8b6599: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8b659c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b659d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b659e: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8b65a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b65a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b65a3: call 0x6c3337 */
  esp -= 4; W32(esp, 0x8b65a8u); SPILL(); f_6c3337(); if (g_unwind) return; RELOAD();
/* 8b65a8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b65ab: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b65ae: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b65af: jmp 0x8b5fac */
  goto L_8b5fac;
L_8b65b4: /* 8b65b4: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_8b65b7: /* 8b65b7: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b65ba: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b65bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b65be: jmp 0x8b5fac */
  goto L_8b5fac;
L_8b65c3: /* 8b65c3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b65c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b65c8: jne 0x8b68fa */
  if (!zf) goto L_8b68fa;
L_8b65ce: /* 8b65ce: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b65d1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b65d3: je 0x8b65f5 */
  if (zf) goto L_8b65f5;
L_8b65d5: /* 8b65d5: mov ecx, edi */
  ecx = edi;
/* 8b65d7: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8b65ddu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8b65dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b65de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b65df: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8b65e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8b65e6: push 0xaea1f8 */
  { uint32_t v = 0xaea1f8u; esp -= 4; W32(esp, v); }
/* 8b65eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b65ec: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8b65f2u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8b65f2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b65f5: /* 8b65f5: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 8b65f8: mov ecx, dword ptr [edi + 0x94] */
  ecx = R32((uint32_t)(edi + 0x94u));
/* 8b65fe: mov eax, dword ptr [edi + 0xb0] */
  eax = R32((uint32_t)(edi + 0xb0u));
/* 8b6604: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8b6605: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8b6606: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b6607: mov dword ptr [edi + 0xb0], eax */
  W32((uint32_t)(edi + 0xb0u), eax);
/* 8b660d: mov dword ptr [edi + 0x78], edx */
  W32((uint32_t)(edi + 0x78u), edx);
/* 8b6610: mov dword ptr [edi + 0x94], ecx */
  W32((uint32_t)(edi + 0x94u), ecx);
/* 8b6616: xor eax, eax */
  eax = 0;
L_8b6618: /* 8b6618: cmp eax, dword ptr [edi + 0xb8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xb8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b661e: jge 0x8b6634 */
  if ((sf == of)) goto L_8b6634;
L_8b6620: /* 8b6620: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 8b6626: mov edx, eax */
  edx = eax;
/* 8b6628: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8b662b: lea ecx, [edx + ecx + 0x1c] */
  ecx = (uint32_t)(edx + ecx + 0x1cu);
/* 8b662f: inc dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx), r);
  }
/* 8b6631: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b6632: jmp 0x8b6618 */
  goto L_8b6618;
L_8b6634: /* 8b6634: xor ebx, ebx */
  ebx = 0;
/* 8b6636: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8b6639: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b6640: /* 8b6640: cmp ebx, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6643: jge 0x8b6792 */
  if ((sf == of)) goto L_8b6792;
L_8b6649: /* 8b6649: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b664c: mov esi, dword ptr [ecx + 0x54] */
  esi = R32((uint32_t)(ecx + 0x54u));
/* 8b664f: mov edx, dword ptr [ecx + 0x58] */
  edx = R32((uint32_t)(ecx + 0x58u));
/* 8b6652: lea edi, [ebx + ebx*4] */
  edi = (uint32_t)(ebx + ebx*4);
/* 8b6655: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b6657: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8b665a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b665c: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b665e: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 8b6661: call dword ptr [0xcfa884] */
  esp -= 4; W32(esp, 0x8b6667u); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* 8b6667: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 8b666d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8b666f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8b6671: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6672: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8b6675: push 0xaea23c */
  { uint32_t v = 0xaea23cu; esp -= 4; W32(esp, v); }
/* 8b667a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b667b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b667c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b667d: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8b6680u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b6680: imul ebx, ebx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x1cu);
  ebx = (uint32_t)r;
  }
/* 8b6683: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8b6686: mov eax, dword ptr [ecx + ebx + 8] */
  eax = R32((uint32_t)(ecx + ebx + 0x8u));
/* 8b668a: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b668c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b668f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6691: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* 8b6694: je 0x8b6784 */
  if (zf) goto L_8b6784;
L_8b669a: /* 8b669a: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b669d: cmp dword ptr [ebx + 0x148], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x148u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b66a4: jne 0x8b66cc */
  if (!zf) goto L_8b66cc;
L_8b66a6: /* 8b66a6: mov eax, ebx */
  eax = ebx;
/* 8b66a8: mov edx, dword ptr [eax + 0x54] */
  edx = R32((uint32_t)(eax + 0x54u));
/* 8b66ab: mov dword ptr [edx + edi + 4], 1 */
  W32((uint32_t)(edx + edi + 0x4u), 0x1u);
/* 8b66b3: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8b66b6: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8b66b9: mov ebx, dword ptr [eax + 0x54] */
  ebx = R32((uint32_t)(eax + 0x54u));
/* 8b66bc: mov eax, dword ptr [ecx + edx] */
  eax = R32((uint32_t)(ecx + edx));
/* 8b66bf: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b66c1: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8b66c3: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0x8b66c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b66c6: mov word ptr [ebx + 0x10], ax */
  W16((uint32_t)(ebx + 0x10u), (eax & 0xffffu));
/* 8b66ca: jmp 0x8b66f1 */
  goto L_8b66f1;
L_8b66cc: /* 8b66cc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8b66ce: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8b66d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b66d1: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8b66d4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8b66d7: mov ecx, dword ptr [ecx + eax + 8] */
  ecx = R32((uint32_t)(ecx + eax + 0x8u));
/* 8b66db: mov eax, 0x55555556 */
  eax = 0x55555556u;
/* 8b66e0: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8b66e2: mov ecx, dword ptr [ebx + 0x54] */
  ecx = R32((uint32_t)(ebx + 0x54u));
/* 8b66e5: mov eax, edx */
  eax = edx;
/* 8b66e7: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8b66ea: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8b66ec: mov word ptr [ecx + edi + 0x10], dx */
  W16((uint32_t)(ecx + edi + 0x10u), (edx & 0xffffu));
L_8b66f1: /* 8b66f1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b66f4: mov eax, dword ptr [ecx + 0xc8] */
  eax = R32((uint32_t)(ecx + 0xc8u));
/* 8b66fa: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 8b66fd: mov word ptr [esi + 8], ax */
  W16((uint32_t)(esi + 0x8u), (eax & 0xffffu));
/* 8b6701: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8b6704: mov eax, dword ptr [ebx + edx + 8] */
  eax = R32((uint32_t)(ebx + edx + 0x8u));
/* 8b6708: lea edi, [ecx + 0xc4] */
  edi = (uint32_t)(ecx + 0xc4u);
/* 8b670e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b670f: mov ecx, edi */
  ecx = edi;
/* 8b6711: call dword ptr [0xcfa64c] */
  esp -= 4; W32(esp, 0x8b6717u); SPILL(); f_4e437c(); if (g_unwind) return; /* Core!?Add@?$TArray@G@@QAEHH@Z */ RELOAD();
/* 8b6717: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6718: mov ecx, edi */
  ecx = edi;
/* 8b671a: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8b6720u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8b6720: mov edi, eax */
  edi = eax;
/* 8b6722: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8b6725: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b6727: lea ecx, [ebx + eax + 4] */
  ecx = (uint32_t)(ebx + eax + 0x4u);
/* 8b672b: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8b6731u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8b6731: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8b6734: mov word ptr [esi + 0xa], cx */
  W16((uint32_t)(esi + 0xau), (ecx & 0xffffu));
/* 8b6738: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8b673b: mov word ptr [esi + 0xc], dx */
  W16((uint32_t)(esi + 0xcu), (edx & 0xffffu));
/* 8b673f: xor ebx, ebx */
  ebx = 0;
L_8b6741: /* 8b6741: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8b6744: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8b6747: cmp ebx, dword ptr [edx + ecx + 8] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b674b: jge 0x8b6784 */
  if ((sf == of)) goto L_8b6784;
L_8b674d: /* 8b674d: mov cx, word ptr [esi + 0xa] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0xau))) & 0xffffu);
/* 8b6751: xor edx, edx */
  edx = 0;
/* 8b6753: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8b6756: cmp dx, cx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8b6759: ja 0x8b675d */
  if ((!cf && !zf)) goto L_8b675d;
L_8b675b: /* 8b675b: mov ecx, edx */
  ecx = edx;
L_8b675d: /* 8b675d: mov word ptr [esi + 0xa], cx */
  W16((uint32_t)(esi + 0xau), (ecx & 0xffffu));
/* 8b6761: mov cx, word ptr [esi + 0xc] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0xcu))) & 0xffffu);
/* 8b6765: xor edx, edx */
  edx = 0;
/* 8b6767: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8b676a: cmp dx, cx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 8b676d: jb 0x8b6771 */
  if (cf) goto L_8b6771;
L_8b676f: /* 8b676f: mov ecx, edx */
  ecx = edx;
L_8b6771: /* 8b6771: mov word ptr [esi + 0xc], cx */
  W16((uint32_t)(esi + 0xcu), (ecx & 0xffffu));
/* 8b6775: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8b6778: mov word ptr [edi], cx */
  W16((uint32_t)(edi), (ecx & 0xffffu));
/* 8b677b: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b677e: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b6781: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b6782: jmp 0x8b6741 */
  goto L_8b6741;
L_8b6784: /* 8b6784: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b6787: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b6788: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8b678b: mov ebx, eax */
  ebx = eax;
/* 8b678d: jmp 0x8b6640 */
  goto L_8b6640;
L_8b6792: /* 8b6792: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b6795: mov eax, dword ptr [esi + 0xd8] */
  eax = R32((uint32_t)(esi + 0xd8u));
/* 8b679b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b679c: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8b679f: mov dword ptr [esi + 0xd8], eax */
  W32((uint32_t)(esi + 0xd8u), eax);
/* 8b67a5: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b67abu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b67ab: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8b67af: xor edi, edi */
  edi = 0;
L_8b67b1: /* 8b67b1: mov ecx, dword ptr [esi + 0xc8] */
  ecx = R32((uint32_t)(esi + 0xc8u));
/* 8b67b7: mov eax, 0x55555556 */
  eax = 0x55555556u;
/* 8b67bc: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8b67be: mov eax, edx */
  eax = edx;
/* 8b67c0: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8b67c3: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8b67c5: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b67c7: jge 0x8b6836 */
  if ((sf == of)) goto L_8b6836;
L_8b67c9: /* 8b67c9: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 8b67cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b67cd: lea ecx, [esi + 0xc4] */
  ecx = (uint32_t)(esi + 0xc4u);
/* 8b67d3: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8b67d9u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8b67d9: mov ebx, eax */
  ebx = eax;
/* 8b67db: xor eax, eax */
  eax = 0;
/* 8b67dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b67e0: /* 8b67e0: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b67e3: jge 0x8b6830 */
  if ((sf == of)) goto L_8b6830;
L_8b67e5: /* 8b67e5: movzx edx, word ptr [ebx + eax*2] */
  edx = (uint32_t)(R16((uint32_t)(ebx + eax*2)));
/* 8b67e9: lea esi, [eax + 1] */
  esi = (uint32_t)(eax + 0x1u);
/* 8b67ec: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 8b67f2: mov eax, esi */
  eax = esi;
/* 8b67f4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8b67f5: mov ecx, 3 */
  ecx = 0x3u;
/* 8b67fa: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x8b67fa);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8b67fc: lea eax, [ebp - 0x98] */
  eax = (uint32_t)(ebp + 0xffffff68u);
/* 8b6802: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6803: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8b6806: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6807: mov dword ptr [ebp - 0x90], edi */
  W32((uint32_t)(ebp + 0xffffff70u), edi);
/* 8b680d: mov dword ptr [ebp - 0x8c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff74u), 0xffffffffu);
/* 8b6817: movzx edx, word ptr [ebx + edx*2] */
  edx = (uint32_t)(R16((uint32_t)(ebx + edx*2)));
/* 8b681b: mov dword ptr [ebp - 0x94], edx */
  W32((uint32_t)(ebp + 0xffffff6cu), edx);
/* 8b6821: call 0x6c8c24 */
  esp -= 4; W32(esp, 0x8b6826u); SPILL(); f_6c8c24(); if (g_unwind) return; RELOAD();
/* 8b6826: mov eax, esi */
  eax = esi;
/* 8b6828: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b682b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b682e: jmp 0x8b67e0 */
  goto L_8b67e0;
L_8b6830: /* 8b6830: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8b6831: jmp 0x8b67b1 */
  goto L_8b67b1;
L_8b6836: /* 8b6836: xor ebx, ebx */
  ebx = 0;
L_8b6838: /* 8b6838: cmp ebx, dword ptr [ebp - 0x64] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b683b: jge 0x8b687f */
  if ((sf == of)) goto L_8b687f;
L_8b683d: /* 8b683d: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 8b6840: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b6843: mov esi, ebx */
  esi = ebx;
/* 8b6845: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8b6848: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b684a: xor edx, edx */
  edx = 0;
/* 8b684c: mov dx, word ptr [esi] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 8b684f: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 8b6852: add edi, 0xe0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b6858: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6859: mov ecx, edi */
  ecx = edi;
/* 8b685b: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 8b685e: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8b6864u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8b6864: xor ecx, ecx */
  ecx = 0;
/* 8b6866: mov cx, word ptr [esi + 4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x4u))) & 0xffffu);
/* 8b686a: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 8b686d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b686e: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 8b6871: mov ecx, edi */
  ecx = edi;
/* 8b6873: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8b6879u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8b6879: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b687c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b687d: jmp 0x8b6838 */
  goto L_8b6838;
L_8b687f: /* 8b687f: inc dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0xf4u), r);
  }
/* 8b6885: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b6887: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 8b688d: call dword ptr [0xcfa260] */
  esp -= 4; W32(esp, 0x8b6893u); SPILL(); f_4e2ffe(); if (g_unwind) return; /* Core!??0FBox@@QAE@H@Z */ RELOAD();
/* 8b6893: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b6896: lea ebx, [edx + 0x28] */
  ebx = (uint32_t)(edx + 0x28u);
/* 8b6899: mov ecx, 7 */
  ecx = 0x7u;
/* 8b689e: mov esi, eax */
  esi = eax;
/* 8b68a0: mov edi, ebx */
  edi = ebx;
/* 8b68a2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8b68a4: xor esi, esi */
  esi = 0;
L_8b68a6: /* 8b68a6: cmp esi, dword ptr [edx + 0x68] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x68u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b68a9: jge 0x8b68c3 */
  if ((sf == of)) goto L_8b68c3;
L_8b68ab: /* 8b68ab: mov ecx, dword ptr [edx + 0x64] */
  ecx = R32((uint32_t)(edx + 0x64u));
/* 8b68ae: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 8b68b1: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* 8b68b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b68b5: mov ecx, ebx */
  ecx = ebx;
/* 8b68b7: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x8b68bdu); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 8b68bd: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b68c0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b68c1: jmp 0x8b68a6 */
  goto L_8b68a6;
L_8b68c3: /* 8b68c3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8b68c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b68c6: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 8b68cc: call dword ptr [0xcfa55c] */
  esp -= 4; W32(esp, 0x8b68d2u); SPILL(); f_4e34c2(); if (g_unwind) return; /* Core!??0FSphere@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 8b68d2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b68d4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b68d7: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b68da: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8b68dc: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8b68df: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8b68e2: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8b68e5: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8b68e8: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8b68eb: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 8b68ee: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8b68f1: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8b68f5: call 0x6c4f2a */
  esp -= 4; W32(esp, 0x8b68fau); SPILL(); f_6c4f2a(); if (g_unwind) return; RELOAD();
L_8b68fa: /* 8b68fa: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b68fd: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 8b6903: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6904: lea edx, [esi + 0x64] */
  edx = (uint32_t)(esi + 0x64u);
/* 8b6907: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b6908: lea ecx, [esi + 0x108] */
  ecx = (uint32_t)(esi + 0x108u);
/* 8b690e: call 0x6c7edc */
  esp -= 4; W32(esp, 0x8b6913u); SPILL(); f_6c7edc(); if (g_unwind) return; RELOAD();
/* 8b6913: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 8b6918: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b691b: jne 0x8b692c */
  if (!zf) goto L_8b692c;
L_8b691d: /* 8b691d: mov edx, dword ptr [esi + 0x130] */
  edx = R32((uint32_t)(esi + 0x130u));
/* 8b6923: lea ecx, [esi + 0x130] */
  ecx = (uint32_t)(esi + 0x130u);
/* 8b6929: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8b692cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8b692c: /* 8b692c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b692f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6931: jne 0x8b693f */
  if (!zf) goto L_8b693f;
L_8b6933: /* 8b6933: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 8b6938: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8b693a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8b693c: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8b693fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8b693f: /* 8b693f: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 8b6945: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8b6949: call 0x6c9eda */
  esp -= 4; W32(esp, 0x8b694eu); SPILL(); f_6c9eda(); if (g_unwind) return; RELOAD();
/* 8b694e: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8b6951: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6952: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b6954: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8b6957: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8b695b: call 0x6c7991 */
  esp -= 4; W32(esp, 0x8b6960u); SPILL(); f_6c7991(); if (g_unwind) return; RELOAD();
/* 8b6960: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8b6963: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8b6967: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8b696du); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8b696d: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8b6973: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b6977: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8b697cu); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8b697c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b697f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b6980: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b6981: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b6988: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b6989: mov esp, ebp */
  esp = ebp;
/* 8b698b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b698c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8b650d(void) {
  LOAD_REGS();
  goto L_8b650d;
L_8b5fac: /* 8b5fac: mov ecx, eax */
  ecx = eax;
/* 8b5fae: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8b5fb1: cmp ecx, dword ptr [edi + 0x140] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x140u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b5fb7: jge 0x8b65c3 */
  if ((sf == of)) goto L_8b65c3;
L_8b5fbd: /* 8b5fbd: mov edx, dword ptr [edi + 0x13c] */
  edx = R32((uint32_t)(edi + 0x13cu));
/* 8b5fc3: mov ebx, ecx */
  ebx = ecx;
/* 8b5fc5: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 8b5fc8: imul ebx, ebx, 0x104 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x104u);
  ebx = (uint32_t)r;
  }
/* 8b5fce: mov eax, dword ptr [ebx + edx + 0xf0] */
  eax = R32((uint32_t)(ebx + edx + 0xf0u));
/* 8b5fd5: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8b5fd7: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8b5fda: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 8b5fdd: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 8b5fe3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8b5fe6: lea esi, [ebx + 0xc] */
  esi = (uint32_t)(ebx + 0xcu);
/* 8b5fe9: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 8b5fec: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 8b5fef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b5ff0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b5ff1: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8b5ff4: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 8b5ff7: call 0x6c285b */
  esp -= 4; W32(esp, 0x8b5ffcu); SPILL(); f_6c285b(); if (g_unwind) return; RELOAD();
/* 8b5ffc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b5fff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6001: jne 0x8b65b4 */
  if (!zf) goto L_8b65b4;
L_8b6007: /* 8b6007: lea eax, [ebx + 0x18] */
  eax = (uint32_t)(ebx + 0x18u);
/* 8b600a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b600b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b600c: call 0x6c285b */
  esp -= 4; W32(esp, 0x8b6011u); SPILL(); f_6c285b(); if (g_unwind) return; RELOAD();
/* 8b6011: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b6014: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6016: jne 0x8b65b4 */
  if (!zf) goto L_8b65b4;
L_8b601c: /* 8b601c: lea eax, [ebx + 0x18] */
  eax = (uint32_t)(ebx + 0x18u);
/* 8b601f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6020: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b6021: call 0x6c285b */
  esp -= 4; W32(esp, 0x8b6026u); SPILL(); f_6c285b(); if (g_unwind) return; RELOAD();
/* 8b6026: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b6029: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b602b: jne 0x8b65b4 */
  if (!zf) goto L_8b65b4;
L_8b6031: /* 8b6031: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b6034: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 8b603a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8b603d: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8b6040: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x8b6046u); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 8b6046: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6048: jne 0x8b65b4 */
  if (!zf) goto L_8b65b4;
L_8b604e: /* 8b604e: mov esi, dword ptr [edi + 0x140] */
  esi = R32((uint32_t)(edi + 0x140u));
/* 8b6054: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6055: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6056: mov ecx, edi */
  ecx = edi;
/* 8b6058: call dword ptr [0xcfa884] */
  esp -= 4; W32(esp, 0x8b605eu); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* 8b605e: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 8b6064: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8b6066: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8b6068: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6069: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b606c: push 0xaea1c0 */
  { uint32_t v = 0xaea1c0u; esp -= 4; W32(esp, v); }
/* 8b6071: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b6072: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6073: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6074: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8b6077u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b6077: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b607a: mov dword ptr [ebp - 0x24], 3 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3u);
/* 8b6081: mov dword ptr [ebp - 0x2c], 0xc */
  W32((uint32_t)(ebp + 0xffffffd4u), 0xcu);
/* 8b6088: lea esi, [ebp - 0xc8] */
  esi = (uint32_t)(ebp + 0xffffff38u);
/* 8b608e: mov edi, edi */
  edi = edi;
L_8b6090: /* 8b6090: dec dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 8b6093: js 0x8b60a2 */
  if (sf) goto L_8b60a2;
L_8b6095: /* 8b6095: mov ecx, esi */
  ecx = esi;
/* 8b6097: call dword ptr [0xcfa1e0] */
  esp -= 4; W32(esp, 0x8b609du); SPILL(); f_4e35b2(); if (g_unwind) return; /* Core!??0FVector@@QAE@XZ */ RELOAD();
/* 8b609d: add esi, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b60a0: jmp 0x8b6090 */
  goto L_8b6090;
L_8b60a2: /* 8b60a2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b60a5: xor esi, esi */
  esi = 0;
/* 8b60a7: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b60a9: je 0x8b60fe */
  if (zf) goto L_8b60fe;
L_8b60ab: /* 8b60ab: xor eax, eax */
  eax = 0;
/* 8b60ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b60b0: /* 8b60b0: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b60b3: jge 0x8b6453 */
  if ((sf == of)) goto L_8b6453;
L_8b60b9: /* 8b60b9: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8b60bc: lea edx, [ebp + ecx*4 - 0xc8] */
  edx = (uint32_t)(ebp + ecx*4 + 0xffffff38u);
/* 8b60c3: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* 8b60cd: mov ecx, dword ptr [ebp - 0x94] */
  ecx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 8b60d3: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8b60d5: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* 8b60df: mov ecx, dword ptr [ebp - 0x90] */
  ecx = R32((uint32_t)(ebp + 0xffffff70u));
/* 8b60e5: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8b60e8: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* 8b60f2: mov ecx, dword ptr [ebp - 0x8c] */
  ecx = R32((uint32_t)(ebp + 0xffffff74u));
/* 8b60f8: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8b60fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b60fc: jmp 0x8b60b0 */
  goto L_8b60b0;
L_8b60fe: /* 8b60fe: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8b6101: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b6103: je 0x8b6197 */
  if (zf) goto L_8b6197;
L_8b6109: /* 8b6109: mov eax, dword ptr [ebx + 0xf4] */
  eax = R32((uint32_t)(ebx + 0xf4u));
/* 8b610f: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b6112: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 8b6115: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b6117: mov dword ptr [ebp - 0xc8], edx */
  W32((uint32_t)(ebp + 0xffffff38u), edx);
/* 8b611d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8b6120: mov dword ptr [ebp - 0xc4], edx */
  W32((uint32_t)(ebp + 0xffffff3cu), edx);
/* 8b6126: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8b6129: mov dword ptr [ebp - 0xc0], eax */
  W32((uint32_t)(ebp + 0xffffff40u), eax);
/* 8b612f: mov eax, dword ptr [ebx + 0xfc] */
  eax = R32((uint32_t)(ebx + 0xfcu));
/* 8b6135: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b6138: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 8b613b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b613d: mov dword ptr [ebp - 0xbc], edx */
  W32((uint32_t)(ebp + 0xffffff44u), edx);
/* 8b6143: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8b6146: mov dword ptr [ebp - 0xb8], edx */
  W32((uint32_t)(ebp + 0xffffff48u), edx);
/* 8b614c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8b614f: mov dword ptr [ebp - 0xb4], eax */
  W32((uint32_t)(ebp + 0xffffff4cu), eax);
/* 8b6155: mov eax, dword ptr [ebx + 0x100] */
  eax = R32((uint32_t)(ebx + 0x100u));
/* 8b615b: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b615e: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 8b6161: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8b6163: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 8b6169: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8b616c: mov dword ptr [ebp - 0xac], edx */
  W32((uint32_t)(ebp + 0xffffff54u), edx);
/* 8b6172: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8b6175: mov dword ptr [ebp - 0xa8], eax */
  W32((uint32_t)(ebp + 0xffffff58u), eax);
/* 8b617b: mov eax, 1 */
  eax = 0x1u;
/* 8b6180: mov dword ptr [ebx + 0xf4], eax */
  W32((uint32_t)(ebx + 0xf4u), eax);
/* 8b6186: mov dword ptr [ebx + 0xfc], esi */
  W32((uint32_t)(ebx + 0xfcu), esi);
/* 8b618c: mov dword ptr [ebx + 0x100], eax */
  W32((uint32_t)(ebx + 0x100u), eax);
/* 8b6192: jmp 0x8b6453 */
  goto L_8b6453;
L_8b6197: /* 8b6197: xor eax, eax */
  eax = 0;
/* 8b6199: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b61a0: /* 8b61a0: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b61a3: jge 0x8b61d8 */
  if ((sf == of)) goto L_8b61d8;
L_8b61a5: /* 8b61a5: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8b61a8: lea edx, [ebp + ecx*4 - 0xc8] */
  edx = (uint32_t)(ebp + ecx*4 + 0xffffff38u);
/* 8b61af: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 8b61b6: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 8b61b9: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8b61bb: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 8b61c2: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8b61c5: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8b61c8: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 8b61cf: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8b61d2: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8b61d5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b61d6: jmp 0x8b61a0 */
  goto L_8b61a0;
L_8b61d8: /* 8b61d8: mov eax, dword ptr [ebx + 0xf4] */
  eax = R32((uint32_t)(ebx + 0xf4u));
/* 8b61de: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
L_8b61e1: /* 8b61e1: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b61e3: jle 0x8b61ec */
  if ((zf || sf != of)) goto L_8b61ec;
L_8b61e5: /* 8b61e5: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 8b61e8: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8b61ea: jmp 0x8b61e1 */
  goto L_8b61e1;
L_8b61ec: /* 8b61ec: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 8b61ef: nop  */
L_8b61f0: /* 8b61f0: cmp dword ptr [ebp - 0x28], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b61f4: jge 0x8b6451 */
  if ((sf == of)) goto L_8b6451;
L_8b61fa: /* 8b61fa: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8b61fd: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b6203u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b6203: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8b6207: xor esi, esi */
  esi = 0;
/* 8b6209: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b6210: /* 8b6210: cmp esi, dword ptr [edi + 0x140] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x140u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6216: jge 0x8b6288 */
  if ((sf == of)) goto L_8b6288;
L_8b6218: /* 8b6218: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b621b: mov eax, dword ptr [edx + 0x13c] */
  eax = R32((uint32_t)(edx + 0x13cu));
/* 8b6221: mov edi, esi */
  edi = esi;
/* 8b6223: imul edi, edi, 0x104 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x104u);
  edi = (uint32_t)r;
  }
/* 8b6229: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b622b: xor ebx, ebx */
  ebx = 0;
/* 8b622d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b6230: /* 8b6230: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6233: jge 0x8b627f */
  if ((sf == of)) goto L_8b627f;
L_8b6235: /* 8b6235: lea eax, [ebx + ebx*2] */
  eax = (uint32_t)(ebx + ebx*2);
/* 8b6238: lea ecx, [edi + eax*4] */
  ecx = (uint32_t)(edi + eax*4);
/* 8b623b: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8b623e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b6241: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b6244: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6245: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b6248: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6249: call 0x6c285b */
  esp -= 4; W32(esp, 0x8b624eu); SPILL(); f_6c285b(); if (g_unwind) return; RELOAD();
/* 8b624e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b6251: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6253: je 0x8b6285 */
  if (zf) goto L_8b6285;
L_8b6255: /* 8b6255: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b6258: xor edx, edx */
  edx = 0;
/* 8b625a: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b625c: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8b625f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8b6261: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b6263: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8b6266: mov edi, edx */
  edi = edx;
/* 8b6268: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b626eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b626e: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8b6271: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8b6274: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 8b6277: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 8b6279: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8b627c: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
L_8b627f: /* 8b627f: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b6282: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b6283: jmp 0x8b6210 */
  goto L_8b6210;
L_8b6285: /* 8b6285: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b6286: jmp 0x8b6230 */
  goto L_8b6230;
L_8b6288: /* 8b6288: mov eax, 1 */
  eax = 0x1u;
/* 8b628d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b6290: /* 8b6290: xor esi, esi */
  esi = 0;
/* 8b6292: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b6294: je 0x8b6389 */
  if (zf) goto L_8b6389;
L_8b629a: /* 8b629a: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
L_8b629d: /* 8b629d: cmp esi, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b62a0: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 8b62a3: jge 0x8b6381 */
  if ((sf == of)) goto L_8b6381;
L_8b62a9: /* 8b62a9: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8b62ac: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 8b62af: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8b62b2: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8b62b5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b62b7: je 0x8b637b */
  if (zf) goto L_8b637b;
L_8b62bd: /* 8b62bd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b62bf: mov eax, dword ptr [edi + 0x13c] */
  eax = R32((uint32_t)(edi + 0x13cu));
/* 8b62c5: imul edx, edx, 0x104 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x104u);
  edx = (uint32_t)r;
  }
/* 8b62cb: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8b62cd: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 8b62d0: xor eax, eax */
  eax = 0;
L_8b62d2: /* 8b62d2: cmp eax, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b62d5: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 8b62d8: jge 0x8b637b */
  if ((sf == of)) goto L_8b637b;
L_8b62de: /* 8b62de: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8b62e1: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8b62e4: lea ecx, [edi + ecx*4] */
  ecx = (uint32_t)(edi + ecx*4);
/* 8b62e7: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* 8b62ea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b62ec: jne 0x8b6372 */
  if (!zf) goto L_8b6372;
L_8b62f2: /* 8b62f2: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 8b62f4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b62f7: imul ebx, ebx, 0x104 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x104u);
  ebx = (uint32_t)r;
  }
/* 8b62fd: mov edi, dword ptr [ecx + 0x13c] */
  edi = R32((uint32_t)(ecx + 0x13cu));
/* 8b6303: mov ecx, dword ptr [ebx + edi + 0xf4] */
  ecx = R32((uint32_t)(ebx + edi + 0xf4u));
/* 8b630a: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8b630c: test dword ptr [edx + 0xf4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0xf4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6312: je 0x8b6372 */
  if (zf) goto L_8b6372;
L_8b6314: /* 8b6314: xor edi, edi */
  edi = 0;
/* 8b6316: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b6318: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 8b631b: je 0x8b6361 */
  if (zf) goto L_8b6361;
L_8b631d: /* 8b631d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b6320: /* 8b6320: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6323: jge 0x8b635b */
  if ((sf == of)) goto L_8b635b;
L_8b6325: /* 8b6325: xor esi, esi */
  esi = 0;
L_8b6327: /* 8b6327: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b632a: jge 0x8b634f */
  if ((sf == of)) goto L_8b634f;
L_8b632c: /* 8b632c: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 8b632f: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 8b6332: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b6335: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8b6338: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6339: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 8b633c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b633d: call 0x6c285b */
  esp -= 4; W32(esp, 0x8b6342u); SPILL(); f_6c285b(); if (g_unwind) return; RELOAD();
/* 8b6342: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b6345: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6347: je 0x8b634c */
  if (zf) goto L_8b634c;
L_8b6349: /* 8b6349: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
L_8b634c: /* 8b634c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b634d: jmp 0x8b6327 */
  goto L_8b6327;
L_8b634f: /* 8b634f: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8b6352: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8b6355: mov eax, dword ptr [ebp - 0x74] */
  eax = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8b6358: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8b6359: jmp 0x8b6320 */
  goto L_8b6320;
L_8b635b: /* 8b635b: cmp dword ptr [ebp - 0x40], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b635f: jle 0x8b6372 */
  if ((zf || sf != of)) goto L_8b6372;
L_8b6361: /* 8b6361: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8b6364: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8b6367: mov dword ptr [edi + ecx*4 + 8], 1 */
  W32((uint32_t)(edi + ecx*4 + 0x8u), 0x1u);
/* 8b636f: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
L_8b6372: /* 8b6372: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b6375: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b6376: jmp 0x8b62d2 */
  goto L_8b62d2;
L_8b637b: /* 8b637b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b637c: jmp 0x8b629d */
  goto L_8b629d;
L_8b6381: /* 8b6381: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8b6384: jmp 0x8b6290 */
  goto L_8b6290;
L_8b6389: /* 8b6389: mov esi, dword ptr [ebp - 0x88] */
  esi = R32((uint32_t)(ebp + 0xffffff78u));
/* 8b638f: xor ebx, ebx */
  ebx = 0;
L_8b6391: /* 8b6391: cmp ebx, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6394: jge 0x8b6436 */
  if ((sf == of)) goto L_8b6436;
L_8b639a: /* 8b639a: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8b639d: lea edx, [ebx + ebx*2] */
  edx = (uint32_t)(ebx + ebx*2);
/* 8b63a0: mov ecx, dword ptr [eax + edx*4 + 8] */
  ecx = R32((uint32_t)(eax + edx*4 + 0x8u));
/* 8b63a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b63a6: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8b63a9: je 0x8b6430 */
  if (zf) goto L_8b6430;
L_8b63af: /* 8b63af: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b63b1: cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b63b4: je 0x8b63ff */
  if (zf) goto L_8b63ff;
L_8b63b6: /* 8b63b6: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8b63b9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8b63ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b63bc: jl 0x8b63ff */
  if ((sf != of)) goto L_8b63ff;
L_8b63be: /* 8b63be: cmp eax, dword ptr [edi + 0x150] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x150u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b63c4: jge 0x8b63ff */
  if ((sf == of)) goto L_8b63ff;
L_8b63c6: /* 8b63c6: lea ecx, [edx + edx*2] */
  ecx = (uint32_t)(edx + edx*2);
/* 8b63c9: fld dword ptr [esi + ecx*4 + 8] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0x8u)); FPUSH(v); }
/* 8b63cd: lea eax, [esi + ecx*4] */
  eax = (uint32_t)(esi + ecx*4);
/* 8b63d0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b63d3: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8b63d6: fmul dword ptr [esi + ecx*4 + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + ecx*4 + 0x8u)));
/* 8b63da: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 8b63dd: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8b63e0: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8b63e3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b63e5: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8b63e7: mov eax, dword ptr [edi + 0x14c] */
  eax = R32((uint32_t)(edi + 0x14cu));
/* 8b63ed: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8b63ef: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8b63f2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b63f4: fcomp dword ptr [eax + ecx*4 - 4] */
  fpu_com(ST0, F32((uint32_t)(eax + ecx*4 + 0xfffffffcu)));
  FPOP();
/* 8b63f8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b63fa: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b63fd: jnp 0x8b6430 */
  if (!pf) goto L_8b6430;
L_8b63ff: /* 8b63ff: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8b6402: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 8b6405: fld dword ptr [esi + edx*4] */
  { double v = F32((uint32_t)(esi + edx*4)); FPUSH(v); }
/* 8b6408: lea ecx, [esi + edx*4] */
  ecx = (uint32_t)(esi + edx*4);
/* 8b640b: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8b640e: fadd dword ptr [ebp + eax*4 - 0xc8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + eax*4 + 0xffffff38u)));
/* 8b6415: lea eax, [ebp + eax*4 - 0xc8] */
  eax = (uint32_t)(ebp + eax*4 + 0xffffff38u);
/* 8b641c: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8b641e: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8b6421: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8b6424: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8b6427: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8b642a: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8b642d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
L_8b6430: /* 8b6430: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b6431: jmp 0x8b6391 */
  goto L_8b6391;
L_8b6436: /* 8b6436: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8b6439: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8b643d: call 0x6c3b8e */
  esp -= 4; W32(esp, 0x8b6442u); SPILL(); f_6c3b8e(); if (g_unwind) return; RELOAD();
/* 8b6442: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8b6445: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b6448: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b6449: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8b644c: jmp 0x8b61f0 */
  goto L_8b61f0;
L_8b6451: /* 8b6451: xor esi, esi */
  esi = 0;
L_8b6453: /* 8b6453: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6456: jge 0x8b646b */
  if ((sf == of)) goto L_8b646b;
L_8b6458: /* 8b6458: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 8b645b: lea ecx, [ebp + ecx*4 - 0xc8] */
  ecx = (uint32_t)(ebp + ecx*4 + 0xffffff38u);
/* 8b6462: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8b6468u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8b6468: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b6469: jmp 0x8b6453 */
  goto L_8b6453;
L_8b646b: /* 8b646b: xor edi, edi */
  edi = 0;
/* 8b646d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b6470: /* 8b6470: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6473: jge 0x8b64de */
  if ((sf == of)) goto L_8b64de;
L_8b6475: /* 8b6475: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b6478: mov edx, dword ptr [ebx + 0xf8] */
  edx = R32((uint32_t)(ebx + 0xf8u));
/* 8b647e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b647f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b6480: mov ecx, edi */
  ecx = edi;
/* 8b6482: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8b6485: lea edx, [ecx + ebx + 0x24] */
  edx = (uint32_t)(ecx + ebx + 0x24u);
/* 8b6489: mov ecx, dword ptr [ebx + edi*4 + 0xe4] */
  ecx = R32((uint32_t)(ebx + edi*4 + 0xe4u));
/* 8b6490: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b6491: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6492: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 8b6495: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8b6498: lea edx, [ebp + eax - 0xc8] */
  edx = (uint32_t)(ebp + eax + 0xffffff38u);
/* 8b649f: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 8b64a1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b64a4: mov ecx, esp */
  ecx = esp;
/* 8b64a6: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 8b64a8: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 8b64ab: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8b64ae: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 8b64b1: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8b64b4: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b64b6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b64b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b64bb: mov ecx, esp */
  ecx = esp;
/* 8b64bd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8b64bf: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8b64c2: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8b64c5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8b64c8: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8b64cb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b64ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b64cf: call 0x6c98fe */
  esp -= 4; W32(esp, 0x8b64d4u); SPILL(); f_6c98fe(); if (g_unwind) return; RELOAD();
/* 8b64d4: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b64d7: mov dword ptr [ebp + edi*4 - 0x5c], eax */
  W32((uint32_t)(ebp + edi*4 + 0xffffffa4u), eax);
/* 8b64db: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8b64dc: jmp 0x8b6470 */
  goto L_8b6470;
L_8b64de: /* 8b64de: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8b64e1: cmp edx, dword ptr [ebp - 0x58] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b64e4: je 0x8b65b7 */
  if (zf) goto L_8b65b7;
L_8b64ea: /* 8b64ea: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8b64ed: cmp dword ptr [ebp - 0x58], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b64f0: je 0x8b65b7 */
  if (zf) goto L_8b65b7;
L_8b64f6: /* 8b64f6: mov ecx, eax */
  ecx = eax;
/* 8b64f8: mov eax, edx */
  eax = edx;
/* 8b64fa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b64fc: je 0x8b65b7 */
  if (zf) goto L_8b65b7;
L_8b6502: /* 8b6502: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b6505: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6507: jne 0x8b6547 */
  if (!zf) goto L_8b6547;
L_8b6509: /* 8b6509: xor esi, esi */
  esi = 0;
/* 8b650b: jmp 0x8b6510 */
  goto L_8b6510;
L_8b650d: /* 8b650d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b6510: /* 8b6510: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6513: jge 0x8b653c */
  if ((sf == of)) goto L_8b653c;
L_8b6515: /* 8b6515: mov ecx, dword ptr [ebx + 0xf0] */
  ecx = R32((uint32_t)(ebx + 0xf0u));
/* 8b651b: xor edx, edx */
  edx = 0;
/* 8b651d: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8b6520: mov dx, word ptr [ebp + esi*4 - 0x5c] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + esi*4 + 0xffffffa4u))) & 0xffffu);
/* 8b6525: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 8b6528: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6529: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8b652c: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8b652f: lea ecx, [ecx + edx + 4] */
  ecx = (uint32_t)(ecx + edx + 0x4u);
/* 8b6533: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8b6539u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8b6539: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b653a: jmp 0x8b6510 */
  goto L_8b6510;
L_8b653c: /* 8b653c: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 8b653f: inc word ptr [eax + 0xe] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0xeu)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(eax + 0xeu), r);
  }
/* 8b6543: inc word ptr [eax + 0x10] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x10u)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(eax + 0x10u), r);
  }
L_8b6547: /* 8b6547: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8b654a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8b654d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b654f: je 0x8b65b7 */
  if (zf) goto L_8b65b7;
L_8b6551: /* 8b6551: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b6554: mov edx, dword ptr [ebp - 0x88] */
  edx = R32((uint32_t)(ebp + 0xffffff78u));
/* 8b655a: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8b655d: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8b6560: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8b6566u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8b6566: fst dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 8b6569: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8b656f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b6571: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6574: jne 0x8b65b7 */
  if (!zf) goto L_8b65b7;
L_8b6576: /* 8b6576: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8b6578: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8b657a: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 8b6580: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b6586u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b6586: mov ecx, dword ptr [ebp - 0xd4] */
  ecx = R32((uint32_t)(ebp + 0xffffff2cu));
/* 8b658c: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8b658f: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8b6592: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6594: je 0x8b65b7 */
  if (zf) goto L_8b65b7;
L_8b6596: /* 8b6596: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8b6599: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8b659c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b659d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b659e: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8b65a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b65a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b65a3: call 0x6c3337 */
  esp -= 4; W32(esp, 0x8b65a8u); SPILL(); f_6c3337(); if (g_unwind) return; RELOAD();
/* 8b65a8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b65ab: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b65ae: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b65af: jmp 0x8b5fac */
  goto L_8b5fac;
L_8b65b4: /* 8b65b4: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_8b65b7: /* 8b65b7: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b65ba: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b65bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b65be: jmp 0x8b5fac */
  goto L_8b5fac;
L_8b65c3: /* 8b65c3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b65c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b65c8: jne 0x8b68fa */
  if (!zf) goto L_8b68fa;
L_8b65ce: /* 8b65ce: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b65d1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b65d3: je 0x8b65f5 */
  if (zf) goto L_8b65f5;
L_8b65d5: /* 8b65d5: mov ecx, edi */
  ecx = edi;
/* 8b65d7: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8b65ddu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8b65dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b65de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b65df: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8b65e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8b65e6: push 0xaea1f8 */
  { uint32_t v = 0xaea1f8u; esp -= 4; W32(esp, v); }
/* 8b65eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b65ec: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8b65f2u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8b65f2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b65f5: /* 8b65f5: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 8b65f8: mov ecx, dword ptr [edi + 0x94] */
  ecx = R32((uint32_t)(edi + 0x94u));
/* 8b65fe: mov eax, dword ptr [edi + 0xb0] */
  eax = R32((uint32_t)(edi + 0xb0u));
/* 8b6604: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8b6605: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8b6606: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b6607: mov dword ptr [edi + 0xb0], eax */
  W32((uint32_t)(edi + 0xb0u), eax);
/* 8b660d: mov dword ptr [edi + 0x78], edx */
  W32((uint32_t)(edi + 0x78u), edx);
/* 8b6610: mov dword ptr [edi + 0x94], ecx */
  W32((uint32_t)(edi + 0x94u), ecx);
/* 8b6616: xor eax, eax */
  eax = 0;
L_8b6618: /* 8b6618: cmp eax, dword ptr [edi + 0xb8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xb8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b661e: jge 0x8b6634 */
  if ((sf == of)) goto L_8b6634;
L_8b6620: /* 8b6620: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 8b6626: mov edx, eax */
  edx = eax;
/* 8b6628: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8b662b: lea ecx, [edx + ecx + 0x1c] */
  ecx = (uint32_t)(edx + ecx + 0x1cu);
/* 8b662f: inc dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx), r);
  }
/* 8b6631: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b6632: jmp 0x8b6618 */
  goto L_8b6618;
L_8b6634: /* 8b6634: xor ebx, ebx */
  ebx = 0;
/* 8b6636: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8b6639: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b6640: /* 8b6640: cmp ebx, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b6643: jge 0x8b6792 */
  if ((sf == of)) goto L_8b6792;
L_8b6649: /* 8b6649: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b664c: mov esi, dword ptr [ecx + 0x54] */
  esi = R32((uint32_t)(ecx + 0x54u));
/* 8b664f: mov edx, dword ptr [ecx + 0x58] */
  edx = R32((uint32_t)(ecx + 0x58u));
/* 8b6652: lea edi, [ebx + ebx*4] */
  edi = (uint32_t)(ebx + ebx*4);
/* 8b6655: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b6657: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8b665a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b665c: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b665e: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 8b6661: call dword ptr [0xcfa884] */
  esp -= 4; W32(esp, 0x8b6667u); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* 8b6667: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 8b666d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8b666f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8b6671: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6672: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8b6675: push 0xaea23c */
  { uint32_t v = 0xaea23cu; esp -= 4; W32(esp, v); }
/* 8b667a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b667b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b667c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b667d: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8b6680u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b6680: imul ebx, ebx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x1cu);
  ebx = (uint32_t)r;
  }
/* 8b6683: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8b6686: mov eax, dword ptr [ecx + ebx + 8] */
  eax = R32((uint32_t)(ecx + ebx + 0x8u));
/* 8b668a: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b668c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b668f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6691: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* 8b6694: je 0x8b6784 */
  if (zf) goto L_8b6784;
L_8b669a: /* 8b669a: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b669d: cmp dword ptr [ebx + 0x148], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x148u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b66a4: jne 0x8b66cc */
  if (!zf) goto L_8b66cc;
L_8b66a6: /* 8b66a6: mov eax, ebx */
  eax = ebx;
/* 8b66a8: mov edx, dword ptr [eax + 0x54] */
  edx = R32((uint32_t)(eax + 0x54u));
/* 8b66ab: mov dword ptr [edx + edi + 4], 1 */
  W32((uint32_t)(edx + edi + 0x4u), 0x1u);
/* 8b66b3: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8b66b6: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8b66b9: mov ebx, dword ptr [eax + 0x54] */
  ebx = R32((uint32_t)(eax + 0x54u));
/* 8b66bc: mov eax, dword ptr [ecx + edx] */
  eax = R32((uint32_t)(ecx + edx));
/* 8b66bf: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b66c1: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8b66c3: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0x8b66c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b66c6: mov word ptr [ebx + 0x10], ax */
  W16((uint32_t)(ebx + 0x10u), (eax & 0xffffu));
/* 8b66ca: jmp 0x8b66f1 */
  goto L_8b66f1;
L_8b66cc: /* 8b66cc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8b66ce: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8b66d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b66d1: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8b66d4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8b66d7: mov ecx, dword ptr [ecx + eax + 8] */
  ecx = R32((uint32_t)(ecx + eax + 0x8u));
/* 8b66db: mov eax, 0x55555556 */
  eax = 0x55555556u;
/* 8b66e0: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8b66e2: mov ecx, dword ptr [ebx + 0x54] */
  ecx = R32((uint32_t)(ebx + 0x54u));
/* 8b66e5: mov eax, edx */
  eax = edx;
/* 8b66e7: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8b66ea: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8b66ec: mov word ptr [ecx + edi + 0x10], dx */
  W16((uint32_t)(ecx + edi + 0x10u), (edx & 0xffffu));
L_8b66f1: /* 8b66f1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b66f4: mov eax, dword ptr [ecx + 0xc8] */
  eax = R32((uint32_t)(ecx + 0xc8u));
/* 8b66fa: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 8b66fd: mov word ptr [esi + 8], ax */
  W16((uint32_t)(esi + 0x8u), (eax & 0xffffu));
/* 8b6701: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8b6704: mov eax, dword ptr [ebx + edx + 8] */
  eax = R32((uint32_t)(ebx + edx + 0x8u));
/* 8b6708: lea edi, [ecx + 0xc4] */
  edi = (uint32_t)(ecx + 0xc4u);
/* 8b670e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b670f: mov ecx, edi */
  ecx = edi;
/* 8b6711: call dword ptr [0xcfa64c] */
  esp -= 4; W32(esp, 0x8b6717u); SPILL(); f_4e437c(); if (g_unwind) return; /* Core!?Add@?$TArray@G@@QAEHH@Z */ RELOAD();
/* 8b6717: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6718: mov ecx, edi */
  ecx = edi;
/* 8b671a: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8b6720u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8b6720: mov edi, eax */
  edi = eax;
/* 8b6722: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8b6725: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b6727: lea ecx, [ebx + eax + 4] */
  ecx = (uint32_t)(ebx + eax + 0x4u);
/* 8b672b: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8b6731u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8b6731: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8b6734: mov word ptr [esi + 0xa], cx */
  W16((uint32_t)(esi + 0xau), (ecx & 0xffffu));
/* 8b6738: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8b673b: mov word ptr [esi + 0xc], dx */
  W16((uint32_t)(esi + 0xcu), (edx & 0xffffu));
/* 8b673f: xor ebx, ebx */
  ebx = 0;
L_8b6741: /* 8b6741: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8b6744: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8b6747: cmp ebx, dword ptr [edx + ecx + 8] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b674b: jge 0x8b6784 */
  if ((sf == of)) goto L_8b6784;
L_8b674d: /* 8b674d: mov cx, word ptr [esi + 0xa] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0xau))) & 0xffffu);
/* 8b6751: xor edx, edx */
  edx = 0;
/* 8b6753: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8b6756: cmp dx, cx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8b6759: ja 0x8b675d */
  if ((!cf && !zf)) goto L_8b675d;
L_8b675b: /* 8b675b: mov ecx, edx */
  ecx = edx;
L_8b675d: /* 8b675d: mov word ptr [esi + 0xa], cx */
  W16((uint32_t)(esi + 0xau), (ecx & 0xffffu));
/* 8b6761: mov cx, word ptr [esi + 0xc] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0xcu))) & 0xffffu);
/* 8b6765: xor edx, edx */
  edx = 0;
/* 8b6767: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8b676a: cmp dx, cx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 8b676d: jb 0x8b6771 */
  if (cf) goto L_8b6771;
L_8b676f: /* 8b676f: mov ecx, edx */
  ecx = edx;
L_8b6771: /* 8b6771: mov word ptr [esi + 0xc], cx */
  W16((uint32_t)(esi + 0xcu), (ecx & 0xffffu));
/* 8b6775: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8b6778: mov word ptr [edi], cx */
  W16((uint32_t)(edi), (ecx & 0xffffu));
/* 8b677b: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b677e: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b6781: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b6782: jmp 0x8b6741 */
  goto L_8b6741;
L_8b6784: /* 8b6784: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b6787: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b6788: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8b678b: mov ebx, eax */
  ebx = eax;
/* 8b678d: jmp 0x8b6640 */
  goto L_8b6640;
L_8b6792: /* 8b6792: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b6795: mov eax, dword ptr [esi + 0xd8] */
  eax = R32((uint32_t)(esi + 0xd8u));
/* 8b679b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b679c: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8b679f: mov dword ptr [esi + 0xd8], eax */
  W32((uint32_t)(esi + 0xd8u), eax);
/* 8b67a5: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b67abu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b67ab: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8b67af: xor edi, edi */
  edi = 0;
L_8b67b1: /* 8b67b1: mov ecx, dword ptr [esi + 0xc8] */
  ecx = R32((uint32_t)(esi + 0xc8u));
/* 8b67b7: mov eax, 0x55555556 */
  eax = 0x55555556u;
/* 8b67bc: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8b67be: mov eax, edx */
  eax = edx;
/* 8b67c0: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8b67c3: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8b67c5: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b67c7: jge 0x8b6836 */
  if ((sf == of)) goto L_8b6836;
L_8b67c9: /* 8b67c9: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 8b67cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b67cd: lea ecx, [esi + 0xc4] */
  ecx = (uint32_t)(esi + 0xc4u);
/* 8b67d3: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8b67d9u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8b67d9: mov ebx, eax */
  ebx = eax;
/* 8b67db: xor eax, eax */
  eax = 0;
/* 8b67dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b67e0: /* 8b67e0: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b67e3: jge 0x8b6830 */
  if ((sf == of)) goto L_8b6830;
L_8b67e5: /* 8b67e5: movzx edx, word ptr [ebx + eax*2] */
  edx = (uint32_t)(R16((uint32_t)(ebx + eax*2)));
/* 8b67e9: lea esi, [eax + 1] */
  esi = (uint32_t)(eax + 0x1u);
/* 8b67ec: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 8b67f2: mov eax, esi */
  eax = esi;
/* 8b67f4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8b67f5: mov ecx, 3 */
  ecx = 0x3u;
/* 8b67fa: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x8b67fa);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8b67fc: lea eax, [ebp - 0x98] */
  eax = (uint32_t)(ebp + 0xffffff68u);
/* 8b6802: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6803: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8b6806: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6807: mov dword ptr [ebp - 0x90], edi */
  W32((uint32_t)(ebp + 0xffffff70u), edi);
/* 8b680d: mov dword ptr [ebp - 0x8c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff74u), 0xffffffffu);
/* 8b6817: movzx edx, word ptr [ebx + edx*2] */
  edx = (uint32_t)(R16((uint32_t)(ebx + edx*2)));
/* 8b681b: mov dword ptr [ebp - 0x94], edx */
  W32((uint32_t)(ebp + 0xffffff6cu), edx);
/* 8b6821: call 0x6c8c24 */
  esp -= 4; W32(esp, 0x8b6826u); SPILL(); f_6c8c24(); if (g_unwind) return; RELOAD();
/* 8b6826: mov eax, esi */
  eax = esi;
/* 8b6828: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b682b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b682e: jmp 0x8b67e0 */
  goto L_8b67e0;
L_8b6830: /* 8b6830: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8b6831: jmp 0x8b67b1 */
  goto L_8b67b1;
L_8b6836: /* 8b6836: xor ebx, ebx */
  ebx = 0;
L_8b6838: /* 8b6838: cmp ebx, dword ptr [ebp - 0x64] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b683b: jge 0x8b687f */
  if ((sf == of)) goto L_8b687f;
L_8b683d: /* 8b683d: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 8b6840: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b6843: mov esi, ebx */
  esi = ebx;
/* 8b6845: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8b6848: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b684a: xor edx, edx */
  edx = 0;
/* 8b684c: mov dx, word ptr [esi] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 8b684f: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 8b6852: add edi, 0xe0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8b6858: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6859: mov ecx, edi */
  ecx = edi;
/* 8b685b: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 8b685e: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8b6864u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8b6864: xor ecx, ecx */
  ecx = 0;
/* 8b6866: mov cx, word ptr [esi + 4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x4u))) & 0xffffu);
/* 8b686a: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 8b686d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b686e: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 8b6871: mov ecx, edi */
  ecx = edi;
/* 8b6873: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8b6879u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8b6879: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b687c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8b687d: jmp 0x8b6838 */
  goto L_8b6838;
L_8b687f: /* 8b687f: inc dword ptr [esi + 0xf4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xf4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0xf4u), r);
  }
/* 8b6885: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b6887: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 8b688d: call dword ptr [0xcfa260] */
  esp -= 4; W32(esp, 0x8b6893u); SPILL(); f_4e2ffe(); if (g_unwind) return; /* Core!??0FBox@@QAE@H@Z */ RELOAD();
/* 8b6893: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b6896: lea ebx, [edx + 0x28] */
  ebx = (uint32_t)(edx + 0x28u);
/* 8b6899: mov ecx, 7 */
  ecx = 0x7u;
/* 8b689e: mov esi, eax */
  esi = eax;
/* 8b68a0: mov edi, ebx */
  edi = ebx;
/* 8b68a2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8b68a4: xor esi, esi */
  esi = 0;
L_8b68a6: /* 8b68a6: cmp esi, dword ptr [edx + 0x68] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x68u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b68a9: jge 0x8b68c3 */
  if ((sf == of)) goto L_8b68c3;
L_8b68ab: /* 8b68ab: mov ecx, dword ptr [edx + 0x64] */
  ecx = R32((uint32_t)(edx + 0x64u));
/* 8b68ae: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 8b68b1: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* 8b68b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b68b5: mov ecx, ebx */
  ecx = ebx;
/* 8b68b7: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x8b68bdu); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 8b68bd: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b68c0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b68c1: jmp 0x8b68a6 */
  goto L_8b68a6;
L_8b68c3: /* 8b68c3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8b68c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b68c6: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 8b68cc: call dword ptr [0xcfa55c] */
  esp -= 4; W32(esp, 0x8b68d2u); SPILL(); f_4e34c2(); if (g_unwind) return; /* Core!??0FSphere@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 8b68d2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b68d4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b68d7: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b68da: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8b68dc: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8b68df: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8b68e2: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8b68e5: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8b68e8: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8b68eb: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 8b68ee: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8b68f1: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8b68f5: call 0x6c4f2a */
  esp -= 4; W32(esp, 0x8b68fau); SPILL(); f_6c4f2a(); if (g_unwind) return; RELOAD();
L_8b68fa: /* 8b68fa: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b68fd: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 8b6903: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6904: lea edx, [esi + 0x64] */
  edx = (uint32_t)(esi + 0x64u);
/* 8b6907: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b6908: lea ecx, [esi + 0x108] */
  ecx = (uint32_t)(esi + 0x108u);
/* 8b690e: call 0x6c7edc */
  esp -= 4; W32(esp, 0x8b6913u); SPILL(); f_6c7edc(); if (g_unwind) return; RELOAD();
/* 8b6913: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 8b6918: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b691b: jne 0x8b692c */
  if (!zf) goto L_8b692c;
L_8b691d: /* 8b691d: mov edx, dword ptr [esi + 0x130] */
  edx = R32((uint32_t)(esi + 0x130u));
/* 8b6923: lea ecx, [esi + 0x130] */
  ecx = (uint32_t)(esi + 0x130u);
/* 8b6929: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8b692cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8b692c: /* 8b692c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b692f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6931: jne 0x8b693f */
  if (!zf) goto L_8b693f;
L_8b6933: /* 8b6933: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 8b6938: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8b693a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8b693c: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8b693fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8b693f: /* 8b693f: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 8b6945: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8b6949: call 0x6c9eda */
  esp -= 4; W32(esp, 0x8b694eu); SPILL(); f_6c9eda(); if (g_unwind) return; RELOAD();
/* 8b694e: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8b6951: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6952: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b6954: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8b6957: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8b695b: call 0x6c7991 */
  esp -= 4; W32(esp, 0x8b6960u); SPILL(); f_6c7991(); if (g_unwind) return; RELOAD();
/* 8b6960: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8b6963: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8b6967: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8b696du); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8b696d: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8b6973: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b6977: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8b697cu); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8b697c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b697f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b6980: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b6981: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b6988: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b6989: mov esp, ebp */
  esp = ebp;
/* 8b698b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b698c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8b698f(void) {
  LOAD_REGS();
L_8b698f: /* 8b698f: mov ecx, dword ptr [ebp - 0xd8] */
  ecx = R32((uint32_t)(ebp + 0xffffff28u));
/* 8b6995: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b699a: lea edx, [ebp - 0x7c] */
  edx = (uint32_t)(ebp + 0xffffff84u);
/* 8b699d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b699e: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 8b69a1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b69a6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b69a6(); return;
}

void f_8b69a6(void) {
  LOAD_REGS();
L_8b69a6: /* 8b69a6: push 0xa1bb30 */
  { uint32_t v = 0xa1bb30u; esp -= 4; W32(esp, v); }
/* 8b69ab: push 0xaea27c */
  { uint32_t v = 0xaea27cu; esp -= 4; W32(esp, v); }
/* 8b69b0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b69b6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b69b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b69b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b69bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b69bd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b69c2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8b69c2: guest_badaddr(0x8b69c2); return;
}

void f_8b6d50(void) {
  LOAD_REGS();
L_8b6d50: /* 8b6d50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8b6d54: mov eax, dword ptr [eax + 0x88] */
  eax = R32((uint32_t)(eax + 0x88u));
/* 8b6d5a: shr eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8b6d5d: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8b6d60: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b6d80(void) {
  LOAD_REGS();
L_8b6d80: /* 8b6d80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b6d82: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b6d88: push 0x9d6d69 */
  { uint32_t v = 0x9d6d69u; esp -= 4; W32(esp, v); }
/* 8b6d8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6d8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b6d95: sub esp, 0xc4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b6d9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b6d9c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b6d9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b6d9e: mov ebp, ecx */
  ebp = ecx;
/* 8b6da0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b6da1: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 8b6da5: call dword ptr [0xcfa370] */
  esp -= 4; W32(esp, 0x8b6dabu); SPILL(); f_4e205e(); if (g_unwind) return; /* Core!??0FBox@@QAE@XZ */ RELOAD();
/* 8b6dab: mov ebx, dword ptr [esp + 0xe8] */
  ebx = R32((uint32_t)(esp + 0xe8u));
/* 8b6db2: mov eax, dword ptr [ebx + 0x88] */
  eax = R32((uint32_t)(ebx + 0x88u));
/* 8b6db8: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6dbb: je 0x8b6dd9 */
  if (zf) goto L_8b6dd9;
L_8b6dbd: /* 8b6dbd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b6dbe: lea eax, [esp + 0x60] */
  eax = (uint32_t)(esp + 0x60u);
/* 8b6dc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6dc3: mov ecx, ebp */
  ecx = ebp;
/* 8b6dc5: call 0x6c4593 */
  esp -= 4; W32(esp, 0x8b6dcau); SPILL(); f_6c4593(); if (g_unwind) return; RELOAD();
/* 8b6dca: mov ecx, 7 */
  ecx = 0x7u;
/* 8b6dcf: mov esi, eax */
  esi = eax;
/* 8b6dd1: lea edi, [esp + 0x10] */
  edi = (uint32_t)(esp + 0x10u);
/* 8b6dd5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8b6dd7: jmp 0x8b6e4d */
  goto L_8b6e4d;
L_8b6dd9: /* 8b6dd9: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8b6ddb: lea eax, [esp + 0x94] */
  eax = (uint32_t)(esp + 0x94u);
/* 8b6de2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6de3: mov ecx, ebx */
  ecx = ebx;
/* 8b6de5: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0x8b6debu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b6deb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6dec: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 8b6df0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6df1: lea ecx, [ebp + 0x28] */
  ecx = (uint32_t)(ebp + 0x28u);
/* 8b6df4: mov dword ptr [esp + 0xe4], 0 */
  W32((uint32_t)(esp + 0xe4u), 0x0u);
/* 8b6dff: call dword ptr [0xcfa638] */
  esp -= 4; W32(esp, 0x8b6e05u); SPILL(); f_4e2806(); if (g_unwind) return; /* Core!?TransformBy@FBox@@QBE?AV1@ABVFMatrix@@@Z */ RELOAD();
/* 8b6e05: mov esi, eax */
  esi = eax;
/* 8b6e07: mov ecx, 7 */
  ecx = 0x7u;
/* 8b6e0c: lea edi, [esp + 0x10] */
  edi = (uint32_t)(esp + 0x10u);
/* 8b6e10: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8b6e12: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 8b6e19: mov dword ptr [esp + 0xdc], 0xffffffff */
  W32((uint32_t)(esp + 0xdcu), 0xffffffffu);
/* 8b6e24: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8b6e2au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8b6e2a: mov ebp, dword ptr [ebp + 0x104] */
  ebp = R32((uint32_t)(ebp + 0x104u));
/* 8b6e30: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6e32: je 0x8b6e4d */
  if (zf) goto L_8b6e4d;
L_8b6e34: /* 8b6e34: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 8b6e37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b6e38: lea eax, [esp + 0x60] */
  eax = (uint32_t)(esp + 0x60u);
/* 8b6e3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6e3d: mov ecx, ebp */
  ecx = ebp;
/* 8b6e3f: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x8b6e42u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b6e42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6e43: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8b6e47: call dword ptr [0xcfabb4] */
  esp -= 4; W32(esp, 0x8b6e4du); SPILL(); f_4e2ed2(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABV0@@Z */ RELOAD();
L_8b6e4d: /* 8b6e4d: mov eax, dword ptr [ebx + 0x88] */
  eax = R32((uint32_t)(ebx + 0x88u));
/* 8b6e53: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6e56: je 0x8b6eb9 */
  if (zf) goto L_8b6eb9;
L_8b6e58: /* 8b6e58: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8b6e5a: mov ecx, ebx */
  ecx = ebx;
/* 8b6e5c: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x8b6e62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b6e62: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b6e64: je 0x8b6eb9 */
  if (zf) goto L_8b6eb9;
L_8b6e66: /* 8b6e66: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 8b6e6a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6e6b: lea edx, [esp + 0x48] */
  edx = (uint32_t)(esp + 0x48u);
/* 8b6e6f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b6e70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6e71: call 0x928710 */
  esp -= 4; W32(esp, 0x8b6e76u); SPILL(); f_928710(); if (g_unwind) return; RELOAD();
/* 8b6e76: lea eax, [esp + 0x44] */
  eax = (uint32_t)(esp + 0x44u);
/* 8b6e7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6e7b: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 8b6e7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6e80: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x8b6e85u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 8b6e85: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 8b6e89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b6e8a: lea eax, [esp + 0x5c] */
  eax = (uint32_t)(esp + 0x5cu);
/* 8b6e8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6e8f: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x8b6e94u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 8b6e94: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b6e97: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 8b6e9b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6e9c: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 8b6ea0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b6ea1: lea ecx, [esp + 0x80] */
  ecx = (uint32_t)(esp + 0x80u);
/* 8b6ea8: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x8b6eaeu); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 8b6eae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6eaf: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8b6eb3: call dword ptr [0xcfabb4] */
  esp -= 4; W32(esp, 0x8b6eb9u); SPILL(); f_4e2ed2(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABV0@@Z */ RELOAD();
L_8b6eb9: /* 8b6eb9: mov eax, dword ptr [esp + 0xe4] */
  eax = R32((uint32_t)(esp + 0xe4u));
/* 8b6ec0: mov ecx, 7 */
  ecx = 0x7u;
/* 8b6ec5: lea esi, [esp + 0x10] */
  esi = (uint32_t)(esp + 0x10u);
/* 8b6ec9: mov edi, eax */
  edi = eax;
/* 8b6ecb: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8b6ecd: mov ecx, dword ptr [esp + 0xd4] */
  ecx = R32((uint32_t)(esp + 0xd4u));
/* 8b6ed4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b6ed5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b6ed6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b6ed7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b6ed8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b6edf: add esp, 0xd0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b6ee5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8b6f50(void) {
  LOAD_REGS();
L_8b6f50: /* 8b6f50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b6f52: push 0x9d6d98 */
  { uint32_t v = 0x9d6d98u; esp -= 4; W32(esp, v); }
/* 8b6f57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b6f5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b6f5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b6f65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b6f66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b6f67: mov esi, ecx */
  esi = ecx;
/* 8b6f69: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8b6f6d: lea ecx, [esi + 0x94] */
  ecx = (uint32_t)(esi + 0x94u);
/* 8b6f73: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 8b6f7b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8b6f81u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8b6f81: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 8b6f84: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 8b6f89: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8b6f8fu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8b6f8f: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 8b6f92: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 8b6f9a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8b6fa0u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8b6fa0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8b6fa4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b6fa5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b6fac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b6faf: ret  */
  esp += 4; SPILL(); return;
}

void f_8b6fd0(void) {
  LOAD_REGS();
L_8b6fd0: /* 8b6fd0: jmp 0x6c41ba */
  SPILL(); f_6c41ba(); return;
}

void f_8b6ff0(void) {
  LOAD_REGS();
L_8b6ff0: /* 8b6ff0: jmp 0x6c41ba */
  SPILL(); f_6c41ba(); return;
}

void f_8b7010(void) {
  LOAD_REGS();
L_8b7010: /* 8b7010: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b7013: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 8b7017: fld dword ptr [ecx + 0x10c] */
  { double v = F32((uint32_t)(ecx + 0x10cu)); FPUSH(v); }
/* 8b701d: mov edx, dword ptr [ecx + 0x108] */
  edx = R32((uint32_t)(ecx + 0x108u));
/* 8b7023: lea eax, [ecx + 0x54] */
  eax = (uint32_t)(ecx + 0x54u);
/* 8b7026: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 8b702a: fld dword ptr [ecx + 0x110] */
  { double v = F32((uint32_t)(ecx + 0x110u)); FPUSH(v); }
/* 8b7030: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 8b7034: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b7035: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 8b7039: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8b703d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b703e: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 8b7042: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 8b704a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8b704e: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 8b7052: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8b7056: lea edi, [esp + 0x30] */
  edi = (uint32_t)(esp + 0x30u);
/* 8b705a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b705c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8b705e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b7060: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8b7063: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b7065: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8b7068: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b706a: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8b706d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b7070: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8b7073: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b7076: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8b7079: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b707c: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8b707f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b7082: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8b7085: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b7087: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b7089: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b708b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b708d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b708f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b7092: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8b7095: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b7098: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8b709b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b709e: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8b70a1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b70a4: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8b70a7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b70a9: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b70ab: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b70ad: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b70af: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b70b1: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b70b4: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8b70b7: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b70ba: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8b70bd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b70c0: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8b70c3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b70c6: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8b70c9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b70cb: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b70cd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b70cf: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b70d1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b70d3: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b70d5: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8b70d7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8b70d9: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8b70dc: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8b70df: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8b70e2: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 8b70e6: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 8b70ea: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 8b70ee: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 8b70f2: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 8b70f6: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 8b70fa: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 8b70fe: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 8b7102: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b7103: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 8b7107: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 8b710b: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8b7111u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8b7111: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8b7115: fld dword ptr [eax + 0xd4] */
  { double v = F32((uint32_t)(eax + 0xd4u)); FPUSH(v); }
/* 8b711b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b711c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8b7122: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b7123: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b7125: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b7128: jp 0x8b7154 */
  if (pf) goto L_8b7154;
L_8b712a: /* 8b712a: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 8b712e: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8b7134: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8b7138: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8b713c: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8b7142: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8b7146: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8b714a: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8b7150: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
L_8b7154: /* 8b7154: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8b7158: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 8b715c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8b715e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8b7162: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8b7165: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8b7169: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8b716c: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 8b7170: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b7173: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b71e0(void) {
  LOAD_REGS();
L_8b71e0: /* 8b71e0: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b71e3: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 8b71e7: fld dword ptr [ecx + 0x15c] */
  { double v = F32((uint32_t)(ecx + 0x15cu)); FPUSH(v); }
/* 8b71ed: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8b71ef: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b71f2: fmul dword ptr [ecx + 0xf4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xf4u)));
/* 8b71f8: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 8b71fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b71fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b71fe: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8b7202: mov dword ptr [esp + 0x30], 0x3f800000 */
  W32((uint32_t)(esp + 0x30u), 0x3f800000u);
/* 8b720a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8b720c: fmul dword ptr [ecx + 0xf8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xf8u)));
/* 8b7212: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8b7216: fmul dword ptr [ecx + 0xfc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfcu)));
/* 8b721c: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8b7220: fadd dword ptr [ecx + 0xc4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xc4u)));
/* 8b7226: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8b722a: fadd dword ptr [ecx + 0xc8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xc8u)));
/* 8b7230: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8b7232: fadd dword ptr [ecx + 0xcc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xccu)));
/* 8b7238: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 8b723c: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 8b7240: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 8b7244: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8b7248: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8b724c: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 8b7250: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8b7254: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 8b7258: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8b725c: lea edi, [esp + 0x14] */
  edi = (uint32_t)(esp + 0x14u);
/* 8b7260: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b7262: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8b7264: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b7266: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8b7269: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b726b: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8b726e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b7270: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8b7273: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b7276: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8b7279: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b727c: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8b727f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b7282: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8b7285: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b7288: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8b728b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b728d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b728f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b7291: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b7293: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b7295: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b7298: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8b729b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b729e: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8b72a1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b72a4: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8b72a7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b72aa: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8b72ad: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b72af: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b72b1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b72b3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b72b5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b72b7: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b72ba: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8b72bd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b72c0: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8b72c3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b72c6: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8b72c9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b72cc: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8b72cf: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b72d1: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b72d3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b72d5: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b72d7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b72d9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b72db: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8b72dd: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8b72df: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8b72e2: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8b72e5: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8b72e8: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8b72ec: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 8b72f0: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8b72f2: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8b72f6: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8b72f9: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8b72fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b72fe: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8b7301: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 8b7305: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b7306: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b7309: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b7360(void) {
  LOAD_REGS();
L_8b7360: /* 8b7360: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b7361: mov ebp, esp */
  ebp = esp;
/* 8b7363: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b7365: push 0x9d6dd1 */
  { uint32_t v = 0x9d6dd1u; esp -= 4; W32(esp, v); }
/* 8b736a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b7370: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b7371: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b7378: sub esp, 0x330 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x330u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b737e: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8b7383: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b7384: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b7385: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8b7388: mov ecx, dword ptr [0xce842c] */
  ecx = R32((uint32_t)(0xce842cu));
/* 8b738e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b738f: xor ebx, ebx */
  ebx = 0;
/* 8b7391: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b7394: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8b7397: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8b739a: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8b739c: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 8b739e: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 8b73a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b73a2: lea ecx, [ebp + 0x28] */
  ecx = (uint32_t)(ebp + 0x28u);
/* 8b73a5: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
/* 8b73a8: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* 8b73ab: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 8b73ae: call dword ptr [0xcfa5e0] */
  esp -= 4; W32(esp, 0x8b73b4u); SPILL(); f_4e2e87(); if (g_unwind) return; /* Core!??8FVector@@QBEHABV0@@Z */ RELOAD();
/* 8b73b4: mov edi, dword ptr [ebp + 0x38] */
  edi = R32((uint32_t)(ebp + 0x38u));
/* 8b73b7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8b73ba: mov esi, dword ptr [ecx + 0x88] */
  esi = R32((uint32_t)(ecx + 0x88u));
/* 8b73c0: mov edx, edi */
  edx = edi;
/* 8b73c2: and edx, 0x100 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8b73c8: test esi, 0x200 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b73ce: je 0x8b7436 */
  if (zf) goto L_8b7436;
L_8b73d0: /* 8b73d0: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b73d2: jne 0x8b7436 */
  if (!zf) goto L_8b7436;
L_8b73d4: /* 8b73d4: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 8b73d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b73d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b73d9: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 8b73dc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b73df: mov edx, esp */
  edx = esp;
/* 8b73e1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8b73e3: mov eax, dword ptr [ebp + 0x2c] */
  eax = R32((uint32_t)(ebp + 0x2cu));
/* 8b73e6: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8b73e9: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 8b73ec: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8b73ef: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 8b73f2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b73f5: mov edx, esp */
  edx = esp;
/* 8b73f7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8b73f9: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 8b73fc: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8b73ff: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 8b7402: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8b7405: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8b7408: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b740b: mov edx, esp */
  edx = esp;
/* 8b740d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8b740f: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8b7412: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b7413: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b7416: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8b7419: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8b741c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b741d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b7420: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8b7423: call 0x6c7572 */
  esp -= 4; W32(esp, 0x8b7428u); SPILL(); f_6c7572(); if (g_unwind) return; RELOAD();
/* 8b7428: xor edx, edx */
  edx = 0;
/* 8b742a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b742c: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8b742f: mov ebx, edx */
  ebx = edx;
/* 8b7431: jmp 0x8b7c57 */
  goto L_8b7c57;
L_8b7436: /* 8b7436: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b7439: mov ecx, dword ptr [esi + 0x104] */
  ecx = R32((uint32_t)(esi + 0x104u));
/* 8b743f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b7441: je 0x8b74c1 */
  if (zf) goto L_8b74c1;
L_8b7443: /* 8b7443: cmp dword ptr [esi + 0x124], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x124u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b744a: je 0x8b7450 */
  if (zf) goto L_8b7450;
L_8b744c: /* 8b744c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b744e: je 0x8b745d */
  if (zf) goto L_8b745d;
L_8b7450: /* 8b7450: cmp dword ptr [esi + 0x120], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x120u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b7457: je 0x8b74c1 */
  if (zf) goto L_8b74c1;
L_8b7459: /* 8b7459: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b745b: je 0x8b74c1 */
  if (zf) goto L_8b74c1;
L_8b745d: /* 8b745d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b745f: jne 0x8b74c1 */
  if (!zf) goto L_8b74c1;
L_8b7461: /* 8b7461: mov edx, dword ptr [ebp + 0x34] */
  edx = R32((uint32_t)(ebp + 0x34u));
/* 8b7464: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 8b7467: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b7468: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b7469: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b746c: mov edx, esp */
  edx = esp;
/* 8b746e: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 8b7470: mov esi, dword ptr [ebp + 0x2c] */
  esi = R32((uint32_t)(ebp + 0x2cu));
/* 8b7473: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 8b7476: mov esi, dword ptr [ebp + 0x30] */
  esi = R32((uint32_t)(ebp + 0x30u));
/* 8b7479: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 8b747c: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 8b747f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8b7481: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b7484: mov edx, esp */
  edx = esp;
/* 8b7486: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 8b7488: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 8b748b: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 8b748e: mov esi, dword ptr [ebp + 0x24] */
  esi = R32((uint32_t)(ebp + 0x24u));
/* 8b7491: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 8b7494: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 8b7497: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b749a: mov edx, esp */
  edx = esp;
/* 8b749c: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 8b749e: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 8b74a1: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 8b74a4: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 8b74a7: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 8b74aa: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8b74ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b74ae: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8b74b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b74b2: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0x8b74b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b74b5: xor ebx, ebx */
  ebx = 0;
/* 8b74b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b74b9: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8b74bc: jmp 0x8b7c57 */
  goto L_8b7c57;
L_8b74c1: /* 8b74c1: mov ecx, dword ptr [esi + 0x10c] */
  ecx = R32((uint32_t)(esi + 0x10cu));
/* 8b74c7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b74c9: je 0x8b7c57 */
  if (zf) goto L_8b7c57;
L_8b74cf: /* 8b74cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b74d1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b74d4: mov dword ptr [ecx + 0x24], 0x3f800000 */
  W32((uint32_t)(ecx + 0x24u), 0x3f800000u);
/* 8b74db: je 0x8b7664 */
  if (zf) goto L_8b7664;
L_8b74e1: /* 8b74e1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b74e4: lea edx, [ebp + 0x10] */
  edx = (uint32_t)(ebp + 0x10u);
/* 8b74e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b74e8: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8b74eb: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 8b74ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b74ef: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b74f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b74f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b74f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b74f5: lea ecx, [ebp - 0x1a8] */
  ecx = (uint32_t)(ebp + 0xfffffe58u);
/* 8b74fb: call 0x6c3c47 */
  esp -= 4; W32(esp, 0x8b7500u); SPILL(); f_6c3c47(); if (g_unwind) return; RELOAD();
/* 8b7500: lea ecx, [ebp - 0x1a8] */
  ecx = (uint32_t)(ebp + 0xfffffe58u);
/* 8b7506: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b7507: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b750a: add ecx, 0x108 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b7510: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b7514: call 0x6c6b45 */
  esp -= 4; W32(esp, 0x8b7519u); SPILL(); f_6c6b45(); if (g_unwind) return; RELOAD();
/* 8b7519: mov ebx, eax */
  ebx = eax;
/* 8b751b: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b751e: jne 0x8b7659 */
  if (!zf) goto L_8b7659;
L_8b7524: /* 8b7524: mov eax, dword ptr [ebp - 0xa0] */
  eax = R32((uint32_t)(ebp + 0xffffff60u));
/* 8b752a: mov ecx, dword ptr [ebp - 0x9c] */
  ecx = R32((uint32_t)(ebp + 0xffffff64u));
/* 8b7530: lea edx, [ebp - 0x154] */
  edx = (uint32_t)(ebp + 0xfffffeacu);
/* 8b7536: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8b7539: mov edx, dword ptr [ebp - 0x98] */
  edx = R32((uint32_t)(ebp + 0xffffff68u));
/* 8b753f: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 8b7542: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 8b7545: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 8b7548: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8b754b: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 8b7552: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8b7555: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b7558: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b755b: lea edi, [ebp - 0x58] */
  edi = (uint32_t)(ebp + 0xffffffa8u);
/* 8b755e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b7560: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8b7562: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b7564: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8b7567: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b7569: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8b756c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b756e: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8b7571: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b7574: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8b7577: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b757a: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8b757d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b7580: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8b7583: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b7586: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8b7589: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b758b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b758d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b758f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b7591: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b7593: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b7596: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8b7599: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b759c: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8b759f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b75a2: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8b75a5: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b75a8: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8b75ab: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b75ad: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b75af: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b75b1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b75b3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b75b5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b75b8: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8b75bb: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b75be: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8b75c1: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b75c4: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8b75c7: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b75ca: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8b75cd: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b75cf: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b75d1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b75d3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b75d5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b75d7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b75d9: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8b75db: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8b75dd: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8b75e0: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8b75e3: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8b75e6: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8b75e9: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8b75ec: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8b75ef: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 8b75f2: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8b75f5: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 8b75f8: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b75fb: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8b75fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b75ff: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8b7602: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8b7605: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8b760bu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8b760b: fld dword ptr [ebp - 0xd4] */
  { double v = F32((uint32_t)(ebp + 0xffffff2cu)); FPUSH(v); }
/* 8b7611: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8b7617: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b7619: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b761c: jp 0x8b7642 */
  if (pf) goto L_8b7642;
L_8b761e: /* 8b761e: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8b7621: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8b7627: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8b762a: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8b762d: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8b7633: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8b7636: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8b7639: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8b763f: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
L_8b7642: /* 8b7642: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8b7645: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8b7648: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8b764b: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b764e: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b7651: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8b7653: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8b7656: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
L_8b7659: /* 8b7659: lea ecx, [ebp - 0x1a8] */
  ecx = (uint32_t)(ebp + 0xfffffe58u);
/* 8b765f: jmp 0x8b77e6 */
  goto L_8b77e6;
L_8b7664: /* 8b7664: lea eax, [ebp + 0x28] */
  eax = (uint32_t)(ebp + 0x28u);
/* 8b7667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b7668: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b766b: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 8b766e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b766f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8b7672: lea edx, [ebp + 0x1c] */
  edx = (uint32_t)(ebp + 0x1cu);
/* 8b7675: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b7676: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8b7679: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b767a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b767b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b767c: lea ecx, [ebp - 0x1e0] */
  ecx = (uint32_t)(ebp + 0xfffffe20u);
/* 8b7682: call 0x6c72c0 */
  esp -= 4; W32(esp, 0x8b7687u); SPILL(); f_6c72c0(); if (g_unwind) return; RELOAD();
/* 8b7687: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b768a: lea eax, [ebp - 0x1e0] */
  eax = (uint32_t)(ebp + 0xfffffe20u);
/* 8b7690: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b7691: add ecx, 0x108 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b7697: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8b769b: call 0x6ca740 */
  esp -= 4; W32(esp, 0x8b76a0u); SPILL(); f_6ca740(); if (g_unwind) return; RELOAD();
/* 8b76a0: mov ebx, eax */
  ebx = eax;
/* 8b76a2: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b76a5: jne 0x8b789c */
  if (!zf) goto L_8b789c;
L_8b76ab: /* 8b76ab: mov edx, dword ptr [ebp - 0xd8] */
  edx = R32((uint32_t)(ebp + 0xffffff28u));
/* 8b76b1: mov eax, dword ptr [ebp - 0xd4] */
  eax = R32((uint32_t)(ebp + 0xffffff2cu));
/* 8b76b7: lea ecx, [ebp - 0x18c] */
  ecx = (uint32_t)(ebp + 0xfffffe74u);
/* 8b76bd: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8b76c0: mov ecx, dword ptr [ebp - 0xd0] */
  ecx = R32((uint32_t)(ebp + 0xffffff30u));
/* 8b76c6: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8b76c9: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 8b76cc: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 8b76cf: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 8b76d2: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 8b76d9: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8b76dc: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b76df: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b76e2: lea edi, [ebp - 0x58] */
  edi = (uint32_t)(ebp + 0xffffffa8u);
/* 8b76e5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b76e7: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8b76e9: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b76eb: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8b76ee: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b76f0: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8b76f3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b76f5: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8b76f8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b76fb: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8b76fe: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b7701: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8b7704: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b7707: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8b770a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b770d: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8b7710: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b7712: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b7714: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b7716: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b7718: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b771a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b771d: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8b7720: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b7723: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8b7726: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b7729: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8b772c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b772f: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8b7732: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b7734: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b7736: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b7738: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b773a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b773c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b773f: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8b7742: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b7745: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8b7748: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b774b: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8b774e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b7751: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8b7754: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b7756: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b7758: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b775a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b775c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b775e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b7760: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8b7762: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8b7764: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8b7767: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8b776a: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8b776d: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8b7770: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8b7773: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8b7776: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 8b7779: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b777c: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8b777f: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8b7782: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b7783: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8b7786: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8b7789: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8b778c: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8b7792u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8b7792: fld dword ptr [ebp - 0x10c] */
  { double v = F32((uint32_t)(ebp + 0xfffffef4u)); FPUSH(v); }
/* 8b7798: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8b779e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b77a0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b77a3: jp 0x8b77c9 */
  if (pf) goto L_8b77c9;
L_8b77a5: /* 8b77a5: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8b77a8: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8b77ae: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8b77b1: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8b77b4: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8b77ba: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8b77bd: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8b77c0: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8b77c6: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
L_8b77c9: /* 8b77c9: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8b77cc: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8b77cf: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8b77d2: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b77d5: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b77d8: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8b77da: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8b77dd: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
L_8b77e0: /* 8b77e0: lea ecx, [ebp - 0x1e0] */
  ecx = (uint32_t)(ebp + 0xfffffe20u);
L_8b77e6: /* 8b77e6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b77ea: call 0x6c41ba */
  esp -= 4; W32(esp, 0x8b77efu); SPILL(); f_6c41ba(); if (g_unwind) return; RELOAD();
/* 8b77ef: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b77f1: je 0x8b7c57 */
  if (zf) goto L_8b7c57;
L_8b77f7: /* 8b77f7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b77fa: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8b77fd: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8b7800: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b7803: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b7806: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
/* 8b7809: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8b780c: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 8b780f: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8b7812: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8b7814: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8b7817: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 8b781a: fst dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0);
/* 8b781d: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8b7820: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 8b7823: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 8b7826: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b7829: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8b782c: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 8b782f: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8b7832: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8b7835: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 8b7838: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8b783b: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8b783e: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8b7844u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8b7844: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 8b7847: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8b784a: fld dword ptr [0xa0a848] */
  { double v = F32((uint32_t)(0xa0a848u)); FPUSH(v); }
/* 8b7850: fdiv dword ptr [ebp - 0x5c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 8b7853: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8b7856: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8b785cu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8b785c: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 8b785f: fld dword ptr [0xa0973c] */
  { double v = F32((uint32_t)(0xa0973cu)); FPUSH(v); }
/* 8b7865: fdiv dword ptr [ebp - 0x5c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 8b7868: fld dword ptr [0xa0973c] */
  { double v = F32((uint32_t)(0xa0973cu)); FPUSH(v); }
/* 8b786e: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8b7870: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b7872: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b7875: jnp 0x8b7bc8 */
  if (!pf) goto L_8b7bc8;
L_8b787b: /* 8b787b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8b787d: fld dword ptr [0xa0973c] */
  { double v = F32((uint32_t)(0xa0973cu)); FPUSH(v); }
/* 8b7883: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 8b7886: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b7888: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b788b: jp 0x8b7bc5 */
  if (pf) goto L_8b7bc5;
L_8b7891: /* 8b7891: fld dword ptr [0xa0973c] */
  { double v = F32((uint32_t)(0xa0973cu)); FPUSH(v); }
/* 8b7897: jmp 0x8b7bc8 */
  goto L_8b7bc8;
L_8b789c: /* 8b789c: cmp dword ptr [ebp - 0x88], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff78u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b78a3: jne 0x8b77e0 */
  if (!zf) goto L_8b77e0;
L_8b78a9: /* 8b78a9: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8b78ac: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 8b78af: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 8b78b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b78b3: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8b78b6: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8b78b9: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 8b78bc: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8b78bf: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 8b78c2: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8b78c5: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8b78c8: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8b78cb: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8b78d1u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8b78d1: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8b78d4: lea eax, [ebp + 0x28] */
  eax = (uint32_t)(ebp + 0x28u);
/* 8b78d7: fmul dword ptr [0xa07fe4] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe4u)));
/* 8b78dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b78de: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 8b78e1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b78e4: fmul dword ptr [0xa07fe4] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe4u)));
/* 8b78ea: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 8b78ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b78ee: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8b78f1: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8b78f4: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b78f7: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8b78fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b78fb: fmul dword ptr [0xa07fe4] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe4u)));
/* 8b7901: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8b7904: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b7905: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b7906: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8b7909: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b790a: lea ecx, [ebp - 0x33c] */
  ecx = (uint32_t)(ebp + 0xfffffcc4u);
/* 8b7910: fsubr dword ptr [ebp + 0x24] */
  ST0 = (F32((uint32_t)(ebp + 0x24u))) - ST0;
/* 8b7913: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 8b7916: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8b7919: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 8b791c: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8b791f: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8b7922: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8b7925: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8b7928: call 0x6c72c0 */
  esp -= 4; W32(esp, 0x8b792du); SPILL(); f_6c72c0(); if (g_unwind) return; RELOAD();
/* 8b792d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b7930: lea eax, [ebp - 0x33c] */
  eax = (uint32_t)(ebp + 0xfffffcc4u);
/* 8b7936: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b7937: add ecx, 0x108 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b793d: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8b7941: call 0x6ca740 */
  esp -= 4; W32(esp, 0x8b7946u); SPILL(); f_6ca740(); if (g_unwind) return; RELOAD();
/* 8b7946: mov ebx, eax */
  ebx = eax;
/* 8b7948: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b794a: je 0x8b7b89 */
  if (zf) goto L_8b7b89;
L_8b7950: /* 8b7950: mov edx, dword ptr [ebp - 0x234] */
  edx = R32((uint32_t)(ebp + 0xfffffdccu));
/* 8b7956: mov eax, dword ptr [ebp - 0x230] */
  eax = R32((uint32_t)(ebp + 0xfffffdd0u));
/* 8b795c: lea ecx, [ebp - 0x2e8] */
  ecx = (uint32_t)(ebp + 0xfffffd18u);
/* 8b7962: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8b7965: mov ecx, dword ptr [ebp - 0x22c] */
  ecx = R32((uint32_t)(ebp + 0xfffffdd4u));
/* 8b796b: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8b796e: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 8b7971: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 8b7974: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 8b7977: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 8b797e: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8b7981: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b7984: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b7987: lea edi, [ebp - 0x70] */
  edi = (uint32_t)(ebp + 0xffffff90u);
/* 8b798a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b798c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8b798e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b7990: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8b7993: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b7995: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8b7998: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b799a: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8b799d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b79a0: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8b79a3: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b79a6: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8b79a9: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b79ac: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8b79af: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b79b2: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8b79b5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b79b7: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b79b9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b79bb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b79bd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b79bf: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b79c2: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8b79c5: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b79c8: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8b79cb: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b79ce: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8b79d1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b79d4: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8b79d7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b79d9: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b79db: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b79dd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b79df: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b79e1: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b79e4: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8b79e7: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b79ea: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8b79ed: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b79f0: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8b79f3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b79f6: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8b79f9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b79fb: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b79fd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b79ff: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b7a01: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b7a03: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b7a05: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8b7a07: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8b7a09: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8b7a0c: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8b7a0f: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8b7a12: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 8b7a15: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 8b7a18: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 8b7a1b: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 8b7a1e: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8b7a21: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 8b7a24: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8b7a27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b7a28: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8b7a2b: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 8b7a2e: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 8b7a31: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8b7a37u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8b7a37: fld dword ptr [ebp - 0x268] */
  { double v = F32((uint32_t)(ebp + 0xfffffd98u)); FPUSH(v); }
/* 8b7a3d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8b7a43: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b7a45: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b7a48: jp 0x8b7a6e */
  if (pf) goto L_8b7a6e;
L_8b7a4a: /* 8b7a4a: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8b7a4d: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8b7a53: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8b7a56: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8b7a59: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8b7a5f: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8b7a62: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8b7a65: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8b7a6b: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
L_8b7a6e: /* 8b7a6e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8b7a71: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8b7a74: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8b7a77: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8b7a7a: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b7a7d: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8b7a7f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8b7a82: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 8b7a85: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8b7a88: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8b7a8b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8b7a8e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b7a91: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8b7a94: mov dword ptr [edx + 0x20], ecx */
  W32((uint32_t)(edx + 0x20u), ecx);
/* 8b7a97: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8b7a9a: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8b7a9d: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8b7aa0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8b7aa2: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8b7aa5: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8b7aa8: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 8b7aab: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8b7aae: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8b7ab1: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 8b7ab4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b7ab7: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8b7aba: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 8b7abd: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8b7ac0: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8b7ac3: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8b7ac6: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8b7ac9: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8b7acc: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8b7ad2u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8b7ad2: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8b7ad5: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8b7ad8: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8b7adeu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8b7ade: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8b7ae1: fld dword ptr [0xa0a848] */
  { double v = F32((uint32_t)(0xa0a848u)); FPUSH(v); }
/* 8b7ae7: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 8b7aec: fdiv dword ptr [ebp - 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8b7aef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b7af1: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b7af4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8b7af7: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8b7afb: fld dword ptr [0xa0973c] */
  { double v = F32((uint32_t)(0xa0973cu)); FPUSH(v); }
/* 8b7b01: fdiv dword ptr [ebp - 0x18] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8b7b04: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8b7b07: push 0x3dcccccd */
  { uint32_t v = 0x3dcccccdu; esp -= 4; W32(esp, v); }
/* 8b7b0c: call 0x6c44ee */
  esp -= 4; W32(esp, 0x8b7b11u); SPILL(); f_6c44ee(); if (g_unwind) return; RELOAD();
/* 8b7b11: fsubr dword ptr [esi + 0x24] */
  ST0 = (F32((uint32_t)(esi + 0x24u))) - ST0;
/* 8b7b14: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b7b17: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8b7b1a: call 0x6c44ee */
  esp -= 4; W32(esp, 0x8b7b1fu); SPILL(); f_6c44ee(); if (g_unwind) return; RELOAD();
/* 8b7b1f: fstp dword ptr [esi + 0x24] */
  WF32((uint32_t)(esi + 0x24u), ST0); FPOP();
/* 8b7b22: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b7b25: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8b7b28: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 8b7b2b: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8b7b2e: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8b7b31: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8b7b34: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b7b37: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8b7b3a: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8b7b3d: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8b7b40: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8b7b43: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8b7b45: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8b7b48: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8b7b4b: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8b7b4e: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 8b7b51: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8b7b54: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8b7b57: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8b7b5a: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8b7b5d: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8b7b60: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8b7b63: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 8b7b66: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8b7b69: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8b7b6c: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8b7b6f: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8b7b72: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8b7b75: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8b7b78: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8b7b7b: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b7b7e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8b7b80: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8b7b83: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8b7b86: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_8b7b89: /* 8b7b89: xor eax, eax */
  eax = 0;
/* 8b7b8b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b7b8d: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8b7b90: lea ecx, [ebp - 0x33c] */
  ecx = (uint32_t)(ebp + 0xfffffcc4u);
/* 8b7b96: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8b7b9a: mov esi, eax */
  esi = eax;
/* 8b7b9c: call 0x6c41ba */
  esp -= 4; W32(esp, 0x8b7ba1u); SPILL(); f_6c41ba(); if (g_unwind) return; RELOAD();
/* 8b7ba1: lea ecx, [ebp - 0x1e0] */
  ecx = (uint32_t)(ebp + 0xfffffe20u);
/* 8b7ba7: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b7bab: call 0x6c41ba */
  esp -= 4; W32(esp, 0x8b7bb0u); SPILL(); f_6c41ba(); if (g_unwind) return; RELOAD();
/* 8b7bb0: mov eax, esi */
  eax = esi;
/* 8b7bb2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b7bb5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b7bbc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b7bbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b7bbe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b7bbf: mov esp, ebp */
  esp = ebp;
/* 8b7bc1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b7bc2: ret 0x34 */
  esp += 56; SPILL(); return;
L_8b7bc5: /* 8b7bc5: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
L_8b7bc8: /* 8b7bc8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b7bcb: fsubr dword ptr [ecx + 0x24] */
  ST0 = (F32((uint32_t)(ecx + 0x24u))) - ST0;
/* 8b7bce: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8b7bd4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b7bd6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b7bd9: jp 0x8b7be5 */
  if (pf) goto L_8b7be5;
L_8b7bdb: /* 8b7bdb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8b7bdd: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8b7be3: jmp 0x8b7bfa */
  goto L_8b7bfa;
L_8b7be5: /* 8b7be5: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8b7beb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b7bed: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b7bf0: jnp 0x8b7bfa */
  if (!pf) goto L_8b7bfa;
L_8b7bf2: /* 8b7bf2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8b7bf4: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_8b7bfa: /* 8b7bfa: fstp dword ptr [ecx + 0x24] */
  WF32((uint32_t)(ecx + 0x24u), ST0); FPOP();
/* 8b7bfd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b7c00: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8b7c03: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 8b7c06: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 8b7c09: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8b7c0c: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8b7c0f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b7c12: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 8b7c15: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8b7c18: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 8b7c1b: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8b7c1e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8b7c20: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8b7c23: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8b7c26: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8b7c29: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8b7c2c: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8b7c2f: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8b7c32: fadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x1cu)));
/* 8b7c35: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8b7c38: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8b7c3b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8b7c3d: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* 8b7c40: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8b7c43: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8b7c46: fadd dword ptr [ebp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x24u)));
/* 8b7c49: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8b7c4b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8b7c4e: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8b7c51: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8b7c54: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_8b7c57: /* 8b7c57: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8b7c5c: mov ecx, dword ptr [0xce842c] */
  ecx = R32((uint32_t)(0xce842cu));
/* 8b7c62: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8b7c65: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8b7c67: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8b7c69: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b7c6c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8b7c6e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b7c6f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8b7c71: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b7c74: xor eax, eax */
  eax = 0;
/* 8b7c76: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b7c78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b7c79: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8b7c7c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b7c83: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b7c84: mov esp, ebp */
  esp = ebp;
/* 8b7c86: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b7c87: ret 0x34 */
  esp += 56; SPILL(); return;
}
