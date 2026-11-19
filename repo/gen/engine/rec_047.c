#include "recomp.h"
#include "rec_mod.h"

void f_7d7541(void) {
  LOAD_REGS();
L_7d7541: /* 7d7541: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7d7544: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7d7549: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 7d754c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d754d: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 7d7550: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d7555u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d7555(); return;
}

void f_7d7555(void) {
  LOAD_REGS();
L_7d7555: /* 7d7555: push 0xa0f614 */
  { uint32_t v = 0xa0f614u; esp -= 4; W32(esp, v); }
/* 7d755a: push 0xadad68 */
  { uint32_t v = 0xadad68u; esp -= 4; W32(esp, v); }
/* 7d755f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7d7565u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7d7565: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7568: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d756a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d756c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d7571u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7d7571: mov ebx, 0xb88550 */
  ebx = 0xb88550u;
/* 7d7576: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 7d7579: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d7580: /* 7d7580: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7585: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d7588: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7589: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d758b: jge 0x7d75a1 */
  if ((sf == of)) goto L_7d75a1;
L_7d758d: /* 7d758d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d758f: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7d7592: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7594: je 0x7d7580 */
  if (zf) goto L_7d7580;
L_7d7596: /* 7d7596: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d7597: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d759du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d759d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d759f: je 0x7d7580 */
  if (zf) goto L_7d7580;
L_7d75a1: /* 7d75a1: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d75a6: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d75a9: jge 0x7d764b */
  if ((sf == of)) goto L_7d764b;
L_7d75af: /* 7d75af: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d75b1: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d75b4: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d75b7: xor edi, edi */
  edi = 0;
/* 7d75b9: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d75bb: je 0x7d75e9 */
  if (zf) goto L_7d75e9;
L_7d75bd: /* 7d75bd: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d75c2: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d75c8u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d75c8: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d75ca: je 0x7d75e9 */
  if (zf) goto L_7d75e9;
L_7d75cc: /* 7d75cc: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d75d1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d75d3: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d75d6: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* 7d75d9: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 7d75dc: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d75e1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d75e3: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d75e6: mov dword ptr [eax + 0x40], edi */
  W32((uint32_t)(eax + 0x40u), edi);
L_7d75e9: /* 7d75e9: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d75ef: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d75f1: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d75f4: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 7d75f7: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d75f9: je 0x7d7620 */
  if (zf) goto L_7d7620;
L_7d75fb: /* 7d75fb: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d7600: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7606u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7606: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7608: je 0x7d7620 */
  if (zf) goto L_7d7620;
L_7d760a: /* 7d760a: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d7610: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7612: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d7615: mov dword ptr [eax + 0x40], edi */
  W32((uint32_t)(eax + 0x40u), edi);
/* 7d7618: jmp 0x7d7620 */
  goto L_7d7620;
L_7d7620: /* 7d7620: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7625: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d7628: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7629: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d762b: jge 0x7d75a1 */
  if ((sf == of)) goto L_7d75a1;
L_7d7631: /* 7d7631: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d7633: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d7636: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7638: je 0x7d7620 */
  if (zf) goto L_7d7620;
L_7d763a: /* 7d763a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d763b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7641u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7641: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7643: jne 0x7d75a1 */
  if (!zf) goto L_7d75a1;
L_7d7649: /* 7d7649: jmp 0x7d7620 */
  goto L_7d7620;
L_7d764b: /* 7d764b: mov ebx, 0xb88020 */
  ebx = 0xb88020u;
/* 7d7650: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_7d7653: /* 7d7653: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7658: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d765b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d765c: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d765e: jge 0x7d7680 */
  if ((sf == of)) goto L_7d7680;
L_7d7660: /* 7d7660: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7662: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7d7665: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7667: je 0x7d7653 */
  if (zf) goto L_7d7653;
L_7d7669: /* 7d7669: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d766a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7670u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7670: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7672: je 0x7d7653 */
  if (zf) goto L_7d7653;
L_7d7674: /* 7d7674: jmp 0x7d7680 */
  goto L_7d7680;
L_7d7680: /* 7d7680: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7685: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7688: jge 0x7d77fb */
  if ((sf == of)) goto L_7d77fb;
L_7d768e: /* 7d768e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d7690: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d7693: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7d7696: xor edi, edi */
  edi = 0;
/* 7d7698: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d769a: je 0x7d76b8 */
  if (zf) goto L_7d76b8;
L_7d769c: /* 7d769c: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d76a1: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d76a7u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d76a7: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d76a9: je 0x7d76b8 */
  if (zf) goto L_7d76b8;
L_7d76ab: /* 7d76ab: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d76b0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d76b2: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d76b5: mov dword ptr [eax + 0x38], edi */
  W32((uint32_t)(eax + 0x38u), edi);
L_7d76b8: /* 7d76b8: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d76be: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d76c0: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d76c3: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d76c6: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d76c8: je 0x7d76e7 */
  if (zf) goto L_7d76e7;
L_7d76ca: /* 7d76ca: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d76cf: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d76d5u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d76d5: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d76d7: je 0x7d76e7 */
  if (zf) goto L_7d76e7;
L_7d76d9: /* 7d76d9: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d76df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d76e1: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d76e4: mov dword ptr [eax + 0x3c], edi */
  W32((uint32_t)(eax + 0x3cu), edi);
L_7d76e7: /* 7d76e7: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d76ec: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d76ee: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d76f1: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 7d76f4: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d76f6: je 0x7d7715 */
  if (zf) goto L_7d7715;
L_7d76f8: /* 7d76f8: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d76fd: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7703u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7703: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7705: je 0x7d7715 */
  if (zf) goto L_7d7715;
L_7d7707: /* 7d7707: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d770d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d770f: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d7712: mov dword ptr [eax + 0x40], edi */
  W32((uint32_t)(eax + 0x40u), edi);
L_7d7715: /* 7d7715: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d771b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d771d: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d7720: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 7d7723: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7725: je 0x7d7743 */
  if (zf) goto L_7d7743;
L_7d7727: /* 7d7727: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d772c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7732u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7732: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7734: je 0x7d7743 */
  if (zf) goto L_7d7743;
L_7d7736: /* 7d7736: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d773b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d773d: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d7740: mov dword ptr [eax + 0x44], edi */
  W32((uint32_t)(eax + 0x44u), edi);
L_7d7743: /* 7d7743: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d7749: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d774b: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d774e: mov ecx, dword ptr [eax + 0x48] */
  ecx = R32((uint32_t)(eax + 0x48u));
/* 7d7751: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7753: je 0x7d7772 */
  if (zf) goto L_7d7772;
L_7d7755: /* 7d7755: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d775a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7760u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7760: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7762: je 0x7d7772 */
  if (zf) goto L_7d7772;
L_7d7764: /* 7d7764: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d776a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d776c: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d776f: mov dword ptr [eax + 0x48], edi */
  W32((uint32_t)(eax + 0x48u), edi);
L_7d7772: /* 7d7772: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7777: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7779: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d777c: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* 7d777f: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7781: je 0x7d77a0 */
  if (zf) goto L_7d77a0;
L_7d7783: /* 7d7783: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d7788: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d778eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d778e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7790: je 0x7d77a0 */
  if (zf) goto L_7d77a0;
L_7d7792: /* 7d7792: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d7798: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d779a: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d779d: mov dword ptr [eax + 0x4c], edi */
  W32((uint32_t)(eax + 0x4cu), edi);
L_7d77a0: /* 7d77a0: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d77a6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d77a8: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d77ab: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 7d77ae: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d77b0: je 0x7d77d0 */
  if (zf) goto L_7d77d0;
L_7d77b2: /* 7d77b2: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d77b7: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d77bdu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d77bd: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d77bf: je 0x7d77d0 */
  if (zf) goto L_7d77d0;
L_7d77c1: /* 7d77c1: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d77c6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d77c8: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d77cb: mov dword ptr [eax + 0x50], edi */
  W32((uint32_t)(eax + 0x50u), edi);
/* 7d77ce: mov edi, edi */
  edi = edi;
L_7d77d0: /* 7d77d0: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d77d5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d77d8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d77d9: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d77db: jge 0x7d7680 */
  if ((sf == of)) goto L_7d7680;
L_7d77e1: /* 7d77e1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d77e3: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d77e6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d77e8: je 0x7d77d0 */
  if (zf) goto L_7d77d0;
L_7d77ea: /* 7d77ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d77eb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d77f1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d77f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d77f3: jne 0x7d7680 */
  if (!zf) goto L_7d7680;
L_7d77f9: /* 7d77f9: jmp 0x7d77d0 */
  goto L_7d77d0;
L_7d77fb: /* 7d77fb: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d77fe: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7d7804: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 7d7808: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d780eu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d780e: mov ecx, eax */
  ecx = eax;
/* 7d7810: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d7816u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d7816: push 0xadad94 */
  { uint32_t v = 0xadad94u; esp -= 4; W32(esp, v); }
/* 7d781b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d781c: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7d7822u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7d7822: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7825: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7827: je 0x7d7950 */
  if (zf) goto L_7d7950;
L_7d782d: /* 7d782d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7830: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d7832: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7834: mov ecx, esi */
  ecx = esi;
/* 7d7836: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7d7839u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7839: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7d783c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d783e: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 7d7845: je 0x7d785c */
  if (zf) goto L_7d785c;
L_7d7847: /* 7d7847: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7849: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7d784fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d784f: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7d7852: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7854: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7856: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7d7859: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d785cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d785c: /* 7d785c: mov ebx, 0xb5bf68 */
  ebx = 0xb5bf68u;
/* 7d7861: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_7d7864: /* 7d7864: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7869: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d7870: /* 7d7870: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d7873: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7874: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7876: jge 0x7d78f0 */
  if ((sf == of)) goto L_7d78f0;
L_7d7878: /* 7d7878: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d787a: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7d787d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d787f: je 0x7d7870 */
  if (zf) goto L_7d7870;
L_7d7881: /* 7d7881: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d7882: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7888u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7888: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d788a: je 0x7d7864 */
  if (zf) goto L_7d7864;
L_7d788c: /* 7d788c: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7891: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7894: jge 0x7d78f0 */
  if ((sf == of)) goto L_7d78f0;
L_7d7896: /* 7d7896: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d7898: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d789b: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7d78a1: mov edi, dword ptr [edx + esi*4] */
  edi = R32((uint32_t)(edx + esi*4));
/* 7d78a4: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d78aau); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d78aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d78ab: mov ecx, edi */
  ecx = edi;
/* 7d78ad: call dword ptr [0xcfa828] */
  esp -= 4; W32(esp, 0x7d78b3u); SPILL(); f_4e33cd(); if (g_unwind) return; /* Core!?IsIn@UObject@@QBEHPAV1@@Z */ RELOAD();
/* 7d78b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d78b5: je 0x7d78cd */
  if (zf) goto L_7d78cd;
L_7d78b7: /* 7d78b7: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d78bd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d78bf: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d78c2: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7d78c7: call dword ptr [0xcfa604] */
  esp -= 4; W32(esp, 0x7d78cdu); SPILL(); f_4e2077(); if (g_unwind) return; /* Core!?SetFlags@UObject@@QAEXK@Z */ RELOAD();
L_7d78cd: /* 7d78cd: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
L_7d78d2: /* 7d78d2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d78d5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d78d6: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d78d8: jge 0x7d78f0 */
  if ((sf == of)) goto L_7d78f0;
L_7d78da: /* 7d78da: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d78dc: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7d78df: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d78e1: je 0x7d78d2 */
  if (zf) goto L_7d78d2;
L_7d78e3: /* 7d78e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d78e4: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d78eau); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d78ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d78ec: je 0x7d78cd */
  if (zf) goto L_7d78cd;
L_7d78ee: /* 7d78ee: jmp 0x7d788c */
  goto L_7d788c;
L_7d78f0: /* 7d78f0: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d78f3: xor esi, esi */
  esi = 0;
L_7d78f5: /* 7d78f5: mov eax, dword ptr [edi + 0x108] */
  eax = R32((uint32_t)(edi + 0x108u));
/* 7d78fb: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d78fe: jge 0x7d7918 */
  if ((sf == of)) goto L_7d7918;
L_7d7900: /* 7d7900: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d7903: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d7906: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7908: je 0x7d7915 */
  if (zf) goto L_7d7915;
L_7d790a: /* 7d790a: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7d790f: call dword ptr [0xcfa91c] */
  esp -= 4; W32(esp, 0x7d7915u); SPILL(); f_4e1834(); if (g_unwind) return; /* Core!?ClearFlags@UObject@@QAEXK@Z */ RELOAD();
L_7d7915: /* 7d7915: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7916: jmp 0x7d78f5 */
  goto L_7d78f5;
L_7d7918: /* 7d7918: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 7d791d: call dword ptr [0xcfa918] */
  esp -= 4; W32(esp, 0x7d7923u); SPILL(); f_4e3fa8(); if (g_unwind) return; /* Core!?CollectGarbage@UObject@@SAXK@Z */ RELOAD();
/* 7d7923: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 7d7926: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7929: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d792b: je 0x7d7950 */
  if (zf) goto L_7d7950;
L_7d792d: /* 7d792d: xor ecx, ecx */
  ecx = 0;
/* 7d792f: nop  */
L_7d7930: /* 7d7930: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 7d7933: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7936: jge 0x7d7950 */
  if ((sf == of)) goto L_7d7950;
L_7d7938: /* 7d7938: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d793b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7d793e: cmp dword ptr [edx + ecx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7941: jne 0x7d79d0 */
  if (!zf) goto L_7d79d0;
L_7d7947: /* 7d7947: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 7d794a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d794c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d794d: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d7950u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d7950: /* 7d7950: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7953: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7d7956: xor ebx, ebx */
  ebx = 0;
/* 7d7958: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d795a: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d7961: je 0x7d796b */
  if (zf) goto L_7d796b;
L_7d7963: /* 7d7963: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7965: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x7d796bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d796b: /* 7d796b: mov ecx, dword ptr [esi + 0x108] */
  ecx = R32((uint32_t)(esi + 0x108u));
/* 7d7971: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7973: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d7974: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7976: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7d7979u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7979: mov byte ptr [ebp - 4], 0x1f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1fu);
/* 7d797d: xor eax, eax */
  eax = 0;
/* 7d797f: nop  */
L_7d7980: /* 7d7980: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7983: jge 0x7d79e6 */
  if ((sf == of)) goto L_7d79e6;
L_7d7985: /* 7d7985: xor ecx, ecx */
  ecx = 0;
L_7d7987: /* 7d7987: cmp ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d798a: jge 0x7d79e1 */
  if ((sf == of)) goto L_7d79e1;
L_7d798c: /* 7d798c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d798f: mov edx, dword ptr [edx + 0x108] */
  edx = R32((uint32_t)(edx + 0x108u));
/* 7d7995: mov edi, dword ptr [edx + 0x8c] */
  edi = R32((uint32_t)(edx + 0x8cu));
/* 7d799b: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 7d799e: mov ebx, dword ptr [edi + esi*8 + 0x124] */
  ebx = R32((uint32_t)(edi + esi*8 + 0x124u));
/* 7d79a5: mov esi, dword ptr [edi + esi*8 + 0x128] */
  esi = R32((uint32_t)(edi + esi*8 + 0x128u));
/* 7d79ac: mov dword ptr [ebp + eax*8 - 0x2e4], esi */
  W32((uint32_t)(ebp + eax*8 + 0xfffffd1cu), esi);
/* 7d79b3: mov esi, eax */
  esi = eax;
/* 7d79b5: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7d79b8: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d79ba: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d79bc: mov dword ptr [ebp + eax*8 - 0x2e8], ebx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffd18u), ebx);
/* 7d79c3: jne 0x7d79d6 */
  if (!zf) goto L_7d79d6;
L_7d79c5: /* 7d79c5: mov byte ptr [esi + ecx + 0x110], 0 */
  W8((uint32_t)(esi + ecx + 0x110u), 0x0u);
/* 7d79cd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7d79ce: jmp 0x7d7987 */
  goto L_7d7987;
L_7d79d0: /* 7d79d0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7d79d1: jmp 0x7d7930 */
  goto L_7d7930;
L_7d79d6: /* 7d79d6: mov byte ptr [esi + ecx + 0x110], 0xff */
  W8((uint32_t)(esi + ecx + 0x110u), 0xffu);
/* 7d79de: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7d79df: jmp 0x7d7987 */
  goto L_7d7987;
L_7d79e1: /* 7d79e1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d79e2: xor ebx, ebx */
  ebx = 0;
/* 7d79e4: jmp 0x7d7980 */
  goto L_7d7980;
L_7d79e6: /* 7d79e6: mov dword ptr [ebp + 8], 1 */
  W32((uint32_t)(ebp + 0x8u), 0x1u);
/* 7d79ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d79f0: /* 7d79f0: cmp dword ptr [ebp + 8], 0x40 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d79f4: jge 0x7d7b12 */
  if ((sf == of)) goto L_7d7b12;
L_7d79fa: /* 7d79fa: xor esi, esi */
  esi = 0;
/* 7d79fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d7a00: /* 7d7a00: cmp esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a03: jge 0x7d7a61 */
  if ((sf == of)) goto L_7d7a61;
L_7d7a05: /* 7d7a05: xor edi, edi */
  edi = 0;
L_7d7a07: /* 7d7a07: cmp edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a0a: jge 0x7d7a5c */
  if ((sf == of)) goto L_7d7a5c;
L_7d7a0c: /* 7d7a0c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7a0f: mov edx, dword ptr [ecx + 0x108] */
  edx = R32((uint32_t)(ecx + 0x108u));
/* 7d7a15: mov eax, esi */
  eax = esi;
/* 7d7a17: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7d7a1a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d7a1c: movzx edx, byte ptr [eax + edi + 0x110] */
  edx = (uint32_t)(R8((uint32_t)(eax + edi + 0x110u)));
/* 7d7a24: lea ebx, [eax + edi + 0x110] */
  ebx = (uint32_t)(eax + edi + 0x110u);
/* 7d7a2b: cmp edx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a2e: jle 0x7d7a59 */
  if ((zf || sf != of)) goto L_7d7a59;
L_7d7a30: /* 7d7a30: mov eax, 1 */
  eax = 0x1u;
/* 7d7a35: xor edx, edx */
  edx = 0;
/* 7d7a37: mov ecx, edi */
  ecx = edi;
/* 7d7a39: call 0x99cc70 */
  esp -= 4; W32(esp, 0x7d7a3eu); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 7d7a3e: mov ecx, dword ptr [ebp + esi*8 - 0x2e8] */
  ecx = R32((uint32_t)(ebp + esi*8 + 0xfffffd18u));
/* 7d7a45: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7d7a47: mov eax, dword ptr [ebp + esi*8 - 0x2e4] */
  eax = R32((uint32_t)(ebp + esi*8 + 0xfffffd1cu));
/* 7d7a4e: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d7a50: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 7d7a52: je 0x7d7a59 */
  if (zf) goto L_7d7a59;
L_7d7a54: /* 7d7a54: mov al, byte ptr [ebp + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 7d7a57: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
L_7d7a59: /* 7d7a59: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d7a5a: jmp 0x7d7a07 */
  goto L_7d7a07;
L_7d7a5c: /* 7d7a5c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7a5d: xor ebx, ebx */
  ebx = 0;
/* 7d7a5f: jmp 0x7d7a00 */
  goto L_7d7a00;
L_7d7a61: /* 7d7a61: xor eax, eax */
  eax = 0;
L_7d7a63: /* 7d7a63: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a66: jge 0x7d7a79 */
  if ((sf == of)) goto L_7d7a79;
L_7d7a68: /* 7d7a68: mov dword ptr [ebp + eax*8 - 0x4e8], ebx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffb18u), ebx);
/* 7d7a6f: mov dword ptr [ebp + eax*8 - 0x4e4], ebx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffb1cu), ebx);
/* 7d7a76: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d7a77: jmp 0x7d7a63 */
  goto L_7d7a63;
L_7d7a79: /* 7d7a79: xor edi, edi */
  edi = 0;
/* 7d7a7b: jmp 0x7d7a80 */
  goto L_7d7a80;
L_7d7a80: /* 7d7a80: cmp edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a83: jge 0x7d7ae4 */
  if ((sf == of)) goto L_7d7ae4;
L_7d7a85: /* 7d7a85: xor esi, esi */
  esi = 0;
L_7d7a87: /* 7d7a87: cmp esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a8a: jge 0x7d7ae1 */
  if ((sf == of)) goto L_7d7ae1;
L_7d7a8c: /* 7d7a8c: mov eax, 1 */
  eax = 0x1u;
/* 7d7a91: xor edx, edx */
  edx = 0;
/* 7d7a93: mov ecx, esi */
  ecx = esi;
/* 7d7a95: call 0x99cc70 */
  esp -= 4; W32(esp, 0x7d7a9au); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 7d7a9a: mov ecx, dword ptr [ebp + edi*8 - 0x2e8] */
  ecx = R32((uint32_t)(ebp + edi*8 + 0xfffffd18u));
/* 7d7aa1: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7d7aa3: mov eax, dword ptr [ebp + edi*8 - 0x2e4] */
  eax = R32((uint32_t)(ebp + edi*8 + 0xfffffd1cu));
/* 7d7aaa: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d7aac: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 7d7aae: je 0x7d7ade */
  if (zf) goto L_7d7ade;
L_7d7ab0: /* 7d7ab0: mov edx, dword ptr [ebp + edi*8 - 0x4e8] */
  edx = R32((uint32_t)(ebp + edi*8 + 0xfffffb18u));
/* 7d7ab7: mov ecx, dword ptr [ebp + esi*8 - 0x2e8] */
  ecx = R32((uint32_t)(ebp + esi*8 + 0xfffffd18u));
/* 7d7abe: mov eax, dword ptr [ebp + edi*8 - 0x4e4] */
  eax = R32((uint32_t)(ebp + edi*8 + 0xfffffb1cu));
/* 7d7ac5: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7d7ac7: mov dword ptr [ebp + edi*8 - 0x4e8], edx */
  W32((uint32_t)(ebp + edi*8 + 0xfffffb18u), edx);
/* 7d7ace: mov edx, dword ptr [ebp + esi*8 - 0x2e4] */
  edx = R32((uint32_t)(ebp + esi*8 + 0xfffffd1cu));
/* 7d7ad5: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7d7ad7: mov dword ptr [ebp + edi*8 - 0x4e4], eax */
  W32((uint32_t)(ebp + edi*8 + 0xfffffb1cu), eax);
L_7d7ade: /* 7d7ade: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7adf: jmp 0x7d7a87 */
  goto L_7d7a87;
L_7d7ae1: /* 7d7ae1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d7ae2: jmp 0x7d7a80 */
  goto L_7d7a80;
L_7d7ae4: /* 7d7ae4: xor eax, eax */
  eax = 0;
L_7d7ae6: /* 7d7ae6: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7ae9: jge 0x7d7b0a */
  if ((sf == of)) goto L_7d7b0a;
L_7d7aeb: /* 7d7aeb: mov ecx, dword ptr [ebp + eax*8 - 0x4e8] */
  ecx = R32((uint32_t)(ebp + eax*8 + 0xfffffb18u));
/* 7d7af2: mov edx, dword ptr [ebp + eax*8 - 0x4e4] */
  edx = R32((uint32_t)(ebp + eax*8 + 0xfffffb1cu));
/* 7d7af9: mov dword ptr [ebp + eax*8 - 0x2e8], ecx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffd18u), ecx);
/* 7d7b00: mov dword ptr [ebp + eax*8 - 0x2e4], edx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffd1cu), edx);
/* 7d7b07: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d7b08: jmp 0x7d7ae6 */
  goto L_7d7ae6;
L_7d7b0a: /* 7d7b0a: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 7d7b0d: jmp 0x7d79f0 */
  goto L_7d79f0;
L_7d7b12: /* 7d7b12: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7b15: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7d7b1b: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7d7b1e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7b20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7b21: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d7b28: call dword ptr [edx + 0xe8] */
  { uint32_t t = R32((uint32_t)(edx + 0xe8u)); esp -= 4; W32(esp, 0x7d7b2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7b2e: mov cx, word ptr [0xb81b4c] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xb81b4cu))) & 0xffffu);
/* 7d7b35: mov dx, word ptr [0xb81b50] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xb81b50u))) & 0xffffu);
/* 7d7b3c: mov word ptr [ebp - 0xee8], cx */
  W16((uint32_t)(ebp + 0xfffff118u), (ecx & 0xffffu));
/* 7d7b43: xor eax, eax */
  eax = 0;
/* 7d7b45: mov ecx, 0x1ff */
  ecx = 0x1ffu;
/* 7d7b4a: lea edi, [ebp - 0xee6] */
  edi = (uint32_t)(ebp + 0xfffff11au);
/* 7d7b50: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 7d7b52: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 7d7b54: mov word ptr [ebp - 0x6e8], dx */
  W16((uint32_t)(ebp + 0xfffff918u), (edx & 0xffffu));
/* 7d7b5b: xor eax, eax */
  eax = 0;
/* 7d7b5d: mov ecx, 0x7f */
  ecx = 0x7fu;
/* 7d7b62: lea edi, [ebp - 0x6e6] */
  edi = (uint32_t)(ebp + 0xfffff91au);
/* 7d7b68: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 7d7b6a: push 0xb81b54 */
  { uint32_t v = 0xb81b54u; esp -= 4; W32(esp, v); }
/* 7d7b6f: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 7d7b75: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 7d7b77: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7d7b7du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7d7b7d: mov ebx, dword ptr [0xcfa914] */
  ebx = R32((uint32_t)(0xcfa914u));
/* 7d7b83: mov byte ptr [ebp - 4], 0x22 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x22u);
/* 7d7b87: xor edi, edi */
  edi = 0;
/* 7d7b89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d7b90: /* 7d7b90: cmp edi, dword ptr [ebp - 0xa8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7b96: jge 0x7d7bf7 */
  if ((sf == of)) goto L_7d7bf7;
L_7d7b98: /* 7d7b98: lea eax, [ebp - 0xee8] */
  eax = (uint32_t)(ebp + 0xfffff118u);
/* 7d7b9e: push 0xadadb0 */
  { uint32_t v = 0xadadb0u; esp -= 4; W32(esp, v); }
/* 7d7ba3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7ba4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7ba6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7ba6: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 7d7bac: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 7d7baf: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7d7bb2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7bb5: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d7bb7: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7bbdu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7bbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7bbe: lea edx, [ebp - 0xee8] */
  edx = (uint32_t)(ebp + 0xfffff118u);
/* 7d7bc4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7bc5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7bc7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7bc7: mov eax, dword ptr [ebp - 0xac] */
  eax = R32((uint32_t)(ebp + 0xffffff54u));
/* 7d7bcd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7bd0: lea ecx, [esi + eax] */
  ecx = (uint32_t)(esi + eax);
/* 7d7bd3: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7bd9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7bd9: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7d7bde: lea ecx, [ebp - 0x6e8] */
  ecx = (uint32_t)(ebp + 0xfffff918u);
/* 7d7be4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d7be5: push 0xadadb4 */
  { uint32_t v = 0xadadb4u; esp -= 4; W32(esp, v); }
/* 7d7bea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7beb: call dword ptr [0xcfa910] */
  esp -= 4; W32(esp, 0x7d7bf1u); SPILL(); f_4e2e73(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0PAGH@Z */ RELOAD();
/* 7d7bf1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7bf4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d7bf5: jmp 0x7d7b90 */
  goto L_7d7b90;
L_7d7bf7: /* 7d7bf7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7bfa: mov ecx, dword ptr [edx + 0x108] */
  ecx = R32((uint32_t)(edx + 0x108u));
/* 7d7c00: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7c02: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x7d7c08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7c08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c0a: je 0x7d7da7 */
  if (zf) goto L_7d7da7;
L_7d7c10: /* 7d7c10: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7d7c13: mov eax, dword ptr [ecx + 0x508] */
  eax = R32((uint32_t)(ecx + 0x508u));
/* 7d7c19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c1b: jne 0x7d7da7 */
  if (!zf) goto L_7d7da7;
L_7d7c21: /* 7d7c21: cmp word ptr [ebp - 0x6e8], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffff918u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7c29: mov ebx, dword ptr [0xcfa7b8] */
  ebx = R32((uint32_t)(0xcfa7b8u));
/* 7d7c2f: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 7d7c32: je 0x7d7c56 */
  if (zf) goto L_7d7c56;
L_7d7c34: /* 7d7c34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7c35: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7c37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c39: lea edx, [ebp - 0x6e8] */
  edx = (uint32_t)(ebp + 0xfffff918u);
/* 7d7c3f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7c40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c42: push 0xb5e3b8 */
  { uint32_t v = 0xb5e3b8u; esp -= 4; W32(esp, v); }
/* 7d7c47: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7c49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7c49: mov esi, eax */
  esi = eax;
/* 7d7c4b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7c4e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c50: jne 0x7d7ce3 */
  if (!zf) goto L_7d7ce3;
L_7d7c56: /* 7d7c56: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7d7c59: add esi, 0x4f0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4f0u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d7c5f: mov ecx, esi */
  ecx = esi;
/* 7d7c61: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7d7c67u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7d7c67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7d7c69: jle 0x7d7c8b */
  if ((zf || sf != of)) goto L_7d7c8b;
L_7d7c6b: /* 7d7c6b: mov ecx, esi */
  ecx = esi;
/* 7d7c6d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7c73u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7c73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7c74: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7c76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7c79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c7b: push 0xb5e3b8 */
  { uint32_t v = 0xb5e3b8u; esp -= 4; W32(esp, v); }
/* 7d7c80: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7c82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7c82: mov esi, eax */
  esi = eax;
/* 7d7c84: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7c87: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c89: jne 0x7d7ce3 */
  if (!zf) goto L_7d7ce3;
L_7d7c8b: /* 7d7c8b: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7c8e: mov ecx, dword ptr [esi + 0x108] */
  ecx = R32((uint32_t)(esi + 0x108u));
/* 7d7c94: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d7c9au); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d7c9a: mov ecx, eax */
  ecx = eax;
/* 7d7c9c: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d7ca2u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d7ca2: push 0xadadc0 */
  { uint32_t v = 0xadadc0u; esp -= 4; W32(esp, v); }
/* 7d7ca7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7ca8: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7d7caeu); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7d7cae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7cb1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7cb3: je 0x7d7cde */
  if (zf) goto L_7d7cde;
L_7d7cb5: /* 7d7cb5: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7d7cb8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7cba: mov eax, 0xadadcc */
  eax = 0xadadccu;
/* 7d7cbf: jne 0x7d7cc6 */
  if (!zf) goto L_7d7cc6;
L_7d7cc1: /* 7d7cc1: mov eax, 0xadae08 */
  eax = 0xadae08u;
L_7d7cc6: /* 7d7cc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7cc7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7cc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7ccb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7ccc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7cce: push 0xb5e3b8 */
  { uint32_t v = 0xb5e3b8u; esp -= 4; W32(esp, v); }
/* 7d7cd3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7cd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7cd5: mov esi, eax */
  esi = eax;
/* 7d7cd7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7cda: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7cdc: jne 0x7d7ce3 */
  if (!zf) goto L_7d7ce3;
L_7d7cde: /* 7d7cde: mov esi, 0xb5e3b8 */
  esi = 0xb5e3b8u;
L_7d7ce3: /* 7d7ce3: mov ecx, esi */
  ecx = esi;
/* 7d7ce5: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d7cebu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d7ceb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7cec: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d7cf1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7cf3: push 0xadae50 */
  { uint32_t v = 0xadae50u; esp -= 4; W32(esp, v); }
/* 7d7cf8: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 7d7cfd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d7cfe: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7d7d04u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7d7d04: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7d07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d13: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d17: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7d1a: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7d7d21: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7d7d28: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7d7d2f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7d7d35u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7d7d35: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7d37: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d7d3a: mov edx, esp */
  edx = esp;
/* 7d7d3c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7d7d3e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d7d41: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7d7d44: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7d7d47: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7d7d4a: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d7d4d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d7d50: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d7d53: mov ecx, esp */
  ecx = esp;
/* 7d7d55: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7d7d57: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d7d5a: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7d7d5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d7d5e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7d7d61: mov ecx, esp */
  ecx = esp;
/* 7d7d63: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7d7d66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d68: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d7d6eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d7d6e: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7d71: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7d77: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7d79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d7d7a: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x7d7d80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7d80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7d82: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 7d7d85: mov dword ptr [edi + 0x508], eax */
  W32((uint32_t)(edi + 0x508u), eax);
/* 7d7d8b: jne 0x7d7dad */
  if (!zf) goto L_7d7dad;
L_7d7d8d: /* 7d7d8d: push 0x6c9 */
  { uint32_t v = 0x6c9u; esp -= 4; W32(esp, v); }
/* 7d7d92: push 0xadae78 */
  { uint32_t v = 0xadae78u; esp -= 4; W32(esp, v); }
/* 7d7d97: push 0xadae84 */
  { uint32_t v = 0xadae84u; esp -= 4; W32(esp, v); }
/* 7d7d9c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7d7da2u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7d7da2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7da5: jmp 0x7d7dad */
  goto L_7d7dad;
L_7d7da7: /* 7d7da7: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7daa: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
L_7d7dad: /* 7d7dad: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d7db0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7db2: mov dword ptr [ebp - 4], 0x21 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7d7db9: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7d7dbd: je 0x7d7dd7 */
  if (zf) goto L_7d7dd7;
L_7d7dbf: /* 7d7dbf: push 0xadaea0 */
  { uint32_t v = 0xadaea0u; esp -= 4; W32(esp, v); }
/* 7d7dc4: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d7dca: call 0x6c991c */
  esp -= 4; W32(esp, 0x7d7dcfu); SPILL(); f_6c991c(); if (g_unwind) return; RELOAD();
/* 7d7dcf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7dd1: je 0x7d7e8a */
  if (zf) goto L_7d7e8a;
L_7d7dd7: /* 7d7dd7: mov eax, dword ptr [ebx + 0x110] */
  eax = R32((uint32_t)(ebx + 0x110u));
/* 7d7ddd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7ddf: je 0x7d7e1f */
  if (zf) goto L_7d7e1f;
L_7d7de1: /* 7d7de1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d7de4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7de6: mov byte ptr [ebp - 4], 0x25 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x25u);
/* 7d7dea: je 0x7d7e04 */
  if (zf) goto L_7d7e04;
L_7d7dec: /* 7d7dec: push 0x6d4 */
  { uint32_t v = 0x6d4u; esp -= 4; W32(esp, v); }
/* 7d7df1: push 0xadaeb0 */
  { uint32_t v = 0xadaeb0u; esp -= 4; W32(esp, v); }
/* 7d7df6: push 0xadaebc */
  { uint32_t v = 0xadaebcu; esp -= 4; W32(esp, v); }
/* 7d7dfb: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7d7e01u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7d7e01: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7e04: /* 7d7e04: mov ecx, dword ptr [ebx + 0x110] */
  ecx = R32((uint32_t)(ebx + 0x110u));
/* 7d7e0a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7e0c: je 0x7d7e15 */
  if (zf) goto L_7d7e15;
L_7d7e0e: /* 7d7e0e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7e10: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7e12: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7d7e15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d7e15: /* 7d7e15: mov dword ptr [ebx + 0x110], 0 */
  W32((uint32_t)(ebx + 0x110u), 0x0u);
L_7d7e1f: /* 7d7e1f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e22: mov dword ptr [ebp - 4], 0x24 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7d7e29: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7d7e2fu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7d7e2f: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7e35: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7e37: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7e3b: mov byte ptr [ebp - 4], 0x27 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x27u);
/* 7d7e3f: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x7d7e45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7e45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7e47: jne 0x7d7e7d */
  if (!zf) goto L_7d7e7d;
L_7d7e49: /* 7d7e49: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e4c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7e52u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7e52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7e54: push 0xadaed0 */
  { uint32_t v = 0xadaed0u; esp -= 4; W32(esp, v); }
/* 7d7e59: push 0xadaee0 */
  { uint32_t v = 0xadaee0u; esp -= 4; W32(esp, v); }
/* 7d7e5e: mov esi, eax */
  esi = eax;
/* 7d7e60: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x7d7e66u); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 7d7e66: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7d7e6c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7e6e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7e71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d7e72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7e73: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7e74: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7d7e7au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7d7e7a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7e7d: /* 7d7e7d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e80: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7d7e84: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d7e8au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7d7e8a: /* 7d7e8a: mov byte ptr [edi + 0x448], 2 */
  W8((uint32_t)(edi + 0x448u), 0x2u);
/* 7d7e91: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d7e94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7e96: mov dword ptr [ebp - 4], 0x21 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7d7e9d: je 0x7d7f00 */
  if (zf) goto L_7d7f00;
L_7d7e9f: /* 7d7e9f: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7d7ea2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7ea4: je 0x7d7f00 */
  if (zf) goto L_7d7f00;
L_7d7ea6: /* 7d7ea6: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d7ea9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7eab: mov eax, dword ptr [ecx + 0x70] */
  eax = R32((uint32_t)(ecx + 0x70u));
/* 7d7eae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7eb0: je 0x7d7f00 */
  if (zf) goto L_7d7f00;
L_7d7eb2: /* 7d7eb2: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d7eb5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7eb7: je 0x7d7ef2 */
  if (zf) goto L_7d7ef2;
L_7d7eb9: /* 7d7eb9: mov byte ptr [edi + 0x448], 2 */
  W8((uint32_t)(edi + 0x448u), 0x2u);
/* 7d7ec0: jmp 0x7d7f00 */
  goto L_7d7f00;
L_7d7ef2: /* 7d7ef2: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7d7ef5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7ef7: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7d7efa: mov byte ptr [edi + 0x448], dl */
  W8((uint32_t)(edi + 0x448u), (edx & 0xffu));
L_7d7f00: /* 7d7f00: mov ecx, dword ptr [0xce6f04] */
  ecx = R32((uint32_t)(0xce6f04u));
/* 7d7f06: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7f08: je 0x7d7f0f */
  if (zf) goto L_7d7f0f;
L_7d7f0a: /* 7d7f0a: call 0x6cbfa5 */
  esp -= 4; W32(esp, 0x7d7f0fu); SPILL(); f_6cbfa5(); if (g_unwind) return; RELOAD();
L_7d7f0f: /* 7d7f0f: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d7f15: mov dword ptr [eax + 0x104], 0 */
  W32((uint32_t)(eax + 0x104u), 0x0u);
/* 7d7f1f: test byte ptr [edi + 0x444], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x444u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7f26: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7d7f2a: jne 0x7d85d8 */
  if (!zf) goto L_7d85d8;
L_7d7f30: /* 7d7f30: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7f36: mov esi, dword ptr [0xcfa3a8] */
  esi = R32((uint32_t)(0xcfa3a8u));
/* 7d7f3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7f3e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d7f40u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f40: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d7f46: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7f48: mov edi, dword ptr [0xcfa3a4] */
  edi = R32((uint32_t)(0xcfa3a4u));
/* 7d7f4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7f4f: push 0xad5650 */
  { uint32_t v = 0xad5650u; esp -= 4; W32(esp, v); }
/* 7d7f54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7f55: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d7f57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f57: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d7f5d: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d7f60: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7f62: mov cl, byte ptr [eax + 0x44c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x44cu))) & 0xffu);
/* 7d7f68: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7f6b: test cl, 0x10 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7f6e: jne 0x7d7f83 */
  if (!zf) goto L_7d7f83;
L_7d7f70: /* 7d7f70: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7d7f76: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d7f78: push 0xadaf08 */
  { uint32_t v = 0xadaf08u; esp -= 4; W32(esp, v); }
/* 7d7f7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7f7e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d7f80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f80: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7f83: /* 7d7f83: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7d7f85: mov ecx, ebx */
  ecx = ebx;
/* 7d7f87: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7d7f8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f8d: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7d7f90: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d7f93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7f94: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x7d7f9au); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 7d7f9a: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7fa0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7fa3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7fa5: mov edi, eax */
  edi = eax;
/* 7d7fa7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d7fa9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7fa9: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d7faf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7fb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7fb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7fb3: push 0xadaf60 */
  { uint32_t v = 0xadaf60u; esp -= 4; W32(esp, v); }
/* 7d7fb8: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 7d7fbd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7fbe: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7d7fc4u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7d7fc4: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d7fca: xor esi, esi */
  esi = 0;
/* 7d7fcc: mov dword ptr [eax + 0x100], esi */
  W32((uint32_t)(eax + 0x100u), esi);
/* 7d7fd2: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7fd8: mov dword ptr [ecx + 0xd0], esi */
  W32((uint32_t)(ecx + 0xd0u), esi);
/* 7d7fde: mov dword ptr [ecx + 0xd4], esi */
  W32((uint32_t)(ecx + 0xd4u), esi);
/* 7d7fe4: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d7fea: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d7fed: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d7fef: mov dword ptr [eax + 0x3ac], esi */
  W32((uint32_t)(eax + 0x3acu), esi);
/* 7d7ff5: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7ffb: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d7ffe: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7d8000: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8003: call 0x6c34d1 */
  esp -= 4; W32(esp, 0x7d8008u); SPILL(); f_6c34d1(); if (g_unwind) return; RELOAD();
/* 7d8008: or dword ptr [eax + 0x80], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x80u), r);
  }
/* 7d8012: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8018: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d801a: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x7d8020u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8020: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8022: jne 0x7d8072 */
  if (!zf) goto L_7d8072;
L_7d8024: /* 7d8024: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d802a: cmp esi, dword ptr [ecx + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d802d: jge 0x7d8072 */
  if ((sf == of)) goto L_7d8072;
L_7d802f: /* 7d802f: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8032: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d8035: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8037: je 0x7d806f */
  if (zf) goto L_7d806f;
L_7d8039: /* 7d8039: mov edx, dword ptr [eax + 0x80] */
  edx = R32((uint32_t)(eax + 0x80u));
/* 7d803f: test dl, 0x40 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8042: jne 0x7d8057 */
  if (!zf) goto L_7d8057;
L_7d8044: /* 7d8044: test dh, 1 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8047: jne 0x7d8057 */
  if (!zf) goto L_7d8057;
L_7d8049: /* 7d8049: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d804b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d804d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d804e: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x7d8054u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8054: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d8055: jmp 0x7d8024 */
  goto L_7d8024;
L_7d8057: /* 7d8057: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 7d805d: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 7d8063: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 7d8069: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
L_7d806f: /* 7d806f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d8070: jmp 0x7d8024 */
  goto L_7d8024;
L_7d8072: /* 7d8072: xor esi, esi */
  esi = 0;
L_7d8074: /* 7d8074: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d807a: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d807d: jge 0x7d80d5 */
  if ((sf == of)) goto L_7d80d5;
L_7d807f: /* 7d807f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8082: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d8085: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8087: je 0x7d80d2 */
  if (zf) goto L_7d80d2;
L_7d8089: /* 7d8089: mov dword ptr [eax + 0xd4], 0 */
  W32((uint32_t)(eax + 0xd4u), 0x0u);
/* 7d8093: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8099: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d809c: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d809f: add ecx, 0x110 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d80a5: xor eax, eax */
  eax = 0;
L_7d80a7: /* 7d80a7: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d80aa: jge 0x7d80af */
  if ((sf == of)) goto L_7d80af;
L_7d80ac: /* 7d80ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d80ad: jmp 0x7d80a7 */
  goto L_7d80a7;
L_7d80af: /* 7d80af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d80b1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d80b3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7d80b9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7d80b9: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d80bf: mov edi, dword ptr [eax + 0x2c] */
  edi = R32((uint32_t)(eax + 0x2cu));
/* 7d80c2: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7d80c4: call 0x6c34d1 */
  esp -= 4; W32(esp, 0x7d80c9u); SPILL(); f_6c34d1(); if (g_unwind) return; RELOAD();
/* 7d80c9: mov ecx, dword ptr [edi + esi*4] */
  ecx = R32((uint32_t)(edi + esi*4));
/* 7d80cc: mov dword ptr [ecx + 0x16c], eax */
  W32((uint32_t)(ecx + 0x16cu), eax);
L_7d80d2: /* 7d80d2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d80d3: jmp 0x7d8074 */
  goto L_7d8074;
L_7d80d5: /* 7d80d5: xor esi, esi */
  esi = 0;
/* 7d80d7: jmp 0x7d80e0 */
  goto L_7d80e0;
L_7d80e0: /* 7d80e0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d80e6: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d80e9: jge 0x7d80fd */
  if ((sf == of)) goto L_7d80fd;
L_7d80eb: /* 7d80eb: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d80ee: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d80f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d80f3: je 0x7d80fa */
  if (zf) goto L_7d80fa;
L_7d80f5: /* 7d80f5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d80f7: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x7d80fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d80fa: /* 7d80fa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d80fb: jmp 0x7d80e0 */
  goto L_7d80e0;
L_7d80fd: /* 7d80fd: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7d8100: mov edx, dword ptr [esi + 0x444] */
  edx = R32((uint32_t)(esi + 0x444u));
/* 7d8106: mov ecx, dword ptr [esi + 0x44c] */
  ecx = R32((uint32_t)(esi + 0x44cu));
/* 7d810c: mov eax, 4 */
  eax = 0x4u;
/* 7d8111: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7d8113: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 7d8115: mov eax, dword ptr [esi + 0x508] */
  eax = R32((uint32_t)(esi + 0x508u));
/* 7d811b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d811d: mov dword ptr [esi + 0x444], edx */
  W32((uint32_t)(esi + 0x444u), edx);
/* 7d8123: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 7d8129: je 0x7d8162 */
  if (zf) goto L_7d8162;
L_7d812b: /* 7d812b: lea ecx, [ebp - 0xee8] */
  ecx = (uint32_t)(ebp + 0xfffff118u);
/* 7d8131: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8132: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8135: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7d813bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7d813b: mov ecx, dword ptr [esi + 0x508] */
  ecx = R32((uint32_t)(esi + 0x508u));
/* 7d8141: lea edx, [ebp - 0xe8] */
  edx = (uint32_t)(ebp + 0xffffff18u);
/* 7d8147: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8148: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7d814b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d814c: mov byte ptr [ebp - 4], 0x2a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2au);
/* 7d8150: call 0x6c6a87 */
  esp -= 4; W32(esp, 0x7d8155u); SPILL(); f_6c6a87(); if (g_unwind) return; RELOAD();
/* 7d8155: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8158: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7d815c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d8162u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7d8162: /* 7d8162: xor edi, edi */
  edi = 0;
L_7d8164: /* 7d8164: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d816a: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d816d: jge 0x7d81bc */
  if ((sf == of)) goto L_7d81bc;
L_7d816f: /* 7d816f: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d8172: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7d8175: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8177: je 0x7d81b9 */
  if (zf) goto L_7d81b9;
L_7d8179: /* 7d8179: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8180: jne 0x7d81b9 */
  if (!zf) goto L_7d81b9;
L_7d8182: /* 7d8182: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8183: mov ecx, esp */
  ecx = esp;
/* 7d8185: push 0x163 */
  { uint32_t v = 0x163u; esp -= 4; W32(esp, v); }
/* 7d818a: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d8190u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d8190: mov ecx, esi */
  ecx = esi;
/* 7d8192: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7d8198u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7d8198: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d819a: je 0x7d81b9 */
  if (zf) goto L_7d81b9;
L_7d819c: /* 7d819c: mov edx, dword ptr [0xb7e33c] */
  edx = R32((uint32_t)(0xb7e33cu));
/* 7d81a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d81a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d81a5: mov ecx, esi */
  ecx = esi;
/* 7d81a7: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d81adu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d81ad: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d81af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d81b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d81b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d81b4: mov ecx, esi */
  ecx = esi;
/* 7d81b6: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d81b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d81b9: /* 7d81b9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d81ba: jmp 0x7d8164 */
  goto L_7d8164;
L_7d81bc: /* 7d81bc: xor edi, edi */
  edi = 0;
/* 7d81be: mov edi, edi */
  edi = edi;
L_7d81c0: /* 7d81c0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d81c6: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d81c9: jge 0x7d8218 */
  if ((sf == of)) goto L_7d8218;
L_7d81cb: /* 7d81cb: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d81ce: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d81d1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d81d3: je 0x7d8215 */
  if (zf) goto L_7d8215;
L_7d81d5: /* 7d81d5: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d81dc: jne 0x7d8215 */
  if (!zf) goto L_7d8215;
L_7d81de: /* 7d81de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d81df: mov ecx, esp */
  ecx = esp;
/* 7d81e1: push 0x164 */
  { uint32_t v = 0x164u; esp -= 4; W32(esp, v); }
/* 7d81e6: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d81ecu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d81ec: mov ecx, esi */
  ecx = esi;
/* 7d81ee: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7d81f4u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7d81f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d81f6: je 0x7d8215 */
  if (zf) goto L_7d8215;
L_7d81f8: /* 7d81f8: mov ecx, dword ptr [0xb7e340] */
  ecx = R32((uint32_t)(0xb7e340u));
/* 7d81fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8200: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8201: mov ecx, esi */
  ecx = esi;
/* 7d8203: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d8209u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d8209: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d820b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d820d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d820f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8210: mov ecx, esi */
  ecx = esi;
/* 7d8212: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d8215u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8215: /* 7d8215: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8216: jmp 0x7d81c0 */
  goto L_7d81c0;
L_7d8218: /* 7d8218: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d821b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7d8221u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7d8221: mov byte ptr [ebp - 4], 0x2b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2bu);
/* 7d8225: xor edi, edi */
  edi = 0;
/* 7d8227: jmp 0x7d8230 */
  goto L_7d8230;
L_7d8230: /* 7d8230: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8236: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8239: jge 0x7d8291 */
  if ((sf == of)) goto L_7d8291;
L_7d823b: /* 7d823b: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d823e: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7d8241: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8243: je 0x7d825a */
  if (zf) goto L_7d825a;
L_7d8245: /* 7d8245: test byte ptr [ecx + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d824c: jne 0x7d825a */
  if (!zf) goto L_7d825a;
L_7d824e: /* 7d824e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d8250: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8252: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8254: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0x7d825au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d825a: /* 7d825a: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8260: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d8263: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7d8266: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8268: je 0x7d828e */
  if (zf) goto L_7d828e;
L_7d826a: /* 7d826a: push 0xb6dcb8 */
  { uint32_t v = 0xb6dcb8u; esp -= 4; W32(esp, v); }
/* 7d826f: mov ecx, esi */
  ecx = esi;
/* 7d8271: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8277u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8277: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8279: je 0x7d828e */
  if (zf) goto L_7d828e;
L_7d827b: /* 7d827b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d827d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d827f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d8282: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8288u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8288: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7d828b: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
L_7d828e: /* 7d828e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d828f: jmp 0x7d8230 */
  goto L_7d8230;
L_7d8291: /* 7d8291: xor esi, esi */
  esi = 0;
L_7d8293: /* 7d8293: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8299: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d829c: jge 0x7d82bd */
  if ((sf == of)) goto L_7d82bd;
L_7d829e: /* 7d829e: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d82a1: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d82a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82a6: je 0x7d82ba */
  if (zf) goto L_7d82ba;
L_7d82a8: /* 7d82a8: test byte ptr [ecx + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82af: jne 0x7d82ba */
  if (!zf) goto L_7d82ba;
L_7d82b1: /* 7d82b1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d82b3: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7d82b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d82b7: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d82bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d82ba: /* 7d82ba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d82bb: jmp 0x7d8293 */
  goto L_7d8293;
L_7d82bd: /* 7d82bd: xor edi, edi */
  edi = 0;
/* 7d82bf: nop  */
L_7d82c0: /* 7d82c0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d82c6: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d82c9: jge 0x7d8330 */
  if ((sf == of)) goto L_7d8330;
L_7d82cb: /* 7d82cb: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d82ce: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7d82d1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82d3: je 0x7d832d */
  if (zf) goto L_7d832d;
L_7d82d5: /* 7d82d5: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82dc: jne 0x7d832d */
  if (!zf) goto L_7d832d;
L_7d82de: /* 7d82de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d82df: mov ecx, esp */
  ecx = esp;
/* 7d82e1: push 0x165 */
  { uint32_t v = 0x165u; esp -= 4; W32(esp, v); }
/* 7d82e6: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d82ecu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d82ec: mov ecx, esi */
  ecx = esi;
/* 7d82ee: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7d82f4u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7d82f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82f6: je 0x7d8315 */
  if (zf) goto L_7d8315;
L_7d82f8: /* 7d82f8: mov edx, dword ptr [0xb7e344] */
  edx = R32((uint32_t)(0xb7e344u));
/* 7d82fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8300: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8301: mov ecx, esi */
  ecx = esi;
/* 7d8303: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d8309u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d8309: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d830b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d830d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d830f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8310: mov ecx, esi */
  ecx = esi;
/* 7d8312: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d8315u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8315: /* 7d8315: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d831b: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d831e: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 7d8321: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8323: je 0x7d832d */
  if (zf) goto L_7d832d;
L_7d8325: /* 7d8325: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d8327: call dword ptr [edx + 0x110] */
  { uint32_t t = R32((uint32_t)(edx + 0x110u)); esp -= 4; W32(esp, 0x7d832du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d832d: /* 7d832d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d832e: jmp 0x7d82c0 */
  goto L_7d82c0;
L_7d8330: /* 7d8330: xor edi, edi */
  edi = 0;
L_7d8332: /* 7d8332: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8338: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d833b: jge 0x7d8370 */
  if ((sf == of)) goto L_7d8370;
L_7d833d: /* 7d833d: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8340: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d8343: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8345: je 0x7d836d */
  if (zf) goto L_7d836d;
L_7d8347: /* 7d8347: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d834e: jne 0x7d836d */
  if (!zf) goto L_7d836d;
L_7d8350: /* 7d8350: mov ecx, dword ptr [0xb7e3f4] */
  ecx = R32((uint32_t)(0xb7e3f4u));
/* 7d8356: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8358: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8359: mov ecx, esi */
  ecx = esi;
/* 7d835b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d8361u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d8361: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8363: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8365: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8367: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8368: mov ecx, esi */
  ecx = esi;
/* 7d836a: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d836du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d836d: /* 7d836d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d836e: jmp 0x7d8332 */
  goto L_7d8332;
L_7d8370: /* 7d8370: xor edi, edi */
  edi = 0;
L_7d8372: /* 7d8372: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8378: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d837b: jge 0x7d83b0 */
  if ((sf == of)) goto L_7d83b0;
L_7d837d: /* 7d837d: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8380: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d8383: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8385: je 0x7d83ad */
  if (zf) goto L_7d83ad;
L_7d8387: /* 7d8387: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d838e: jne 0x7d83ad */
  if (!zf) goto L_7d83ad;
L_7d8390: /* 7d8390: mov ecx, dword ptr [0xb7e3b8] */
  ecx = R32((uint32_t)(0xb7e3b8u));
/* 7d8396: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8398: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8399: mov ecx, esi */
  ecx = esi;
/* 7d839b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d83a1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d83a1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d83a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d83a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d83a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d83a8: mov ecx, esi */
  ecx = esi;
/* 7d83aa: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d83adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d83ad: /* 7d83ad: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d83ae: jmp 0x7d8372 */
  goto L_7d8372;
L_7d83b0: /* 7d83b0: xor esi, esi */
  esi = 0;
/* 7d83b2: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d83c0: /* 7d83c0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d83c6: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d83c9: jge 0x7d850a */
  if ((sf == of)) goto L_7d850a;
L_7d83cf: /* 7d83cf: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d83d2: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d83d6: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d83dc: /* 7d83dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d83de: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7d83e1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d83e7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d83e7: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d83ed: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d83f0: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7d83f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d83f4: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d83f7: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d83fd: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7d8403u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8403: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8405: je 0x7d84d6 */
  if (zf) goto L_7d84d6;
L_7d840b: /* 7d840b: xor edi, edi */
  edi = 0;
/* 7d840d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d8410: /* 7d8410: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8416: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8419: jge 0x7d8504 */
  if ((sf == of)) goto L_7d8504;
L_7d841f: /* 7d841f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8422: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7d8425: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8427: je 0x7d84d0 */
  if (zf) goto L_7d84d0;
L_7d842d: /* 7d842d: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* 7d8430: add edx, 0x1f8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7d8436: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8437: add ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d843d: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7d8443u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8443: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8445: jne 0x7d847c */
  if (!zf) goto L_7d847c;
L_7d8447: /* 7d8447: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d844d: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8450: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 7d8453: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 7d8456: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8457: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x7d845du); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 7d845d: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8463: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8466: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d8469: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d846f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8470: mov ecx, eax */
  ecx = eax;
/* 7d8472: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7d8478u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8478: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d847a: je 0x7d84d0 */
  if (zf) goto L_7d84d0;
L_7d847c: /* 7d847c: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8482: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d8485: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d8488: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d848a: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 7d848d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d848f: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 7d8492: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d8495: mov ecx, esp */
  ecx = esp;
/* 7d8497: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7d849e: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d84a1: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7d84a3: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7d84aa: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d84ad: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7d84b0: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 7d84b7: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d84ba: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 7d84bd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7d84c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d84c1: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7d84c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d84c7: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d84ca: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d84cb: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d84d0: /* 7d84d0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d84d1: jmp 0x7d8410 */
  goto L_7d8410;
L_7d84d6: /* 7d84d6: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d84dc: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d84df: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d84e2: test byte ptr [ecx + 0x88], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84e9: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d84eb: /* 7d84eb: test byte ptr [ecx + 0x87], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x87u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84f2: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d84f4: /* 7d84f4: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 7d84f7: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84f9: je 0x7d84ff */
  if (zf) goto L_7d84ff;
L_7d84fb: /* 7d84fb: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d84fd: jne 0x7d8504 */
  if (!zf) goto L_7d8504;
L_7d84ff: /* 7d84ff: call 0x6c5754 */
  esp -= 4; W32(esp, 0x7d8504u); SPILL(); f_6c5754(); if (g_unwind) return; RELOAD();
L_7d8504: /* 7d8504: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d8505: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d850a: /* 7d850a: xor ecx, ecx */
  ecx = 0;
/* 7d850c: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 7d850f: nop  */
L_7d8510: /* 7d8510: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8516: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8519: jge 0x7d85bd */
  if ((sf == of)) goto L_7d85bd;
L_7d851f: /* 7d851f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8522: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 7d8525: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8527: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d852d: /* 7d852d: cmp byte ptr [edi + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8531: jne 0x7d85af */
  if (!zf) goto L_7d85af;
L_7d8533: /* 7d8533: mov ecx, dword ptr [edi + 0x30c] */
  ecx = R32((uint32_t)(edi + 0x30cu));
/* 7d8539: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d853b: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d853d: /* 7d853d: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 7d8542: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8548u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8548: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d854a: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d854c: /* 7d854c: mov esi, dword ptr [edi + 0x30c] */
  esi = R32((uint32_t)(edi + 0x30cu));
/* 7d8552: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8554: je 0x7d8567 */
  if (zf) goto L_7d8567;
L_7d8556: /* 7d8556: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 7d855b: mov ecx, esi */
  ecx = esi;
/* 7d855d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8563u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8563: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8565: jne 0x7d8569 */
  if (!zf) goto L_7d8569;
L_7d8567: /* 7d8567: xor esi, esi */
  esi = 0;
L_7d8569: /* 7d8569: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d856f: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8572: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d8574: cmp byte ptr [eax + 0x3f0], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3f0u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 7d857b: jae 0x7d858c */
  if (!cf) goto L_7d858c;
L_7d857d: /* 7d857d: test byte ptr [esi + 0x90], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8584: je 0x7d858c */
  if (zf) goto L_7d858c;
L_7d8586: /* 7d8586: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d8587: call 0x6c5ab0 */
  esp -= 4; W32(esp, 0x7d858cu); SPILL(); f_6c5ab0(); if (g_unwind) return; RELOAD();
L_7d858c: /* 7d858c: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8592: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d8595: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8597: cmp byte ptr [eax + 0x4c8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4c8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d859e: jne 0x7d85af */
  if (!zf) goto L_7d85af;
L_7d85a0: /* 7d85a0: test byte ptr [esi + 0x90], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d85a7: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d85a9: /* 7d85a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d85aa: call 0x6c5ab0 */
  esp -= 4; W32(esp, 0x7d85afu); SPILL(); f_6c5ab0(); if (g_unwind) return; RELOAD();
L_7d85af: /* 7d85af: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d85b2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d85b3: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7d85b6: mov ecx, eax */
  ecx = eax;
/* 7d85b8: jmp 0x7d8510 */
  goto L_7d8510;
L_7d85bd: /* 7d85bd: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7d85c0: and dword ptr [eax + 0x44c], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44cu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x44cu), r);
  }
/* 7d85c7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d85ca: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7d85ce: call 0x6cb014 */
  esp -= 4; W32(esp, 0x7d85d3u); SPILL(); f_6cb014(); if (g_unwind) return; RELOAD();
/* 7d85d3: jmp 0x7d8667 */
  goto L_7d8667;
L_7d85d8: /* 7d85d8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d85db: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 7d85e1: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d85e4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d85e6: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 7d85ec: mov ebx, dword ptr [0xcfa2c0] */
  ebx = R32((uint32_t)(0xcfa2c0u));
/* 7d85f2: fstp qword ptr [eax + 0xd0] */
  WF64((uint32_t)(eax + 0xd0u), ST0); FPOP();
/* 7d85f8: xor edi, edi */
  edi = 0;
/* 7d85fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7d8600: /* 7d8600: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8603: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 7d8609: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d860c: jge 0x7d8664 */
  if ((sf == of)) goto L_7d8664;
L_7d860e: /* 7d860e: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8611: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d8614: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8616: je 0x7d8631 */
  if (zf) goto L_7d8631;
L_7d8618: /* 7d8618: mov ecx, dword ptr [0xb7e550] */
  ecx = R32((uint32_t)(0xb7e550u));
/* 7d861e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8620: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8621: mov ecx, esi */
  ecx = esi;
/* 7d8623: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d8625u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8625: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8627: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8629: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d862b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d862c: mov ecx, esi */
  ecx = esi;
/* 7d862e: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d8631u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8631: /* 7d8631: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8632: jmp 0x7d8600 */
  goto L_7d8600;
L_7d8664: /* 7d8664: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
L_7d8667: /* 7d8667: mov dword ptr [ebp - 4], 0x21 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7d866e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8671: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 7d8675: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7d867bu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7d867b: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8681: mov esi, dword ptr [edx + 0x2c] */
  esi = R32((uint32_t)(edx + 0x2cu));
/* 7d8684: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8686: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8688: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d868b: mov byte ptr [ebp - 4], 0x2e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2eu);
/* 7d868f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8695u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8695: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d8697: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d869a: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d869d: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d86a3: mov esi, dword ptr [eax + 0x2c] */
  esi = R32((uint32_t)(eax + 0x2cu));
/* 7d86a6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d86a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d86aa: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d86ad: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d86b0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d86b6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d86b6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d86b8: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d86bb: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d86be: mov edi, 2 */
  edi = 0x2u;
L_7d86c3: /* 7d86c3: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d86c9: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d86cc: jge 0x7d8704 */
  if ((sf == of)) goto L_7d8704;
L_7d86ce: /* 7d86ce: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d86d1: lea esi, [eax + edi*4] */
  esi = (uint32_t)(eax + edi*4);
/* 7d86d4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7d86d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86d8: je 0x7d8701 */
  if (zf) goto L_7d8701;
L_7d86da: /* 7d86da: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86e1: je 0x7d8701 */
  if (zf) goto L_7d8701;
L_7d86e3: /* 7d86e3: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86ea: jne 0x7d8701 */
  if (!zf) goto L_7d8701;
L_7d86ec: /* 7d86ec: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d86ee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d86f0: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d86f3: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d86f9u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d86f9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d86fb: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d86fe: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d8701: /* 7d8701: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8702: jmp 0x7d86c3 */
  goto L_7d86c3;
L_7d8704: /* 7d8704: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d870a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d870d: mov dword ptr [eax + 0x108], ecx */
  W32((uint32_t)(eax + 0x108u), ecx);
/* 7d8713: mov edi, 2 */
  edi = 0x2u;
/* 7d8718: jmp 0x7d8720 */
  goto L_7d8720;
L_7d8720: /* 7d8720: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8726: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8729: jge 0x7d8762 */
  if ((sf == of)) goto L_7d8762;
L_7d872b: /* 7d872b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d872e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7d8731: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8733: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 7d8736: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d8738: /* 7d8738: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d873f: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d8741: /* 7d8741: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8748: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d874a: /* 7d874a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d874c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d874e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8751: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8757u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8757: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d8759: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d875c: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d875f: /* 7d875f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8760: jmp 0x7d8720 */
  goto L_7d8720;
L_7d8762: /* 7d8762: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8768: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d876b: mov dword ptr [eax + 0x104], ecx */
  W32((uint32_t)(eax + 0x104u), ecx);
/* 7d8771: mov edi, 2 */
  edi = 0x2u;
/* 7d8776: jmp 0x7d8780 */
  goto L_7d8780;
L_7d8780: /* 7d8780: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8786: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8789: jge 0x7d87b9 */
  if ((sf == of)) goto L_7d87b9;
L_7d878b: /* 7d878b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d878e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7d8791: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8793: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 7d8796: je 0x7d87b6 */
  if (zf) goto L_7d87b6;
L_7d8798: /* 7d8798: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d879f: jne 0x7d87b6 */
  if (!zf) goto L_7d87b6;
L_7d87a1: /* 7d87a1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d87a5: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d87a8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d87aeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d87ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d87b0: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d87b3: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d87b6: /* 7d87b6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d87b7: jmp 0x7d8780 */
  goto L_7d8780;
L_7d87b9: /* 7d87b9: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 7d87be: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d87c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d87c6: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d87c9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d87cb: je 0x7d87eb */
  if (zf) goto L_7d87eb;
L_7d87cd: /* 7d87cd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7d87d0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d87d2: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d87d7: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d87dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87de: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d87e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d87e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d87e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e8: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d87ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d87eb: /* 7d87eb: xor eax, eax */
  eax = 0;
/* 7d87ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d87f0: /* 7d87f0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d87f3: jge 0x7d87f8 */
  if ((sf == of)) goto L_7d87f8;
L_7d87f5: /* 7d87f5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d87f6: jmp 0x7d87f0 */
  goto L_7d87f0;
L_7d87f8: /* 7d87f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87fa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87fc: mov ecx, esi */
  ecx = esi;
/* 7d87fe: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7d8804u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7d8804: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d880a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d880d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d880f: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8813: mov ecx, esi */
  ecx = esi;
/* 7d8815: mov edi, eax */
  edi = eax;
/* 7d8817: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d881du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d881d: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 7d8823: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d8825: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8827: je 0x7d8843 */
  if (zf) goto L_7d8843;
L_7d8829: /* 7d8829: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d882b: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d8830: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d8835: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8837: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8839: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d883a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d883b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d883e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d883f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8840: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d8843u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8843: /* 7d8843: xor eax, eax */
  eax = 0;
L_7d8845: /* 7d8845: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8848: jge 0x7d885f */
  if ((sf == of)) goto L_7d885f;
L_7d884a: /* 7d884a: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8850: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8853: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d8856: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 7d8859: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d885c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d885d: jmp 0x7d8845 */
  goto L_7d8845;
L_7d885f: /* 7d885f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8862: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 7d8866: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x7d886bu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 7d886b: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d886e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8870: mov esi, 0x21 */
  esi = 0x21u;
/* 7d8875: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8878: mov byte ptr [ebp - 4], 0x30 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x30u);
/* 7d887c: je 0x7d892e */
  if (zf) goto L_7d892e;
L_7d8882: /* 7d8882: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8888: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d888a: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x7d8890u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8890: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8892: je 0x7d889c */
  if (zf) goto L_7d889c;
L_7d8894: /* 7d8894: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d889a: jmp 0x7d88a2 */
  goto L_7d88a2;
L_7d889c: /* 7d889c: mov eax, dword ptr [ebx + 0x10c] */
  eax = R32((uint32_t)(ebx + 0x10cu));
L_7d88a2: /* 7d88a2: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 7d88a5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d88ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d88ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d88ae: call 0x7ccae0 */
  esp -= 4; W32(esp, 0x7d88b3u); SPILL(); f_7ccae0(); if (g_unwind) return; RELOAD();
/* 7d88b3: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d88b9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88bb: je 0x7d88ce */
  if (zf) goto L_7d88ce;
L_7d88bd: /* 7d88bd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88bf: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7d88c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88c5: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88c8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88cb: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d88ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88ce: /* 7d88ce: xor edi, edi */
  edi = 0;
L_7d88d0: /* 7d88d0: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d88d3: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d88d6: jge 0x7d8929 */
  if ((sf == of)) goto L_7d8929;
L_7d88d8: /* 7d88d8: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d88db: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d88de: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 7d88e1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88e3: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7d88e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88e9: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 7d88ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88ee: je 0x7d88f6 */
  if (zf) goto L_7d88f6;
L_7d88f0: /* 7d88f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d88f3: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d88f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88f6: /* 7d88f6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d88f7: jmp 0x7d88d0 */
  goto L_7d88d0;
L_7d8929: /* 7d8929: mov esi, 0x21 */
  esi = 0x21u;
L_7d892e: /* 7d892e: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7d8931: movzx edx, byte ptr [edx + 0x448] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x448u)));
/* 7d8938: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d893e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8940: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8941: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8944: call dword ptr [eax + 0xdc] */
  { uint32_t t = R32((uint32_t)(eax + 0xdcu)); esp -= 4; W32(esp, 0x7d894au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d894a: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8951: lea ecx, [ebx + 0x114] */
  ecx = (uint32_t)(ebx + 0x114u);
/* 7d8957: mov byte ptr [ebp - 4], 0x32 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x32u);
/* 7d895b: call 0x6ca50b */
  esp -= 4; W32(esp, 0x7d8960u); SPILL(); f_6ca50b(); if (g_unwind) return; RELOAD();
/* 7d8960: mov ecx, dword ptr [0xcfa814] */
  ecx = R32((uint32_t)(0xcfa814u));
/* 7d8966: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8969: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d896c: je 0x7d8a28 */
  if (zf) goto L_7d8a28;
L_7d8972: /* 7d8972: push 0xadafc0 */
  { uint32_t v = 0xadafc0u; esp -= 4; W32(esp, v); }
/* 7d8977: push 0xadafcc */
  { uint32_t v = 0xadafccu; esp -= 4; W32(esp, v); }
/* 7d897c: push 0xadafd8 */
  { uint32_t v = 0xadafd8u; esp -= 4; W32(esp, v); }
/* 7d8981: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8987: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d898cu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d898c: push 0xadaff4 */
  { uint32_t v = 0xadaff4u; esp -= 4; W32(esp, v); }
/* 7d8991: push 0xadb000 */
  { uint32_t v = 0xadb000u; esp -= 4; W32(esp, v); }
/* 7d8996: push 0xadb00c */
  { uint32_t v = 0xadb00cu; esp -= 4; W32(esp, v); }
/* 7d899b: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89a1: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89a6u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89a6: push 0xadb028 */
  { uint32_t v = 0xadb028u; esp -= 4; W32(esp, v); }
/* 7d89ab: push 0xadb034 */
  { uint32_t v = 0xadb034u; esp -= 4; W32(esp, v); }
/* 7d89b0: push 0xadb040 */
  { uint32_t v = 0xadb040u; esp -= 4; W32(esp, v); }
/* 7d89b5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89bb: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89c0u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89c0: push 0xadb05c */
  { uint32_t v = 0xadb05cu; esp -= 4; W32(esp, v); }
/* 7d89c5: push 0xadb068 */
  { uint32_t v = 0xadb068u; esp -= 4; W32(esp, v); }
/* 7d89ca: push 0xadb074 */
  { uint32_t v = 0xadb074u; esp -= 4; W32(esp, v); }
/* 7d89cf: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89d5: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89dau); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89da: push 0xadb090 */
  { uint32_t v = 0xadb090u; esp -= 4; W32(esp, v); }
/* 7d89df: push 0xadb09c */
  { uint32_t v = 0xadb09cu; esp -= 4; W32(esp, v); }
/* 7d89e4: push 0xadb0a8 */
  { uint32_t v = 0xadb0a8u; esp -= 4; W32(esp, v); }
/* 7d89e9: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89ef: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89f4u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89f4: push 0xadb0c4 */
  { uint32_t v = 0xadb0c4u; esp -= 4; W32(esp, v); }
/* 7d89f9: push 0xadb0d0 */
  { uint32_t v = 0xadb0d0u; esp -= 4; W32(esp, v); }
/* 7d89fe: push 0xadb0dc */
  { uint32_t v = 0xadb0dcu; esp -= 4; W32(esp, v); }
/* 7d8a03: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a09: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a0eu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d8a0e: push 0xadb0f8 */
  { uint32_t v = 0xadb0f8u; esp -= 4; W32(esp, v); }
/* 7d8a13: push 0xadb104 */
  { uint32_t v = 0xadb104u; esp -= 4; W32(esp, v); }
/* 7d8a18: push 0xadb120 */
  { uint32_t v = 0xadb120u; esp -= 4; W32(esp, v); }
/* 7d8a1d: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a23: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a28u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
L_7d8a28: /* 7d8a28: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8a2e: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d8a31: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d8a33: test byte ptr [eax + 0x404], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x404u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8a3a: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7d8a3d: jne 0x7d8a90 */
  if (!zf) goto L_7d8a90;
L_7d8a3f: /* 7d8a3f: xor ebx, ebx */
  ebx = 0;
L_7d8a41: /* 7d8a41: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d8a44: cmp ebx, dword ptr [ecx + 0x3fc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3fcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8a4a: jge 0x7d8a90 */
  if ((sf == of)) goto L_7d8a90;
L_7d8a4c: /* 7d8a4c: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 7d8a52: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7d8a54: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8a56: push 0xadb13c */
  { uint32_t v = 0xadb13cu; esp -= 4; W32(esp, v); }
/* 7d8a5b: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 7d8a60: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7d8a62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8a62: mov edi, eax */
  edi = eax;
/* 7d8a64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d8a65: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x7d8a6au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 7d8a6a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a6d: mov esi, dword ptr [ecx + 0x108] */
  esi = R32((uint32_t)(ecx + 0x108u));
/* 7d8a73: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8a76: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8a78: add esi, 0x1178 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1178u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8a7e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8a80: mov ecx, esi */
  ecx = esi;
/* 7d8a82: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8a88u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8a88: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8a8a: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 7d8a8d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7d8a8e: jmp 0x7d8a41 */
  goto L_7d8a41;
L_7d8a90: /* 7d8a90: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a93: mov esi, dword ptr [eax + 0x108] */
  esi = R32((uint32_t)(eax + 0x108u));
/* 7d8a99: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 7d8a9f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d8aa3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d8aa9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d8aa9: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7d8aac: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7d8ab0: call 0x6c312a */
  esp -= 4; W32(esp, 0x7d8ab5u); SPILL(); f_6c312a(); if (g_unwind) return; RELOAD();
/* 7d8ab5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8abb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7d8abf: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7d8ac4u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 7d8ac4: mov eax, esi */
  eax = esi;
/* 7d8ac6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d8ac9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d8ad0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d8ad1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d8ad2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d8ad3: mov esp, ebp */
  esp = ebp;
/* 7d8ad5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d8ad6: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7d761a(void) {
  LOAD_REGS();
  goto L_7d761a;
L_7d75a1: /* 7d75a1: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d75a6: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d75a9: jge 0x7d764b */
  if ((sf == of)) goto L_7d764b;
L_7d75af: /* 7d75af: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d75b1: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d75b4: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d75b7: xor edi, edi */
  edi = 0;
/* 7d75b9: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d75bb: je 0x7d75e9 */
  if (zf) goto L_7d75e9;
L_7d75bd: /* 7d75bd: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d75c2: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d75c8u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d75c8: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d75ca: je 0x7d75e9 */
  if (zf) goto L_7d75e9;
L_7d75cc: /* 7d75cc: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d75d1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d75d3: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d75d6: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* 7d75d9: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 7d75dc: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d75e1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d75e3: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d75e6: mov dword ptr [eax + 0x40], edi */
  W32((uint32_t)(eax + 0x40u), edi);
L_7d75e9: /* 7d75e9: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d75ef: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d75f1: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d75f4: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 7d75f7: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d75f9: je 0x7d7620 */
  if (zf) goto L_7d7620;
L_7d75fb: /* 7d75fb: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d7600: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7606u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7606: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7608: je 0x7d7620 */
  if (zf) goto L_7d7620;
L_7d760a: /* 7d760a: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d7610: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7612: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d7615: mov dword ptr [eax + 0x40], edi */
  W32((uint32_t)(eax + 0x40u), edi);
/* 7d7618: jmp 0x7d7620 */
  goto L_7d7620;
L_7d761a: /* 7d761a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7d7620: /* 7d7620: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7625: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d7628: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7629: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d762b: jge 0x7d75a1 */
  if ((sf == of)) goto L_7d75a1;
L_7d7631: /* 7d7631: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d7633: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d7636: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7638: je 0x7d7620 */
  if (zf) goto L_7d7620;
L_7d763a: /* 7d763a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d763b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7641u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7641: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7643: jne 0x7d75a1 */
  if (!zf) goto L_7d75a1;
L_7d7649: /* 7d7649: jmp 0x7d7620 */
  goto L_7d7620;
L_7d764b: /* 7d764b: mov ebx, 0xb88020 */
  ebx = 0xb88020u;
/* 7d7650: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_7d7653: /* 7d7653: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7658: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d765b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d765c: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d765e: jge 0x7d7680 */
  if ((sf == of)) goto L_7d7680;
L_7d7660: /* 7d7660: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7662: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7d7665: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7667: je 0x7d7653 */
  if (zf) goto L_7d7653;
L_7d7669: /* 7d7669: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d766a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7670u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7670: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7672: je 0x7d7653 */
  if (zf) goto L_7d7653;
L_7d7674: /* 7d7674: jmp 0x7d7680 */
  goto L_7d7680;
L_7d7680: /* 7d7680: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7685: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7688: jge 0x7d77fb */
  if ((sf == of)) goto L_7d77fb;
L_7d768e: /* 7d768e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d7690: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d7693: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7d7696: xor edi, edi */
  edi = 0;
/* 7d7698: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d769a: je 0x7d76b8 */
  if (zf) goto L_7d76b8;
L_7d769c: /* 7d769c: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d76a1: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d76a7u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d76a7: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d76a9: je 0x7d76b8 */
  if (zf) goto L_7d76b8;
L_7d76ab: /* 7d76ab: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d76b0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d76b2: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d76b5: mov dword ptr [eax + 0x38], edi */
  W32((uint32_t)(eax + 0x38u), edi);
L_7d76b8: /* 7d76b8: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d76be: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d76c0: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d76c3: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d76c6: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d76c8: je 0x7d76e7 */
  if (zf) goto L_7d76e7;
L_7d76ca: /* 7d76ca: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d76cf: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d76d5u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d76d5: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d76d7: je 0x7d76e7 */
  if (zf) goto L_7d76e7;
L_7d76d9: /* 7d76d9: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d76df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d76e1: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d76e4: mov dword ptr [eax + 0x3c], edi */
  W32((uint32_t)(eax + 0x3cu), edi);
L_7d76e7: /* 7d76e7: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d76ec: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d76ee: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d76f1: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 7d76f4: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d76f6: je 0x7d7715 */
  if (zf) goto L_7d7715;
L_7d76f8: /* 7d76f8: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d76fd: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7703u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7703: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7705: je 0x7d7715 */
  if (zf) goto L_7d7715;
L_7d7707: /* 7d7707: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d770d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d770f: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d7712: mov dword ptr [eax + 0x40], edi */
  W32((uint32_t)(eax + 0x40u), edi);
L_7d7715: /* 7d7715: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d771b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d771d: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d7720: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 7d7723: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7725: je 0x7d7743 */
  if (zf) goto L_7d7743;
L_7d7727: /* 7d7727: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d772c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7732u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7732: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7734: je 0x7d7743 */
  if (zf) goto L_7d7743;
L_7d7736: /* 7d7736: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d773b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d773d: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d7740: mov dword ptr [eax + 0x44], edi */
  W32((uint32_t)(eax + 0x44u), edi);
L_7d7743: /* 7d7743: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d7749: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d774b: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d774e: mov ecx, dword ptr [eax + 0x48] */
  ecx = R32((uint32_t)(eax + 0x48u));
/* 7d7751: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7753: je 0x7d7772 */
  if (zf) goto L_7d7772;
L_7d7755: /* 7d7755: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d775a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7760u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7760: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7762: je 0x7d7772 */
  if (zf) goto L_7d7772;
L_7d7764: /* 7d7764: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d776a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d776c: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d776f: mov dword ptr [eax + 0x48], edi */
  W32((uint32_t)(eax + 0x48u), edi);
L_7d7772: /* 7d7772: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7777: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7779: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d777c: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* 7d777f: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7781: je 0x7d77a0 */
  if (zf) goto L_7d77a0;
L_7d7783: /* 7d7783: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d7788: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d778eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d778e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7790: je 0x7d77a0 */
  if (zf) goto L_7d77a0;
L_7d7792: /* 7d7792: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d7798: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d779a: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d779d: mov dword ptr [eax + 0x4c], edi */
  W32((uint32_t)(eax + 0x4cu), edi);
L_7d77a0: /* 7d77a0: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d77a6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d77a8: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d77ab: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 7d77ae: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d77b0: je 0x7d77d0 */
  if (zf) goto L_7d77d0;
L_7d77b2: /* 7d77b2: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d77b7: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d77bdu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d77bd: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d77bf: je 0x7d77d0 */
  if (zf) goto L_7d77d0;
L_7d77c1: /* 7d77c1: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d77c6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d77c8: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d77cb: mov dword ptr [eax + 0x50], edi */
  W32((uint32_t)(eax + 0x50u), edi);
/* 7d77ce: mov edi, edi */
  edi = edi;
L_7d77d0: /* 7d77d0: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d77d5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d77d8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d77d9: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d77db: jge 0x7d7680 */
  if ((sf == of)) goto L_7d7680;
L_7d77e1: /* 7d77e1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d77e3: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d77e6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d77e8: je 0x7d77d0 */
  if (zf) goto L_7d77d0;
L_7d77ea: /* 7d77ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d77eb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d77f1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d77f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d77f3: jne 0x7d7680 */
  if (!zf) goto L_7d7680;
L_7d77f9: /* 7d77f9: jmp 0x7d77d0 */
  goto L_7d77d0;
L_7d77fb: /* 7d77fb: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d77fe: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7d7804: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 7d7808: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d780eu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d780e: mov ecx, eax */
  ecx = eax;
/* 7d7810: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d7816u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d7816: push 0xadad94 */
  { uint32_t v = 0xadad94u; esp -= 4; W32(esp, v); }
/* 7d781b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d781c: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7d7822u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7d7822: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7825: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7827: je 0x7d7950 */
  if (zf) goto L_7d7950;
L_7d782d: /* 7d782d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7830: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d7832: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7834: mov ecx, esi */
  ecx = esi;
/* 7d7836: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7d7839u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7839: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7d783c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d783e: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 7d7845: je 0x7d785c */
  if (zf) goto L_7d785c;
L_7d7847: /* 7d7847: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7849: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7d784fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d784f: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7d7852: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7854: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7856: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7d7859: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d785cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d785c: /* 7d785c: mov ebx, 0xb5bf68 */
  ebx = 0xb5bf68u;
/* 7d7861: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_7d7864: /* 7d7864: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7869: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d7870: /* 7d7870: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d7873: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7874: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7876: jge 0x7d78f0 */
  if ((sf == of)) goto L_7d78f0;
L_7d7878: /* 7d7878: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d787a: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7d787d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d787f: je 0x7d7870 */
  if (zf) goto L_7d7870;
L_7d7881: /* 7d7881: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d7882: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7888u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7888: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d788a: je 0x7d7864 */
  if (zf) goto L_7d7864;
L_7d788c: /* 7d788c: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7891: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7894: jge 0x7d78f0 */
  if ((sf == of)) goto L_7d78f0;
L_7d7896: /* 7d7896: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d7898: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d789b: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7d78a1: mov edi, dword ptr [edx + esi*4] */
  edi = R32((uint32_t)(edx + esi*4));
/* 7d78a4: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d78aau); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d78aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d78ab: mov ecx, edi */
  ecx = edi;
/* 7d78ad: call dword ptr [0xcfa828] */
  esp -= 4; W32(esp, 0x7d78b3u); SPILL(); f_4e33cd(); if (g_unwind) return; /* Core!?IsIn@UObject@@QBEHPAV1@@Z */ RELOAD();
/* 7d78b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d78b5: je 0x7d78cd */
  if (zf) goto L_7d78cd;
L_7d78b7: /* 7d78b7: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d78bd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d78bf: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d78c2: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7d78c7: call dword ptr [0xcfa604] */
  esp -= 4; W32(esp, 0x7d78cdu); SPILL(); f_4e2077(); if (g_unwind) return; /* Core!?SetFlags@UObject@@QAEXK@Z */ RELOAD();
L_7d78cd: /* 7d78cd: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
L_7d78d2: /* 7d78d2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d78d5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d78d6: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d78d8: jge 0x7d78f0 */
  if ((sf == of)) goto L_7d78f0;
L_7d78da: /* 7d78da: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d78dc: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7d78df: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d78e1: je 0x7d78d2 */
  if (zf) goto L_7d78d2;
L_7d78e3: /* 7d78e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d78e4: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d78eau); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d78ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d78ec: je 0x7d78cd */
  if (zf) goto L_7d78cd;
L_7d78ee: /* 7d78ee: jmp 0x7d788c */
  goto L_7d788c;
L_7d78f0: /* 7d78f0: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d78f3: xor esi, esi */
  esi = 0;
L_7d78f5: /* 7d78f5: mov eax, dword ptr [edi + 0x108] */
  eax = R32((uint32_t)(edi + 0x108u));
/* 7d78fb: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d78fe: jge 0x7d7918 */
  if ((sf == of)) goto L_7d7918;
L_7d7900: /* 7d7900: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d7903: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d7906: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7908: je 0x7d7915 */
  if (zf) goto L_7d7915;
L_7d790a: /* 7d790a: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7d790f: call dword ptr [0xcfa91c] */
  esp -= 4; W32(esp, 0x7d7915u); SPILL(); f_4e1834(); if (g_unwind) return; /* Core!?ClearFlags@UObject@@QAEXK@Z */ RELOAD();
L_7d7915: /* 7d7915: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7916: jmp 0x7d78f5 */
  goto L_7d78f5;
L_7d7918: /* 7d7918: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 7d791d: call dword ptr [0xcfa918] */
  esp -= 4; W32(esp, 0x7d7923u); SPILL(); f_4e3fa8(); if (g_unwind) return; /* Core!?CollectGarbage@UObject@@SAXK@Z */ RELOAD();
/* 7d7923: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 7d7926: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7929: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d792b: je 0x7d7950 */
  if (zf) goto L_7d7950;
L_7d792d: /* 7d792d: xor ecx, ecx */
  ecx = 0;
/* 7d792f: nop  */
L_7d7930: /* 7d7930: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 7d7933: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7936: jge 0x7d7950 */
  if ((sf == of)) goto L_7d7950;
L_7d7938: /* 7d7938: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d793b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7d793e: cmp dword ptr [edx + ecx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7941: jne 0x7d79d0 */
  if (!zf) goto L_7d79d0;
L_7d7947: /* 7d7947: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 7d794a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d794c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d794d: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d7950u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d7950: /* 7d7950: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7953: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7d7956: xor ebx, ebx */
  ebx = 0;
/* 7d7958: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d795a: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d7961: je 0x7d796b */
  if (zf) goto L_7d796b;
L_7d7963: /* 7d7963: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7965: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x7d796bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d796b: /* 7d796b: mov ecx, dword ptr [esi + 0x108] */
  ecx = R32((uint32_t)(esi + 0x108u));
/* 7d7971: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7973: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d7974: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7976: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7d7979u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7979: mov byte ptr [ebp - 4], 0x1f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1fu);
/* 7d797d: xor eax, eax */
  eax = 0;
/* 7d797f: nop  */
L_7d7980: /* 7d7980: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7983: jge 0x7d79e6 */
  if ((sf == of)) goto L_7d79e6;
L_7d7985: /* 7d7985: xor ecx, ecx */
  ecx = 0;
L_7d7987: /* 7d7987: cmp ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d798a: jge 0x7d79e1 */
  if ((sf == of)) goto L_7d79e1;
L_7d798c: /* 7d798c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d798f: mov edx, dword ptr [edx + 0x108] */
  edx = R32((uint32_t)(edx + 0x108u));
/* 7d7995: mov edi, dword ptr [edx + 0x8c] */
  edi = R32((uint32_t)(edx + 0x8cu));
/* 7d799b: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 7d799e: mov ebx, dword ptr [edi + esi*8 + 0x124] */
  ebx = R32((uint32_t)(edi + esi*8 + 0x124u));
/* 7d79a5: mov esi, dword ptr [edi + esi*8 + 0x128] */
  esi = R32((uint32_t)(edi + esi*8 + 0x128u));
/* 7d79ac: mov dword ptr [ebp + eax*8 - 0x2e4], esi */
  W32((uint32_t)(ebp + eax*8 + 0xfffffd1cu), esi);
/* 7d79b3: mov esi, eax */
  esi = eax;
/* 7d79b5: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7d79b8: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d79ba: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d79bc: mov dword ptr [ebp + eax*8 - 0x2e8], ebx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffd18u), ebx);
/* 7d79c3: jne 0x7d79d6 */
  if (!zf) goto L_7d79d6;
L_7d79c5: /* 7d79c5: mov byte ptr [esi + ecx + 0x110], 0 */
  W8((uint32_t)(esi + ecx + 0x110u), 0x0u);
/* 7d79cd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7d79ce: jmp 0x7d7987 */
  goto L_7d7987;
L_7d79d0: /* 7d79d0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7d79d1: jmp 0x7d7930 */
  goto L_7d7930;
L_7d79d6: /* 7d79d6: mov byte ptr [esi + ecx + 0x110], 0xff */
  W8((uint32_t)(esi + ecx + 0x110u), 0xffu);
/* 7d79de: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7d79df: jmp 0x7d7987 */
  goto L_7d7987;
L_7d79e1: /* 7d79e1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d79e2: xor ebx, ebx */
  ebx = 0;
/* 7d79e4: jmp 0x7d7980 */
  goto L_7d7980;
L_7d79e6: /* 7d79e6: mov dword ptr [ebp + 8], 1 */
  W32((uint32_t)(ebp + 0x8u), 0x1u);
/* 7d79ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d79f0: /* 7d79f0: cmp dword ptr [ebp + 8], 0x40 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d79f4: jge 0x7d7b12 */
  if ((sf == of)) goto L_7d7b12;
L_7d79fa: /* 7d79fa: xor esi, esi */
  esi = 0;
/* 7d79fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d7a00: /* 7d7a00: cmp esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a03: jge 0x7d7a61 */
  if ((sf == of)) goto L_7d7a61;
L_7d7a05: /* 7d7a05: xor edi, edi */
  edi = 0;
L_7d7a07: /* 7d7a07: cmp edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a0a: jge 0x7d7a5c */
  if ((sf == of)) goto L_7d7a5c;
L_7d7a0c: /* 7d7a0c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7a0f: mov edx, dword ptr [ecx + 0x108] */
  edx = R32((uint32_t)(ecx + 0x108u));
/* 7d7a15: mov eax, esi */
  eax = esi;
/* 7d7a17: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7d7a1a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d7a1c: movzx edx, byte ptr [eax + edi + 0x110] */
  edx = (uint32_t)(R8((uint32_t)(eax + edi + 0x110u)));
/* 7d7a24: lea ebx, [eax + edi + 0x110] */
  ebx = (uint32_t)(eax + edi + 0x110u);
/* 7d7a2b: cmp edx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a2e: jle 0x7d7a59 */
  if ((zf || sf != of)) goto L_7d7a59;
L_7d7a30: /* 7d7a30: mov eax, 1 */
  eax = 0x1u;
/* 7d7a35: xor edx, edx */
  edx = 0;
/* 7d7a37: mov ecx, edi */
  ecx = edi;
/* 7d7a39: call 0x99cc70 */
  esp -= 4; W32(esp, 0x7d7a3eu); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 7d7a3e: mov ecx, dword ptr [ebp + esi*8 - 0x2e8] */
  ecx = R32((uint32_t)(ebp + esi*8 + 0xfffffd18u));
/* 7d7a45: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7d7a47: mov eax, dword ptr [ebp + esi*8 - 0x2e4] */
  eax = R32((uint32_t)(ebp + esi*8 + 0xfffffd1cu));
/* 7d7a4e: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d7a50: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 7d7a52: je 0x7d7a59 */
  if (zf) goto L_7d7a59;
L_7d7a54: /* 7d7a54: mov al, byte ptr [ebp + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 7d7a57: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
L_7d7a59: /* 7d7a59: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d7a5a: jmp 0x7d7a07 */
  goto L_7d7a07;
L_7d7a5c: /* 7d7a5c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7a5d: xor ebx, ebx */
  ebx = 0;
/* 7d7a5f: jmp 0x7d7a00 */
  goto L_7d7a00;
L_7d7a61: /* 7d7a61: xor eax, eax */
  eax = 0;
L_7d7a63: /* 7d7a63: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a66: jge 0x7d7a79 */
  if ((sf == of)) goto L_7d7a79;
L_7d7a68: /* 7d7a68: mov dword ptr [ebp + eax*8 - 0x4e8], ebx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffb18u), ebx);
/* 7d7a6f: mov dword ptr [ebp + eax*8 - 0x4e4], ebx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffb1cu), ebx);
/* 7d7a76: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d7a77: jmp 0x7d7a63 */
  goto L_7d7a63;
L_7d7a79: /* 7d7a79: xor edi, edi */
  edi = 0;
/* 7d7a7b: jmp 0x7d7a80 */
  goto L_7d7a80;
L_7d7a80: /* 7d7a80: cmp edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a83: jge 0x7d7ae4 */
  if ((sf == of)) goto L_7d7ae4;
L_7d7a85: /* 7d7a85: xor esi, esi */
  esi = 0;
L_7d7a87: /* 7d7a87: cmp esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a8a: jge 0x7d7ae1 */
  if ((sf == of)) goto L_7d7ae1;
L_7d7a8c: /* 7d7a8c: mov eax, 1 */
  eax = 0x1u;
/* 7d7a91: xor edx, edx */
  edx = 0;
/* 7d7a93: mov ecx, esi */
  ecx = esi;
/* 7d7a95: call 0x99cc70 */
  esp -= 4; W32(esp, 0x7d7a9au); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 7d7a9a: mov ecx, dword ptr [ebp + edi*8 - 0x2e8] */
  ecx = R32((uint32_t)(ebp + edi*8 + 0xfffffd18u));
/* 7d7aa1: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7d7aa3: mov eax, dword ptr [ebp + edi*8 - 0x2e4] */
  eax = R32((uint32_t)(ebp + edi*8 + 0xfffffd1cu));
/* 7d7aaa: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d7aac: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 7d7aae: je 0x7d7ade */
  if (zf) goto L_7d7ade;
L_7d7ab0: /* 7d7ab0: mov edx, dword ptr [ebp + edi*8 - 0x4e8] */
  edx = R32((uint32_t)(ebp + edi*8 + 0xfffffb18u));
/* 7d7ab7: mov ecx, dword ptr [ebp + esi*8 - 0x2e8] */
  ecx = R32((uint32_t)(ebp + esi*8 + 0xfffffd18u));
/* 7d7abe: mov eax, dword ptr [ebp + edi*8 - 0x4e4] */
  eax = R32((uint32_t)(ebp + edi*8 + 0xfffffb1cu));
/* 7d7ac5: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7d7ac7: mov dword ptr [ebp + edi*8 - 0x4e8], edx */
  W32((uint32_t)(ebp + edi*8 + 0xfffffb18u), edx);
/* 7d7ace: mov edx, dword ptr [ebp + esi*8 - 0x2e4] */
  edx = R32((uint32_t)(ebp + esi*8 + 0xfffffd1cu));
/* 7d7ad5: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7d7ad7: mov dword ptr [ebp + edi*8 - 0x4e4], eax */
  W32((uint32_t)(ebp + edi*8 + 0xfffffb1cu), eax);
L_7d7ade: /* 7d7ade: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7adf: jmp 0x7d7a87 */
  goto L_7d7a87;
L_7d7ae1: /* 7d7ae1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d7ae2: jmp 0x7d7a80 */
  goto L_7d7a80;
L_7d7ae4: /* 7d7ae4: xor eax, eax */
  eax = 0;
L_7d7ae6: /* 7d7ae6: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7ae9: jge 0x7d7b0a */
  if ((sf == of)) goto L_7d7b0a;
L_7d7aeb: /* 7d7aeb: mov ecx, dword ptr [ebp + eax*8 - 0x4e8] */
  ecx = R32((uint32_t)(ebp + eax*8 + 0xfffffb18u));
/* 7d7af2: mov edx, dword ptr [ebp + eax*8 - 0x4e4] */
  edx = R32((uint32_t)(ebp + eax*8 + 0xfffffb1cu));
/* 7d7af9: mov dword ptr [ebp + eax*8 - 0x2e8], ecx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffd18u), ecx);
/* 7d7b00: mov dword ptr [ebp + eax*8 - 0x2e4], edx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffd1cu), edx);
/* 7d7b07: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d7b08: jmp 0x7d7ae6 */
  goto L_7d7ae6;
L_7d7b0a: /* 7d7b0a: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 7d7b0d: jmp 0x7d79f0 */
  goto L_7d79f0;
L_7d7b12: /* 7d7b12: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7b15: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7d7b1b: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7d7b1e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7b20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7b21: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d7b28: call dword ptr [edx + 0xe8] */
  { uint32_t t = R32((uint32_t)(edx + 0xe8u)); esp -= 4; W32(esp, 0x7d7b2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7b2e: mov cx, word ptr [0xb81b4c] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xb81b4cu))) & 0xffffu);
/* 7d7b35: mov dx, word ptr [0xb81b50] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xb81b50u))) & 0xffffu);
/* 7d7b3c: mov word ptr [ebp - 0xee8], cx */
  W16((uint32_t)(ebp + 0xfffff118u), (ecx & 0xffffu));
/* 7d7b43: xor eax, eax */
  eax = 0;
/* 7d7b45: mov ecx, 0x1ff */
  ecx = 0x1ffu;
/* 7d7b4a: lea edi, [ebp - 0xee6] */
  edi = (uint32_t)(ebp + 0xfffff11au);
/* 7d7b50: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 7d7b52: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 7d7b54: mov word ptr [ebp - 0x6e8], dx */
  W16((uint32_t)(ebp + 0xfffff918u), (edx & 0xffffu));
/* 7d7b5b: xor eax, eax */
  eax = 0;
/* 7d7b5d: mov ecx, 0x7f */
  ecx = 0x7fu;
/* 7d7b62: lea edi, [ebp - 0x6e6] */
  edi = (uint32_t)(ebp + 0xfffff91au);
/* 7d7b68: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 7d7b6a: push 0xb81b54 */
  { uint32_t v = 0xb81b54u; esp -= 4; W32(esp, v); }
/* 7d7b6f: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 7d7b75: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 7d7b77: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7d7b7du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7d7b7d: mov ebx, dword ptr [0xcfa914] */
  ebx = R32((uint32_t)(0xcfa914u));
/* 7d7b83: mov byte ptr [ebp - 4], 0x22 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x22u);
/* 7d7b87: xor edi, edi */
  edi = 0;
/* 7d7b89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d7b90: /* 7d7b90: cmp edi, dword ptr [ebp - 0xa8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7b96: jge 0x7d7bf7 */
  if ((sf == of)) goto L_7d7bf7;
L_7d7b98: /* 7d7b98: lea eax, [ebp - 0xee8] */
  eax = (uint32_t)(ebp + 0xfffff118u);
/* 7d7b9e: push 0xadadb0 */
  { uint32_t v = 0xadadb0u; esp -= 4; W32(esp, v); }
/* 7d7ba3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7ba4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7ba6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7ba6: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 7d7bac: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 7d7baf: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7d7bb2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7bb5: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d7bb7: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7bbdu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7bbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7bbe: lea edx, [ebp - 0xee8] */
  edx = (uint32_t)(ebp + 0xfffff118u);
/* 7d7bc4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7bc5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7bc7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7bc7: mov eax, dword ptr [ebp - 0xac] */
  eax = R32((uint32_t)(ebp + 0xffffff54u));
/* 7d7bcd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7bd0: lea ecx, [esi + eax] */
  ecx = (uint32_t)(esi + eax);
/* 7d7bd3: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7bd9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7bd9: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7d7bde: lea ecx, [ebp - 0x6e8] */
  ecx = (uint32_t)(ebp + 0xfffff918u);
/* 7d7be4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d7be5: push 0xadadb4 */
  { uint32_t v = 0xadadb4u; esp -= 4; W32(esp, v); }
/* 7d7bea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7beb: call dword ptr [0xcfa910] */
  esp -= 4; W32(esp, 0x7d7bf1u); SPILL(); f_4e2e73(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0PAGH@Z */ RELOAD();
/* 7d7bf1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7bf4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d7bf5: jmp 0x7d7b90 */
  goto L_7d7b90;
L_7d7bf7: /* 7d7bf7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7bfa: mov ecx, dword ptr [edx + 0x108] */
  ecx = R32((uint32_t)(edx + 0x108u));
/* 7d7c00: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7c02: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x7d7c08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7c08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c0a: je 0x7d7da7 */
  if (zf) goto L_7d7da7;
L_7d7c10: /* 7d7c10: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7d7c13: mov eax, dword ptr [ecx + 0x508] */
  eax = R32((uint32_t)(ecx + 0x508u));
/* 7d7c19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c1b: jne 0x7d7da7 */
  if (!zf) goto L_7d7da7;
L_7d7c21: /* 7d7c21: cmp word ptr [ebp - 0x6e8], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffff918u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7c29: mov ebx, dword ptr [0xcfa7b8] */
  ebx = R32((uint32_t)(0xcfa7b8u));
/* 7d7c2f: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 7d7c32: je 0x7d7c56 */
  if (zf) goto L_7d7c56;
L_7d7c34: /* 7d7c34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7c35: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7c37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c39: lea edx, [ebp - 0x6e8] */
  edx = (uint32_t)(ebp + 0xfffff918u);
/* 7d7c3f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7c40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c42: push 0xb5e3b8 */
  { uint32_t v = 0xb5e3b8u; esp -= 4; W32(esp, v); }
/* 7d7c47: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7c49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7c49: mov esi, eax */
  esi = eax;
/* 7d7c4b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7c4e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c50: jne 0x7d7ce3 */
  if (!zf) goto L_7d7ce3;
L_7d7c56: /* 7d7c56: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7d7c59: add esi, 0x4f0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4f0u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d7c5f: mov ecx, esi */
  ecx = esi;
/* 7d7c61: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7d7c67u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7d7c67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7d7c69: jle 0x7d7c8b */
  if ((zf || sf != of)) goto L_7d7c8b;
L_7d7c6b: /* 7d7c6b: mov ecx, esi */
  ecx = esi;
/* 7d7c6d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7c73u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7c73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7c74: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7c76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7c79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c7b: push 0xb5e3b8 */
  { uint32_t v = 0xb5e3b8u; esp -= 4; W32(esp, v); }
/* 7d7c80: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7c82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7c82: mov esi, eax */
  esi = eax;
/* 7d7c84: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7c87: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c89: jne 0x7d7ce3 */
  if (!zf) goto L_7d7ce3;
L_7d7c8b: /* 7d7c8b: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7c8e: mov ecx, dword ptr [esi + 0x108] */
  ecx = R32((uint32_t)(esi + 0x108u));
/* 7d7c94: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d7c9au); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d7c9a: mov ecx, eax */
  ecx = eax;
/* 7d7c9c: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d7ca2u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d7ca2: push 0xadadc0 */
  { uint32_t v = 0xadadc0u; esp -= 4; W32(esp, v); }
/* 7d7ca7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7ca8: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7d7caeu); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7d7cae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7cb1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7cb3: je 0x7d7cde */
  if (zf) goto L_7d7cde;
L_7d7cb5: /* 7d7cb5: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7d7cb8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7cba: mov eax, 0xadadcc */
  eax = 0xadadccu;
/* 7d7cbf: jne 0x7d7cc6 */
  if (!zf) goto L_7d7cc6;
L_7d7cc1: /* 7d7cc1: mov eax, 0xadae08 */
  eax = 0xadae08u;
L_7d7cc6: /* 7d7cc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7cc7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7cc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7ccb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7ccc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7cce: push 0xb5e3b8 */
  { uint32_t v = 0xb5e3b8u; esp -= 4; W32(esp, v); }
/* 7d7cd3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7cd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7cd5: mov esi, eax */
  esi = eax;
/* 7d7cd7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7cda: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7cdc: jne 0x7d7ce3 */
  if (!zf) goto L_7d7ce3;
L_7d7cde: /* 7d7cde: mov esi, 0xb5e3b8 */
  esi = 0xb5e3b8u;
L_7d7ce3: /* 7d7ce3: mov ecx, esi */
  ecx = esi;
/* 7d7ce5: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d7cebu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d7ceb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7cec: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d7cf1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7cf3: push 0xadae50 */
  { uint32_t v = 0xadae50u; esp -= 4; W32(esp, v); }
/* 7d7cf8: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 7d7cfd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d7cfe: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7d7d04u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7d7d04: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7d07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d13: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d17: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7d1a: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7d7d21: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7d7d28: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7d7d2f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7d7d35u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7d7d35: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7d37: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d7d3a: mov edx, esp */
  edx = esp;
/* 7d7d3c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7d7d3e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d7d41: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7d7d44: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7d7d47: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7d7d4a: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d7d4d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d7d50: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d7d53: mov ecx, esp */
  ecx = esp;
/* 7d7d55: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7d7d57: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d7d5a: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7d7d5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d7d5e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7d7d61: mov ecx, esp */
  ecx = esp;
/* 7d7d63: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7d7d66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d68: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d7d6eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d7d6e: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7d71: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7d77: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7d79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d7d7a: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x7d7d80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7d80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7d82: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 7d7d85: mov dword ptr [edi + 0x508], eax */
  W32((uint32_t)(edi + 0x508u), eax);
/* 7d7d8b: jne 0x7d7dad */
  if (!zf) goto L_7d7dad;
L_7d7d8d: /* 7d7d8d: push 0x6c9 */
  { uint32_t v = 0x6c9u; esp -= 4; W32(esp, v); }
/* 7d7d92: push 0xadae78 */
  { uint32_t v = 0xadae78u; esp -= 4; W32(esp, v); }
/* 7d7d97: push 0xadae84 */
  { uint32_t v = 0xadae84u; esp -= 4; W32(esp, v); }
/* 7d7d9c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7d7da2u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7d7da2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7da5: jmp 0x7d7dad */
  goto L_7d7dad;
L_7d7da7: /* 7d7da7: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7daa: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
L_7d7dad: /* 7d7dad: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d7db0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7db2: mov dword ptr [ebp - 4], 0x21 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7d7db9: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7d7dbd: je 0x7d7dd7 */
  if (zf) goto L_7d7dd7;
L_7d7dbf: /* 7d7dbf: push 0xadaea0 */
  { uint32_t v = 0xadaea0u; esp -= 4; W32(esp, v); }
/* 7d7dc4: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d7dca: call 0x6c991c */
  esp -= 4; W32(esp, 0x7d7dcfu); SPILL(); f_6c991c(); if (g_unwind) return; RELOAD();
/* 7d7dcf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7dd1: je 0x7d7e8a */
  if (zf) goto L_7d7e8a;
L_7d7dd7: /* 7d7dd7: mov eax, dword ptr [ebx + 0x110] */
  eax = R32((uint32_t)(ebx + 0x110u));
/* 7d7ddd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7ddf: je 0x7d7e1f */
  if (zf) goto L_7d7e1f;
L_7d7de1: /* 7d7de1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d7de4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7de6: mov byte ptr [ebp - 4], 0x25 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x25u);
/* 7d7dea: je 0x7d7e04 */
  if (zf) goto L_7d7e04;
L_7d7dec: /* 7d7dec: push 0x6d4 */
  { uint32_t v = 0x6d4u; esp -= 4; W32(esp, v); }
/* 7d7df1: push 0xadaeb0 */
  { uint32_t v = 0xadaeb0u; esp -= 4; W32(esp, v); }
/* 7d7df6: push 0xadaebc */
  { uint32_t v = 0xadaebcu; esp -= 4; W32(esp, v); }
/* 7d7dfb: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7d7e01u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7d7e01: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7e04: /* 7d7e04: mov ecx, dword ptr [ebx + 0x110] */
  ecx = R32((uint32_t)(ebx + 0x110u));
/* 7d7e0a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7e0c: je 0x7d7e15 */
  if (zf) goto L_7d7e15;
L_7d7e0e: /* 7d7e0e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7e10: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7e12: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7d7e15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d7e15: /* 7d7e15: mov dword ptr [ebx + 0x110], 0 */
  W32((uint32_t)(ebx + 0x110u), 0x0u);
L_7d7e1f: /* 7d7e1f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e22: mov dword ptr [ebp - 4], 0x24 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7d7e29: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7d7e2fu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7d7e2f: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7e35: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7e37: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7e3b: mov byte ptr [ebp - 4], 0x27 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x27u);
/* 7d7e3f: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x7d7e45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7e45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7e47: jne 0x7d7e7d */
  if (!zf) goto L_7d7e7d;
L_7d7e49: /* 7d7e49: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e4c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7e52u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7e52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7e54: push 0xadaed0 */
  { uint32_t v = 0xadaed0u; esp -= 4; W32(esp, v); }
/* 7d7e59: push 0xadaee0 */
  { uint32_t v = 0xadaee0u; esp -= 4; W32(esp, v); }
/* 7d7e5e: mov esi, eax */
  esi = eax;
/* 7d7e60: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x7d7e66u); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 7d7e66: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7d7e6c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7e6e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7e71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d7e72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7e73: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7e74: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7d7e7au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7d7e7a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7e7d: /* 7d7e7d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e80: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7d7e84: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d7e8au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7d7e8a: /* 7d7e8a: mov byte ptr [edi + 0x448], 2 */
  W8((uint32_t)(edi + 0x448u), 0x2u);
/* 7d7e91: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d7e94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7e96: mov dword ptr [ebp - 4], 0x21 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7d7e9d: je 0x7d7f00 */
  if (zf) goto L_7d7f00;
L_7d7e9f: /* 7d7e9f: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7d7ea2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7ea4: je 0x7d7f00 */
  if (zf) goto L_7d7f00;
L_7d7ea6: /* 7d7ea6: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d7ea9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7eab: mov eax, dword ptr [ecx + 0x70] */
  eax = R32((uint32_t)(ecx + 0x70u));
/* 7d7eae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7eb0: je 0x7d7f00 */
  if (zf) goto L_7d7f00;
L_7d7eb2: /* 7d7eb2: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d7eb5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7eb7: je 0x7d7ef2 */
  if (zf) goto L_7d7ef2;
L_7d7eb9: /* 7d7eb9: mov byte ptr [edi + 0x448], 2 */
  W8((uint32_t)(edi + 0x448u), 0x2u);
/* 7d7ec0: jmp 0x7d7f00 */
  goto L_7d7f00;
L_7d7ef2: /* 7d7ef2: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7d7ef5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7ef7: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7d7efa: mov byte ptr [edi + 0x448], dl */
  W8((uint32_t)(edi + 0x448u), (edx & 0xffu));
L_7d7f00: /* 7d7f00: mov ecx, dword ptr [0xce6f04] */
  ecx = R32((uint32_t)(0xce6f04u));
/* 7d7f06: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7f08: je 0x7d7f0f */
  if (zf) goto L_7d7f0f;
L_7d7f0a: /* 7d7f0a: call 0x6cbfa5 */
  esp -= 4; W32(esp, 0x7d7f0fu); SPILL(); f_6cbfa5(); if (g_unwind) return; RELOAD();
L_7d7f0f: /* 7d7f0f: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d7f15: mov dword ptr [eax + 0x104], 0 */
  W32((uint32_t)(eax + 0x104u), 0x0u);
/* 7d7f1f: test byte ptr [edi + 0x444], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x444u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7f26: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7d7f2a: jne 0x7d85d8 */
  if (!zf) goto L_7d85d8;
L_7d7f30: /* 7d7f30: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7f36: mov esi, dword ptr [0xcfa3a8] */
  esi = R32((uint32_t)(0xcfa3a8u));
/* 7d7f3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7f3e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d7f40u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f40: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d7f46: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7f48: mov edi, dword ptr [0xcfa3a4] */
  edi = R32((uint32_t)(0xcfa3a4u));
/* 7d7f4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7f4f: push 0xad5650 */
  { uint32_t v = 0xad5650u; esp -= 4; W32(esp, v); }
/* 7d7f54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7f55: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d7f57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f57: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d7f5d: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d7f60: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7f62: mov cl, byte ptr [eax + 0x44c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x44cu))) & 0xffu);
/* 7d7f68: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7f6b: test cl, 0x10 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7f6e: jne 0x7d7f83 */
  if (!zf) goto L_7d7f83;
L_7d7f70: /* 7d7f70: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7d7f76: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d7f78: push 0xadaf08 */
  { uint32_t v = 0xadaf08u; esp -= 4; W32(esp, v); }
/* 7d7f7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7f7e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d7f80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f80: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7f83: /* 7d7f83: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7d7f85: mov ecx, ebx */
  ecx = ebx;
/* 7d7f87: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7d7f8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f8d: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7d7f90: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d7f93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7f94: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x7d7f9au); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 7d7f9a: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7fa0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7fa3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7fa5: mov edi, eax */
  edi = eax;
/* 7d7fa7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d7fa9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7fa9: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d7faf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7fb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7fb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7fb3: push 0xadaf60 */
  { uint32_t v = 0xadaf60u; esp -= 4; W32(esp, v); }
/* 7d7fb8: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 7d7fbd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7fbe: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7d7fc4u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7d7fc4: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d7fca: xor esi, esi */
  esi = 0;
/* 7d7fcc: mov dword ptr [eax + 0x100], esi */
  W32((uint32_t)(eax + 0x100u), esi);
/* 7d7fd2: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7fd8: mov dword ptr [ecx + 0xd0], esi */
  W32((uint32_t)(ecx + 0xd0u), esi);
/* 7d7fde: mov dword ptr [ecx + 0xd4], esi */
  W32((uint32_t)(ecx + 0xd4u), esi);
/* 7d7fe4: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d7fea: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d7fed: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d7fef: mov dword ptr [eax + 0x3ac], esi */
  W32((uint32_t)(eax + 0x3acu), esi);
/* 7d7ff5: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7ffb: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d7ffe: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7d8000: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8003: call 0x6c34d1 */
  esp -= 4; W32(esp, 0x7d8008u); SPILL(); f_6c34d1(); if (g_unwind) return; RELOAD();
/* 7d8008: or dword ptr [eax + 0x80], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x80u), r);
  }
/* 7d8012: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8018: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d801a: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x7d8020u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8020: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8022: jne 0x7d8072 */
  if (!zf) goto L_7d8072;
L_7d8024: /* 7d8024: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d802a: cmp esi, dword ptr [ecx + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d802d: jge 0x7d8072 */
  if ((sf == of)) goto L_7d8072;
L_7d802f: /* 7d802f: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8032: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d8035: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8037: je 0x7d806f */
  if (zf) goto L_7d806f;
L_7d8039: /* 7d8039: mov edx, dword ptr [eax + 0x80] */
  edx = R32((uint32_t)(eax + 0x80u));
/* 7d803f: test dl, 0x40 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8042: jne 0x7d8057 */
  if (!zf) goto L_7d8057;
L_7d8044: /* 7d8044: test dh, 1 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8047: jne 0x7d8057 */
  if (!zf) goto L_7d8057;
L_7d8049: /* 7d8049: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d804b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d804d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d804e: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x7d8054u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8054: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d8055: jmp 0x7d8024 */
  goto L_7d8024;
L_7d8057: /* 7d8057: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 7d805d: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 7d8063: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 7d8069: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
L_7d806f: /* 7d806f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d8070: jmp 0x7d8024 */
  goto L_7d8024;
L_7d8072: /* 7d8072: xor esi, esi */
  esi = 0;
L_7d8074: /* 7d8074: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d807a: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d807d: jge 0x7d80d5 */
  if ((sf == of)) goto L_7d80d5;
L_7d807f: /* 7d807f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8082: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d8085: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8087: je 0x7d80d2 */
  if (zf) goto L_7d80d2;
L_7d8089: /* 7d8089: mov dword ptr [eax + 0xd4], 0 */
  W32((uint32_t)(eax + 0xd4u), 0x0u);
/* 7d8093: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8099: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d809c: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d809f: add ecx, 0x110 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d80a5: xor eax, eax */
  eax = 0;
L_7d80a7: /* 7d80a7: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d80aa: jge 0x7d80af */
  if ((sf == of)) goto L_7d80af;
L_7d80ac: /* 7d80ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d80ad: jmp 0x7d80a7 */
  goto L_7d80a7;
L_7d80af: /* 7d80af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d80b1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d80b3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7d80b9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7d80b9: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d80bf: mov edi, dword ptr [eax + 0x2c] */
  edi = R32((uint32_t)(eax + 0x2cu));
/* 7d80c2: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7d80c4: call 0x6c34d1 */
  esp -= 4; W32(esp, 0x7d80c9u); SPILL(); f_6c34d1(); if (g_unwind) return; RELOAD();
/* 7d80c9: mov ecx, dword ptr [edi + esi*4] */
  ecx = R32((uint32_t)(edi + esi*4));
/* 7d80cc: mov dword ptr [ecx + 0x16c], eax */
  W32((uint32_t)(ecx + 0x16cu), eax);
L_7d80d2: /* 7d80d2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d80d3: jmp 0x7d8074 */
  goto L_7d8074;
L_7d80d5: /* 7d80d5: xor esi, esi */
  esi = 0;
/* 7d80d7: jmp 0x7d80e0 */
  goto L_7d80e0;
L_7d80e0: /* 7d80e0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d80e6: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d80e9: jge 0x7d80fd */
  if ((sf == of)) goto L_7d80fd;
L_7d80eb: /* 7d80eb: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d80ee: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d80f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d80f3: je 0x7d80fa */
  if (zf) goto L_7d80fa;
L_7d80f5: /* 7d80f5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d80f7: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x7d80fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d80fa: /* 7d80fa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d80fb: jmp 0x7d80e0 */
  goto L_7d80e0;
L_7d80fd: /* 7d80fd: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7d8100: mov edx, dword ptr [esi + 0x444] */
  edx = R32((uint32_t)(esi + 0x444u));
/* 7d8106: mov ecx, dword ptr [esi + 0x44c] */
  ecx = R32((uint32_t)(esi + 0x44cu));
/* 7d810c: mov eax, 4 */
  eax = 0x4u;
/* 7d8111: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7d8113: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 7d8115: mov eax, dword ptr [esi + 0x508] */
  eax = R32((uint32_t)(esi + 0x508u));
/* 7d811b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d811d: mov dword ptr [esi + 0x444], edx */
  W32((uint32_t)(esi + 0x444u), edx);
/* 7d8123: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 7d8129: je 0x7d8162 */
  if (zf) goto L_7d8162;
L_7d812b: /* 7d812b: lea ecx, [ebp - 0xee8] */
  ecx = (uint32_t)(ebp + 0xfffff118u);
/* 7d8131: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8132: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8135: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7d813bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7d813b: mov ecx, dword ptr [esi + 0x508] */
  ecx = R32((uint32_t)(esi + 0x508u));
/* 7d8141: lea edx, [ebp - 0xe8] */
  edx = (uint32_t)(ebp + 0xffffff18u);
/* 7d8147: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8148: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7d814b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d814c: mov byte ptr [ebp - 4], 0x2a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2au);
/* 7d8150: call 0x6c6a87 */
  esp -= 4; W32(esp, 0x7d8155u); SPILL(); f_6c6a87(); if (g_unwind) return; RELOAD();
/* 7d8155: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8158: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7d815c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d8162u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7d8162: /* 7d8162: xor edi, edi */
  edi = 0;
L_7d8164: /* 7d8164: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d816a: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d816d: jge 0x7d81bc */
  if ((sf == of)) goto L_7d81bc;
L_7d816f: /* 7d816f: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d8172: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7d8175: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8177: je 0x7d81b9 */
  if (zf) goto L_7d81b9;
L_7d8179: /* 7d8179: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8180: jne 0x7d81b9 */
  if (!zf) goto L_7d81b9;
L_7d8182: /* 7d8182: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8183: mov ecx, esp */
  ecx = esp;
/* 7d8185: push 0x163 */
  { uint32_t v = 0x163u; esp -= 4; W32(esp, v); }
/* 7d818a: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d8190u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d8190: mov ecx, esi */
  ecx = esi;
/* 7d8192: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7d8198u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7d8198: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d819a: je 0x7d81b9 */
  if (zf) goto L_7d81b9;
L_7d819c: /* 7d819c: mov edx, dword ptr [0xb7e33c] */
  edx = R32((uint32_t)(0xb7e33cu));
/* 7d81a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d81a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d81a5: mov ecx, esi */
  ecx = esi;
/* 7d81a7: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d81adu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d81ad: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d81af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d81b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d81b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d81b4: mov ecx, esi */
  ecx = esi;
/* 7d81b6: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d81b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d81b9: /* 7d81b9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d81ba: jmp 0x7d8164 */
  goto L_7d8164;
L_7d81bc: /* 7d81bc: xor edi, edi */
  edi = 0;
/* 7d81be: mov edi, edi */
  edi = edi;
L_7d81c0: /* 7d81c0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d81c6: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d81c9: jge 0x7d8218 */
  if ((sf == of)) goto L_7d8218;
L_7d81cb: /* 7d81cb: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d81ce: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d81d1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d81d3: je 0x7d8215 */
  if (zf) goto L_7d8215;
L_7d81d5: /* 7d81d5: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d81dc: jne 0x7d8215 */
  if (!zf) goto L_7d8215;
L_7d81de: /* 7d81de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d81df: mov ecx, esp */
  ecx = esp;
/* 7d81e1: push 0x164 */
  { uint32_t v = 0x164u; esp -= 4; W32(esp, v); }
/* 7d81e6: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d81ecu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d81ec: mov ecx, esi */
  ecx = esi;
/* 7d81ee: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7d81f4u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7d81f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d81f6: je 0x7d8215 */
  if (zf) goto L_7d8215;
L_7d81f8: /* 7d81f8: mov ecx, dword ptr [0xb7e340] */
  ecx = R32((uint32_t)(0xb7e340u));
/* 7d81fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8200: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8201: mov ecx, esi */
  ecx = esi;
/* 7d8203: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d8209u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d8209: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d820b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d820d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d820f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8210: mov ecx, esi */
  ecx = esi;
/* 7d8212: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d8215u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8215: /* 7d8215: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8216: jmp 0x7d81c0 */
  goto L_7d81c0;
L_7d8218: /* 7d8218: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d821b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7d8221u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7d8221: mov byte ptr [ebp - 4], 0x2b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2bu);
/* 7d8225: xor edi, edi */
  edi = 0;
/* 7d8227: jmp 0x7d8230 */
  goto L_7d8230;
L_7d8230: /* 7d8230: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8236: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8239: jge 0x7d8291 */
  if ((sf == of)) goto L_7d8291;
L_7d823b: /* 7d823b: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d823e: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7d8241: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8243: je 0x7d825a */
  if (zf) goto L_7d825a;
L_7d8245: /* 7d8245: test byte ptr [ecx + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d824c: jne 0x7d825a */
  if (!zf) goto L_7d825a;
L_7d824e: /* 7d824e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d8250: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8252: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8254: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0x7d825au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d825a: /* 7d825a: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8260: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d8263: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7d8266: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8268: je 0x7d828e */
  if (zf) goto L_7d828e;
L_7d826a: /* 7d826a: push 0xb6dcb8 */
  { uint32_t v = 0xb6dcb8u; esp -= 4; W32(esp, v); }
/* 7d826f: mov ecx, esi */
  ecx = esi;
/* 7d8271: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8277u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8277: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8279: je 0x7d828e */
  if (zf) goto L_7d828e;
L_7d827b: /* 7d827b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d827d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d827f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d8282: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8288u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8288: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7d828b: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
L_7d828e: /* 7d828e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d828f: jmp 0x7d8230 */
  goto L_7d8230;
L_7d8291: /* 7d8291: xor esi, esi */
  esi = 0;
L_7d8293: /* 7d8293: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8299: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d829c: jge 0x7d82bd */
  if ((sf == of)) goto L_7d82bd;
L_7d829e: /* 7d829e: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d82a1: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d82a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82a6: je 0x7d82ba */
  if (zf) goto L_7d82ba;
L_7d82a8: /* 7d82a8: test byte ptr [ecx + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82af: jne 0x7d82ba */
  if (!zf) goto L_7d82ba;
L_7d82b1: /* 7d82b1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d82b3: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7d82b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d82b7: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d82bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d82ba: /* 7d82ba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d82bb: jmp 0x7d8293 */
  goto L_7d8293;
L_7d82bd: /* 7d82bd: xor edi, edi */
  edi = 0;
/* 7d82bf: nop  */
L_7d82c0: /* 7d82c0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d82c6: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d82c9: jge 0x7d8330 */
  if ((sf == of)) goto L_7d8330;
L_7d82cb: /* 7d82cb: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d82ce: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7d82d1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82d3: je 0x7d832d */
  if (zf) goto L_7d832d;
L_7d82d5: /* 7d82d5: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82dc: jne 0x7d832d */
  if (!zf) goto L_7d832d;
L_7d82de: /* 7d82de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d82df: mov ecx, esp */
  ecx = esp;
/* 7d82e1: push 0x165 */
  { uint32_t v = 0x165u; esp -= 4; W32(esp, v); }
/* 7d82e6: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d82ecu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d82ec: mov ecx, esi */
  ecx = esi;
/* 7d82ee: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7d82f4u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7d82f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82f6: je 0x7d8315 */
  if (zf) goto L_7d8315;
L_7d82f8: /* 7d82f8: mov edx, dword ptr [0xb7e344] */
  edx = R32((uint32_t)(0xb7e344u));
/* 7d82fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8300: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8301: mov ecx, esi */
  ecx = esi;
/* 7d8303: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d8309u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d8309: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d830b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d830d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d830f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8310: mov ecx, esi */
  ecx = esi;
/* 7d8312: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d8315u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8315: /* 7d8315: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d831b: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d831e: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 7d8321: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8323: je 0x7d832d */
  if (zf) goto L_7d832d;
L_7d8325: /* 7d8325: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d8327: call dword ptr [edx + 0x110] */
  { uint32_t t = R32((uint32_t)(edx + 0x110u)); esp -= 4; W32(esp, 0x7d832du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d832d: /* 7d832d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d832e: jmp 0x7d82c0 */
  goto L_7d82c0;
L_7d8330: /* 7d8330: xor edi, edi */
  edi = 0;
L_7d8332: /* 7d8332: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8338: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d833b: jge 0x7d8370 */
  if ((sf == of)) goto L_7d8370;
L_7d833d: /* 7d833d: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8340: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d8343: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8345: je 0x7d836d */
  if (zf) goto L_7d836d;
L_7d8347: /* 7d8347: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d834e: jne 0x7d836d */
  if (!zf) goto L_7d836d;
L_7d8350: /* 7d8350: mov ecx, dword ptr [0xb7e3f4] */
  ecx = R32((uint32_t)(0xb7e3f4u));
/* 7d8356: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8358: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8359: mov ecx, esi */
  ecx = esi;
/* 7d835b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d8361u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d8361: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8363: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8365: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8367: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8368: mov ecx, esi */
  ecx = esi;
/* 7d836a: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d836du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d836d: /* 7d836d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d836e: jmp 0x7d8332 */
  goto L_7d8332;
L_7d8370: /* 7d8370: xor edi, edi */
  edi = 0;
L_7d8372: /* 7d8372: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8378: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d837b: jge 0x7d83b0 */
  if ((sf == of)) goto L_7d83b0;
L_7d837d: /* 7d837d: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8380: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d8383: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8385: je 0x7d83ad */
  if (zf) goto L_7d83ad;
L_7d8387: /* 7d8387: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d838e: jne 0x7d83ad */
  if (!zf) goto L_7d83ad;
L_7d8390: /* 7d8390: mov ecx, dword ptr [0xb7e3b8] */
  ecx = R32((uint32_t)(0xb7e3b8u));
/* 7d8396: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8398: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8399: mov ecx, esi */
  ecx = esi;
/* 7d839b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d83a1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d83a1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d83a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d83a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d83a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d83a8: mov ecx, esi */
  ecx = esi;
/* 7d83aa: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d83adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d83ad: /* 7d83ad: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d83ae: jmp 0x7d8372 */
  goto L_7d8372;
L_7d83b0: /* 7d83b0: xor esi, esi */
  esi = 0;
/* 7d83b2: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d83c0: /* 7d83c0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d83c6: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d83c9: jge 0x7d850a */
  if ((sf == of)) goto L_7d850a;
L_7d83cf: /* 7d83cf: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d83d2: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d83d6: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d83dc: /* 7d83dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d83de: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7d83e1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d83e7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d83e7: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d83ed: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d83f0: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7d83f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d83f4: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d83f7: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d83fd: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7d8403u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8403: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8405: je 0x7d84d6 */
  if (zf) goto L_7d84d6;
L_7d840b: /* 7d840b: xor edi, edi */
  edi = 0;
/* 7d840d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d8410: /* 7d8410: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8416: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8419: jge 0x7d8504 */
  if ((sf == of)) goto L_7d8504;
L_7d841f: /* 7d841f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8422: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7d8425: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8427: je 0x7d84d0 */
  if (zf) goto L_7d84d0;
L_7d842d: /* 7d842d: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* 7d8430: add edx, 0x1f8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7d8436: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8437: add ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d843d: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7d8443u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8443: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8445: jne 0x7d847c */
  if (!zf) goto L_7d847c;
L_7d8447: /* 7d8447: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d844d: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8450: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 7d8453: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 7d8456: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8457: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x7d845du); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 7d845d: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8463: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8466: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d8469: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d846f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8470: mov ecx, eax */
  ecx = eax;
/* 7d8472: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7d8478u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8478: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d847a: je 0x7d84d0 */
  if (zf) goto L_7d84d0;
L_7d847c: /* 7d847c: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8482: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d8485: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d8488: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d848a: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 7d848d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d848f: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 7d8492: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d8495: mov ecx, esp */
  ecx = esp;
/* 7d8497: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7d849e: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d84a1: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7d84a3: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7d84aa: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d84ad: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7d84b0: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 7d84b7: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d84ba: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 7d84bd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7d84c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d84c1: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7d84c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d84c7: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d84ca: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d84cb: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d84d0: /* 7d84d0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d84d1: jmp 0x7d8410 */
  goto L_7d8410;
L_7d84d6: /* 7d84d6: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d84dc: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d84df: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d84e2: test byte ptr [ecx + 0x88], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84e9: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d84eb: /* 7d84eb: test byte ptr [ecx + 0x87], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x87u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84f2: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d84f4: /* 7d84f4: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 7d84f7: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84f9: je 0x7d84ff */
  if (zf) goto L_7d84ff;
L_7d84fb: /* 7d84fb: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d84fd: jne 0x7d8504 */
  if (!zf) goto L_7d8504;
L_7d84ff: /* 7d84ff: call 0x6c5754 */
  esp -= 4; W32(esp, 0x7d8504u); SPILL(); f_6c5754(); if (g_unwind) return; RELOAD();
L_7d8504: /* 7d8504: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d8505: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d850a: /* 7d850a: xor ecx, ecx */
  ecx = 0;
/* 7d850c: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 7d850f: nop  */
L_7d8510: /* 7d8510: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8516: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8519: jge 0x7d85bd */
  if ((sf == of)) goto L_7d85bd;
L_7d851f: /* 7d851f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8522: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 7d8525: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8527: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d852d: /* 7d852d: cmp byte ptr [edi + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8531: jne 0x7d85af */
  if (!zf) goto L_7d85af;
L_7d8533: /* 7d8533: mov ecx, dword ptr [edi + 0x30c] */
  ecx = R32((uint32_t)(edi + 0x30cu));
/* 7d8539: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d853b: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d853d: /* 7d853d: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 7d8542: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8548u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8548: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d854a: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d854c: /* 7d854c: mov esi, dword ptr [edi + 0x30c] */
  esi = R32((uint32_t)(edi + 0x30cu));
/* 7d8552: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8554: je 0x7d8567 */
  if (zf) goto L_7d8567;
L_7d8556: /* 7d8556: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 7d855b: mov ecx, esi */
  ecx = esi;
/* 7d855d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8563u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8563: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8565: jne 0x7d8569 */
  if (!zf) goto L_7d8569;
L_7d8567: /* 7d8567: xor esi, esi */
  esi = 0;
L_7d8569: /* 7d8569: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d856f: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8572: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d8574: cmp byte ptr [eax + 0x3f0], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3f0u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 7d857b: jae 0x7d858c */
  if (!cf) goto L_7d858c;
L_7d857d: /* 7d857d: test byte ptr [esi + 0x90], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8584: je 0x7d858c */
  if (zf) goto L_7d858c;
L_7d8586: /* 7d8586: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d8587: call 0x6c5ab0 */
  esp -= 4; W32(esp, 0x7d858cu); SPILL(); f_6c5ab0(); if (g_unwind) return; RELOAD();
L_7d858c: /* 7d858c: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8592: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d8595: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8597: cmp byte ptr [eax + 0x4c8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4c8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d859e: jne 0x7d85af */
  if (!zf) goto L_7d85af;
L_7d85a0: /* 7d85a0: test byte ptr [esi + 0x90], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d85a7: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d85a9: /* 7d85a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d85aa: call 0x6c5ab0 */
  esp -= 4; W32(esp, 0x7d85afu); SPILL(); f_6c5ab0(); if (g_unwind) return; RELOAD();
L_7d85af: /* 7d85af: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d85b2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d85b3: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7d85b6: mov ecx, eax */
  ecx = eax;
/* 7d85b8: jmp 0x7d8510 */
  goto L_7d8510;
L_7d85bd: /* 7d85bd: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7d85c0: and dword ptr [eax + 0x44c], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44cu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x44cu), r);
  }
/* 7d85c7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d85ca: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7d85ce: call 0x6cb014 */
  esp -= 4; W32(esp, 0x7d85d3u); SPILL(); f_6cb014(); if (g_unwind) return; RELOAD();
/* 7d85d3: jmp 0x7d8667 */
  goto L_7d8667;
L_7d85d8: /* 7d85d8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d85db: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 7d85e1: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d85e4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d85e6: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 7d85ec: mov ebx, dword ptr [0xcfa2c0] */
  ebx = R32((uint32_t)(0xcfa2c0u));
/* 7d85f2: fstp qword ptr [eax + 0xd0] */
  WF64((uint32_t)(eax + 0xd0u), ST0); FPOP();
/* 7d85f8: xor edi, edi */
  edi = 0;
/* 7d85fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7d8600: /* 7d8600: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8603: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 7d8609: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d860c: jge 0x7d8664 */
  if ((sf == of)) goto L_7d8664;
L_7d860e: /* 7d860e: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8611: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d8614: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8616: je 0x7d8631 */
  if (zf) goto L_7d8631;
L_7d8618: /* 7d8618: mov ecx, dword ptr [0xb7e550] */
  ecx = R32((uint32_t)(0xb7e550u));
/* 7d861e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8620: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8621: mov ecx, esi */
  ecx = esi;
/* 7d8623: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d8625u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8625: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8627: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8629: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d862b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d862c: mov ecx, esi */
  ecx = esi;
/* 7d862e: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d8631u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8631: /* 7d8631: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8632: jmp 0x7d8600 */
  goto L_7d8600;
L_7d8664: /* 7d8664: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
L_7d8667: /* 7d8667: mov dword ptr [ebp - 4], 0x21 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7d866e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8671: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 7d8675: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7d867bu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7d867b: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8681: mov esi, dword ptr [edx + 0x2c] */
  esi = R32((uint32_t)(edx + 0x2cu));
/* 7d8684: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8686: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8688: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d868b: mov byte ptr [ebp - 4], 0x2e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2eu);
/* 7d868f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8695u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8695: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d8697: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d869a: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d869d: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d86a3: mov esi, dword ptr [eax + 0x2c] */
  esi = R32((uint32_t)(eax + 0x2cu));
/* 7d86a6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d86a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d86aa: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d86ad: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d86b0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d86b6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d86b6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d86b8: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d86bb: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d86be: mov edi, 2 */
  edi = 0x2u;
L_7d86c3: /* 7d86c3: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d86c9: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d86cc: jge 0x7d8704 */
  if ((sf == of)) goto L_7d8704;
L_7d86ce: /* 7d86ce: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d86d1: lea esi, [eax + edi*4] */
  esi = (uint32_t)(eax + edi*4);
/* 7d86d4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7d86d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86d8: je 0x7d8701 */
  if (zf) goto L_7d8701;
L_7d86da: /* 7d86da: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86e1: je 0x7d8701 */
  if (zf) goto L_7d8701;
L_7d86e3: /* 7d86e3: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86ea: jne 0x7d8701 */
  if (!zf) goto L_7d8701;
L_7d86ec: /* 7d86ec: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d86ee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d86f0: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d86f3: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d86f9u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d86f9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d86fb: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d86fe: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d8701: /* 7d8701: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8702: jmp 0x7d86c3 */
  goto L_7d86c3;
L_7d8704: /* 7d8704: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d870a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d870d: mov dword ptr [eax + 0x108], ecx */
  W32((uint32_t)(eax + 0x108u), ecx);
/* 7d8713: mov edi, 2 */
  edi = 0x2u;
/* 7d8718: jmp 0x7d8720 */
  goto L_7d8720;
L_7d8720: /* 7d8720: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8726: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8729: jge 0x7d8762 */
  if ((sf == of)) goto L_7d8762;
L_7d872b: /* 7d872b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d872e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7d8731: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8733: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 7d8736: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d8738: /* 7d8738: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d873f: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d8741: /* 7d8741: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8748: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d874a: /* 7d874a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d874c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d874e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8751: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8757u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8757: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d8759: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d875c: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d875f: /* 7d875f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8760: jmp 0x7d8720 */
  goto L_7d8720;
L_7d8762: /* 7d8762: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8768: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d876b: mov dword ptr [eax + 0x104], ecx */
  W32((uint32_t)(eax + 0x104u), ecx);
/* 7d8771: mov edi, 2 */
  edi = 0x2u;
/* 7d8776: jmp 0x7d8780 */
  goto L_7d8780;
L_7d8780: /* 7d8780: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8786: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8789: jge 0x7d87b9 */
  if ((sf == of)) goto L_7d87b9;
L_7d878b: /* 7d878b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d878e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7d8791: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8793: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 7d8796: je 0x7d87b6 */
  if (zf) goto L_7d87b6;
L_7d8798: /* 7d8798: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d879f: jne 0x7d87b6 */
  if (!zf) goto L_7d87b6;
L_7d87a1: /* 7d87a1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d87a5: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d87a8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d87aeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d87ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d87b0: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d87b3: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d87b6: /* 7d87b6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d87b7: jmp 0x7d8780 */
  goto L_7d8780;
L_7d87b9: /* 7d87b9: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 7d87be: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d87c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d87c6: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d87c9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d87cb: je 0x7d87eb */
  if (zf) goto L_7d87eb;
L_7d87cd: /* 7d87cd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7d87d0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d87d2: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d87d7: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d87dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87de: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d87e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d87e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d87e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e8: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d87ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d87eb: /* 7d87eb: xor eax, eax */
  eax = 0;
/* 7d87ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d87f0: /* 7d87f0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d87f3: jge 0x7d87f8 */
  if ((sf == of)) goto L_7d87f8;
L_7d87f5: /* 7d87f5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d87f6: jmp 0x7d87f0 */
  goto L_7d87f0;
L_7d87f8: /* 7d87f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87fa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87fc: mov ecx, esi */
  ecx = esi;
/* 7d87fe: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7d8804u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7d8804: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d880a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d880d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d880f: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8813: mov ecx, esi */
  ecx = esi;
/* 7d8815: mov edi, eax */
  edi = eax;
/* 7d8817: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d881du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d881d: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 7d8823: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d8825: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8827: je 0x7d8843 */
  if (zf) goto L_7d8843;
L_7d8829: /* 7d8829: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d882b: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d8830: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d8835: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8837: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8839: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d883a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d883b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d883e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d883f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8840: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d8843u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8843: /* 7d8843: xor eax, eax */
  eax = 0;
L_7d8845: /* 7d8845: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8848: jge 0x7d885f */
  if ((sf == of)) goto L_7d885f;
L_7d884a: /* 7d884a: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8850: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8853: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d8856: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 7d8859: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d885c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d885d: jmp 0x7d8845 */
  goto L_7d8845;
L_7d885f: /* 7d885f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8862: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 7d8866: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x7d886bu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 7d886b: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d886e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8870: mov esi, 0x21 */
  esi = 0x21u;
/* 7d8875: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8878: mov byte ptr [ebp - 4], 0x30 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x30u);
/* 7d887c: je 0x7d892e */
  if (zf) goto L_7d892e;
L_7d8882: /* 7d8882: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8888: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d888a: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x7d8890u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8890: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8892: je 0x7d889c */
  if (zf) goto L_7d889c;
L_7d8894: /* 7d8894: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d889a: jmp 0x7d88a2 */
  goto L_7d88a2;
L_7d889c: /* 7d889c: mov eax, dword ptr [ebx + 0x10c] */
  eax = R32((uint32_t)(ebx + 0x10cu));
L_7d88a2: /* 7d88a2: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 7d88a5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d88ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d88ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d88ae: call 0x7ccae0 */
  esp -= 4; W32(esp, 0x7d88b3u); SPILL(); f_7ccae0(); if (g_unwind) return; RELOAD();
/* 7d88b3: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d88b9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88bb: je 0x7d88ce */
  if (zf) goto L_7d88ce;
L_7d88bd: /* 7d88bd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88bf: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7d88c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88c5: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88c8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88cb: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d88ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88ce: /* 7d88ce: xor edi, edi */
  edi = 0;
L_7d88d0: /* 7d88d0: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d88d3: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d88d6: jge 0x7d8929 */
  if ((sf == of)) goto L_7d8929;
L_7d88d8: /* 7d88d8: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d88db: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d88de: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 7d88e1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88e3: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7d88e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88e9: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 7d88ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88ee: je 0x7d88f6 */
  if (zf) goto L_7d88f6;
L_7d88f0: /* 7d88f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d88f3: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d88f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88f6: /* 7d88f6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d88f7: jmp 0x7d88d0 */
  goto L_7d88d0;
L_7d8929: /* 7d8929: mov esi, 0x21 */
  esi = 0x21u;
L_7d892e: /* 7d892e: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7d8931: movzx edx, byte ptr [edx + 0x448] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x448u)));
/* 7d8938: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d893e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8940: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8941: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8944: call dword ptr [eax + 0xdc] */
  { uint32_t t = R32((uint32_t)(eax + 0xdcu)); esp -= 4; W32(esp, 0x7d894au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d894a: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8951: lea ecx, [ebx + 0x114] */
  ecx = (uint32_t)(ebx + 0x114u);
/* 7d8957: mov byte ptr [ebp - 4], 0x32 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x32u);
/* 7d895b: call 0x6ca50b */
  esp -= 4; W32(esp, 0x7d8960u); SPILL(); f_6ca50b(); if (g_unwind) return; RELOAD();
/* 7d8960: mov ecx, dword ptr [0xcfa814] */
  ecx = R32((uint32_t)(0xcfa814u));
/* 7d8966: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8969: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d896c: je 0x7d8a28 */
  if (zf) goto L_7d8a28;
L_7d8972: /* 7d8972: push 0xadafc0 */
  { uint32_t v = 0xadafc0u; esp -= 4; W32(esp, v); }
/* 7d8977: push 0xadafcc */
  { uint32_t v = 0xadafccu; esp -= 4; W32(esp, v); }
/* 7d897c: push 0xadafd8 */
  { uint32_t v = 0xadafd8u; esp -= 4; W32(esp, v); }
/* 7d8981: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8987: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d898cu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d898c: push 0xadaff4 */
  { uint32_t v = 0xadaff4u; esp -= 4; W32(esp, v); }
/* 7d8991: push 0xadb000 */
  { uint32_t v = 0xadb000u; esp -= 4; W32(esp, v); }
/* 7d8996: push 0xadb00c */
  { uint32_t v = 0xadb00cu; esp -= 4; W32(esp, v); }
/* 7d899b: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89a1: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89a6u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89a6: push 0xadb028 */
  { uint32_t v = 0xadb028u; esp -= 4; W32(esp, v); }
/* 7d89ab: push 0xadb034 */
  { uint32_t v = 0xadb034u; esp -= 4; W32(esp, v); }
/* 7d89b0: push 0xadb040 */
  { uint32_t v = 0xadb040u; esp -= 4; W32(esp, v); }
/* 7d89b5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89bb: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89c0u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89c0: push 0xadb05c */
  { uint32_t v = 0xadb05cu; esp -= 4; W32(esp, v); }
/* 7d89c5: push 0xadb068 */
  { uint32_t v = 0xadb068u; esp -= 4; W32(esp, v); }
/* 7d89ca: push 0xadb074 */
  { uint32_t v = 0xadb074u; esp -= 4; W32(esp, v); }
/* 7d89cf: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89d5: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89dau); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89da: push 0xadb090 */
  { uint32_t v = 0xadb090u; esp -= 4; W32(esp, v); }
/* 7d89df: push 0xadb09c */
  { uint32_t v = 0xadb09cu; esp -= 4; W32(esp, v); }
/* 7d89e4: push 0xadb0a8 */
  { uint32_t v = 0xadb0a8u; esp -= 4; W32(esp, v); }
/* 7d89e9: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89ef: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89f4u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89f4: push 0xadb0c4 */
  { uint32_t v = 0xadb0c4u; esp -= 4; W32(esp, v); }
/* 7d89f9: push 0xadb0d0 */
  { uint32_t v = 0xadb0d0u; esp -= 4; W32(esp, v); }
/* 7d89fe: push 0xadb0dc */
  { uint32_t v = 0xadb0dcu; esp -= 4; W32(esp, v); }
/* 7d8a03: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a09: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a0eu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d8a0e: push 0xadb0f8 */
  { uint32_t v = 0xadb0f8u; esp -= 4; W32(esp, v); }
/* 7d8a13: push 0xadb104 */
  { uint32_t v = 0xadb104u; esp -= 4; W32(esp, v); }
/* 7d8a18: push 0xadb120 */
  { uint32_t v = 0xadb120u; esp -= 4; W32(esp, v); }
/* 7d8a1d: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a23: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a28u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
L_7d8a28: /* 7d8a28: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8a2e: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d8a31: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d8a33: test byte ptr [eax + 0x404], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x404u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8a3a: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7d8a3d: jne 0x7d8a90 */
  if (!zf) goto L_7d8a90;
L_7d8a3f: /* 7d8a3f: xor ebx, ebx */
  ebx = 0;
L_7d8a41: /* 7d8a41: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d8a44: cmp ebx, dword ptr [ecx + 0x3fc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3fcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8a4a: jge 0x7d8a90 */
  if ((sf == of)) goto L_7d8a90;
L_7d8a4c: /* 7d8a4c: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 7d8a52: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7d8a54: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8a56: push 0xadb13c */
  { uint32_t v = 0xadb13cu; esp -= 4; W32(esp, v); }
/* 7d8a5b: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 7d8a60: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7d8a62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8a62: mov edi, eax */
  edi = eax;
/* 7d8a64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d8a65: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x7d8a6au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 7d8a6a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a6d: mov esi, dword ptr [ecx + 0x108] */
  esi = R32((uint32_t)(ecx + 0x108u));
/* 7d8a73: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8a76: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8a78: add esi, 0x1178 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1178u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8a7e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8a80: mov ecx, esi */
  ecx = esi;
/* 7d8a82: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8a88u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8a88: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8a8a: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 7d8a8d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7d8a8e: jmp 0x7d8a41 */
  goto L_7d8a41;
L_7d8a90: /* 7d8a90: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a93: mov esi, dword ptr [eax + 0x108] */
  esi = R32((uint32_t)(eax + 0x108u));
/* 7d8a99: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 7d8a9f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d8aa3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d8aa9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d8aa9: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7d8aac: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7d8ab0: call 0x6c312a */
  esp -= 4; W32(esp, 0x7d8ab5u); SPILL(); f_6c312a(); if (g_unwind) return; RELOAD();
/* 7d8ab5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8abb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7d8abf: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7d8ac4u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 7d8ac4: mov eax, esi */
  eax = esi;
/* 7d8ac6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d8ac9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d8ad0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d8ad1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d8ad2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d8ad3: mov esp, ebp */
  esp = ebp;
/* 7d8ad5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d8ad6: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7d7676(void) {
  LOAD_REGS();
L_7d7676: /* 7d7676: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 7d767d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d7680: /* 7d7680: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7685: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7688: jge 0x7d77fb */
  if ((sf == of)) goto L_7d77fb;
L_7d768e: /* 7d768e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d7690: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d7693: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7d7696: xor edi, edi */
  edi = 0;
/* 7d7698: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d769a: je 0x7d76b8 */
  if (zf) goto L_7d76b8;
L_7d769c: /* 7d769c: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d76a1: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d76a7u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d76a7: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d76a9: je 0x7d76b8 */
  if (zf) goto L_7d76b8;
L_7d76ab: /* 7d76ab: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d76b0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d76b2: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d76b5: mov dword ptr [eax + 0x38], edi */
  W32((uint32_t)(eax + 0x38u), edi);
L_7d76b8: /* 7d76b8: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d76be: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d76c0: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d76c3: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d76c6: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d76c8: je 0x7d76e7 */
  if (zf) goto L_7d76e7;
L_7d76ca: /* 7d76ca: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d76cf: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d76d5u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d76d5: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d76d7: je 0x7d76e7 */
  if (zf) goto L_7d76e7;
L_7d76d9: /* 7d76d9: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d76df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d76e1: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d76e4: mov dword ptr [eax + 0x3c], edi */
  W32((uint32_t)(eax + 0x3cu), edi);
L_7d76e7: /* 7d76e7: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d76ec: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d76ee: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d76f1: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 7d76f4: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d76f6: je 0x7d7715 */
  if (zf) goto L_7d7715;
L_7d76f8: /* 7d76f8: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d76fd: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7703u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7703: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7705: je 0x7d7715 */
  if (zf) goto L_7d7715;
L_7d7707: /* 7d7707: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d770d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d770f: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d7712: mov dword ptr [eax + 0x40], edi */
  W32((uint32_t)(eax + 0x40u), edi);
L_7d7715: /* 7d7715: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d771b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d771d: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d7720: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 7d7723: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7725: je 0x7d7743 */
  if (zf) goto L_7d7743;
L_7d7727: /* 7d7727: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d772c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7732u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7732: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7734: je 0x7d7743 */
  if (zf) goto L_7d7743;
L_7d7736: /* 7d7736: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d773b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d773d: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d7740: mov dword ptr [eax + 0x44], edi */
  W32((uint32_t)(eax + 0x44u), edi);
L_7d7743: /* 7d7743: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d7749: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d774b: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d774e: mov ecx, dword ptr [eax + 0x48] */
  ecx = R32((uint32_t)(eax + 0x48u));
/* 7d7751: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7753: je 0x7d7772 */
  if (zf) goto L_7d7772;
L_7d7755: /* 7d7755: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d775a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7760u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7760: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7762: je 0x7d7772 */
  if (zf) goto L_7d7772;
L_7d7764: /* 7d7764: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d776a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d776c: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d776f: mov dword ptr [eax + 0x48], edi */
  W32((uint32_t)(eax + 0x48u), edi);
L_7d7772: /* 7d7772: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7777: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7779: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d777c: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* 7d777f: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7781: je 0x7d77a0 */
  if (zf) goto L_7d77a0;
L_7d7783: /* 7d7783: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d7788: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d778eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d778e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7790: je 0x7d77a0 */
  if (zf) goto L_7d77a0;
L_7d7792: /* 7d7792: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d7798: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d779a: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d779d: mov dword ptr [eax + 0x4c], edi */
  W32((uint32_t)(eax + 0x4cu), edi);
L_7d77a0: /* 7d77a0: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d77a6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d77a8: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d77ab: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 7d77ae: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d77b0: je 0x7d77d0 */
  if (zf) goto L_7d77d0;
L_7d77b2: /* 7d77b2: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d77b7: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d77bdu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d77bd: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d77bf: je 0x7d77d0 */
  if (zf) goto L_7d77d0;
L_7d77c1: /* 7d77c1: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d77c6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d77c8: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d77cb: mov dword ptr [eax + 0x50], edi */
  W32((uint32_t)(eax + 0x50u), edi);
/* 7d77ce: mov edi, edi */
  edi = edi;
L_7d77d0: /* 7d77d0: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d77d5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d77d8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d77d9: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d77db: jge 0x7d7680 */
  if ((sf == of)) goto L_7d7680;
L_7d77e1: /* 7d77e1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d77e3: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d77e6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d77e8: je 0x7d77d0 */
  if (zf) goto L_7d77d0;
L_7d77ea: /* 7d77ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d77eb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d77f1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d77f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d77f3: jne 0x7d7680 */
  if (!zf) goto L_7d7680;
L_7d77f9: /* 7d77f9: jmp 0x7d77d0 */
  goto L_7d77d0;
L_7d77fb: /* 7d77fb: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d77fe: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7d7804: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 7d7808: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d780eu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d780e: mov ecx, eax */
  ecx = eax;
/* 7d7810: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d7816u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d7816: push 0xadad94 */
  { uint32_t v = 0xadad94u; esp -= 4; W32(esp, v); }
/* 7d781b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d781c: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7d7822u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7d7822: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7825: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7827: je 0x7d7950 */
  if (zf) goto L_7d7950;
L_7d782d: /* 7d782d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7830: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d7832: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7834: mov ecx, esi */
  ecx = esi;
/* 7d7836: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7d7839u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7839: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7d783c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d783e: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 7d7845: je 0x7d785c */
  if (zf) goto L_7d785c;
L_7d7847: /* 7d7847: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7849: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7d784fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d784f: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7d7852: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7854: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7856: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7d7859: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d785cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d785c: /* 7d785c: mov ebx, 0xb5bf68 */
  ebx = 0xb5bf68u;
/* 7d7861: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_7d7864: /* 7d7864: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7869: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d7870: /* 7d7870: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d7873: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7874: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7876: jge 0x7d78f0 */
  if ((sf == of)) goto L_7d78f0;
L_7d7878: /* 7d7878: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d787a: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7d787d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d787f: je 0x7d7870 */
  if (zf) goto L_7d7870;
L_7d7881: /* 7d7881: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d7882: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7888u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7888: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d788a: je 0x7d7864 */
  if (zf) goto L_7d7864;
L_7d788c: /* 7d788c: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7891: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7894: jge 0x7d78f0 */
  if ((sf == of)) goto L_7d78f0;
L_7d7896: /* 7d7896: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d7898: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d789b: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7d78a1: mov edi, dword ptr [edx + esi*4] */
  edi = R32((uint32_t)(edx + esi*4));
/* 7d78a4: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d78aau); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d78aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d78ab: mov ecx, edi */
  ecx = edi;
/* 7d78ad: call dword ptr [0xcfa828] */
  esp -= 4; W32(esp, 0x7d78b3u); SPILL(); f_4e33cd(); if (g_unwind) return; /* Core!?IsIn@UObject@@QBEHPAV1@@Z */ RELOAD();
/* 7d78b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d78b5: je 0x7d78cd */
  if (zf) goto L_7d78cd;
L_7d78b7: /* 7d78b7: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d78bd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d78bf: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d78c2: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7d78c7: call dword ptr [0xcfa604] */
  esp -= 4; W32(esp, 0x7d78cdu); SPILL(); f_4e2077(); if (g_unwind) return; /* Core!?SetFlags@UObject@@QAEXK@Z */ RELOAD();
L_7d78cd: /* 7d78cd: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
L_7d78d2: /* 7d78d2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d78d5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d78d6: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d78d8: jge 0x7d78f0 */
  if ((sf == of)) goto L_7d78f0;
L_7d78da: /* 7d78da: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d78dc: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7d78df: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d78e1: je 0x7d78d2 */
  if (zf) goto L_7d78d2;
L_7d78e3: /* 7d78e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d78e4: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d78eau); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d78ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d78ec: je 0x7d78cd */
  if (zf) goto L_7d78cd;
L_7d78ee: /* 7d78ee: jmp 0x7d788c */
  goto L_7d788c;
L_7d78f0: /* 7d78f0: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d78f3: xor esi, esi */
  esi = 0;
L_7d78f5: /* 7d78f5: mov eax, dword ptr [edi + 0x108] */
  eax = R32((uint32_t)(edi + 0x108u));
/* 7d78fb: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d78fe: jge 0x7d7918 */
  if ((sf == of)) goto L_7d7918;
L_7d7900: /* 7d7900: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d7903: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d7906: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7908: je 0x7d7915 */
  if (zf) goto L_7d7915;
L_7d790a: /* 7d790a: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7d790f: call dword ptr [0xcfa91c] */
  esp -= 4; W32(esp, 0x7d7915u); SPILL(); f_4e1834(); if (g_unwind) return; /* Core!?ClearFlags@UObject@@QAEXK@Z */ RELOAD();
L_7d7915: /* 7d7915: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7916: jmp 0x7d78f5 */
  goto L_7d78f5;
L_7d7918: /* 7d7918: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 7d791d: call dword ptr [0xcfa918] */
  esp -= 4; W32(esp, 0x7d7923u); SPILL(); f_4e3fa8(); if (g_unwind) return; /* Core!?CollectGarbage@UObject@@SAXK@Z */ RELOAD();
/* 7d7923: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 7d7926: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7929: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d792b: je 0x7d7950 */
  if (zf) goto L_7d7950;
L_7d792d: /* 7d792d: xor ecx, ecx */
  ecx = 0;
/* 7d792f: nop  */
L_7d7930: /* 7d7930: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 7d7933: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7936: jge 0x7d7950 */
  if ((sf == of)) goto L_7d7950;
L_7d7938: /* 7d7938: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d793b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7d793e: cmp dword ptr [edx + ecx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7941: jne 0x7d79d0 */
  if (!zf) goto L_7d79d0;
L_7d7947: /* 7d7947: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 7d794a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d794c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d794d: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d7950u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d7950: /* 7d7950: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7953: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7d7956: xor ebx, ebx */
  ebx = 0;
/* 7d7958: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d795a: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d7961: je 0x7d796b */
  if (zf) goto L_7d796b;
L_7d7963: /* 7d7963: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7965: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x7d796bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d796b: /* 7d796b: mov ecx, dword ptr [esi + 0x108] */
  ecx = R32((uint32_t)(esi + 0x108u));
/* 7d7971: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7973: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d7974: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7976: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7d7979u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7979: mov byte ptr [ebp - 4], 0x1f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1fu);
/* 7d797d: xor eax, eax */
  eax = 0;
/* 7d797f: nop  */
L_7d7980: /* 7d7980: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7983: jge 0x7d79e6 */
  if ((sf == of)) goto L_7d79e6;
L_7d7985: /* 7d7985: xor ecx, ecx */
  ecx = 0;
L_7d7987: /* 7d7987: cmp ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d798a: jge 0x7d79e1 */
  if ((sf == of)) goto L_7d79e1;
L_7d798c: /* 7d798c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d798f: mov edx, dword ptr [edx + 0x108] */
  edx = R32((uint32_t)(edx + 0x108u));
/* 7d7995: mov edi, dword ptr [edx + 0x8c] */
  edi = R32((uint32_t)(edx + 0x8cu));
/* 7d799b: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 7d799e: mov ebx, dword ptr [edi + esi*8 + 0x124] */
  ebx = R32((uint32_t)(edi + esi*8 + 0x124u));
/* 7d79a5: mov esi, dword ptr [edi + esi*8 + 0x128] */
  esi = R32((uint32_t)(edi + esi*8 + 0x128u));
/* 7d79ac: mov dword ptr [ebp + eax*8 - 0x2e4], esi */
  W32((uint32_t)(ebp + eax*8 + 0xfffffd1cu), esi);
/* 7d79b3: mov esi, eax */
  esi = eax;
/* 7d79b5: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7d79b8: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d79ba: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d79bc: mov dword ptr [ebp + eax*8 - 0x2e8], ebx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffd18u), ebx);
/* 7d79c3: jne 0x7d79d6 */
  if (!zf) goto L_7d79d6;
L_7d79c5: /* 7d79c5: mov byte ptr [esi + ecx + 0x110], 0 */
  W8((uint32_t)(esi + ecx + 0x110u), 0x0u);
/* 7d79cd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7d79ce: jmp 0x7d7987 */
  goto L_7d7987;
L_7d79d0: /* 7d79d0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7d79d1: jmp 0x7d7930 */
  goto L_7d7930;
L_7d79d6: /* 7d79d6: mov byte ptr [esi + ecx + 0x110], 0xff */
  W8((uint32_t)(esi + ecx + 0x110u), 0xffu);
/* 7d79de: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7d79df: jmp 0x7d7987 */
  goto L_7d7987;
L_7d79e1: /* 7d79e1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d79e2: xor ebx, ebx */
  ebx = 0;
/* 7d79e4: jmp 0x7d7980 */
  goto L_7d7980;
L_7d79e6: /* 7d79e6: mov dword ptr [ebp + 8], 1 */
  W32((uint32_t)(ebp + 0x8u), 0x1u);
/* 7d79ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d79f0: /* 7d79f0: cmp dword ptr [ebp + 8], 0x40 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d79f4: jge 0x7d7b12 */
  if ((sf == of)) goto L_7d7b12;
L_7d79fa: /* 7d79fa: xor esi, esi */
  esi = 0;
/* 7d79fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d7a00: /* 7d7a00: cmp esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a03: jge 0x7d7a61 */
  if ((sf == of)) goto L_7d7a61;
L_7d7a05: /* 7d7a05: xor edi, edi */
  edi = 0;
L_7d7a07: /* 7d7a07: cmp edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a0a: jge 0x7d7a5c */
  if ((sf == of)) goto L_7d7a5c;
L_7d7a0c: /* 7d7a0c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7a0f: mov edx, dword ptr [ecx + 0x108] */
  edx = R32((uint32_t)(ecx + 0x108u));
/* 7d7a15: mov eax, esi */
  eax = esi;
/* 7d7a17: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7d7a1a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d7a1c: movzx edx, byte ptr [eax + edi + 0x110] */
  edx = (uint32_t)(R8((uint32_t)(eax + edi + 0x110u)));
/* 7d7a24: lea ebx, [eax + edi + 0x110] */
  ebx = (uint32_t)(eax + edi + 0x110u);
/* 7d7a2b: cmp edx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a2e: jle 0x7d7a59 */
  if ((zf || sf != of)) goto L_7d7a59;
L_7d7a30: /* 7d7a30: mov eax, 1 */
  eax = 0x1u;
/* 7d7a35: xor edx, edx */
  edx = 0;
/* 7d7a37: mov ecx, edi */
  ecx = edi;
/* 7d7a39: call 0x99cc70 */
  esp -= 4; W32(esp, 0x7d7a3eu); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 7d7a3e: mov ecx, dword ptr [ebp + esi*8 - 0x2e8] */
  ecx = R32((uint32_t)(ebp + esi*8 + 0xfffffd18u));
/* 7d7a45: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7d7a47: mov eax, dword ptr [ebp + esi*8 - 0x2e4] */
  eax = R32((uint32_t)(ebp + esi*8 + 0xfffffd1cu));
/* 7d7a4e: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d7a50: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 7d7a52: je 0x7d7a59 */
  if (zf) goto L_7d7a59;
L_7d7a54: /* 7d7a54: mov al, byte ptr [ebp + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 7d7a57: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
L_7d7a59: /* 7d7a59: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d7a5a: jmp 0x7d7a07 */
  goto L_7d7a07;
L_7d7a5c: /* 7d7a5c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7a5d: xor ebx, ebx */
  ebx = 0;
/* 7d7a5f: jmp 0x7d7a00 */
  goto L_7d7a00;
L_7d7a61: /* 7d7a61: xor eax, eax */
  eax = 0;
L_7d7a63: /* 7d7a63: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a66: jge 0x7d7a79 */
  if ((sf == of)) goto L_7d7a79;
L_7d7a68: /* 7d7a68: mov dword ptr [ebp + eax*8 - 0x4e8], ebx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffb18u), ebx);
/* 7d7a6f: mov dword ptr [ebp + eax*8 - 0x4e4], ebx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffb1cu), ebx);
/* 7d7a76: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d7a77: jmp 0x7d7a63 */
  goto L_7d7a63;
L_7d7a79: /* 7d7a79: xor edi, edi */
  edi = 0;
/* 7d7a7b: jmp 0x7d7a80 */
  goto L_7d7a80;
L_7d7a80: /* 7d7a80: cmp edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a83: jge 0x7d7ae4 */
  if ((sf == of)) goto L_7d7ae4;
L_7d7a85: /* 7d7a85: xor esi, esi */
  esi = 0;
L_7d7a87: /* 7d7a87: cmp esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a8a: jge 0x7d7ae1 */
  if ((sf == of)) goto L_7d7ae1;
L_7d7a8c: /* 7d7a8c: mov eax, 1 */
  eax = 0x1u;
/* 7d7a91: xor edx, edx */
  edx = 0;
/* 7d7a93: mov ecx, esi */
  ecx = esi;
/* 7d7a95: call 0x99cc70 */
  esp -= 4; W32(esp, 0x7d7a9au); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 7d7a9a: mov ecx, dword ptr [ebp + edi*8 - 0x2e8] */
  ecx = R32((uint32_t)(ebp + edi*8 + 0xfffffd18u));
/* 7d7aa1: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7d7aa3: mov eax, dword ptr [ebp + edi*8 - 0x2e4] */
  eax = R32((uint32_t)(ebp + edi*8 + 0xfffffd1cu));
/* 7d7aaa: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d7aac: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 7d7aae: je 0x7d7ade */
  if (zf) goto L_7d7ade;
L_7d7ab0: /* 7d7ab0: mov edx, dword ptr [ebp + edi*8 - 0x4e8] */
  edx = R32((uint32_t)(ebp + edi*8 + 0xfffffb18u));
/* 7d7ab7: mov ecx, dword ptr [ebp + esi*8 - 0x2e8] */
  ecx = R32((uint32_t)(ebp + esi*8 + 0xfffffd18u));
/* 7d7abe: mov eax, dword ptr [ebp + edi*8 - 0x4e4] */
  eax = R32((uint32_t)(ebp + edi*8 + 0xfffffb1cu));
/* 7d7ac5: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7d7ac7: mov dword ptr [ebp + edi*8 - 0x4e8], edx */
  W32((uint32_t)(ebp + edi*8 + 0xfffffb18u), edx);
/* 7d7ace: mov edx, dword ptr [ebp + esi*8 - 0x2e4] */
  edx = R32((uint32_t)(ebp + esi*8 + 0xfffffd1cu));
/* 7d7ad5: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7d7ad7: mov dword ptr [ebp + edi*8 - 0x4e4], eax */
  W32((uint32_t)(ebp + edi*8 + 0xfffffb1cu), eax);
L_7d7ade: /* 7d7ade: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7adf: jmp 0x7d7a87 */
  goto L_7d7a87;
L_7d7ae1: /* 7d7ae1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d7ae2: jmp 0x7d7a80 */
  goto L_7d7a80;
L_7d7ae4: /* 7d7ae4: xor eax, eax */
  eax = 0;
L_7d7ae6: /* 7d7ae6: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7ae9: jge 0x7d7b0a */
  if ((sf == of)) goto L_7d7b0a;
L_7d7aeb: /* 7d7aeb: mov ecx, dword ptr [ebp + eax*8 - 0x4e8] */
  ecx = R32((uint32_t)(ebp + eax*8 + 0xfffffb18u));
/* 7d7af2: mov edx, dword ptr [ebp + eax*8 - 0x4e4] */
  edx = R32((uint32_t)(ebp + eax*8 + 0xfffffb1cu));
/* 7d7af9: mov dword ptr [ebp + eax*8 - 0x2e8], ecx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffd18u), ecx);
/* 7d7b00: mov dword ptr [ebp + eax*8 - 0x2e4], edx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffd1cu), edx);
/* 7d7b07: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d7b08: jmp 0x7d7ae6 */
  goto L_7d7ae6;
L_7d7b0a: /* 7d7b0a: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 7d7b0d: jmp 0x7d79f0 */
  goto L_7d79f0;
L_7d7b12: /* 7d7b12: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7b15: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7d7b1b: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7d7b1e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7b20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7b21: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d7b28: call dword ptr [edx + 0xe8] */
  { uint32_t t = R32((uint32_t)(edx + 0xe8u)); esp -= 4; W32(esp, 0x7d7b2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7b2e: mov cx, word ptr [0xb81b4c] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xb81b4cu))) & 0xffffu);
/* 7d7b35: mov dx, word ptr [0xb81b50] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xb81b50u))) & 0xffffu);
/* 7d7b3c: mov word ptr [ebp - 0xee8], cx */
  W16((uint32_t)(ebp + 0xfffff118u), (ecx & 0xffffu));
/* 7d7b43: xor eax, eax */
  eax = 0;
/* 7d7b45: mov ecx, 0x1ff */
  ecx = 0x1ffu;
/* 7d7b4a: lea edi, [ebp - 0xee6] */
  edi = (uint32_t)(ebp + 0xfffff11au);
/* 7d7b50: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 7d7b52: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 7d7b54: mov word ptr [ebp - 0x6e8], dx */
  W16((uint32_t)(ebp + 0xfffff918u), (edx & 0xffffu));
/* 7d7b5b: xor eax, eax */
  eax = 0;
/* 7d7b5d: mov ecx, 0x7f */
  ecx = 0x7fu;
/* 7d7b62: lea edi, [ebp - 0x6e6] */
  edi = (uint32_t)(ebp + 0xfffff91au);
/* 7d7b68: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 7d7b6a: push 0xb81b54 */
  { uint32_t v = 0xb81b54u; esp -= 4; W32(esp, v); }
/* 7d7b6f: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 7d7b75: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 7d7b77: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7d7b7du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7d7b7d: mov ebx, dword ptr [0xcfa914] */
  ebx = R32((uint32_t)(0xcfa914u));
/* 7d7b83: mov byte ptr [ebp - 4], 0x22 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x22u);
/* 7d7b87: xor edi, edi */
  edi = 0;
/* 7d7b89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d7b90: /* 7d7b90: cmp edi, dword ptr [ebp - 0xa8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7b96: jge 0x7d7bf7 */
  if ((sf == of)) goto L_7d7bf7;
L_7d7b98: /* 7d7b98: lea eax, [ebp - 0xee8] */
  eax = (uint32_t)(ebp + 0xfffff118u);
/* 7d7b9e: push 0xadadb0 */
  { uint32_t v = 0xadadb0u; esp -= 4; W32(esp, v); }
/* 7d7ba3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7ba4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7ba6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7ba6: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 7d7bac: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 7d7baf: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7d7bb2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7bb5: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d7bb7: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7bbdu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7bbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7bbe: lea edx, [ebp - 0xee8] */
  edx = (uint32_t)(ebp + 0xfffff118u);
/* 7d7bc4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7bc5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7bc7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7bc7: mov eax, dword ptr [ebp - 0xac] */
  eax = R32((uint32_t)(ebp + 0xffffff54u));
/* 7d7bcd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7bd0: lea ecx, [esi + eax] */
  ecx = (uint32_t)(esi + eax);
/* 7d7bd3: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7bd9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7bd9: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7d7bde: lea ecx, [ebp - 0x6e8] */
  ecx = (uint32_t)(ebp + 0xfffff918u);
/* 7d7be4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d7be5: push 0xadadb4 */
  { uint32_t v = 0xadadb4u; esp -= 4; W32(esp, v); }
/* 7d7bea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7beb: call dword ptr [0xcfa910] */
  esp -= 4; W32(esp, 0x7d7bf1u); SPILL(); f_4e2e73(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0PAGH@Z */ RELOAD();
/* 7d7bf1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7bf4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d7bf5: jmp 0x7d7b90 */
  goto L_7d7b90;
L_7d7bf7: /* 7d7bf7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7bfa: mov ecx, dword ptr [edx + 0x108] */
  ecx = R32((uint32_t)(edx + 0x108u));
/* 7d7c00: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7c02: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x7d7c08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7c08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c0a: je 0x7d7da7 */
  if (zf) goto L_7d7da7;
L_7d7c10: /* 7d7c10: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7d7c13: mov eax, dword ptr [ecx + 0x508] */
  eax = R32((uint32_t)(ecx + 0x508u));
/* 7d7c19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c1b: jne 0x7d7da7 */
  if (!zf) goto L_7d7da7;
L_7d7c21: /* 7d7c21: cmp word ptr [ebp - 0x6e8], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffff918u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7c29: mov ebx, dword ptr [0xcfa7b8] */
  ebx = R32((uint32_t)(0xcfa7b8u));
/* 7d7c2f: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 7d7c32: je 0x7d7c56 */
  if (zf) goto L_7d7c56;
L_7d7c34: /* 7d7c34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7c35: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7c37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c39: lea edx, [ebp - 0x6e8] */
  edx = (uint32_t)(ebp + 0xfffff918u);
/* 7d7c3f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7c40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c42: push 0xb5e3b8 */
  { uint32_t v = 0xb5e3b8u; esp -= 4; W32(esp, v); }
/* 7d7c47: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7c49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7c49: mov esi, eax */
  esi = eax;
/* 7d7c4b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7c4e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c50: jne 0x7d7ce3 */
  if (!zf) goto L_7d7ce3;
L_7d7c56: /* 7d7c56: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7d7c59: add esi, 0x4f0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4f0u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d7c5f: mov ecx, esi */
  ecx = esi;
/* 7d7c61: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7d7c67u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7d7c67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7d7c69: jle 0x7d7c8b */
  if ((zf || sf != of)) goto L_7d7c8b;
L_7d7c6b: /* 7d7c6b: mov ecx, esi */
  ecx = esi;
/* 7d7c6d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7c73u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7c73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7c74: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7c76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7c79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c7b: push 0xb5e3b8 */
  { uint32_t v = 0xb5e3b8u; esp -= 4; W32(esp, v); }
/* 7d7c80: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7c82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7c82: mov esi, eax */
  esi = eax;
/* 7d7c84: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7c87: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c89: jne 0x7d7ce3 */
  if (!zf) goto L_7d7ce3;
L_7d7c8b: /* 7d7c8b: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7c8e: mov ecx, dword ptr [esi + 0x108] */
  ecx = R32((uint32_t)(esi + 0x108u));
/* 7d7c94: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d7c9au); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d7c9a: mov ecx, eax */
  ecx = eax;
/* 7d7c9c: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d7ca2u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d7ca2: push 0xadadc0 */
  { uint32_t v = 0xadadc0u; esp -= 4; W32(esp, v); }
/* 7d7ca7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7ca8: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7d7caeu); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7d7cae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7cb1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7cb3: je 0x7d7cde */
  if (zf) goto L_7d7cde;
L_7d7cb5: /* 7d7cb5: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7d7cb8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7cba: mov eax, 0xadadcc */
  eax = 0xadadccu;
/* 7d7cbf: jne 0x7d7cc6 */
  if (!zf) goto L_7d7cc6;
L_7d7cc1: /* 7d7cc1: mov eax, 0xadae08 */
  eax = 0xadae08u;
L_7d7cc6: /* 7d7cc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7cc7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7cc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7ccb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7ccc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7cce: push 0xb5e3b8 */
  { uint32_t v = 0xb5e3b8u; esp -= 4; W32(esp, v); }
/* 7d7cd3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7cd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7cd5: mov esi, eax */
  esi = eax;
/* 7d7cd7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7cda: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7cdc: jne 0x7d7ce3 */
  if (!zf) goto L_7d7ce3;
L_7d7cde: /* 7d7cde: mov esi, 0xb5e3b8 */
  esi = 0xb5e3b8u;
L_7d7ce3: /* 7d7ce3: mov ecx, esi */
  ecx = esi;
/* 7d7ce5: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d7cebu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d7ceb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7cec: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d7cf1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7cf3: push 0xadae50 */
  { uint32_t v = 0xadae50u; esp -= 4; W32(esp, v); }
/* 7d7cf8: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 7d7cfd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d7cfe: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7d7d04u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7d7d04: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7d07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d13: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d17: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7d1a: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7d7d21: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7d7d28: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7d7d2f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7d7d35u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7d7d35: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7d37: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d7d3a: mov edx, esp */
  edx = esp;
/* 7d7d3c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7d7d3e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d7d41: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7d7d44: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7d7d47: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7d7d4a: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d7d4d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d7d50: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d7d53: mov ecx, esp */
  ecx = esp;
/* 7d7d55: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7d7d57: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d7d5a: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7d7d5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d7d5e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7d7d61: mov ecx, esp */
  ecx = esp;
/* 7d7d63: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7d7d66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d68: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d7d6eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d7d6e: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7d71: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7d77: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7d79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d7d7a: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x7d7d80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7d80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7d82: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 7d7d85: mov dword ptr [edi + 0x508], eax */
  W32((uint32_t)(edi + 0x508u), eax);
/* 7d7d8b: jne 0x7d7dad */
  if (!zf) goto L_7d7dad;
L_7d7d8d: /* 7d7d8d: push 0x6c9 */
  { uint32_t v = 0x6c9u; esp -= 4; W32(esp, v); }
/* 7d7d92: push 0xadae78 */
  { uint32_t v = 0xadae78u; esp -= 4; W32(esp, v); }
/* 7d7d97: push 0xadae84 */
  { uint32_t v = 0xadae84u; esp -= 4; W32(esp, v); }
/* 7d7d9c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7d7da2u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7d7da2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7da5: jmp 0x7d7dad */
  goto L_7d7dad;
L_7d7da7: /* 7d7da7: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7daa: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
L_7d7dad: /* 7d7dad: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d7db0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7db2: mov dword ptr [ebp - 4], 0x21 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7d7db9: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7d7dbd: je 0x7d7dd7 */
  if (zf) goto L_7d7dd7;
L_7d7dbf: /* 7d7dbf: push 0xadaea0 */
  { uint32_t v = 0xadaea0u; esp -= 4; W32(esp, v); }
/* 7d7dc4: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d7dca: call 0x6c991c */
  esp -= 4; W32(esp, 0x7d7dcfu); SPILL(); f_6c991c(); if (g_unwind) return; RELOAD();
/* 7d7dcf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7dd1: je 0x7d7e8a */
  if (zf) goto L_7d7e8a;
L_7d7dd7: /* 7d7dd7: mov eax, dword ptr [ebx + 0x110] */
  eax = R32((uint32_t)(ebx + 0x110u));
/* 7d7ddd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7ddf: je 0x7d7e1f */
  if (zf) goto L_7d7e1f;
L_7d7de1: /* 7d7de1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d7de4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7de6: mov byte ptr [ebp - 4], 0x25 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x25u);
/* 7d7dea: je 0x7d7e04 */
  if (zf) goto L_7d7e04;
L_7d7dec: /* 7d7dec: push 0x6d4 */
  { uint32_t v = 0x6d4u; esp -= 4; W32(esp, v); }
/* 7d7df1: push 0xadaeb0 */
  { uint32_t v = 0xadaeb0u; esp -= 4; W32(esp, v); }
/* 7d7df6: push 0xadaebc */
  { uint32_t v = 0xadaebcu; esp -= 4; W32(esp, v); }
/* 7d7dfb: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7d7e01u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7d7e01: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7e04: /* 7d7e04: mov ecx, dword ptr [ebx + 0x110] */
  ecx = R32((uint32_t)(ebx + 0x110u));
/* 7d7e0a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7e0c: je 0x7d7e15 */
  if (zf) goto L_7d7e15;
L_7d7e0e: /* 7d7e0e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7e10: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7e12: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7d7e15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d7e15: /* 7d7e15: mov dword ptr [ebx + 0x110], 0 */
  W32((uint32_t)(ebx + 0x110u), 0x0u);
L_7d7e1f: /* 7d7e1f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e22: mov dword ptr [ebp - 4], 0x24 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7d7e29: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7d7e2fu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7d7e2f: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7e35: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7e37: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7e3b: mov byte ptr [ebp - 4], 0x27 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x27u);
/* 7d7e3f: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x7d7e45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7e45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7e47: jne 0x7d7e7d */
  if (!zf) goto L_7d7e7d;
L_7d7e49: /* 7d7e49: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e4c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7e52u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7e52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7e54: push 0xadaed0 */
  { uint32_t v = 0xadaed0u; esp -= 4; W32(esp, v); }
/* 7d7e59: push 0xadaee0 */
  { uint32_t v = 0xadaee0u; esp -= 4; W32(esp, v); }
/* 7d7e5e: mov esi, eax */
  esi = eax;
/* 7d7e60: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x7d7e66u); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 7d7e66: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7d7e6c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7e6e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7e71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d7e72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7e73: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7e74: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7d7e7au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7d7e7a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7e7d: /* 7d7e7d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e80: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7d7e84: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d7e8au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7d7e8a: /* 7d7e8a: mov byte ptr [edi + 0x448], 2 */
  W8((uint32_t)(edi + 0x448u), 0x2u);
/* 7d7e91: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d7e94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7e96: mov dword ptr [ebp - 4], 0x21 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7d7e9d: je 0x7d7f00 */
  if (zf) goto L_7d7f00;
L_7d7e9f: /* 7d7e9f: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7d7ea2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7ea4: je 0x7d7f00 */
  if (zf) goto L_7d7f00;
L_7d7ea6: /* 7d7ea6: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d7ea9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7eab: mov eax, dword ptr [ecx + 0x70] */
  eax = R32((uint32_t)(ecx + 0x70u));
/* 7d7eae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7eb0: je 0x7d7f00 */
  if (zf) goto L_7d7f00;
L_7d7eb2: /* 7d7eb2: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d7eb5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7eb7: je 0x7d7ef2 */
  if (zf) goto L_7d7ef2;
L_7d7eb9: /* 7d7eb9: mov byte ptr [edi + 0x448], 2 */
  W8((uint32_t)(edi + 0x448u), 0x2u);
/* 7d7ec0: jmp 0x7d7f00 */
  goto L_7d7f00;
L_7d7ef2: /* 7d7ef2: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7d7ef5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7ef7: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7d7efa: mov byte ptr [edi + 0x448], dl */
  W8((uint32_t)(edi + 0x448u), (edx & 0xffu));
L_7d7f00: /* 7d7f00: mov ecx, dword ptr [0xce6f04] */
  ecx = R32((uint32_t)(0xce6f04u));
/* 7d7f06: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7f08: je 0x7d7f0f */
  if (zf) goto L_7d7f0f;
L_7d7f0a: /* 7d7f0a: call 0x6cbfa5 */
  esp -= 4; W32(esp, 0x7d7f0fu); SPILL(); f_6cbfa5(); if (g_unwind) return; RELOAD();
L_7d7f0f: /* 7d7f0f: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d7f15: mov dword ptr [eax + 0x104], 0 */
  W32((uint32_t)(eax + 0x104u), 0x0u);
/* 7d7f1f: test byte ptr [edi + 0x444], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x444u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7f26: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7d7f2a: jne 0x7d85d8 */
  if (!zf) goto L_7d85d8;
L_7d7f30: /* 7d7f30: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7f36: mov esi, dword ptr [0xcfa3a8] */
  esi = R32((uint32_t)(0xcfa3a8u));
/* 7d7f3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7f3e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d7f40u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f40: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d7f46: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7f48: mov edi, dword ptr [0xcfa3a4] */
  edi = R32((uint32_t)(0xcfa3a4u));
/* 7d7f4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7f4f: push 0xad5650 */
  { uint32_t v = 0xad5650u; esp -= 4; W32(esp, v); }
/* 7d7f54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7f55: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d7f57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f57: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d7f5d: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d7f60: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7f62: mov cl, byte ptr [eax + 0x44c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x44cu))) & 0xffu);
/* 7d7f68: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7f6b: test cl, 0x10 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7f6e: jne 0x7d7f83 */
  if (!zf) goto L_7d7f83;
L_7d7f70: /* 7d7f70: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7d7f76: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d7f78: push 0xadaf08 */
  { uint32_t v = 0xadaf08u; esp -= 4; W32(esp, v); }
/* 7d7f7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7f7e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d7f80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f80: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7f83: /* 7d7f83: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7d7f85: mov ecx, ebx */
  ecx = ebx;
/* 7d7f87: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7d7f8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f8d: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7d7f90: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d7f93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7f94: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x7d7f9au); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 7d7f9a: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7fa0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7fa3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7fa5: mov edi, eax */
  edi = eax;
/* 7d7fa7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d7fa9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7fa9: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d7faf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7fb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7fb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7fb3: push 0xadaf60 */
  { uint32_t v = 0xadaf60u; esp -= 4; W32(esp, v); }
/* 7d7fb8: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 7d7fbd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7fbe: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7d7fc4u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7d7fc4: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d7fca: xor esi, esi */
  esi = 0;
/* 7d7fcc: mov dword ptr [eax + 0x100], esi */
  W32((uint32_t)(eax + 0x100u), esi);
/* 7d7fd2: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7fd8: mov dword ptr [ecx + 0xd0], esi */
  W32((uint32_t)(ecx + 0xd0u), esi);
/* 7d7fde: mov dword ptr [ecx + 0xd4], esi */
  W32((uint32_t)(ecx + 0xd4u), esi);
/* 7d7fe4: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d7fea: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d7fed: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d7fef: mov dword ptr [eax + 0x3ac], esi */
  W32((uint32_t)(eax + 0x3acu), esi);
/* 7d7ff5: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7ffb: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d7ffe: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7d8000: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8003: call 0x6c34d1 */
  esp -= 4; W32(esp, 0x7d8008u); SPILL(); f_6c34d1(); if (g_unwind) return; RELOAD();
/* 7d8008: or dword ptr [eax + 0x80], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x80u), r);
  }
/* 7d8012: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8018: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d801a: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x7d8020u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8020: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8022: jne 0x7d8072 */
  if (!zf) goto L_7d8072;
L_7d8024: /* 7d8024: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d802a: cmp esi, dword ptr [ecx + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d802d: jge 0x7d8072 */
  if ((sf == of)) goto L_7d8072;
L_7d802f: /* 7d802f: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8032: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d8035: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8037: je 0x7d806f */
  if (zf) goto L_7d806f;
L_7d8039: /* 7d8039: mov edx, dword ptr [eax + 0x80] */
  edx = R32((uint32_t)(eax + 0x80u));
/* 7d803f: test dl, 0x40 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8042: jne 0x7d8057 */
  if (!zf) goto L_7d8057;
L_7d8044: /* 7d8044: test dh, 1 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8047: jne 0x7d8057 */
  if (!zf) goto L_7d8057;
L_7d8049: /* 7d8049: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d804b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d804d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d804e: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x7d8054u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8054: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d8055: jmp 0x7d8024 */
  goto L_7d8024;
L_7d8057: /* 7d8057: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 7d805d: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 7d8063: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 7d8069: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
L_7d806f: /* 7d806f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d8070: jmp 0x7d8024 */
  goto L_7d8024;
L_7d8072: /* 7d8072: xor esi, esi */
  esi = 0;
L_7d8074: /* 7d8074: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d807a: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d807d: jge 0x7d80d5 */
  if ((sf == of)) goto L_7d80d5;
L_7d807f: /* 7d807f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8082: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d8085: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8087: je 0x7d80d2 */
  if (zf) goto L_7d80d2;
L_7d8089: /* 7d8089: mov dword ptr [eax + 0xd4], 0 */
  W32((uint32_t)(eax + 0xd4u), 0x0u);
/* 7d8093: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8099: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d809c: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d809f: add ecx, 0x110 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d80a5: xor eax, eax */
  eax = 0;
L_7d80a7: /* 7d80a7: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d80aa: jge 0x7d80af */
  if ((sf == of)) goto L_7d80af;
L_7d80ac: /* 7d80ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d80ad: jmp 0x7d80a7 */
  goto L_7d80a7;
L_7d80af: /* 7d80af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d80b1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d80b3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7d80b9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7d80b9: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d80bf: mov edi, dword ptr [eax + 0x2c] */
  edi = R32((uint32_t)(eax + 0x2cu));
/* 7d80c2: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7d80c4: call 0x6c34d1 */
  esp -= 4; W32(esp, 0x7d80c9u); SPILL(); f_6c34d1(); if (g_unwind) return; RELOAD();
/* 7d80c9: mov ecx, dword ptr [edi + esi*4] */
  ecx = R32((uint32_t)(edi + esi*4));
/* 7d80cc: mov dword ptr [ecx + 0x16c], eax */
  W32((uint32_t)(ecx + 0x16cu), eax);
L_7d80d2: /* 7d80d2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d80d3: jmp 0x7d8074 */
  goto L_7d8074;
L_7d80d5: /* 7d80d5: xor esi, esi */
  esi = 0;
/* 7d80d7: jmp 0x7d80e0 */
  goto L_7d80e0;
L_7d80e0: /* 7d80e0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d80e6: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d80e9: jge 0x7d80fd */
  if ((sf == of)) goto L_7d80fd;
L_7d80eb: /* 7d80eb: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d80ee: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d80f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d80f3: je 0x7d80fa */
  if (zf) goto L_7d80fa;
L_7d80f5: /* 7d80f5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d80f7: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x7d80fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d80fa: /* 7d80fa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d80fb: jmp 0x7d80e0 */
  goto L_7d80e0;
L_7d80fd: /* 7d80fd: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7d8100: mov edx, dword ptr [esi + 0x444] */
  edx = R32((uint32_t)(esi + 0x444u));
/* 7d8106: mov ecx, dword ptr [esi + 0x44c] */
  ecx = R32((uint32_t)(esi + 0x44cu));
/* 7d810c: mov eax, 4 */
  eax = 0x4u;
/* 7d8111: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7d8113: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 7d8115: mov eax, dword ptr [esi + 0x508] */
  eax = R32((uint32_t)(esi + 0x508u));
/* 7d811b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d811d: mov dword ptr [esi + 0x444], edx */
  W32((uint32_t)(esi + 0x444u), edx);
/* 7d8123: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 7d8129: je 0x7d8162 */
  if (zf) goto L_7d8162;
L_7d812b: /* 7d812b: lea ecx, [ebp - 0xee8] */
  ecx = (uint32_t)(ebp + 0xfffff118u);
/* 7d8131: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8132: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8135: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7d813bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7d813b: mov ecx, dword ptr [esi + 0x508] */
  ecx = R32((uint32_t)(esi + 0x508u));
/* 7d8141: lea edx, [ebp - 0xe8] */
  edx = (uint32_t)(ebp + 0xffffff18u);
/* 7d8147: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8148: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7d814b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d814c: mov byte ptr [ebp - 4], 0x2a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2au);
/* 7d8150: call 0x6c6a87 */
  esp -= 4; W32(esp, 0x7d8155u); SPILL(); f_6c6a87(); if (g_unwind) return; RELOAD();
/* 7d8155: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8158: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7d815c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d8162u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7d8162: /* 7d8162: xor edi, edi */
  edi = 0;
L_7d8164: /* 7d8164: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d816a: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d816d: jge 0x7d81bc */
  if ((sf == of)) goto L_7d81bc;
L_7d816f: /* 7d816f: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d8172: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7d8175: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8177: je 0x7d81b9 */
  if (zf) goto L_7d81b9;
L_7d8179: /* 7d8179: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8180: jne 0x7d81b9 */
  if (!zf) goto L_7d81b9;
L_7d8182: /* 7d8182: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8183: mov ecx, esp */
  ecx = esp;
/* 7d8185: push 0x163 */
  { uint32_t v = 0x163u; esp -= 4; W32(esp, v); }
/* 7d818a: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d8190u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d8190: mov ecx, esi */
  ecx = esi;
/* 7d8192: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7d8198u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7d8198: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d819a: je 0x7d81b9 */
  if (zf) goto L_7d81b9;
L_7d819c: /* 7d819c: mov edx, dword ptr [0xb7e33c] */
  edx = R32((uint32_t)(0xb7e33cu));
/* 7d81a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d81a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d81a5: mov ecx, esi */
  ecx = esi;
/* 7d81a7: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d81adu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d81ad: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d81af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d81b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d81b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d81b4: mov ecx, esi */
  ecx = esi;
/* 7d81b6: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d81b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d81b9: /* 7d81b9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d81ba: jmp 0x7d8164 */
  goto L_7d8164;
L_7d81bc: /* 7d81bc: xor edi, edi */
  edi = 0;
/* 7d81be: mov edi, edi */
  edi = edi;
L_7d81c0: /* 7d81c0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d81c6: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d81c9: jge 0x7d8218 */
  if ((sf == of)) goto L_7d8218;
L_7d81cb: /* 7d81cb: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d81ce: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d81d1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d81d3: je 0x7d8215 */
  if (zf) goto L_7d8215;
L_7d81d5: /* 7d81d5: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d81dc: jne 0x7d8215 */
  if (!zf) goto L_7d8215;
L_7d81de: /* 7d81de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d81df: mov ecx, esp */
  ecx = esp;
/* 7d81e1: push 0x164 */
  { uint32_t v = 0x164u; esp -= 4; W32(esp, v); }
/* 7d81e6: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d81ecu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d81ec: mov ecx, esi */
  ecx = esi;
/* 7d81ee: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7d81f4u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7d81f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d81f6: je 0x7d8215 */
  if (zf) goto L_7d8215;
L_7d81f8: /* 7d81f8: mov ecx, dword ptr [0xb7e340] */
  ecx = R32((uint32_t)(0xb7e340u));
/* 7d81fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8200: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8201: mov ecx, esi */
  ecx = esi;
/* 7d8203: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d8209u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d8209: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d820b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d820d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d820f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8210: mov ecx, esi */
  ecx = esi;
/* 7d8212: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d8215u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8215: /* 7d8215: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8216: jmp 0x7d81c0 */
  goto L_7d81c0;
L_7d8218: /* 7d8218: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d821b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7d8221u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7d8221: mov byte ptr [ebp - 4], 0x2b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2bu);
/* 7d8225: xor edi, edi */
  edi = 0;
/* 7d8227: jmp 0x7d8230 */
  goto L_7d8230;
L_7d8230: /* 7d8230: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8236: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8239: jge 0x7d8291 */
  if ((sf == of)) goto L_7d8291;
L_7d823b: /* 7d823b: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d823e: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7d8241: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8243: je 0x7d825a */
  if (zf) goto L_7d825a;
L_7d8245: /* 7d8245: test byte ptr [ecx + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d824c: jne 0x7d825a */
  if (!zf) goto L_7d825a;
L_7d824e: /* 7d824e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d8250: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8252: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8254: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0x7d825au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d825a: /* 7d825a: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8260: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d8263: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7d8266: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8268: je 0x7d828e */
  if (zf) goto L_7d828e;
L_7d826a: /* 7d826a: push 0xb6dcb8 */
  { uint32_t v = 0xb6dcb8u; esp -= 4; W32(esp, v); }
/* 7d826f: mov ecx, esi */
  ecx = esi;
/* 7d8271: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8277u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8277: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8279: je 0x7d828e */
  if (zf) goto L_7d828e;
L_7d827b: /* 7d827b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d827d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d827f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d8282: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8288u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8288: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7d828b: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
L_7d828e: /* 7d828e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d828f: jmp 0x7d8230 */
  goto L_7d8230;
L_7d8291: /* 7d8291: xor esi, esi */
  esi = 0;
L_7d8293: /* 7d8293: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8299: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d829c: jge 0x7d82bd */
  if ((sf == of)) goto L_7d82bd;
L_7d829e: /* 7d829e: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d82a1: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d82a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82a6: je 0x7d82ba */
  if (zf) goto L_7d82ba;
L_7d82a8: /* 7d82a8: test byte ptr [ecx + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82af: jne 0x7d82ba */
  if (!zf) goto L_7d82ba;
L_7d82b1: /* 7d82b1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d82b3: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7d82b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d82b7: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d82bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d82ba: /* 7d82ba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d82bb: jmp 0x7d8293 */
  goto L_7d8293;
L_7d82bd: /* 7d82bd: xor edi, edi */
  edi = 0;
/* 7d82bf: nop  */
L_7d82c0: /* 7d82c0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d82c6: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d82c9: jge 0x7d8330 */
  if ((sf == of)) goto L_7d8330;
L_7d82cb: /* 7d82cb: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d82ce: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7d82d1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82d3: je 0x7d832d */
  if (zf) goto L_7d832d;
L_7d82d5: /* 7d82d5: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82dc: jne 0x7d832d */
  if (!zf) goto L_7d832d;
L_7d82de: /* 7d82de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d82df: mov ecx, esp */
  ecx = esp;
/* 7d82e1: push 0x165 */
  { uint32_t v = 0x165u; esp -= 4; W32(esp, v); }
/* 7d82e6: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d82ecu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d82ec: mov ecx, esi */
  ecx = esi;
/* 7d82ee: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7d82f4u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7d82f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82f6: je 0x7d8315 */
  if (zf) goto L_7d8315;
L_7d82f8: /* 7d82f8: mov edx, dword ptr [0xb7e344] */
  edx = R32((uint32_t)(0xb7e344u));
/* 7d82fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8300: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8301: mov ecx, esi */
  ecx = esi;
/* 7d8303: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d8309u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d8309: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d830b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d830d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d830f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8310: mov ecx, esi */
  ecx = esi;
/* 7d8312: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d8315u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8315: /* 7d8315: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d831b: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d831e: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 7d8321: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8323: je 0x7d832d */
  if (zf) goto L_7d832d;
L_7d8325: /* 7d8325: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d8327: call dword ptr [edx + 0x110] */
  { uint32_t t = R32((uint32_t)(edx + 0x110u)); esp -= 4; W32(esp, 0x7d832du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d832d: /* 7d832d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d832e: jmp 0x7d82c0 */
  goto L_7d82c0;
L_7d8330: /* 7d8330: xor edi, edi */
  edi = 0;
L_7d8332: /* 7d8332: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8338: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d833b: jge 0x7d8370 */
  if ((sf == of)) goto L_7d8370;
L_7d833d: /* 7d833d: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8340: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d8343: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8345: je 0x7d836d */
  if (zf) goto L_7d836d;
L_7d8347: /* 7d8347: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d834e: jne 0x7d836d */
  if (!zf) goto L_7d836d;
L_7d8350: /* 7d8350: mov ecx, dword ptr [0xb7e3f4] */
  ecx = R32((uint32_t)(0xb7e3f4u));
/* 7d8356: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8358: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8359: mov ecx, esi */
  ecx = esi;
/* 7d835b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d8361u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d8361: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8363: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8365: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8367: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8368: mov ecx, esi */
  ecx = esi;
/* 7d836a: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d836du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d836d: /* 7d836d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d836e: jmp 0x7d8332 */
  goto L_7d8332;
L_7d8370: /* 7d8370: xor edi, edi */
  edi = 0;
L_7d8372: /* 7d8372: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8378: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d837b: jge 0x7d83b0 */
  if ((sf == of)) goto L_7d83b0;
L_7d837d: /* 7d837d: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8380: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d8383: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8385: je 0x7d83ad */
  if (zf) goto L_7d83ad;
L_7d8387: /* 7d8387: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d838e: jne 0x7d83ad */
  if (!zf) goto L_7d83ad;
L_7d8390: /* 7d8390: mov ecx, dword ptr [0xb7e3b8] */
  ecx = R32((uint32_t)(0xb7e3b8u));
/* 7d8396: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8398: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8399: mov ecx, esi */
  ecx = esi;
/* 7d839b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d83a1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d83a1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d83a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d83a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d83a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d83a8: mov ecx, esi */
  ecx = esi;
/* 7d83aa: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d83adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d83ad: /* 7d83ad: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d83ae: jmp 0x7d8372 */
  goto L_7d8372;
L_7d83b0: /* 7d83b0: xor esi, esi */
  esi = 0;
/* 7d83b2: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d83c0: /* 7d83c0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d83c6: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d83c9: jge 0x7d850a */
  if ((sf == of)) goto L_7d850a;
L_7d83cf: /* 7d83cf: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d83d2: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d83d6: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d83dc: /* 7d83dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d83de: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7d83e1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d83e7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d83e7: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d83ed: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d83f0: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7d83f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d83f4: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d83f7: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d83fd: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7d8403u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8403: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8405: je 0x7d84d6 */
  if (zf) goto L_7d84d6;
L_7d840b: /* 7d840b: xor edi, edi */
  edi = 0;
/* 7d840d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d8410: /* 7d8410: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8416: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8419: jge 0x7d8504 */
  if ((sf == of)) goto L_7d8504;
L_7d841f: /* 7d841f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8422: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7d8425: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8427: je 0x7d84d0 */
  if (zf) goto L_7d84d0;
L_7d842d: /* 7d842d: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* 7d8430: add edx, 0x1f8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7d8436: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8437: add ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d843d: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7d8443u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8443: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8445: jne 0x7d847c */
  if (!zf) goto L_7d847c;
L_7d8447: /* 7d8447: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d844d: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8450: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 7d8453: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 7d8456: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8457: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x7d845du); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 7d845d: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8463: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8466: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d8469: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d846f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8470: mov ecx, eax */
  ecx = eax;
/* 7d8472: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7d8478u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8478: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d847a: je 0x7d84d0 */
  if (zf) goto L_7d84d0;
L_7d847c: /* 7d847c: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8482: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d8485: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d8488: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d848a: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 7d848d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d848f: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 7d8492: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d8495: mov ecx, esp */
  ecx = esp;
/* 7d8497: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7d849e: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d84a1: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7d84a3: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7d84aa: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d84ad: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7d84b0: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 7d84b7: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d84ba: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 7d84bd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7d84c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d84c1: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7d84c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d84c7: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d84ca: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d84cb: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d84d0: /* 7d84d0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d84d1: jmp 0x7d8410 */
  goto L_7d8410;
L_7d84d6: /* 7d84d6: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d84dc: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d84df: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d84e2: test byte ptr [ecx + 0x88], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84e9: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d84eb: /* 7d84eb: test byte ptr [ecx + 0x87], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x87u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84f2: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d84f4: /* 7d84f4: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 7d84f7: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84f9: je 0x7d84ff */
  if (zf) goto L_7d84ff;
L_7d84fb: /* 7d84fb: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d84fd: jne 0x7d8504 */
  if (!zf) goto L_7d8504;
L_7d84ff: /* 7d84ff: call 0x6c5754 */
  esp -= 4; W32(esp, 0x7d8504u); SPILL(); f_6c5754(); if (g_unwind) return; RELOAD();
L_7d8504: /* 7d8504: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d8505: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d850a: /* 7d850a: xor ecx, ecx */
  ecx = 0;
/* 7d850c: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 7d850f: nop  */
L_7d8510: /* 7d8510: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8516: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8519: jge 0x7d85bd */
  if ((sf == of)) goto L_7d85bd;
L_7d851f: /* 7d851f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8522: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 7d8525: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8527: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d852d: /* 7d852d: cmp byte ptr [edi + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8531: jne 0x7d85af */
  if (!zf) goto L_7d85af;
L_7d8533: /* 7d8533: mov ecx, dword ptr [edi + 0x30c] */
  ecx = R32((uint32_t)(edi + 0x30cu));
/* 7d8539: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d853b: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d853d: /* 7d853d: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 7d8542: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8548u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8548: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d854a: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d854c: /* 7d854c: mov esi, dword ptr [edi + 0x30c] */
  esi = R32((uint32_t)(edi + 0x30cu));
/* 7d8552: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8554: je 0x7d8567 */
  if (zf) goto L_7d8567;
L_7d8556: /* 7d8556: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 7d855b: mov ecx, esi */
  ecx = esi;
/* 7d855d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8563u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8563: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8565: jne 0x7d8569 */
  if (!zf) goto L_7d8569;
L_7d8567: /* 7d8567: xor esi, esi */
  esi = 0;
L_7d8569: /* 7d8569: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d856f: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8572: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d8574: cmp byte ptr [eax + 0x3f0], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3f0u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 7d857b: jae 0x7d858c */
  if (!cf) goto L_7d858c;
L_7d857d: /* 7d857d: test byte ptr [esi + 0x90], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8584: je 0x7d858c */
  if (zf) goto L_7d858c;
L_7d8586: /* 7d8586: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d8587: call 0x6c5ab0 */
  esp -= 4; W32(esp, 0x7d858cu); SPILL(); f_6c5ab0(); if (g_unwind) return; RELOAD();
L_7d858c: /* 7d858c: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8592: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d8595: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8597: cmp byte ptr [eax + 0x4c8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4c8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d859e: jne 0x7d85af */
  if (!zf) goto L_7d85af;
L_7d85a0: /* 7d85a0: test byte ptr [esi + 0x90], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d85a7: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d85a9: /* 7d85a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d85aa: call 0x6c5ab0 */
  esp -= 4; W32(esp, 0x7d85afu); SPILL(); f_6c5ab0(); if (g_unwind) return; RELOAD();
L_7d85af: /* 7d85af: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d85b2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d85b3: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7d85b6: mov ecx, eax */
  ecx = eax;
/* 7d85b8: jmp 0x7d8510 */
  goto L_7d8510;
L_7d85bd: /* 7d85bd: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7d85c0: and dword ptr [eax + 0x44c], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44cu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x44cu), r);
  }
/* 7d85c7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d85ca: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7d85ce: call 0x6cb014 */
  esp -= 4; W32(esp, 0x7d85d3u); SPILL(); f_6cb014(); if (g_unwind) return; RELOAD();
/* 7d85d3: jmp 0x7d8667 */
  goto L_7d8667;
L_7d85d8: /* 7d85d8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d85db: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 7d85e1: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d85e4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d85e6: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 7d85ec: mov ebx, dword ptr [0xcfa2c0] */
  ebx = R32((uint32_t)(0xcfa2c0u));
/* 7d85f2: fstp qword ptr [eax + 0xd0] */
  WF64((uint32_t)(eax + 0xd0u), ST0); FPOP();
/* 7d85f8: xor edi, edi */
  edi = 0;
/* 7d85fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7d8600: /* 7d8600: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8603: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 7d8609: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d860c: jge 0x7d8664 */
  if ((sf == of)) goto L_7d8664;
L_7d860e: /* 7d860e: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8611: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d8614: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8616: je 0x7d8631 */
  if (zf) goto L_7d8631;
L_7d8618: /* 7d8618: mov ecx, dword ptr [0xb7e550] */
  ecx = R32((uint32_t)(0xb7e550u));
/* 7d861e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8620: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8621: mov ecx, esi */
  ecx = esi;
/* 7d8623: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d8625u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8625: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8627: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8629: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d862b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d862c: mov ecx, esi */
  ecx = esi;
/* 7d862e: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d8631u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8631: /* 7d8631: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8632: jmp 0x7d8600 */
  goto L_7d8600;
L_7d8664: /* 7d8664: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
L_7d8667: /* 7d8667: mov dword ptr [ebp - 4], 0x21 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7d866e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8671: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 7d8675: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7d867bu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7d867b: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8681: mov esi, dword ptr [edx + 0x2c] */
  esi = R32((uint32_t)(edx + 0x2cu));
/* 7d8684: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8686: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8688: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d868b: mov byte ptr [ebp - 4], 0x2e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2eu);
/* 7d868f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8695u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8695: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d8697: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d869a: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d869d: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d86a3: mov esi, dword ptr [eax + 0x2c] */
  esi = R32((uint32_t)(eax + 0x2cu));
/* 7d86a6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d86a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d86aa: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d86ad: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d86b0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d86b6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d86b6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d86b8: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d86bb: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d86be: mov edi, 2 */
  edi = 0x2u;
L_7d86c3: /* 7d86c3: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d86c9: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d86cc: jge 0x7d8704 */
  if ((sf == of)) goto L_7d8704;
L_7d86ce: /* 7d86ce: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d86d1: lea esi, [eax + edi*4] */
  esi = (uint32_t)(eax + edi*4);
/* 7d86d4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7d86d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86d8: je 0x7d8701 */
  if (zf) goto L_7d8701;
L_7d86da: /* 7d86da: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86e1: je 0x7d8701 */
  if (zf) goto L_7d8701;
L_7d86e3: /* 7d86e3: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86ea: jne 0x7d8701 */
  if (!zf) goto L_7d8701;
L_7d86ec: /* 7d86ec: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d86ee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d86f0: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d86f3: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d86f9u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d86f9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d86fb: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d86fe: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d8701: /* 7d8701: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8702: jmp 0x7d86c3 */
  goto L_7d86c3;
L_7d8704: /* 7d8704: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d870a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d870d: mov dword ptr [eax + 0x108], ecx */
  W32((uint32_t)(eax + 0x108u), ecx);
/* 7d8713: mov edi, 2 */
  edi = 0x2u;
/* 7d8718: jmp 0x7d8720 */
  goto L_7d8720;
L_7d8720: /* 7d8720: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8726: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8729: jge 0x7d8762 */
  if ((sf == of)) goto L_7d8762;
L_7d872b: /* 7d872b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d872e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7d8731: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8733: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 7d8736: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d8738: /* 7d8738: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d873f: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d8741: /* 7d8741: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8748: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d874a: /* 7d874a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d874c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d874e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8751: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8757u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8757: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d8759: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d875c: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d875f: /* 7d875f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8760: jmp 0x7d8720 */
  goto L_7d8720;
L_7d8762: /* 7d8762: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8768: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d876b: mov dword ptr [eax + 0x104], ecx */
  W32((uint32_t)(eax + 0x104u), ecx);
/* 7d8771: mov edi, 2 */
  edi = 0x2u;
/* 7d8776: jmp 0x7d8780 */
  goto L_7d8780;
L_7d8780: /* 7d8780: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8786: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8789: jge 0x7d87b9 */
  if ((sf == of)) goto L_7d87b9;
L_7d878b: /* 7d878b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d878e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7d8791: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8793: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 7d8796: je 0x7d87b6 */
  if (zf) goto L_7d87b6;
L_7d8798: /* 7d8798: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d879f: jne 0x7d87b6 */
  if (!zf) goto L_7d87b6;
L_7d87a1: /* 7d87a1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d87a5: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d87a8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d87aeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d87ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d87b0: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d87b3: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d87b6: /* 7d87b6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d87b7: jmp 0x7d8780 */
  goto L_7d8780;
L_7d87b9: /* 7d87b9: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 7d87be: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d87c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d87c6: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d87c9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d87cb: je 0x7d87eb */
  if (zf) goto L_7d87eb;
L_7d87cd: /* 7d87cd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7d87d0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d87d2: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d87d7: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d87dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87de: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d87e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d87e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d87e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e8: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d87ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d87eb: /* 7d87eb: xor eax, eax */
  eax = 0;
/* 7d87ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d87f0: /* 7d87f0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d87f3: jge 0x7d87f8 */
  if ((sf == of)) goto L_7d87f8;
L_7d87f5: /* 7d87f5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d87f6: jmp 0x7d87f0 */
  goto L_7d87f0;
L_7d87f8: /* 7d87f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87fa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87fc: mov ecx, esi */
  ecx = esi;
/* 7d87fe: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7d8804u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7d8804: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d880a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d880d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d880f: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8813: mov ecx, esi */
  ecx = esi;
/* 7d8815: mov edi, eax */
  edi = eax;
/* 7d8817: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d881du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d881d: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 7d8823: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d8825: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8827: je 0x7d8843 */
  if (zf) goto L_7d8843;
L_7d8829: /* 7d8829: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d882b: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d8830: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d8835: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8837: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8839: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d883a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d883b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d883e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d883f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8840: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d8843u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8843: /* 7d8843: xor eax, eax */
  eax = 0;
L_7d8845: /* 7d8845: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8848: jge 0x7d885f */
  if ((sf == of)) goto L_7d885f;
L_7d884a: /* 7d884a: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8850: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8853: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d8856: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 7d8859: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d885c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d885d: jmp 0x7d8845 */
  goto L_7d8845;
L_7d885f: /* 7d885f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8862: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 7d8866: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x7d886bu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 7d886b: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d886e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8870: mov esi, 0x21 */
  esi = 0x21u;
/* 7d8875: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8878: mov byte ptr [ebp - 4], 0x30 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x30u);
/* 7d887c: je 0x7d892e */
  if (zf) goto L_7d892e;
L_7d8882: /* 7d8882: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8888: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d888a: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x7d8890u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8890: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8892: je 0x7d889c */
  if (zf) goto L_7d889c;
L_7d8894: /* 7d8894: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d889a: jmp 0x7d88a2 */
  goto L_7d88a2;
L_7d889c: /* 7d889c: mov eax, dword ptr [ebx + 0x10c] */
  eax = R32((uint32_t)(ebx + 0x10cu));
L_7d88a2: /* 7d88a2: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 7d88a5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d88ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d88ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d88ae: call 0x7ccae0 */
  esp -= 4; W32(esp, 0x7d88b3u); SPILL(); f_7ccae0(); if (g_unwind) return; RELOAD();
/* 7d88b3: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d88b9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88bb: je 0x7d88ce */
  if (zf) goto L_7d88ce;
L_7d88bd: /* 7d88bd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88bf: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7d88c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88c5: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88c8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88cb: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d88ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88ce: /* 7d88ce: xor edi, edi */
  edi = 0;
L_7d88d0: /* 7d88d0: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d88d3: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d88d6: jge 0x7d8929 */
  if ((sf == of)) goto L_7d8929;
L_7d88d8: /* 7d88d8: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d88db: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d88de: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 7d88e1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88e3: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7d88e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88e9: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 7d88ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88ee: je 0x7d88f6 */
  if (zf) goto L_7d88f6;
L_7d88f0: /* 7d88f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d88f3: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d88f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88f6: /* 7d88f6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d88f7: jmp 0x7d88d0 */
  goto L_7d88d0;
L_7d8929: /* 7d8929: mov esi, 0x21 */
  esi = 0x21u;
L_7d892e: /* 7d892e: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7d8931: movzx edx, byte ptr [edx + 0x448] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x448u)));
/* 7d8938: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d893e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8940: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8941: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8944: call dword ptr [eax + 0xdc] */
  { uint32_t t = R32((uint32_t)(eax + 0xdcu)); esp -= 4; W32(esp, 0x7d894au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d894a: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8951: lea ecx, [ebx + 0x114] */
  ecx = (uint32_t)(ebx + 0x114u);
/* 7d8957: mov byte ptr [ebp - 4], 0x32 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x32u);
/* 7d895b: call 0x6ca50b */
  esp -= 4; W32(esp, 0x7d8960u); SPILL(); f_6ca50b(); if (g_unwind) return; RELOAD();
/* 7d8960: mov ecx, dword ptr [0xcfa814] */
  ecx = R32((uint32_t)(0xcfa814u));
/* 7d8966: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8969: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d896c: je 0x7d8a28 */
  if (zf) goto L_7d8a28;
L_7d8972: /* 7d8972: push 0xadafc0 */
  { uint32_t v = 0xadafc0u; esp -= 4; W32(esp, v); }
/* 7d8977: push 0xadafcc */
  { uint32_t v = 0xadafccu; esp -= 4; W32(esp, v); }
/* 7d897c: push 0xadafd8 */
  { uint32_t v = 0xadafd8u; esp -= 4; W32(esp, v); }
/* 7d8981: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8987: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d898cu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d898c: push 0xadaff4 */
  { uint32_t v = 0xadaff4u; esp -= 4; W32(esp, v); }
/* 7d8991: push 0xadb000 */
  { uint32_t v = 0xadb000u; esp -= 4; W32(esp, v); }
/* 7d8996: push 0xadb00c */
  { uint32_t v = 0xadb00cu; esp -= 4; W32(esp, v); }
/* 7d899b: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89a1: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89a6u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89a6: push 0xadb028 */
  { uint32_t v = 0xadb028u; esp -= 4; W32(esp, v); }
/* 7d89ab: push 0xadb034 */
  { uint32_t v = 0xadb034u; esp -= 4; W32(esp, v); }
/* 7d89b0: push 0xadb040 */
  { uint32_t v = 0xadb040u; esp -= 4; W32(esp, v); }
/* 7d89b5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89bb: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89c0u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89c0: push 0xadb05c */
  { uint32_t v = 0xadb05cu; esp -= 4; W32(esp, v); }
/* 7d89c5: push 0xadb068 */
  { uint32_t v = 0xadb068u; esp -= 4; W32(esp, v); }
/* 7d89ca: push 0xadb074 */
  { uint32_t v = 0xadb074u; esp -= 4; W32(esp, v); }
/* 7d89cf: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89d5: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89dau); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89da: push 0xadb090 */
  { uint32_t v = 0xadb090u; esp -= 4; W32(esp, v); }
/* 7d89df: push 0xadb09c */
  { uint32_t v = 0xadb09cu; esp -= 4; W32(esp, v); }
/* 7d89e4: push 0xadb0a8 */
  { uint32_t v = 0xadb0a8u; esp -= 4; W32(esp, v); }
/* 7d89e9: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89ef: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89f4u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89f4: push 0xadb0c4 */
  { uint32_t v = 0xadb0c4u; esp -= 4; W32(esp, v); }
/* 7d89f9: push 0xadb0d0 */
  { uint32_t v = 0xadb0d0u; esp -= 4; W32(esp, v); }
/* 7d89fe: push 0xadb0dc */
  { uint32_t v = 0xadb0dcu; esp -= 4; W32(esp, v); }
/* 7d8a03: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a09: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a0eu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d8a0e: push 0xadb0f8 */
  { uint32_t v = 0xadb0f8u; esp -= 4; W32(esp, v); }
/* 7d8a13: push 0xadb104 */
  { uint32_t v = 0xadb104u; esp -= 4; W32(esp, v); }
/* 7d8a18: push 0xadb120 */
  { uint32_t v = 0xadb120u; esp -= 4; W32(esp, v); }
/* 7d8a1d: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a23: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a28u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
L_7d8a28: /* 7d8a28: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8a2e: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d8a31: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d8a33: test byte ptr [eax + 0x404], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x404u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8a3a: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7d8a3d: jne 0x7d8a90 */
  if (!zf) goto L_7d8a90;
L_7d8a3f: /* 7d8a3f: xor ebx, ebx */
  ebx = 0;
L_7d8a41: /* 7d8a41: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d8a44: cmp ebx, dword ptr [ecx + 0x3fc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3fcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8a4a: jge 0x7d8a90 */
  if ((sf == of)) goto L_7d8a90;
L_7d8a4c: /* 7d8a4c: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 7d8a52: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7d8a54: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8a56: push 0xadb13c */
  { uint32_t v = 0xadb13cu; esp -= 4; W32(esp, v); }
/* 7d8a5b: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 7d8a60: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7d8a62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8a62: mov edi, eax */
  edi = eax;
/* 7d8a64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d8a65: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x7d8a6au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 7d8a6a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a6d: mov esi, dword ptr [ecx + 0x108] */
  esi = R32((uint32_t)(ecx + 0x108u));
/* 7d8a73: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8a76: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8a78: add esi, 0x1178 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1178u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8a7e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8a80: mov ecx, esi */
  ecx = esi;
/* 7d8a82: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8a88u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8a88: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8a8a: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 7d8a8d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7d8a8e: jmp 0x7d8a41 */
  goto L_7d8a41;
L_7d8a90: /* 7d8a90: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a93: mov esi, dword ptr [eax + 0x108] */
  esi = R32((uint32_t)(eax + 0x108u));
/* 7d8a99: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 7d8a9f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d8aa3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d8aa9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d8aa9: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7d8aac: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7d8ab0: call 0x6c312a */
  esp -= 4; W32(esp, 0x7d8ab5u); SPILL(); f_6c312a(); if (g_unwind) return; RELOAD();
/* 7d8ab5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8abb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7d8abf: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7d8ac4u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 7d8ac4: mov eax, esi */
  eax = esi;
/* 7d8ac6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d8ac9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d8ad0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d8ad1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d8ad2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d8ad3: mov esp, ebp */
  esp = ebp;
/* 7d8ad5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d8ad6: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7d7a7d(void) {
  LOAD_REGS();
  goto L_7d7a7d;
L_7d79f0: /* 7d79f0: cmp dword ptr [ebp + 8], 0x40 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d79f4: jge 0x7d7b12 */
  if ((sf == of)) goto L_7d7b12;
L_7d79fa: /* 7d79fa: xor esi, esi */
  esi = 0;
/* 7d79fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d7a00: /* 7d7a00: cmp esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a03: jge 0x7d7a61 */
  if ((sf == of)) goto L_7d7a61;
L_7d7a05: /* 7d7a05: xor edi, edi */
  edi = 0;
L_7d7a07: /* 7d7a07: cmp edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a0a: jge 0x7d7a5c */
  if ((sf == of)) goto L_7d7a5c;
L_7d7a0c: /* 7d7a0c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7a0f: mov edx, dword ptr [ecx + 0x108] */
  edx = R32((uint32_t)(ecx + 0x108u));
/* 7d7a15: mov eax, esi */
  eax = esi;
/* 7d7a17: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7d7a1a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d7a1c: movzx edx, byte ptr [eax + edi + 0x110] */
  edx = (uint32_t)(R8((uint32_t)(eax + edi + 0x110u)));
/* 7d7a24: lea ebx, [eax + edi + 0x110] */
  ebx = (uint32_t)(eax + edi + 0x110u);
/* 7d7a2b: cmp edx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a2e: jle 0x7d7a59 */
  if ((zf || sf != of)) goto L_7d7a59;
L_7d7a30: /* 7d7a30: mov eax, 1 */
  eax = 0x1u;
/* 7d7a35: xor edx, edx */
  edx = 0;
/* 7d7a37: mov ecx, edi */
  ecx = edi;
/* 7d7a39: call 0x99cc70 */
  esp -= 4; W32(esp, 0x7d7a3eu); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 7d7a3e: mov ecx, dword ptr [ebp + esi*8 - 0x2e8] */
  ecx = R32((uint32_t)(ebp + esi*8 + 0xfffffd18u));
/* 7d7a45: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7d7a47: mov eax, dword ptr [ebp + esi*8 - 0x2e4] */
  eax = R32((uint32_t)(ebp + esi*8 + 0xfffffd1cu));
/* 7d7a4e: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d7a50: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 7d7a52: je 0x7d7a59 */
  if (zf) goto L_7d7a59;
L_7d7a54: /* 7d7a54: mov al, byte ptr [ebp + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 7d7a57: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
L_7d7a59: /* 7d7a59: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d7a5a: jmp 0x7d7a07 */
  goto L_7d7a07;
L_7d7a5c: /* 7d7a5c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7a5d: xor ebx, ebx */
  ebx = 0;
/* 7d7a5f: jmp 0x7d7a00 */
  goto L_7d7a00;
L_7d7a61: /* 7d7a61: xor eax, eax */
  eax = 0;
L_7d7a63: /* 7d7a63: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a66: jge 0x7d7a79 */
  if ((sf == of)) goto L_7d7a79;
L_7d7a68: /* 7d7a68: mov dword ptr [ebp + eax*8 - 0x4e8], ebx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffb18u), ebx);
/* 7d7a6f: mov dword ptr [ebp + eax*8 - 0x4e4], ebx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffb1cu), ebx);
/* 7d7a76: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d7a77: jmp 0x7d7a63 */
  goto L_7d7a63;
L_7d7a79: /* 7d7a79: xor edi, edi */
  edi = 0;
/* 7d7a7b: jmp 0x7d7a80 */
  goto L_7d7a80;
L_7d7a7d: /* 7d7a7d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d7a80: /* 7d7a80: cmp edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a83: jge 0x7d7ae4 */
  if ((sf == of)) goto L_7d7ae4;
L_7d7a85: /* 7d7a85: xor esi, esi */
  esi = 0;
L_7d7a87: /* 7d7a87: cmp esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a8a: jge 0x7d7ae1 */
  if ((sf == of)) goto L_7d7ae1;
L_7d7a8c: /* 7d7a8c: mov eax, 1 */
  eax = 0x1u;
/* 7d7a91: xor edx, edx */
  edx = 0;
/* 7d7a93: mov ecx, esi */
  ecx = esi;
/* 7d7a95: call 0x99cc70 */
  esp -= 4; W32(esp, 0x7d7a9au); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 7d7a9a: mov ecx, dword ptr [ebp + edi*8 - 0x2e8] */
  ecx = R32((uint32_t)(ebp + edi*8 + 0xfffffd18u));
/* 7d7aa1: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7d7aa3: mov eax, dword ptr [ebp + edi*8 - 0x2e4] */
  eax = R32((uint32_t)(ebp + edi*8 + 0xfffffd1cu));
/* 7d7aaa: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d7aac: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 7d7aae: je 0x7d7ade */
  if (zf) goto L_7d7ade;
L_7d7ab0: /* 7d7ab0: mov edx, dword ptr [ebp + edi*8 - 0x4e8] */
  edx = R32((uint32_t)(ebp + edi*8 + 0xfffffb18u));
/* 7d7ab7: mov ecx, dword ptr [ebp + esi*8 - 0x2e8] */
  ecx = R32((uint32_t)(ebp + esi*8 + 0xfffffd18u));
/* 7d7abe: mov eax, dword ptr [ebp + edi*8 - 0x4e4] */
  eax = R32((uint32_t)(ebp + edi*8 + 0xfffffb1cu));
/* 7d7ac5: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7d7ac7: mov dword ptr [ebp + edi*8 - 0x4e8], edx */
  W32((uint32_t)(ebp + edi*8 + 0xfffffb18u), edx);
/* 7d7ace: mov edx, dword ptr [ebp + esi*8 - 0x2e4] */
  edx = R32((uint32_t)(ebp + esi*8 + 0xfffffd1cu));
/* 7d7ad5: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7d7ad7: mov dword ptr [ebp + edi*8 - 0x4e4], eax */
  W32((uint32_t)(ebp + edi*8 + 0xfffffb1cu), eax);
L_7d7ade: /* 7d7ade: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7adf: jmp 0x7d7a87 */
  goto L_7d7a87;
L_7d7ae1: /* 7d7ae1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d7ae2: jmp 0x7d7a80 */
  goto L_7d7a80;
L_7d7ae4: /* 7d7ae4: xor eax, eax */
  eax = 0;
L_7d7ae6: /* 7d7ae6: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7ae9: jge 0x7d7b0a */
  if ((sf == of)) goto L_7d7b0a;
L_7d7aeb: /* 7d7aeb: mov ecx, dword ptr [ebp + eax*8 - 0x4e8] */
  ecx = R32((uint32_t)(ebp + eax*8 + 0xfffffb18u));
/* 7d7af2: mov edx, dword ptr [ebp + eax*8 - 0x4e4] */
  edx = R32((uint32_t)(ebp + eax*8 + 0xfffffb1cu));
/* 7d7af9: mov dword ptr [ebp + eax*8 - 0x2e8], ecx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffd18u), ecx);
/* 7d7b00: mov dword ptr [ebp + eax*8 - 0x2e4], edx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffd1cu), edx);
/* 7d7b07: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d7b08: jmp 0x7d7ae6 */
  goto L_7d7ae6;
L_7d7b0a: /* 7d7b0a: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 7d7b0d: jmp 0x7d79f0 */
  goto L_7d79f0;
L_7d7b12: /* 7d7b12: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7b15: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7d7b1b: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7d7b1e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7b20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7b21: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d7b28: call dword ptr [edx + 0xe8] */
  { uint32_t t = R32((uint32_t)(edx + 0xe8u)); esp -= 4; W32(esp, 0x7d7b2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7b2e: mov cx, word ptr [0xb81b4c] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xb81b4cu))) & 0xffffu);
/* 7d7b35: mov dx, word ptr [0xb81b50] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xb81b50u))) & 0xffffu);
/* 7d7b3c: mov word ptr [ebp - 0xee8], cx */
  W16((uint32_t)(ebp + 0xfffff118u), (ecx & 0xffffu));
/* 7d7b43: xor eax, eax */
  eax = 0;
/* 7d7b45: mov ecx, 0x1ff */
  ecx = 0x1ffu;
/* 7d7b4a: lea edi, [ebp - 0xee6] */
  edi = (uint32_t)(ebp + 0xfffff11au);
/* 7d7b50: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 7d7b52: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 7d7b54: mov word ptr [ebp - 0x6e8], dx */
  W16((uint32_t)(ebp + 0xfffff918u), (edx & 0xffffu));
/* 7d7b5b: xor eax, eax */
  eax = 0;
/* 7d7b5d: mov ecx, 0x7f */
  ecx = 0x7fu;
/* 7d7b62: lea edi, [ebp - 0x6e6] */
  edi = (uint32_t)(ebp + 0xfffff91au);
/* 7d7b68: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 7d7b6a: push 0xb81b54 */
  { uint32_t v = 0xb81b54u; esp -= 4; W32(esp, v); }
/* 7d7b6f: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 7d7b75: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 7d7b77: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7d7b7du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7d7b7d: mov ebx, dword ptr [0xcfa914] */
  ebx = R32((uint32_t)(0xcfa914u));
/* 7d7b83: mov byte ptr [ebp - 4], 0x22 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x22u);
/* 7d7b87: xor edi, edi */
  edi = 0;
/* 7d7b89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d7b90: /* 7d7b90: cmp edi, dword ptr [ebp - 0xa8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7b96: jge 0x7d7bf7 */
  if ((sf == of)) goto L_7d7bf7;
L_7d7b98: /* 7d7b98: lea eax, [ebp - 0xee8] */
  eax = (uint32_t)(ebp + 0xfffff118u);
/* 7d7b9e: push 0xadadb0 */
  { uint32_t v = 0xadadb0u; esp -= 4; W32(esp, v); }
/* 7d7ba3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7ba4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7ba6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7ba6: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 7d7bac: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 7d7baf: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7d7bb2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7bb5: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d7bb7: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7bbdu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7bbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7bbe: lea edx, [ebp - 0xee8] */
  edx = (uint32_t)(ebp + 0xfffff118u);
/* 7d7bc4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7bc5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7bc7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7bc7: mov eax, dword ptr [ebp - 0xac] */
  eax = R32((uint32_t)(ebp + 0xffffff54u));
/* 7d7bcd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7bd0: lea ecx, [esi + eax] */
  ecx = (uint32_t)(esi + eax);
/* 7d7bd3: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7bd9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7bd9: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7d7bde: lea ecx, [ebp - 0x6e8] */
  ecx = (uint32_t)(ebp + 0xfffff918u);
/* 7d7be4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d7be5: push 0xadadb4 */
  { uint32_t v = 0xadadb4u; esp -= 4; W32(esp, v); }
/* 7d7bea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7beb: call dword ptr [0xcfa910] */
  esp -= 4; W32(esp, 0x7d7bf1u); SPILL(); f_4e2e73(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0PAGH@Z */ RELOAD();
/* 7d7bf1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7bf4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d7bf5: jmp 0x7d7b90 */
  goto L_7d7b90;
L_7d7bf7: /* 7d7bf7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7bfa: mov ecx, dword ptr [edx + 0x108] */
  ecx = R32((uint32_t)(edx + 0x108u));
/* 7d7c00: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7c02: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x7d7c08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7c08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c0a: je 0x7d7da7 */
  if (zf) goto L_7d7da7;
L_7d7c10: /* 7d7c10: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7d7c13: mov eax, dword ptr [ecx + 0x508] */
  eax = R32((uint32_t)(ecx + 0x508u));
/* 7d7c19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c1b: jne 0x7d7da7 */
  if (!zf) goto L_7d7da7;
L_7d7c21: /* 7d7c21: cmp word ptr [ebp - 0x6e8], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffff918u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7c29: mov ebx, dword ptr [0xcfa7b8] */
  ebx = R32((uint32_t)(0xcfa7b8u));
/* 7d7c2f: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 7d7c32: je 0x7d7c56 */
  if (zf) goto L_7d7c56;
L_7d7c34: /* 7d7c34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7c35: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7c37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c39: lea edx, [ebp - 0x6e8] */
  edx = (uint32_t)(ebp + 0xfffff918u);
/* 7d7c3f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7c40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c42: push 0xb5e3b8 */
  { uint32_t v = 0xb5e3b8u; esp -= 4; W32(esp, v); }
/* 7d7c47: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7c49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7c49: mov esi, eax */
  esi = eax;
/* 7d7c4b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7c4e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c50: jne 0x7d7ce3 */
  if (!zf) goto L_7d7ce3;
L_7d7c56: /* 7d7c56: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7d7c59: add esi, 0x4f0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4f0u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d7c5f: mov ecx, esi */
  ecx = esi;
/* 7d7c61: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7d7c67u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7d7c67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7d7c69: jle 0x7d7c8b */
  if ((zf || sf != of)) goto L_7d7c8b;
L_7d7c6b: /* 7d7c6b: mov ecx, esi */
  ecx = esi;
/* 7d7c6d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7c73u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7c73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7c74: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7c76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7c79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c7b: push 0xb5e3b8 */
  { uint32_t v = 0xb5e3b8u; esp -= 4; W32(esp, v); }
/* 7d7c80: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7c82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7c82: mov esi, eax */
  esi = eax;
/* 7d7c84: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7c87: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c89: jne 0x7d7ce3 */
  if (!zf) goto L_7d7ce3;
L_7d7c8b: /* 7d7c8b: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7c8e: mov ecx, dword ptr [esi + 0x108] */
  ecx = R32((uint32_t)(esi + 0x108u));
/* 7d7c94: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d7c9au); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d7c9a: mov ecx, eax */
  ecx = eax;
/* 7d7c9c: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d7ca2u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d7ca2: push 0xadadc0 */
  { uint32_t v = 0xadadc0u; esp -= 4; W32(esp, v); }
/* 7d7ca7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7ca8: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7d7caeu); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7d7cae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7cb1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7cb3: je 0x7d7cde */
  if (zf) goto L_7d7cde;
L_7d7cb5: /* 7d7cb5: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7d7cb8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7cba: mov eax, 0xadadcc */
  eax = 0xadadccu;
/* 7d7cbf: jne 0x7d7cc6 */
  if (!zf) goto L_7d7cc6;
L_7d7cc1: /* 7d7cc1: mov eax, 0xadae08 */
  eax = 0xadae08u;
L_7d7cc6: /* 7d7cc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7cc7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7cc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7ccb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7ccc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7cce: push 0xb5e3b8 */
  { uint32_t v = 0xb5e3b8u; esp -= 4; W32(esp, v); }
/* 7d7cd3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7cd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7cd5: mov esi, eax */
  esi = eax;
/* 7d7cd7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7cda: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7cdc: jne 0x7d7ce3 */
  if (!zf) goto L_7d7ce3;
L_7d7cde: /* 7d7cde: mov esi, 0xb5e3b8 */
  esi = 0xb5e3b8u;
L_7d7ce3: /* 7d7ce3: mov ecx, esi */
  ecx = esi;
/* 7d7ce5: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d7cebu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d7ceb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7cec: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d7cf1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7cf3: push 0xadae50 */
  { uint32_t v = 0xadae50u; esp -= 4; W32(esp, v); }
/* 7d7cf8: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 7d7cfd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d7cfe: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7d7d04u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7d7d04: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7d07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d13: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d17: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7d1a: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7d7d21: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7d7d28: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7d7d2f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7d7d35u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7d7d35: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7d37: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d7d3a: mov edx, esp */
  edx = esp;
/* 7d7d3c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7d7d3e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d7d41: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7d7d44: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7d7d47: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7d7d4a: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d7d4d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d7d50: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d7d53: mov ecx, esp */
  ecx = esp;
/* 7d7d55: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7d7d57: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d7d5a: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7d7d5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d7d5e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7d7d61: mov ecx, esp */
  ecx = esp;
/* 7d7d63: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7d7d66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d68: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d7d6eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d7d6e: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7d71: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7d77: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7d79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d7d7a: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x7d7d80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7d80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7d82: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 7d7d85: mov dword ptr [edi + 0x508], eax */
  W32((uint32_t)(edi + 0x508u), eax);
/* 7d7d8b: jne 0x7d7dad */
  if (!zf) goto L_7d7dad;
L_7d7d8d: /* 7d7d8d: push 0x6c9 */
  { uint32_t v = 0x6c9u; esp -= 4; W32(esp, v); }
/* 7d7d92: push 0xadae78 */
  { uint32_t v = 0xadae78u; esp -= 4; W32(esp, v); }
/* 7d7d97: push 0xadae84 */
  { uint32_t v = 0xadae84u; esp -= 4; W32(esp, v); }
/* 7d7d9c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7d7da2u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7d7da2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7da5: jmp 0x7d7dad */
  goto L_7d7dad;
L_7d7da7: /* 7d7da7: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7daa: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
L_7d7dad: /* 7d7dad: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d7db0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7db2: mov dword ptr [ebp - 4], 0x21 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7d7db9: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7d7dbd: je 0x7d7dd7 */
  if (zf) goto L_7d7dd7;
L_7d7dbf: /* 7d7dbf: push 0xadaea0 */
  { uint32_t v = 0xadaea0u; esp -= 4; W32(esp, v); }
/* 7d7dc4: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d7dca: call 0x6c991c */
  esp -= 4; W32(esp, 0x7d7dcfu); SPILL(); f_6c991c(); if (g_unwind) return; RELOAD();
/* 7d7dcf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7dd1: je 0x7d7e8a */
  if (zf) goto L_7d7e8a;
L_7d7dd7: /* 7d7dd7: mov eax, dword ptr [ebx + 0x110] */
  eax = R32((uint32_t)(ebx + 0x110u));
/* 7d7ddd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7ddf: je 0x7d7e1f */
  if (zf) goto L_7d7e1f;
L_7d7de1: /* 7d7de1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d7de4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7de6: mov byte ptr [ebp - 4], 0x25 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x25u);
/* 7d7dea: je 0x7d7e04 */
  if (zf) goto L_7d7e04;
L_7d7dec: /* 7d7dec: push 0x6d4 */
  { uint32_t v = 0x6d4u; esp -= 4; W32(esp, v); }
/* 7d7df1: push 0xadaeb0 */
  { uint32_t v = 0xadaeb0u; esp -= 4; W32(esp, v); }
/* 7d7df6: push 0xadaebc */
  { uint32_t v = 0xadaebcu; esp -= 4; W32(esp, v); }
/* 7d7dfb: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7d7e01u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7d7e01: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7e04: /* 7d7e04: mov ecx, dword ptr [ebx + 0x110] */
  ecx = R32((uint32_t)(ebx + 0x110u));
/* 7d7e0a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7e0c: je 0x7d7e15 */
  if (zf) goto L_7d7e15;
L_7d7e0e: /* 7d7e0e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7e10: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7e12: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7d7e15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d7e15: /* 7d7e15: mov dword ptr [ebx + 0x110], 0 */
  W32((uint32_t)(ebx + 0x110u), 0x0u);
L_7d7e1f: /* 7d7e1f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e22: mov dword ptr [ebp - 4], 0x24 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7d7e29: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7d7e2fu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7d7e2f: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7e35: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7e37: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7e3b: mov byte ptr [ebp - 4], 0x27 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x27u);
/* 7d7e3f: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x7d7e45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7e45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7e47: jne 0x7d7e7d */
  if (!zf) goto L_7d7e7d;
L_7d7e49: /* 7d7e49: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e4c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7e52u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7e52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7e54: push 0xadaed0 */
  { uint32_t v = 0xadaed0u; esp -= 4; W32(esp, v); }
/* 7d7e59: push 0xadaee0 */
  { uint32_t v = 0xadaee0u; esp -= 4; W32(esp, v); }
/* 7d7e5e: mov esi, eax */
  esi = eax;
/* 7d7e60: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x7d7e66u); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 7d7e66: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7d7e6c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7e6e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7e71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d7e72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7e73: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7e74: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7d7e7au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7d7e7a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7e7d: /* 7d7e7d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e80: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7d7e84: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d7e8au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7d7e8a: /* 7d7e8a: mov byte ptr [edi + 0x448], 2 */
  W8((uint32_t)(edi + 0x448u), 0x2u);
/* 7d7e91: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d7e94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7e96: mov dword ptr [ebp - 4], 0x21 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7d7e9d: je 0x7d7f00 */
  if (zf) goto L_7d7f00;
L_7d7e9f: /* 7d7e9f: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7d7ea2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7ea4: je 0x7d7f00 */
  if (zf) goto L_7d7f00;
L_7d7ea6: /* 7d7ea6: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d7ea9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7eab: mov eax, dword ptr [ecx + 0x70] */
  eax = R32((uint32_t)(ecx + 0x70u));
/* 7d7eae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7eb0: je 0x7d7f00 */
  if (zf) goto L_7d7f00;
L_7d7eb2: /* 7d7eb2: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d7eb5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7eb7: je 0x7d7ef2 */
  if (zf) goto L_7d7ef2;
L_7d7eb9: /* 7d7eb9: mov byte ptr [edi + 0x448], 2 */
  W8((uint32_t)(edi + 0x448u), 0x2u);
/* 7d7ec0: jmp 0x7d7f00 */
  goto L_7d7f00;
L_7d7ef2: /* 7d7ef2: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7d7ef5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7ef7: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7d7efa: mov byte ptr [edi + 0x448], dl */
  W8((uint32_t)(edi + 0x448u), (edx & 0xffu));
L_7d7f00: /* 7d7f00: mov ecx, dword ptr [0xce6f04] */
  ecx = R32((uint32_t)(0xce6f04u));
/* 7d7f06: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7f08: je 0x7d7f0f */
  if (zf) goto L_7d7f0f;
L_7d7f0a: /* 7d7f0a: call 0x6cbfa5 */
  esp -= 4; W32(esp, 0x7d7f0fu); SPILL(); f_6cbfa5(); if (g_unwind) return; RELOAD();
L_7d7f0f: /* 7d7f0f: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d7f15: mov dword ptr [eax + 0x104], 0 */
  W32((uint32_t)(eax + 0x104u), 0x0u);
/* 7d7f1f: test byte ptr [edi + 0x444], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x444u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7f26: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7d7f2a: jne 0x7d85d8 */
  if (!zf) goto L_7d85d8;
L_7d7f30: /* 7d7f30: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7f36: mov esi, dword ptr [0xcfa3a8] */
  esi = R32((uint32_t)(0xcfa3a8u));
/* 7d7f3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7f3e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d7f40u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f40: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d7f46: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7f48: mov edi, dword ptr [0xcfa3a4] */
  edi = R32((uint32_t)(0xcfa3a4u));
/* 7d7f4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7f4f: push 0xad5650 */
  { uint32_t v = 0xad5650u; esp -= 4; W32(esp, v); }
/* 7d7f54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7f55: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d7f57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f57: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d7f5d: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d7f60: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7f62: mov cl, byte ptr [eax + 0x44c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x44cu))) & 0xffu);
/* 7d7f68: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7f6b: test cl, 0x10 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7f6e: jne 0x7d7f83 */
  if (!zf) goto L_7d7f83;
L_7d7f70: /* 7d7f70: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7d7f76: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d7f78: push 0xadaf08 */
  { uint32_t v = 0xadaf08u; esp -= 4; W32(esp, v); }
/* 7d7f7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7f7e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d7f80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f80: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7f83: /* 7d7f83: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7d7f85: mov ecx, ebx */
  ecx = ebx;
/* 7d7f87: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7d7f8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f8d: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7d7f90: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d7f93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7f94: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x7d7f9au); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 7d7f9a: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7fa0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7fa3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7fa5: mov edi, eax */
  edi = eax;
/* 7d7fa7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d7fa9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7fa9: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d7faf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7fb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7fb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7fb3: push 0xadaf60 */
  { uint32_t v = 0xadaf60u; esp -= 4; W32(esp, v); }
/* 7d7fb8: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 7d7fbd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7fbe: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7d7fc4u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7d7fc4: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d7fca: xor esi, esi */
  esi = 0;
/* 7d7fcc: mov dword ptr [eax + 0x100], esi */
  W32((uint32_t)(eax + 0x100u), esi);
/* 7d7fd2: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7fd8: mov dword ptr [ecx + 0xd0], esi */
  W32((uint32_t)(ecx + 0xd0u), esi);
/* 7d7fde: mov dword ptr [ecx + 0xd4], esi */
  W32((uint32_t)(ecx + 0xd4u), esi);
/* 7d7fe4: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d7fea: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d7fed: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d7fef: mov dword ptr [eax + 0x3ac], esi */
  W32((uint32_t)(eax + 0x3acu), esi);
/* 7d7ff5: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7ffb: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d7ffe: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7d8000: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8003: call 0x6c34d1 */
  esp -= 4; W32(esp, 0x7d8008u); SPILL(); f_6c34d1(); if (g_unwind) return; RELOAD();
/* 7d8008: or dword ptr [eax + 0x80], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x80u), r);
  }
/* 7d8012: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8018: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d801a: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x7d8020u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8020: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8022: jne 0x7d8072 */
  if (!zf) goto L_7d8072;
L_7d8024: /* 7d8024: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d802a: cmp esi, dword ptr [ecx + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d802d: jge 0x7d8072 */
  if ((sf == of)) goto L_7d8072;
L_7d802f: /* 7d802f: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8032: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d8035: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8037: je 0x7d806f */
  if (zf) goto L_7d806f;
L_7d8039: /* 7d8039: mov edx, dword ptr [eax + 0x80] */
  edx = R32((uint32_t)(eax + 0x80u));
/* 7d803f: test dl, 0x40 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8042: jne 0x7d8057 */
  if (!zf) goto L_7d8057;
L_7d8044: /* 7d8044: test dh, 1 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8047: jne 0x7d8057 */
  if (!zf) goto L_7d8057;
L_7d8049: /* 7d8049: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d804b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d804d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d804e: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x7d8054u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8054: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d8055: jmp 0x7d8024 */
  goto L_7d8024;
L_7d8057: /* 7d8057: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 7d805d: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 7d8063: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 7d8069: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
L_7d806f: /* 7d806f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d8070: jmp 0x7d8024 */
  goto L_7d8024;
L_7d8072: /* 7d8072: xor esi, esi */
  esi = 0;
L_7d8074: /* 7d8074: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d807a: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d807d: jge 0x7d80d5 */
  if ((sf == of)) goto L_7d80d5;
L_7d807f: /* 7d807f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8082: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d8085: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8087: je 0x7d80d2 */
  if (zf) goto L_7d80d2;
L_7d8089: /* 7d8089: mov dword ptr [eax + 0xd4], 0 */
  W32((uint32_t)(eax + 0xd4u), 0x0u);
/* 7d8093: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8099: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d809c: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d809f: add ecx, 0x110 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d80a5: xor eax, eax */
  eax = 0;
L_7d80a7: /* 7d80a7: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d80aa: jge 0x7d80af */
  if ((sf == of)) goto L_7d80af;
L_7d80ac: /* 7d80ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d80ad: jmp 0x7d80a7 */
  goto L_7d80a7;
L_7d80af: /* 7d80af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d80b1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d80b3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7d80b9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7d80b9: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d80bf: mov edi, dword ptr [eax + 0x2c] */
  edi = R32((uint32_t)(eax + 0x2cu));
/* 7d80c2: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7d80c4: call 0x6c34d1 */
  esp -= 4; W32(esp, 0x7d80c9u); SPILL(); f_6c34d1(); if (g_unwind) return; RELOAD();
/* 7d80c9: mov ecx, dword ptr [edi + esi*4] */
  ecx = R32((uint32_t)(edi + esi*4));
/* 7d80cc: mov dword ptr [ecx + 0x16c], eax */
  W32((uint32_t)(ecx + 0x16cu), eax);
L_7d80d2: /* 7d80d2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d80d3: jmp 0x7d8074 */
  goto L_7d8074;
L_7d80d5: /* 7d80d5: xor esi, esi */
  esi = 0;
/* 7d80d7: jmp 0x7d80e0 */
  goto L_7d80e0;
L_7d80e0: /* 7d80e0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d80e6: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d80e9: jge 0x7d80fd */
  if ((sf == of)) goto L_7d80fd;
L_7d80eb: /* 7d80eb: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d80ee: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d80f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d80f3: je 0x7d80fa */
  if (zf) goto L_7d80fa;
L_7d80f5: /* 7d80f5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d80f7: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x7d80fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d80fa: /* 7d80fa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d80fb: jmp 0x7d80e0 */
  goto L_7d80e0;
L_7d80fd: /* 7d80fd: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7d8100: mov edx, dword ptr [esi + 0x444] */
  edx = R32((uint32_t)(esi + 0x444u));
/* 7d8106: mov ecx, dword ptr [esi + 0x44c] */
  ecx = R32((uint32_t)(esi + 0x44cu));
/* 7d810c: mov eax, 4 */
  eax = 0x4u;
/* 7d8111: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7d8113: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 7d8115: mov eax, dword ptr [esi + 0x508] */
  eax = R32((uint32_t)(esi + 0x508u));
/* 7d811b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d811d: mov dword ptr [esi + 0x444], edx */
  W32((uint32_t)(esi + 0x444u), edx);
/* 7d8123: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 7d8129: je 0x7d8162 */
  if (zf) goto L_7d8162;
L_7d812b: /* 7d812b: lea ecx, [ebp - 0xee8] */
  ecx = (uint32_t)(ebp + 0xfffff118u);
/* 7d8131: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8132: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8135: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7d813bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7d813b: mov ecx, dword ptr [esi + 0x508] */
  ecx = R32((uint32_t)(esi + 0x508u));
/* 7d8141: lea edx, [ebp - 0xe8] */
  edx = (uint32_t)(ebp + 0xffffff18u);
/* 7d8147: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8148: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7d814b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d814c: mov byte ptr [ebp - 4], 0x2a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2au);
/* 7d8150: call 0x6c6a87 */
  esp -= 4; W32(esp, 0x7d8155u); SPILL(); f_6c6a87(); if (g_unwind) return; RELOAD();
/* 7d8155: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8158: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7d815c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d8162u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7d8162: /* 7d8162: xor edi, edi */
  edi = 0;
L_7d8164: /* 7d8164: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d816a: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d816d: jge 0x7d81bc */
  if ((sf == of)) goto L_7d81bc;
L_7d816f: /* 7d816f: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d8172: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7d8175: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8177: je 0x7d81b9 */
  if (zf) goto L_7d81b9;
L_7d8179: /* 7d8179: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8180: jne 0x7d81b9 */
  if (!zf) goto L_7d81b9;
L_7d8182: /* 7d8182: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8183: mov ecx, esp */
  ecx = esp;
/* 7d8185: push 0x163 */
  { uint32_t v = 0x163u; esp -= 4; W32(esp, v); }
/* 7d818a: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d8190u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d8190: mov ecx, esi */
  ecx = esi;
/* 7d8192: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7d8198u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7d8198: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d819a: je 0x7d81b9 */
  if (zf) goto L_7d81b9;
L_7d819c: /* 7d819c: mov edx, dword ptr [0xb7e33c] */
  edx = R32((uint32_t)(0xb7e33cu));
/* 7d81a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d81a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d81a5: mov ecx, esi */
  ecx = esi;
/* 7d81a7: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d81adu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d81ad: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d81af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d81b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d81b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d81b4: mov ecx, esi */
  ecx = esi;
/* 7d81b6: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d81b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d81b9: /* 7d81b9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d81ba: jmp 0x7d8164 */
  goto L_7d8164;
L_7d81bc: /* 7d81bc: xor edi, edi */
  edi = 0;
/* 7d81be: mov edi, edi */
  edi = edi;
L_7d81c0: /* 7d81c0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d81c6: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d81c9: jge 0x7d8218 */
  if ((sf == of)) goto L_7d8218;
L_7d81cb: /* 7d81cb: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d81ce: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d81d1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d81d3: je 0x7d8215 */
  if (zf) goto L_7d8215;
L_7d81d5: /* 7d81d5: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d81dc: jne 0x7d8215 */
  if (!zf) goto L_7d8215;
L_7d81de: /* 7d81de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d81df: mov ecx, esp */
  ecx = esp;
/* 7d81e1: push 0x164 */
  { uint32_t v = 0x164u; esp -= 4; W32(esp, v); }
/* 7d81e6: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d81ecu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d81ec: mov ecx, esi */
  ecx = esi;
/* 7d81ee: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7d81f4u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7d81f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d81f6: je 0x7d8215 */
  if (zf) goto L_7d8215;
L_7d81f8: /* 7d81f8: mov ecx, dword ptr [0xb7e340] */
  ecx = R32((uint32_t)(0xb7e340u));
/* 7d81fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8200: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8201: mov ecx, esi */
  ecx = esi;
/* 7d8203: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d8209u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d8209: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d820b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d820d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d820f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8210: mov ecx, esi */
  ecx = esi;
/* 7d8212: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d8215u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8215: /* 7d8215: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8216: jmp 0x7d81c0 */
  goto L_7d81c0;
L_7d8218: /* 7d8218: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d821b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7d8221u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7d8221: mov byte ptr [ebp - 4], 0x2b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2bu);
/* 7d8225: xor edi, edi */
  edi = 0;
/* 7d8227: jmp 0x7d8230 */
  goto L_7d8230;
L_7d8230: /* 7d8230: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8236: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8239: jge 0x7d8291 */
  if ((sf == of)) goto L_7d8291;
L_7d823b: /* 7d823b: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d823e: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7d8241: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8243: je 0x7d825a */
  if (zf) goto L_7d825a;
L_7d8245: /* 7d8245: test byte ptr [ecx + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d824c: jne 0x7d825a */
  if (!zf) goto L_7d825a;
L_7d824e: /* 7d824e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d8250: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8252: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8254: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0x7d825au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d825a: /* 7d825a: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8260: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d8263: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7d8266: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8268: je 0x7d828e */
  if (zf) goto L_7d828e;
L_7d826a: /* 7d826a: push 0xb6dcb8 */
  { uint32_t v = 0xb6dcb8u; esp -= 4; W32(esp, v); }
/* 7d826f: mov ecx, esi */
  ecx = esi;
/* 7d8271: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8277u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8277: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8279: je 0x7d828e */
  if (zf) goto L_7d828e;
L_7d827b: /* 7d827b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d827d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d827f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d8282: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8288u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8288: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7d828b: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
L_7d828e: /* 7d828e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d828f: jmp 0x7d8230 */
  goto L_7d8230;
L_7d8291: /* 7d8291: xor esi, esi */
  esi = 0;
L_7d8293: /* 7d8293: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8299: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d829c: jge 0x7d82bd */
  if ((sf == of)) goto L_7d82bd;
L_7d829e: /* 7d829e: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d82a1: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d82a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82a6: je 0x7d82ba */
  if (zf) goto L_7d82ba;
L_7d82a8: /* 7d82a8: test byte ptr [ecx + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82af: jne 0x7d82ba */
  if (!zf) goto L_7d82ba;
L_7d82b1: /* 7d82b1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d82b3: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7d82b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d82b7: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d82bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d82ba: /* 7d82ba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d82bb: jmp 0x7d8293 */
  goto L_7d8293;
L_7d82bd: /* 7d82bd: xor edi, edi */
  edi = 0;
/* 7d82bf: nop  */
L_7d82c0: /* 7d82c0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d82c6: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d82c9: jge 0x7d8330 */
  if ((sf == of)) goto L_7d8330;
L_7d82cb: /* 7d82cb: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d82ce: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7d82d1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82d3: je 0x7d832d */
  if (zf) goto L_7d832d;
L_7d82d5: /* 7d82d5: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82dc: jne 0x7d832d */
  if (!zf) goto L_7d832d;
L_7d82de: /* 7d82de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d82df: mov ecx, esp */
  ecx = esp;
/* 7d82e1: push 0x165 */
  { uint32_t v = 0x165u; esp -= 4; W32(esp, v); }
/* 7d82e6: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d82ecu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d82ec: mov ecx, esi */
  ecx = esi;
/* 7d82ee: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7d82f4u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7d82f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82f6: je 0x7d8315 */
  if (zf) goto L_7d8315;
L_7d82f8: /* 7d82f8: mov edx, dword ptr [0xb7e344] */
  edx = R32((uint32_t)(0xb7e344u));
/* 7d82fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8300: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8301: mov ecx, esi */
  ecx = esi;
/* 7d8303: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d8309u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d8309: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d830b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d830d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d830f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8310: mov ecx, esi */
  ecx = esi;
/* 7d8312: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d8315u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8315: /* 7d8315: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d831b: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d831e: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 7d8321: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8323: je 0x7d832d */
  if (zf) goto L_7d832d;
L_7d8325: /* 7d8325: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d8327: call dword ptr [edx + 0x110] */
  { uint32_t t = R32((uint32_t)(edx + 0x110u)); esp -= 4; W32(esp, 0x7d832du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d832d: /* 7d832d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d832e: jmp 0x7d82c0 */
  goto L_7d82c0;
L_7d8330: /* 7d8330: xor edi, edi */
  edi = 0;
L_7d8332: /* 7d8332: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8338: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d833b: jge 0x7d8370 */
  if ((sf == of)) goto L_7d8370;
L_7d833d: /* 7d833d: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8340: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d8343: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8345: je 0x7d836d */
  if (zf) goto L_7d836d;
L_7d8347: /* 7d8347: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d834e: jne 0x7d836d */
  if (!zf) goto L_7d836d;
L_7d8350: /* 7d8350: mov ecx, dword ptr [0xb7e3f4] */
  ecx = R32((uint32_t)(0xb7e3f4u));
/* 7d8356: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8358: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8359: mov ecx, esi */
  ecx = esi;
/* 7d835b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d8361u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d8361: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8363: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8365: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8367: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8368: mov ecx, esi */
  ecx = esi;
/* 7d836a: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d836du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d836d: /* 7d836d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d836e: jmp 0x7d8332 */
  goto L_7d8332;
L_7d8370: /* 7d8370: xor edi, edi */
  edi = 0;
L_7d8372: /* 7d8372: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8378: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d837b: jge 0x7d83b0 */
  if ((sf == of)) goto L_7d83b0;
L_7d837d: /* 7d837d: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8380: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d8383: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8385: je 0x7d83ad */
  if (zf) goto L_7d83ad;
L_7d8387: /* 7d8387: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d838e: jne 0x7d83ad */
  if (!zf) goto L_7d83ad;
L_7d8390: /* 7d8390: mov ecx, dword ptr [0xb7e3b8] */
  ecx = R32((uint32_t)(0xb7e3b8u));
/* 7d8396: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8398: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8399: mov ecx, esi */
  ecx = esi;
/* 7d839b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d83a1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d83a1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d83a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d83a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d83a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d83a8: mov ecx, esi */
  ecx = esi;
/* 7d83aa: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d83adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d83ad: /* 7d83ad: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d83ae: jmp 0x7d8372 */
  goto L_7d8372;
L_7d83b0: /* 7d83b0: xor esi, esi */
  esi = 0;
/* 7d83b2: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d83c0: /* 7d83c0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d83c6: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d83c9: jge 0x7d850a */
  if ((sf == of)) goto L_7d850a;
L_7d83cf: /* 7d83cf: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d83d2: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d83d6: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d83dc: /* 7d83dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d83de: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7d83e1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d83e7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d83e7: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d83ed: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d83f0: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7d83f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d83f4: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d83f7: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d83fd: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7d8403u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8403: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8405: je 0x7d84d6 */
  if (zf) goto L_7d84d6;
L_7d840b: /* 7d840b: xor edi, edi */
  edi = 0;
/* 7d840d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d8410: /* 7d8410: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8416: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8419: jge 0x7d8504 */
  if ((sf == of)) goto L_7d8504;
L_7d841f: /* 7d841f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8422: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7d8425: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8427: je 0x7d84d0 */
  if (zf) goto L_7d84d0;
L_7d842d: /* 7d842d: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* 7d8430: add edx, 0x1f8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7d8436: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8437: add ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d843d: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7d8443u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8443: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8445: jne 0x7d847c */
  if (!zf) goto L_7d847c;
L_7d8447: /* 7d8447: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d844d: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8450: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 7d8453: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 7d8456: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8457: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x7d845du); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 7d845d: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8463: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8466: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d8469: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d846f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8470: mov ecx, eax */
  ecx = eax;
/* 7d8472: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7d8478u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8478: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d847a: je 0x7d84d0 */
  if (zf) goto L_7d84d0;
L_7d847c: /* 7d847c: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8482: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d8485: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d8488: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d848a: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 7d848d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d848f: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 7d8492: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d8495: mov ecx, esp */
  ecx = esp;
/* 7d8497: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7d849e: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d84a1: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7d84a3: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7d84aa: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d84ad: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7d84b0: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 7d84b7: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d84ba: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 7d84bd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7d84c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d84c1: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7d84c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d84c7: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d84ca: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d84cb: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d84d0: /* 7d84d0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d84d1: jmp 0x7d8410 */
  goto L_7d8410;
L_7d84d6: /* 7d84d6: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d84dc: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d84df: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d84e2: test byte ptr [ecx + 0x88], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84e9: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d84eb: /* 7d84eb: test byte ptr [ecx + 0x87], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x87u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84f2: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d84f4: /* 7d84f4: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 7d84f7: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84f9: je 0x7d84ff */
  if (zf) goto L_7d84ff;
L_7d84fb: /* 7d84fb: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d84fd: jne 0x7d8504 */
  if (!zf) goto L_7d8504;
L_7d84ff: /* 7d84ff: call 0x6c5754 */
  esp -= 4; W32(esp, 0x7d8504u); SPILL(); f_6c5754(); if (g_unwind) return; RELOAD();
L_7d8504: /* 7d8504: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d8505: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d850a: /* 7d850a: xor ecx, ecx */
  ecx = 0;
/* 7d850c: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 7d850f: nop  */
L_7d8510: /* 7d8510: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8516: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8519: jge 0x7d85bd */
  if ((sf == of)) goto L_7d85bd;
L_7d851f: /* 7d851f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8522: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 7d8525: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8527: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d852d: /* 7d852d: cmp byte ptr [edi + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8531: jne 0x7d85af */
  if (!zf) goto L_7d85af;
L_7d8533: /* 7d8533: mov ecx, dword ptr [edi + 0x30c] */
  ecx = R32((uint32_t)(edi + 0x30cu));
/* 7d8539: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d853b: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d853d: /* 7d853d: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 7d8542: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8548u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8548: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d854a: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d854c: /* 7d854c: mov esi, dword ptr [edi + 0x30c] */
  esi = R32((uint32_t)(edi + 0x30cu));
/* 7d8552: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8554: je 0x7d8567 */
  if (zf) goto L_7d8567;
L_7d8556: /* 7d8556: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 7d855b: mov ecx, esi */
  ecx = esi;
/* 7d855d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8563u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8563: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8565: jne 0x7d8569 */
  if (!zf) goto L_7d8569;
L_7d8567: /* 7d8567: xor esi, esi */
  esi = 0;
L_7d8569: /* 7d8569: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d856f: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8572: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d8574: cmp byte ptr [eax + 0x3f0], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3f0u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 7d857b: jae 0x7d858c */
  if (!cf) goto L_7d858c;
L_7d857d: /* 7d857d: test byte ptr [esi + 0x90], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8584: je 0x7d858c */
  if (zf) goto L_7d858c;
L_7d8586: /* 7d8586: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d8587: call 0x6c5ab0 */
  esp -= 4; W32(esp, 0x7d858cu); SPILL(); f_6c5ab0(); if (g_unwind) return; RELOAD();
L_7d858c: /* 7d858c: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8592: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d8595: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8597: cmp byte ptr [eax + 0x4c8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4c8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d859e: jne 0x7d85af */
  if (!zf) goto L_7d85af;
L_7d85a0: /* 7d85a0: test byte ptr [esi + 0x90], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d85a7: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d85a9: /* 7d85a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d85aa: call 0x6c5ab0 */
  esp -= 4; W32(esp, 0x7d85afu); SPILL(); f_6c5ab0(); if (g_unwind) return; RELOAD();
L_7d85af: /* 7d85af: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d85b2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d85b3: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7d85b6: mov ecx, eax */
  ecx = eax;
/* 7d85b8: jmp 0x7d8510 */
  goto L_7d8510;
L_7d85bd: /* 7d85bd: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7d85c0: and dword ptr [eax + 0x44c], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44cu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x44cu), r);
  }
/* 7d85c7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d85ca: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7d85ce: call 0x6cb014 */
  esp -= 4; W32(esp, 0x7d85d3u); SPILL(); f_6cb014(); if (g_unwind) return; RELOAD();
/* 7d85d3: jmp 0x7d8667 */
  goto L_7d8667;
L_7d85d8: /* 7d85d8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d85db: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 7d85e1: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d85e4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d85e6: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 7d85ec: mov ebx, dword ptr [0xcfa2c0] */
  ebx = R32((uint32_t)(0xcfa2c0u));
/* 7d85f2: fstp qword ptr [eax + 0xd0] */
  WF64((uint32_t)(eax + 0xd0u), ST0); FPOP();
/* 7d85f8: xor edi, edi */
  edi = 0;
/* 7d85fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7d8600: /* 7d8600: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8603: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 7d8609: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d860c: jge 0x7d8664 */
  if ((sf == of)) goto L_7d8664;
L_7d860e: /* 7d860e: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8611: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d8614: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8616: je 0x7d8631 */
  if (zf) goto L_7d8631;
L_7d8618: /* 7d8618: mov ecx, dword ptr [0xb7e550] */
  ecx = R32((uint32_t)(0xb7e550u));
/* 7d861e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8620: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8621: mov ecx, esi */
  ecx = esi;
/* 7d8623: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d8625u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8625: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8627: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8629: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d862b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d862c: mov ecx, esi */
  ecx = esi;
/* 7d862e: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d8631u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8631: /* 7d8631: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8632: jmp 0x7d8600 */
  goto L_7d8600;
L_7d8664: /* 7d8664: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
L_7d8667: /* 7d8667: mov dword ptr [ebp - 4], 0x21 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7d866e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8671: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 7d8675: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7d867bu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7d867b: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8681: mov esi, dword ptr [edx + 0x2c] */
  esi = R32((uint32_t)(edx + 0x2cu));
/* 7d8684: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8686: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8688: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d868b: mov byte ptr [ebp - 4], 0x2e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2eu);
/* 7d868f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8695u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8695: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d8697: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d869a: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d869d: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d86a3: mov esi, dword ptr [eax + 0x2c] */
  esi = R32((uint32_t)(eax + 0x2cu));
/* 7d86a6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d86a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d86aa: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d86ad: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d86b0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d86b6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d86b6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d86b8: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d86bb: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d86be: mov edi, 2 */
  edi = 0x2u;
L_7d86c3: /* 7d86c3: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d86c9: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d86cc: jge 0x7d8704 */
  if ((sf == of)) goto L_7d8704;
L_7d86ce: /* 7d86ce: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d86d1: lea esi, [eax + edi*4] */
  esi = (uint32_t)(eax + edi*4);
/* 7d86d4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7d86d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86d8: je 0x7d8701 */
  if (zf) goto L_7d8701;
L_7d86da: /* 7d86da: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86e1: je 0x7d8701 */
  if (zf) goto L_7d8701;
L_7d86e3: /* 7d86e3: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86ea: jne 0x7d8701 */
  if (!zf) goto L_7d8701;
L_7d86ec: /* 7d86ec: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d86ee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d86f0: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d86f3: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d86f9u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d86f9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d86fb: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d86fe: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d8701: /* 7d8701: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8702: jmp 0x7d86c3 */
  goto L_7d86c3;
L_7d8704: /* 7d8704: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d870a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d870d: mov dword ptr [eax + 0x108], ecx */
  W32((uint32_t)(eax + 0x108u), ecx);
/* 7d8713: mov edi, 2 */
  edi = 0x2u;
/* 7d8718: jmp 0x7d8720 */
  goto L_7d8720;
L_7d8720: /* 7d8720: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8726: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8729: jge 0x7d8762 */
  if ((sf == of)) goto L_7d8762;
L_7d872b: /* 7d872b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d872e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7d8731: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8733: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 7d8736: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d8738: /* 7d8738: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d873f: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d8741: /* 7d8741: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8748: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d874a: /* 7d874a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d874c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d874e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8751: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8757u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8757: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d8759: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d875c: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d875f: /* 7d875f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8760: jmp 0x7d8720 */
  goto L_7d8720;
L_7d8762: /* 7d8762: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8768: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d876b: mov dword ptr [eax + 0x104], ecx */
  W32((uint32_t)(eax + 0x104u), ecx);
/* 7d8771: mov edi, 2 */
  edi = 0x2u;
/* 7d8776: jmp 0x7d8780 */
  goto L_7d8780;
L_7d8780: /* 7d8780: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8786: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8789: jge 0x7d87b9 */
  if ((sf == of)) goto L_7d87b9;
L_7d878b: /* 7d878b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d878e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7d8791: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8793: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 7d8796: je 0x7d87b6 */
  if (zf) goto L_7d87b6;
L_7d8798: /* 7d8798: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d879f: jne 0x7d87b6 */
  if (!zf) goto L_7d87b6;
L_7d87a1: /* 7d87a1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d87a5: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d87a8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d87aeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d87ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d87b0: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d87b3: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d87b6: /* 7d87b6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d87b7: jmp 0x7d8780 */
  goto L_7d8780;
L_7d87b9: /* 7d87b9: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 7d87be: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d87c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d87c6: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d87c9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d87cb: je 0x7d87eb */
  if (zf) goto L_7d87eb;
L_7d87cd: /* 7d87cd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7d87d0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d87d2: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d87d7: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d87dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87de: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d87e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d87e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d87e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e8: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d87ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d87eb: /* 7d87eb: xor eax, eax */
  eax = 0;
/* 7d87ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d87f0: /* 7d87f0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d87f3: jge 0x7d87f8 */
  if ((sf == of)) goto L_7d87f8;
L_7d87f5: /* 7d87f5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d87f6: jmp 0x7d87f0 */
  goto L_7d87f0;
L_7d87f8: /* 7d87f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87fa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87fc: mov ecx, esi */
  ecx = esi;
/* 7d87fe: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7d8804u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7d8804: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d880a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d880d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d880f: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8813: mov ecx, esi */
  ecx = esi;
/* 7d8815: mov edi, eax */
  edi = eax;
/* 7d8817: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d881du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d881d: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 7d8823: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d8825: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8827: je 0x7d8843 */
  if (zf) goto L_7d8843;
L_7d8829: /* 7d8829: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d882b: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d8830: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d8835: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8837: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8839: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d883a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d883b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d883e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d883f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8840: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d8843u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8843: /* 7d8843: xor eax, eax */
  eax = 0;
L_7d8845: /* 7d8845: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8848: jge 0x7d885f */
  if ((sf == of)) goto L_7d885f;
L_7d884a: /* 7d884a: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8850: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8853: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d8856: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 7d8859: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d885c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d885d: jmp 0x7d8845 */
  goto L_7d8845;
L_7d885f: /* 7d885f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8862: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 7d8866: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x7d886bu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 7d886b: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d886e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8870: mov esi, 0x21 */
  esi = 0x21u;
/* 7d8875: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8878: mov byte ptr [ebp - 4], 0x30 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x30u);
/* 7d887c: je 0x7d892e */
  if (zf) goto L_7d892e;
L_7d8882: /* 7d8882: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8888: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d888a: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x7d8890u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8890: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8892: je 0x7d889c */
  if (zf) goto L_7d889c;
L_7d8894: /* 7d8894: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d889a: jmp 0x7d88a2 */
  goto L_7d88a2;
L_7d889c: /* 7d889c: mov eax, dword ptr [ebx + 0x10c] */
  eax = R32((uint32_t)(ebx + 0x10cu));
L_7d88a2: /* 7d88a2: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 7d88a5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d88ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d88ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d88ae: call 0x7ccae0 */
  esp -= 4; W32(esp, 0x7d88b3u); SPILL(); f_7ccae0(); if (g_unwind) return; RELOAD();
/* 7d88b3: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d88b9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88bb: je 0x7d88ce */
  if (zf) goto L_7d88ce;
L_7d88bd: /* 7d88bd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88bf: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7d88c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88c5: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88c8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88cb: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d88ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88ce: /* 7d88ce: xor edi, edi */
  edi = 0;
L_7d88d0: /* 7d88d0: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d88d3: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d88d6: jge 0x7d8929 */
  if ((sf == of)) goto L_7d8929;
L_7d88d8: /* 7d88d8: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d88db: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d88de: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 7d88e1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88e3: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7d88e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88e9: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 7d88ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88ee: je 0x7d88f6 */
  if (zf) goto L_7d88f6;
L_7d88f0: /* 7d88f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d88f3: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d88f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88f6: /* 7d88f6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d88f7: jmp 0x7d88d0 */
  goto L_7d88d0;
L_7d8929: /* 7d8929: mov esi, 0x21 */
  esi = 0x21u;
L_7d892e: /* 7d892e: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7d8931: movzx edx, byte ptr [edx + 0x448] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x448u)));
/* 7d8938: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d893e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8940: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8941: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8944: call dword ptr [eax + 0xdc] */
  { uint32_t t = R32((uint32_t)(eax + 0xdcu)); esp -= 4; W32(esp, 0x7d894au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d894a: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8951: lea ecx, [ebx + 0x114] */
  ecx = (uint32_t)(ebx + 0x114u);
/* 7d8957: mov byte ptr [ebp - 4], 0x32 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x32u);
/* 7d895b: call 0x6ca50b */
  esp -= 4; W32(esp, 0x7d8960u); SPILL(); f_6ca50b(); if (g_unwind) return; RELOAD();
/* 7d8960: mov ecx, dword ptr [0xcfa814] */
  ecx = R32((uint32_t)(0xcfa814u));
/* 7d8966: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8969: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d896c: je 0x7d8a28 */
  if (zf) goto L_7d8a28;
L_7d8972: /* 7d8972: push 0xadafc0 */
  { uint32_t v = 0xadafc0u; esp -= 4; W32(esp, v); }
/* 7d8977: push 0xadafcc */
  { uint32_t v = 0xadafccu; esp -= 4; W32(esp, v); }
/* 7d897c: push 0xadafd8 */
  { uint32_t v = 0xadafd8u; esp -= 4; W32(esp, v); }
/* 7d8981: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8987: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d898cu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d898c: push 0xadaff4 */
  { uint32_t v = 0xadaff4u; esp -= 4; W32(esp, v); }
/* 7d8991: push 0xadb000 */
  { uint32_t v = 0xadb000u; esp -= 4; W32(esp, v); }
/* 7d8996: push 0xadb00c */
  { uint32_t v = 0xadb00cu; esp -= 4; W32(esp, v); }
/* 7d899b: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89a1: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89a6u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89a6: push 0xadb028 */
  { uint32_t v = 0xadb028u; esp -= 4; W32(esp, v); }
/* 7d89ab: push 0xadb034 */
  { uint32_t v = 0xadb034u; esp -= 4; W32(esp, v); }
/* 7d89b0: push 0xadb040 */
  { uint32_t v = 0xadb040u; esp -= 4; W32(esp, v); }
/* 7d89b5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89bb: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89c0u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89c0: push 0xadb05c */
  { uint32_t v = 0xadb05cu; esp -= 4; W32(esp, v); }
/* 7d89c5: push 0xadb068 */
  { uint32_t v = 0xadb068u; esp -= 4; W32(esp, v); }
/* 7d89ca: push 0xadb074 */
  { uint32_t v = 0xadb074u; esp -= 4; W32(esp, v); }
/* 7d89cf: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89d5: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89dau); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89da: push 0xadb090 */
  { uint32_t v = 0xadb090u; esp -= 4; W32(esp, v); }
/* 7d89df: push 0xadb09c */
  { uint32_t v = 0xadb09cu; esp -= 4; W32(esp, v); }
/* 7d89e4: push 0xadb0a8 */
  { uint32_t v = 0xadb0a8u; esp -= 4; W32(esp, v); }
/* 7d89e9: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89ef: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89f4u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89f4: push 0xadb0c4 */
  { uint32_t v = 0xadb0c4u; esp -= 4; W32(esp, v); }
/* 7d89f9: push 0xadb0d0 */
  { uint32_t v = 0xadb0d0u; esp -= 4; W32(esp, v); }
/* 7d89fe: push 0xadb0dc */
  { uint32_t v = 0xadb0dcu; esp -= 4; W32(esp, v); }
/* 7d8a03: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a09: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a0eu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d8a0e: push 0xadb0f8 */
  { uint32_t v = 0xadb0f8u; esp -= 4; W32(esp, v); }
/* 7d8a13: push 0xadb104 */
  { uint32_t v = 0xadb104u; esp -= 4; W32(esp, v); }
/* 7d8a18: push 0xadb120 */
  { uint32_t v = 0xadb120u; esp -= 4; W32(esp, v); }
/* 7d8a1d: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a23: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a28u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
L_7d8a28: /* 7d8a28: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8a2e: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d8a31: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d8a33: test byte ptr [eax + 0x404], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x404u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8a3a: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7d8a3d: jne 0x7d8a90 */
  if (!zf) goto L_7d8a90;
L_7d8a3f: /* 7d8a3f: xor ebx, ebx */
  ebx = 0;
L_7d8a41: /* 7d8a41: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d8a44: cmp ebx, dword ptr [ecx + 0x3fc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3fcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8a4a: jge 0x7d8a90 */
  if ((sf == of)) goto L_7d8a90;
L_7d8a4c: /* 7d8a4c: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 7d8a52: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7d8a54: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8a56: push 0xadb13c */
  { uint32_t v = 0xadb13cu; esp -= 4; W32(esp, v); }
/* 7d8a5b: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 7d8a60: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7d8a62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8a62: mov edi, eax */
  edi = eax;
/* 7d8a64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d8a65: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x7d8a6au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 7d8a6a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a6d: mov esi, dword ptr [ecx + 0x108] */
  esi = R32((uint32_t)(ecx + 0x108u));
/* 7d8a73: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8a76: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8a78: add esi, 0x1178 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1178u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8a7e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8a80: mov ecx, esi */
  ecx = esi;
/* 7d8a82: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8a88u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8a88: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8a8a: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 7d8a8d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7d8a8e: jmp 0x7d8a41 */
  goto L_7d8a41;
L_7d8a90: /* 7d8a90: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a93: mov esi, dword ptr [eax + 0x108] */
  esi = R32((uint32_t)(eax + 0x108u));
/* 7d8a99: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 7d8a9f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d8aa3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d8aa9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d8aa9: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7d8aac: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7d8ab0: call 0x6c312a */
  esp -= 4; W32(esp, 0x7d8ab5u); SPILL(); f_6c312a(); if (g_unwind) return; RELOAD();
/* 7d8ab5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8abb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7d8abf: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7d8ac4u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 7d8ac4: mov eax, esi */
  eax = esi;
/* 7d8ac6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d8ac9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d8ad0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d8ad1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d8ad2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d8ad3: mov esp, ebp */
  esp = ebp;
/* 7d8ad5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d8ad6: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7d7ec2(void) {
  LOAD_REGS();
L_7d7ec2: /* 7d7ec2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7d7ec5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7d7eca: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 7d7ecd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d7ece: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 7d7ed1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d7ed6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d7ed6(); return;
}

void f_7d7ed6(void) {
  LOAD_REGS();
L_7d7ed6: /* 7d7ed6: push 0xa0f5dc */
  { uint32_t v = 0xa0f5dcu; esp -= 4; W32(esp, v); }
/* 7d7edb: push 0xadaec8 */
  { uint32_t v = 0xadaec8u; esp -= 4; W32(esp, v); }
/* 7d7ee0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7d7ee6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7d7ee6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7ee9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7eeb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7eed: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d7ef2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7d7ef2: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7d7ef5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7ef7: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7d7efa: mov byte ptr [edi + 0x448], dl */
  W8((uint32_t)(edi + 0x448u), (edx & 0xffu));
/* 7d7f00: mov ecx, dword ptr [0xce6f04] */
  ecx = R32((uint32_t)(0xce6f04u));
/* 7d7f06: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7f08: je 0x7d7f0f */
  if (zf) goto L_7d7f0f;
L_7d7f0a: /* 7d7f0a: call 0x6cbfa5 */
  esp -= 4; W32(esp, 0x7d7f0fu); SPILL(); f_6cbfa5(); if (g_unwind) return; RELOAD();
L_7d7f0f: /* 7d7f0f: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d7f15: mov dword ptr [eax + 0x104], 0 */
  W32((uint32_t)(eax + 0x104u), 0x0u);
/* 7d7f1f: test byte ptr [edi + 0x444], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x444u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7f26: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7d7f2a: jne 0x7d85d8 */
  if (!zf) goto L_7d85d8;
L_7d7f30: /* 7d7f30: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7f36: mov esi, dword ptr [0xcfa3a8] */
  esi = R32((uint32_t)(0xcfa3a8u));
/* 7d7f3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7f3e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d7f40u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f40: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d7f46: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7f48: mov edi, dword ptr [0xcfa3a4] */
  edi = R32((uint32_t)(0xcfa3a4u));
/* 7d7f4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7f4f: push 0xad5650 */
  { uint32_t v = 0xad5650u; esp -= 4; W32(esp, v); }
/* 7d7f54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7f55: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d7f57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f57: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d7f5d: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d7f60: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7f62: mov cl, byte ptr [eax + 0x44c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x44cu))) & 0xffu);
/* 7d7f68: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7f6b: test cl, 0x10 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7f6e: jne 0x7d7f83 */
  if (!zf) goto L_7d7f83;
L_7d7f70: /* 7d7f70: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7d7f76: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d7f78: push 0xadaf08 */
  { uint32_t v = 0xadaf08u; esp -= 4; W32(esp, v); }
/* 7d7f7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7f7e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d7f80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f80: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7f83: /* 7d7f83: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7d7f85: mov ecx, ebx */
  ecx = ebx;
/* 7d7f87: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7d7f8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f8d: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7d7f90: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d7f93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7f94: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x7d7f9au); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 7d7f9a: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7fa0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7fa3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7fa5: mov edi, eax */
  edi = eax;
/* 7d7fa7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d7fa9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7fa9: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d7faf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7fb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7fb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7fb3: push 0xadaf60 */
  { uint32_t v = 0xadaf60u; esp -= 4; W32(esp, v); }
/* 7d7fb8: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 7d7fbd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7fbe: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7d7fc4u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7d7fc4: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d7fca: xor esi, esi */
  esi = 0;
/* 7d7fcc: mov dword ptr [eax + 0x100], esi */
  W32((uint32_t)(eax + 0x100u), esi);
/* 7d7fd2: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7fd8: mov dword ptr [ecx + 0xd0], esi */
  W32((uint32_t)(ecx + 0xd0u), esi);
/* 7d7fde: mov dword ptr [ecx + 0xd4], esi */
  W32((uint32_t)(ecx + 0xd4u), esi);
/* 7d7fe4: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d7fea: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d7fed: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d7fef: mov dword ptr [eax + 0x3ac], esi */
  W32((uint32_t)(eax + 0x3acu), esi);
/* 7d7ff5: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7ffb: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d7ffe: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7d8000: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8003: call 0x6c34d1 */
  esp -= 4; W32(esp, 0x7d8008u); SPILL(); f_6c34d1(); if (g_unwind) return; RELOAD();
/* 7d8008: or dword ptr [eax + 0x80], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x80u), r);
  }
/* 7d8012: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8018: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d801a: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x7d8020u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8020: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8022: jne 0x7d8072 */
  if (!zf) goto L_7d8072;
L_7d8024: /* 7d8024: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d802a: cmp esi, dword ptr [ecx + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d802d: jge 0x7d8072 */
  if ((sf == of)) goto L_7d8072;
L_7d802f: /* 7d802f: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8032: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d8035: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8037: je 0x7d806f */
  if (zf) goto L_7d806f;
L_7d8039: /* 7d8039: mov edx, dword ptr [eax + 0x80] */
  edx = R32((uint32_t)(eax + 0x80u));
/* 7d803f: test dl, 0x40 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8042: jne 0x7d8057 */
  if (!zf) goto L_7d8057;
L_7d8044: /* 7d8044: test dh, 1 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8047: jne 0x7d8057 */
  if (!zf) goto L_7d8057;
L_7d8049: /* 7d8049: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d804b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d804d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d804e: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x7d8054u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8054: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d8055: jmp 0x7d8024 */
  goto L_7d8024;
L_7d8057: /* 7d8057: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 7d805d: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 7d8063: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 7d8069: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
L_7d806f: /* 7d806f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d8070: jmp 0x7d8024 */
  goto L_7d8024;
L_7d8072: /* 7d8072: xor esi, esi */
  esi = 0;
L_7d8074: /* 7d8074: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d807a: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d807d: jge 0x7d80d5 */
  if ((sf == of)) goto L_7d80d5;
L_7d807f: /* 7d807f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8082: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d8085: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8087: je 0x7d80d2 */
  if (zf) goto L_7d80d2;
L_7d8089: /* 7d8089: mov dword ptr [eax + 0xd4], 0 */
  W32((uint32_t)(eax + 0xd4u), 0x0u);
/* 7d8093: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8099: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d809c: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d809f: add ecx, 0x110 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d80a5: xor eax, eax */
  eax = 0;
L_7d80a7: /* 7d80a7: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d80aa: jge 0x7d80af */
  if ((sf == of)) goto L_7d80af;
L_7d80ac: /* 7d80ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d80ad: jmp 0x7d80a7 */
  goto L_7d80a7;
L_7d80af: /* 7d80af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d80b1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d80b3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7d80b9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7d80b9: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d80bf: mov edi, dword ptr [eax + 0x2c] */
  edi = R32((uint32_t)(eax + 0x2cu));
/* 7d80c2: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7d80c4: call 0x6c34d1 */
  esp -= 4; W32(esp, 0x7d80c9u); SPILL(); f_6c34d1(); if (g_unwind) return; RELOAD();
/* 7d80c9: mov ecx, dword ptr [edi + esi*4] */
  ecx = R32((uint32_t)(edi + esi*4));
/* 7d80cc: mov dword ptr [ecx + 0x16c], eax */
  W32((uint32_t)(ecx + 0x16cu), eax);
L_7d80d2: /* 7d80d2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d80d3: jmp 0x7d8074 */
  goto L_7d8074;
L_7d80d5: /* 7d80d5: xor esi, esi */
  esi = 0;
/* 7d80d7: jmp 0x7d80e0 */
  goto L_7d80e0;
L_7d80e0: /* 7d80e0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d80e6: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d80e9: jge 0x7d80fd */
  if ((sf == of)) goto L_7d80fd;
L_7d80eb: /* 7d80eb: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d80ee: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d80f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d80f3: je 0x7d80fa */
  if (zf) goto L_7d80fa;
L_7d80f5: /* 7d80f5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d80f7: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x7d80fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d80fa: /* 7d80fa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d80fb: jmp 0x7d80e0 */
  goto L_7d80e0;
L_7d80fd: /* 7d80fd: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7d8100: mov edx, dword ptr [esi + 0x444] */
  edx = R32((uint32_t)(esi + 0x444u));
/* 7d8106: mov ecx, dword ptr [esi + 0x44c] */
  ecx = R32((uint32_t)(esi + 0x44cu));
/* 7d810c: mov eax, 4 */
  eax = 0x4u;
/* 7d8111: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7d8113: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 7d8115: mov eax, dword ptr [esi + 0x508] */
  eax = R32((uint32_t)(esi + 0x508u));
/* 7d811b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d811d: mov dword ptr [esi + 0x444], edx */
  W32((uint32_t)(esi + 0x444u), edx);
/* 7d8123: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 7d8129: je 0x7d8162 */
  if (zf) goto L_7d8162;
L_7d812b: /* 7d812b: lea ecx, [ebp - 0xee8] */
  ecx = (uint32_t)(ebp + 0xfffff118u);
/* 7d8131: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8132: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8135: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7d813bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7d813b: mov ecx, dword ptr [esi + 0x508] */
  ecx = R32((uint32_t)(esi + 0x508u));
/* 7d8141: lea edx, [ebp - 0xe8] */
  edx = (uint32_t)(ebp + 0xffffff18u);
/* 7d8147: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8148: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7d814b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d814c: mov byte ptr [ebp - 4], 0x2a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2au);
/* 7d8150: call 0x6c6a87 */
  esp -= 4; W32(esp, 0x7d8155u); SPILL(); f_6c6a87(); if (g_unwind) return; RELOAD();
/* 7d8155: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8158: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7d815c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d8162u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7d8162: /* 7d8162: xor edi, edi */
  edi = 0;
L_7d8164: /* 7d8164: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d816a: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d816d: jge 0x7d81bc */
  if ((sf == of)) goto L_7d81bc;
L_7d816f: /* 7d816f: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d8172: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7d8175: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8177: je 0x7d81b9 */
  if (zf) goto L_7d81b9;
L_7d8179: /* 7d8179: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8180: jne 0x7d81b9 */
  if (!zf) goto L_7d81b9;
L_7d8182: /* 7d8182: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8183: mov ecx, esp */
  ecx = esp;
/* 7d8185: push 0x163 */
  { uint32_t v = 0x163u; esp -= 4; W32(esp, v); }
/* 7d818a: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d8190u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d8190: mov ecx, esi */
  ecx = esi;
/* 7d8192: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7d8198u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7d8198: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d819a: je 0x7d81b9 */
  if (zf) goto L_7d81b9;
L_7d819c: /* 7d819c: mov edx, dword ptr [0xb7e33c] */
  edx = R32((uint32_t)(0xb7e33cu));
/* 7d81a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d81a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d81a5: mov ecx, esi */
  ecx = esi;
/* 7d81a7: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d81adu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d81ad: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d81af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d81b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d81b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d81b4: mov ecx, esi */
  ecx = esi;
/* 7d81b6: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d81b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d81b9: /* 7d81b9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d81ba: jmp 0x7d8164 */
  goto L_7d8164;
L_7d81bc: /* 7d81bc: xor edi, edi */
  edi = 0;
/* 7d81be: mov edi, edi */
  edi = edi;
L_7d81c0: /* 7d81c0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d81c6: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d81c9: jge 0x7d8218 */
  if ((sf == of)) goto L_7d8218;
L_7d81cb: /* 7d81cb: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d81ce: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d81d1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d81d3: je 0x7d8215 */
  if (zf) goto L_7d8215;
L_7d81d5: /* 7d81d5: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d81dc: jne 0x7d8215 */
  if (!zf) goto L_7d8215;
L_7d81de: /* 7d81de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d81df: mov ecx, esp */
  ecx = esp;
/* 7d81e1: push 0x164 */
  { uint32_t v = 0x164u; esp -= 4; W32(esp, v); }
/* 7d81e6: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d81ecu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d81ec: mov ecx, esi */
  ecx = esi;
/* 7d81ee: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7d81f4u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7d81f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d81f6: je 0x7d8215 */
  if (zf) goto L_7d8215;
L_7d81f8: /* 7d81f8: mov ecx, dword ptr [0xb7e340] */
  ecx = R32((uint32_t)(0xb7e340u));
/* 7d81fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8200: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8201: mov ecx, esi */
  ecx = esi;
/* 7d8203: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d8209u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d8209: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d820b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d820d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d820f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8210: mov ecx, esi */
  ecx = esi;
/* 7d8212: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d8215u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8215: /* 7d8215: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8216: jmp 0x7d81c0 */
  goto L_7d81c0;
L_7d8218: /* 7d8218: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d821b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7d8221u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7d8221: mov byte ptr [ebp - 4], 0x2b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2bu);
/* 7d8225: xor edi, edi */
  edi = 0;
/* 7d8227: jmp 0x7d8230 */
  goto L_7d8230;
L_7d8230: /* 7d8230: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8236: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8239: jge 0x7d8291 */
  if ((sf == of)) goto L_7d8291;
L_7d823b: /* 7d823b: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d823e: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7d8241: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8243: je 0x7d825a */
  if (zf) goto L_7d825a;
L_7d8245: /* 7d8245: test byte ptr [ecx + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d824c: jne 0x7d825a */
  if (!zf) goto L_7d825a;
L_7d824e: /* 7d824e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d8250: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8252: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8254: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0x7d825au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d825a: /* 7d825a: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8260: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d8263: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7d8266: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8268: je 0x7d828e */
  if (zf) goto L_7d828e;
L_7d826a: /* 7d826a: push 0xb6dcb8 */
  { uint32_t v = 0xb6dcb8u; esp -= 4; W32(esp, v); }
/* 7d826f: mov ecx, esi */
  ecx = esi;
/* 7d8271: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8277u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8277: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8279: je 0x7d828e */
  if (zf) goto L_7d828e;
L_7d827b: /* 7d827b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d827d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d827f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d8282: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8288u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8288: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7d828b: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
L_7d828e: /* 7d828e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d828f: jmp 0x7d8230 */
  goto L_7d8230;
L_7d8291: /* 7d8291: xor esi, esi */
  esi = 0;
L_7d8293: /* 7d8293: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8299: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d829c: jge 0x7d82bd */
  if ((sf == of)) goto L_7d82bd;
L_7d829e: /* 7d829e: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d82a1: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d82a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82a6: je 0x7d82ba */
  if (zf) goto L_7d82ba;
L_7d82a8: /* 7d82a8: test byte ptr [ecx + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82af: jne 0x7d82ba */
  if (!zf) goto L_7d82ba;
L_7d82b1: /* 7d82b1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d82b3: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7d82b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d82b7: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d82bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d82ba: /* 7d82ba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d82bb: jmp 0x7d8293 */
  goto L_7d8293;
L_7d82bd: /* 7d82bd: xor edi, edi */
  edi = 0;
/* 7d82bf: nop  */
L_7d82c0: /* 7d82c0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d82c6: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d82c9: jge 0x7d8330 */
  if ((sf == of)) goto L_7d8330;
L_7d82cb: /* 7d82cb: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d82ce: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7d82d1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82d3: je 0x7d832d */
  if (zf) goto L_7d832d;
L_7d82d5: /* 7d82d5: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82dc: jne 0x7d832d */
  if (!zf) goto L_7d832d;
L_7d82de: /* 7d82de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d82df: mov ecx, esp */
  ecx = esp;
/* 7d82e1: push 0x165 */
  { uint32_t v = 0x165u; esp -= 4; W32(esp, v); }
/* 7d82e6: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d82ecu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d82ec: mov ecx, esi */
  ecx = esi;
/* 7d82ee: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7d82f4u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7d82f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82f6: je 0x7d8315 */
  if (zf) goto L_7d8315;
L_7d82f8: /* 7d82f8: mov edx, dword ptr [0xb7e344] */
  edx = R32((uint32_t)(0xb7e344u));
/* 7d82fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8300: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8301: mov ecx, esi */
  ecx = esi;
/* 7d8303: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d8309u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d8309: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d830b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d830d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d830f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8310: mov ecx, esi */
  ecx = esi;
/* 7d8312: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d8315u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8315: /* 7d8315: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d831b: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d831e: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 7d8321: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8323: je 0x7d832d */
  if (zf) goto L_7d832d;
L_7d8325: /* 7d8325: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d8327: call dword ptr [edx + 0x110] */
  { uint32_t t = R32((uint32_t)(edx + 0x110u)); esp -= 4; W32(esp, 0x7d832du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d832d: /* 7d832d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d832e: jmp 0x7d82c0 */
  goto L_7d82c0;
L_7d8330: /* 7d8330: xor edi, edi */
  edi = 0;
L_7d8332: /* 7d8332: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8338: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d833b: jge 0x7d8370 */
  if ((sf == of)) goto L_7d8370;
L_7d833d: /* 7d833d: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8340: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d8343: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8345: je 0x7d836d */
  if (zf) goto L_7d836d;
L_7d8347: /* 7d8347: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d834e: jne 0x7d836d */
  if (!zf) goto L_7d836d;
L_7d8350: /* 7d8350: mov ecx, dword ptr [0xb7e3f4] */
  ecx = R32((uint32_t)(0xb7e3f4u));
/* 7d8356: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8358: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8359: mov ecx, esi */
  ecx = esi;
/* 7d835b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d8361u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d8361: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8363: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8365: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8367: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8368: mov ecx, esi */
  ecx = esi;
/* 7d836a: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d836du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d836d: /* 7d836d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d836e: jmp 0x7d8332 */
  goto L_7d8332;
L_7d8370: /* 7d8370: xor edi, edi */
  edi = 0;
L_7d8372: /* 7d8372: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8378: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d837b: jge 0x7d83b0 */
  if ((sf == of)) goto L_7d83b0;
L_7d837d: /* 7d837d: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8380: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d8383: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8385: je 0x7d83ad */
  if (zf) goto L_7d83ad;
L_7d8387: /* 7d8387: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d838e: jne 0x7d83ad */
  if (!zf) goto L_7d83ad;
L_7d8390: /* 7d8390: mov ecx, dword ptr [0xb7e3b8] */
  ecx = R32((uint32_t)(0xb7e3b8u));
/* 7d8396: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8398: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8399: mov ecx, esi */
  ecx = esi;
/* 7d839b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d83a1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d83a1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d83a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d83a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d83a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d83a8: mov ecx, esi */
  ecx = esi;
/* 7d83aa: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d83adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d83ad: /* 7d83ad: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d83ae: jmp 0x7d8372 */
  goto L_7d8372;
L_7d83b0: /* 7d83b0: xor esi, esi */
  esi = 0;
/* 7d83b2: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d83c0: /* 7d83c0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d83c6: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d83c9: jge 0x7d850a */
  if ((sf == of)) goto L_7d850a;
L_7d83cf: /* 7d83cf: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d83d2: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d83d6: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d83dc: /* 7d83dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d83de: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7d83e1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d83e7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d83e7: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d83ed: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d83f0: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7d83f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d83f4: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d83f7: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d83fd: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7d8403u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8403: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8405: je 0x7d84d6 */
  if (zf) goto L_7d84d6;
L_7d840b: /* 7d840b: xor edi, edi */
  edi = 0;
/* 7d840d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d8410: /* 7d8410: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8416: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8419: jge 0x7d8504 */
  if ((sf == of)) goto L_7d8504;
L_7d841f: /* 7d841f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8422: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7d8425: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8427: je 0x7d84d0 */
  if (zf) goto L_7d84d0;
L_7d842d: /* 7d842d: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* 7d8430: add edx, 0x1f8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7d8436: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8437: add ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d843d: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7d8443u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8443: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8445: jne 0x7d847c */
  if (!zf) goto L_7d847c;
L_7d8447: /* 7d8447: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d844d: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8450: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 7d8453: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 7d8456: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8457: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x7d845du); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 7d845d: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8463: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8466: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d8469: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d846f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8470: mov ecx, eax */
  ecx = eax;
/* 7d8472: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7d8478u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8478: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d847a: je 0x7d84d0 */
  if (zf) goto L_7d84d0;
L_7d847c: /* 7d847c: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8482: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d8485: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d8488: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d848a: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 7d848d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d848f: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 7d8492: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d8495: mov ecx, esp */
  ecx = esp;
/* 7d8497: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7d849e: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d84a1: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7d84a3: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7d84aa: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d84ad: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7d84b0: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 7d84b7: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d84ba: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 7d84bd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7d84c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d84c1: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7d84c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d84c7: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d84ca: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d84cb: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d84d0: /* 7d84d0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d84d1: jmp 0x7d8410 */
  goto L_7d8410;
L_7d84d6: /* 7d84d6: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d84dc: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d84df: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d84e2: test byte ptr [ecx + 0x88], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84e9: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d84eb: /* 7d84eb: test byte ptr [ecx + 0x87], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x87u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84f2: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d84f4: /* 7d84f4: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 7d84f7: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84f9: je 0x7d84ff */
  if (zf) goto L_7d84ff;
L_7d84fb: /* 7d84fb: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d84fd: jne 0x7d8504 */
  if (!zf) goto L_7d8504;
L_7d84ff: /* 7d84ff: call 0x6c5754 */
  esp -= 4; W32(esp, 0x7d8504u); SPILL(); f_6c5754(); if (g_unwind) return; RELOAD();
L_7d8504: /* 7d8504: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d8505: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d850a: /* 7d850a: xor ecx, ecx */
  ecx = 0;
/* 7d850c: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 7d850f: nop  */
L_7d8510: /* 7d8510: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8516: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8519: jge 0x7d85bd */
  if ((sf == of)) goto L_7d85bd;
L_7d851f: /* 7d851f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8522: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 7d8525: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8527: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d852d: /* 7d852d: cmp byte ptr [edi + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8531: jne 0x7d85af */
  if (!zf) goto L_7d85af;
L_7d8533: /* 7d8533: mov ecx, dword ptr [edi + 0x30c] */
  ecx = R32((uint32_t)(edi + 0x30cu));
/* 7d8539: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d853b: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d853d: /* 7d853d: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 7d8542: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8548u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8548: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d854a: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d854c: /* 7d854c: mov esi, dword ptr [edi + 0x30c] */
  esi = R32((uint32_t)(edi + 0x30cu));
/* 7d8552: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8554: je 0x7d8567 */
  if (zf) goto L_7d8567;
L_7d8556: /* 7d8556: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 7d855b: mov ecx, esi */
  ecx = esi;
/* 7d855d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8563u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8563: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8565: jne 0x7d8569 */
  if (!zf) goto L_7d8569;
L_7d8567: /* 7d8567: xor esi, esi */
  esi = 0;
L_7d8569: /* 7d8569: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d856f: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8572: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d8574: cmp byte ptr [eax + 0x3f0], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3f0u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 7d857b: jae 0x7d858c */
  if (!cf) goto L_7d858c;
L_7d857d: /* 7d857d: test byte ptr [esi + 0x90], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8584: je 0x7d858c */
  if (zf) goto L_7d858c;
L_7d8586: /* 7d8586: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d8587: call 0x6c5ab0 */
  esp -= 4; W32(esp, 0x7d858cu); SPILL(); f_6c5ab0(); if (g_unwind) return; RELOAD();
L_7d858c: /* 7d858c: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8592: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d8595: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8597: cmp byte ptr [eax + 0x4c8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4c8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d859e: jne 0x7d85af */
  if (!zf) goto L_7d85af;
L_7d85a0: /* 7d85a0: test byte ptr [esi + 0x90], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d85a7: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d85a9: /* 7d85a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d85aa: call 0x6c5ab0 */
  esp -= 4; W32(esp, 0x7d85afu); SPILL(); f_6c5ab0(); if (g_unwind) return; RELOAD();
L_7d85af: /* 7d85af: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d85b2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d85b3: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7d85b6: mov ecx, eax */
  ecx = eax;
/* 7d85b8: jmp 0x7d8510 */
  goto L_7d8510;
L_7d85bd: /* 7d85bd: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7d85c0: and dword ptr [eax + 0x44c], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44cu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x44cu), r);
  }
/* 7d85c7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d85ca: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7d85ce: call 0x6cb014 */
  esp -= 4; W32(esp, 0x7d85d3u); SPILL(); f_6cb014(); if (g_unwind) return; RELOAD();
/* 7d85d3: jmp 0x7d8667 */
  goto L_7d8667;
L_7d85d8: /* 7d85d8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d85db: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 7d85e1: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d85e4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d85e6: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 7d85ec: mov ebx, dword ptr [0xcfa2c0] */
  ebx = R32((uint32_t)(0xcfa2c0u));
/* 7d85f2: fstp qword ptr [eax + 0xd0] */
  WF64((uint32_t)(eax + 0xd0u), ST0); FPOP();
/* 7d85f8: xor edi, edi */
  edi = 0;
/* 7d85fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7d8600: /* 7d8600: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8603: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 7d8609: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d860c: jge 0x7d8664 */
  if ((sf == of)) goto L_7d8664;
L_7d860e: /* 7d860e: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8611: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d8614: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8616: je 0x7d8631 */
  if (zf) goto L_7d8631;
L_7d8618: /* 7d8618: mov ecx, dword ptr [0xb7e550] */
  ecx = R32((uint32_t)(0xb7e550u));
/* 7d861e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8620: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8621: mov ecx, esi */
  ecx = esi;
/* 7d8623: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d8625u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8625: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8627: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8629: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d862b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d862c: mov ecx, esi */
  ecx = esi;
/* 7d862e: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d8631u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8631: /* 7d8631: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8632: jmp 0x7d8600 */
  goto L_7d8600;
L_7d8664: /* 7d8664: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
L_7d8667: /* 7d8667: mov dword ptr [ebp - 4], 0x21 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7d866e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8671: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 7d8675: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7d867bu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7d867b: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8681: mov esi, dword ptr [edx + 0x2c] */
  esi = R32((uint32_t)(edx + 0x2cu));
/* 7d8684: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8686: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8688: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d868b: mov byte ptr [ebp - 4], 0x2e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2eu);
/* 7d868f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8695u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8695: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d8697: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d869a: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d869d: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d86a3: mov esi, dword ptr [eax + 0x2c] */
  esi = R32((uint32_t)(eax + 0x2cu));
/* 7d86a6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d86a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d86aa: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d86ad: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d86b0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d86b6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d86b6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d86b8: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d86bb: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d86be: mov edi, 2 */
  edi = 0x2u;
L_7d86c3: /* 7d86c3: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d86c9: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d86cc: jge 0x7d8704 */
  if ((sf == of)) goto L_7d8704;
L_7d86ce: /* 7d86ce: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d86d1: lea esi, [eax + edi*4] */
  esi = (uint32_t)(eax + edi*4);
/* 7d86d4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7d86d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86d8: je 0x7d8701 */
  if (zf) goto L_7d8701;
L_7d86da: /* 7d86da: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86e1: je 0x7d8701 */
  if (zf) goto L_7d8701;
L_7d86e3: /* 7d86e3: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86ea: jne 0x7d8701 */
  if (!zf) goto L_7d8701;
L_7d86ec: /* 7d86ec: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d86ee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d86f0: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d86f3: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d86f9u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d86f9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d86fb: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d86fe: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d8701: /* 7d8701: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8702: jmp 0x7d86c3 */
  goto L_7d86c3;
L_7d8704: /* 7d8704: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d870a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d870d: mov dword ptr [eax + 0x108], ecx */
  W32((uint32_t)(eax + 0x108u), ecx);
/* 7d8713: mov edi, 2 */
  edi = 0x2u;
/* 7d8718: jmp 0x7d8720 */
  goto L_7d8720;
L_7d8720: /* 7d8720: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8726: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8729: jge 0x7d8762 */
  if ((sf == of)) goto L_7d8762;
L_7d872b: /* 7d872b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d872e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7d8731: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8733: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 7d8736: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d8738: /* 7d8738: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d873f: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d8741: /* 7d8741: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8748: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d874a: /* 7d874a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d874c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d874e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8751: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8757u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8757: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d8759: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d875c: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d875f: /* 7d875f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8760: jmp 0x7d8720 */
  goto L_7d8720;
L_7d8762: /* 7d8762: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8768: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d876b: mov dword ptr [eax + 0x104], ecx */
  W32((uint32_t)(eax + 0x104u), ecx);
/* 7d8771: mov edi, 2 */
  edi = 0x2u;
/* 7d8776: jmp 0x7d8780 */
  goto L_7d8780;
L_7d8780: /* 7d8780: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8786: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8789: jge 0x7d87b9 */
  if ((sf == of)) goto L_7d87b9;
L_7d878b: /* 7d878b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d878e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7d8791: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8793: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 7d8796: je 0x7d87b6 */
  if (zf) goto L_7d87b6;
L_7d8798: /* 7d8798: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d879f: jne 0x7d87b6 */
  if (!zf) goto L_7d87b6;
L_7d87a1: /* 7d87a1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d87a5: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d87a8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d87aeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d87ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d87b0: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d87b3: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d87b6: /* 7d87b6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d87b7: jmp 0x7d8780 */
  goto L_7d8780;
L_7d87b9: /* 7d87b9: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 7d87be: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d87c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d87c6: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d87c9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d87cb: je 0x7d87eb */
  if (zf) goto L_7d87eb;
L_7d87cd: /* 7d87cd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7d87d0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d87d2: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d87d7: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d87dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87de: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d87e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d87e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d87e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e8: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d87ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d87eb: /* 7d87eb: xor eax, eax */
  eax = 0;
/* 7d87ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d87f0: /* 7d87f0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d87f3: jge 0x7d87f8 */
  if ((sf == of)) goto L_7d87f8;
L_7d87f5: /* 7d87f5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d87f6: jmp 0x7d87f0 */
  goto L_7d87f0;
L_7d87f8: /* 7d87f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87fa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87fc: mov ecx, esi */
  ecx = esi;
/* 7d87fe: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7d8804u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7d8804: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d880a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d880d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d880f: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8813: mov ecx, esi */
  ecx = esi;
/* 7d8815: mov edi, eax */
  edi = eax;
/* 7d8817: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d881du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d881d: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 7d8823: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d8825: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8827: je 0x7d8843 */
  if (zf) goto L_7d8843;
L_7d8829: /* 7d8829: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d882b: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d8830: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d8835: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8837: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8839: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d883a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d883b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d883e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d883f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8840: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d8843u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8843: /* 7d8843: xor eax, eax */
  eax = 0;
L_7d8845: /* 7d8845: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8848: jge 0x7d885f */
  if ((sf == of)) goto L_7d885f;
L_7d884a: /* 7d884a: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8850: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8853: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d8856: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 7d8859: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d885c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d885d: jmp 0x7d8845 */
  goto L_7d8845;
L_7d885f: /* 7d885f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8862: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 7d8866: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x7d886bu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 7d886b: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d886e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8870: mov esi, 0x21 */
  esi = 0x21u;
/* 7d8875: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8878: mov byte ptr [ebp - 4], 0x30 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x30u);
/* 7d887c: je 0x7d892e */
  if (zf) goto L_7d892e;
L_7d8882: /* 7d8882: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8888: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d888a: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x7d8890u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8890: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8892: je 0x7d889c */
  if (zf) goto L_7d889c;
L_7d8894: /* 7d8894: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d889a: jmp 0x7d88a2 */
  goto L_7d88a2;
L_7d889c: /* 7d889c: mov eax, dword ptr [ebx + 0x10c] */
  eax = R32((uint32_t)(ebx + 0x10cu));
L_7d88a2: /* 7d88a2: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 7d88a5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d88ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d88ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d88ae: call 0x7ccae0 */
  esp -= 4; W32(esp, 0x7d88b3u); SPILL(); f_7ccae0(); if (g_unwind) return; RELOAD();
/* 7d88b3: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d88b9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88bb: je 0x7d88ce */
  if (zf) goto L_7d88ce;
L_7d88bd: /* 7d88bd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88bf: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7d88c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88c5: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88c8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88cb: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d88ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88ce: /* 7d88ce: xor edi, edi */
  edi = 0;
L_7d88d0: /* 7d88d0: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d88d3: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d88d6: jge 0x7d8929 */
  if ((sf == of)) goto L_7d8929;
L_7d88d8: /* 7d88d8: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d88db: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d88de: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 7d88e1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88e3: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7d88e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88e9: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 7d88ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88ee: je 0x7d88f6 */
  if (zf) goto L_7d88f6;
L_7d88f0: /* 7d88f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d88f3: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d88f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88f6: /* 7d88f6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d88f7: jmp 0x7d88d0 */
  goto L_7d88d0;
L_7d8929: /* 7d8929: mov esi, 0x21 */
  esi = 0x21u;
L_7d892e: /* 7d892e: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7d8931: movzx edx, byte ptr [edx + 0x448] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x448u)));
/* 7d8938: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d893e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8940: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8941: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8944: call dword ptr [eax + 0xdc] */
  { uint32_t t = R32((uint32_t)(eax + 0xdcu)); esp -= 4; W32(esp, 0x7d894au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d894a: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8951: lea ecx, [ebx + 0x114] */
  ecx = (uint32_t)(ebx + 0x114u);
/* 7d8957: mov byte ptr [ebp - 4], 0x32 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x32u);
/* 7d895b: call 0x6ca50b */
  esp -= 4; W32(esp, 0x7d8960u); SPILL(); f_6ca50b(); if (g_unwind) return; RELOAD();
/* 7d8960: mov ecx, dword ptr [0xcfa814] */
  ecx = R32((uint32_t)(0xcfa814u));
/* 7d8966: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8969: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d896c: je 0x7d8a28 */
  if (zf) goto L_7d8a28;
L_7d8972: /* 7d8972: push 0xadafc0 */
  { uint32_t v = 0xadafc0u; esp -= 4; W32(esp, v); }
/* 7d8977: push 0xadafcc */
  { uint32_t v = 0xadafccu; esp -= 4; W32(esp, v); }
/* 7d897c: push 0xadafd8 */
  { uint32_t v = 0xadafd8u; esp -= 4; W32(esp, v); }
/* 7d8981: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8987: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d898cu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d898c: push 0xadaff4 */
  { uint32_t v = 0xadaff4u; esp -= 4; W32(esp, v); }
/* 7d8991: push 0xadb000 */
  { uint32_t v = 0xadb000u; esp -= 4; W32(esp, v); }
/* 7d8996: push 0xadb00c */
  { uint32_t v = 0xadb00cu; esp -= 4; W32(esp, v); }
/* 7d899b: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89a1: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89a6u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89a6: push 0xadb028 */
  { uint32_t v = 0xadb028u; esp -= 4; W32(esp, v); }
/* 7d89ab: push 0xadb034 */
  { uint32_t v = 0xadb034u; esp -= 4; W32(esp, v); }
/* 7d89b0: push 0xadb040 */
  { uint32_t v = 0xadb040u; esp -= 4; W32(esp, v); }
/* 7d89b5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89bb: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89c0u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89c0: push 0xadb05c */
  { uint32_t v = 0xadb05cu; esp -= 4; W32(esp, v); }
/* 7d89c5: push 0xadb068 */
  { uint32_t v = 0xadb068u; esp -= 4; W32(esp, v); }
/* 7d89ca: push 0xadb074 */
  { uint32_t v = 0xadb074u; esp -= 4; W32(esp, v); }
/* 7d89cf: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89d5: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89dau); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89da: push 0xadb090 */
  { uint32_t v = 0xadb090u; esp -= 4; W32(esp, v); }
/* 7d89df: push 0xadb09c */
  { uint32_t v = 0xadb09cu; esp -= 4; W32(esp, v); }
/* 7d89e4: push 0xadb0a8 */
  { uint32_t v = 0xadb0a8u; esp -= 4; W32(esp, v); }
/* 7d89e9: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89ef: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89f4u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89f4: push 0xadb0c4 */
  { uint32_t v = 0xadb0c4u; esp -= 4; W32(esp, v); }
/* 7d89f9: push 0xadb0d0 */
  { uint32_t v = 0xadb0d0u; esp -= 4; W32(esp, v); }
/* 7d89fe: push 0xadb0dc */
  { uint32_t v = 0xadb0dcu; esp -= 4; W32(esp, v); }
/* 7d8a03: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a09: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a0eu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d8a0e: push 0xadb0f8 */
  { uint32_t v = 0xadb0f8u; esp -= 4; W32(esp, v); }
/* 7d8a13: push 0xadb104 */
  { uint32_t v = 0xadb104u; esp -= 4; W32(esp, v); }
/* 7d8a18: push 0xadb120 */
  { uint32_t v = 0xadb120u; esp -= 4; W32(esp, v); }
/* 7d8a1d: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a23: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a28u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
L_7d8a28: /* 7d8a28: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8a2e: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d8a31: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d8a33: test byte ptr [eax + 0x404], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x404u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8a3a: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7d8a3d: jne 0x7d8a90 */
  if (!zf) goto L_7d8a90;
L_7d8a3f: /* 7d8a3f: xor ebx, ebx */
  ebx = 0;
L_7d8a41: /* 7d8a41: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d8a44: cmp ebx, dword ptr [ecx + 0x3fc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3fcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8a4a: jge 0x7d8a90 */
  if ((sf == of)) goto L_7d8a90;
L_7d8a4c: /* 7d8a4c: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 7d8a52: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7d8a54: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8a56: push 0xadb13c */
  { uint32_t v = 0xadb13cu; esp -= 4; W32(esp, v); }
/* 7d8a5b: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 7d8a60: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7d8a62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8a62: mov edi, eax */
  edi = eax;
/* 7d8a64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d8a65: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x7d8a6au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 7d8a6a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a6d: mov esi, dword ptr [ecx + 0x108] */
  esi = R32((uint32_t)(ecx + 0x108u));
/* 7d8a73: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8a76: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8a78: add esi, 0x1178 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1178u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8a7e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8a80: mov ecx, esi */
  ecx = esi;
/* 7d8a82: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8a88u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8a88: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8a8a: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 7d8a8d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7d8a8e: jmp 0x7d8a41 */
  goto L_7d8a41;
L_7d8a90: /* 7d8a90: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a93: mov esi, dword ptr [eax + 0x108] */
  esi = R32((uint32_t)(eax + 0x108u));
/* 7d8a99: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 7d8a9f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d8aa3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d8aa9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d8aa9: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7d8aac: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7d8ab0: call 0x6c312a */
  esp -= 4; W32(esp, 0x7d8ab5u); SPILL(); f_6c312a(); if (g_unwind) return; RELOAD();
/* 7d8ab5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8abb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7d8abf: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7d8ac4u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 7d8ac4: mov eax, esi */
  eax = esi;
/* 7d8ac6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d8ac9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d8ad0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d8ad1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d8ad2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d8ad3: mov esp, ebp */
  esp = ebp;
/* 7d8ad5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d8ad6: ret 0x10 */
  esp += 20; SPILL(); return;
}
