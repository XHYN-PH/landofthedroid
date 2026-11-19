#include "recomp.h"
#include "rec_mod.h"

void f_8111b6(void) {
  LOAD_REGS();
L_8111b6: /* 8111b6: mov eax, dword ptr [ebp - 0x88] */
  eax = R32((uint32_t)(ebp + 0xffffff78u));
/* 8111bc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8111c1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8111c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8111c5: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8111c8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8111cdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8111cd(); return;
}

void f_8111cd(void) {
  LOAD_REGS();
L_8111cd: /* 8111cd: push 0xa13898 */
  { uint32_t v = 0xa13898u; esp -= 4; W32(esp, v); }
/* 8111d2: push 0xae196c */
  { uint32_t v = 0xae196cu; esp -= 4; W32(esp, v); }
/* 8111d7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8111ddu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8111dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8111e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8111e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8111e4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8111e9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8111e9: guest_badaddr(0x8111e9); return;
}

void f_811330(void) {
  LOAD_REGS();
L_811330: /* 811330: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 811331: mov ebp, esp */
  ebp = esp;
/* 811333: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 811335: push 0x9d29b0 */
  { uint32_t v = 0x9d29b0u; esp -= 4; W32(esp, v); }
/* 81133a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 811340: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 811341: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 811348: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81134b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81134c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81134d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81134e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 811351: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 811353: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 811354: mov esi, ecx */
  esi = ecx;
/* 811356: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 81135c: mov ecx, esp */
  ecx = esp;
/* 81135e: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 811361: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 811363: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 81136a: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x811370u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 811370: mov ecx, edi */
  ecx = edi;
/* 811372: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x811378u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 811378: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 811379: push 0xb5f878 */
  { uint32_t v = 0xb5f878u; esp -= 4; W32(esp, v); }
/* 81137e: call 0x6c3233 */
  esp -= 4; W32(esp, 0x811383u); SPILL(); f_6c3233(); if (g_unwind) return; RELOAD();
/* 811383: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 811389: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81138c: test ch, 0x20 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81138f: mov ebx, eax */
  ebx = eax;
/* 811391: jne 0x81139e */
  if (!zf) goto L_81139e;
L_811393: /* 811393: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 811396: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 811398: je 0x81139e */
  if (zf) goto L_81139e;
L_81139a: /* 81139a: xor eax, eax */
  eax = 0;
/* 81139c: jmp 0x8113a3 */
  goto L_8113a3;
L_81139e: /* 81139e: mov eax, 1 */
  eax = 0x1u;
L_8113a3: /* 8113a3: shl eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 13;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8113a6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 8113a8: and eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8113ad: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 8113af: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 8113b5: mov eax, dword ptr [esi + 0x3a8] */
  eax = R32((uint32_t)(esi + 0x3a8u));
/* 8113bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8113bd: je 0x8114e0 */
  if (zf) goto L_8114e0;
L_8113c3: /* 8113c3: xor ecx, ecx */
  ecx = 0;
L_8113c5: /* 8113c5: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 8113cb: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8113ce: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8113d1: jge 0x8114e0 */
  if ((sf == of)) goto L_8114e0;
L_8113d7: /* 8113d7: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 8113da: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 8113dd: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8113df: je 0x8114d7 */
  if (zf) goto L_8114d7;
L_8113e5: /* 8113e5: push 0xb6bd98 */
  { uint32_t v = 0xb6bd98u; esp -= 4; W32(esp, v); }
/* 8113ea: mov ecx, edi */
  ecx = edi;
/* 8113ec: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8113f2u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8113f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8113f4: je 0x8114d7 */
  if (zf) goto L_8114d7;
L_8113fa: /* 8113fa: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8113fc: je 0x8114d7 */
  if (zf) goto L_8114d7;
L_811402: /* 811402: mov ecx, dword ptr [edi + 0x3a8] */
  ecx = R32((uint32_t)(edi + 0x3a8u));
/* 811408: cmp ecx, dword ptr [esi + 0x3a8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x3a8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81140e: jne 0x8114d7 */
  if (!zf) goto L_8114d7;
L_811414: /* 811414: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 81141a: mov eax, 0x2000 */
  eax = 0x2000u;
/* 81141f: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 811421: jne 0x81142f */
  if (!zf) goto L_81142f;
L_811423: /* 811423: test dword ptr [edi + 0x390], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x390u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 811429: je 0x8114d7 */
  if (zf) goto L_8114d7;
L_81142f: /* 81142f: mov ecx, ebx */
  ecx = ebx;
/* 811431: call 0x6c2554 */
  esp -= 4; W32(esp, 0x811436u); SPILL(); f_6c2554(); if (g_unwind) return; RELOAD();
/* 811436: mov dword ptr [ebx + 0x34], 0x48 */
  W32((uint32_t)(ebx + 0x34u), 0x48u);
/* 81143d: mov dword ptr [ebx + 0x38], 0x64 */
  W32((uint32_t)(ebx + 0x38u), 0x64u);
/* 811444: mov dword ptr [ebx + 0x3c], 0x40 */
  W32((uint32_t)(ebx + 0x3cu), 0x40u);
/* 81144b: mov dword ptr [ebx + 0x2c], esi */
  W32((uint32_t)(ebx + 0x2cu), esi);
/* 81144e: mov dword ptr [ebx + 0x30], edi */
  W32((uint32_t)(ebx + 0x30u), edi);
/* 811451: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 811457: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 81145d: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 811460: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 811466: fsub dword ptr [edi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x174u)));
/* 81146c: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 811472: fsub dword ptr [edi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x170u)));
/* 811478: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 81147b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 81147e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 811481: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x811487u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 811487: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 81148a: call 0x99c958 */
  esp -= 4; W32(esp, 0x81148fu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 81148f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 811491: lea edi, [esi + 0x33c] */
  edi = (uint32_t)(esi + 0x33cu);
/* 811497: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 811499: mov ecx, edi */
  ecx = edi;
/* 81149b: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
/* 81149e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8114a4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8114a4: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8114a6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8114a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8114a9: mov ecx, esp */
  ecx = esp;
/* 8114ab: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8114ae: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
/* 8114b1: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 8114b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8114b9: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8114bfu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8114bf: mov ecx, edi */
  ecx = edi;
/* 8114c1: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8114c7u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8114c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8114c8: push 0xb5f878 */
  { uint32_t v = 0xb5f878u; esp -= 4; W32(esp, v); }
/* 8114cd: call 0x6c3233 */
  esp -= 4; W32(esp, 0x8114d2u); SPILL(); f_6c3233(); if (g_unwind) return; RELOAD();
/* 8114d2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8114d5: mov ebx, eax */
  ebx = eax;
L_8114d7: /* 8114d7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8114da: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8114db: jmp 0x8113c5 */
  goto L_8113c5;
L_8114e0: /* 8114e0: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8114e3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8114e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8114e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8114e8: mov ecx, esi */
  ecx = esi;
/* 8114ea: call 0x6c2e23 */
  esp -= 4; W32(esp, 0x8114efu); SPILL(); f_6c2e23(); if (g_unwind) return; RELOAD();
/* 8114ef: xor edx, edx */
  edx = 0;
/* 8114f1: mov bl, 8 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
L_8114f3: /* 8114f3: cmp edx, dword ptr [esi + 0x340] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8114f9: jge 0x811563 */
  if ((sf == of)) goto L_811563;
L_8114fb: /* 8114fb: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 811501: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 811504: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 811506: je 0x811530 */
  if (zf) goto L_811530;
L_811508: /* 811508: test byte ptr [ecx + 0x3c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x3cu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81150b: je 0x811530 */
  if (zf) goto L_811530;
L_81150d: /* 81150d: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 811510: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 811516: mov edi, dword ptr [ecx + 0x30] */
  edi = R32((uint32_t)(ecx + 0x30u));
/* 811519: fsub dword ptr [eax + 0x2d8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x2d8u)));
/* 81151f: fcomp dword ptr [edi + 0x178] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x178u)));
  FPOP();
/* 811525: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 811527: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81152a: jne 0x811530 */
  if (!zf) goto L_811530;
L_81152c: /* 81152c: mov byte ptr [ecx + 0x44], 1 */
  W8((uint32_t)(ecx + 0x44u), 0x1u);
L_811530: /* 811530: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 811531: jmp 0x8114f3 */
  goto L_8114f3;
L_811563: /* 811563: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 811566: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 811567: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 811568: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81156f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 811570: mov esp, ebp */
  esp = ebp;
/* 811572: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 811573: ret 8 */
  esp += 12; SPILL(); return;
}

void f_811533(void) {
  LOAD_REGS();
L_811533: /* 811533: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 811536: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81153b: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 81153e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81153f: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 811542: call 0x99caf8 */
  esp -= 4; W32(esp, 0x811547u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_811547(); return;
}

void f_811547(void) {
  LOAD_REGS();
L_811547: /* 811547: push 0xa138e4 */
  { uint32_t v = 0xa138e4u; esp -= 4; W32(esp, v); }
/* 81154c: push 0xae1974 */
  { uint32_t v = 0xae1974u; esp -= 4; W32(esp, v); }
/* 811551: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x811557u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 811557: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81155a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81155c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81155e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x811563u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 811563: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 811566: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 811567: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 811568: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81156f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 811570: mov esp, ebp */
  esp = ebp;
/* 811572: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 811573: ret 8 */
  esp += 12; SPILL(); return;
}

void f_811620(void) {
  LOAD_REGS();
L_811620: /* 811620: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 811621: mov ebp, esp */
  ebp = esp;
/* 811623: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 811625: push 0x9d29c0 */
  { uint32_t v = 0x9d29c0u; esp -= 4; W32(esp, v); }
/* 81162a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 811630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 811631: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 811638: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81163b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81163c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81163d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81163e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 811641: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 811643: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 811644: mov esi, ecx */
  esi = ecx;
/* 811646: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 81164c: mov ecx, esp */
  ecx = esp;
/* 81164e: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 811651: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 811653: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 81165a: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x811660u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 811660: mov ecx, edi */
  ecx = edi;
/* 811662: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x811668u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 811668: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 811669: push 0xb5f878 */
  { uint32_t v = 0xb5f878u; esp -= 4; W32(esp, v); }
/* 81166e: call 0x6c3233 */
  esp -= 4; W32(esp, 0x811673u); SPILL(); f_6c3233(); if (g_unwind) return; RELOAD();
/* 811673: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 811679: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81167c: test ch, 0x20 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81167f: mov ebx, eax */
  ebx = eax;
/* 811681: jne 0x81168e */
  if (!zf) goto L_81168e;
L_811683: /* 811683: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 811686: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 811688: je 0x81168e */
  if (zf) goto L_81168e;
L_81168a: /* 81168a: xor eax, eax */
  eax = 0;
/* 81168c: jmp 0x811693 */
  goto L_811693;
L_81168e: /* 81168e: mov eax, 1 */
  eax = 0x1u;
L_811693: /* 811693: shl eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 13;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 811696: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 811698: and eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 81169d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 81169f: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 8116a5: xor ecx, ecx */
  ecx = 0;
L_8116a7: /* 8116a7: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 8116ad: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8116b0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8116b3: jge 0x8117ac */
  if ((sf == of)) goto L_8117ac;
L_8116b9: /* 8116b9: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 8116bc: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 8116bf: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8116c1: je 0x8117d1 */
  if (zf) goto L_8117d1;
L_8116c7: /* 8116c7: push 0xb62728 */
  { uint32_t v = 0xb62728u; esp -= 4; W32(esp, v); }
/* 8116cc: mov ecx, edi */
  ecx = edi;
/* 8116ce: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8116d4u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8116d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8116d6: je 0x8117ce */
  if (zf) goto L_8117ce;
L_8116dc: /* 8116dc: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8116de: je 0x8117ce */
  if (zf) goto L_8117ce;
L_8116e4: /* 8116e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8116e6: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8116e9: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8116efu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8116ef: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 8116f2: lea ecx, [edi + 0x100] */
  ecx = (uint32_t)(edi + 0x100u);
/* 8116f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8116f9: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x8116ffu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 8116ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 811701: je 0x8117ce */
  if (zf) goto L_8117ce;
L_811707: /* 811707: lea ecx, [edi + 0x100] */
  ecx = (uint32_t)(edi + 0x100u);
/* 81170d: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x811713u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 811713: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 811714: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 81171a: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x811720u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 811720: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 811722: je 0x8117ce */
  if (zf) goto L_8117ce;
L_811728: /* 811728: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 81172e: mov eax, 0x2000 */
  eax = 0x2000u;
/* 811733: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 811735: jne 0x811743 */
  if (!zf) goto L_811743;
L_811737: /* 811737: test dword ptr [edi + 0x390], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x390u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81173d: je 0x8117ce */
  if (zf) goto L_8117ce;
L_811743: /* 811743: mov ecx, ebx */
  ecx = ebx;
/* 811745: call 0x6c2554 */
  esp -= 4; W32(esp, 0x81174au); SPILL(); f_6c2554(); if (g_unwind) return; RELOAD();
/* 81174a: mov dword ptr [ebx + 0x30], edi */
  W32((uint32_t)(ebx + 0x30u), edi);
/* 81174d: mov eax, 0x78 */
  eax = 0x78u;
/* 811752: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 811754: lea edi, [esi + 0x33c] */
  edi = (uint32_t)(esi + 0x33cu);
/* 81175a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81175c: mov ecx, edi */
  ecx = edi;
/* 81175e: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 811761: mov dword ptr [ebx + 0x38], eax */
  W32((uint32_t)(ebx + 0x38u), eax);
/* 811764: mov dword ptr [ebx + 0x3c], 0x20 */
  W32((uint32_t)(ebx + 0x3cu), 0x20u);
/* 81176b: mov dword ptr [ebx + 0x2c], esi */
  W32((uint32_t)(ebx + 0x2cu), esi);
/* 81176e: mov dword ptr [ebx + 0x28], 0x64 */
  W32((uint32_t)(ebx + 0x28u), 0x64u);
/* 811775: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x81177bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 81177b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 81177d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 81177f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 811780: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 811783: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 811789: mov ecx, esp */
  ecx = esp;
/* 81178b: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 81178e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 811790: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x811796u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 811796: mov ecx, edi */
  ecx = edi;
/* 811798: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x81179eu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 81179e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81179f: push 0xb5f878 */
  { uint32_t v = 0xb5f878u; esp -= 4; W32(esp, v); }
/* 8117a4: call 0x6c3233 */
  esp -= 4; W32(esp, 0x8117a9u); SPILL(); f_6c3233(); if (g_unwind) return; RELOAD();
/* 8117a9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8117ac: /* 8117ac: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8117af: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8117b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8117b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8117b4: mov ecx, esi */
  ecx = esi;
/* 8117b6: call 0x6c2e23 */
  esp -= 4; W32(esp, 0x8117bbu); SPILL(); f_6c2e23(); if (g_unwind) return; RELOAD();
/* 8117bb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8117be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8117bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8117c0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8117c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8117c8: mov esp, ebp */
  esp = ebp;
/* 8117ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8117cb: ret 8 */
  esp += 12; SPILL(); return;
L_8117ce: /* 8117ce: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8117d1: /* 8117d1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8117d2: jmp 0x8116a7 */
  goto L_8116a7;
}

void f_8117d7(void) {
  LOAD_REGS();
L_8117d7: /* 8117d7: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8117da: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8117df: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 8117e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8117e3: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8117e6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8117ebu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8117eb(); return;
}

void f_8117eb(void) {
  LOAD_REGS();
L_8117eb: /* 8117eb: push 0xa1391c */
  { uint32_t v = 0xa1391cu; esp -= 4; W32(esp, v); }
/* 8117f0: push 0xae197c */
  { uint32_t v = 0xae197cu; esp -= 4; W32(esp, v); }
/* 8117f5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8117fbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8117fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8117fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 811800: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 811802: call 0x99caf8 */
  esp -= 4; W32(esp, 0x811807u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_811807: guest_badaddr(0x811807); return;
}

void f_811890(void) {
  LOAD_REGS();
L_811890: /* 811890: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 811891: mov ebp, esp */
  ebp = esp;
/* 811893: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 811895: push 0x9d29d0 */
  { uint32_t v = 0x9d29d0u; esp -= 4; W32(esp, v); }
/* 81189a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8118a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8118a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8118a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8118ab: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8118ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8118af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8118b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8118b1: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8118b4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8118b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8118b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8118b9: mov esi, ecx */
  esi = ecx;
/* 8118bb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8118c2: call 0x6c2e23 */
  esp -= 4; W32(esp, 0x8118c7u); SPILL(); f_6c2e23(); if (g_unwind) return; RELOAD();
/* 8118c7: push 0x429c0000 */
  { uint32_t v = 0x429c0000u; esp -= 4; W32(esp, v); }
/* 8118cc: push 0x42100000 */
  { uint32_t v = 0x42100000u; esp -= 4; W32(esp, v); }
/* 8118d1: mov ecx, edi */
  ecx = edi;
/* 8118d3: call 0x6c389b */
  esp -= 4; W32(esp, 0x8118d8u); SPILL(); f_6c389b(); if (g_unwind) return; RELOAD();
/* 8118d8: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8118de: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8118e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8118e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8118e4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8118e6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8118e9: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 8118ef: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8118f1: mov edi, esp */
  edi = esp;
/* 8118f3: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 8118f5: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8118f8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8118fb: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 8118fe: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 811901: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 811904: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 811905: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x81190bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81190b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81190d: jne 0x811923 */
  if (!zf) goto L_811923;
L_81190f: /* 81190f: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 811915: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 811917: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 811919: push 0xae1984 */
  { uint32_t v = 0xae1984u; esp -= 4; W32(esp, v); }
/* 81191e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81191f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 811920: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x811923u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_811923: /* 811923: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 811926: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 811927: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 811928: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81192f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 811930: mov esp, ebp */
  esp = ebp;
/* 811932: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 811933: ret 8 */
  esp += 12; SPILL(); return;
}

void f_811936(void) {
  LOAD_REGS();
L_811936: /* 811936: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 811939: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81193e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 811941: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 811942: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 811945: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81194au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81194a(); return;
}

void f_81194a(void) {
  LOAD_REGS();
L_81194a: /* 81194a: push 0xa1395c */
  { uint32_t v = 0xa1395cu; esp -= 4; W32(esp, v); }
/* 81194f: push 0xae19bc */
  { uint32_t v = 0xae19bcu; esp -= 4; W32(esp, v); }
/* 811954: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81195au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81195a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81195d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81195f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 811961: call 0x99caf8 */
  esp -= 4; W32(esp, 0x811966u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_811966: guest_badaddr(0x811966); return;
}

void f_8119b0(void) {
  LOAD_REGS();
L_8119b0: /* 8119b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8119b1: mov ebp, esp */
  ebp = esp;
/* 8119b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8119b5: push 0x9d29e0 */
  { uint32_t v = 0x9d29e0u; esp -= 4; W32(esp, v); }
/* 8119ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8119c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8119c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8119c8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8119cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8119cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8119cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8119ce: xor ebx, ebx */
  ebx = 0;
/* 8119d0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8119d3: mov esi, ecx */
  esi = ecx;
/* 8119d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8119d6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8119d9: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8119dc: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8119e2u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8119e2: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8119e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8119e6: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 8119ec: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x8119f2u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 8119f2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8119f4: je 0x811b94 */
  if (zf) goto L_811b94;
L_8119fa: /* 8119fa: mov dword ptr [esi + 0x3ac], ebx */
  W32((uint32_t)(esi + 0x3acu), ebx);
/* 811a00: xor ecx, ecx */
  ecx = 0;
L_811a02: /* 811a02: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 811a08: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 811a0b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 811a0e: jge 0x811b77 */
  if ((sf == of)) goto L_811b77;
L_811a14: /* 811a14: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 811a17: mov edi, dword ptr [edx + ecx*4] */
  edi = R32((uint32_t)(edx + ecx*4));
/* 811a1a: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 811a1c: je 0x811b6e */
  if (zf) goto L_811b6e;
L_811a22: /* 811a22: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 811a27: mov ecx, edi */
  ecx = edi;
/* 811a29: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x811a2fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 811a2f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 811a31: je 0x811b6e */
  if (zf) goto L_811b6e;
L_811a37: /* 811a37: lea eax, [esi + 0x3a8] */
  eax = (uint32_t)(esi + 0x3a8u);
/* 811a3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 811a3e: lea ecx, [edi + 0x100] */
  ecx = (uint32_t)(edi + 0x100u);
/* 811a44: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x811a4au); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 811a4a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 811a4c: jne 0x811aa3 */
  if (!zf) goto L_811aa3;
L_811a4e: /* 811a4e: cmp dword ptr [esi + 0x3ac], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3acu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 811a54: je 0x811b6e */
  if (zf) goto L_811b6e;
L_811a5a: /* 811a5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 811a5b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 811a5e: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x811a64u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 811a64: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 811a67: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 811a68: mov ecx, dword ptr [esi + 0x3ac] */
  ecx = R32((uint32_t)(esi + 0x3acu));
/* 811a6e: add ecx, 0x374 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x374u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 811a74: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x811a7au); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 811a7a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 811a7c: je 0x811b6e */
  if (zf) goto L_811b6e;
L_811a82: /* 811a82: mov edx, dword ptr [esi + 0x3ac] */
  edx = R32((uint32_t)(esi + 0x3acu));
/* 811a88: add edx, 0x374 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x374u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 811a8e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 811a8f: lea ecx, [edi + 0x374] */
  ecx = (uint32_t)(edi + 0x374u);
/* 811a95: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x811a9bu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 811a9b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 811a9d: je 0x811b6e */
  if (zf) goto L_811b6e;
L_811aa3: /* 811aa3: cmp dword ptr [esi + 0x3ac], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3acu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 811aa9: je 0x811b19 */
  if (zf) goto L_811b19;
L_811aab: /* 811aab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 811aac: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 811aaf: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x811ab5u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 811ab5: mov ecx, dword ptr [esi + 0x3ac] */
  ecx = R32((uint32_t)(esi + 0x3acu));
/* 811abb: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 811abe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 811abf: add ecx, 0x374 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x374u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 811ac5: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x811acbu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 811acb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 811acd: jne 0x811aec */
  if (!zf) goto L_811aec;
L_811acf: /* 811acf: mov ecx, dword ptr [esi + 0x3ac] */
  ecx = R32((uint32_t)(esi + 0x3acu));
/* 811ad5: add ecx, 0x374 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x374u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 811adb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 811adc: lea ecx, [edi + 0x374] */
  ecx = (uint32_t)(edi + 0x374u);
/* 811ae2: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x811ae8u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 811ae8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 811aea: je 0x811b19 */
  if (zf) goto L_811b19;
L_811aec: /* 811aec: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 811af2: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 811af4: mov edx, dword ptr [esi + 0x3ac] */
  edx = R32((uint32_t)(esi + 0x3acu));
/* 811afa: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 811afc: push 0xae19c8 */
  { uint32_t v = 0xae19c8u; esp -= 4; W32(esp, v); }
/* 811b01: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 811b02: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 811b03: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x811b06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 811b06: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 811b0b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 811b0d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 811b0f: push 0xae1a10 */
  { uint32_t v = 0xae1a10u; esp -= 4; W32(esp, v); }
/* 811b14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 811b15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 811b16: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x811b19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_811b19: /* 811b19: mov dword ptr [edi + 0x650], esi */
  W32((uint32_t)(edi + 0x650u), esi);
/* 811b1f: mov eax, dword ptr [esi + 0x3ac] */
  eax = R32((uint32_t)(esi + 0x3acu));
/* 811b25: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 811b27: je 0x811b56 */
  if (zf) goto L_811b56;
L_811b29: /* 811b29: mov dword ptr [edi + 0x36c], eax */
  W32((uint32_t)(edi + 0x36cu), eax);
/* 811b2f: mov eax, dword ptr [esi + 0x3ac] */
  eax = R32((uint32_t)(esi + 0x3acu));
/* 811b35: mov ecx, dword ptr [eax + 0x370] */
  ecx = R32((uint32_t)(eax + 0x370u));
/* 811b3b: mov dword ptr [edi + 0x370], ecx */
  W32((uint32_t)(edi + 0x370u), ecx);
/* 811b41: mov edx, dword ptr [esi + 0x3ac] */
  edx = R32((uint32_t)(esi + 0x3acu));
/* 811b47: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 811b4a: mov dword ptr [edx + 0x370], edi */
  W32((uint32_t)(edx + 0x370u), edi);
/* 811b50: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 811b51: jmp 0x811a02 */
  goto L_811a02;
L_811b56: /* 811b56: mov dword ptr [esi + 0x3ac], edi */
  W32((uint32_t)(esi + 0x3acu), edi);
/* 811b5c: mov dword ptr [edi + 0x36c], edi */
  W32((uint32_t)(edi + 0x36cu), edi);
/* 811b62: mov eax, dword ptr [esi + 0x3ac] */
  eax = R32((uint32_t)(esi + 0x3acu));
/* 811b68: mov dword ptr [eax + 0x370], ebx */
  W32((uint32_t)(eax + 0x370u), ebx);
L_811b6e: /* 811b6e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 811b71: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 811b72: jmp 0x811a02 */
  goto L_811a02;
L_811b77: /* 811b77: cmp dword ptr [esi + 0x3ac], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3acu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 811b7d: jne 0x811b94 */
  if (!zf) goto L_811b94;
L_811b7f: /* 811b7f: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 811b85: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 811b87: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 811b89: push 0xae1a54 */
  { uint32_t v = 0xae1a54u; esp -= 4; W32(esp, v); }
/* 811b8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 811b8f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 811b91: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x811b94u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_811b94: /* 811b94: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 811b97: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 811b98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 811b99: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 811ba0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 811ba1: mov esp, ebp */
  esp = ebp;
/* 811ba3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 811ba4: ret  */
  esp += 4; SPILL(); return;
}

void f_811ba5(void) {
  LOAD_REGS();
L_811ba5: /* 811ba5: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 811ba8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 811bad: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 811bb0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 811bb1: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 811bb4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x811bb9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_811bb9(); return;
}

void f_811bb9(void) {
  LOAD_REGS();
L_811bb9: /* 811bb9: push 0xa139a0 */
  { uint32_t v = 0xa139a0u; esp -= 4; W32(esp, v); }
/* 811bbe: push 0xae1a90 */
  { uint32_t v = 0xae1a90u; esp -= 4; W32(esp, v); }
/* 811bc3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x811bc9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 811bc9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 811bcc: xor ebx, ebx */
  ebx = 0;
/* 811bce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 811bcf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 811bd0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x811bd5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_811bd5: guest_badaddr(0x811bd5); return;
}

void f_811c70(void) {
  LOAD_REGS();
L_811c70: /* 811c70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 811c71: mov ebp, esp */
  ebp = esp;
/* 811c73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 811c75: push 0x9d29f0 */
  { uint32_t v = 0x9d29f0u; esp -= 4; W32(esp, v); }
/* 811c7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 811c80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 811c81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 811c88: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 811c8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 811c8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 811c8d: xor esi, esi */
  esi = 0;
/* 811c8f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 811c90: mov ebx, ecx */
  ebx = ecx;
/* 811c92: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 811c95: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 811c98: mov dword ptr [ebx + 0x3a8], esi */
  W32((uint32_t)(ebx + 0x3a8u), esi);
L_811c9e: /* 811c9e: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 811ca4: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 811ca7: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 811caa: jge 0x811d38 */
  if ((sf == of)) goto L_811d38;
L_811cb0: /* 811cb0: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 811cb3: mov edi, dword ptr [eax + esi*4] */
  edi = R32((uint32_t)(eax + esi*4));
/* 811cb6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 811cb8: je 0x811d6b */
  if (zf) goto L_811d6b;
L_811cbe: /* 811cbe: push 0xb6ec48 */
  { uint32_t v = 0xb6ec48u; esp -= 4; W32(esp, v); }
/* 811cc3: mov ecx, edi */
  ecx = edi;
/* 811cc5: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x811ccbu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 811ccb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 811ccd: je 0x811d6b */
  if (zf) goto L_811d6b;
L_811cd3: /* 811cd3: lea esi, [ebx + 0x170] */
  esi = (uint32_t)(ebx + 0x170u);
/* 811cd9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 811cdc: mov ecx, esi */
  ecx = esi;
/* 811cde: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 811ce0: mov edx, esp */
  edx = esp;
/* 811ce2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 811ce4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 811ce7: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 811cea: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 811ced: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 811cf0: mov ecx, edi */
  ecx = edi;
/* 811cf2: call 0x6c81ed */
  esp -= 4; W32(esp, 0x811cf7u); SPILL(); f_6c81ed(); if (g_unwind) return; RELOAD();
/* 811cf7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 811cf9: jne 0x811d32 */
  if (!zf) goto L_811d32;
L_811cfb: /* 811cfb: fld dword ptr [ebx + 0x2d8] */
  { double v = F32((uint32_t)(ebx + 0x2d8u)); FPUSH(v); }
/* 811d01: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 811d03: fsubr dword ptr [esi + 8] */
  ST0 = (F32((uint32_t)(esi + 0x8u))) - ST0;
/* 811d06: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 811d09: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 811d0c: mov ecx, edx */
  ecx = edx;
/* 811d0e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 811d11: mov eax, esp */
  eax = esp;
/* 811d13: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 811d15: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 811d18: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 811d1b: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 811d1e: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 811d21: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 811d24: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 811d27: mov ecx, edi */
  ecx = edi;
/* 811d29: call 0x6c81ed */
  esp -= 4; W32(esp, 0x811d2eu); SPILL(); f_6c81ed(); if (g_unwind) return; RELOAD();
/* 811d2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 811d30: je 0x811d68 */
  if (zf) goto L_811d68;
L_811d32: /* 811d32: mov dword ptr [ebx + 0x3a8], edi */
  W32((uint32_t)(ebx + 0x3a8u), edi);
L_811d38: /* 811d38: mov eax, dword ptr [ebx + 0x3a8] */
  eax = R32((uint32_t)(ebx + 0x3a8u));
/* 811d3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 811d40: jne 0x811da1 */
  if (!zf) goto L_811da1;
L_811d42: /* 811d42: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 811d48: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 811d4a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 811d4c: push 0xae1a98 */
  { uint32_t v = 0xae1a98u; esp -= 4; W32(esp, v); }
/* 811d51: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 811d52: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 811d54: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x811d57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 811d57: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 811d5a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 811d61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 811d62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 811d63: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 811d64: mov esp, ebp */
  esp = ebp;
/* 811d66: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 811d67: ret  */
  esp += 4; SPILL(); return;
L_811d68: /* 811d68: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_811d6b: /* 811d6b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 811d6c: jmp 0x811c9e */
  goto L_811c9e;
L_811da1: /* 811da1: mov ecx, dword ptr [eax + 0x464] */
  ecx = R32((uint32_t)(eax + 0x464u));
/* 811da7: mov dword ptr [ebx + 0x3ac], ecx */
  W32((uint32_t)(ebx + 0x3acu), ecx);
/* 811dad: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 811db0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 811db1: mov dword ptr [eax + 0x464], ebx */
  W32((uint32_t)(eax + 0x464u), ebx);
/* 811db7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 811db8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 811dbf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 811dc0: mov esp, ebp */
  esp = ebp;
/* 811dc2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 811dc3: ret  */
  esp += 4; SPILL(); return;
}

void f_811d71(void) {
  LOAD_REGS();
L_811d71: /* 811d71: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 811d74: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 811d79: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 811d7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 811d7d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 811d80: call 0x99caf8 */
  esp -= 4; W32(esp, 0x811d85u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_811d85(); return;
}

void f_811d85(void) {
  LOAD_REGS();
L_811d85: /* 811d85: push 0xa139e4 */
  { uint32_t v = 0xa139e4u; esp -= 4; W32(esp, v); }
/* 811d8a: push 0xae1ad8 */
  { uint32_t v = 0xae1ad8u; esp -= 4; W32(esp, v); }
/* 811d8f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x811d95u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 811d95: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 811d98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 811d9a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 811d9c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x811da1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 811da1: mov ecx, dword ptr [eax + 0x464] */
  ecx = R32((uint32_t)(eax + 0x464u));
/* 811da7: mov dword ptr [ebx + 0x3ac], ecx */
  W32((uint32_t)(ebx + 0x3acu), ecx);
/* 811dad: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 811db0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 811db1: mov dword ptr [eax + 0x464], ebx */
  W32((uint32_t)(eax + 0x464u), ebx);
/* 811db7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 811db8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 811dbf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 811dc0: mov esp, ebp */
  esp = ebp;
/* 811dc2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 811dc3: ret  */
  esp += 4; SPILL(); return;
}

void f_811e30(void) {
  LOAD_REGS();
L_811e30: /* 811e30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 811e31: mov ebp, esp */
  ebp = esp;
/* 811e33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 811e35: push 0x9d2a00 */
  { uint32_t v = 0x9d2a00u; esp -= 4; W32(esp, v); }
/* 811e3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 811e40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 811e41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 811e48: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 811e4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 811e4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 811e4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 811e4e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 811e51: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 811e53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 811e54: mov edi, ecx */
  edi = ecx;
/* 811e56: mov esi, dword ptr [edi + 0xb4] */
  esi = R32((uint32_t)(edi + 0xb4u));
/* 811e5c: mov ecx, esp */
  ecx = esp;
/* 811e5e: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 811e61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 811e63: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 811e6a: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x811e70u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 811e70: mov ecx, esi */
  ecx = esi;
/* 811e72: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x811e78u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 811e78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 811e79: push 0xb5f878 */
  { uint32_t v = 0xb5f878u; esp -= 4; W32(esp, v); }
/* 811e7e: call 0x6c3233 */
  esp -= 4; W32(esp, 0x811e83u); SPILL(); f_6c3233(); if (g_unwind) return; RELOAD();
/* 811e83: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 811e86: mov ebx, eax */
  ebx = eax;
/* 811e88: xor ecx, ecx */
  ecx = 0;
L_811e8a: /* 811e8a: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 811e90: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 811e93: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 811e96: jge 0x811f78 */
  if ((sf == of)) goto L_811f78;
L_811e9c: /* 811e9c: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 811e9f: mov esi, dword ptr [eax + ecx*4] */
  esi = R32((uint32_t)(eax + ecx*4));
/* 811ea2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 811ea4: je 0x811f9d */
  if (zf) goto L_811f9d;
L_811eaa: /* 811eaa: push 0xb650a8 */
  { uint32_t v = 0xb650a8u; esp -= 4; W32(esp, v); }
/* 811eaf: mov ecx, esi */
  ecx = esi;
/* 811eb1: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x811eb7u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 811eb7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 811eb9: je 0x811f9a */
  if (zf) goto L_811f9a;
L_811ebf: /* 811ebf: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 811ec1: je 0x811f9a */
  if (zf) goto L_811f9a;
L_811ec7: /* 811ec7: mov ecx, dword ptr [esi + 0x3a8] */
  ecx = R32((uint32_t)(esi + 0x3a8u));
/* 811ecd: add ecx, 0x3b4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3b4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 811ed3: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x811ed9u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 811ed9: mov ecx, dword ptr [edi + 0x3a8] */
  ecx = R32((uint32_t)(edi + 0x3a8u));
/* 811edf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 811ee0: add ecx, 0x3a8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3a8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 811ee6: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x811eecu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 811eec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 811eee: je 0x811f9a */
  if (zf) goto L_811f9a;
L_811ef4: /* 811ef4: mov ecx, dword ptr [edi + 0x390] */
  ecx = R32((uint32_t)(edi + 0x390u));
/* 811efa: mov eax, 0x2000 */
  eax = 0x2000u;
/* 811eff: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 811f01: jne 0x811f0f */
  if (!zf) goto L_811f0f;
L_811f03: /* 811f03: test dword ptr [esi + 0x390], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x390u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 811f09: je 0x811f9a */
  if (zf) goto L_811f9a;
L_811f0f: /* 811f0f: mov ecx, ebx */
  ecx = ebx;
/* 811f11: call 0x6c2554 */
  esp -= 4; W32(esp, 0x811f16u); SPILL(); f_6c2554(); if (g_unwind) return; RELOAD();
/* 811f16: mov dword ptr [ebx + 0x30], esi */
  W32((uint32_t)(ebx + 0x30u), esi);
/* 811f19: mov eax, 0x78 */
  eax = 0x78u;
/* 811f1e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 811f20: lea esi, [edi + 0x33c] */
  esi = (uint32_t)(edi + 0x33cu);
/* 811f26: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 811f28: mov ecx, esi */
  ecx = esi;
/* 811f2a: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 811f2d: mov dword ptr [ebx + 0x38], eax */
  W32((uint32_t)(ebx + 0x38u), eax);
/* 811f30: mov dword ptr [ebx + 0x3c], 0x20 */
  W32((uint32_t)(ebx + 0x3cu), 0x20u);
/* 811f37: mov dword ptr [ebx + 0x2c], edi */
  W32((uint32_t)(ebx + 0x2cu), edi);
/* 811f3a: mov dword ptr [ebx + 0x28], 0x64 */
  W32((uint32_t)(ebx + 0x28u), 0x64u);
/* 811f41: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x811f47u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 811f47: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 811f49: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 811f4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 811f4c: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 811f4f: mov esi, dword ptr [edi + 0xb4] */
  esi = R32((uint32_t)(edi + 0xb4u));
/* 811f55: mov ecx, esp */
  ecx = esp;
/* 811f57: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 811f5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 811f5c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x811f62u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 811f62: mov ecx, esi */
  ecx = esi;
/* 811f64: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x811f6au); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 811f6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 811f6b: push 0xb5f878 */
  { uint32_t v = 0xb5f878u; esp -= 4; W32(esp, v); }
/* 811f70: call 0x6c3233 */
  esp -= 4; W32(esp, 0x811f75u); SPILL(); f_6c3233(); if (g_unwind) return; RELOAD();
/* 811f75: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_811f78: /* 811f78: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 811f7b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 811f7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 811f7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 811f80: mov ecx, edi */
  ecx = edi;
/* 811f82: call 0x6c2e23 */
  esp -= 4; W32(esp, 0x811f87u); SPILL(); f_6c2e23(); if (g_unwind) return; RELOAD();
/* 811f87: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 811f8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 811f8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 811f8c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 811f93: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 811f94: mov esp, ebp */
  esp = ebp;
/* 811f96: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 811f97: ret 8 */
  esp += 12; SPILL(); return;
L_811f9a: /* 811f9a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_811f9d: /* 811f9d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 811f9e: jmp 0x811e8a */
  goto L_811e8a;
}

void f_811fa3(void) {
  LOAD_REGS();
L_811fa3: /* 811fa3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 811fa6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 811fab: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 811fae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 811faf: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 811fb2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x811fb7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_811fb7(); return;
}

void f_811fb7(void) {
  LOAD_REGS();
L_811fb7: /* 811fb7: push 0xa13a2c */
  { uint32_t v = 0xa13a2cu; esp -= 4; W32(esp, v); }
/* 811fbc: push 0xae1af8 */
  { uint32_t v = 0xae1af8u; esp -= 4; W32(esp, v); }
/* 811fc1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x811fc7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 811fc7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 811fca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 811fcc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 811fce: call 0x99caf8 */
  esp -= 4; W32(esp, 0x811fd3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_811fd3: guest_badaddr(0x811fd3); return;
}

void f_812050(void) {
  LOAD_REGS();
L_812050: /* 812050: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 812051: mov ebp, esp */
  ebp = esp;
/* 812053: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 812055: push 0x9d2a10 */
  { uint32_t v = 0x9d2a10u; esp -= 4; W32(esp, v); }
/* 81205a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 812060: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 812061: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 812068: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81206b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 81206e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81206f: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 812072: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 812073: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 812074: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 812077: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 812078: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 812079: mov esi, ecx */
  esi = ecx;
/* 81207b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 812082: call 0x6c2e23 */
  esp -= 4; W32(esp, 0x812087u); SPILL(); f_6c2e23(); if (g_unwind) return; RELOAD();
/* 812087: push 0x429c0000 */
  { uint32_t v = 0x429c0000u; esp -= 4; W32(esp, v); }
/* 81208c: push 0x42100000 */
  { uint32_t v = 0x42100000u; esp -= 4; W32(esp, v); }
/* 812091: mov ecx, ebx */
  ecx = ebx;
/* 812093: mov dword ptr [ebx + 0x40c], 0x461c4000 */
  W32((uint32_t)(ebx + 0x40cu), 0x461c4000u);
/* 81209d: call 0x6c389b */
  esp -= 4; W32(esp, 0x8120a2u); SPILL(); f_6c389b(); if (g_unwind) return; RELOAD();
/* 8120a2: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* 8120a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8120aa: jle 0x8121bb */
  if ((zf || sf != of)) goto L_8121bb;
L_8120b0: /* 8120b0: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 8120b6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8120b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8120ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8120bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8120be: lea edi, [esi + 0x170] */
  edi = (uint32_t)(esi + 0x170u);
/* 8120c4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8120c7: mov eax, edi */
  eax = edi;
/* 8120c9: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8120cb: mov ecx, esp */
  ecx = esp;
/* 8120cd: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8120cf: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8120d2: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8120d5: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8120d8: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8120db: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8120de: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8120e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8120e5: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x8120ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8120eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8120ed: je 0x8121bb */
  if (zf) goto L_8121bb;
L_8120f3: /* 8120f3: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 8120f9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8120fb: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 8120fe: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 812104: mov dword ptr [esi + 0x3b4], eax */
  W32((uint32_t)(esi + 0x3b4u), eax);
/* 81210a: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 812110: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 812113: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 812116: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 81211c: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 81211f: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 812125: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 812128: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 81212a: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 81212d: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 812130: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 812133: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 812136: fdiv dword ptr [ecx + 0x3cc] */
  ST0 = ST0 / (F32((uint32_t)(ecx + 0x3ccu)));
/* 81213c: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 812142: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812144: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 812147: je 0x81214b */
  if (zf) goto L_81214b;
L_812149: /* 812149: fchs  */
  ST0 = -ST0;
L_81214b: /* 81214b: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81214e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 812151: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x812157u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 812157: fstp qword ptr [ebp - 0x20] */
  WF64((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 81215a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81215d: fld dword ptr [esi + 0x3b8] */
  { double v = F32((uint32_t)(esi + 0x3b8u)); FPUSH(v); }
/* 812163: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 812166: fmul dword ptr [0xa0c214] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c214u)));
/* 81216c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 81216f: fmul qword ptr [ebp - 0x20] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffe0u)));
/* 812172: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 812175: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 812178: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 812179: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81217a: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x812180u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 812180: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 812183: fdiv dword ptr [ebp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xcu)));
/* 812186: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 812188: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 81218e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 812190: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 812193: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 812196: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 812199: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 81219c: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 8121a2: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8121a5: fmul dword ptr [ecx + 0x3cc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x3ccu)));
/* 8121ab: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8121b1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8121b3: fstp dword ptr [esi + 0x3b0] */
  WF32((uint32_t)(esi + 0x3b0u), ST0); FPOP();
/* 8121b9: jmp 0x8121fc */
  goto L_8121fc;
L_8121bb: /* 8121bb: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 8121c1: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8121c3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8121c5: push 0xae1b50 */
  { uint32_t v = 0xae1b50u; esp -= 4; W32(esp, v); }
/* 8121ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8121cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8121cd: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x8121d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8121d0: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 8121d7: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8121da: add esi, 0x3a8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3a8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8121e0: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8121e7: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8121ea: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 8121ec: mov dword ptr [ebp - 0x1c], 0x449d8000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x449d8000u);
/* 8121f3: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8121f6: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 8121f9: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
L_8121fc: /* 8121fc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8121ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 812200: mov dword ptr [ebx + 0x40c], 0x43d20000 */
  W32((uint32_t)(ebx + 0x40cu), 0x43d20000u);
/* 81220a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81220b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 812212: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 812213: mov esp, ebp */
  esp = ebp;
/* 812215: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 812216: ret 8 */
  esp += 12; SPILL(); return;
}

void f_812219(void) {
  LOAD_REGS();
L_812219: /* 812219: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81221c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 812221: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 812224: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 812225: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 812228: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81222du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81222d(); return;
}

void f_81222d(void) {
  LOAD_REGS();
L_81222d: /* 81222d: push 0xa13a78 */
  { uint32_t v = 0xa13a78u; esp -= 4; W32(esp, v); }
/* 812232: push 0xae1ba0 */
  { uint32_t v = 0xae1ba0u; esp -= 4; W32(esp, v); }
/* 812237: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81223du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81223d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 812240: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 812242: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 812244: call 0x99caf8 */
  esp -= 4; W32(esp, 0x812249u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_812249: guest_badaddr(0x812249); return;
}

void f_8122d0(void) {
  LOAD_REGS();
L_8122d0: /* 8122d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8122d1: mov ebp, esp */
  ebp = esp;
/* 8122d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8122d5: push 0x9d2a20 */
  { uint32_t v = 0x9d2a20u; esp -= 4; W32(esp, v); }
/* 8122da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8122e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8122e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8122e8: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8122eb: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 8122f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8122f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8122f2: mov esi, ecx */
  esi = ecx;
/* 8122f4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8122f6: xor ebx, ebx */
  ebx = 0;
/* 8122f8: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8122fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8122fb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8122fe: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 812301: je 0x8123c6 */
  if (zf) goto L_8123c6;
L_812307: /* 812307: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 812308: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 81230b: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x812311u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 812311: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 812314: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 812315: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 81231b: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x812321u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 812321: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 812323: je 0x8123c6 */
  if (zf) goto L_8123c6;
L_812329: /* 812329: mov dword ptr [esi + 0x3ac], ebx */
  W32((uint32_t)(esi + 0x3acu), ebx);
/* 81232f: nop  */
L_812330: /* 812330: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 812336: cmp ebx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 812339: jge 0x8123c6 */
  if ((sf == of)) goto L_8123c6;
L_81233f: /* 81233f: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 812342: cmp dword ptr [edx + ebx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 812346: je 0x81246a */
  if (zf) goto L_81246a;
L_81234c: /* 81234c: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 812352: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 812353: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 812356: add ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81235c: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x812362u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 812362: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 812364: je 0x81246a */
  if (zf) goto L_81246a;
L_81236a: /* 81236a: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 812370: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 812373: mov edi, dword ptr [eax + ebx*4] */
  edi = R32((uint32_t)(eax + ebx*4));
/* 812376: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 812378: je 0x81246a */
  if (zf) goto L_81246a;
L_81237e: /* 81237e: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 812383: mov ecx, edi */
  ecx = edi;
/* 812385: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81238bu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81238b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81238d: je 0x81246a */
  if (zf) goto L_81246a;
L_812393: /* 812393: mov eax, dword ptr [esi + 0x3ac] */
  eax = R32((uint32_t)(esi + 0x3acu));
/* 812399: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81239b: je 0x8123d7 */
  if (zf) goto L_8123d7;
L_81239d: /* 81239d: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 8123a3: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8123a5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8123a7: push 0xae1bc8 */
  { uint32_t v = 0xae1bc8u; esp -= 4; W32(esp, v); }
/* 8123ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8123ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8123af: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x8123b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8123b2: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 8123b7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8123b9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8123bb: push 0xae1c10 */
  { uint32_t v = 0xae1c10u; esp -= 4; W32(esp, v); }
/* 8123c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8123c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8123c3: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x8123c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8123c6: /* 8123c6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8123c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8123ca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8123cb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8123d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8123d3: mov esp, ebp */
  esp = ebp;
/* 8123d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8123d6: ret  */
  esp += 4; SPILL(); return;
L_8123d7: /* 8123d7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8123d9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8123dc: mov ecx, esp */
  ecx = esp;
/* 8123de: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8123e5: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8123e8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8123ea: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 8123f1: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8123f4: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8123f7: mov dword ptr [esi + 0x3ac], edi */
  W32((uint32_t)(esi + 0x3acu), edi);
/* 8123fd: mov dword ptr [ebp - 0x20], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x3f800000u);
/* 812404: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 812407: mov dword ptr [edi + 0x650], esi */
  W32((uint32_t)(edi + 0x650u), esi);
/* 81240d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 81240f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 812412: mov ecx, dword ptr [esi + 0x3ac] */
  ecx = R32((uint32_t)(esi + 0x3acu));
/* 812418: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 812419: mov ecx, esi */
  ecx = esi;
/* 81241b: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x812421u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 812421: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 812427: mov eax, dword ptr [esi + 0x3ac] */
  eax = R32((uint32_t)(esi + 0x3acu));
/* 81242d: fsub dword ptr [eax + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x170u)));
/* 812433: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 812438: lea edx, [esi + 0x3bc] */
  edx = (uint32_t)(esi + 0x3bcu);
/* 81243e: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 812441: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 812447: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 81244a: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 81244d: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 812453: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 812456: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 812459: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 81245c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 81245e: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 812461: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 812464: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 812467: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_81246a: /* 81246a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 81246b: jmp 0x812330 */
  goto L_812330;
}

void f_812470(void) {
  LOAD_REGS();
L_812470: /* 812470: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 812473: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 812478: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 81247b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81247c: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 81247f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x812484u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_812484(); return;
}

void f_812484(void) {
  LOAD_REGS();
L_812484: /* 812484: push 0xa13ab4 */
  { uint32_t v = 0xa13ab4u; esp -= 4; W32(esp, v); }
/* 812489: push 0xae1c54 */
  { uint32_t v = 0xae1c54u; esp -= 4; W32(esp, v); }
/* 81248e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x812494u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 812494: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 812497: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 812499: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81249b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8124a0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8124a0: guest_badaddr(0x8124a0); return;
}

void f_812530(void) {
  LOAD_REGS();
L_812530: /* 812530: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 812531: mov ebp, esp */
  ebp = esp;
/* 812533: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 812535: push 0x9d2a30 */
  { uint32_t v = 0x9d2a30u; esp -= 4; W32(esp, v); }
/* 81253a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 812540: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 812541: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 812548: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81254b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81254c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81254d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81254e: xor ebx, ebx */
  ebx = 0;
/* 812550: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 812553: mov esi, ecx */
  esi = ecx;
/* 812555: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 812558: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 81255b: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x812561u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 812561: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 812562: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 812567: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 812569: push 0xae1c6c */
  { uint32_t v = 0xae1c6cu; esp -= 4; W32(esp, v); }
/* 81256e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81256f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x812575u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 812575: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_812578: /* 812578: cmp ebx, dword ptr [esi + 0x340] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81257e: jge 0x8125e8 */
  if ((sf == of)) goto L_8125e8;
L_812580: /* 812580: xor edi, edi */
  edi = 0;
L_812582: /* 812582: cmp edi, dword ptr [esi + 0x340] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 812588: jge 0x8125e5 */
  if ((sf == of)) goto L_8125e5;
L_81258a: /* 81258a: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81258c: je 0x8125e2 */
  if (zf) goto L_8125e2;
L_81258e: /* 81258e: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 812594: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 812597: mov dl, byte ptr [ecx + 0x44] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x44u))) & 0xffu);
/* 81259a: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81259c: jne 0x8125e2 */
  if (!zf) goto L_8125e2;
L_81259e: /* 81259e: mov edx, dword ptr [eax + ebx*4] */
  edx = R32((uint32_t)(eax + ebx*4));
/* 8125a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8125a2: call 0x6c454d */
  esp -= 4; W32(esp, 0x8125a7u); SPILL(); f_6c454d(); if (g_unwind) return; RELOAD();
/* 8125a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8125a9: je 0x8125e2 */
  if (zf) goto L_8125e2;
L_8125ab: /* 8125ab: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 8125b1: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 8125b4: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8125b7: mov eax, dword ptr [eax + ebx*4] */
  eax = R32((uint32_t)(eax + ebx*4));
/* 8125ba: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 8125bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8125be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8125bf: call 0x6c3463 */
  esp -= 4; W32(esp, 0x8125c4u); SPILL(); f_6c3463(); if (g_unwind) return; RELOAD();
/* 8125c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8125c6: je 0x8125e2 */
  if (zf) goto L_8125e2;
L_8125c8: /* 8125c8: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 8125ce: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8125d1: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 8125d4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8125d5: mov byte ptr [edx + 0x44], 1 */
  W8((uint32_t)(edx + 0x44u), 0x1u);
/* 8125d9: mov edi, dword ptr [esi + 0x340] */
  edi = R32((uint32_t)(esi + 0x340u));
/* 8125df: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_8125e2: /* 8125e2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8125e3: jmp 0x812582 */
  goto L_812582;
L_8125e5: /* 8125e5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8125e6: jmp 0x812578 */
  goto L_812578;
L_8125e8: /* 8125e8: mov ecx, esi */
  ecx = esi;
/* 8125ea: call 0x6ca961 */
  esp -= 4; W32(esp, 0x8125efu); SPILL(); f_6ca961(); if (g_unwind) return; RELOAD();
/* 8125ef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8125f2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8125f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8125f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8125f7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8125fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8125ff: mov esp, ebp */
  esp = ebp;
/* 812601: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 812602: ret  */
  esp += 4; SPILL(); return;
}

void f_812603(void) {
  LOAD_REGS();
L_812603: /* 812603: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 812606: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81260b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 81260e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81260f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 812612: call 0x99caf8 */
  esp -= 4; W32(esp, 0x812617u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_812617(); return;
}

void f_812617(void) {
  LOAD_REGS();
L_812617: /* 812617: push 0xa13ae8 */
  { uint32_t v = 0xa13ae8u; esp -= 4; W32(esp, v); }
/* 81261c: push 0xae1c94 */
  { uint32_t v = 0xae1c94u; esp -= 4; W32(esp, v); }
/* 812621: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x812627u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 812627: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81262a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81262c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81262e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x812633u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_812633: guest_badaddr(0x812633); return;
}

void f_812690(void) {
  LOAD_REGS();
L_812690: /* 812690: mov edx, dword ptr [ecx + 0x3a0] */
  edx = R32((uint32_t)(ecx + 0x3a0u));
/* 812696: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 812697: xor eax, eax */
  eax = 0;
/* 812699: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81269b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81269c: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 8126a0: jle 0x8126b4 */
  if ((zf || sf != of)) goto L_8126b4;
L_8126a2: /* 8126a2: mov esi, dword ptr [ecx + 0x39c] */
  esi = R32((uint32_t)(ecx + 0x39cu));
L_8126a8: /* 8126a8: cmp dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8126aa: je 0x8126cb */
  if (zf) goto L_8126cb;
L_8126ac: /* 8126ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8126ad: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8126b0: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8126b2: jl 0x8126a8 */
  if ((sf != of)) goto L_8126a8;
L_8126b4: /* 8126b4: lea esi, [ecx + 0x39c] */
  esi = (uint32_t)(ecx + 0x39cu);
/* 8126ba: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8126bc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8126be: mov ecx, esi */
  ecx = esi;
/* 8126c0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8126c6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8126c6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8126c8: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
L_8126cb: /* 8126cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8126cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8126cd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8126e0(void) {
  LOAD_REGS();
L_8126e0: /* 8126e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8126e1: mov edi, dword ptr [ecx + 0x340] */
  edi = R32((uint32_t)(ecx + 0x340u));
/* 8126e7: xor eax, eax */
  eax = 0;
/* 8126e9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8126eb: jle 0x81272c */
  if ((zf || sf != of)) goto L_81272c;
L_8126ed: /* 8126ed: mov edx, dword ptr [ecx + 0x33c] */
  edx = R32((uint32_t)(ecx + 0x33cu));
/* 8126f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8126f4: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 8126f8: add ecx, 0x33c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8126fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8126ff: nop  */
L_812700: /* 812700: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 812702: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 812704: je 0x81270b */
  if (zf) goto L_81270b;
L_812706: /* 812706: cmp dword ptr [esi + 0x30], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x30u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 812709: je 0x812719 */
  if (zf) goto L_812719;
L_81270b: /* 81270b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 81270c: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 81270f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 812711: jl 0x812700 */
  if ((sf != of)) goto L_812700;
L_812713: /* 812713: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 812714: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 812715: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 812716: ret 4 */
  esp += 8; SPILL(); return;
L_812719: /* 812719: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81271b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81271c: call 0x6c8cdd */
  esp -= 4; W32(esp, 0x812721u); SPILL(); f_6c8cdd(); if (g_unwind) return; RELOAD();
/* 812721: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 812723: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 812725: mov ecx, esi */
  ecx = esi;
/* 812727: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x81272au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81272a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81272b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_81272c: /* 81272c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81272d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_812750(void) {
  LOAD_REGS();
L_812750: /* 812750: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 812751: mov ebp, esp */
  ebp = esp;
/* 812753: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 812755: push 0x9d2a40 */
  { uint32_t v = 0x9d2a40u; esp -= 4; W32(esp, v); }
/* 81275a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 812760: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 812761: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 812768: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81276b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81276c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81276d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81276e: xor ebx, ebx */
  ebx = 0;
/* 812770: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 812773: mov edi, ecx */
  edi = ecx;
/* 812775: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 812778: call 0x6c1ee7 */
  esp -= 4; W32(esp, 0x81277du); SPILL(); f_6c1ee7(); if (g_unwind) return; RELOAD();
/* 81277d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 812782: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 812784: je 0x81285a */
  if (zf) goto L_81285a;
L_81278a: /* 81278a: mov eax, dword ptr [edi + 0xb0] */
  eax = R32((uint32_t)(edi + 0xb0u));
/* 812790: and dword ptr [eax + 0x44c], 0xffffffef */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44cu))); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x44cu), r);
  }
/* 812797: xor ecx, ecx */
  ecx = 0;
/* 812799: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8127a0: /* 8127a0: cmp ecx, dword ptr [edi + 0x340] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8127a6: jge 0x8127bb */
  if ((sf == of)) goto L_8127bb;
L_8127a8: /* 8127a8: mov edx, dword ptr [edi + 0x33c] */
  edx = R32((uint32_t)(edi + 0x33cu));
/* 8127ae: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 8127b1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8127b3: je 0x8127b8 */
  if (zf) goto L_8127b8;
L_8127b5: /* 8127b5: mov dword ptr [eax + 0x2c], ebx */
  W32((uint32_t)(eax + 0x2cu), ebx);
L_8127b8: /* 8127b8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8127b9: jmp 0x8127a0 */
  goto L_8127a0;
L_8127bb: /* 8127bb: xor ecx, ecx */
  ecx = 0;
L_8127bd: /* 8127bd: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 8127c3: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8127c6: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8127c9: jge 0x81285a */
  if ((sf == of)) goto L_81285a;
L_8127cf: /* 8127cf: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 8127d2: mov esi, dword ptr [eax + ecx*4] */
  esi = R32((uint32_t)(eax + ecx*4));
/* 8127d5: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8127d7: je 0x812827 */
  if (zf) goto L_812827;
L_8127d9: /* 8127d9: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 8127de: mov ecx, esi */
  ecx = esi;
/* 8127e0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8127e6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8127e6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8127e8: je 0x812824 */
  if (zf) goto L_812824;
L_8127ea: /* 8127ea: xor ecx, ecx */
  ecx = 0;
/* 8127ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8127f0: /* 8127f0: cmp ecx, dword ptr [esi + 0x340] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8127f6: jge 0x81281d */
  if ((sf == of)) goto L_81281d;
L_8127f8: /* 8127f8: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 8127fe: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 812801: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 812803: je 0x81281a */
  if (zf) goto L_81281a;
L_812805: /* 812805: cmp dword ptr [eax + 0x30], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 812808: jne 0x81281a */
  if (!zf) goto L_81281a;
L_81280a: /* 81280a: mov byte ptr [eax + 0x44], 1 */
  W8((uint32_t)(eax + 0x44u), 0x1u);
/* 81280e: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 812814: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 812817: mov dword ptr [edx + 0x30], ebx */
  W32((uint32_t)(edx + 0x30u), ebx);
L_81281a: /* 81281a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 81281b: jmp 0x8127f0 */
  goto L_8127f0;
L_81281d: /* 81281d: mov ecx, esi */
  ecx = esi;
/* 81281f: call 0x6ca961 */
  esp -= 4; W32(esp, 0x812824u); SPILL(); f_6ca961(); if (g_unwind) return; RELOAD();
L_812824: /* 812824: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_812827: /* 812827: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 812828: jmp 0x8127bd */
  goto L_8127bd;
L_81285a: /* 81285a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81285d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81285e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81285f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 812866: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 812867: mov esp, ebp */
  esp = ebp;
/* 812869: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81286a: ret  */
  esp += 4; SPILL(); return;
}

void f_81282a(void) {
  LOAD_REGS();
L_81282a: /* 81282a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 81282d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 812832: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 812835: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 812836: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 812839: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81283eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81283e(); return;
}

void f_81283e(void) {
  LOAD_REGS();
L_81283e: /* 81283e: push 0xa13b30 */
  { uint32_t v = 0xa13b30u; esp -= 4; W32(esp, v); }
/* 812843: push 0xae1550 */
  { uint32_t v = 0xae1550u; esp -= 4; W32(esp, v); }
/* 812848: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81284eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81284e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 812851: xor ebx, ebx */
  ebx = 0;
/* 812853: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 812854: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 812855: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81285au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 81285a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81285d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81285e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81285f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 812866: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 812867: mov esp, ebp */
  esp = ebp;
/* 812869: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81286a: ret  */
  esp += 4; SPILL(); return;
}

void f_8128c0(void) {
  LOAD_REGS();
L_8128c0: /* 8128c0: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8128c2: fcomp dword ptr [ecx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xcu)));
  FPOP();
/* 8128c5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8128c7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8128ca: je 0x812912 */
  if (zf) goto L_812912;
L_8128cc: /* 8128cc: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8128ce: fcomp dword ptr [edx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(edx + 0xcu)));
  FPOP();
/* 8128d1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8128d3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8128d6: je 0x812912 */
  if (zf) goto L_812912;
L_8128d8: /* 8128d8: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 8128db: fcomp dword ptr [ecx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x10u)));
  FPOP();
/* 8128de: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8128e0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8128e3: je 0x812912 */
  if (zf) goto L_812912;
L_8128e5: /* 8128e5: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8128e8: fcomp dword ptr [edx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x10u)));
  FPOP();
/* 8128eb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8128ed: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8128f0: je 0x812912 */
  if (zf) goto L_812912;
L_8128f2: /* 8128f2: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 8128f5: fcomp dword ptr [ecx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x14u)));
  FPOP();
/* 8128f8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8128fa: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8128fd: je 0x812912 */
  if (zf) goto L_812912;
L_8128ff: /* 8128ff: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 812902: fcomp dword ptr [edx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x14u)));
  FPOP();
/* 812905: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812907: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81290a: je 0x812912 */
  if (zf) goto L_812912;
L_81290c: /* 81290c: mov eax, 1 */
  eax = 0x1u;
/* 812911: ret  */
  esp += 4; SPILL(); return;
L_812912: /* 812912: xor eax, eax */
  eax = 0;
/* 812914: ret  */
  esp += 4; SPILL(); return;
}

void f_812940(void) {
  LOAD_REGS();
L_812940: /* 812940: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 812943: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 812946: mov ecx, eax */
  ecx = eax;
/* 812948: mov edx, eax */
  edx = eax;
/* 81294a: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 81294e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 812952: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 812956: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 81295a: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 81295e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81295f: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 812963: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 812964: mov ecx, esi */
  ecx = esi;
/* 812966: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 81296a: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 81296e: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 812976: call dword ptr [0xcfa588] */
  esp -= 4; W32(esp, 0x81297cu); SPILL(); f_4e420a(); if (g_unwind) return; /* Core!??GFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 81297c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 81297e: mov edx, edi */
  edx = edi;
/* 812980: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 812982: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 812985: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 812988: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81298b: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 81298e: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 812991: mov edx, ecx */
  edx = ecx;
/* 812993: mov eax, ecx */
  eax = ecx;
/* 812995: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 812999: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 81299d: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 8129a1: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* 8129a5: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 8129a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8129aa: lea edx, [esp + 4] */
  edx = (uint32_t)(esp + 0x4u);
/* 8129ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8129af: mov ecx, esi */
  ecx = esi;
/* 8129b1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8129b5: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8129b9: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 8129c1: call dword ptr [0xcfaab8] */
  esp -= 4; W32(esp, 0x8129c7u); SPILL(); f_4e3b1b(); if (g_unwind) return; /* Core!??HFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 8129c7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8129c9: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 8129cc: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8129ce: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8129d1: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8129d4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8129d7: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8129da: mov byte ptr [edi + 0x18], 1 */
  W8((uint32_t)(edi + 0x18u), 0x1u);
/* 8129de: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8129e1: ret  */
  esp += 4; SPILL(); return;
}

void f_812a20(void) {
  LOAD_REGS();
L_812a20: /* 812a20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 812a21: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* 812a24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 812a25: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 812a2b: mov esi, ecx */
  esi = ecx;
/* 812a2d: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 812a2f: and esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 812a32: fst dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0);
/* 812a35: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 812a36: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 812a3a: fild dword ptr [esp + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 812a3e: mov esi, ecx */
  esi = ecx;
/* 812a40: and esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 812a43: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 812a44: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 812a46: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 812a4a: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 812a4d: lea ecx, [ecx + ecx - 1] */
  ecx = (uint32_t)(ecx + ecx + 0xffffffffu);
/* 812a51: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 812a53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 812a54: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 812a56: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 812a58: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* 812a5c: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 812a60: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 812a63: fadd dword ptr [edx + 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x4u)));
/* 812a66: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 812a69: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* 812a6d: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 812a70: fadd dword ptr [edx + 8] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x8u)));
/* 812a73: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 812a76: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 812a77: ret  */
  esp += 4; SPILL(); return;
}

void f_812aa0(void) {
  LOAD_REGS();
L_812aa0: /* 812aa0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 812aa2: fsub dword ptr [ecx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xcu)));
/* 812aa5: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 812aa7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812aa9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 812aac: jnp 0x812b03 */
  if (!pf) goto L_812b03;
L_812aae: /* 812aae: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 812ab0: fadd dword ptr [ecx + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xcu)));
/* 812ab3: fcomp dword ptr [edx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(edx + 0xcu)));
  FPOP();
/* 812ab6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812ab8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 812abb: je 0x812b03 */
  if (zf) goto L_812b03;
L_812abd: /* 812abd: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 812ac0: fsub dword ptr [ecx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xcu)));
/* 812ac3: fcomp dword ptr [edx + 4] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x4u)));
  FPOP();
/* 812ac6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812ac8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 812acb: jnp 0x812b03 */
  if (!pf) goto L_812b03;
L_812acd: /* 812acd: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 812ad0: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 812ad3: fcomp dword ptr [edx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x10u)));
  FPOP();
/* 812ad6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812ad8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 812adb: je 0x812b03 */
  if (zf) goto L_812b03;
L_812add: /* 812add: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 812ae0: fsub dword ptr [ecx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xcu)));
/* 812ae3: fcomp dword ptr [edx + 8] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x8u)));
  FPOP();
/* 812ae6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812ae8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 812aeb: jnp 0x812b03 */
  if (!pf) goto L_812b03;
L_812aed: /* 812aed: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 812af0: fadd dword ptr [ecx + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xcu)));
/* 812af3: fcomp dword ptr [edx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x14u)));
  FPOP();
/* 812af6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812af8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 812afb: je 0x812b03 */
  if (zf) goto L_812b03;
L_812afd: /* 812afd: mov eax, 1 */
  eax = 0x1u;
/* 812b02: ret  */
  esp += 4; SPILL(); return;
L_812b03: /* 812b03: xor eax, eax */
  eax = 0;
/* 812b05: ret  */
  esp += 4; SPILL(); return;
}

void f_812b30(void) {
  LOAD_REGS();
L_812b30: /* 812b30: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* 812b33: xor ecx, ecx */
  ecx = 0;
/* 812b35: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* 812b37: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812b39: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 812b3c: jne 0x812baf */
  if (!zf) goto L_812baf;
L_812b3e: /* 812b3e: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 812b41: fcomp dword ptr [esi + 4] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x4u)));
  FPOP();
/* 812b44: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812b46: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 812b49: jne 0x812b78 */
  if (!zf) goto L_812b78;
L_812b4b: /* 812b4b: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 812b4e: fcomp dword ptr [esi + 8] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x8u)));
  FPOP();
/* 812b51: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812b53: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 812b56: jne 0x812b63 */
  if (!zf) goto L_812b63;
L_812b58: /* 812b58: mov dword ptr [edi], 7 */
  W32((uint32_t)(edi), 0x7u);
/* 812b5e: mov ecx, 1 */
  ecx = 0x1u;
L_812b63: /* 812b63: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 812b66: fcomp dword ptr [esi + 8] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x8u)));
  FPOP();
/* 812b69: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812b6b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 812b6e: jp 0x812b78 */
  if (pf) goto L_812b78;
L_812b70: /* 812b70: mov dword ptr [edi + ecx*4], 6 */
  W32((uint32_t)(edi + ecx*4), 0x6u);
/* 812b77: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_812b78: /* 812b78: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 812b7b: fcomp dword ptr [esi + 4] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x4u)));
  FPOP();
/* 812b7e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812b80: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 812b83: jp 0x812baf */
  if (pf) goto L_812baf;
L_812b85: /* 812b85: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 812b88: fcomp dword ptr [esi + 8] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x8u)));
  FPOP();
/* 812b8b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812b8d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 812b90: jne 0x812b9a */
  if (!zf) goto L_812b9a;
L_812b92: /* 812b92: mov dword ptr [edi + ecx*4], 5 */
  W32((uint32_t)(edi + ecx*4), 0x5u);
/* 812b99: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_812b9a: /* 812b9a: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 812b9d: fcomp dword ptr [esi + 8] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x8u)));
  FPOP();
/* 812ba0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812ba2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 812ba5: jp 0x812baf */
  if (pf) goto L_812baf;
L_812ba7: /* 812ba7: mov dword ptr [edi + ecx*4], 4 */
  W32((uint32_t)(edi + ecx*4), 0x4u);
/* 812bae: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_812baf: /* 812baf: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 812bb1: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* 812bb3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812bb5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 812bb8: jp 0x812c28 */
  if (pf) goto L_812c28;
L_812bba: /* 812bba: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 812bbd: fcomp dword ptr [esi + 4] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x4u)));
  FPOP();
/* 812bc0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812bc2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 812bc5: jne 0x812bf1 */
  if (!zf) goto L_812bf1;
L_812bc7: /* 812bc7: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 812bca: fcomp dword ptr [esi + 8] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x8u)));
  FPOP();
/* 812bcd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812bcf: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 812bd2: jne 0x812bdc */
  if (!zf) goto L_812bdc;
L_812bd4: /* 812bd4: mov dword ptr [edi + ecx*4], 3 */
  W32((uint32_t)(edi + ecx*4), 0x3u);
/* 812bdb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_812bdc: /* 812bdc: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 812bdf: fcomp dword ptr [esi + 8] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x8u)));
  FPOP();
/* 812be2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812be4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 812be7: jp 0x812bf1 */
  if (pf) goto L_812bf1;
L_812be9: /* 812be9: mov dword ptr [edi + ecx*4], 2 */
  W32((uint32_t)(edi + ecx*4), 0x2u);
/* 812bf0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_812bf1: /* 812bf1: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 812bf4: fcomp dword ptr [esi + 4] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x4u)));
  FPOP();
/* 812bf7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812bf9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 812bfc: jp 0x812c28 */
  if (pf) goto L_812c28;
L_812bfe: /* 812bfe: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 812c01: fcomp dword ptr [esi + 8] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x8u)));
  FPOP();
/* 812c04: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812c06: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 812c09: jne 0x812c13 */
  if (!zf) goto L_812c13;
L_812c0b: /* 812c0b: mov dword ptr [edi + ecx*4], 1 */
  W32((uint32_t)(edi + ecx*4), 0x1u);
/* 812c12: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_812c13: /* 812c13: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 812c16: fcomp dword ptr [esi + 8] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x8u)));
  FPOP();
/* 812c19: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812c1b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 812c1e: jp 0x812c28 */
  if (pf) goto L_812c28;
L_812c20: /* 812c20: mov dword ptr [edi + ecx*4], 0 */
  W32((uint32_t)(edi + ecx*4), 0x0u);
/* 812c27: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_812c28: /* 812c28: mov eax, ecx */
  eax = ecx;
/* 812c2a: ret  */
  esp += 4; SPILL(); return;
}

void f_812c70(void) {
  LOAD_REGS();
L_812c70: /* 812c70: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 812c72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 812c73: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 812c75: xor esi, esi */
  esi = 0;
/* 812c77: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812c79: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 812c7c: jne 0x812c85 */
  if (!zf) goto L_812c85;
L_812c7e: /* 812c7e: mov esi, 4 */
  esi = 0x4u;
/* 812c83: jmp 0x812c91 */
  goto L_812c91;
L_812c85: /* 812c85: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 812c88: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 812c8a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812c8c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 812c8f: je 0x812cc2 */
  if (zf) goto L_812cc2;
L_812c91: /* 812c91: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 812c94: fcomp dword ptr [edx + 4] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x4u)));
  FPOP();
/* 812c97: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812c99: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 812c9c: jne 0x812cb5 */
  if (!zf) goto L_812cb5;
L_812c9e: /* 812c9e: or esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_812ca1: /* 812ca1: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 812ca4: fcomp dword ptr [edx + 8] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x8u)));
  FPOP();
/* 812ca7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812ca9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 812cac: jne 0x812cc9 */
  if (!zf) goto L_812cc9;
L_812cae: /* 812cae: or esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 812cb1: mov eax, esi */
  eax = esi;
/* 812cb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 812cb4: ret  */
  esp += 4; SPILL(); return;
L_812cb5: /* 812cb5: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 812cb8: fcomp dword ptr [edx + 4] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x4u)));
  FPOP();
/* 812cbb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812cbd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 812cc0: jne 0x812ca1 */
  if (!zf) goto L_812ca1;
L_812cc2: /* 812cc2: mov eax, 0xffffffff */
  eax = 0xffffffffu;
/* 812cc7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 812cc8: ret  */
  esp += 4; SPILL(); return;
L_812cc9: /* 812cc9: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 812ccc: fcomp dword ptr [edx + 8] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x8u)));
  FPOP();
/* 812ccf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812cd1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 812cd4: mov eax, 0xffffffff */
  eax = 0xffffffffu;
/* 812cd9: je 0x812cdd */
  if (zf) goto L_812cdd;
L_812cdb: /* 812cdb: mov eax, esi */
  eax = esi;
L_812cdd: /* 812cdd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 812cde: ret  */
  esp += 4; SPILL(); return;
}

void f_812d00(void) {
  LOAD_REGS();
L_812d00: /* 812d00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 812d01: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 812d05: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 812d08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 812d09: mov esi, ecx */
  esi = ecx;
/* 812d0b: je 0x812d3d */
  if (zf) goto L_812d3d;
L_812d0d: /* 812d0d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 812d10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 812d11: push 0x6c5e25 */
  { uint32_t v = 0x6c5e25u; esp -= 4; W32(esp, v); }
/* 812d16: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 812d19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 812d1a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 812d1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 812d1d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x812d22u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 812d22: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 812d25: je 0x812d35 */
  if (zf) goto L_812d35;
L_812d27: /* 812d27: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 812d2d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 812d2f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 812d31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 812d32: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x812d35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_812d35: /* 812d35: mov eax, edi */
  eax = edi;
/* 812d37: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 812d38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 812d39: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 812d3a: ret 4 */
  esp += 8; SPILL(); return;
L_812d3d: /* 812d3d: mov ecx, esi */
  ecx = esi;
/* 812d3f: call 0x6c5e25 */
  esp -= 4; W32(esp, 0x812d44u); SPILL(); f_6c5e25(); if (g_unwind) return; RELOAD();
/* 812d44: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 812d47: je 0x812d56 */
  if (zf) goto L_812d56;
L_812d49: /* 812d49: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 812d4e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 812d50: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 812d52: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 812d53: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x812d56u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_812d56: /* 812d56: mov eax, esi */
  eax = esi;
/* 812d58: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 812d59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 812d5a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_812d80(void) {
  LOAD_REGS();
L_812d80: /* 812d80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 812d81: mov ebp, esp */
  ebp = esp;
/* 812d83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 812d85: push 0x9d2a50 */
  { uint32_t v = 0x9d2a50u; esp -= 4; W32(esp, v); }
/* 812d8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 812d90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 812d91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 812d98: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 812d9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 812d9c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 812d9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 812da0: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 812da3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 812da4: mov edi, ecx */
  edi = ecx;
/* 812da6: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 812da9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 812dab: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 812dae: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 812db1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 812db8: je 0x812e54 */
  if (zf) goto L_812e54;
L_812dbe: /* 812dbe: lea edx, [ebx + 0x128] */
  edx = (uint32_t)(ebx + 0x128u);
/* 812dc4: mov ecx, esi */
  ecx = esi;
/* 812dc6: call 0x812aa0 */
  esp -= 4; W32(esp, 0x812dcbu); SPILL(); f_812aa0(); if (g_unwind) return; RELOAD();
/* 812dcb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 812dcd: jne 0x812e54 */
  if (!zf) goto L_812e54;
L_812dd3: /* 812dd3: lea edi, [ebp - 0x4c] */
  edi = (uint32_t)(ebp + 0xffffffb4u);
/* 812dd6: call 0x812b30 */
  esp -= 4; W32(esp, 0x812ddbu); SPILL(); f_812b30(); if (g_unwind) return; RELOAD();
/* 812ddb: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 812dde: xor edi, edi */
  edi = 0;
L_812de0: /* 812de0: cmp edi, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 812de3: jge 0x812e61 */
  if ((sf == of)) goto L_812e61;
L_812de5: /* 812de5: mov ecx, dword ptr [ebp + edi*4 - 0x4c] */
  ecx = R32((uint32_t)(ebp + edi*4 + 0xffffffb4u));
/* 812de9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 812dec: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 812df2: mov eax, ecx */
  eax = ecx;
/* 812df4: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 812df6: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 812df9: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 812dfc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 812dfd: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 812e00: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 812e03: mov edx, ecx */
  edx = ecx;
/* 812e05: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 812e08: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 812e09: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 812e0c: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 812e0f: mov eax, ecx */
  eax = ecx;
/* 812e11: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 812e14: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 812e16: lea edx, [eax + eax - 1] */
  edx = (uint32_t)(eax + eax + 0xffffffffu);
/* 812e1a: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 812e1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 812e1e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 812e21: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 812e24: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 812e27: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 812e2a: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 812e2d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 812e2e: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 812e31: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 812e34: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 812e37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 812e38: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 812e3b: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 812e3d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 812e40: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 812e43: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 812e46: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 812e49: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 812e4c: call 0x6cc5b3 */
  esp -= 4; W32(esp, 0x812e51u); SPILL(); f_6cc5b3(); if (g_unwind) return; RELOAD();
/* 812e51: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 812e52: jmp 0x812de0 */
  goto L_812de0;
L_812e54: /* 812e54: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 812e57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 812e58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 812e59: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 812e5a: mov ecx, edi */
  ecx = edi;
/* 812e5c: call 0x6c74d7 */
  esp -= 4; W32(esp, 0x812e61u); SPILL(); f_6c74d7(); if (g_unwind) return; RELOAD();
L_812e61: /* 812e61: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 812e64: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 812e65: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 812e66: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 812e6d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 812e6e: mov esp, ebp */
  esp = ebp;
/* 812e70: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 812e71: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_812e74(void) {
  LOAD_REGS();
L_812e74: /* 812e74: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 812e77: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 812e7c: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 812e7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 812e80: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 812e83: call 0x99caf8 */
  esp -= 4; W32(esp, 0x812e88u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_812e88(); return;
}

void f_812e88(void) {
  LOAD_REGS();
L_812e88: /* 812e88: push 0xa13b70 */
  { uint32_t v = 0xa13b70u; esp -= 4; W32(esp, v); }
/* 812e8d: push 0xae208c */
  { uint32_t v = 0xae208cu; esp -= 4; W32(esp, v); }
/* 812e92: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x812e98u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 812e98: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 812e9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 812e9d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 812e9f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x812ea4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_812ea4: guest_badaddr(0x812ea4); return;
}

void f_812f00(void) {
  LOAD_REGS();
L_812f00: /* 812f00: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 812f04: xor ecx, ecx */
  ecx = 0;
/* 812f06: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 812f0a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812f0c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 812f0f: jne 0x812f72 */
  if (!zf) goto L_812f72;
L_812f11: /* 812f11: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 812f15: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 812f19: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812f1b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 812f1e: jne 0x812f49 */
  if (!zf) goto L_812f49;
L_812f20: /* 812f20: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 812f24: fcomp dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
  FPOP();
/* 812f28: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812f2a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 812f2d: jp 0x812f34 */
  if (pf) goto L_812f34;
L_812f2f: /* 812f2f: mov ecx, 2 */
  ecx = 0x2u;
L_812f34: /* 812f34: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 812f38: fcomp dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
  FPOP();
/* 812f3c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812f3e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 812f41: jp 0x812f6f */
  if (pf) goto L_812f6f;
L_812f43: /* 812f43: or ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 812f46: mov eax, ecx */
  eax = ecx;
/* 812f48: ret  */
  esp += 4; SPILL(); return;
L_812f49: /* 812f49: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_812f4d: /* 812f4d: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 812f51: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812f53: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 812f56: jp 0x812f5d */
  if (pf) goto L_812f5d;
L_812f58: /* 812f58: mov ecx, 4 */
  ecx = 0x4u;
L_812f5d: /* 812f5d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 812f61: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 812f65: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812f67: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 812f6a: jp 0x812f6f */
  if (pf) goto L_812f6f;
L_812f6c: /* 812f6c: or ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_812f6f: /* 812f6f: mov eax, ecx */
  eax = ecx;
/* 812f71: ret  */
  esp += 4; SPILL(); return;
L_812f72: /* 812f72: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 812f76: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 812f7a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 812f7e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812f80: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 812f83: jne 0x812f4d */
  if (!zf) goto L_812f4d;
L_812f85: /* 812f85: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 812f89: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812f8b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 812f8e: jp 0x812f95 */
  if (pf) goto L_812f95;
L_812f90: /* 812f90: mov ecx, 4 */
  ecx = 0x4u;
L_812f95: /* 812f95: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 812f99: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 812f9d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812f9f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 812fa2: jp 0x812f6f */
  if (pf) goto L_812f6f;
L_812fa4: /* 812fa4: or ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 812fa7: mov eax, ecx */
  eax = ecx;
/* 812fa9: ret  */
  esp += 4; SPILL(); return;
}

void f_812fe0(void) {
  LOAD_REGS();
L_812fe0: /* 812fe0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 812fe4: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 812fe8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812fea: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 812fed: jp 0x813003 */
  if (pf) goto L_813003;
L_812fef: /* 812fef: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 812ff3: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 812ff7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 812ff9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 812ffc: jp 0x813016 */
  if (pf) goto L_813016;
L_812ffe: /* 812ffe: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 813002: ret  */
  esp += 4; SPILL(); return;
L_813003: /* 813003: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 813007: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 81300b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81300d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 813010: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 813014: jnp 0x813018 */
  if (!pf) goto L_813018;
L_813016: /* 813016: mov eax, ecx */
  eax = ecx;
L_813018: /* 813018: ret  */
  esp += 4; SPILL(); return;
}

void f_813030(void) {
  LOAD_REGS();
L_813030: /* 813030: ret  */
  esp += 4; SPILL(); return;
}

void f_813050(void) {
  LOAD_REGS();
L_813050: /* 813050: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 813054: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81305a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81305c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81305f: jne 0x813068 */
  if (!zf) goto L_813068;
L_813061: /* 813061: fld dword ptr [0xa13bbc] */
  { double v = F32((uint32_t)(0xa13bbcu)); FPUSH(v); }
/* 813067: ret  */
  esp += 4; SPILL(); return;
L_813068: /* 813068: fld dword ptr [0xa13bb8] */
  { double v = F32((uint32_t)(0xa13bb8u)); FPUSH(v); }
/* 81306e: ret  */
  esp += 4; SPILL(); return;
}

void f_813080(void) {
  LOAD_REGS();
L_813080: /* 813080: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8130a0(void) {
  LOAD_REGS();
L_8130a0: /* 8130a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8130a1: mov esi, ecx */
  esi = ecx;
/* 8130a3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8130a9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8130a9: mov eax, esi */
  eax = esi;
/* 8130ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8130ac: ret  */
  esp += 4; SPILL(); return;
}

void f_8130c0(void) {
  LOAD_REGS();
L_8130c0: /* 8130c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8130c2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8130c6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 8130c9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8130e0(void) {
  LOAD_REGS();
L_8130e0: /* 8130e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8130e4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8130e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8130e7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8130edu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8130ed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_813100(void) {
  LOAD_REGS();
L_813100: /* 813100: mov eax, 1 */
  eax = 0x1u;
/* 813105: ret  */
  esp += 4; SPILL(); return;
}

void f_813120(void) {
  LOAD_REGS();
L_813120: /* 813120: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 813123: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 813125: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 81312d: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 81312f: mov dword ptr [esp + 4], 0x3f800000 */
  W32((uint32_t)(esp + 0x4u), 0x3f800000u);
/* 813137: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 81313a: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 81313d: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 813141: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 813144: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 813147: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 81314b: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 81314d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 813153: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 813155: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 813158: jnp 0x8131b1 */
  if (!pf) goto L_8131b1;
L_81315a: /* 81315a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 81315c: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 81315e: fabs  */
  ST0 = fabs(ST0);
/* 813160: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 813162: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 813164: fchs  */
  ST0 = -ST0;
/* 813166: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 813168: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 81316c: fsubrp st(1) */
  STI(1) = ST0 - STI(1);
  FPOP();
/* 81316e: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 813172: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 813178: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81317a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81317d: jne 0x813187 */
  if (!zf) goto L_813187;
L_81317f: /* 81317f: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 813183: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
L_813187: /* 813187: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 81318d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81318f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 813192: jp 0x81319a */
  if (pf) goto L_81319a;
L_813194: /* 813194: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 813198: jmp 0x81319c */
  goto L_81319c;
L_81319a: /* 81319a: fstp st(0) */
  STI(0) = ST0; FPOP();
L_81319c: /* 81319c: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 8131a0: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 8131a4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8131a6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8131a9: jp 0x8131c0 */
  if (pf) goto L_8131c0;
L_8131ab: /* 8131ab: xor eax, eax */
  eax = 0;
/* 8131ad: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8131b0: ret  */
  esp += 4; SPILL(); return;
L_8131b1: /* 8131b1: fabs  */
  ST0 = fabs(ST0);
/* 8131b3: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* 8131b5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8131b7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8131ba: jp 0x8132ab */
  if (pf) goto L_8132ab;
L_8131c0: /* 8131c0: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8131c3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8131c9: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8131cd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8131cf: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8131d2: jnp 0x81322a */
  if (!pf) goto L_81322a;
L_8131d4: /* 8131d4: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8131d7: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 8131da: fabs  */
  ST0 = fabs(ST0);
/* 8131dc: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 8131df: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8131e1: fchs  */
  ST0 = -ST0;
/* 8131e3: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8131e5: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8131e9: fsubrp st(1) */
  STI(1) = ST0 - STI(1);
  FPOP();
/* 8131eb: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 8131ef: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 8131f3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8131f5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8131f8: jne 0x813202 */
  if (!zf) goto L_813202;
L_8131fa: /* 8131fa: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 8131fe: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
L_813202: /* 813202: fcom dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
/* 813206: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 813208: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81320b: jp 0x813213 */
  if (pf) goto L_813213;
L_81320d: /* 81320d: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 813211: jmp 0x813215 */
  goto L_813215;
L_813213: /* 813213: fstp st(0) */
  STI(0) = ST0; FPOP();
L_813215: /* 813215: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 813219: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 81321d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81321f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 813222: jp 0x813247 */
  if (pf) goto L_813247;
L_813224: /* 813224: xor eax, eax */
  eax = 0;
/* 813226: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 813229: ret  */
  esp += 4; SPILL(); return;
L_81322a: /* 81322a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 813230: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 813234: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 813236: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 813239: je 0x81323d */
  if (zf) goto L_81323d;
L_81323b: /* 81323b: fchs  */
  ST0 = -ST0;
L_81323d: /* 81323d: fcomp dword ptr [esi + 4] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x4u)));
  FPOP();
/* 813240: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 813242: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 813245: jp 0x8132ab */
  if (pf) goto L_8132ab;
L_813247: /* 813247: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 81324a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 813250: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 813252: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 813255: jnp 0x8132b1 */
  if (!pf) goto L_8132b1;
L_813257: /* 813257: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 81325b: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 81325e: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 813261: fabs  */
  ST0 = fabs(ST0);
/* 813263: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 813266: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 813268: fchs  */
  ST0 = -ST0;
/* 81326a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 81326c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 813270: fsubrp st(1) */
  STI(1) = ST0 - STI(1);
  FPOP();
/* 813272: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 813276: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 81327a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81327c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81327f: jne 0x813289 */
  if (!zf) goto L_813289;
L_813281: /* 813281: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 813285: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
L_813289: /* 813289: fcom dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
/* 81328d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81328f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 813292: jp 0x81329a */
  if (pf) goto L_81329a;
L_813294: /* 813294: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 813298: jmp 0x81329c */
  goto L_81329c;
L_81329a: /* 81329a: fstp st(0) */
  STI(0) = ST0; FPOP();
L_81329c: /* 81329c: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 8132a0: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 8132a4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8132a6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8132a9: jp 0x8132c1 */
  if (pf) goto L_8132c1;
L_8132ab: /* 8132ab: xor eax, eax */
  eax = 0;
/* 8132ad: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8132b0: ret  */
  esp += 4; SPILL(); return;
L_8132b1: /* 8132b1: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8132b5: fabs  */
  ST0 = fabs(ST0);
/* 8132b7: fcomp dword ptr [esi + 8] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x8u)));
  FPOP();
/* 8132ba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8132bc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8132bf: jp 0x8132ab */
  if (pf) goto L_8132ab;
L_8132c1: /* 8132c1: mov eax, 1 */
  eax = 0x1u;
/* 8132c6: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8132c9: ret  */
  esp += 4; SPILL(); return;
}

void f_813340(void) {
  LOAD_REGS();
L_813340: /* 813340: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 813344: xor edx, edx */
  edx = 0;
/* 813346: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 813348: je 0x813372 */
  if (zf) goto L_813372;
L_81334a: /* 81334a: fld dword ptr [0xa13bbc] */
  { double v = F32((uint32_t)(0xa13bbcu)); FPUSH(v); }
L_813350: /* 813350: fcom dword ptr [ecx + 0x24] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x24u)));
/* 813353: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 813355: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 813358: jne 0x813361 */
  if (!zf) goto L_813361;
L_81335a: /* 81335a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81335c: mov edx, ecx */
  edx = ecx;
/* 81335e: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
L_813361: /* 813361: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 813363: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 813365: jne 0x813350 */
  if (!zf) goto L_813350;
L_813367: /* 813367: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 813369: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81336b: mov eax, edx */
  eax = edx;
/* 81336d: je 0x813374 */
  if (zf) goto L_813374;
L_81336f: /* 81336f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 813371: ret  */
  esp += 4; SPILL(); return;
L_813372: /* 813372: mov eax, edx */
  eax = edx;
L_813374: /* 813374: ret  */
  esp += 4; SPILL(); return;
}

void f_813390(void) {
  LOAD_REGS();
L_813390: /* 813390: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 813391: mov ebp, esp */
  ebp = esp;
/* 813393: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 813395: push 0x9d2a60 */
  { uint32_t v = 0x9d2a60u; esp -= 4; W32(esp, v); }
/* 81339a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8133a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8133a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8133a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8133ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8133ac: mov ebx, dword ptr [0xcfa3a4] */
  ebx = R32((uint32_t)(0xcfa3a4u));
/* 8133b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8133b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8133b4: xor esi, esi */
  esi = 0;
/* 8133b6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8133b9: mov edi, ecx */
  edi = ecx;
/* 8133bb: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8133be: mov edi, edi */
  edi = edi;
L_8133c0: /* 8133c0: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8133c3: jge 0x8133e7 */
  if ((sf == of)) goto L_8133e7;
L_8133c5: /* 8133c5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8133c7: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 8133ca: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8133d0u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8133d0: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8133d6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8133d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8133d9: push 0xae1fc8 */
  { uint32_t v = 0xae1fc8u; esp -= 4; W32(esp, v); }
/* 8133de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8133df: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8133e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8133e1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8133e4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8133e5: jmp 0x8133c0 */
  goto L_8133c0;
L_8133e7: /* 8133e7: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 8133ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8133ec: je 0x813437 */
  if (zf) goto L_813437;
L_8133ee: /* 8133ee: xor esi, esi */
  esi = 0;
L_8133f0: /* 8133f0: cmp esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8133f3: jge 0x813437 */
  if ((sf == of)) goto L_813437;
L_8133f5: /* 8133f5: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 8133f8: mov ecx, esi */
  ecx = esi;
/* 8133fa: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8133fd: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8133ff: call 0x6cb48d */
  esp -= 4; W32(esp, 0x813404u); SPILL(); f_6cb48d(); if (g_unwind) return; RELOAD();
/* 813404: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 813405: jmp 0x8133f0 */
  goto L_8133f0;
L_813437: /* 813437: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81343a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81343b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81343c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 813443: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 813444: mov esp, ebp */
  esp = ebp;
/* 813446: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 813447: ret  */
  esp += 4; SPILL(); return;
}

void f_813407(void) {
  LOAD_REGS();
L_813407: /* 813407: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81340a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81340f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 813412: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813413: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 813416: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81341bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81341b(); return;
}

void f_81341b(void) {
  LOAD_REGS();
L_81341b: /* 81341b: push 0xa13bc0 */
  { uint32_t v = 0xa13bc0u; esp -= 4; W32(esp, v); }
/* 813420: push 0xae202c */
  { uint32_t v = 0xae202cu; esp -= 4; W32(esp, v); }
/* 813425: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81342bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81342b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81342e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 813430: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 813432: call 0x99caf8 */
  esp -= 4; W32(esp, 0x813437u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 813437: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81343a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81343b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81343c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 813443: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 813444: mov esp, ebp */
  esp = ebp;
/* 813446: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 813447: ret  */
  esp += 4; SPILL(); return;
}

void f_813480(void) {
  LOAD_REGS();
L_813480: /* 813480: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 813481: mov ebp, esp */
  ebp = esp;
/* 813483: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 813485: push 0x9d2a70 */
  { uint32_t v = 0x9d2a70u; esp -= 4; W32(esp, v); }
/* 81348a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 813490: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 813491: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 813498: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81349b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81349c: mov ebx, dword ptr [0xcfa3a4] */
  ebx = R32((uint32_t)(0xcfa3a4u));
/* 8134a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8134a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8134a4: xor esi, esi */
  esi = 0;
/* 8134a6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8134a9: mov edi, ecx */
  edi = ecx;
/* 8134ab: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8134ae: mov edi, edi */
  edi = edi;
L_8134b0: /* 8134b0: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8134b3: jge 0x8134d7 */
  if ((sf == of)) goto L_8134d7;
L_8134b5: /* 8134b5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8134b7: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 8134ba: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8134c0u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8134c0: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8134c6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8134c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8134c9: push 0xae2038 */
  { uint32_t v = 0xae2038u; esp -= 4; W32(esp, v); }
/* 8134ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8134cf: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8134d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8134d1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8134d4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8134d5: jmp 0x8134b0 */
  goto L_8134b0;
L_8134d7: /* 8134d7: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 8134da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8134dc: je 0x81352b */
  if (zf) goto L_81352b;
L_8134de: /* 8134de: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8134e1: xor esi, esi */
  esi = 0;
L_8134e3: /* 8134e3: cmp esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8134e6: jge 0x81352b */
  if ((sf == of)) goto L_81352b;
L_8134e8: /* 8134e8: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 8134eb: mov ecx, esi */
  ecx = esi;
/* 8134ed: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8134f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8134f1: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8134f3: call 0x6cc0d6 */
  esp -= 4; W32(esp, 0x8134f8u); SPILL(); f_6cc0d6(); if (g_unwind) return; RELOAD();
/* 8134f8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8134f9: jmp 0x8134e3 */
  goto L_8134e3;
L_81352b: /* 81352b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81352e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81352f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 813530: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 813537: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 813538: mov esp, ebp */
  esp = ebp;
/* 81353a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81353b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8134fb(void) {
  LOAD_REGS();
L_8134fb: /* 8134fb: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8134fe: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 813503: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 813506: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813507: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81350a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81350fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81350f(); return;
}

void f_81350f(void) {
  LOAD_REGS();
L_81350f: /* 81350f: push 0xa13c00 */
  { uint32_t v = 0xa13c00u; esp -= 4; W32(esp, v); }
/* 813514: push 0xae207c */
  { uint32_t v = 0xae207cu; esp -= 4; W32(esp, v); }
/* 813519: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81351fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81351f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 813522: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 813524: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 813526: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81352bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 81352b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81352e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81352f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 813530: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 813537: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 813538: mov esp, ebp */
  esp = ebp;
/* 81353a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81353b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_813570(void) {
  LOAD_REGS();
L_813570: /* 813570: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 813571: mov ebp, esp */
  ebp = esp;
/* 813573: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 813575: push 0x9d2a80 */
  { uint32_t v = 0x9d2a80u; esp -= 4; W32(esp, v); }
/* 81357a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 813580: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 813581: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 813588: sub esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81358b: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 81358e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81358f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 813595: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 813596: xor edx, edx */
  edx = 0;
/* 813598: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 813599: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81359c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81359e: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8135a1: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 8135a4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8135a7: jnp 0x813af2 */
  if (!pf) goto L_813af2;
L_8135ad: /* 8135ad: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 8135b0: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8135b6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8135b8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8135bb: jnp 0x813af2 */
  if (!pf) goto L_813af2;
L_8135c1: /* 8135c1: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 8135c4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8135ca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8135cc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8135cf: jnp 0x813af2 */
  if (!pf) goto L_813af2;
L_8135d5: /* 8135d5: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8135d8: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 8135db: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8135de: je 0x8135ef */
  if (zf) goto L_8135ef;
L_8135e0: /* 8135e0: mov eax, dword ptr [ebx + 0x8c] */
  eax = R32((uint32_t)(ebx + 0x8cu));
/* 8135e6: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8135e8: je 0x8135ef */
  if (zf) goto L_8135ef;
L_8135ea: /* 8135ea: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 8135ed: jmp 0x8135f5 */
  goto L_8135f5;
L_8135ef: /* 8135ef: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_8135f5: /* 8135f5: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8135f8: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8135fa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8135fc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8135ff: je 0x813af0 */
  if (zf) goto L_813af0;
L_813605: /* 813605: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 813608: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 81360a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81360c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81360f: je 0x813af0 */
  if (zf) goto L_813af0;
L_813615: /* 813615: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 813618: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 81361a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81361c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81361e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 813621: je 0x813af2 */
  if (zf) goto L_813af2;
L_813627: /* 813627: cmp edx, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81362a: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 81362d: jge 0x813795 */
  if ((sf == of)) goto L_813795;
L_813633: /* 813633: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 813635: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 813638: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 81363b: cmp dword ptr [esi + 0x164], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x164u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 813641: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 813644: je 0x81378f */
  if (zf) goto L_81378f;
L_81364a: /* 81364a: mov dword ptr [esi + 0x164], eax */
  W32((uint32_t)(esi + 0x164u), eax);
/* 813650: test byte ptr [esi + 0x88], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 813657: je 0x81378f */
  if (zf) goto L_81378f;
L_81365d: /* 81365d: mov edi, dword ptr [ebx + 0x64] */
  edi = R32((uint32_t)(ebx + 0x64u));
/* 813660: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 813662: je 0x81378f */
  if (zf) goto L_81378f;
L_813668: /* 813668: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 813669: mov ecx, edi */
  ecx = edi;
/* 81366b: call 0x6cbbc7 */
  esp -= 4; W32(esp, 0x813670u); SPILL(); f_6cbbc7(); if (g_unwind) return; RELOAD();
/* 813670: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 813672: jne 0x813789 */
  if (!zf) goto L_813789;
L_813678: /* 813678: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 81367b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 81367d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81367e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81367f: mov ecx, esi */
  ecx = esi;
/* 813681: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x813687u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 813687: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 813689: je 0x813789 */
  if (zf) goto L_813789;
L_81368f: /* 81368f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 813692: lea eax, [ebx + 0x20] */
  eax = (uint32_t)(ebx + 0x20u);
/* 813695: lea edx, [ebx + 0x44] */
  edx = (uint32_t)(ebx + 0x44u);
/* 813698: lea edi, [ebx + 0x38] */
  edi = (uint32_t)(ebx + 0x38u);
/* 81369b: add esi, 0x150 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x150u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8136a1: add ecx, 0x144 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x144u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8136a7: call 0x813120 */
  esp -= 4; W32(esp, 0x8136acu); SPILL(); f_813120(); if (g_unwind) return; RELOAD();
/* 8136ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8136ae: je 0x813789 */
  if (zf) goto L_813789;
L_8136b4: /* 8136b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8136b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8136b8: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8136bb: call 0x6c6a46 */
  esp -= 4; W32(esp, 0x8136c0u); SPILL(); f_6c6a46(); if (g_unwind) return; RELOAD();
/* 8136c0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8136c3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8136c5: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x8136cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8136cb: mov ecx, dword ptr [ebx + 0x5c] */
  ecx = R32((uint32_t)(ebx + 0x5cu));
/* 8136ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8136cf: mov ecx, dword ptr [ebx + 0x60] */
  ecx = R32((uint32_t)(ebx + 0x60u));
/* 8136d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8136d3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8136d6: mov esi, esp */
  esi = esp;
/* 8136d8: lea ecx, [ebx + 0x50] */
  ecx = (uint32_t)(ebx + 0x50u);
/* 8136db: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 8136dd: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 8136df: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 8136e2: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8136e5: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 8136e8: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 8136eb: mov esi, dword ptr [ebx + 0x20] */
  esi = R32((uint32_t)(ebx + 0x20u));
/* 8136ee: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8136f0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8136f3: mov ecx, esp */
  ecx = esp;
/* 8136f5: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 8136f7: mov esi, dword ptr [ebx + 0x24] */
  esi = R32((uint32_t)(ebx + 0x24u));
/* 8136fa: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 8136fd: mov esi, dword ptr [ebx + 0x28] */
  esi = R32((uint32_t)(ebx + 0x28u));
/* 813700: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 813703: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 813706: lea ecx, [ebx + 0x14] */
  ecx = (uint32_t)(ebx + 0x14u);
/* 813709: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 81370b: mov esi, esp */
  esi = esp;
/* 81370d: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 81370f: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 813712: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 813715: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 813718: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 81371b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 81371e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81371f: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 813722: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813723: mov ecx, eax */
  ecx = eax;
/* 813725: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x813728u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 813728: xor edx, edx */
  edx = 0;
/* 81372a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81372c: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 81372f: mov eax, edx */
  eax = edx;
/* 813731: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 813733: je 0x813789 */
  if (zf) goto L_813789;
L_813735: /* 813735: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 813738: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 81373a: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 81373c: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x813742u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 813742: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 813744: je 0x813756 */
  if (zf) goto L_813756;
L_813746: /* 813746: mov ecx, 0xc */
  ecx = 0xcu;
/* 81374b: lea esi, [ebp - 0x64] */
  esi = (uint32_t)(ebp + 0xffffff9cu);
/* 81374e: mov edi, eax */
  edi = eax;
/* 813750: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 813752: mov ecx, eax */
  ecx = eax;
/* 813754: jmp 0x813758 */
  goto L_813758;
L_813756: /* 813756: xor ecx, ecx */
  ecx = 0;
L_813758: /* 813758: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 81375b: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 81375d: mov eax, dword ptr [ebx + 0x8c] */
  eax = R32((uint32_t)(ebx + 0x8cu));
/* 813763: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 813765: mov dword ptr [ebx + 0xc], ecx */
  W32((uint32_t)(ebx + 0xcu), ecx);
/* 813768: je 0x813777 */
  if (zf) goto L_813777;
L_81376a: /* 81376a: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 81376d: fcomp dword ptr [eax + 0x24] */
  fpu_com(ST0, F32((uint32_t)(eax + 0x24u)));
  FPOP();
/* 813770: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 813772: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 813775: jp 0x81377d */
  if (pf) goto L_81377d;
L_813777: /* 813777: mov dword ptr [ebx + 0x8c], ecx */
  W32((uint32_t)(ebx + 0x8cu), ecx);
L_81377d: /* 81377d: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 813780: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 813783: jne 0x813af2 */
  if (!zf) goto L_813af2;
L_813789: /* 813789: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81378c: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
L_81378f: /* 81378f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 813790: jmp 0x813627 */
  goto L_813627;
L_813795: /* 813795: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 813798: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81379a: je 0x813af2 */
  if (zf) goto L_813af2;
L_8137a0: /* 8137a0: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8137a3: mov ecx, dword ptr [ebx + 0x9c] */
  ecx = R32((uint32_t)(ebx + 0x9cu));
/* 8137a9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8137ab: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* 8137ae: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8137b4: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8137b7: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8137ba: fadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x1cu)));
/* 8137bd: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8137c3: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8137c6: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8137c9: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* 8137cc: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8137d2: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8137d5: je 0x813848 */
  if (zf) goto L_813848;
L_8137d7: /* 8137d7: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8137da: je 0x8137fc */
  if (zf) goto L_8137fc;
L_8137dc: /* 8137dc: fld dword ptr [ebx + 0x90] */
  { double v = F32((uint32_t)(ebx + 0x90u)); FPUSH(v); }
/* 8137e2: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 8137e5: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 8137e7: mov dword ptr [ebp + 8], 0x7f7fffff */
  W32((uint32_t)(ebp + 0x8u), 0x7f7fffffu);
/* 8137ee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8137f0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8137f3: jnp 0x8137fc */
  if (!pf) goto L_8137fc;
L_8137f5: /* 8137f5: mov dword ptr [ebp + 8], 0xff7fffff */
  W32((uint32_t)(ebp + 0x8u), 0xff7fffffu);
L_8137fc: /* 8137fc: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8137ff: je 0x813822 */
  if (zf) goto L_813822;
L_813801: /* 813801: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 813804: fld dword ptr [ebx + 0x94] */
  { double v = F32((uint32_t)(ebx + 0x94u)); FPUSH(v); }
/* 81380a: fcomp dword ptr [eax + 4] */
  fpu_com(ST0, F32((uint32_t)(eax + 0x4u)));
  FPOP();
/* 81380d: mov dword ptr [ebp - 0x14], 0x7f7fffff */
  W32((uint32_t)(ebp + 0xffffffecu), 0x7f7fffffu);
/* 813814: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 813816: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 813819: jnp 0x813822 */
  if (!pf) goto L_813822;
L_81381b: /* 81381b: mov dword ptr [ebp - 0x14], 0xff7fffff */
  W32((uint32_t)(ebp + 0xffffffecu), 0xff7fffffu);
L_813822: /* 813822: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 813825: je 0x813848 */
  if (zf) goto L_813848;
L_813827: /* 813827: fld dword ptr [ebx + 0x98] */
  { double v = F32((uint32_t)(ebx + 0x98u)); FPUSH(v); }
/* 81382d: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 813830: fcomp dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
  FPOP();
/* 813833: mov dword ptr [ebp - 0x1c], 0x7f7fffff */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x7f7fffffu);
/* 81383a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81383c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81383f: jnp 0x813848 */
  if (!pf) goto L_813848;
L_813841: /* 813841: mov dword ptr [ebp - 0x1c], 0xff7fffff */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xff7fffffu);
L_813848: /* 813848: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 81384b: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 81384e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 813851: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 813854: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 813857: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 813858: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 813859: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81385a: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 81385d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81385e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81385f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 813860: call 0x812f00 */
  esp -= 4; W32(esp, 0x813865u); SPILL(); f_812f00(); if (g_unwind) return; RELOAD();
/* 813865: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 813868: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81386b: jmp 0x813870 */
  goto L_813870;
L_813870: /* 813870: mov ecx, dword ptr [ebx + 0xa0] */
  ecx = R32((uint32_t)(ebx + 0xa0u));
/* 813876: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 813879: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 81387c: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 81387e: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 813881: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 813884: call 0x812a20 */
  esp -= 4; W32(esp, 0x813889u); SPILL(); f_812a20(); if (g_unwind) return; RELOAD();
/* 813889: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 81388c: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 81388f: ja 0x813921 */
  if ((!cf && !zf)) goto L_813921;
L_813895: /* 813895: jmp dword ptr [eax*4 + 0x813b08] */
  switch (R32((uint32_t)(eax*4 + 0x813b08u))) {
    case 0x81389cu: goto L_81389c;
    case 0x8138d7u: goto L_8138d7;
    case 0x81393eu: goto L_81393e;
    case 0x81397fu: goto L_81397f;
    case 0x8139bdu: goto L_8139bd;
    case 0x8139feu: goto L_8139fe;
    case 0x813a3cu: goto L_813a3c;
    case 0x813a80u: goto L_813a80;
    default: guest_badjump(0x813895, R32((uint32_t)(eax*4 + 0x813b08u))); return;
  }
L_81389c: /* 81389c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 81389f: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8138a2: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 8138a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8138a6: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8138a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8138aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8138ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8138ac: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8138af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8138b0: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8138b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8138b4: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 8138b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8138b8: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8138bb: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8138be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8138bf: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8138c1: call 0x6ccb67 */
  esp -= 4; W32(esp, 0x8138c6u); SPILL(); f_6ccb67(); if (g_unwind) return; RELOAD();
/* 8138c6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8138c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8138ca: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8138cc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8138cd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8138cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8138d0: mov ecx, 1 */
  ecx = 0x1u;
/* 8138d5: jmp 0x813916 */
  goto L_813916;
L_8138d7: /* 8138d7: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 8138da: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8138dd: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8138e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8138e1: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8138e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8138e5: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8138e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8138e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8138ea: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8138ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8138ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8138ef: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8138f2: xor ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 8138f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8138f6: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 8138f9: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8138fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8138fd: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8138ff: call 0x6ccb67 */
  esp -= 4; W32(esp, 0x813904u); SPILL(); f_6ccb67(); if (g_unwind) return; RELOAD();
/* 813904: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 813907: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813908: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 81390a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81390b: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
L_81390d: /* 81390d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_813910: /* 813910: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 813911: mov ecx, 8 */
  ecx = 0x8u;
L_813916: /* 813916: call 0x812fe0 */
  esp -= 4; W32(esp, 0x81391bu); SPILL(); f_812fe0(); if (g_unwind) return; RELOAD();
/* 81391b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81391e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_813921: /* 813921: cmp dword ptr [ebp - 0x14], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 813925: jl 0x813870 */
  if ((sf != of)) goto L_813870;
L_81392b: /* 81392b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81392e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 813935: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 813936: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 813937: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 813938: mov esp, ebp */
  esp = ebp;
/* 81393a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81393b: ret 0x20 */
  esp += 36; SPILL(); return;
L_81393e: /* 81393e: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 813941: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 813944: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 813947: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 813948: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 81394b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81394c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81394d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 813950: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 813951: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 813954: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 813955: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 813958: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 813959: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81395a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 81395d: xor ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 813960: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 813963: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 813964: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 813966: call 0x6ccb67 */
  esp -= 4; W32(esp, 0x81396bu); SPILL(); f_6ccb67(); if (g_unwind) return; RELOAD();
/* 81396b: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 81396e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 813971: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 813972: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 813974: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 813975: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 813977: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813978: mov ecx, 3 */
  ecx = 0x3u;
/* 81397d: jmp 0x813916 */
  goto L_813916;
L_81397f: /* 81397f: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 813982: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 813985: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 813988: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 813989: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 81398c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81398d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 813990: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813991: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 813994: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 813995: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 813998: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 813999: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81399a: xor ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 81399d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81399e: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 8139a1: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8139a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8139a5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8139a7: call 0x6ccb67 */
  esp -= 4; W32(esp, 0x8139acu); SPILL(); f_6ccb67(); if (g_unwind) return; RELOAD();
/* 8139ac: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 8139af: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 8139b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8139b3: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8139b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8139b6: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 8139b8: jmp 0x81390d */
  goto L_81390d;
L_8139bd: /* 8139bd: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8139c0: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8139c3: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 8139c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8139c7: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8139ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8139cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8139cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8139cd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8139d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8139d1: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8139d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8139d5: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 8139d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8139d9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8139dc: xor ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 8139df: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8139e2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8139e3: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8139e5: call 0x6ccb67 */
  esp -= 4; W32(esp, 0x8139eau); SPILL(); f_6ccb67(); if (g_unwind) return; RELOAD();
/* 8139ea: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8139ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8139ee: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8139f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8139f1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8139f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8139f4: mov ecx, 5 */
  ecx = 0x5u;
/* 8139f9: jmp 0x813916 */
  goto L_813916;
L_8139fe: /* 8139fe: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 813a01: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 813a04: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 813a07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813a08: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 813a0b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 813a0c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 813a0f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 813a10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 813a11: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 813a14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 813a15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813a16: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 813a19: xor ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 813a1c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 813a1d: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 813a20: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 813a23: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 813a24: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 813a26: call 0x6ccb67 */
  esp -= 4; W32(esp, 0x813a2bu); SPILL(); f_6ccb67(); if (g_unwind) return; RELOAD();
/* 813a2b: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 813a2e: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 813a31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813a32: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 813a34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 813a35: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 813a37: jmp 0x813910 */
  goto L_813910;
L_813a3c: /* 813a3c: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 813a3f: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 813a42: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 813a45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 813a46: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 813a49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 813a4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813a4b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 813a4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 813a4f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 813a52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 813a53: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 813a56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 813a57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813a58: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 813a5b: xor ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 813a5e: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 813a61: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 813a62: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 813a64: call 0x6ccb67 */
  esp -= 4; W32(esp, 0x813a69u); SPILL(); f_6ccb67(); if (g_unwind) return; RELOAD();
/* 813a69: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 813a6c: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 813a6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 813a70: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 813a72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 813a73: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 813a75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813a76: mov ecx, 7 */
  ecx = 0x7u;
/* 813a7b: jmp 0x813916 */
  goto L_813916;
L_813a80: /* 813a80: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 813a83: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 813a86: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 813a89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 813a8a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 813a8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 813a8e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 813a91: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813a92: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 813a95: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 813a96: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 813a99: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 813a9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 813a9b: xor ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 813a9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 813a9f: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 813aa2: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 813aa5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 813aa6: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 813aa8: call 0x6ccb67 */
  esp -= 4; W32(esp, 0x813aadu); SPILL(); f_6ccb67(); if (g_unwind) return; RELOAD();
/* 813aad: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 813ab0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 813ab7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 813ab8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 813ab9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 813aba: mov esp, ebp */
  esp = ebp;
/* 813abc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 813abd: ret 0x20 */
  esp += 36; SPILL(); return;
L_813af0: /* 813af0: fstp st(0) */
  STI(0) = ST0; FPOP();
L_813af2: /* 813af2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 813af5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 813af6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 813af7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 813afe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 813aff: mov esp, ebp */
  esp = ebp;
/* 813b01: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 813b02: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_81386d(void) {
  LOAD_REGS();
L_81386d: /* 81386d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_813870: /* 813870: mov ecx, dword ptr [ebx + 0xa0] */
  ecx = R32((uint32_t)(ebx + 0xa0u));
/* 813876: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 813879: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 81387c: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 81387e: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 813881: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 813884: call 0x812a20 */
  esp -= 4; W32(esp, 0x813889u); SPILL(); f_812a20(); if (g_unwind) return; RELOAD();
/* 813889: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 81388c: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 81388f: ja 0x813921 */
  if ((!cf && !zf)) goto L_813921;
L_813895: /* 813895: jmp dword ptr [eax*4 + 0x813b08] */
  switch (R32((uint32_t)(eax*4 + 0x813b08u))) {
    case 0x81389cu: goto L_81389c;
    case 0x8138d7u: goto L_8138d7;
    case 0x81393eu: goto L_81393e;
    case 0x81397fu: goto L_81397f;
    case 0x8139bdu: goto L_8139bd;
    case 0x8139feu: goto L_8139fe;
    case 0x813a3cu: goto L_813a3c;
    case 0x813a80u: goto L_813a80;
    default: guest_badjump(0x813895, R32((uint32_t)(eax*4 + 0x813b08u))); return;
  }
L_81389c: /* 81389c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 81389f: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8138a2: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 8138a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8138a6: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8138a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8138aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8138ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8138ac: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8138af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8138b0: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8138b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8138b4: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 8138b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8138b8: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8138bb: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8138be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8138bf: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8138c1: call 0x6ccb67 */
  esp -= 4; W32(esp, 0x8138c6u); SPILL(); f_6ccb67(); if (g_unwind) return; RELOAD();
/* 8138c6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8138c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8138ca: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8138cc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8138cd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8138cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8138d0: mov ecx, 1 */
  ecx = 0x1u;
/* 8138d5: jmp 0x813916 */
  goto L_813916;
L_8138d7: /* 8138d7: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 8138da: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8138dd: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8138e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8138e1: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8138e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8138e5: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8138e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8138e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8138ea: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8138ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8138ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8138ef: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8138f2: xor ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 8138f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8138f6: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 8138f9: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8138fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8138fd: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8138ff: call 0x6ccb67 */
  esp -= 4; W32(esp, 0x813904u); SPILL(); f_6ccb67(); if (g_unwind) return; RELOAD();
/* 813904: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 813907: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813908: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 81390a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81390b: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
L_81390d: /* 81390d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_813910: /* 813910: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 813911: mov ecx, 8 */
  ecx = 0x8u;
L_813916: /* 813916: call 0x812fe0 */
  esp -= 4; W32(esp, 0x81391bu); SPILL(); f_812fe0(); if (g_unwind) return; RELOAD();
/* 81391b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81391e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_813921: /* 813921: cmp dword ptr [ebp - 0x14], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 813925: jl 0x813870 */
  if ((sf != of)) goto L_813870;
L_81392b: /* 81392b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81392e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 813935: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 813936: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 813937: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 813938: mov esp, ebp */
  esp = ebp;
/* 81393a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81393b: ret 0x20 */
  esp += 36; SPILL(); return;
L_81393e: /* 81393e: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 813941: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 813944: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 813947: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 813948: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 81394b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81394c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81394d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 813950: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 813951: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 813954: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 813955: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 813958: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 813959: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81395a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 81395d: xor ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 813960: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 813963: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 813964: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 813966: call 0x6ccb67 */
  esp -= 4; W32(esp, 0x81396bu); SPILL(); f_6ccb67(); if (g_unwind) return; RELOAD();
/* 81396b: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 81396e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 813971: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 813972: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 813974: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 813975: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 813977: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813978: mov ecx, 3 */
  ecx = 0x3u;
/* 81397d: jmp 0x813916 */
  goto L_813916;
L_81397f: /* 81397f: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 813982: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 813985: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 813988: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 813989: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 81398c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81398d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 813990: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813991: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 813994: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 813995: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 813998: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 813999: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81399a: xor ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 81399d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81399e: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 8139a1: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8139a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8139a5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8139a7: call 0x6ccb67 */
  esp -= 4; W32(esp, 0x8139acu); SPILL(); f_6ccb67(); if (g_unwind) return; RELOAD();
/* 8139ac: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 8139af: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 8139b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8139b3: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8139b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8139b6: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 8139b8: jmp 0x81390d */
  goto L_81390d;
L_8139bd: /* 8139bd: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8139c0: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8139c3: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 8139c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8139c7: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8139ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8139cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8139cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8139cd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8139d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8139d1: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8139d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8139d5: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 8139d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8139d9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8139dc: xor ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 8139df: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8139e2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8139e3: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8139e5: call 0x6ccb67 */
  esp -= 4; W32(esp, 0x8139eau); SPILL(); f_6ccb67(); if (g_unwind) return; RELOAD();
/* 8139ea: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8139ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8139ee: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8139f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8139f1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8139f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8139f4: mov ecx, 5 */
  ecx = 0x5u;
/* 8139f9: jmp 0x813916 */
  goto L_813916;
L_8139fe: /* 8139fe: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 813a01: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 813a04: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 813a07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813a08: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 813a0b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 813a0c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 813a0f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 813a10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 813a11: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 813a14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 813a15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813a16: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 813a19: xor ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 813a1c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 813a1d: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 813a20: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 813a23: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 813a24: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 813a26: call 0x6ccb67 */
  esp -= 4; W32(esp, 0x813a2bu); SPILL(); f_6ccb67(); if (g_unwind) return; RELOAD();
/* 813a2b: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 813a2e: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 813a31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813a32: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 813a34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 813a35: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 813a37: jmp 0x813910 */
  goto L_813910;
L_813a3c: /* 813a3c: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 813a3f: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 813a42: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 813a45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 813a46: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 813a49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 813a4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813a4b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 813a4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 813a4f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 813a52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 813a53: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 813a56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 813a57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813a58: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 813a5b: xor ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 813a5e: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 813a61: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 813a62: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 813a64: call 0x6ccb67 */
  esp -= 4; W32(esp, 0x813a69u); SPILL(); f_6ccb67(); if (g_unwind) return; RELOAD();
/* 813a69: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 813a6c: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 813a6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 813a70: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 813a72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 813a73: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 813a75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813a76: mov ecx, 7 */
  ecx = 0x7u;
/* 813a7b: jmp 0x813916 */
  goto L_813916;
L_813a80: /* 813a80: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 813a83: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 813a86: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 813a89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 813a8a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 813a8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 813a8e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 813a91: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813a92: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 813a95: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 813a96: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 813a99: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 813a9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 813a9b: xor ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 813a9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 813a9f: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 813aa2: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 813aa5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 813aa6: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 813aa8: call 0x6ccb67 */
  esp -= 4; W32(esp, 0x813aadu); SPILL(); f_6ccb67(); if (g_unwind) return; RELOAD();
/* 813aad: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 813ab0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 813ab7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 813ab8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 813ab9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 813aba: mov esp, ebp */
  esp = ebp;
/* 813abc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 813abd: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_813ac0(void) {
  LOAD_REGS();
L_813ac0: /* 813ac0: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 813ac3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 813ac8: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 813acb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813acc: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 813acf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x813ad4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_813ad4(); return;
}

void f_813ad4(void) {
  LOAD_REGS();
L_813ad4: /* 813ad4: push 0xa13c58 */
  { uint32_t v = 0xa13c58u; esp -= 4; W32(esp, v); }
/* 813ad9: push 0xae20bc */
  { uint32_t v = 0xae20bcu; esp -= 4; W32(esp, v); }
/* 813ade: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x813ae4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 813ae4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 813ae7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 813ae9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 813aeb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x813af0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 813af0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 813af2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 813af5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 813af6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 813af7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 813afe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 813aff: mov esp, ebp */
  esp = ebp;
/* 813b01: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 813b02: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_813ca0(void) {
  LOAD_REGS();
L_813ca0: /* 813ca0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 813ca1: mov ebp, esp */
  ebp = esp;
/* 813ca3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 813ca5: push 0x9d2a90 */
  { uint32_t v = 0x9d2a90u; esp -= 4; W32(esp, v); }
/* 813caa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 813cb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 813cb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 813cb8: sub esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 813cbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 813cbc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 813cbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 813cc0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 813cc1: xor edi, edi */
  edi = 0;
/* 813cc3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 813cc6: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 813cc9: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
L_813ccc: /* 813ccc: cmp edi, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 813ccf: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 813cd2: jge 0x813e3e */
  if ((sf == of)) goto L_813e3e;
L_813cd8: /* 813cd8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 813cda: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 813cdd: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 813ce0: cmp dword ptr [esi + 0x164], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x164u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 813ce6: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 813ce9: je 0x813e38 */
  if (zf) goto L_813e38;
L_813cef: /* 813cef: mov dword ptr [esi + 0x164], eax */
  W32((uint32_t)(esi + 0x164u), eax);
/* 813cf5: mov al, byte ptr [esi + 0x88] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x88u))) & 0xffu);
/* 813cfb: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 813cfd: jns 0x813e38 */
  if (!sf) goto L_813e38;
L_813d03: /* 813d03: mov eax, dword ptr [ebx + 0x64] */
  eax = R32((uint32_t)(ebx + 0x64u));
/* 813d06: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 813d08: je 0x813e38 */
  if (zf) goto L_813e38;
L_813d0e: /* 813d0e: mov edi, edi */
  edi = edi;
L_813d10: /* 813d10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 813d12: je 0x813d21 */
  if (zf) goto L_813d21;
L_813d14: /* 813d14: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 813d16: je 0x813e38 */
  if (zf) goto L_813e38;
L_813d1c: /* 813d1c: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 813d1f: jmp 0x813d10 */
  goto L_813d10;
L_813d21: /* 813d21: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 813d24: mov ecx, dword ptr [ebx + 0x64] */
  ecx = R32((uint32_t)(ebx + 0x64u));
/* 813d27: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 813d29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 813d2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813d2b: mov ecx, esi */
  ecx = esi;
/* 813d2d: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x813d33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 813d33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 813d35: je 0x813e35 */
  if (zf) goto L_813e35;
L_813d3b: /* 813d3b: fld dword ptr [ebx + 0x58] */
  { double v = F32((uint32_t)(ebx + 0x58u)); FPUSH(v); }
/* 813d3e: lea ecx, [esi + 0x144] */
  ecx = (uint32_t)(esi + 0x144u);
/* 813d44: fadd dword ptr [esi + 0x158] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x158u)));
/* 813d4a: lea eax, [ebx + 0x20] */
  eax = (uint32_t)(ebx + 0x20u);
/* 813d4d: fld dword ptr [ebx + 0x54] */
  { double v = F32((uint32_t)(ebx + 0x54u)); FPUSH(v); }
/* 813d50: lea edx, [ebx + 0x44] */
  edx = (uint32_t)(ebx + 0x44u);
/* 813d53: fadd dword ptr [esi + 0x154] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x154u)));
/* 813d59: lea edi, [ebx + 0x38] */
  edi = (uint32_t)(ebx + 0x38u);
/* 813d5c: fld dword ptr [ebx + 0x50] */
  { double v = F32((uint32_t)(ebx + 0x50u)); FPUSH(v); }
/* 813d5f: fadd dword ptr [esi + 0x150] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x150u)));
/* 813d65: lea esi, [ebp - 0x30] */
  esi = (uint32_t)(ebp + 0xffffffd0u);
/* 813d68: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 813d6b: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 813d6e: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 813d71: call 0x813120 */
  esp -= 4; W32(esp, 0x813d76u); SPILL(); f_813120(); if (g_unwind) return; RELOAD();
/* 813d76: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 813d78: je 0x813e32 */
  if (zf) goto L_813e32;
L_813d7e: /* 813d7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 813d80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 813d82: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 813d85: call 0x6c6a46 */
  esp -= 4; W32(esp, 0x813d8au); SPILL(); f_6c6a46(); if (g_unwind) return; RELOAD();
/* 813d8a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 813d8d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 813d8f: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x813d95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 813d95: mov ecx, dword ptr [ebx + 0x5c] */
  ecx = R32((uint32_t)(ebx + 0x5cu));
/* 813d98: mov esi, dword ptr [ebx + 0x50] */
  esi = R32((uint32_t)(ebx + 0x50u));
/* 813d9b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813d9c: mov ecx, dword ptr [ebx + 0x60] */
  ecx = R32((uint32_t)(ebx + 0x60u));
/* 813d9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813da0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 813da3: mov ecx, esp */
  ecx = esp;
/* 813da5: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 813da7: mov esi, dword ptr [ebx + 0x54] */
  esi = R32((uint32_t)(ebx + 0x54u));
/* 813daa: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 813dad: mov esi, dword ptr [ebx + 0x58] */
  esi = R32((uint32_t)(ebx + 0x58u));
/* 813db0: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 813db3: mov esi, dword ptr [ebx + 0x20] */
  esi = R32((uint32_t)(ebx + 0x20u));
/* 813db6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 813db8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 813dbb: mov ecx, esp */
  ecx = esp;
/* 813dbd: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 813dbf: mov esi, dword ptr [ebx + 0x24] */
  esi = R32((uint32_t)(ebx + 0x24u));
/* 813dc2: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 813dc5: mov esi, dword ptr [ebx + 0x28] */
  esi = R32((uint32_t)(ebx + 0x28u));
/* 813dc8: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 813dcb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 813dce: lea ecx, [ebx + 0x14] */
  ecx = (uint32_t)(ebx + 0x14u);
/* 813dd1: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 813dd3: mov esi, esp */
  esi = esp;
/* 813dd5: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 813dd7: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 813dda: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 813ddd: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 813de0: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 813de3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 813de6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813de7: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 813dea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813deb: mov ecx, eax */
  ecx = eax;
/* 813ded: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x813df0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 813df0: xor edx, edx */
  edx = 0;
/* 813df2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 813df4: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 813df7: mov eax, edx */
  eax = edx;
/* 813df9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 813dfb: je 0x813e32 */
  if (zf) goto L_813e32;
L_813dfd: /* 813dfd: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 813e00: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 813e02: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 813e04: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x813e0au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 813e0a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 813e0c: je 0x813e1c */
  if (zf) goto L_813e1c;
L_813e0e: /* 813e0e: mov ecx, 0xc */
  ecx = 0xcu;
/* 813e13: lea esi, [ebp - 0x70] */
  esi = (uint32_t)(ebp + 0xffffff90u);
/* 813e16: mov edi, eax */
  edi = eax;
/* 813e18: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 813e1a: jmp 0x813e1e */
  goto L_813e1e;
L_813e1c: /* 813e1c: xor eax, eax */
  eax = 0;
L_813e1e: /* 813e1e: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 813e21: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 813e23: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 813e26: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 813e29: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 813e2c: jne 0x813f1b */
  if (!zf) goto L_813f1b;
L_813e32: /* 813e32: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
L_813e35: /* 813e35: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_813e38: /* 813e38: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 813e39: jmp 0x813ccc */
  goto L_813ccc;
L_813e3e: /* 813e3e: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 813e41: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 813e43: je 0x813f1b */
  if (zf) goto L_813f1b;
L_813e49: /* 813e49: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 813e4c: lea edx, [ebx + 0x6c] */
  edx = (uint32_t)(ebx + 0x6cu);
/* 813e4f: lea edi, [ebp - 0x60] */
  edi = (uint32_t)(ebp + 0xffffffa0u);
/* 813e52: call 0x812b30 */
  esp -= 4; W32(esp, 0x813e57u); SPILL(); f_812b30(); if (g_unwind) return; RELOAD();
/* 813e57: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 813e5a: xor eax, eax */
  eax = 0;
/* 813e5c: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 813e5f: nop  */
L_813e60: /* 813e60: cmp eax, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 813e63: jge 0x813f1b */
  if ((sf == of)) goto L_813f1b;
L_813e69: /* 813e69: mov eax, dword ptr [ebp + eax*4 - 0x60] */
  eax = R32((uint32_t)(ebp + eax*4 + 0xffffffa0u));
/* 813e6d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 813e70: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 813e73: mov edx, eax */
  edx = eax;
/* 813e75: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 813e7b: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 813e7d: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 813e80: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 813e81: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 813e84: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 813e87: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 813e8a: mov edx, eax */
  edx = eax;
/* 813e8c: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 813e8f: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 813e90: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 813e93: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 813e96: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 813e99: lea eax, [eax + eax - 1] */
  eax = (uint32_t)(eax + eax + 0xffffffffu);
/* 813e9d: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 813e9f: lea edx, [ebx + 0x44] */
  edx = (uint32_t)(ebx + 0x44u);
/* 813ea2: lea edi, [ebx + 0x38] */
  edi = (uint32_t)(ebx + 0x38u);
/* 813ea5: lea esi, [ebp - 0x30] */
  esi = (uint32_t)(ebp + 0xffffffd0u);
/* 813ea8: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 813eab: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 813eae: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 813eb1: lea eax, [ebx + 0x20] */
  eax = (uint32_t)(ebx + 0x20u);
/* 813eb4: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 813eb7: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 813eba: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 813ebd: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 813ec0: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 813ec3: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 813ec6: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 813ec9: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 813ecc: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 813ecf: fadd dword ptr [ebx + 0x58] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x58u)));
/* 813ed2: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 813ed5: fadd dword ptr [ebx + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x54u)));
/* 813ed8: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 813edb: fadd dword ptr [ebx + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x50u)));
/* 813ede: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 813ee1: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 813ee4: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 813ee7: call 0x813120 */
  esp -= 4; W32(esp, 0x813eecu); SPILL(); f_813120(); if (g_unwind) return; RELOAD();
/* 813eec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 813eee: je 0x813f5e */
  if (zf) goto L_813f5e;
L_813ef0: /* 813ef0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 813ef3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 813ef6: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 813ef9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813efa: mov ecx, dword ptr [ebp + edx*4 - 0x60] */
  ecx = R32((uint32_t)(ebp + edx*4 + 0xffffffa0u));
/* 813efe: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 813f01: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 813f04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 813f05: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 813f07: call 0x6c7a8b */
  esp -= 4; W32(esp, 0x813f0cu); SPILL(); f_6c7a8b(); if (g_unwind) return; RELOAD();
/* 813f0c: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 813f0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 813f11: je 0x813f5e */
  if (zf) goto L_813f5e;
L_813f13: /* 813f13: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 813f16: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 813f19: je 0x813f5e */
  if (zf) goto L_813f5e;
L_813f1b: /* 813f1b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 813f1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 813f1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 813f20: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 813f27: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 813f28: mov esp, ebp */
  esp = ebp;
/* 813f2a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 813f2b: ret 8 */
  esp += 12; SPILL(); return;
L_813f5e: /* 813f5e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 813f61: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 813f62: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 813f65: jmp 0x813e60 */
  goto L_813e60;
}

void f_813f2e(void) {
  LOAD_REGS();
L_813f2e: /* 813f2e: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 813f31: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 813f36: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 813f39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 813f3a: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 813f3d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x813f42u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_813f42(); return;
}

void f_813f42(void) {
  LOAD_REGS();
  goto L_813f42;
L_813e60: /* 813e60: cmp eax, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 813e63: jge 0x813f1b */
  if ((sf == of)) goto L_813f1b;
L_813e69: /* 813e69: mov eax, dword ptr [ebp + eax*4 - 0x60] */
  eax = R32((uint32_t)(ebp + eax*4 + 0xffffffa0u));
/* 813e6d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 813e70: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 813e73: mov edx, eax */
  edx = eax;
/* 813e75: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 813e7b: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 813e7d: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 813e80: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 813e81: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 813e84: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 813e87: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 813e8a: mov edx, eax */
  edx = eax;
/* 813e8c: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 813e8f: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 813e90: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 813e93: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 813e96: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 813e99: lea eax, [eax + eax - 1] */
  eax = (uint32_t)(eax + eax + 0xffffffffu);
/* 813e9d: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 813e9f: lea edx, [ebx + 0x44] */
  edx = (uint32_t)(ebx + 0x44u);
/* 813ea2: lea edi, [ebx + 0x38] */
  edi = (uint32_t)(ebx + 0x38u);
/* 813ea5: lea esi, [ebp - 0x30] */
  esi = (uint32_t)(ebp + 0xffffffd0u);
/* 813ea8: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 813eab: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 813eae: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 813eb1: lea eax, [ebx + 0x20] */
  eax = (uint32_t)(ebx + 0x20u);
/* 813eb4: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 813eb7: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 813eba: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 813ebd: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 813ec0: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 813ec3: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 813ec6: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 813ec9: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 813ecc: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 813ecf: fadd dword ptr [ebx + 0x58] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x58u)));
/* 813ed2: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 813ed5: fadd dword ptr [ebx + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x54u)));
/* 813ed8: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 813edb: fadd dword ptr [ebx + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x50u)));
/* 813ede: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 813ee1: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 813ee4: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 813ee7: call 0x813120 */
  esp -= 4; W32(esp, 0x813eecu); SPILL(); f_813120(); if (g_unwind) return; RELOAD();
/* 813eec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 813eee: je 0x813f5e */
  if (zf) goto L_813f5e;
L_813ef0: /* 813ef0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 813ef3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 813ef6: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 813ef9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 813efa: mov ecx, dword ptr [ebp + edx*4 - 0x60] */
  ecx = R32((uint32_t)(ebp + edx*4 + 0xffffffa0u));
/* 813efe: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 813f01: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 813f04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 813f05: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 813f07: call 0x6c7a8b */
  esp -= 4; W32(esp, 0x813f0cu); SPILL(); f_6c7a8b(); if (g_unwind) return; RELOAD();
/* 813f0c: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 813f0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 813f11: je 0x813f5e */
  if (zf) goto L_813f5e;
L_813f13: /* 813f13: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 813f16: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 813f19: je 0x813f5e */
  if (zf) goto L_813f5e;
L_813f1b: /* 813f1b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 813f1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 813f1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 813f20: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 813f27: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 813f28: mov esp, ebp */
  esp = ebp;
/* 813f2a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 813f2b: ret 8 */
  esp += 12; SPILL(); return;
L_813f42: /* 813f42: push 0xa13cb8 */
  { uint32_t v = 0xa13cb8u; esp -= 4; W32(esp, v); }
/* 813f47: push 0xae20c4 */
  { uint32_t v = 0xae20c4u; esp -= 4; W32(esp, v); }
/* 813f4c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x813f52u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 813f52: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 813f55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 813f57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 813f59: call 0x99caf8 */
  esp -= 4; W32(esp, 0x813f5eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_813f5e: /* 813f5e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 813f61: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 813f62: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 813f65: jmp 0x813e60 */
  goto L_813e60;
}

void f_814030(void) {
  LOAD_REGS();
L_814030: /* 814030: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 814031: mov ebp, esp */
  ebp = esp;
/* 814033: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 814035: push 0x9d2aa0 */
  { uint32_t v = 0x9d2aa0u; esp -= 4; W32(esp, v); }
/* 81403a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 814040: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 814041: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 814048: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81404b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81404c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 81404f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 814050: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 814051: mov edi, ecx */
  edi = ecx;
/* 814053: xor eax, eax */
  eax = 0;
/* 814055: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 814058: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 81405b: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_81405e: /* 81405e: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 814061: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 814064: jge 0x8141a3 */
  if ((sf == of)) goto L_8141a3;
L_81406a: /* 81406a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 81406c: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 81406f: mov edx, dword ptr [esi + 0x164] */
  edx = R32((uint32_t)(esi + 0x164u));
/* 814075: cmp edx, dword ptr [ebx + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 814078: je 0x81419a */
  if (zf) goto L_81419a;
L_81407e: /* 81407e: mov eax, dword ptr [ebx + 0x64] */
  eax = R32((uint32_t)(ebx + 0x64u));
/* 814081: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 814082: mov ecx, esi */
  ecx = esi;
/* 814084: call 0x6c2626 */
  esp -= 4; W32(esp, 0x814089u); SPILL(); f_6c2626(); if (g_unwind) return; RELOAD();
/* 814089: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81408b: jne 0x81419a */
  if (!zf) goto L_81419a;
L_814091: /* 814091: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 814094: mov ecx, dword ptr [ebx + 0x64] */
  ecx = R32((uint32_t)(ebx + 0x64u));
/* 814097: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 814099: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81409a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81409b: mov ecx, esi */
  ecx = esi;
/* 81409d: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x8140a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8140a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8140a5: je 0x81419a */
  if (zf) goto L_81419a;
L_8140ab: /* 8140ab: mov edi, dword ptr [ebx + 0x64] */
  edi = R32((uint32_t)(ebx + 0x64u));
/* 8140ae: test byte ptr [edi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8140b5: je 0x8140f8 */
  if (zf) goto L_8140f8;
L_8140b7: /* 8140b7: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 8140ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8140bc: je 0x8140cc */
  if (zf) goto L_8140cc;
L_8140be: /* 8140be: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8140c0: mov ecx, edi */
  ecx = edi;
/* 8140c2: call dword ptr [edx + 0x178] */
  { uint32_t t = R32((uint32_t)(edx + 0x178u)); esp -= 4; W32(esp, 0x8140c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8140c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8140ca: jne 0x8140e8 */
  if (!zf) goto L_8140e8;
L_8140cc: /* 8140cc: mov al, byte ptr [edi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x50u))) & 0xffu);
/* 8140cf: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8140d1: je 0x8140e8 */
  if (zf) goto L_8140e8;
L_8140d3: /* 8140d3: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8140d5: jne 0x8140f8 */
  if (!zf) goto L_8140f8;
L_8140d7: /* 8140d7: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 8140dc: mov ecx, edi */
  ecx = edi;
/* 8140de: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8140e4u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8140e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8140e6: jne 0x8140f8 */
  if (!zf) goto L_8140f8;
L_8140e8: /* 8140e8: test dword ptr [esi + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8140f2: jne 0x814197 */
  if (!zf) goto L_814197;
L_8140f8: /* 8140f8: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 8140fb: lea ecx, [ebx + 0x6c] */
  ecx = (uint32_t)(ebx + 0x6cu);
/* 8140fe: lea edx, [esi + 0x128] */
  edx = (uint32_t)(esi + 0x128u);
/* 814104: mov dword ptr [esi + 0x164], eax */
  W32((uint32_t)(esi + 0x164u), eax);
/* 81410a: call 0x8128c0 */
  esp -= 4; W32(esp, 0x81410fu); SPILL(); f_8128c0(); if (g_unwind) return; RELOAD();
/* 81410f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 814111: je 0x814197 */
  if (zf) goto L_814197;
L_814117: /* 814117: xor edi, edi */
  edi = 0;
/* 814119: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 81411c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81411d: mov ecx, dword ptr [ebx + 0x64] */
  ecx = R32((uint32_t)(ebx + 0x64u));
/* 814120: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 814121: mov dword ptr [ebp - 0x60], edi */
  W32((uint32_t)(ebp + 0xffffffa0u), edi);
/* 814124: mov dword ptr [ebp - 0x5c], edi */
  W32((uint32_t)(ebp + 0xffffffa4u), edi);
/* 814127: mov dword ptr [ebp - 0x58], edi */
  W32((uint32_t)(ebp + 0xffffffa8u), edi);
/* 81412a: mov dword ptr [ebp - 0x54], edi */
  W32((uint32_t)(ebp + 0xffffffacu), edi);
/* 81412d: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* 814130: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 814133: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 814136: mov dword ptr [ebp - 0x44], edi */
  W32((uint32_t)(ebp + 0xffffffbcu), edi);
/* 814139: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 81413c: mov dword ptr [ebp - 0x3c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x3f800000u);
/* 814143: mov dword ptr [ebp - 0x38], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffc8u), 0xffffffffu);
/* 81414a: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 81414d: call 0x6c2540 */
  esp -= 4; W32(esp, 0x814152u); SPILL(); f_6c2540(); if (g_unwind) return; RELOAD();
/* 814152: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 814154: je 0x814197 */
  if (zf) goto L_814197;
L_814156: /* 814156: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 814159: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 81415b: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 81415d: mov dword ptr [ebp - 0x5c], esi */
  W32((uint32_t)(ebp + 0xffffffa4u), esi);
/* 814160: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 814163: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x814169u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 814169: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81416b: je 0x81418d */
  if (zf) goto L_81418d;
L_81416d: /* 81416d: mov edi, eax */
  edi = eax;
/* 81416f: mov ecx, 0xc */
  ecx = 0xcu;
/* 814174: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 814177: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 814179: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 81417c: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 81417f: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 814181: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 814184: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 814187: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 814188: jmp 0x81405e */
  goto L_81405e;
L_81418d: /* 81418d: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 814190: xor eax, eax */
  eax = 0;
/* 814192: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 814194: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
L_814197: /* 814197: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_81419a: /* 81419a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81419d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 81419e: jmp 0x81405e */
  goto L_81405e;
L_8141a3: /* 8141a3: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 8141a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8141a8: je 0x814265 */
  if (zf) goto L_814265;
L_8141ae: /* 8141ae: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8141b1: lea edx, [ebx + 0x6c] */
  edx = (uint32_t)(ebx + 0x6cu);
/* 8141b4: lea edi, [ebp - 0x50] */
  edi = (uint32_t)(ebp + 0xffffffb0u);
/* 8141b7: call 0x812b30 */
  esp -= 4; W32(esp, 0x8141bcu); SPILL(); f_812b30(); if (g_unwind) return; RELOAD();
/* 8141bc: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 8141bf: xor edi, edi */
  edi = 0;
L_8141c1: /* 8141c1: cmp edi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8141c4: jge 0x814265 */
  if ((sf == of)) goto L_814265;
L_8141ca: /* 8141ca: mov ecx, dword ptr [ebp + edi*4 - 0x50] */
  ecx = R32((uint32_t)(ebp + edi*4 + 0xffffffb0u));
/* 8141ce: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8141d1: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8141d7: mov eax, ecx */
  eax = ecx;
/* 8141d9: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8141db: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8141de: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8141e1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8141e2: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8141e5: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8141e8: mov edx, ecx */
  edx = ecx;
/* 8141ea: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8141ed: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8141ee: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8141f1: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 8141f4: mov eax, ecx */
  eax = ecx;
/* 8141f6: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8141f9: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 8141fb: lea edx, [eax + eax - 1] */
  edx = (uint32_t)(eax + eax + 0xffffffffu);
/* 8141ff: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 814202: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 814203: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 814206: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 814209: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 81420c: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 81420f: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 814212: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 814215: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 814218: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 814219: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81421b: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 81421e: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 814221: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 814224: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 814227: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 81422a: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 81422d: call 0x6cb83e */
  esp -= 4; W32(esp, 0x814232u); SPILL(); f_6cb83e(); if (g_unwind) return; RELOAD();
/* 814232: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 814233: jmp 0x8141c1 */
  goto L_8141c1;
L_814265: /* 814265: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 814268: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 814269: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81426a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 814271: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 814272: mov esp, ebp */
  esp = ebp;
/* 814274: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 814275: ret 8 */
  esp += 12; SPILL(); return;
}

void f_814235(void) {
  LOAD_REGS();
L_814235: /* 814235: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 814238: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81423d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 814240: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 814241: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 814244: call 0x99caf8 */
  esp -= 4; W32(esp, 0x814249u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_814249(); return;
}

void f_814249(void) {
  LOAD_REGS();
L_814249: /* 814249: push 0xa13d20 */
  { uint32_t v = 0xa13d20u; esp -= 4; W32(esp, v); }
/* 81424e: push 0xae20cc */
  { uint32_t v = 0xae20ccu; esp -= 4; W32(esp, v); }
/* 814253: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x814259u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 814259: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81425c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81425e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 814260: call 0x99caf8 */
  esp -= 4; W32(esp, 0x814265u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 814265: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 814268: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 814269: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81426a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 814271: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 814272: mov esp, ebp */
  esp = ebp;
/* 814274: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 814275: ret 8 */
  esp += 12; SPILL(); return;
}

void f_814320(void) {
  LOAD_REGS();
L_814320: /* 814320: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 814321: mov ebp, esp */
  ebp = esp;
/* 814323: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 814325: push 0x9d2ab0 */
  { uint32_t v = 0x9d2ab0u; esp -= 4; W32(esp, v); }
/* 81432a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 814330: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 814331: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 814338: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81433b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81433c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 81433f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 814340: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 814341: xor edi, edi */
  edi = 0;
/* 814343: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 814346: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 814349: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 81434c: xor eax, eax */
  eax = 0;
L_81434e: /* 81434e: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 814351: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 814354: jge 0x8144a5 */
  if ((sf == of)) goto L_8144a5;
L_81435a: /* 81435a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81435c: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 81435f: mov al, byte ptr [esi + 0x88] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x88u))) & 0xffu);
/* 814365: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 814367: jns 0x81449c */
  if (!sf) goto L_81449c;
L_81436d: /* 81436d: mov eax, dword ptr [esi + 0x164] */
  eax = R32((uint32_t)(esi + 0x164u));
/* 814373: cmp eax, dword ptr [ebx + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 814376: je 0x81449c */
  if (zf) goto L_81449c;
L_81437c: /* 81437c: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 81437f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 814381: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 814382: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 814383: mov ecx, esi */
  ecx = esi;
/* 814385: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x81438bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81438b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81438d: je 0x814499 */
  if (zf) goto L_814499;
L_814393: /* 814393: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 814396: mov dword ptr [esi + 0x164], ecx */
  W32((uint32_t)(esi + 0x164u), ecx);
/* 81439c: lea ecx, [ebx + 0x6c] */
  ecx = (uint32_t)(ebx + 0x6cu);
/* 81439f: lea edx, [esi + 0x128] */
  edx = (uint32_t)(esi + 0x128u);
/* 8143a5: call 0x8128c0 */
  esp -= 4; W32(esp, 0x8143aau); SPILL(); f_8128c0(); if (g_unwind) return; RELOAD();
/* 8143aa: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8143ac: je 0x814499 */
  if (zf) goto L_814499;
L_8143b2: /* 8143b2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8143b4: mov ecx, esi */
  ecx = esi;
/* 8143b6: mov dword ptr [ebp - 0x60], edi */
  W32((uint32_t)(ebp + 0xffffffa0u), edi);
/* 8143b9: mov dword ptr [ebp - 0x5c], edi */
  W32((uint32_t)(ebp + 0xffffffa4u), edi);
/* 8143bc: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 8143c3: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 8143ca: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 8143d1: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 8143d8: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 8143df: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 8143e6: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 8143e9: mov dword ptr [ebp - 0x3c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x3f800000u);
/* 8143f0: mov dword ptr [ebp - 0x38], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffc8u), 0xffffffffu);
/* 8143f7: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 8143fa: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x814400u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 814400: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 814401: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 814404: mov edx, esp */
  edx = esp;
/* 814406: lea ecx, [ebx + 0x50] */
  ecx = (uint32_t)(ebx + 0x50u);
/* 814409: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 81440b: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 81440d: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 814410: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 814413: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 814416: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 814419: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81441c: lea edx, [ebx + 0x20] */
  edx = (uint32_t)(ebx + 0x20u);
/* 81441f: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 814421: mov ecx, esp */
  ecx = esp;
/* 814423: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 814425: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 814428: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 81442b: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 81442e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 814431: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 814434: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 814436: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 814437: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 81443a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81443b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 81443e: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x814441u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 814441: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 814443: jne 0x814497 */
  if (!zf) goto L_814497;
L_814445: /* 814445: cmp dword ptr [ebp - 0x5c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 814448: je 0x814462 */
  if (zf) goto L_814462;
L_81444a: /* 81444a: push 0x4ba */
  { uint32_t v = 0x4bau; esp -= 4; W32(esp, v); }
/* 81444f: push 0xae20d4 */
  { uint32_t v = 0xae20d4u; esp -= 4; W32(esp, v); }
/* 814454: push 0xae20e4 */
  { uint32_t v = 0xae20e4u; esp -= 4; W32(esp, v); }
/* 814459: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x81445fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 81445f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_814462: /* 814462: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 814465: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 814467: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 814469: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x81446fu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 81446f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 814471: je 0x814481 */
  if (zf) goto L_814481;
L_814473: /* 814473: mov ecx, 0xc */
  ecx = 0xcu;
/* 814478: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 81447b: mov edi, eax */
  edi = eax;
/* 81447d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 81447f: jmp 0x814483 */
  goto L_814483;
L_814481: /* 814481: xor eax, eax */
  eax = 0;
L_814483: /* 814483: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 814486: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 814488: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 81448b: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 81448e: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 814491: jne 0x814565 */
  if (!zf) goto L_814565;
L_814497: /* 814497: xor edi, edi */
  edi = 0;
L_814499: /* 814499: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_81449c: /* 81449c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81449f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8144a0: jmp 0x81434e */
  goto L_81434e;
L_8144a5: /* 8144a5: cmp dword ptr [ecx + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8144a8: je 0x814565 */
  if (zf) goto L_814565;
L_8144ae: /* 8144ae: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8144b1: lea edx, [ebx + 0x6c] */
  edx = (uint32_t)(ebx + 0x6cu);
/* 8144b4: lea edi, [ebp - 0x50] */
  edi = (uint32_t)(ebp + 0xffffffb0u);
/* 8144b7: call 0x812b30 */
  esp -= 4; W32(esp, 0x8144bcu); SPILL(); f_812b30(); if (g_unwind) return; RELOAD();
/* 8144bc: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 8144bf: xor edi, edi */
  edi = 0;
L_8144c1: /* 8144c1: cmp edi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8144c4: jge 0x814565 */
  if ((sf == of)) goto L_814565;
L_8144ca: /* 8144ca: mov ecx, dword ptr [ebp + edi*4 - 0x50] */
  ecx = R32((uint32_t)(ebp + edi*4 + 0xffffffb0u));
/* 8144ce: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8144d1: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8144d7: mov eax, ecx */
  eax = ecx;
/* 8144d9: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8144db: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8144de: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8144e1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8144e2: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8144e5: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8144e8: mov edx, ecx */
  edx = ecx;
/* 8144ea: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8144ed: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8144ee: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8144f1: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 8144f4: mov eax, ecx */
  eax = ecx;
/* 8144f6: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8144f9: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 8144fb: lea edx, [eax + eax - 1] */
  edx = (uint32_t)(eax + eax + 0xffffffffu);
/* 8144ff: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 814502: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 814503: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 814506: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 814509: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 81450c: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 81450f: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 814512: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 814515: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 814518: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 814519: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81451b: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 81451e: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 814521: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 814524: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 814527: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 81452a: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 81452d: call 0x6c9480 */
  esp -= 4; W32(esp, 0x814532u); SPILL(); f_6c9480(); if (g_unwind) return; RELOAD();
/* 814532: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 814533: jmp 0x8144c1 */
  goto L_8144c1;
L_814565: /* 814565: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 814568: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 814569: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81456a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 814571: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 814572: mov esp, ebp */
  esp = ebp;
/* 814574: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 814575: ret 8 */
  esp += 12; SPILL(); return;
}

void f_814535(void) {
  LOAD_REGS();
L_814535: /* 814535: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 814538: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81453d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 814540: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 814541: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 814544: call 0x99caf8 */
  esp -= 4; W32(esp, 0x814549u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_814549(); return;
}

void f_814549(void) {
  LOAD_REGS();
L_814549: /* 814549: push 0xa13d78 */
  { uint32_t v = 0xa13d78u; esp -= 4; W32(esp, v); }
/* 81454e: push 0xae2100 */
  { uint32_t v = 0xae2100u; esp -= 4; W32(esp, v); }
/* 814553: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x814559u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 814559: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81455c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81455e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 814560: call 0x99caf8 */
  esp -= 4; W32(esp, 0x814565u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 814565: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 814568: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 814569: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81456a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 814571: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 814572: mov esp, ebp */
  esp = ebp;
/* 814574: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 814575: ret 8 */
  esp += 12; SPILL(); return;
}

void f_814620(void) {
  LOAD_REGS();
L_814620: /* 814620: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 814621: mov ebp, esp */
  ebp = esp;
/* 814623: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 814625: push 0x9d2ac0 */
  { uint32_t v = 0x9d2ac0u; esp -= 4; W32(esp, v); }
/* 81462a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 814630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 814631: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 814638: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81463b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81463c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 81463f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 814640: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 814641: xor eax, eax */
  eax = 0;
/* 814643: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 814646: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 814649: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_81464c: /* 81464c: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81464f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 814652: jge 0x8146f9 */
  if ((sf == of)) goto L_8146f9;
L_814658: /* 814658: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81465a: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 81465d: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 814660: cmp dword ptr [eax + 0x164], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x164u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 814666: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 814669: je 0x8146f0 */
  if (zf) goto L_8146f0;
L_81466f: /* 81466f: lea esi, [eax + 0x128] */
  esi = (uint32_t)(eax + 0x128u);
/* 814675: mov dword ptr [eax + 0x164], edx */
  W32((uint32_t)(eax + 0x164u), edx);
/* 81467b: mov ecx, 7 */
  ecx = 0x7u;
/* 814680: lea edi, [ebp - 0x5c] */
  edi = (uint32_t)(ebp + 0xffffffa4u);
/* 814683: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 814686: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 814688: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 814689: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 81468c: call dword ptr [0xcfa34c] */
  esp -= 4; W32(esp, 0x814692u); SPILL(); f_4e3139(); if (g_unwind) return; /* Core!?GetCenter@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 814692: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 814695: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 814698: fsub dword ptr [ebx + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x28u)));
/* 81469b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 81469e: fsub dword ptr [ebx + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x24u)));
/* 8146a1: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8146a4: fsub dword ptr [ebx + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x20u)));
/* 8146a7: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8146aa: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8146ad: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8146b0: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8146b6u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8146b6: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 8146b9: fcomp dword ptr [ebx + 0x68] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x68u)));
  FPOP();
/* 8146bc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8146be: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8146c1: jp 0x8146ed */
  if (pf) goto L_8146ed;
L_8146c3: /* 8146c3: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 8146c6: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8146c8: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 8146ca: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8146d0u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8146d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8146d2: je 0x8146dd */
  if (zf) goto L_8146dd;
L_8146d4: /* 8146d4: mov dword ptr [eax + 0x2c], 0 */
  W32((uint32_t)(eax + 0x2cu), 0x0u);
/* 8146db: jmp 0x8146df */
  goto L_8146df;
L_8146dd: /* 8146dd: xor eax, eax */
  eax = 0;
L_8146df: /* 8146df: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8146e2: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8146e5: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 8146e8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8146ea: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
L_8146ed: /* 8146ed: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8146f0: /* 8146f0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8146f3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8146f4: jmp 0x81464c */
  goto L_81464c;
L_8146f9: /* 8146f9: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 8146fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8146fe: je 0x8147bb */
  if (zf) goto L_8147bb;
L_814704: /* 814704: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 814707: lea edx, [ebx + 0x6c] */
  edx = (uint32_t)(ebx + 0x6cu);
/* 81470a: lea edi, [ebp - 0x60] */
  edi = (uint32_t)(ebp + 0xffffffa0u);
/* 81470d: call 0x812b30 */
  esp -= 4; W32(esp, 0x814712u); SPILL(); f_812b30(); if (g_unwind) return; RELOAD();
/* 814712: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 814715: xor edi, edi */
  edi = 0;
L_814717: /* 814717: cmp edi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81471a: jge 0x8147bb */
  if ((sf == of)) goto L_8147bb;
L_814720: /* 814720: mov ecx, dword ptr [ebp + edi*4 - 0x60] */
  ecx = R32((uint32_t)(ebp + edi*4 + 0xffffffa0u));
/* 814724: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 814727: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 81472d: mov eax, ecx */
  eax = ecx;
/* 81472f: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 814731: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 814734: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 814737: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 814738: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 81473b: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 81473e: mov edx, ecx */
  edx = ecx;
/* 814740: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 814743: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 814744: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 814747: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 81474a: mov eax, ecx */
  eax = ecx;
/* 81474c: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 81474f: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 814751: lea edx, [eax + eax - 1] */
  edx = (uint32_t)(eax + eax + 0xffffffffu);
/* 814755: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 814758: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 814759: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 81475c: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 81475f: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 814762: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 814765: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 814768: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 81476b: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 81476e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81476f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 814771: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 814774: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 814777: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 81477a: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 81477d: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 814780: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 814783: call 0x6c32f6 */
  esp -= 4; W32(esp, 0x814788u); SPILL(); f_6c32f6(); if (g_unwind) return; RELOAD();
/* 814788: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 814789: jmp 0x814717 */
  goto L_814717;
L_8147bb: /* 8147bb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8147be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8147bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8147c0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8147c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8147c8: mov esp, ebp */
  esp = ebp;
/* 8147ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8147cb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_81478b(void) {
  LOAD_REGS();
L_81478b: /* 81478b: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81478e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 814793: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 814796: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 814797: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 81479a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81479fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81479f(); return;
}

void f_81479f(void) {
  LOAD_REGS();
L_81479f: /* 81479f: push 0xa13dc0 */
  { uint32_t v = 0xa13dc0u; esp -= 4; W32(esp, v); }
/* 8147a4: push 0xae2108 */
  { uint32_t v = 0xae2108u; esp -= 4; W32(esp, v); }
/* 8147a9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8147afu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8147af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8147b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8147b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8147b6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8147bbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8147bb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8147be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8147bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8147c0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8147c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8147c8: mov esp, ebp */
  esp = ebp;
/* 8147ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8147cb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_814840(void) {
  LOAD_REGS();
L_814840: /* 814840: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 814841: mov ebp, esp */
  ebp = esp;
/* 814843: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 814845: push 0x9d2ad0 */
  { uint32_t v = 0x9d2ad0u; esp -= 4; W32(esp, v); }
/* 81484a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 814850: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 814851: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 814858: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81485b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81485c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 81485f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 814860: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 814861: xor edi, edi */
  edi = 0;
/* 814863: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 814866: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 814869: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 81486c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_814870: /* 814870: cmp edi, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 814873: jge 0x8148fa */
  if ((sf == of)) goto L_8148fa;
L_814879: /* 814879: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 81487b: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 81487e: cmp esi, dword ptr [ebx + 0x64] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 814881: je 0x8148f4 */
  if (zf) goto L_8148f4;
L_814883: /* 814883: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 814886: cmp dword ptr [esi + 0x164], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x164u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81488c: je 0x8148f4 */
  if (zf) goto L_8148f4;
L_81488e: /* 81488e: mov dword ptr [esi + 0x164], eax */
  W32((uint32_t)(esi + 0x164u), eax);
/* 814894: mov eax, dword ptr [ebx + 0x88] */
  eax = R32((uint32_t)(ebx + 0x88u));
/* 81489a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81489c: je 0x8148a9 */
  if (zf) goto L_8148a9;
L_81489e: /* 81489e: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 8148a4: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8148a7: je 0x8148f4 */
  if (zf) goto L_8148f4;
L_8148a9: /* 8148a9: lea ecx, [ebx + 0x6c] */
  ecx = (uint32_t)(ebx + 0x6cu);
/* 8148ac: lea edx, [esi + 0x128] */
  edx = (uint32_t)(esi + 0x128u);
/* 8148b2: call 0x8128c0 */
  esp -= 4; W32(esp, 0x8148b7u); SPILL(); f_8128c0(); if (g_unwind) return; RELOAD();
/* 8148b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8148b9: je 0x8148f1 */
  if (zf) goto L_8148f1;
L_8148bb: /* 8148bb: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 8148be: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8148c0: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 8148c2: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8148c8u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8148c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8148ca: je 0x8148e4 */
  if (zf) goto L_8148e4;
L_8148cc: /* 8148cc: mov dword ptr [eax + 0x2c], 0 */
  W32((uint32_t)(eax + 0x2cu), 0x0u);
/* 8148d3: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 8148d6: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 8148d9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8148db: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8148de: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 8148e1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8148e2: jmp 0x814870 */
  goto L_814870;
L_8148e4: /* 8148e4: xor eax, eax */
  eax = 0;
/* 8148e6: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 8148e9: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 8148ec: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8148ee: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
L_8148f1: /* 8148f1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_8148f4: /* 8148f4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8148f5: jmp 0x814870 */
  goto L_814870;
L_8148fa: /* 8148fa: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 8148fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8148ff: je 0x8149c4 */
  if (zf) goto L_8149c4;
L_814905: /* 814905: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 814908: lea edx, [ebx + 0x6c] */
  edx = (uint32_t)(ebx + 0x6cu);
/* 81490b: lea edi, [ebp - 0x4c] */
  edi = (uint32_t)(ebp + 0xffffffb4u);
/* 81490e: call 0x812b30 */
  esp -= 4; W32(esp, 0x814913u); SPILL(); f_812b30(); if (g_unwind) return; RELOAD();
/* 814913: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 814916: xor edi, edi */
  edi = 0;
/* 814918: jmp 0x814920 */
  goto L_814920;
L_814920: /* 814920: cmp edi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 814923: jge 0x8149c4 */
  if ((sf == of)) goto L_8149c4;
L_814929: /* 814929: mov ecx, dword ptr [ebp + edi*4 - 0x4c] */
  ecx = R32((uint32_t)(ebp + edi*4 + 0xffffffb4u));
/* 81492d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 814930: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 814936: mov edx, ecx */
  edx = ecx;
/* 814938: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 81493a: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 81493d: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 814940: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 814941: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 814944: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 814947: mov eax, ecx */
  eax = ecx;
/* 814949: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 81494c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 81494d: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 814950: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 814953: mov edx, ecx */
  edx = ecx;
/* 814955: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 814958: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 81495a: lea eax, [edx + edx - 1] */
  eax = (uint32_t)(edx + edx + 0xffffffffu);
/* 81495e: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 814961: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 814962: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 814965: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 814968: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 81496b: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 81496e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 814971: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 814974: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 814977: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 814978: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81497a: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 81497d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 814980: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 814983: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 814986: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 814989: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 81498c: call 0x6cb410 */
  esp -= 4; W32(esp, 0x814991u); SPILL(); f_6cb410(); if (g_unwind) return; RELOAD();
/* 814991: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 814992: jmp 0x814920 */
  goto L_814920;
L_8149c4: /* 8149c4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8149c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8149c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8149c9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8149d0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8149d1: mov esp, ebp */
  esp = ebp;
/* 8149d3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8149d4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_81491a(void) {
  LOAD_REGS();
L_81491a: /* 81491a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_814920: /* 814920: cmp edi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 814923: jge 0x8149c4 */
  if ((sf == of)) goto L_8149c4;
L_814929: /* 814929: mov ecx, dword ptr [ebp + edi*4 - 0x4c] */
  ecx = R32((uint32_t)(ebp + edi*4 + 0xffffffb4u));
/* 81492d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 814930: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 814936: mov edx, ecx */
  edx = ecx;
/* 814938: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 81493a: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 81493d: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 814940: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 814941: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 814944: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 814947: mov eax, ecx */
  eax = ecx;
/* 814949: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 81494c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 81494d: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 814950: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 814953: mov edx, ecx */
  edx = ecx;
/* 814955: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 814958: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 81495a: lea eax, [edx + edx - 1] */
  eax = (uint32_t)(edx + edx + 0xffffffffu);
/* 81495e: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 814961: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 814962: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 814965: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 814968: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 81496b: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 81496e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 814971: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 814974: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 814977: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 814978: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81497a: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 81497d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 814980: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 814983: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 814986: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 814989: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 81498c: call 0x6cb410 */
  esp -= 4; W32(esp, 0x814991u); SPILL(); f_6cb410(); if (g_unwind) return; RELOAD();
/* 814991: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 814992: jmp 0x814920 */
  goto L_814920;
L_8149c4: /* 8149c4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8149c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8149c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8149c9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8149d0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8149d1: mov esp, ebp */
  esp = ebp;
/* 8149d3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8149d4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_814994(void) {
  LOAD_REGS();
L_814994: /* 814994: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 814997: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81499c: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 81499f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8149a0: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8149a3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8149a8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8149a8(); return;
}

void f_8149a8(void) {
  LOAD_REGS();
L_8149a8: /* 8149a8: push 0xa13e08 */
  { uint32_t v = 0xa13e08u; esp -= 4; W32(esp, v); }
/* 8149ad: push 0xae2110 */
  { uint32_t v = 0xae2110u; esp -= 4; W32(esp, v); }
/* 8149b2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8149b8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8149b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8149bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8149bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8149bf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8149c4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8149c4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8149c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8149c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8149c9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8149d0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8149d1: mov esp, ebp */
  esp = ebp;
/* 8149d3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8149d4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_814a50(void) {
  LOAD_REGS();
L_814a50: /* 814a50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 814a51: mov ebp, esp */
  ebp = esp;
/* 814a53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 814a55: push 0x9d2ae0 */
  { uint32_t v = 0x9d2ae0u; esp -= 4; W32(esp, v); }
/* 814a5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 814a60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 814a61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 814a68: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 814a6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 814a6c: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 814a6f: mov ebx, ecx */
  ebx = ecx;
/* 814a71: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 814a74: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 814a77: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 814a7a: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 814a7d: xor eax, eax */
  eax = 0;
/* 814a7f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 814a80: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 814a83: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 814a86: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 814a89: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 814a8c: mov dword ptr [ebx + 0x10], ecx */
  W32((uint32_t)(ebx + 0x10u), ecx);
/* 814a8f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 814a92: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 814a95: lea edx, [ebx + 0x14] */
  edx = (uint32_t)(ebx + 0x14u);
/* 814a98: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 814a9a: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 814a9d: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 814aa0: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 814aa3: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 814aa6: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 814aa9: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 814aaf: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 814ab2: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 814ab5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 814ab6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 814ab7: lea edi, [ebx + 0x20] */
  edi = (uint32_t)(ebx + 0x20u);
/* 814aba: mov edx, edi */
  edx = edi;
/* 814abc: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 814abe: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 814ac1: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 814ac4: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 814ac7: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 814aca: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 814acd: lea edx, [ebx + 0x50] */
  edx = (uint32_t)(ebx + 0x50u);
/* 814ad0: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 814ad2: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 814ad5: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 814ad8: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 814adb: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 814ade: mov edx, dword ptr [ebp + 0x30] */
  edx = R32((uint32_t)(ebp + 0x30u));
/* 814ae1: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 814ae4: mov dword ptr [ebx + 0x5c], edx */
  W32((uint32_t)(ebx + 0x5cu), edx);
/* 814ae7: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 814aea: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* 814aed: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* 814af0: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 814af3: lea esi, [ebx + 0x38] */
  esi = (uint32_t)(ebx + 0x38u);
/* 814af6: mov ecx, esi */
  ecx = esi;
/* 814af8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 814afa: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 814afd: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 814b00: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 814b03: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 814b06: fdiv dword ptr [ebx + 0x40] */
  ST0 = ST0 / (F32((uint32_t)(ebx + 0x40u)));
/* 814b09: lea ecx, [ebx + 0x44] */
  ecx = (uint32_t)(ebx + 0x44u);
/* 814b0c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 814b0f: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 814b12: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 814b15: mov dword ptr [ebx + 0x8c], eax */
  W32((uint32_t)(ebx + 0x8cu), eax);
/* 814b1b: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 814b21: fdiv dword ptr [ebx + 0x3c] */
  ST0 = ST0 / (F32((uint32_t)(ebx + 0x3cu)));
/* 814b24: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 814b2a: fdiv dword ptr [esi] */
  ST0 = ST0 / (F32((uint32_t)(esi)));
/* 814b2c: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 814b2f: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 814b32: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 814b34: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 814b37: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 814b3a: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 814b3d: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 814b40: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 814b43: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 814b46: lea ecx, [ebp + 0x24] */
  ecx = (uint32_t)(ebp + 0x24u);
/* 814b49: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x814b4fu); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 814b4f: xor edx, edx */
  edx = 0;
/* 814b51: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 814b53: je 0x814ea9 */
  if (zf) goto L_814ea9;
L_814b59: /* 814b59: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 814b5b: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 814b5e: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 814b61: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 814b64: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 814b67: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 814b6d: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 814b6f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 814b72: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 814b75: lea ecx, [ebx + 0x90] */
  ecx = (uint32_t)(ebx + 0x90u);
/* 814b7b: mov eax, ecx */
  eax = ecx;
/* 814b7d: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 814b7f: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 814b82: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 814b85: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 814b88: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 814b8b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 814b8d: mov dword ptr [ebx + 0xa0], edx */
  W32((uint32_t)(ebx + 0xa0u), edx);
/* 814b93: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 814b96: mov dword ptr [ebx + 0x9c], edx */
  W32((uint32_t)(ebx + 0x9cu), edx);
/* 814b9c: jp 0x814bb6 */
  if (pf) goto L_814bb6;
L_814b9e: /* 814b9e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 814ba0: mov dword ptr [ebx + 0xa0], 4 */
  W32((uint32_t)(ebx + 0xa0u), 0x4u);
/* 814baa: fchs  */
  ST0 = -ST0;
/* 814bac: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 814bae: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 814bb1: fchs  */
  ST0 = -ST0;
/* 814bb3: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
L_814bb6: /* 814bb6: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 814bb9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 814bbf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 814bc1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 814bc4: jp 0x814beb */
  if (pf) goto L_814beb;
L_814bc6: /* 814bc6: fld dword ptr [ebx + 0x94] */
  { double v = F32((uint32_t)(ebx + 0x94u)); FPUSH(v); }
/* 814bcc: mov eax, dword ptr [ebx + 0xa0] */
  eax = R32((uint32_t)(ebx + 0xa0u));
/* 814bd2: fchs  */
  ST0 = -ST0;
/* 814bd4: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 814bd7: fstp dword ptr [ebx + 0x94] */
  WF32((uint32_t)(ebx + 0x94u), ST0); FPOP();
/* 814bdd: mov dword ptr [ebx + 0xa0], eax */
  W32((uint32_t)(ebx + 0xa0u), eax);
/* 814be3: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 814be6: fchs  */
  ST0 = -ST0;
/* 814be8: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
L_814beb: /* 814beb: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 814bee: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 814bf4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 814bf6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 814bf9: jp 0x814c20 */
  if (pf) goto L_814c20;
L_814bfb: /* 814bfb: fld dword ptr [ebx + 0x98] */
  { double v = F32((uint32_t)(ebx + 0x98u)); FPUSH(v); }
/* 814c01: mov eax, dword ptr [ebx + 0xa0] */
  eax = R32((uint32_t)(ebx + 0xa0u));
/* 814c07: fchs  */
  ST0 = -ST0;
/* 814c09: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 814c0c: fstp dword ptr [ebx + 0x98] */
  WF32((uint32_t)(ebx + 0x98u), ST0); FPOP();
/* 814c12: mov dword ptr [ebx + 0xa0], eax */
  W32((uint32_t)(ebx + 0xa0u), eax);
/* 814c18: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 814c1b: fchs  */
  ST0 = -ST0;
/* 814c1d: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
L_814c20: /* 814c20: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 814c23: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 814c29: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 814c2b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 814c2e: jne 0x814c63 */
  if (!zf) goto L_814c63;
L_814c30: /* 814c30: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 814c36: fdiv dword ptr [ebp - 0x24] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 814c39: fld dword ptr [0xae24bc] */
  { double v = F32((uint32_t)(0xae24bcu)); FPUSH(v); }
/* 814c3f: fsub dword ptr [0xae24c8] */
  ST0 = ST0 - (F32((uint32_t)(0xae24c8u)));
/* 814c45: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 814c47: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 814c49: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 814c4c: fld dword ptr [0xae24c8] */
  { double v = F32((uint32_t)(0xae24c8u)); FPUSH(v); }
/* 814c52: fadd dword ptr [0xae24bc] */
  ST0 = ST0 + (F32((uint32_t)(0xae24bcu)));
/* 814c58: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 814c5a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 814c5c: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 814c5f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 814c61: jmp 0x814cc5 */
  goto L_814cc5;
L_814c63: /* 814c63: fld dword ptr [0xae24bc] */
  { double v = F32((uint32_t)(0xae24bcu)); FPUSH(v); }
/* 814c69: fsub dword ptr [0xae24c8] */
  ST0 = ST0 - (F32((uint32_t)(0xae24c8u)));
/* 814c6f: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 814c71: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 814c77: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 814c79: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 814c7c: jne 0x814c86 */
  if (!zf) goto L_814c86;
L_814c7e: /* 814c7e: fld dword ptr [0xa13bbc] */
  { double v = F32((uint32_t)(0xa13bbcu)); FPUSH(v); }
/* 814c84: jmp 0x814c8c */
  goto L_814c8c;
L_814c86: /* 814c86: fld dword ptr [0xa13bb8] */
  { double v = F32((uint32_t)(0xa13bb8u)); FPUSH(v); }
L_814c8c: /* 814c8c: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 814c8f: fld dword ptr [0xae24c8] */
  { double v = F32((uint32_t)(0xae24c8u)); FPUSH(v); }
/* 814c95: fadd dword ptr [0xae24bc] */
  ST0 = ST0 + (F32((uint32_t)(0xae24bcu)));
/* 814c9b: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 814c9d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 814ca3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 814ca5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 814ca8: jne 0x814cb2 */
  if (!zf) goto L_814cb2;
L_814caa: /* 814caa: fld dword ptr [0xa13bbc] */
  { double v = F32((uint32_t)(0xa13bbcu)); FPUSH(v); }
/* 814cb0: jmp 0x814cb8 */
  goto L_814cb8;
L_814cb2: /* 814cb2: fld dword ptr [0xa13bb8] */
  { double v = F32((uint32_t)(0xa13bb8u)); FPUSH(v); }
L_814cb8: /* 814cb8: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 814cbb: mov dword ptr [ebx + 0x9c], 4 */
  W32((uint32_t)(ebx + 0x9cu), 0x4u);
L_814cc5: /* 814cc5: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 814cc8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 814cce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 814cd0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 814cd3: jne 0x814d10 */
  if (!zf) goto L_814d10;
L_814cd5: /* 814cd5: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 814cdb: fdiv dword ptr [ebp - 0x20] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 814cde: fld dword ptr [0xae24c0] */
  { double v = F32((uint32_t)(0xae24c0u)); FPUSH(v); }
/* 814ce4: fsub dword ptr [0xae24c8] */
  ST0 = ST0 - (F32((uint32_t)(0xae24c8u)));
/* 814cea: fsub dword ptr [ebx + 0x94] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x94u)));
/* 814cf0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 814cf2: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 814cf5: fld dword ptr [0xae24c0] */
  { double v = F32((uint32_t)(0xae24c0u)); FPUSH(v); }
/* 814cfb: fadd dword ptr [0xae24c8] */
  ST0 = ST0 + (F32((uint32_t)(0xae24c8u)));
/* 814d01: fsub dword ptr [ebx + 0x94] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x94u)));
/* 814d07: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 814d09: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 814d0c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 814d0e: jmp 0x814d7f */
  goto L_814d7f;
L_814d10: /* 814d10: fld dword ptr [0xae24c0] */
  { double v = F32((uint32_t)(0xae24c0u)); FPUSH(v); }
/* 814d16: fsub dword ptr [0xae24c8] */
  ST0 = ST0 - (F32((uint32_t)(0xae24c8u)));
/* 814d1c: fsub dword ptr [ebx + 0x94] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x94u)));
/* 814d22: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 814d28: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 814d2a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 814d2d: jne 0x814d37 */
  if (!zf) goto L_814d37;
L_814d2f: /* 814d2f: fld dword ptr [0xa13bbc] */
  { double v = F32((uint32_t)(0xa13bbcu)); FPUSH(v); }
/* 814d35: jmp 0x814d3d */
  goto L_814d3d;
L_814d37: /* 814d37: fld dword ptr [0xa13bb8] */
  { double v = F32((uint32_t)(0xa13bb8u)); FPUSH(v); }
L_814d3d: /* 814d3d: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 814d40: fld dword ptr [0xae24c0] */
  { double v = F32((uint32_t)(0xae24c0u)); FPUSH(v); }
/* 814d46: fadd dword ptr [0xae24c8] */
  ST0 = ST0 + (F32((uint32_t)(0xae24c8u)));
/* 814d4c: fsub dword ptr [ebx + 0x94] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x94u)));
/* 814d52: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 814d58: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 814d5a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 814d5d: jne 0x814d67 */
  if (!zf) goto L_814d67;
L_814d5f: /* 814d5f: fld dword ptr [0xa13bbc] */
  { double v = F32((uint32_t)(0xa13bbcu)); FPUSH(v); }
/* 814d65: jmp 0x814d6d */
  goto L_814d6d;
L_814d67: /* 814d67: fld dword ptr [0xa13bb8] */
  { double v = F32((uint32_t)(0xa13bb8u)); FPUSH(v); }
L_814d6d: /* 814d6d: mov eax, dword ptr [ebx + 0x9c] */
  eax = R32((uint32_t)(ebx + 0x9cu));
/* 814d73: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 814d76: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 814d79: mov dword ptr [ebx + 0x9c], eax */
  W32((uint32_t)(ebx + 0x9cu), eax);
L_814d7f: /* 814d7f: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 814d82: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 814d88: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 814d8a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 814d8d: jne 0x814dca */
  if (!zf) goto L_814dca;
L_814d8f: /* 814d8f: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 814d95: fdiv dword ptr [ebp - 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 814d98: fld dword ptr [0xae24c4] */
  { double v = F32((uint32_t)(0xae24c4u)); FPUSH(v); }
/* 814d9e: fsub dword ptr [0xae24c8] */
  ST0 = ST0 - (F32((uint32_t)(0xae24c8u)));
/* 814da4: fsub dword ptr [ebx + 0x98] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x98u)));
/* 814daa: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 814dac: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 814daf: fld dword ptr [0xae24c4] */
  { double v = F32((uint32_t)(0xae24c4u)); FPUSH(v); }
/* 814db5: fadd dword ptr [0xae24c8] */
  ST0 = ST0 + (F32((uint32_t)(0xae24c8u)));
/* 814dbb: fsub dword ptr [ebx + 0x98] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x98u)));
/* 814dc1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 814dc3: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 814dc6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 814dc8: jmp 0x814e39 */
  goto L_814e39;
L_814dca: /* 814dca: fld dword ptr [0xae24c4] */
  { double v = F32((uint32_t)(0xae24c4u)); FPUSH(v); }
/* 814dd0: fsub dword ptr [0xae24c8] */
  ST0 = ST0 - (F32((uint32_t)(0xae24c8u)));
/* 814dd6: fsub dword ptr [ebx + 0x98] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x98u)));
/* 814ddc: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 814de2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 814de4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 814de7: jne 0x814df1 */
  if (!zf) goto L_814df1;
L_814de9: /* 814de9: fld dword ptr [0xa13bbc] */
  { double v = F32((uint32_t)(0xa13bbcu)); FPUSH(v); }
/* 814def: jmp 0x814df7 */
  goto L_814df7;
L_814df1: /* 814df1: fld dword ptr [0xa13bb8] */
  { double v = F32((uint32_t)(0xa13bb8u)); FPUSH(v); }
L_814df7: /* 814df7: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 814dfa: fld dword ptr [0xae24c4] */
  { double v = F32((uint32_t)(0xae24c4u)); FPUSH(v); }
/* 814e00: fadd dword ptr [0xae24c8] */
  ST0 = ST0 + (F32((uint32_t)(0xae24c8u)));
/* 814e06: fsub dword ptr [ebx + 0x98] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x98u)));
/* 814e0c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 814e12: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 814e14: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 814e17: jne 0x814e21 */
  if (!zf) goto L_814e21;
L_814e19: /* 814e19: fld dword ptr [0xa13bbc] */
  { double v = F32((uint32_t)(0xa13bbcu)); FPUSH(v); }
/* 814e1f: jmp 0x814e27 */
  goto L_814e27;
L_814e21: /* 814e21: fld dword ptr [0xa13bb8] */
  { double v = F32((uint32_t)(0xa13bb8u)); FPUSH(v); }
L_814e27: /* 814e27: mov eax, dword ptr [ebx + 0x9c] */
  eax = R32((uint32_t)(ebx + 0x9cu));
/* 814e2d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 814e30: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 814e33: mov dword ptr [ebx + 0x9c], eax */
  W32((uint32_t)(ebx + 0x9cu), eax);
L_814e39: /* 814e39: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 814e3c: call dword ptr [0xcfaad8] */
  esp -= 4; W32(esp, 0x814e42u); SPILL(); f_4e231f(); if (g_unwind) return; /* Core!?GetMax@FVector@@QBEMXZ */ RELOAD();
/* 814e42: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 814e45: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 814e48: call dword ptr [0xcfaad8] */
  esp -= 4; W32(esp, 0x814e4eu); SPILL(); f_4e231f(); if (g_unwind) return; /* Core!?GetMax@FVector@@QBEMXZ */ RELOAD();
/* 814e4e: fstp dword ptr [ebp + 0x34] */
  WF32((uint32_t)(ebp + 0x34u), ST0); FPOP();
/* 814e51: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 814e54: fcomp dword ptr [ebp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x34u)));
  FPOP();
/* 814e57: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 814e59: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 814e5c: jp 0x814e84 */
  if (pf) goto L_814e84;
L_814e5e: /* 814e5e: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 814e61: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 814e64: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 814e67: push 0xae24bc */
  { uint32_t v = 0xae24bcu; esp -= 4; W32(esp, v); }
/* 814e6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 814e6d: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 814e70: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 814e71: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 814e74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 814e75: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 814e78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 814e79: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 814e7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 814e7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 814e7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 814e7f: call 0x6ccb67 */
  esp -= 4; W32(esp, 0x814e84u); SPILL(); f_6ccb67(); if (g_unwind) return; RELOAD();
L_814e84: /* 814e84: mov ecx, dword ptr [ebp + 0x30] */
  ecx = R32((uint32_t)(ebp + 0x30u));
/* 814e87: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 814e8a: je 0x814f27 */
  if (zf) goto L_814f27;
L_814e90: /* 814e90: mov eax, dword ptr [ebx + 0x8c] */
  eax = R32((uint32_t)(ebx + 0x8cu));
/* 814e96: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 814e98: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 814e9b: je 0x814f27 */
  if (zf) goto L_814f27;
L_814ea1: /* 814ea1: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 814ea7: jmp 0x814f27 */
  goto L_814f27;
L_814ea9: /* 814ea9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 814eaa: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 814ead: call dword ptr [0xcfa260] */
  esp -= 4; W32(esp, 0x814eb3u); SPILL(); f_4e2ffe(); if (g_unwind) return; /* Core!??0FBox@@QAE@H@Z */ RELOAD();
/* 814eb3: lea edx, [ebx + 0x6c] */
  edx = (uint32_t)(ebx + 0x6cu);
/* 814eb6: mov esi, eax */
  esi = eax;
/* 814eb8: mov edi, edx */
  edi = edx;
/* 814eba: mov ecx, 7 */
  ecx = 0x7u;
/* 814ebf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 814ec1: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* 814ec4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 814ec5: mov ecx, edx */
  ecx = edx;
/* 814ec7: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x814ecdu); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 814ecd: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 814ed0: lea esi, [ebx + 0x6c] */
  esi = (uint32_t)(ebx + 0x6cu);
/* 814ed3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 814ed4: mov ecx, esi */
  ecx = esi;
/* 814ed6: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x814edcu); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 814edc: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 814ede: push 0xae24bc */
  { uint32_t v = 0xae24bcu; esp -= 4; W32(esp, v); }
/* 814ee3: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 814ee6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 814ee7: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 814ee9: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 814eec: fsub dword ptr [ebp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x28u)));
/* 814eef: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 814ef2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 814ef5: fsub dword ptr [ebp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x2cu)));
/* 814ef8: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 814efb: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 814efe: fadd dword ptr [ebx + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x78u)));
/* 814f01: fstp dword ptr [ebx + 0x78] */
  WF32((uint32_t)(ebx + 0x78u), ST0); FPOP();
/* 814f04: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 814f07: fadd dword ptr [ebx + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x7cu)));
/* 814f0a: fstp dword ptr [ebx + 0x7c] */
  WF32((uint32_t)(ebx + 0x7cu), ST0); FPOP();
/* 814f0d: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 814f10: fadd dword ptr [ebx + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x80u)));
/* 814f16: fstp dword ptr [ebx + 0x80] */
  WF32((uint32_t)(ebx + 0x80u), ST0); FPOP();
/* 814f1c: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 814f1f: call 0x6c7a8b */
  esp -= 4; W32(esp, 0x814f24u); SPILL(); f_6c7a8b(); if (g_unwind) return; RELOAD();
/* 814f24: mov ecx, dword ptr [ebp + 0x30] */
  ecx = R32((uint32_t)(ebp + 0x30u));
L_814f27: /* 814f27: mov ebx, dword ptr [ebx + 0xc] */
  ebx = R32((uint32_t)(ebx + 0xcu));
/* 814f2a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 814f2c: je 0x814f50 */
  if (zf) goto L_814f50;
L_814f2e: /* 814f2e: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 814f31: je 0x814f50 */
  if (zf) goto L_814f50;
L_814f33: /* 814f33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 814f34: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 814f35: call 0x6ccf4f */
  esp -= 4; W32(esp, 0x814f3au); SPILL(); f_6ccf4f(); if (g_unwind) return; RELOAD();
/* 814f3a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 814f3d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 814f40: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 814f47: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 814f48: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 814f49: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 814f4a: mov esp, ebp */
  esp = ebp;
/* 814f4c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 814f4d: ret 0x34 */
  esp += 56; SPILL(); return;
L_814f50: /* 814f50: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 814f53: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 814f54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 814f55: mov eax, ebx */
  eax = ebx;
/* 814f57: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 814f5e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 814f5f: mov esp, ebp */
  esp = ebp;
/* 814f61: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 814f62: ret 0x34 */
  esp += 56; SPILL(); return;
}

void f_814f65(void) {
  LOAD_REGS();
L_814f65: /* 814f65: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 814f68: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 814f6d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 814f70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 814f71: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 814f74: call 0x99caf8 */
  esp -= 4; W32(esp, 0x814f79u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_814f79(); return;
}

void f_814f79(void) {
  LOAD_REGS();
L_814f79: /* 814f79: push 0xa13e58 */
  { uint32_t v = 0xa13e58u; esp -= 4; W32(esp, v); }
/* 814f7e: push 0xae2414 */
  { uint32_t v = 0xae2414u; esp -= 4; W32(esp, v); }
/* 814f83: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x814f89u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 814f89: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 814f8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 814f8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 814f90: call 0x99caf8 */
  esp -= 4; W32(esp, 0x814f95u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_814f95: guest_badaddr(0x814f95); return;
}

void f_815100(void) {
  LOAD_REGS();
L_815100: /* 815100: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 815101: mov ebp, esp */
  ebp = esp;
/* 815103: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 815105: push 0x9d2af0 */
  { uint32_t v = 0x9d2af0u; esp -= 4; W32(esp, v); }
/* 81510a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 815110: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 815111: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 815118: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81511b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 81511e: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 815121: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 815122: mov ebx, ecx */
  ebx = ecx;
/* 815124: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 815127: lea eax, [ebx + 0x20] */
  eax = (uint32_t)(ebx + 0x20u);
/* 81512a: mov ecx, eax */
  ecx = eax;
/* 81512c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81512e: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 815131: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 815134: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 815137: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 81513a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81513b: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 81513e: lea ecx, [ebx + 0x50] */
  ecx = (uint32_t)(ebx + 0x50u);
/* 815141: mov edx, ecx */
  edx = ecx;
/* 815143: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 815145: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 815148: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 81514b: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 81514e: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 815151: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 815154: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 815157: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 815158: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* 81515b: mov dword ptr [ebx + 0x60], esi */
  W32((uint32_t)(ebx + 0x60u), esi);
/* 81515e: mov esi, dword ptr [ebp + 0x2c] */
  esi = R32((uint32_t)(ebp + 0x2cu));
/* 815161: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 815162: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 815164: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 815167: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 81516e: mov dword ptr [ebx + 8], edi */
  W32((uint32_t)(ebx + 0x8u), edi);
/* 815171: mov dword ptr [ebx + 0xc], 0 */
  W32((uint32_t)(ebx + 0xcu), 0x0u);
/* 815178: mov dword ptr [ebx + 0x5c], edx */
  W32((uint32_t)(ebx + 0x5cu), edx);
/* 81517b: je 0x815186 */
  if (zf) goto L_815186;
L_81517d: /* 81517d: or edx, 0x200 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 815183: mov dword ptr [ebx + 0x5c], edx */
  W32((uint32_t)(ebx + 0x5cu), edx);
L_815186: /* 815186: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 815189: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 81518c: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 81518f: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 815192: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 815194: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 815196: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 815199: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 81519c: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 81519f: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8151a2: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 8151a5: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8151a8: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 8151ab: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8151ad: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 8151b0: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 8151b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8151b3: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* 8151b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8151b7: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 8151ba: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8151bd: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 8151c0: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* 8151c3: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x8151c9u); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 8151c9: mov esi, eax */
  esi = eax;
/* 8151cb: lea edi, [ebx + 0x6c] */
  edi = (uint32_t)(ebx + 0x6cu);
/* 8151ce: mov ecx, 7 */
  ecx = 0x7u;
/* 8151d3: push 0xae24bc */
  { uint32_t v = 0xae24bcu; esp -= 4; W32(esp, v); }
/* 8151d8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8151da: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 8151dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8151de: call 0x6c9480 */
  esp -= 4; W32(esp, 0x8151e3u); SPILL(); f_6c9480(); if (g_unwind) return; RELOAD();
/* 8151e3: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 8151e6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8151e9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8151ea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8151eb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8151f2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8151f3: mov esp, ebp */
  esp = ebp;
/* 8151f5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8151f6: ret 0x28 */
  esp += 44; SPILL(); return;
}

void f_8151f9(void) {
  LOAD_REGS();
L_8151f9: /* 8151f9: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8151fc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 815201: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 815204: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 815205: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 815208: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81520du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81520d(); return;
}

void f_81520d(void) {
  LOAD_REGS();
L_81520d: /* 81520d: push 0xa13ea8 */
  { uint32_t v = 0xa13ea8u; esp -= 4; W32(esp, v); }
/* 815212: push 0xae241c */
  { uint32_t v = 0xae241cu; esp -= 4; W32(esp, v); }
/* 815217: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81521du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81521d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 815220: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 815222: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 815224: call 0x99caf8 */
  esp -= 4; W32(esp, 0x815229u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_815229: guest_badaddr(0x815229); return;
}

void f_815280(void) {
  LOAD_REGS();
L_815280: /* 815280: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 815281: mov ebp, esp */
  ebp = esp;
/* 815283: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 815285: push 0x9d2b00 */
  { uint32_t v = 0x9d2b00u; esp -= 4; W32(esp, v); }
/* 81528a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 815290: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 815291: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 815298: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81529b: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 81529e: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8152a1: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 8152a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8152a5: mov ebx, ecx */
  ebx = ecx;
/* 8152a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8152aa: fstp dword ptr [ebx + 0x68] */
  WF32((uint32_t)(ebx + 0x68u), ST0); FPOP();
/* 8152ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8152ae: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8152b1: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* 8152b4: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* 8152b7: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 8152ba: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8152bd: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8152c0: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* 8152c3: lea ecx, [ebx + 0x20] */
  ecx = (uint32_t)(ebx + 0x20u);
/* 8152c6: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8152c9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8152cb: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* 8152ce: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8152d1: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8152d4: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 8152d7: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8152da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8152db: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8152de: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8152e1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8152e4: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8152e7: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8152ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8152eb: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8152ee: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 8152f1: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 8152f4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8152f5: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8152f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8152f9: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 8152fc: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8152ff: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 815302: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 815309: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 81530c: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* 81530f: mov dword ptr [ebx + 0xc], 0 */
  W32((uint32_t)(ebx + 0xcu), 0x0u);
/* 815316: mov dword ptr [ebx + 0x60], eax */
  W32((uint32_t)(ebx + 0x60u), eax);
/* 815319: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 81531c: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 81531f: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 815322: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x815328u); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 815328: mov esi, eax */
  esi = eax;
/* 81532a: lea edi, [ebx + 0x6c] */
  edi = (uint32_t)(ebx + 0x6cu);
/* 81532d: mov ecx, 7 */
  ecx = 0x7u;
/* 815332: push 0xae24bc */
  { uint32_t v = 0xae24bcu; esp -= 4; W32(esp, v); }
/* 815337: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 815339: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 81533c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81533d: call 0x6c32f6 */
  esp -= 4; W32(esp, 0x815342u); SPILL(); f_6c32f6(); if (g_unwind) return; RELOAD();
/* 815342: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 815345: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 815348: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 815349: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81534a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 815351: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 815352: mov esp, ebp */
  esp = ebp;
/* 815354: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 815355: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_815358(void) {
  LOAD_REGS();
L_815358: /* 815358: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81535b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 815360: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 815363: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 815364: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 815367: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81536cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81536c(); return;
}

void f_81536c(void) {
  LOAD_REGS();
L_81536c: /* 81536c: push 0xa13f00 */
  { uint32_t v = 0xa13f00u; esp -= 4; W32(esp, v); }
/* 815371: push 0xae2424 */
  { uint32_t v = 0xae2424u; esp -= 4; W32(esp, v); }
/* 815376: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81537cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81537c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81537f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 815381: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 815383: call 0x99caf8 */
  esp -= 4; W32(esp, 0x815388u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_815388: guest_badaddr(0x815388); return;
}

void f_8153e0(void) {
  LOAD_REGS();
L_8153e0: /* 8153e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8153e1: mov ebp, esp */
  ebp = esp;
/* 8153e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8153e5: push 0x9d2b10 */
  { uint32_t v = 0x9d2b10u; esp -= 4; W32(esp, v); }
/* 8153ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8153f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8153f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8153f8: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8153fb: mov edx, dword ptr [ebp + 0x2c] */
  edx = R32((uint32_t)(ebp + 0x2cu));
/* 8153fe: xor eax, eax */
  eax = 0;
/* 815400: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 815403: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 815404: mov ebx, ecx */
  ebx = ecx;
/* 815406: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 815409: mov dword ptr [ebx + 0x60], edx */
  W32((uint32_t)(ebx + 0x60u), edx);
/* 81540c: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 81540f: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 815412: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 815415: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 815418: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 81541b: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 81541e: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 815421: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 815422: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 815425: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 815428: mov dword ptr [ebx + 0x5c], ecx */
  W32((uint32_t)(ebx + 0x5cu), ecx);
/* 81542b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 81542e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81542f: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 815432: mov dword ptr [ebx + 0x64], esi */
  W32((uint32_t)(ebx + 0x64u), esi);
/* 815435: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 81543b: mov edx, eax */
  edx = eax;
/* 81543d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81543e: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 815440: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 815443: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* 815446: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 815449: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 81544c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 81544e: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 815451: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 815454: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 815457: mov dword ptr [ebp + 0x18], edx */
  W32((uint32_t)(ebp + 0x18u), edx);
/* 81545a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 81545d: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 815460: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 815463: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 815466: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 815469: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 81546c: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 815472: mov edx, eax */
  edx = eax;
/* 815474: mov dword ptr [ebp + 0x14], edi */
  W32((uint32_t)(ebp + 0x14u), edi);
/* 815477: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 815479: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 81547c: mov dword ptr [ebp + 0x1c], edi */
  W32((uint32_t)(ebp + 0x1cu), edi);
/* 81547f: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 815482: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 815485: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 815487: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81548a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 81548d: mov dword ptr [ebp + 0x24], edx */
  W32((uint32_t)(ebp + 0x24u), edx);
/* 815490: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 815493: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 815496: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 815498: mov ecx, esi */
  ecx = esi;
/* 81549a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81549d: mov dword ptr [ebp + 0x20], edi */
  W32((uint32_t)(ebp + 0x20u), edi);
/* 8154a0: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x8154a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8154a6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8154a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8154a9: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8154ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8154ad: mov ecx, eax */
  ecx = eax;
/* 8154af: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x8154b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8154b2: mov esi, eax */
  esi = eax;
/* 8154b4: lea edi, [ebx + 0x6c] */
  edi = (uint32_t)(ebx + 0x6cu);
/* 8154b7: mov ecx, 7 */
  ecx = 0x7u;
/* 8154bc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8154be: mov al, byte ptr [ebx + 0x84] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x84u))) & 0xffu);
/* 8154c4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8154c6: je 0x8154d6 */
  if (zf) goto L_8154d6;
L_8154c8: /* 8154c8: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 8154cb: push 0xae24bc */
  { uint32_t v = 0xae24bcu; esp -= 4; W32(esp, v); }
/* 8154d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8154d1: call 0x6cb83e */
  esp -= 4; W32(esp, 0x8154d6u); SPILL(); f_6cb83e(); if (g_unwind) return; RELOAD();
L_8154d6: /* 8154d6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8154d9: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8154dc: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8154df: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8154e1: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8154e4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8154e7: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 8154ea: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8154ed: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8154f0: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 8154f3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8154f5: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 8154f8: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8154fb: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8154fe: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 815501: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 815504: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 815505: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 815506: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81550d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81550e: mov esp, ebp */
  esp = ebp;
/* 815510: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 815511: ret 0x28 */
  esp += 44; SPILL(); return;
}

void f_815514(void) {
  LOAD_REGS();
L_815514: /* 815514: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 815517: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81551c: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 81551f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 815520: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 815523: call 0x99caf8 */
  esp -= 4; W32(esp, 0x815528u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_815528(); return;
}

void f_815528(void) {
  LOAD_REGS();
L_815528: /* 815528: push 0xa13f58 */
  { uint32_t v = 0xa13f58u; esp -= 4; W32(esp, v); }
/* 81552d: push 0xae242c */
  { uint32_t v = 0xae242cu; esp -= 4; W32(esp, v); }
/* 815532: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x815538u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 815538: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81553b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81553d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81553f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x815544u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_815544: guest_badaddr(0x815544); return;
}

void f_8155b0(void) {
  LOAD_REGS();
L_8155b0: /* 8155b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8155b1: mov ebp, esp */
  ebp = esp;
/* 8155b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8155b5: push 0x9d2b20 */
  { uint32_t v = 0x9d2b20u; esp -= 4; W32(esp, v); }
/* 8155ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8155c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8155c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8155c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8155cb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8155ce: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8155d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8155d2: mov ebx, ecx */
  ebx = ecx;
/* 8155d4: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 8155d7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8155d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8155d9: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 8155dc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8155dd: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 8155e0: lea edi, [ebx + 0x6c] */
  edi = (uint32_t)(ebx + 0x6cu);
/* 8155e3: mov ecx, 7 */
  ecx = 0x7u;
/* 8155e8: mov dword ptr [ebx + 0xc], 0 */
  W32((uint32_t)(ebx + 0xcu), 0x0u);
/* 8155ef: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8155f1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8155f4: mov dword ptr [ebx + 0x64], eax */
  W32((uint32_t)(ebx + 0x64u), eax);
/* 8155f7: mov al, byte ptr [ebx + 0x84] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x84u))) & 0xffu);
/* 8155fd: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8155ff: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 815602: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 815609: mov dword ptr [ebx + 0x10], ecx */
  W32((uint32_t)(ebx + 0x10u), ecx);
/* 81560c: mov dword ptr [ebx + 0x88], edx */
  W32((uint32_t)(ebx + 0x88u), edx);
/* 815612: je 0x815622 */
  if (zf) goto L_815622;
L_815614: /* 815614: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 815617: push 0xae24bc */
  { uint32_t v = 0xae24bcu; esp -= 4; W32(esp, v); }
/* 81561c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81561d: call 0x6cb410 */
  esp -= 4; W32(esp, 0x815622u); SPILL(); f_6cb410(); if (g_unwind) return; RELOAD();
L_815622: /* 815622: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 815625: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 815628: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 815629: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81562a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 815631: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 815632: mov esp, ebp */
  esp = ebp;
/* 815634: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 815635: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_815638(void) {
  LOAD_REGS();
L_815638: /* 815638: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81563b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 815640: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 815643: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 815644: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 815647: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81564cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81564c(); return;
}

void f_81564c(void) {
  LOAD_REGS();
L_81564c: /* 81564c: push 0xa13fc0 */
  { uint32_t v = 0xa13fc0u; esp -= 4; W32(esp, v); }
/* 815651: push 0xae2434 */
  { uint32_t v = 0xae2434u; esp -= 4; W32(esp, v); }
/* 815656: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81565cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81565c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81565f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 815661: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 815663: call 0x99caf8 */
  esp -= 4; W32(esp, 0x815668u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_815668: guest_badaddr(0x815668); return;
}

void f_8156a0(void) {
  LOAD_REGS();
L_8156a0: /* 8156a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8156a1: mov ebp, esp */
  ebp = esp;
/* 8156a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8156a5: push 0x9d2b30 */
  { uint32_t v = 0x9d2b30u; esp -= 4; W32(esp, v); }
/* 8156aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8156b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8156b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8156b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8156bb: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8156be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8156bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8156c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8156c1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8156c4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8156cb: call 0x6cb48d */
  esp -= 4; W32(esp, 0x8156d0u); SPILL(); f_6cb48d(); if (g_unwind) return; RELOAD();
/* 8156d0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8156d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8156d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8156d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8156dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8156dd: mov esp, ebp */
  esp = ebp;
/* 8156df: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8156e0: ret  */
  esp += 4; SPILL(); return;
}

void f_8156e1(void) {
  LOAD_REGS();
L_8156e1: /* 8156e1: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8156e4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8156e9: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8156ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8156ed: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8156f0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8156f5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8156f5(); return;
}

void f_8156f5(void) {
  LOAD_REGS();
L_8156f5: /* 8156f5: push 0xa14018 */
  { uint32_t v = 0xa14018u; esp -= 4; W32(esp, v); }
/* 8156fa: push 0xae2444 */
  { uint32_t v = 0xae2444u; esp -= 4; W32(esp, v); }
/* 8156ff: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x815705u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 815705: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 815708: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81570a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81570c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x815711u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_815711: guest_badaddr(0x815711); return;
}

void f_815740(void) {
  LOAD_REGS();
L_815740: /* 815740: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 815743: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 815747: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 81574a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81574b: xor ebx, ebx */
  ebx = 0;
/* 81574d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81574f: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 815757: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 81575b: jle 0x8157ad */
  if ((zf || sf != of)) goto L_8157ad;
L_81575d: /* 81575d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81575e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81575f: nop  */
L_815760: /* 815760: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 815764: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 815766: jne 0x8157ab */
  if (!zf) goto L_8157ab;
L_815768: /* 815768: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 81576c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 81576e: mov esi, dword ptr [eax + ebx*4] */
  esi = R32((uint32_t)(eax + ebx*4));
/* 815771: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 815774: xor ecx, ecx */
  ecx = 0;
/* 815776: xor eax, eax */
  eax = 0;
/* 815778: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81577a: jle 0x81579a */
  if ((zf || sf != of)) goto L_81579a;
L_81577c: /* 81577c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_815780: /* 815780: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 815782: jne 0x8157a2 */
  if (!zf) goto L_8157a2;
L_815784: /* 815784: mov ebp, dword ptr [edi] */
  ebp = R32((uint32_t)(edi));
/* 815786: cmp esi, dword ptr [ebp + eax*4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + eax*4)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81578a: jne 0x815791 */
  if (!zf) goto L_815791;
L_81578c: /* 81578c: mov ecx, 1 */
  ecx = 0x1u;
L_815791: /* 815791: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 815792: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 815794: jl 0x815780 */
  if ((sf != of)) goto L_815780;
L_815796: /* 815796: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 815798: jne 0x8157a2 */
  if (!zf) goto L_8157a2;
L_81579a: /* 81579a: mov dword ptr [esp + 0xc], 1 */
  W32((uint32_t)(esp + 0xcu), 0x1u);
L_8157a2: /* 8157a2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8157a6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8157a7: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8157a9: jl 0x815760 */
  if ((sf != of)) goto L_815760;
L_8157ab: /* 8157ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8157ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_8157ad: /* 8157ad: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8157b1: xor eax, eax */
  eax = 0;
/* 8157b3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8157b5: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8157b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8157b9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8157bc: ret  */
  esp += 4; SPILL(); return;
}

void f_8157e0(void) {
  LOAD_REGS();
L_8157e0: /* 8157e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8157e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8157e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8157e3: mov edi, ecx */
  edi = ecx;
/* 8157e5: mov ebp, dword ptr [edi + 4] */
  ebp = R32((uint32_t)(edi + 0x4u));
/* 8157e8: xor esi, esi */
  esi = 0;
/* 8157ea: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8157ec: jle 0x815810 */
  if ((zf || sf != of)) goto L_815810;
L_8157ee: /* 8157ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8157ef: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_8157f3: /* 8157f3: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8157f5: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 8157f8: cmp ecx, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8157fa: jne 0x815807 */
  if (!zf) goto L_815807;
L_8157fc: /* 8157fc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8157fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8157ff: mov ecx, edi */
  ecx = edi;
/* 815801: call 0x6c392c */
  esp -= 4; W32(esp, 0x815806u); SPILL(); f_6c392c(); if (g_unwind) return; RELOAD();
/* 815806: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_815807: /* 815807: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 81580a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 81580b: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81580d: jl 0x8157f3 */
  if ((sf != of)) goto L_8157f3;
L_81580f: /* 81580f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_815810: /* 815810: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 815813: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 815814: mov eax, ebp */
  eax = ebp;
/* 815816: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 815817: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 815819: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81581a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_815830(void) {
  LOAD_REGS();
L_815830: /* 815830: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 815831: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 815833: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 815835: mov esi, ecx */
  esi = ecx;
/* 815837: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x81583du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 81583d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 815841: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 815843: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 815845: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 815848: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 815849: ret 4 */
  esp += 8; SPILL(); return;
}

void f_815860(void) {
  LOAD_REGS();
L_815860: /* 815860: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 815861: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 815862: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 815868: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 815869: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81586a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 81586e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 815870: mov esi, ecx */
  esi = ecx;
/* 815872: jge 0x815888 */
  if ((sf == of)) goto L_815888;
L_815874: /* 815874: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 815879: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 81587e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 815883: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x815885u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 815885: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_815888: /* 815888: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81588b: jle 0x8158a1 */
  if ((zf || sf != of)) goto L_8158a1;
L_81588d: /* 81588d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 815892: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 815897: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 81589c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x81589eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81589e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8158a1: /* 8158a1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 8158a5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8158a8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 8158ab: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8158ad: jle 0x8158c3 */
  if ((zf || sf != of)) goto L_8158c3;
L_8158af: /* 8158af: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8158b4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8158b9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8158be: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8158c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8158c0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8158c3: /* 8158c3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8158c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8158c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8158c7: mov ecx, esi */
  ecx = esi;
/* 8158c9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8158cfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8158cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8158d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8158d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8158d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8158d3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_815900(void) {
  LOAD_REGS();
L_815900: /* 815900: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 815901: mov ebp, esp */
  ebp = esp;
/* 815903: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 815905: push 0x9d2b40 */
  { uint32_t v = 0x9d2b40u; esp -= 4; W32(esp, v); }
/* 81590a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 815910: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 815911: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 815918: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81591b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 81591e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 815920: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 815921: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 815922: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 815923: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 815926: mov ebx, ecx */
  ebx = ecx;
/* 815928: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 81592f: je 0x8159f2 */
  if (zf) goto L_8159f2;
L_815935: /* 815935: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 815938: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81593a: je 0x8159cb */
  if (zf) goto L_8159cb;
L_815940: /* 815940: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 815943: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 815946: mov ecx, edi */
  ecx = edi;
/* 815948: call 0x812aa0 */
  esp -= 4; W32(esp, 0x81594du); SPILL(); f_812aa0(); if (g_unwind) return; RELOAD();
/* 81594d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81594f: jne 0x8159cb */
  if (!zf) goto L_8159cb;
L_815951: /* 815951: xor esi, esi */
  esi = 0;
L_815953: /* 815953: cmp esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 815956: jge 0x8159df */
  if ((sf == of)) goto L_8159df;
L_81595c: /* 81595c: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 81595f: mov eax, esi */
  eax = esi;
/* 815961: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 815967: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 815969: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 81596c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 81596d: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 815970: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 815973: fild dword ptr [ebp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 815976: mov ecx, esi */
  ecx = esi;
/* 815978: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 81597b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 81597c: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 81597f: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 815982: mov edx, esi */
  edx = esi;
/* 815984: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 815987: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 815989: lea eax, [edx + edx - 1] */
  eax = (uint32_t)(edx + edx + 0xffffffffu);
/* 81598d: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 815990: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 815993: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 815996: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 815997: fild dword ptr [ebp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 81599a: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 81599d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8159a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8159a1: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8159a4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8159a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8159a7: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 8159aa: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 8159ad: mov ecx, esi */
  ecx = esi;
/* 8159af: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8159b2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8159b4: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8159b7: fild dword ptr [ebp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8159ba: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8159bd: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 8159c0: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8159c3: call 0x6c10d7 */
  esp -= 4; W32(esp, 0x8159c8u); SPILL(); f_6c10d7(); if (g_unwind) return; RELOAD();
/* 8159c8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8159c9: jmp 0x815953 */
  goto L_815953;
L_8159cb: /* 8159cb: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 8159ce: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8159d0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8159d2: mov ecx, esi */
  ecx = esi;
/* 8159d4: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8159dau); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8159da: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8159dc: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
L_8159df: /* 8159df: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8159e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8159e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8159e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8159eb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8159ec: mov esp, ebp */
  esp = ebp;
/* 8159ee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8159ef: ret 0x10 */
  esp += 20; SPILL(); return;
L_8159f2: /* 8159f2: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 8159f5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8159f8: mov edx, esi */
  edx = esi;
/* 8159fa: call 0x812c70 */
  esp -= 4; W32(esp, 0x8159ffu); SPILL(); f_812c70(); if (g_unwind) return; RELOAD();
/* 8159ff: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 815a02: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 815a04: je 0x8159cb */
  if (zf) goto L_8159cb;
L_815a06: /* 815a06: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 815a09: je 0x8159cb */
  if (zf) goto L_8159cb;
L_815a0b: /* 815a0b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 815a0e: lea edi, [ebp - 0x48] */
  edi = (uint32_t)(ebp + 0xffffffb8u);
/* 815a11: call 0x812b30 */
  esp -= 4; W32(esp, 0x815a16u); SPILL(); f_812b30(); if (g_unwind) return; RELOAD();
/* 815a16: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 815a19: xor edi, edi */
  edi = 0;
/* 815a1b: jmp 0x815a20 */
  goto L_815a20;
L_815a20: /* 815a20: cmp edi, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 815a23: jge 0x8159df */
  if ((sf == of)) goto L_8159df;
L_815a25: /* 815a25: mov ecx, dword ptr [ebp + edi*4 - 0x48] */
  ecx = R32((uint32_t)(ebp + edi*4 + 0xffffffb8u));
/* 815a29: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 815a2c: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 815a32: mov edx, ecx */
  edx = ecx;
/* 815a34: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 815a36: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 815a39: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 815a3c: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 815a3d: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 815a40: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 815a43: mov eax, ecx */
  eax = ecx;
/* 815a45: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 815a48: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 815a49: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 815a4c: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 815a4f: mov edx, ecx */
  edx = ecx;
/* 815a51: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 815a54: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 815a56: lea eax, [edx + edx - 1] */
  eax = (uint32_t)(edx + edx + 0xffffffffu);
/* 815a5a: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 815a5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 815a5e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 815a61: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 815a64: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 815a67: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 815a6a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 815a6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 815a6e: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 815a71: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 815a74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 815a76: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 815a79: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 815a7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 815a7d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 815a7f: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 815a82: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 815a85: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 815a88: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 815a8b: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 815a8e: call 0x6c10d7 */
  esp -= 4; W32(esp, 0x815a93u); SPILL(); f_6c10d7(); if (g_unwind) return; RELOAD();
/* 815a93: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 815a94: jmp 0x815a20 */
  goto L_815a20;
}

void f_8159f2(void) {
  LOAD_REGS();
  goto L_8159f2;
L_8159cb: /* 8159cb: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 8159ce: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8159d0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8159d2: mov ecx, esi */
  ecx = esi;
/* 8159d4: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8159dau); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8159da: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8159dc: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
L_8159df: /* 8159df: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8159e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8159e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8159e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8159eb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8159ec: mov esp, ebp */
  esp = ebp;
/* 8159ee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8159ef: ret 0x10 */
  esp += 20; SPILL(); return;
L_8159f2: /* 8159f2: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 8159f5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8159f8: mov edx, esi */
  edx = esi;
/* 8159fa: call 0x812c70 */
  esp -= 4; W32(esp, 0x8159ffu); SPILL(); f_812c70(); if (g_unwind) return; RELOAD();
/* 8159ff: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 815a02: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 815a04: je 0x8159cb */
  if (zf) goto L_8159cb;
L_815a06: /* 815a06: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 815a09: je 0x8159cb */
  if (zf) goto L_8159cb;
L_815a0b: /* 815a0b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 815a0e: lea edi, [ebp - 0x48] */
  edi = (uint32_t)(ebp + 0xffffffb8u);
/* 815a11: call 0x812b30 */
  esp -= 4; W32(esp, 0x815a16u); SPILL(); f_812b30(); if (g_unwind) return; RELOAD();
/* 815a16: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 815a19: xor edi, edi */
  edi = 0;
/* 815a1b: jmp 0x815a20 */
  goto L_815a20;
L_815a20: /* 815a20: cmp edi, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 815a23: jge 0x8159df */
  if ((sf == of)) goto L_8159df;
L_815a25: /* 815a25: mov ecx, dword ptr [ebp + edi*4 - 0x48] */
  ecx = R32((uint32_t)(ebp + edi*4 + 0xffffffb8u));
/* 815a29: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 815a2c: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 815a32: mov edx, ecx */
  edx = ecx;
/* 815a34: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 815a36: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 815a39: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 815a3c: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 815a3d: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 815a40: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 815a43: mov eax, ecx */
  eax = ecx;
/* 815a45: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 815a48: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 815a49: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 815a4c: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 815a4f: mov edx, ecx */
  edx = ecx;
/* 815a51: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 815a54: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 815a56: lea eax, [edx + edx - 1] */
  eax = (uint32_t)(edx + edx + 0xffffffffu);
/* 815a5a: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 815a5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 815a5e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 815a61: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 815a64: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 815a67: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 815a6a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 815a6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 815a6e: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 815a71: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 815a74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 815a76: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 815a79: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 815a7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 815a7d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 815a7f: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 815a82: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 815a85: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 815a88: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 815a8b: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 815a8e: call 0x6c10d7 */
  esp -= 4; W32(esp, 0x815a93u); SPILL(); f_6c10d7(); if (g_unwind) return; RELOAD();
/* 815a93: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 815a94: jmp 0x815a20 */
  goto L_815a20;
}

void f_815a1d(void) {
  LOAD_REGS();
  goto L_815a1d;
L_8159df: /* 8159df: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8159e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8159e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8159e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8159eb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8159ec: mov esp, ebp */
  esp = ebp;
/* 8159ee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8159ef: ret 0x10 */
  esp += 20; SPILL(); return;
L_815a1d: /* 815a1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_815a20: /* 815a20: cmp edi, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 815a23: jge 0x8159df */
  if ((sf == of)) goto L_8159df;
L_815a25: /* 815a25: mov ecx, dword ptr [ebp + edi*4 - 0x48] */
  ecx = R32((uint32_t)(ebp + edi*4 + 0xffffffb8u));
/* 815a29: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 815a2c: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 815a32: mov edx, ecx */
  edx = ecx;
/* 815a34: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 815a36: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 815a39: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 815a3c: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 815a3d: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 815a40: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 815a43: mov eax, ecx */
  eax = ecx;
/* 815a45: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 815a48: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 815a49: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 815a4c: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 815a4f: mov edx, ecx */
  edx = ecx;
/* 815a51: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 815a54: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 815a56: lea eax, [edx + edx - 1] */
  eax = (uint32_t)(edx + edx + 0xffffffffu);
/* 815a5a: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 815a5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 815a5e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 815a61: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 815a64: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 815a67: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 815a6a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 815a6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 815a6e: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 815a71: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 815a74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 815a76: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 815a79: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 815a7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 815a7d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 815a7f: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 815a82: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 815a85: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 815a88: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 815a8b: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 815a8e: call 0x6c10d7 */
  esp -= 4; W32(esp, 0x815a93u); SPILL(); f_6c10d7(); if (g_unwind) return; RELOAD();
/* 815a93: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 815a94: jmp 0x815a20 */
  goto L_815a20;
}

void f_815a96(void) {
  LOAD_REGS();
L_815a96: /* 815a96: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 815a99: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 815a9e: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 815aa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 815aa2: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 815aa5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x815aaau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_815aaa(); return;
}

void f_815aaa(void) {
  LOAD_REGS();
L_815aaa: /* 815aaa: push 0xa14064 */
  { uint32_t v = 0xa14064u; esp -= 4; W32(esp, v); }
/* 815aaf: push 0xae2094 */
  { uint32_t v = 0xae2094u; esp -= 4; W32(esp, v); }
/* 815ab4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x815abau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 815aba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 815abd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 815abf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 815ac1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x815ac6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_815ac6: guest_badaddr(0x815ac6); return;
}

void f_815b50(void) {
  LOAD_REGS();
L_815b50: /* 815b50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 815b52: push 0x9d2b59 */
  { uint32_t v = 0x9d2b59u; esp -= 4; W32(esp, v); }
/* 815b57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 815b5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 815b5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 815b65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 815b66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 815b67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 815b68: mov esi, ecx */
  esi = ecx;
/* 815b6a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 815b6b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 815b6f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 815b72: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 815b74: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 815b7a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 815b82: jge 0x815b98 */
  if ((sf == of)) goto L_815b98;
L_815b84: /* 815b84: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 815b89: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 815b8e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 815b93: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x815b95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 815b95: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_815b98: /* 815b98: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 815b9b: jle 0x815bb1 */
  if ((zf || sf != of)) goto L_815bb1;
L_815b9d: /* 815b9d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 815ba2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 815ba7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 815bac: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x815baeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 815bae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_815bb1: /* 815bb1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 815bb3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 815bb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 815bb6: mov ecx, esi */
  ecx = esi;
/* 815bb8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x815bbeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 815bbe: mov ecx, esi */
  ecx = esi;
/* 815bc0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 815bc8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x815bceu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 815bce: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 815bd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 815bd3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 815bd4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 815bd5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 815bdc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 815bdf: ret  */
  esp += 4; SPILL(); return;
}

void f_815c10(void) {
  LOAD_REGS();
L_815c10: /* 815c10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 815c12: push 0x9d2b78 */
  { uint32_t v = 0x9d2b78u; esp -= 4; W32(esp, v); }
/* 815c17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 815c1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 815c1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 815c25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 815c26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 815c27: mov esi, ecx */
  esi = ecx;
/* 815c29: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x815c2fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 815c2f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 815c33: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 815c3a: mov eax, esi */
  eax = esi;
/* 815c3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 815c3d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 815c44: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 815c47: ret  */
  esp += 4; SPILL(); return;
}

void f_815c60(void) {
  LOAD_REGS();
L_815c60: /* 815c60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 815c61: mov ebp, esp */
  ebp = esp;
/* 815c63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 815c65: push 0x9d2b98 */
  { uint32_t v = 0x9d2b98u; esp -= 4; W32(esp, v); }
/* 815c6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 815c70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 815c71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 815c78: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 815c7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 815c7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 815c7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 815c7e: mov esi, ecx */
  esi = ecx;
/* 815c80: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 815c83: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 815c86: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 815c89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 815c8b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 815c92: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 815c96: je 0x815cb0 */
  if (zf) goto L_815cb0;
L_815c98: /* 815c98: push 0x1e9 */
  { uint32_t v = 0x1e9u; esp -= 4; W32(esp, v); }
/* 815c9d: push 0xae1f28 */
  { uint32_t v = 0xae1f28u; esp -= 4; W32(esp, v); }
/* 815ca2: push 0xae1f38 */
  { uint32_t v = 0xae1f38u; esp -= 4; W32(esp, v); }
/* 815ca7: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x815cadu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 815cad: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_815cb0: /* 815cb0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 815cb3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 815cb5: je 0x815ce0 */
  if (zf) goto L_815ce0;
L_815cb7: /* 815cb7: mov ecx, dword ptr [eax - 4] */
  ecx = R32((uint32_t)(eax + 0xfffffffcu));
/* 815cba: lea edi, [eax - 4] */
  edi = (uint32_t)(eax + 0xfffffffcu);
/* 815cbd: push 0x6c5e25 */
  { uint32_t v = 0x6c5e25u; esp -= 4; W32(esp, v); }
/* 815cc2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 815cc3: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 815cc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 815cc6: call 0x99ca3d */
  esp -= 4; W32(esp, 0x815ccbu); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 815ccb: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 815cd1: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 815cd3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 815cd5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 815cd6: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x815cd9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 815cd9: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
L_815ce0: /* 815ce0: mov ecx, esi */
  ecx = esi;
/* 815ce2: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 815ce9: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x815ceeu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 815cee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 815cf1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 815cf2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 815cf3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 815cfa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 815cfb: mov esp, ebp */
  esp = ebp;
/* 815cfd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 815cfe: ret  */
  esp += 4; SPILL(); return;
}

void f_815cff(void) {
  LOAD_REGS();
L_815cff: /* 815cff: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 815d02: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 815d07: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 815d0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 815d0b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 815d0e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x815d13u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_815d13(); return;
}

void f_815d13(void) {
  LOAD_REGS();
L_815d13: /* 815d13: push 0xa140a0 */
  { uint32_t v = 0xa140a0u; esp -= 4; W32(esp, v); }
/* 815d18: push 0xae1f4c */
  { uint32_t v = 0xae1f4cu; esp -= 4; W32(esp, v); }
/* 815d1d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x815d23u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 815d23: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 815d26: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 815d28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 815d2a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x815d2fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_815d2f: guest_badaddr(0x815d2f); return;
}

void f_815d70(void) {
  LOAD_REGS();
L_815d70: /* 815d70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 815d71: mov ebp, esp */
  ebp = esp;
/* 815d73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 815d75: push 0x9d2bb0 */
  { uint32_t v = 0x9d2bb0u; esp -= 4; W32(esp, v); }
/* 815d7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 815d80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 815d81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 815d88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 815d8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 815d8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 815d8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 815d8e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 815d91: mov edi, ecx */
  edi = ecx;
/* 815d93: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 815d9a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_815da0: /* 815da0: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 815da3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 815da5: je 0x815dfe */
  if (zf) goto L_815dfe;
L_815da7: /* 815da7: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 815da9: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 815dab: mov eax, dword ptr [ebx + 0x120] */
  eax = R32((uint32_t)(ebx + 0x120u));
/* 815db1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 815db3: jle 0x815dc0 */
  if ((zf || sf != of)) goto L_815dc0;
L_815db5: /* 815db5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 815db8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 815dba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 815dbb: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x815dbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 815dbe: jmp 0x815da0 */
  goto L_815da0;
L_815dc0: /* 815dc0: xor esi, esi */
  esi = 0;
L_815dc2: /* 815dc2: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 815dc5: jge 0x815ddc */
  if ((sf == of)) goto L_815ddc;
L_815dc7: /* 815dc7: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 815dc9: cmp dword ptr [eax + esi*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 815dcc: jne 0x815dd9 */
  if (!zf) goto L_815dd9;
L_815dce: /* 815dce: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 815dd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 815dd1: mov ecx, edi */
  ecx = edi;
/* 815dd3: call 0x6c7dfb */
  esp -= 4; W32(esp, 0x815dd8u); SPILL(); f_6c7dfb(); if (g_unwind) return; RELOAD();
/* 815dd8: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_815dd9: /* 815dd9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 815dda: jmp 0x815dc2 */
  goto L_815dc2;
L_815ddc: /* 815ddc: mov ecx, ebx */
  ecx = ebx;
/* 815dde: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x815de4u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 815de4: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 815dea: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 815dec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 815ded: push 0xae1f58 */
  { uint32_t v = 0xae1f58u; esp -= 4; W32(esp, v); }
/* 815df2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 815df3: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x815df9u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 815df9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 815dfc: jmp 0x815da0 */
  goto L_815da0;
L_815dfe: /* 815dfe: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 815e01: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 815e03: je 0x815e52 */
  if (zf) goto L_815e52;
L_815e05: /* 815e05: xor esi, esi */
  esi = 0;
L_815e07: /* 815e07: cmp esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 815e0a: jge 0x815e52 */
  if ((sf == of)) goto L_815e52;
L_815e0c: /* 815e0c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 815e0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 815e10: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 815e13: mov ecx, esi */
  ecx = esi;
/* 815e15: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 815e18: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 815e1a: call 0x6c6afa */
  esp -= 4; W32(esp, 0x815e1fu); SPILL(); f_6c6afa(); if (g_unwind) return; RELOAD();
/* 815e1f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 815e20: jmp 0x815e07 */
  goto L_815e07;
L_815e52: /* 815e52: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 815e55: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 815e56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 815e57: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 815e5e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 815e5f: mov esp, ebp */
  esp = ebp;
/* 815e61: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 815e62: ret 4 */
  esp += 8; SPILL(); return;
}

void f_815e22(void) {
  LOAD_REGS();
L_815e22: /* 815e22: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 815e25: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 815e2a: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 815e2d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 815e2e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 815e31: call 0x99caf8 */
  esp -= 4; W32(esp, 0x815e36u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_815e36(); return;
}

void f_815e36(void) {
  LOAD_REGS();
L_815e36: /* 815e36: push 0xa140e0 */
  { uint32_t v = 0xa140e0u; esp -= 4; W32(esp, v); }
/* 815e3b: push 0xae1fc0 */
  { uint32_t v = 0xae1fc0u; esp -= 4; W32(esp, v); }
/* 815e40: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x815e46u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 815e46: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 815e49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 815e4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 815e4d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x815e52u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 815e52: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 815e55: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 815e56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 815e57: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 815e5e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 815e5f: mov esp, ebp */
  esp = ebp;
/* 815e61: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 815e62: ret 4 */
  esp += 8; SPILL(); return;
}

void f_815eb0(void) {
  LOAD_REGS();
L_815eb0: /* 815eb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 815eb1: mov ebp, esp */
  ebp = esp;
/* 815eb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 815eb5: push 0x9d2bc8 */
  { uint32_t v = 0x9d2bc8u; esp -= 4; W32(esp, v); }
/* 815eba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 815ec0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 815ec1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 815ec8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 815ecb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 815ecc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 815ecd: mov esi, ecx */
  esi = ecx;
/* 815ecf: cmp dword ptr [esi + 4], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 815ed3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 815ed4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 815ed7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 815ede: jl 0x81600e */
  if ((sf != of)) goto L_81600e;
L_815ee4: /* 815ee4: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 815ee7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 815ee9: jne 0x81600e */
  if (!zf) goto L_81600e;
L_815eef: /* 815eef: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 815ef2: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 815ef5: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 815efb: fcomp dword ptr [0xa09ac8] */
  fpu_com(ST0, F32((uint32_t)(0xa09ac8u)));
  FPOP();
/* 815f01: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 815f03: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 815f06: jne 0x81600e */
  if (!zf) goto L_81600e;
L_815f0c: /* 815f0c: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 815f12: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 815f14: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 815f16: push 0xae209c */
  { uint32_t v = 0xae209cu; esp -= 4; W32(esp, v); }
/* 815f1b: push 0x84 */
  { uint32_t v = 0x84u; esp -= 4; W32(esp, v); }
/* 815f20: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x815f22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 815f22: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 815f24: je 0x815f45 */
  if (zf) goto L_815f45;
L_815f26: /* 815f26: push 0x6c5e25 */
  { uint32_t v = 0x6c5e25u; esp -= 4; W32(esp, v); }
/* 815f2b: push 0x6c2491 */
  { uint32_t v = 0x6c2491u; esp -= 4; W32(esp, v); }
/* 815f30: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 815f32: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 815f35: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 815f37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 815f38: mov dword ptr [eax], 8 */
  W32((uint32_t)(eax), 0x8u);
/* 815f3e: call 0x99cafe */
  esp -= 4; W32(esp, 0x815f43u); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 815f43: jmp 0x815f47 */
  goto L_815f47;
L_815f45: /* 815f45: xor edi, edi */
  edi = 0;
L_815f47: /* 815f47: add dword ptr [0xcc5bc4], 0x80 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcc5bc4u))); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(0xcc5bc4u), r);
  }
/* 815f51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 815f52: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 815f55: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 815f58: call 0x6cab5f */
  esp -= 4; W32(esp, 0x815f5du); SPILL(); f_6cab5f(); if (g_unwind) return; RELOAD();
/* 815f5d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 815f5f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 815f61: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 815f64: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 815f68: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x815f6eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 815f6e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 815f71: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 815f74: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 815f77: xor eax, eax */
  eax = 0;
/* 815f79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_815f80: /* 815f80: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 815f83: jge 0x815f88 */
  if ((sf == of)) goto L_815f88;
L_815f85: /* 815f85: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 815f86: jmp 0x815f80 */
  goto L_815f80;
L_815f88: /* 815f88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 815f8a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 815f8c: mov ecx, esi */
  ecx = esi;
/* 815f8e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x815f94u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 815f94: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 815f97: xor edi, edi */
  edi = 0;
/* 815f99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_815fa0: /* 815fa0: cmp edi, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 815fa3: jge 0x815fef */
  if ((sf == of)) goto L_815fef;
L_815fa5: /* 815fa5: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 815fa8: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 815fab: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 815fae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 815faf: add ecx, 0x11c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x11cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 815fb5: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 815fb8: call 0x6c1424 */
  esp -= 4; W32(esp, 0x815fbdu); SPILL(); f_6c1424(); if (g_unwind) return; RELOAD();
/* 815fbd: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 815fc0: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 815fc3: test dword ptr [eax + 0x80], 0x10000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 815fcd: je 0x815fdf */
  if (zf) goto L_815fdf;
L_815fcf: /* 815fcf: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 815fd2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 815fd3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 815fd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 815fd5: mov ecx, esi */
  ecx = esi;
/* 815fd7: call 0x6c5623 */
  esp -= 4; W32(esp, 0x815fdcu); SPILL(); f_6c5623(); if (g_unwind) return; RELOAD();
/* 815fdc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 815fdd: jmp 0x815fa0 */
  goto L_815fa0;
L_815fdf: /* 815fdf: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 815fe2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 815fe3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 815fe4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 815fe5: mov ecx, esi */
  ecx = esi;
/* 815fe7: call 0x6cc5b3 */
  esp -= 4; W32(esp, 0x815fecu); SPILL(); f_6cc5b3(); if (g_unwind) return; RELOAD();
/* 815fec: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 815fed: jmp 0x815fa0 */
  goto L_815fa0;
L_815fef: /* 815fef: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 815ff2: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 815ff6: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x815ffbu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 815ffb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 815ffe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 816005: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 816006: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 816007: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 816008: mov esp, ebp */
  esp = ebp;
/* 81600a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81600b: ret 0xc */
  esp += 16; SPILL(); return;
L_81600e: /* 81600e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 816010: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 816012: mov ecx, esi */
  ecx = esi;
/* 816014: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x81601au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 81601a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 81601d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 81601f: lea edi, [ecx + 0x11c] */
  edi = (uint32_t)(ecx + 0x11cu);
/* 816025: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 816027: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 81602a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81602c: mov ecx, edi */
  ecx = edi;
/* 81602e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x816034u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 816034: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 816036: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 816039: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81603c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81603d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81603e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 816045: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 816046: mov esp, ebp */
  esp = ebp;
/* 816048: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 816049: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_81604c(void) {
  LOAD_REGS();
L_81604c: /* 81604c: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81604f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 816054: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 816057: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 816058: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 81605b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x816060u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_816060(); return;
}

void f_816060(void) {
  LOAD_REGS();
L_816060: /* 816060: push 0xa14128 */
  { uint32_t v = 0xa14128u; esp -= 4; W32(esp, v); }
/* 816065: push 0xae20b4 */
  { uint32_t v = 0xae20b4u; esp -= 4; W32(esp, v); }
/* 81606a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x816070u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 816070: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 816073: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 816075: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 816077: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81607cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_81607c: guest_badaddr(0x81607c); return;
}

void f_816100(void) {
  LOAD_REGS();
L_816100: /* 816100: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 816101: mov ebp, esp */
  ebp = esp;
/* 816103: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 816105: push 0x9d2be0 */
  { uint32_t v = 0x9d2be0u; esp -= 4; W32(esp, v); }
/* 81610a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 816110: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 816111: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 816118: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81611b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81611c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81611d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81611e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 816121: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 816124: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 816127: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 81612e: call dword ptr [0xcfa370] */
  esp -= 4; W32(esp, 0x816134u); SPILL(); f_4e205e(); if (g_unwind) return; /* Core!??0FBox@@QAE@XZ */ RELOAD();
/* 816134: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 816137: mov esi, ebx */
  esi = ebx;
/* 816139: lea edi, [ebp - 0x54] */
  edi = (uint32_t)(ebp + 0xffffffacu);
/* 81613c: call 0x812940 */
  esp -= 4; W32(esp, 0x816141u); SPILL(); f_812940(); if (g_unwind) return; RELOAD();
/* 816141: mov eax, dword ptr [0xcd8a5c] */
  eax = R32((uint32_t)(0xcd8a5cu));
/* 816146: mov ecx, 7 */
  ecx = 0x7u;
/* 81614b: lea esi, [ebp - 0x54] */
  esi = (uint32_t)(ebp + 0xffffffacu);
/* 81614e: lea edi, [ebp - 0x38] */
  edi = (uint32_t)(ebp + 0xffffffc8u);
/* 816151: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 816153: lea esi, [eax + 0x48] */
  esi = (uint32_t)(eax + 0x48u);
/* 816156: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 816158: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81615a: mov ecx, esi */
  ecx = esi;
/* 81615c: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 81615f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x816165u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 816165: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 816167: mov edi, eax */
  edi = eax;
/* 816169: imul edi, edi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x1cu);
  edi = (uint32_t)r;
  }
/* 81616c: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 81616e: mov ecx, 7 */
  ecx = 0x7u;
/* 816173: lea esi, [ebp - 0x38] */
  esi = (uint32_t)(ebp + 0xffffffc8u);
/* 816176: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 816178: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 81617b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 81617d: add esi, 0x54 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 816180: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 816182: mov ecx, esi */
  ecx = esi;
/* 816184: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x81618au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 81618a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 81618c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 81618f: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 816192: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 816195: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 816198: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81619a: je 0x816256 */
  if (zf) goto L_816256;
L_8161a0: /* 8161a0: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8161a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8161a5: je 0x816256 */
  if (zf) goto L_816256;
L_8161ab: /* 8161ab: xor esi, esi */
  esi = 0;
/* 8161ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8161b0: /* 8161b0: cmp esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8161b3: jge 0x816256 */
  if ((sf == of)) goto L_816256;
L_8161b9: /* 8161b9: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 8161bc: mov eax, esi */
  eax = esi;
/* 8161be: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8161c4: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8161c6: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8161c9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8161ca: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8161cd: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 8161d0: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8161d3: mov ecx, esi */
  ecx = esi;
/* 8161d5: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8161d8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8161d9: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8161dc: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 8161df: mov edx, esi */
  edx = esi;
/* 8161e1: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8161e4: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 8161e6: lea eax, [edx + edx - 1] */
  eax = (uint32_t)(edx + edx + 0xffffffffu);
/* 8161ea: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8161ed: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8161f0: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8161f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8161f4: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8161f7: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 8161fa: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8161fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8161fe: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 816201: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 816202: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 816205: mov ecx, esi */
  ecx = esi;
/* 816207: fadd dword ptr [ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4u)));
/* 81620a: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 81620d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81620f: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 816212: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 816215: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 816218: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 81621b: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 81621e: call 0x6c81f2 */
  esp -= 4; W32(esp, 0x816223u); SPILL(); f_6c81f2(); if (g_unwind) return; RELOAD();
/* 816223: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 816224: jmp 0x8161b0 */
  goto L_8161b0;
L_816256: /* 816256: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 816259: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81625a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81625b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 816262: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 816263: mov esp, ebp */
  esp = ebp;
/* 816265: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 816266: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_816226(void) {
  LOAD_REGS();
L_816226: /* 816226: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 816229: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81622e: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 816231: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 816232: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 816235: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81623au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81623a(); return;
}

void f_81623a(void) {
  LOAD_REGS();
L_81623a: /* 81623a: push 0xa14164 */
  { uint32_t v = 0xa14164u; esp -= 4; W32(esp, v); }
/* 81623f: push 0xae2118 */
  { uint32_t v = 0xae2118u; esp -= 4; W32(esp, v); }
/* 816244: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81624au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81624a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81624d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81624f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 816251: call 0x99caf8 */
  esp -= 4; W32(esp, 0x816256u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 816256: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 816259: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81625a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81625b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 816262: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 816263: mov esp, ebp */
  esp = ebp;
/* 816265: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 816266: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8162d0(void) {
  LOAD_REGS();
L_8162d0: /* 8162d0: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8162d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8162d4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8162d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8162d6: mov ebp, ecx */
  ebp = ecx;
/* 8162d8: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 8162db: xor esi, esi */
  esi = 0;
/* 8162dd: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8162df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8162e0: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 8162e4: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 8162e8: jle 0x8163be */
  if ((zf || sf != of)) goto L_8163be;
L_8162ee: /* 8162ee: mov edi, edi */
  edi = edi;
L_8162f0: /* 8162f0: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 8162f3: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 8162f6: test dword ptr [ecx + 0x80], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x80u))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 816300: je 0x8163ae */
  if (zf) goto L_8163ae;
L_816306: /* 816306: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 81630a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81630c: jne 0x81633d */
  if (!zf) goto L_81633d;
L_81630e: /* 81630e: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 816312: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 816313: mov byte ptr [esp + 0x14], 0x32 */
  W8((uint32_t)(esp + 0x14u), 0x32u);
/* 816318: mov byte ptr [esp + 0x15], 0x3c */
  W8((uint32_t)(esp + 0x15u), 0x3cu);
/* 81631d: mov byte ptr [esp + 0x16], 0xff */
  W8((uint32_t)(esp + 0x16u), 0xffu);
/* 816322: mov byte ptr [esp + 0x17], 0xff */
  W8((uint32_t)(esp + 0x17u), 0xffu);
/* 816327: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 81632b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81632d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81632e: mov ecx, ebp */
  ecx = ebp;
/* 816330: call 0x6c81f2 */
  esp -= 4; W32(esp, 0x816335u); SPILL(); f_6c81f2(); if (g_unwind) return; RELOAD();
/* 816335: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
L_81633d: /* 81633d: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 816340: mov esi, dword ptr [ecx + esi*4] */
  esi = R32((uint32_t)(ecx + esi*4));
/* 816343: mov eax, dword ptr [0xcd8a5c] */
  eax = R32((uint32_t)(0xcd8a5cu));
/* 816348: add esi, 0x128 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 81634e: mov ecx, 7 */
  ecx = 0x7u;
/* 816353: lea edi, [esp + 0x20] */
  edi = (uint32_t)(esp + 0x20u);
/* 816357: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 816359: lea esi, [eax + 0x48] */
  esi = (uint32_t)(eax + 0x48u);
/* 81635c: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 81635e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 816360: mov ecx, esi */
  ecx = esi;
/* 816362: mov byte ptr [esp + 0x1c], 0xff */
  W8((uint32_t)(esp + 0x1cu), 0xffu);
/* 816367: mov byte ptr [esp + 0x1d], 0 */
  W8((uint32_t)(esp + 0x1du), 0x0u);
/* 81636c: mov byte ptr [esp + 0x1e], 0xff */
  W8((uint32_t)(esp + 0x1eu), 0xffu);
/* 816371: mov byte ptr [esp + 0x1f], 0xff */
  W8((uint32_t)(esp + 0x1fu), 0xffu);
/* 816376: mov ebx, eax */
  ebx = eax;
/* 816378: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x81637eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 81637e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 816380: mov edi, eax */
  edi = eax;
/* 816382: imul edi, edi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x1cu);
  edi = (uint32_t)r;
  }
/* 816385: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 816387: mov ecx, 7 */
  ecx = 0x7u;
/* 81638c: lea esi, [esp + 0x20] */
  esi = (uint32_t)(esp + 0x20u);
/* 816390: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 816392: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 816394: lea esi, [ebx + 0x54] */
  esi = (uint32_t)(ebx + 0x54u);
/* 816397: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 816399: mov ecx, esi */
  ecx = esi;
/* 81639b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8163a1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8163a1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8163a3: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8163a7: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 8163ab: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_8163ae: /* 8163ae: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 8163b1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8163b2: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8163b4: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 8163b8: jl 0x8162f0 */
  if ((sf != of)) goto L_8162f0;
L_8163be: /* 8163be: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8163c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8163c3: je 0x81644d */
  if (zf) goto L_81644d;
L_8163c9: /* 8163c9: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 8163cd: xor esi, esi */
  esi = 0;
/* 8163cf: xor edi, edi */
  edi = 0;
L_8163d1: /* 8163d1: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 8163d5: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 8163d8: mov edx, esi */
  edx = esi;
/* 8163da: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8163e0: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8163e2: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8163e5: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8163e6: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 8163ea: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 8163ee: fild dword ptr [esp + 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 8163f2: mov ecx, esi */
  ecx = esi;
/* 8163f4: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8163f7: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8163f8: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 8163fc: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 816400: mov edx, esi */
  edx = esi;
/* 816402: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 816405: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 816407: lea ecx, [edx + edx - 1] */
  ecx = (uint32_t)(edx + edx + 0xffffffffu);
/* 81640b: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 81640f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 816410: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 816414: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 816415: fild dword ptr [esp + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 816419: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 81641d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 816420: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 816422: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 816426: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 816429: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 81642d: fild dword ptr [esp + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 816431: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 816435: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 816438: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 81643c: call 0x6c5731 */
  esp -= 4; W32(esp, 0x816441u); SPILL(); f_6c5731(); if (g_unwind) return; RELOAD();
/* 816441: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 816444: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 816445: cmp edi, 0x80 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81644b: jl 0x8163d1 */
  if ((sf != of)) goto L_8163d1;
L_81644d: /* 81644d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81644e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81644f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 816450: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 816451: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 816454: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8164d0(void) {
  LOAD_REGS();
L_8164d0: /* 8164d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8164d1: mov ebp, esp */
  ebp = esp;
/* 8164d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8164d5: push 0x9d2bf8 */
  { uint32_t v = 0x9d2bf8u; esp -= 4; W32(esp, v); }
/* 8164da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8164e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8164e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8164e8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8164eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8164ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8164ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8164ee: mov esi, ecx */
  esi = ecx;
/* 8164f0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8164f3: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8164f6: xor edi, edi */
  edi = 0;
/* 8164f8: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 8164fb: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8164fe: mov dword ptr [esi], 0xa0a48c */
  W32((uint32_t)(esi), 0xa0a48cu);
/* 816504: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x81650au); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 81650a: lea ecx, [esi + 0x6c] */
  ecx = (uint32_t)(esi + 0x6cu);
/* 81650d: call dword ptr [0xcfa370] */
  esp -= 4; W32(esp, 0x816513u); SPILL(); f_4e205e(); if (g_unwind) return; /* Core!??0FBox@@QAE@XZ */ RELOAD();
/* 816513: mov dword ptr [esi + 8], 0x1fffffff */
  W32((uint32_t)(esi + 0x8u), 0x1fffffffu);
/* 81651a: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 81651f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 816521: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 816523: push 0xae2120 */
  { uint32_t v = 0xae2120u; esp -= 4; W32(esp, v); }
/* 816528: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 81652a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 81652e: mov dword ptr [0xcc5bc4], 0x114 */
  W32((uint32_t)(0xcc5bc4u), 0x114u);
/* 816538: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x81653au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81653a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81653c: je 0x816547 */
  if (zf) goto L_816547;
L_81653e: /* 81653e: mov ecx, eax */
  ecx = eax;
/* 816540: call 0x6c2491 */
  esp -= 4; W32(esp, 0x816545u); SPILL(); f_6c2491(); if (g_unwind) return; RELOAD();
/* 816545: jmp 0x816549 */
  goto L_816549;
L_816547: /* 816547: xor eax, eax */
  eax = 0;
L_816549: /* 816549: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81654c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 81654f: mov eax, dword ptr [0xcc5bc4] */
  eax = R32((uint32_t)(0xcc5bc4u));
/* 816554: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 816557: mov dword ptr [esi + 0xa4], edi */
  W32((uint32_t)(esi + 0xa4u), edi);
/* 81655d: mov dword ptr [esi + 0xa8], edi */
  W32((uint32_t)(esi + 0xa8u), edi);
/* 816563: mov dword ptr [esi + 0xac], edi */
  W32((uint32_t)(esi + 0xacu), edi);
/* 816569: mov dword ptr [esi + 0xb0], edi */
  W32((uint32_t)(esi + 0xb0u), edi);
/* 81656f: mov dword ptr [esi + 0xb4], edi */
  W32((uint32_t)(esi + 0xb4u), edi);
/* 816575: mov dword ptr [esi + 0xb8], edi */
  W32((uint32_t)(esi + 0xb8u), edi);
/* 81657b: mov dword ptr [esi + 0xbc], edi */
  W32((uint32_t)(esi + 0xbcu), edi);
/* 816581: mov dword ptr [esi + 0xdc], edi */
  W32((uint32_t)(esi + 0xdcu), edi);
/* 816587: mov dword ptr [esi + 0xe0], edi */
  W32((uint32_t)(esi + 0xe0u), edi);
/* 81658d: mov dword ptr [esi + 0xe4], edi */
  W32((uint32_t)(esi + 0xe4u), edi);
/* 816593: mov dword ptr [esi + 0xe8], edi */
  W32((uint32_t)(esi + 0xe8u), edi);
/* 816599: mov dword ptr [esi + 0xec], edi */
  W32((uint32_t)(esi + 0xecu), edi);
/* 81659f: mov dword ptr [esi + 0xf0], edi */
  W32((uint32_t)(esi + 0xf0u), edi);
/* 8165a5: mov dword ptr [esi + 0xf4], edi */
  W32((uint32_t)(esi + 0xf4u), edi);
/* 8165ab: mov dword ptr [esi + 0xc0], edi */
  W32((uint32_t)(esi + 0xc0u), edi);
/* 8165b1: mov dword ptr [esi + 0xc4], edi */
  W32((uint32_t)(esi + 0xc4u), edi);
/* 8165b7: mov dword ptr [esi + 0xc8], edi */
  W32((uint32_t)(esi + 0xc8u), edi);
/* 8165bd: mov dword ptr [esi + 0xcc], edi */
  W32((uint32_t)(esi + 0xccu), edi);
/* 8165c3: mov dword ptr [esi + 0xd0], edi */
  W32((uint32_t)(esi + 0xd0u), edi);
/* 8165c9: mov dword ptr [esi + 0xd4], edi */
  W32((uint32_t)(esi + 0xd4u), edi);
/* 8165cf: mov dword ptr [esi + 0xd8], edi */
  W32((uint32_t)(esi + 0xd8u), edi);
/* 8165d5: mov dword ptr [esi + 0xf8], edi */
  W32((uint32_t)(esi + 0xf8u), edi);
/* 8165db: mov dword ptr [esi + 0xfc], edi */
  W32((uint32_t)(esi + 0xfcu), edi);
/* 8165e1: mov dword ptr [esi + 0x100], edi */
  W32((uint32_t)(esi + 0x100u), edi);
/* 8165e7: mov dword ptr [esi + 0x104], edi */
  W32((uint32_t)(esi + 0x104u), edi);
/* 8165ed: mov dword ptr [esi + 0x108], edi */
  W32((uint32_t)(esi + 0x108u), edi);
/* 8165f3: mov dword ptr [esi + 0x10c], edi */
  W32((uint32_t)(esi + 0x10cu), edi);
/* 8165f9: mov dword ptr [esi + 0x110], edi */
  W32((uint32_t)(esi + 0x110u), edi);
/* 8165ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 816600: mov dword ptr [0xcc5bc4], eax */
  W32((uint32_t)(0xcc5bc4u), eax);
/* 816605: mov eax, esi */
  eax = esi;
/* 816607: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 816608: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81660f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 816610: mov esp, ebp */
  esp = ebp;
/* 816612: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 816613: ret  */
  esp += 4; SPILL(); return;
}

void f_816614(void) {
  LOAD_REGS();
L_816614: /* 816614: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 816617: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81661c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 81661f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 816620: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 816623: call 0x99caf8 */
  esp -= 4; W32(esp, 0x816628u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_816628(); return;
}

void f_816628(void) {
  LOAD_REGS();
L_816628: /* 816628: push 0xa14190 */
  { uint32_t v = 0xa14190u; esp -= 4; W32(esp, v); }
/* 81662d: push 0xae2154 */
  { uint32_t v = 0xae2154u; esp -= 4; W32(esp, v); }
/* 816632: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x816638u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 816638: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81663b: xor edi, edi */
  edi = 0;
/* 81663d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81663e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81663f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x816644u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_816644: guest_badaddr(0x816644); return;
}

void f_8166b0(void) {
  LOAD_REGS();
L_8166b0: /* 8166b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8166b1: mov esi, ecx */
  esi = ecx;
/* 8166b3: call 0x6c5e25 */
  esp -= 4; W32(esp, 0x8166b8u); SPILL(); f_6c5e25(); if (g_unwind) return; RELOAD();
/* 8166b8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8166bd: je 0x8166cc */
  if (zf) goto L_8166cc;
L_8166bf: /* 8166bf: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8166c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8166c6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8166c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8166c9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8166ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8166cc: /* 8166cc: mov eax, esi */
  eax = esi;
/* 8166ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8166cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8166f0(void) {
  LOAD_REGS();
L_8166f0: /* 8166f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8166f1: mov ebp, esp */
  ebp = esp;
/* 8166f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8166f5: push 0x9d2c10 */
  { uint32_t v = 0x9d2c10u; esp -= 4; W32(esp, v); }
/* 8166fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 816700: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 816701: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 816708: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81670b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81670c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 81670f: test byte ptr [ebx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 816716: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 816717: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 816718: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81671b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 816722: jne 0x81673c */
  if (!zf) goto L_81673c;
L_816724: /* 816724: push 0x63d */
  { uint32_t v = 0x63du; esp -= 4; W32(esp, v); }
/* 816729: push 0xae22cc */
  { uint32_t v = 0xae22ccu; esp -= 4; W32(esp, v); }
/* 81672e: push 0xae22dc */
  { uint32_t v = 0xae22dcu; esp -= 4; W32(esp, v); }
/* 816733: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x816739u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 816739: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_81673c: /* 81673c: mov eax, dword ptr [ebx + 0x80] */
  eax = R32((uint32_t)(ebx + 0x80u));
/* 816742: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 816745: jne 0x8167aa */
  if (!zf) goto L_8167aa;
L_816747: /* 816747: lea esi, [ebx + 0x300] */
  esi = (uint32_t)(ebx + 0x300u);
/* 81674d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81674e: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 816754: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x81675au); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 81675a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81675c: je 0x8167aa */
  if (zf) goto L_8167aa;
L_81675e: /* 81675e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81675f: mov ecx, esi */
  ecx = esi;
/* 816761: call dword ptr [0xcfa5e0] */
  esp -= 4; W32(esp, 0x816767u); SPILL(); f_4e2e87(); if (g_unwind) return; /* Core!??8FVector@@QBEHABV0@@Z */ RELOAD();
/* 816767: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 816769: jne 0x81678a */
  if (!zf) goto L_81678a;
L_81676b: /* 81676b: mov ecx, ebx */
  ecx = ebx;
/* 81676d: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x816773u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 816773: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 816774: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 816779: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 81677b: push 0xae22f8 */
  { uint32_t v = 0xae22f8u; esp -= 4; W32(esp, v); }
/* 816780: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 816781: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x816787u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 816787: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_81678a: /* 81678a: mov ecx, ebx */
  ecx = ebx;
/* 81678c: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x816792u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 816792: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 816798: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 816799: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 81679b: push 0xae2370 */
  { uint32_t v = 0xae2370u; esp -= 4; W32(esp, v); }
/* 8167a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8167a1: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8167a7u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8167a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8167aa: /* 8167aa: xor eax, eax */
  eax = 0;
/* 8167ac: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8167b0: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_8167b3: /* 8167b3: cmp eax, dword ptr [ebx + 0x120] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x120u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8167b9: jge 0x816838 */
  if ((sf == of)) goto L_816838;
L_8167bb: /* 8167bb: mov ecx, dword ptr [ebx + 0x11c] */
  ecx = R32((uint32_t)(ebx + 0x11cu));
/* 8167c1: mov edi, dword ptr [ecx + eax*4] */
  edi = R32((uint32_t)(ecx + eax*4));
/* 8167c4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8167c6: jne 0x8167e0 */
  if (!zf) goto L_8167e0;
L_8167c8: /* 8167c8: push 0x661 */
  { uint32_t v = 0x661u; esp -= 4; W32(esp, v); }
/* 8167cd: push 0xae23ec */
  { uint32_t v = 0xae23ecu; esp -= 4; W32(esp, v); }
/* 8167d2: push 0xae23fc */
  { uint32_t v = 0xae23fcu; esp -= 4; W32(esp, v); }
/* 8167d7: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8167ddu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8167dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8167e0: /* 8167e0: xor esi, esi */
  esi = 0;
L_8167e2: /* 8167e2: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8167e5: jge 0x81682c */
  if ((sf == of)) goto L_81682c;
L_8167e7: /* 8167e7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8167e9: cmp dword ptr [edx + esi*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + esi*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8167ec: jne 0x8167f9 */
  if (!zf) goto L_8167f9;
L_8167ee: /* 8167ee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8167f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8167f1: mov ecx, edi */
  ecx = edi;
/* 8167f3: call 0x6c7dfb */
  esp -= 4; W32(esp, 0x8167f8u); SPILL(); f_6c7dfb(); if (g_unwind) return; RELOAD();
/* 8167f8: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_8167f9: /* 8167f9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8167fa: jmp 0x8167e2 */
  goto L_8167e2;
L_81682c: /* 81682c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 81682f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 816830: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 816833: jmp 0x8167b3 */
  goto L_8167b3;
L_816838: /* 816838: add ebx, 0x11c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x11cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 81683e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 816840: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 816842: mov ecx, ebx */
  ecx = ebx;
/* 816844: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 81684b: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x816851u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 816851: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 816854: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 816855: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 816856: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81685d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81685e: mov esp, ebp */
  esp = ebp;
/* 816860: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 816861: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8167fc(void) {
  LOAD_REGS();
L_8167fc: /* 8167fc: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8167ff: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 816804: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 816807: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 816808: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81680b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x816810u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_816810(); return;
}

void f_816810(void) {
  LOAD_REGS();
  goto L_816810;
L_8167b3: /* 8167b3: cmp eax, dword ptr [ebx + 0x120] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x120u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8167b9: jge 0x816838 */
  if ((sf == of)) goto L_816838;
L_8167bb: /* 8167bb: mov ecx, dword ptr [ebx + 0x11c] */
  ecx = R32((uint32_t)(ebx + 0x11cu));
/* 8167c1: mov edi, dword ptr [ecx + eax*4] */
  edi = R32((uint32_t)(ecx + eax*4));
/* 8167c4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8167c6: jne 0x8167e0 */
  if (!zf) goto L_8167e0;
L_8167c8: /* 8167c8: push 0x661 */
  { uint32_t v = 0x661u; esp -= 4; W32(esp, v); }
/* 8167cd: push 0xae23ec */
  { uint32_t v = 0xae23ecu; esp -= 4; W32(esp, v); }
/* 8167d2: push 0xae23fc */
  { uint32_t v = 0xae23fcu; esp -= 4; W32(esp, v); }
/* 8167d7: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8167ddu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8167dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8167e0: /* 8167e0: xor esi, esi */
  esi = 0;
L_8167e2: /* 8167e2: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8167e5: jge 0x81682c */
  if ((sf == of)) goto L_81682c;
L_8167e7: /* 8167e7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8167e9: cmp dword ptr [edx + esi*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + esi*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8167ec: jne 0x8167f9 */
  if (!zf) goto L_8167f9;
L_8167ee: /* 8167ee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8167f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8167f1: mov ecx, edi */
  ecx = edi;
/* 8167f3: call 0x6c7dfb */
  esp -= 4; W32(esp, 0x8167f8u); SPILL(); f_6c7dfb(); if (g_unwind) return; RELOAD();
/* 8167f8: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_8167f9: /* 8167f9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8167fa: jmp 0x8167e2 */
  goto L_8167e2;
L_816810: /* 816810: push 0xa1422c */
  { uint32_t v = 0xa1422cu; esp -= 4; W32(esp, v); }
/* 816815: push 0xae2404 */
  { uint32_t v = 0xae2404u; esp -= 4; W32(esp, v); }
/* 81681a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x816820u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 816820: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 816823: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 816825: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 816827: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81682cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_81682c: /* 81682c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 81682f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 816830: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 816833: jmp 0x8167b3 */
  goto L_8167b3;
L_816838: /* 816838: add ebx, 0x11c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x11cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 81683e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 816840: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 816842: mov ecx, ebx */
  ecx = ebx;
/* 816844: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 81684b: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x816851u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 816851: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 816854: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 816855: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 816856: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81685d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81685e: mov esp, ebp */
  esp = ebp;
/* 816860: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 816861: ret 4 */
  esp += 8; SPILL(); return;
}
