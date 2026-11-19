#include "recomp.h"
#include "rec_mod.h"

void f_8374ca(void) {
  LOAD_REGS();
L_8374ca: /* 8374ca: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8374cd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8374d2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8374d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8374d6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8374d9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8374deu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8374de(); return;
}

void f_8374de(void) {
  LOAD_REGS();
L_8374de: /* 8374de: push 0xa15be8 */
  { uint32_t v = 0xa15be8u; esp -= 4; W32(esp, v); }
/* 8374e3: push 0xae3bf0 */
  { uint32_t v = 0xae3bf0u; esp -= 4; W32(esp, v); }
/* 8374e8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8374eeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8374ee: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8374f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8374f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8374f5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8374fau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8374fa: guest_badaddr(0x8374fa); return;
}

void f_837590(void) {
  LOAD_REGS();
L_837590: /* 837590: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 837591: mov ebp, esp */
  ebp = esp;
/* 837593: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 837595: push 0x9d3380 */
  { uint32_t v = 0x9d3380u; esp -= 4; W32(esp, v); }
/* 83759a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8375a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8375a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8375a8: sub esp, 0x70 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8375ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8375ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8375ad: mov esi, ecx */
  esi = ecx;
/* 8375af: mov ecx, dword ptr [esi + 0xc0] */
  ecx = R32((uint32_t)(esi + 0xc0u));
/* 8375b5: mov al, byte ptr [ecx + 0x358] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x358u))) & 0xffu);
/* 8375bb: fld dword ptr [ecx + 0x350] */
  { double v = F32((uint32_t)(ecx + 0x350u)); FPUSH(v); }
/* 8375c1: xor ebx, ebx */
  ebx = 0;
/* 8375c3: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8375c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8375c6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8375c9: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8375cc: je 0x8375d4 */
  if (zf) goto L_8375d4;
L_8375ce: /* 8375ce: fsub dword ptr [0xa08704] */
  ST0 = ST0 - (F32((uint32_t)(0xa08704u)));
L_8375d4: /* 8375d4: fcomp dword ptr [esi + 0x178] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x178u)));
  FPOP();
/* 8375da: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8375dc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8375df: jne 0x83761a */
  if (!zf) goto L_83761a;
L_8375e1: /* 8375e1: mov al, byte ptr [ecx + 0x354] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x354u))) & 0xffu);
/* 8375e7: mov ecx, dword ptr [0xb7e3cc] */
  ecx = R32((uint32_t)(0xb7e3ccu));
/* 8375ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8375ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8375ef: mov ecx, esi */
  ecx = esi;
/* 8375f1: mov byte ptr [ebp + 0xb], al */
  W8((uint32_t)(ebp + 0xbu), (eax & 0xffu));
/* 8375f4: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x8375fau); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 8375fa: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8375fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8375fd: lea ecx, [ebp + 0xb] */
  ecx = (uint32_t)(ebp + 0xbu);
/* 837600: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 837601: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 837602: mov ecx, esi */
  ecx = esi;
/* 837604: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x837607u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_837607: /* 837607: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83760a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 837611: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 837612: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 837613: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 837614: mov esp, ebp */
  esp = ebp;
/* 837616: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 837617: ret 8 */
  esp += 12; SPILL(); return;
L_83761a: /* 83761a: cmp byte ptr [esi + 0xc8], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xc8u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 837620: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 837623: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 837626: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 837629: jne 0x837659 */
  if (!zf) goto L_837659;
L_83762b: /* 83762b: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 837631: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 837634: jne 0x837659 */
  if (!zf) goto L_837659;
L_837636: /* 837636: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83763c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 83763e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83763f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 837640: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0x837646u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 837646: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 837649: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83764a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83764b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 837652: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 837653: mov esp, ebp */
  esp = ebp;
/* 837655: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 837656: ret 8 */
  esp += 12; SPILL(); return;
L_837659: /* 837659: mov edx, dword ptr [esi + 0x88] */
  edx = R32((uint32_t)(esi + 0x88u));
/* 83765f: and edx, 0xfffdffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffdffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 837665: mov eax, edx */
  eax = edx;
/* 837667: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 837669: mov dword ptr [esi + 0x88], edx */
  W32((uint32_t)(esi + 0x88u), edx);
/* 83766f: mov dword ptr [ebp - 0x7c], ebx */
  W32((uint32_t)(ebp + 0xffffff84u), ebx);
/* 837672: mov dword ptr [ebp - 0x78], ebx */
  W32((uint32_t)(ebp + 0xffffff88u), ebx);
/* 837675: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 83767c: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 837683: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 83768a: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 837691: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 837698: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 83769f: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 8376a2: mov dword ptr [ebp - 0x58], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x3f800000u);
/* 8376a9: mov dword ptr [ebp - 0x54], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffacu), 0xffffffffu);
/* 8376b0: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* 8376b3: je 0x837733 */
  if (zf) goto L_837733;
L_8376b5: /* 8376b5: push 0xb61cc8 */
  { uint32_t v = 0xb61cc8u; esp -= 4; W32(esp, v); }
/* 8376ba: mov ecx, esi */
  ecx = esi;
/* 8376bc: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8376c2u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8376c2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8376c4: je 0x837733 */
  if (zf) goto L_837733;
L_8376c6: /* 8376c6: cmp dword ptr [esi + 0x348], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x348u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8376cc: je 0x837733 */
  if (zf) goto L_837733;
L_8376ce: /* 8376ce: xor ecx, ecx */
  ecx = 0;
/* 8376d0: xor eax, eax */
  eax = 0;
L_8376d2: /* 8376d2: cmp eax, dword ptr [esi + 0x114] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8376d8: jge 0x8376ee */
  if ((sf == of)) goto L_8376ee;
L_8376da: /* 8376da: mov edx, dword ptr [esi + 0x110] */
  edx = R32((uint32_t)(esi + 0x110u));
/* 8376e0: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8376e3: cmp edx, dword ptr [esi + 0x348] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x348u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8376e9: je 0x837733 */
  if (zf) goto L_837733;
L_8376eb: /* 8376eb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8376ec: jmp 0x8376d2 */
  goto L_8376d2;
L_8376ee: /* 8376ee: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8376f0: jne 0x837733 */
  if (!zf) goto L_837733;
L_8376f2: /* 8376f2: mov ecx, esi */
  ecx = esi;
/* 8376f4: mov dword ptr [esi + 0x348], ebx */
  W32((uint32_t)(esi + 0x348u), ebx);
/* 8376fa: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x837700u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 837700: mov ecx, eax */
  ecx = eax;
/* 837702: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x837708u); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 837708: mov ecx, esi */
  ecx = esi;
/* 83770a: mov edi, eax */
  edi = eax;
/* 83770c: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x837712u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 837712: mov ecx, eax */
  ecx = eax;
/* 837714: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x83771au); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 83771a: mov ecx, dword ptr [edi + 0x2d8] */
  ecx = R32((uint32_t)(edi + 0x2d8u));
/* 837720: mov edx, dword ptr [eax + 0x2d4] */
  edx = R32((uint32_t)(eax + 0x2d4u));
/* 837726: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 837727: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 837728: mov ecx, esi */
  ecx = esi;
/* 83772a: call 0x6c389b */
  esp -= 4; W32(esp, 0x83772fu); SPILL(); f_6c389b(); if (g_unwind) return; RELOAD();
/* 83772f: jmp 0x837733 */
  goto L_837733;
L_837731: /* 837731: xor ebx, ebx */
  ebx = 0;
L_837733: /* 837733: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 837736: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83773c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83773e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 837741: jne 0x837607 */
  if (!zf) goto L_837607;
L_837747: /* 837747: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 83774a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 83774b: lea edi, [esi + 0x194] */
  edi = (uint32_t)(esi + 0x194u);
/* 837751: mov ecx, edi */
  ecx = edi;
/* 837753: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 837756: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x83775cu); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 83775c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 83775e: jne 0x8377bd */
  if (!zf) goto L_8377bd;
L_837760: /* 837760: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 837763: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 837766: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 837769: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 83776c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 83776f: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 837772: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 837774: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 837777: fadd dword ptr [esi + 0x190] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x190u)));
/* 83777d: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 837780: fadd dword ptr [esi + 0x18c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x18cu)));
/* 837786: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 837789: fadd dword ptr [esi + 0x188] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x188u)));
/* 83778f: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 837792: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 837795: mov dword ptr [esi + 0x188], eax */
  W32((uint32_t)(esi + 0x188u), eax);
/* 83779b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 83779d: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8377a0: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8377a3: mov dword ptr [esi + 0x18c], ecx */
  W32((uint32_t)(esi + 0x18cu), ecx);
/* 8377a9: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8377ac: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8377af: mov ecx, esi */
  ecx = esi;
/* 8377b1: mov dword ptr [esi + 0x190], edx */
  W32((uint32_t)(esi + 0x190u), edx);
/* 8377b7: call dword ptr [eax + 0x11c] */
  { uint32_t t = R32((uint32_t)(eax + 0x11cu)); esp -= 4; W32(esp, 0x8377bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8377bd: /* 8377bd: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8377c0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8377c3: fmul dword ptr [esi + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x190u)));
/* 8377c9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8377ca: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8377cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8377ce: fmul dword ptr [esi + 0x18c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18cu)));
/* 8377d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8377d5: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8377d8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8377d9: fmul dword ptr [esi + 0x188] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x188u)));
/* 8377df: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 8377e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8377e3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8377e6: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 8377ec: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8377ef: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8377f1: mov edi, esp */
  edi = esp;
/* 8377f3: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8377f6: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 8377f8: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8377fb: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8377fe: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 837801: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 837804: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 837807: mov edi, dword ptr [ebp - 0x40] */
  edi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 83780a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83780d: mov eax, esp */
  eax = esp;
/* 83780f: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 837811: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 837814: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 837817: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83781d: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 837820: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 837823: mov dword ptr [ebp - 0x58], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x3f800000u);
/* 83782a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83782c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83782d: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 837834: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 837837: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x83783du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83783d: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 837840: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 837846: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 837848: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83784b: jp 0x837731 */
  if (pf) goto L_837731;
L_837851: /* 837851: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 837857: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83785a: jne 0x837731 */
  if (!zf) goto L_837731;
L_837860: /* 837860: test dword ptr [esi + 0x88], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83786a: jne 0x837731 */
  if (!zf) goto L_837731;
L_837870: /* 837870: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 837873: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 837875: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 837876: mov ecx, esi */
  ecx = esi;
/* 837878: call dword ptr [edx + 0x138] */
  { uint32_t t = R32((uint32_t)(edx + 0x138u)); esp -= 4; W32(esp, 0x83787eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83787e: xor ebx, ebx */
  ebx = 0;
/* 837880: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 837882: je 0x837898 */
  if (zf) goto L_837898;
L_837884: /* 837884: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 83788a: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 83788d: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 837890: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 837893: jmp 0x837733 */
  goto L_837733;
L_837898: /* 837898: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 83789b: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 83789e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83789f: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8378a2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8378a5: mov edx, esp */
  edx = esp;
/* 8378a7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8378a9: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8378ac: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8378af: mov ecx, esi */
  ecx = esi;
/* 8378b1: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8378b4: call 0x6cbd34 */
  esp -= 4; W32(esp, 0x8378b9u); SPILL(); f_6cbd34(); if (g_unwind) return; RELOAD();
/* 8378b9: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 8378bf: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8378c2: je 0x837733 */
  if (zf) goto L_837733;
L_8378c8: /* 8378c8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8378cb: mov eax, 2 */
  eax = 0x2u;
/* 8378d0: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8378d2: jge 0x8378e3 */
  if ((sf == of)) goto L_8378e3;
L_8378d4: /* 8378d4: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8378da: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 8378dd: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8378e0: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
L_8378e3: /* 8378e3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8378e6: mov cl, byte ptr [esi + 0x50] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 8378e9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8378ea: cmp cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8378ec: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8378ef: jne 0x837733 */
  if (!zf) goto L_837733;
L_8378f5: /* 8378f5: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8378f8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8378fb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8378fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8378fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8378ff: mov ecx, esi */
  ecx = esi;
/* 837901: call dword ptr [edx + 0x128] */
  { uint32_t t = R32((uint32_t)(edx + 0x128u)); esp -= 4; W32(esp, 0x837907u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 837907: jmp 0x837733 */
  goto L_837733;
}

void f_83790c(void) {
  LOAD_REGS();
L_83790c: /* 83790c: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83790f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 837914: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 837917: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 837918: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 83791b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x837920u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_837920(); return;
}

void f_837920(void) {
  LOAD_REGS();
L_837920: /* 837920: push 0xa15c1c */
  { uint32_t v = 0xa15c1cu; esp -= 4; W32(esp, v); }
/* 837925: push 0xae3c10 */
  { uint32_t v = 0xae3c10u; esp -= 4; W32(esp, v); }
/* 83792a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x837930u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 837930: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 837933: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 837935: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 837937: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83793cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_83793c: guest_badaddr(0x83793c); return;
}

void f_837a30(void) {
  LOAD_REGS();
L_837a30: /* 837a30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 837a31: mov ebp, esp */
  ebp = esp;
/* 837a33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 837a35: push 0x9d3390 */
  { uint32_t v = 0x9d3390u; esp -= 4; W32(esp, v); }
/* 837a3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 837a40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 837a41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 837a48: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 837a4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 837a4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 837a4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 837a4e: mov esi, ecx */
  esi = ecx;
/* 837a50: mov edi, dword ptr [esi + 0xd0] */
  edi = R32((uint32_t)(esi + 0xd0u));
/* 837a56: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 837a58: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 837a5b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 837a62: je 0x837a99 */
  if (zf) goto L_837a99;
L_837a64: /* 837a64: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 837a69: mov ecx, edi */
  ecx = edi;
/* 837a6b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x837a71u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 837a71: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 837a73: je 0x837a99 */
  if (zf) goto L_837a99;
L_837a75: /* 837a75: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 837a77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 837a78: mov ecx, edi */
  ecx = edi;
/* 837a7a: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x837a80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 837a80: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 837a86: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 837a88: je 0x837a99 */
  if (zf) goto L_837a99;
L_837a8a: /* 837a8a: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 837a8f: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x837a95u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 837a95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 837a97: jne 0x837ae8 */
  if (!zf) goto L_837ae8;
L_837a99: /* 837a99: lea eax, [esi + 0x188] */
  eax = (uint32_t)(esi + 0x188u);
/* 837a9f: mov edi, eax */
  edi = eax;
/* 837aa1: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 837aa8: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 837aab: add esi, 0x194 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 837ab1: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 837ab8: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 837abb: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 837abd: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 837abf: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 837ac6: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 837ac9: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 837acc: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 837acf: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 837ad2: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 837ad5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 837ad8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 837adf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 837ae0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 837ae1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 837ae2: mov esp, ebp */
  esp = ebp;
/* 837ae4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 837ae5: ret 4 */
  esp += 8; SPILL(); return;
L_837ae8: /* 837ae8: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 837aee: mov edx, ecx */
  edx = ecx;
/* 837af0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 837af2: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 837af5: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 837af8: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 837afb: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 837afe: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 837b04: mov edi, eax */
  edi = eax;
/* 837b06: shr edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 837b09: and eax, 0xfffffffb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 837b0c: and edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 837b0f: test eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 837b14: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 837b17: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 837b1d: jne 0x837b60 */
  if (!zf) goto L_837b60;
L_837b1f: /* 837b1f: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 837b22: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 837b25: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 837b28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 837b29: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 837b2c: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 837b2f: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 837b31: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 837b34: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 837b37: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 837b38: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 837b3b: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 837b3e: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 837b41: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 837b44: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x837b4au); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 837b4a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 837b4c: lea edx, [esi + 0x188] */
  edx = (uint32_t)(esi + 0x188u);
/* 837b52: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 837b54: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 837b57: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 837b5a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 837b5d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_837b60: /* 837b60: lea ecx, [edi*4] */
  ecx = (uint32_t)(edi*4);
/* 837b67: mov edi, dword ptr [esi + 0x88] */
  edi = R32((uint32_t)(esi + 0x88u));
/* 837b6d: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 837b6f: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 837b72: mov eax, edi */
  eax = edi;
/* 837b74: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 837b76: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 837b79: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 837b7a: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 837b80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 837b81: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 837b88: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 837b89: mov esp, ebp */
  esp = ebp;
/* 837b8b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 837b8c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_837b8f(void) {
  LOAD_REGS();
L_837b8f: /* 837b8f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 837b92: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 837b97: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 837b9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 837b9b: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 837b9e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x837ba3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_837ba3(); return;
}

void f_837ba3(void) {
  LOAD_REGS();
L_837ba3: /* 837ba3: push 0xa15c54 */
  { uint32_t v = 0xa15c54u; esp -= 4; W32(esp, v); }
/* 837ba8: push 0xae3c50 */
  { uint32_t v = 0xae3c50u; esp -= 4; W32(esp, v); }
/* 837bad: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x837bb3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 837bb3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 837bb6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 837bb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 837bba: call 0x99caf8 */
  esp -= 4; W32(esp, 0x837bbfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_837bbf: guest_badaddr(0x837bbf); return;
}

void f_837c30(void) {
  LOAD_REGS();
L_837c30: /* 837c30: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 837c33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 837c34: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 837c38: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 837c3b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 837c3e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 837c3f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 837c40: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 837c43: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 837c47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 837c48: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 837c4d: mov edi, ecx */
  edi = ecx;
/* 837c4f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 837c52: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 837c53: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x837c56u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 837c56: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 837c59: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 837c5a: mov eax, edx */
  eax = edx;
/* 837c5c: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 837c5f: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 837c62: jne 0x837c7a */
  if (!zf) goto L_837c7a;
L_837c64: /* 837c64: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 837c67: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 837c68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 837c6a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 837c6d: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 837c73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 837c74: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x837c7au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_837c7a: /* 837c7a: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 837c80: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 837c84: and ecx, 0xfffdffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffdffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 837c8a: mov dword ptr [edi + 0x88], ecx */
  W32((uint32_t)(edi + 0x88u), ecx);
/* 837c90: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 837c94: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 837c97: mov eax, esp */
  eax = esp;
/* 837c99: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 837c9b: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 837c9f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 837ca2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 837ca5: mov ecx, edi */
  ecx = edi;
/* 837ca7: call 0x6c5321 */
  esp -= 4; W32(esp, 0x837cacu); SPILL(); f_6c5321(); if (g_unwind) return; RELOAD();
/* 837cac: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 837cb0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 837cb1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 837cb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 837cb4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 837cb7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_837cf0(void) {
  LOAD_REGS();
L_837cf0: /* 837cf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 837cf1: mov ebp, esp */
  ebp = esp;
/* 837cf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 837cf5: push 0x9d33a0 */
  { uint32_t v = 0x9d33a0u; esp -= 4; W32(esp, v); }
/* 837cfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 837d00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 837d01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 837d08: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 837d0b: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 837d10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 837d11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 837d12: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 837d15: mov ecx, dword ptr [0xce847c] */
  ecx = R32((uint32_t)(0xce847cu));
/* 837d1b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 837d1c: xor esi, esi */
  esi = 0;
/* 837d1e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 837d21: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 837d24: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 837d27: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 837d29: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 837d2b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 837d2e: movzx eax, byte ptr [ecx + 0x50] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x50u)));
/* 837d32: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 837d35: cmp eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 837d38: ja 0x837d93 */
  if ((!cf && !zf)) goto L_837d93;
L_837d3a: /* 837d3a: movzx edx, byte ptr [eax + 0x837eb8] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x837eb8u)));
/* 837d41: jmp dword ptr [edx*4 + 0x837e9c] */
  switch (R32((uint32_t)(edx*4 + 0x837e9cu))) {
    case 0x837d48u: goto L_837d48;
    case 0x837d54u: goto L_837d54;
    case 0x837d63u: goto L_837d63;
    case 0x837d6eu: goto L_837d6e;
    case 0x837d79u: goto L_837d79;
    case 0x837d87u: goto L_837d87;
    case 0x837d93u: goto L_837d93;
    default: guest_badjump(0x837d41, R32((uint32_t)(edx*4 + 0x837e9cu))); return;
  }
L_837d48: /* 837d48: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 837d4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 837d4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 837d4d: call 0x6c6c99 */
  esp -= 4; W32(esp, 0x837d52u); SPILL(); f_6c6c99(); if (g_unwind) return; RELOAD();
/* 837d52: jmp 0x837d90 */
  goto L_837d90;
L_837d54: /* 837d54: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 837d57: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 837d59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 837d5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 837d5b: call dword ptr [edx + 0x128] */
  { uint32_t t = R32((uint32_t)(edx + 0x128u)); esp -= 4; W32(esp, 0x837d61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 837d61: jmp 0x837d90 */
  goto L_837d90;
L_837d63: /* 837d63: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 837d66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 837d67: call 0x6c2478 */
  esp -= 4; W32(esp, 0x837d6cu); SPILL(); f_6c2478(); if (g_unwind) return; RELOAD();
/* 837d6c: jmp 0x837d90 */
  goto L_837d90;
L_837d6e: /* 837d6e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 837d71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 837d72: call 0x6ca5a1 */
  esp -= 4; W32(esp, 0x837d77u); SPILL(); f_6ca5a1(); if (g_unwind) return; RELOAD();
/* 837d77: jmp 0x837d90 */
  goto L_837d90;
L_837d79: /* 837d79: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 837d7c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 837d7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 837d7f: call dword ptr [edx + 0x140] */
  { uint32_t t = R32((uint32_t)(edx + 0x140u)); esp -= 4; W32(esp, 0x837d85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 837d85: jmp 0x837d90 */
  goto L_837d90;
L_837d87: /* 837d87: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 837d8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 837d8b: call 0x6cba32 */
  esp -= 4; W32(esp, 0x837d90u); SPILL(); f_6cba32(); if (g_unwind) return; RELOAD();
L_837d90: /* 837d90: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_837d93: /* 837d93: mov al, byte ptr [ecx + 0x84] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x84u))) & 0xffu);
/* 837d99: mov bl, 0x40 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 837d9b: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 837d9d: je 0x837dbb */
  if (zf) goto L_837dbb;
L_837d9f: /* 837d9f: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 837da2: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 837da4: je 0x837dbb */
  if (zf) goto L_837dbb;
L_837da6: /* 837da6: cmp al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 837da8: je 0x837dbb */
  if (zf) goto L_837dbb;
L_837daa: /* 837daa: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 837dac: je 0x837dbb */
  if (zf) goto L_837dbb;
L_837dae: /* 837dae: or dword ptr [ecx + 0x80], 0x80000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x80u))); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0x80u), r);
  }
/* 837db8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_837dbb: /* 837dbb: add ecx, 0x2e4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2e4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 837dc1: call dword ptr [0xcfab00] */
  esp -= 4; W32(esp, 0x837dc7u); SPILL(); f_4e1843(); if (g_unwind) return; /* Core!?IsZero@FRotator@@QBEHXZ */ RELOAD();
/* 837dc7: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 837dc9: jne 0x837e0d */
  if (!zf) goto L_837e0d;
L_837dcb: /* 837dcb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 837dce: test byte ptr [ecx + 0x8a], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x8au))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 837dd5: jne 0x837e10 */
  if (!zf) goto L_837e10;
L_837dd7: /* 837dd7: cmp byte ptr [ecx + 0x50], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x50u))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 837ddb: jne 0x837e04 */
  if (!zf) goto L_837e04;
L_837ddd: /* 837ddd: test byte ptr [ecx + 0x654], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x654u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 837de3: je 0x837e04 */
  if (zf) goto L_837e04;
L_837de5: /* 837de5: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 837deb: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 837df1: fsub dword ptr [ecx + 0xd4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xd4u)));
/* 837df7: fcomp dword ptr [0xa0b130] */
  fpu_com(ST0, F32((uint32_t)(0xa0b130u)));
  FPOP();
/* 837dfd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 837dff: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 837e02: jp 0x837e10 */
  if (pf) goto L_837e10;
L_837e04: /* 837e04: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 837e07: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 837e08: call 0x6c4a66 */
  esp -= 4; W32(esp, 0x837e0du); SPILL(); f_6c4a66(); if (g_unwind) return; RELOAD();
L_837e0d: /* 837e0d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_837e10: /* 837e10: mov eax, dword ptr [ecx + 0x2fc] */
  eax = R32((uint32_t)(ecx + 0x2fcu));
/* 837e16: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 837e18: je 0x837e3d */
  if (zf) goto L_837e3d;
L_837e1a: /* 837e1a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 837e1b: mov ecx, eax */
  ecx = eax;
/* 837e1d: call 0x6cc464 */
  esp -= 4; W32(esp, 0x837e22u); SPILL(); f_6cc464(); if (g_unwind) return; RELOAD();
/* 837e22: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 837e25: mov eax, dword ptr [ecx + 0x2fc] */
  eax = R32((uint32_t)(ecx + 0x2fcu));
/* 837e2b: mov edx, dword ptr [eax + 0x2fc] */
  edx = R32((uint32_t)(eax + 0x2fcu));
/* 837e31: mov dword ptr [ecx + 0x2fc], edx */
  W32((uint32_t)(ecx + 0x2fcu), edx);
/* 837e37: mov dword ptr [eax + 0x2fc], esi */
  W32((uint32_t)(eax + 0x2fcu), esi);
L_837e3d: /* 837e3d: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 837e42: mov ecx, dword ptr [0xce847c] */
  ecx = R32((uint32_t)(0xce847cu));
/* 837e48: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 837e4b: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 837e4d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 837e4f: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 837e52: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 837e54: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 837e55: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 837e57: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 837e5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 837e5b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 837e62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 837e63: mov esp, ebp */
  esp = ebp;
/* 837e65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 837e66: ret 4 */
  esp += 8; SPILL(); return;
}

void f_837e69(void) {
  LOAD_REGS();
L_837e69: /* 837e69: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 837e6c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 837e71: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 837e74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 837e75: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 837e78: call 0x99caf8 */
  esp -= 4; W32(esp, 0x837e7du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_837e7d(); return;
}

void f_837e7d(void) {
  LOAD_REGS();
  goto L_837e7d;
L_837e22: /* 837e22: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 837e25: mov eax, dword ptr [ecx + 0x2fc] */
  eax = R32((uint32_t)(ecx + 0x2fcu));
  goto L_837e2b;
L_837e2a: /* 837e2a: add byte ptr [ebx + 0x2fc90], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x2fc90u))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(ebx + 0x2fc90u), r);
  }
  goto L_837e30;
L_837e2b: /* 837e2b: mov edx, dword ptr [eax + 0x2fc] */
  edx = R32((uint32_t)(eax + 0x2fcu));
  goto L_837e31;
L_837e30: /* 837e30: add byte ptr [ecx + 0x2fc91], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x2fc91u))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(ecx + 0x2fc91u), r);
  }
  goto L_837e36;
L_837e31: /* 837e31: mov dword ptr [ecx + 0x2fc], edx */
  W32((uint32_t)(ecx + 0x2fcu), edx);
  goto L_837e37;
L_837e32: /* 837e32: xchg ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  ecx = b;
  eax = a;
  }
/* 837e33: cld  */
  DF = 0;
/* 837e34: add al, byte ptr [eax] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax)));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_837e36: /* 837e36: add byte ptr [ecx + 0x2fcb0], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x2fcb0u))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(ecx + 0x2fcb0u), r);
  }
  goto L_837e3c;
L_837e37: /* 837e37: mov dword ptr [eax + 0x2fc], esi */
  W32((uint32_t)(eax + 0x2fcu), esi);
  goto L_837e3d;
L_837e3a: /* 837e3a: add al, byte ptr [eax] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax)));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_837e3c: /* 837e3c: add byte ptr [ecx + 0xce8220], ah */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0xce8220u))); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(ecx + 0xce8220u), r);
  }
  goto L_837e42;
L_837e3d: /* 837e3d: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
L_837e42: /* 837e42: mov ecx, dword ptr [0xce847c] */
  ecx = R32((uint32_t)(0xce847cu));
/* 837e48: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 837e4b: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 837e4d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 837e4f: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 837e52: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 837e54: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 837e55: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 837e57: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 837e5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 837e5b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 837e62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 837e63: mov esp, ebp */
  esp = ebp;
/* 837e65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 837e66: ret 4 */
  esp += 8; SPILL(); return;
L_837e7d: /* 837e7d: push 0xa15c8c */
  { uint32_t v = 0xa15c8cu; esp -= 4; W32(esp, v); }
/* 837e82: push 0xae3a10 */
  { uint32_t v = 0xae3a10u; esp -= 4; W32(esp, v); }
/* 837e87: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x837e8du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 837e8d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 837e90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 837e92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 837e94: call 0x99caf8 */
  esp -= 4; W32(esp, 0x837e99u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 837e99: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
/* 837e9c: push esp */
  { uint32_t v = esp; esp -= 4; W32(esp, v); }
/* 837e9d: jge 0x837e22 */
  if ((sf == of)) goto L_837e22;
L_837e9f: /* 837e9f: add byte ptr [eax + 0x7d], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x7du))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(eax + 0x7du), r);
  }
/* 837ea2: add dword ptr [eax], 0x63 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a + b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  W32((uint32_t)(eax), r);
  }
/* 837ea5: jge 0x837e2a */
  if ((sf == of)) goto L_837e2a;
L_837ea7: /* 837ea7: add byte ptr [esi + 0x7d], ch */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x7du))); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(esi + 0x7du), r);
  }
/* 837eaa: add dword ptr [eax], 0x79 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x79u);
  uint32_t r = (uint32_t)(a + b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  W32((uint32_t)(eax), r);
  }
/* 837ead: jge 0x837e32 */
  if ((sf == of)) goto L_837e32;
L_837eaf: /* 837eaf: add byte ptr [edi - 0x6cff7c83], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x9300837du))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 7) & 1;
  W8((uint32_t)(edi + 0x9300837du), r);
  }
/* 837eb5: jge 0x837e3a */
  if ((sf == of)) goto L_837e3a;
L_837eb7: guest_badaddr(0x837eb7); return;
}

void f_837f50(void) {
  LOAD_REGS();
L_837f50: /* 837f50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 837f51: mov ebp, esp */
  ebp = esp;
/* 837f53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 837f55: push 0x9d33b0 */
  { uint32_t v = 0x9d33b0u; esp -= 4; W32(esp, v); }
/* 837f5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 837f60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 837f61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 837f68: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 837f6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 837f6c: mov eax, ecx */
  eax = ecx;
/* 837f6e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 837f6f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 837f72: cmp byte ptr [eax + 0x50], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 837f76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 837f77: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 837f7a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 837f81: jne 0x837faf */
  if (!zf) goto L_837faf;
L_837f83: /* 837f83: test byte ptr [eax + 0x8a], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x8au))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 837f8a: jne 0x837faf */
  if (!zf) goto L_837faf;
L_837f8c: /* 837f8c: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 837f92: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 837f98: fsub dword ptr [eax + 0xd4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xd4u)));
/* 837f9e: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 837fa4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 837fa6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 837fa9: je 0x83809d */
  if (zf) goto L_83809d;
L_837faf: /* 837faf: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 837fb5: mov eax, dword ptr [0xce847c] */
  eax = R32((uint32_t)(0xce847cu));
/* 837fba: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 837fbd: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 837fbf: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 837fc1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 837fc4: movzx eax, byte ptr [ecx + 0x50] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x50u)));
/* 837fc8: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 837fcb: cmp eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 837fce: ja 0x83802b */
  if ((!cf && !zf)) goto L_83802b;
L_837fd0: /* 837fd0: movzx edx, byte ptr [eax + 0x8380fc] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x8380fcu)));
/* 837fd7: jmp dword ptr [edx*4 + 0x8380e0] */
  switch (R32((uint32_t)(edx*4 + 0x8380e0u))) {
    case 0x837fdeu: goto L_837fde;
    case 0x837febu: goto L_837feb;
    case 0x837ffbu: goto L_837ffb;
    case 0x838006u: goto L_838006;
    case 0x838011u: goto L_838011;
    case 0x83801fu: goto L_83801f;
    case 0x83802bu: goto L_83802b;
    default: guest_badjump(0x837fd7, R32((uint32_t)(edx*4 + 0x8380e0u))); return;
  }
L_837fde: /* 837fde: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 837fe1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 837fe3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 837fe4: call 0x6c6c99 */
  esp -= 4; W32(esp, 0x837fe9u); SPILL(); f_6c6c99(); if (g_unwind) return; RELOAD();
/* 837fe9: jmp 0x838028 */
  goto L_838028;
L_837feb: /* 837feb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 837fee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 837ff0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 837ff2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 837ff3: call dword ptr [edx + 0x128] */
  { uint32_t t = R32((uint32_t)(edx + 0x128u)); esp -= 4; W32(esp, 0x837ff9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 837ff9: jmp 0x838028 */
  goto L_838028;
L_837ffb: /* 837ffb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 837ffe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 837fff: call 0x6ca5a1 */
  esp -= 4; W32(esp, 0x838004u); SPILL(); f_6ca5a1(); if (g_unwind) return; RELOAD();
/* 838004: jmp 0x838028 */
  goto L_838028;
L_838006: /* 838006: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 838009: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83800a: call 0x6cbad7 */
  esp -= 4; W32(esp, 0x83800fu); SPILL(); f_6cbad7(); if (g_unwind) return; RELOAD();
/* 83800f: jmp 0x838028 */
  goto L_838028;
L_838011: /* 838011: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 838014: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 838016: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 838017: call dword ptr [edx + 0x140] */
  { uint32_t t = R32((uint32_t)(edx + 0x140u)); esp -= 4; W32(esp, 0x83801du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83801d: jmp 0x838028 */
  goto L_838028;
L_83801f: /* 83801f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 838022: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 838023: call 0x6cba32 */
  esp -= 4; W32(esp, 0x838028u); SPILL(); f_6cba32(); if (g_unwind) return; RELOAD();
L_838028: /* 838028: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_83802b: /* 83802b: add ecx, 0x2e4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2e4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 838031: call dword ptr [0xcfab00] */
  esp -= 4; W32(esp, 0x838037u); SPILL(); f_4e1843(); if (g_unwind) return; /* Core!?IsZero@FRotator@@QBEHXZ */ RELOAD();
/* 838037: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 838039: jne 0x838050 */
  if (!zf) goto L_838050;
L_83803b: /* 83803b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 83803e: test byte ptr [ecx + 0x8a], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x8au))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 838045: jne 0x838053 */
  if (!zf) goto L_838053;
L_838047: /* 838047: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 83804a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83804b: call 0x6c4a66 */
  esp -= 4; W32(esp, 0x838050u); SPILL(); f_6c4a66(); if (g_unwind) return; RELOAD();
L_838050: /* 838050: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_838053: /* 838053: mov eax, dword ptr [ecx + 0x2fc] */
  eax = R32((uint32_t)(ecx + 0x2fcu));
/* 838059: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83805b: je 0x838084 */
  if (zf) goto L_838084;
L_83805d: /* 83805d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83805e: mov ecx, eax */
  ecx = eax;
/* 838060: call 0x6cc464 */
  esp -= 4; W32(esp, 0x838065u); SPILL(); f_6cc464(); if (g_unwind) return; RELOAD();
/* 838065: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 838068: mov eax, dword ptr [ecx + 0x2fc] */
  eax = R32((uint32_t)(ecx + 0x2fcu));
/* 83806e: mov edx, dword ptr [eax + 0x2fc] */
  edx = R32((uint32_t)(eax + 0x2fcu));
/* 838074: mov dword ptr [ecx + 0x2fc], edx */
  W32((uint32_t)(ecx + 0x2fcu), edx);
/* 83807a: mov dword ptr [eax + 0x2fc], 0 */
  W32((uint32_t)(eax + 0x2fcu), 0x0u);
L_838084: /* 838084: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 838089: mov ecx, dword ptr [0xce847c] */
  ecx = R32((uint32_t)(0xce847cu));
/* 83808f: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 838092: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 838094: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 838096: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 838099: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 83809b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_83809d: /* 83809d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8380a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8380a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8380a2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8380a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8380aa: mov esp, ebp */
  esp = ebp;
/* 8380ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8380ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8380b0(void) {
  LOAD_REGS();
L_8380b0: /* 8380b0: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8380b3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8380b8: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8380bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8380bc: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8380bf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8380c4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8380c4(); return;
}

void f_8380c4(void) {
  LOAD_REGS();
L_8380c4: /* 8380c4: push 0xa15cc4 */
  { uint32_t v = 0xa15cc4u; esp -= 4; W32(esp, v); }
/* 8380c9: push 0xae3a18 */
  { uint32_t v = 0xae3a18u; esp -= 4; W32(esp, v); }
/* 8380ce: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8380d4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8380d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8380d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8380d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8380db: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8380e0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8380e0: jmp 0x838161 */
  goto L_838161;
L_838161: guest_badaddr(0x838161); return;
}

void f_838180(void) {
  LOAD_REGS();
L_838180: /* 838180: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 838181: mov ebp, esp */
  ebp = esp;
/* 838183: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 838185: push 0x9d33c0 */
  { uint32_t v = 0x9d33c0u; esp -= 4; W32(esp, v); }
/* 83818a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 838190: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 838191: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 838198: sub esp, 0x19c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x19cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83819e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83819f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8381a0: mov esi, ecx */
  esi = ecx;
/* 8381a2: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 8381a8: xor ebx, ebx */
  ebx = 0;
/* 8381aa: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8381ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8381ad: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8381b0: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8381b3: je 0x838821 */
  if (zf) goto L_838821;
L_8381b9: /* 8381b9: lea edi, [esi + 0x194] */
  edi = (uint32_t)(esi + 0x194u);
/* 8381bf: mov ecx, edi */
  ecx = edi;
/* 8381c1: mov dword ptr [esi + 0x190], ebx */
  W32((uint32_t)(esi + 0x190u), ebx);
/* 8381c7: mov dword ptr [esi + 0x19c], ebx */
  W32((uint32_t)(esi + 0x19cu), ebx);
/* 8381cd: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x8381d3u); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 8381d3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8381d5: je 0x8381db */
  if (zf) goto L_8381db;
L_8381d7: /* 8381d7: mov eax, edi */
  eax = edi;
/* 8381d9: jmp 0x8381ea */
  goto L_8381ea;
L_8381db: /* 8381db: lea eax, [ebp - 0x168] */
  eax = (uint32_t)(ebp + 0xfffffe98u);
/* 8381e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8381e2: mov ecx, edi */
  ecx = edi;
/* 8381e4: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8381eau); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
L_8381ea: /* 8381ea: mov ecx, eax */
  ecx = eax;
/* 8381ec: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8381ee: mov dword ptr [ebp - 0x110], edx */
  W32((uint32_t)(ebp + 0xfffffef0u), edx);
/* 8381f4: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8381f7: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8381fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8381fb: mov dword ptr [ebp - 0x10c], edx */
  W32((uint32_t)(ebp + 0xfffffef4u), edx);
/* 838201: mov edx, dword ptr [esi + 0x16c] */
  edx = R32((uint32_t)(esi + 0x16cu));
/* 838207: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 838209: mov dword ptr [ebp - 0x108], ecx */
  W32((uint32_t)(ebp + 0xfffffef8u), ecx);
/* 83820f: mov ecx, dword ptr [edx + 0x3d0] */
  ecx = R32((uint32_t)(edx + 0x3d0u));
/* 838215: mov edx, dword ptr [esi + 0x3f8] */
  edx = R32((uint32_t)(esi + 0x3f8u));
/* 83821b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83821c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83821d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 838220: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 838221: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 838222: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 838224: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 838227: mov edx, esp */
  edx = esp;
/* 838229: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 83822b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 83822e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 838231: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 838234: mov ecx, esi */
  ecx = esi;
/* 838236: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 838239: call 0x6c6b40 */
  esp -= 4; W32(esp, 0x83823eu); SPILL(); f_6c6b40(); if (g_unwind) return; RELOAD();
/* 83823e: lea ecx, [esi + 0x188] */
  ecx = (uint32_t)(esi + 0x188u);
/* 838244: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 838246: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 838249: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83824c: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
/* 838252: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 838258: add ecx, 0x3b8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3b8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 83825e: mov dword ptr [ebp - 0xb4], edx */
  W32((uint32_t)(ebp + 0xffffff4cu), edx);
/* 838264: mov dword ptr [ebp - 0xb0], eax */
  W32((uint32_t)(ebp + 0xffffff50u), eax);
/* 83826a: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x838270u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 838270: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 838273: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 838279: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83827b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83827e: jne 0x83835a */
  if (!zf) goto L_83835a;
L_838284: /* 838284: mov ecx, esi */
  ecx = esi;
/* 838286: call 0x6c2e00 */
  esp -= 4; W32(esp, 0x83828bu); SPILL(); f_6c2e00(); if (g_unwind) return; RELOAD();
/* 83828b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 83828d: jne 0x8382b5 */
  if (!zf) goto L_8382b5;
L_83828f: /* 83828f: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 838295: add ecx, 0x3b8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3b8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 83829b: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8382a1u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8382a1: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 8382a4: fcomp dword ptr [0xa149c8] */
  fpu_com(ST0, F32((uint32_t)(0xa149c8u)));
  FPOP();
/* 8382aa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8382ac: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8382af: jne 0x83835a */
  if (!zf) goto L_83835a;
L_8382b5: /* 8382b5: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 8382bb: fld dword ptr [eax + 0x3c0] */
  { double v = F32((uint32_t)(eax + 0x3c0u)); FPUSH(v); }
/* 8382c1: add eax, 0x3b8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8382c6: fmul dword ptr [0x9f489c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f489cu)));
/* 8382cc: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8382cf: fmul dword ptr [0x9f489c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f489cu)));
/* 8382d5: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8382d7: fmul dword ptr [0x9f489c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f489cu)));
/* 8382dd: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 8382e3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8382e5: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8382e8: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8382eb: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8382ee: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 8382f4: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 8382fa: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8382fd: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 838303: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 838306: fadd dword ptr [ebp - 0xac] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff54u)));
/* 83830c: fld dword ptr [ebp - 0xb0] */
  { double v = F32((uint32_t)(ebp + 0xffffff50u)); FPUSH(v); }
/* 838312: fadd dword ptr [ebp - 0x9c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff64u)));
/* 838318: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 83831e: fadd dword ptr [ebp - 0xb4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff4cu)));
/* 838324: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 83832a: mov edx, dword ptr [ebp - 0xa8] */
  edx = R32((uint32_t)(ebp + 0xffffff58u));
/* 838330: mov dword ptr [ebp - 0xb4], edx */
  W32((uint32_t)(ebp + 0xffffff4cu), edx);
/* 838336: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 83833c: mov eax, dword ptr [ebp - 0xa4] */
  eax = R32((uint32_t)(ebp + 0xffffff5cu));
/* 838342: mov dword ptr [ebp - 0xb0], eax */
  W32((uint32_t)(ebp + 0xffffff50u), eax);
/* 838348: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 83834e: mov ecx, dword ptr [ebp - 0xa0] */
  ecx = R32((uint32_t)(ebp + 0xffffff60u));
/* 838354: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
L_83835a: /* 83835a: mov edx, dword ptr [esi + 0x16c] */
  edx = R32((uint32_t)(esi + 0x16cu));
/* 838360: fld dword ptr [edx + 0x3cc] */
  { double v = F32((uint32_t)(edx + 0x3ccu)); FPUSH(v); }
/* 838366: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 838370: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 838376: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 83837d: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 838384: mov dword ptr [ebp - 0x30], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f800000u);
/* 83838b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83838d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 838390: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 838393: je 0x83839c */
  if (zf) goto L_83839c;
L_838395: /* 838395: mov dword ptr [ebp - 0x30], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0xbf800000u);
L_83839c: /* 83839c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 83839e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8383a1: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8383a4: mov dword ptr [ebp - 0xbc], eax */
  W32((uint32_t)(ebp + 0xffffff44u), eax);
/* 8383aa: fld dword ptr [ebp - 0xbc] */
  { double v = F32((uint32_t)(ebp + 0xffffff44u)); FPUSH(v); }
/* 8383b0: fmul dword ptr [0xa15154] */
  ST0 = ST0 * (F32((uint32_t)(0xa15154u)));
/* 8383b6: mov dword ptr [ebp - 0xc4], ecx */
  W32((uint32_t)(ebp + 0xffffff3cu), ecx);
/* 8383bc: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 8383c2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8383c4: mov dword ptr [ebp - 0xc0], edx */
  W32((uint32_t)(ebp + 0xffffff40u), edx);
/* 8383ca: fld dword ptr [ebp - 0xc0] */
  { double v = F32((uint32_t)(ebp + 0xffffff40u)); FPUSH(v); }
/* 8383d0: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8383d3: fmul dword ptr [0xa15154] */
  ST0 = ST0 * (F32((uint32_t)(0xa15154u)));
/* 8383d9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8383dc: fld dword ptr [ebp - 0xc4] */
  { double v = F32((uint32_t)(ebp + 0xffffff3cu)); FPUSH(v); }
/* 8383e2: fmul dword ptr [0xa15154] */
  ST0 = ST0 * (F32((uint32_t)(0xa15154u)));
/* 8383e8: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 8383eb: lea eax, [esi + 0x44c] */
  eax = (uint32_t)(esi + 0x44cu);
/* 8383f1: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 8383f4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8383f6: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 8383fc: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8383ff: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 838402: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 838408: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83840b: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 83840e: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 838414: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 83841a: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 83841d: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 838420: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 838423: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 838426: and eax, 0xfffdffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffdffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 83842b: mov dword ptr [ebp - 0x8c], ebx */
  W32((uint32_t)(ebp + 0xffffff74u), ebx);
/* 838431: mov dword ptr [ebp - 0x88], ebx */
  W32((uint32_t)(ebp + 0xffffff78u), ebx);
/* 838437: mov dword ptr [ebp - 0x84], 0 */
  W32((uint32_t)(ebp + 0xffffff7cu), 0x0u);
/* 838441: mov dword ptr [ebp - 0x80], 0 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x0u);
/* 838448: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 83844f: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 838456: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 83845d: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 838464: mov dword ptr [ebp - 0x6c], ebx */
  W32((uint32_t)(ebp + 0xffffff94u), ebx);
/* 838467: mov dword ptr [ebp - 0x68], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x3f800000u);
/* 83846e: mov dword ptr [ebp - 0x64], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff9cu), 0xffffffffu);
/* 838475: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* 838478: mov dword ptr [ebp - 0xb8], ecx */
  W32((uint32_t)(ebp + 0xffffff48u), ecx);
/* 83847e: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 838484: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 838487: mov dword ptr [ebp - 0x9c], ebx */
  W32((uint32_t)(ebp + 0xffffff64u), ebx);
/* 83848d: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 838490: jmp 0x838494 */
  goto L_838494;
L_838492: /* 838492: xor ebx, ebx */
  ebx = 0;
L_838494: /* 838494: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 838497: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83849d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83849f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8384a2: jne 0x839200 */
  if (!zf) goto L_839200;
L_8384a8: /* 8384a8: cmp dword ptr [ebp + 0xc], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8384ac: jge 0x839200 */
  if ((sf == of)) goto L_839200;
L_8384b2: /* 8384b2: cmp dword ptr [esi + 0x33c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x33cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8384b8: je 0x839200 */
  if (zf) goto L_839200;
L_8384be: /* 8384be: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8384c1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8384c4: fcomp dword ptr [0xa110dc] */
  fpu_com(ST0, F32((uint32_t)(0xa110dcu)));
  FPOP();
/* 8384ca: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8384cb: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8384ce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8384d0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8384d3: jne 0x8384fd */
  if (!zf) goto L_8384fd;
L_8384d5: /* 8384d5: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8384d8: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8384de: fld dword ptr [0xa110dc] */
  { double v = F32((uint32_t)(0xa110dcu)); FPUSH(v); }
/* 8384e4: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8384e6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8384e8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8384eb: jp 0x8384f8 */
  if (pf) goto L_8384f8;
L_8384ed: /* 8384ed: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8384ef: mov dword ptr [ebp - 0x1c], 0x3d4ccccd */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3d4ccccdu);
/* 8384f6: jmp 0x838503 */
  goto L_838503;
L_8384f8: /* 8384f8: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8384fb: jmp 0x838503 */
  goto L_838503;
L_8384fd: /* 8384fd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 838500: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_838503: /* 838503: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 838506: lea edi, [esi + 0x170] */
  edi = (uint32_t)(esi + 0x170u);
/* 83850c: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 83850f: mov ecx, edi */
  ecx = edi;
/* 838511: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 838513: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 838516: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 838519: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83851c: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 83851f: mov dword ptr [ebp - 0xa0], ecx */
  W32((uint32_t)(ebp + 0xffffff60u), ecx);
/* 838525: fmul dword ptr [ebp - 0xac] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff54u)));
/* 83852b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 83852e: fld dword ptr [ebp - 0xb0] */
  { double v = F32((uint32_t)(ebp + 0xffffff50u)); FPUSH(v); }
/* 838534: mov dword ptr [ebp - 0xa8], edx */
  W32((uint32_t)(ebp + 0xffffff58u), edx);
/* 83853a: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 83853d: mov dword ptr [ebp - 0xa4], eax */
  W32((uint32_t)(ebp + 0xffffff5cu), eax);
/* 838543: fld dword ptr [ebp - 0xb4] */
  { double v = F32((uint32_t)(ebp + 0xffffff4cu)); FPUSH(v); }
/* 838549: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 83854c: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83854f: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 838552: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 838555: call dword ptr [0xcfa5d4] */
  esp -= 4; W32(esp, 0x83855bu); SPILL(); f_4e2b03(); if (g_unwind) return; /* Core!?IsNearlyZero@FVector@@QBEHXZ */ RELOAD();
/* 83855b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 83855d: je 0x83856b */
  if (zf) goto L_83856b;
L_83855f: /* 83855f: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 838566: jmp 0x83883e */
  goto L_83883e;
L_83856b: /* 83856b: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 838571: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 838573: je 0x838627 */
  if (zf) goto L_838627;
L_838579: /* 838579: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83857b: call dword ptr [edx + 0x1a8] */
  { uint32_t t = R32((uint32_t)(edx + 0x1a8u)); esp -= 4; W32(esp, 0x838581u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 838581: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 838583: je 0x838627 */
  if (zf) goto L_838627;
L_838589: /* 838589: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 83858f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 838590: mov eax, dword ptr [ebp - 0xc4] */
  eax = R32((uint32_t)(ebp + 0xffffff3cu));
/* 838596: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 838599: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83859a: mov ecx, dword ptr [ebp - 0xc0] */
  ecx = R32((uint32_t)(ebp + 0xffffff40u));
/* 8385a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8385a3: mov edx, esp */
  edx = esp;
/* 8385a5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8385a7: mov eax, dword ptr [ebp - 0xbc] */
  eax = R32((uint32_t)(ebp + 0xffffff44u));
/* 8385ad: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8385b0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8385b3: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8385b6: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8385b9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8385bc: mov ecx, esp */
  ecx = esp;
/* 8385be: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8385c0: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8385c3: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8385c6: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8385c9: mov ecx, dword ptr [ebp - 0x110] */
  ecx = R32((uint32_t)(ebp + 0xfffffef0u));
/* 8385cf: mov edx, dword ptr [ebp - 0x10c] */
  edx = R32((uint32_t)(ebp + 0xfffffef4u));
/* 8385d5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8385d8: mov eax, esp */
  eax = esp;
/* 8385da: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8385dc: mov ecx, dword ptr [ebp - 0x108] */
  ecx = R32((uint32_t)(ebp + 0xfffffef8u));
/* 8385e2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8385e5: lea edx, [ebp - 0x19c] */
  edx = (uint32_t)(ebp + 0xfffffe64u);
/* 8385eb: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8385ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8385ef: mov ecx, esi */
  ecx = esi;
/* 8385f1: call 0x6cc478 */
  esp -= 4; W32(esp, 0x8385f6u); SPILL(); f_6cc478(); if (g_unwind) return; RELOAD();
/* 8385f6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8385f8: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8385fb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8385fe: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 838604: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 838607: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83860a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 83860d: fld dword ptr [ecx + 0x36c] */
  { double v = F32((uint32_t)(ecx + 0x36cu)); FPUSH(v); }
/* 838613: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 838619: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83861b: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83861e: jp 0x838627 */
  if (pf) goto L_838627;
L_838620: /* 838620: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_838627: /* 838627: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 83862d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83862f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 838630: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 838631: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 838632: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 838633: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 838639: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83863a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83863d: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 838643: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 838645: mov eax, esp */
  eax = esp;
/* 838647: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 838649: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 83864c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83864f: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 838652: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 838655: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 838658: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83865b: mov eax, esp */
  eax = esp;
/* 83865d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83865f: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 838662: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 838665: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 838668: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83866b: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 838671: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 838672: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x838678u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 838678: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 83867b: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 838681: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 838683: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 838686: jp 0x838834 */
  if (pf) goto L_838834;
L_83868c: /* 83868c: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 83868f: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x838695u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 838695: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 838698: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83869b: mov eax, edx */
  eax = edx;
/* 83869d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83869e: lea ecx, [ebp - 0x15c] */
  ecx = (uint32_t)(ebp + 0xfffffea4u);
/* 8386a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8386a5: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8386a8: mov dword ptr [ebp - 0xe0], edx */
  W32((uint32_t)(ebp + 0xffffff20u), edx);
/* 8386ae: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8386b4u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8386b4: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8386ba: fsub dword ptr [ebp - 0x68] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff98u)));
/* 8386bd: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 8386c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8386c4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8386c6: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8386c9: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8386cc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8386cf: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8386d2: mov ecx, esp */
  ecx = esp;
/* 8386d4: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8386d7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8386da: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8386dd: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8386e0: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8386e3: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8386e6: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8386e9: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8386eb: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8386ee: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8386f1: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8386f4: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8386f7: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8386fa: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8386fd: mov eax, dword ptr [ebp - 0x15c] */
  eax = R32((uint32_t)(ebp + 0xfffffea4u));
/* 838703: mov ecx, esp */
  ecx = esp;
/* 838705: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 838707: mov eax, dword ptr [ebp - 0x158] */
  eax = R32((uint32_t)(ebp + 0xfffffea8u));
/* 83870d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 838710: mov eax, dword ptr [ebp - 0x154] */
  eax = R32((uint32_t)(ebp + 0xfffffeacu));
/* 838716: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 838719: mov eax, dword ptr [ebp - 0xc4] */
  eax = R32((uint32_t)(ebp + 0xffffff3cu));
/* 83871f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 838722: mov ecx, esp */
  ecx = esp;
/* 838724: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 838726: mov eax, dword ptr [ebp - 0xc0] */
  eax = R32((uint32_t)(ebp + 0xffffff40u));
/* 83872c: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83872f: mov eax, dword ptr [ebp - 0xbc] */
  eax = R32((uint32_t)(ebp + 0xffffff44u));
/* 838735: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 838738: mov ecx, esi */
  ecx = esi;
/* 83873a: call dword ptr [edx + 0x134] */
  { uint32_t t = R32((uint32_t)(edx + 0x134u)); esp -= 4; W32(esp, 0x838740u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 838740: cmp byte ptr [esi + 0x50], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 838744: jne 0x838834 */
  if (!zf) goto L_838834;
L_83874a: /* 83874a: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 83874d: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 838750: fsub dword ptr [ebp - 0xa0] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff60u)));
/* 838756: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 838759: fsub dword ptr [ebp - 0xa4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff5cu)));
/* 83875f: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 838761: fsub dword ptr [ebp - 0xa8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff58u)));
/* 838767: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 83876a: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 83876d: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 838770: call dword ptr [0xcfa8a0] */
  esp -= 4; W32(esp, 0x838776u); SPILL(); f_4e23dd(); if (g_unwind) return; /* Core!?Size2D@FVector@@QBEMXZ */ RELOAD();
/* 838776: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 838779: fdiv dword ptr [ebp - 0xe0] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffff20u)));
/* 83877f: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 838785: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 838787: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 838789: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83878c: jp 0x838796 */
  if (pf) goto L_838796;
L_83878e: /* 83878e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 838790: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_838796: /* 838796: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 83879c: mov ecx, esi */
  ecx = esi;
/* 83879e: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8387a0: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8387a3: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8387a6: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8387a9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8387ab: call 0x6c3d6e */
  esp -= 4; W32(esp, 0x8387b0u); SPILL(); f_6c3d6e(); if (g_unwind) return; RELOAD();
/* 8387b0: cmp byte ptr [esi + 0x50], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8387b4: jne 0x838812 */
  if (!zf) goto L_838812;
L_8387b6: /* 8387b6: fld dword ptr [esi + 0x400] */
  { double v = F32((uint32_t)(esi + 0x400u)); FPUSH(v); }
/* 8387bc: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 8387c3: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8387c6: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8387c9: fld dword ptr [esi + 0x408] */
  { double v = F32((uint32_t)(esi + 0x408u)); FPUSH(v); }
/* 8387cf: lea ecx, [esi + 0x188] */
  ecx = (uint32_t)(esi + 0x188u);
/* 8387d5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8387d7: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8387da: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8387dd: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 8387e4: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8387e7: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8387ea: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8387ed: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 8387f4: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8387f7: lea eax, [esi + 0x194] */
  eax = (uint32_t)(esi + 0x194u);
/* 8387fd: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8387ff: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 838802: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 838809: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 83880c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83880f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_838812: /* 838812: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 838815: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 838818: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 838819: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83881a: mov ecx, esi */
  ecx = esi;
/* 83881c: call 0x6cb717 */
  esp -= 4; W32(esp, 0x838821u); SPILL(); f_6cb717(); if (g_unwind) return; RELOAD();
L_838821: /* 838821: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 838824: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83882b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83882c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83882d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83882e: mov esp, ebp */
  esp = ebp;
/* 838830: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 838831: ret 8 */
  esp += 12; SPILL(); return;
L_838834: /* 838834: cmp byte ptr [esi + 0x50], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 838838: je 0x838f40 */
  if (zf) goto L_838f40;
L_83883e: /* 83883e: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 838840: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 838846: fsubr dword ptr [edi + 8] */
  ST0 = (F32((uint32_t)(edi + 0x8u))) - ST0;
/* 838849: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83884f: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 838852: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 838855: mov dword ptr [ebp - 0x150], edx */
  W32((uint32_t)(ebp + 0xfffffeb0u), edx);
/* 83885b: fstp dword ptr [ebp - 0x14c] */
  WF32((uint32_t)(ebp + 0xfffffeb4u), ST0); FPOP();
/* 838861: mov edx, esp */
  edx = esp;
/* 838863: mov dword ptr [ebp - 0xec], 0 */
  W32((uint32_t)(ebp + 0xffffff14u), 0x0u);
/* 83886d: fstp dword ptr [ebp - 0x148] */
  WF32((uint32_t)(ebp + 0xfffffeb8u), ST0); FPOP();
/* 838873: mov ebx, dword ptr [ebp - 0xec] */
  ebx = R32((uint32_t)(ebp + 0xffffff14u));
/* 838879: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 83887b: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 83887d: mov dword ptr [ebp - 0xe8], 0 */
  W32((uint32_t)(ebp + 0xffffff18u), 0x0u);
/* 838887: mov ebx, dword ptr [ebp - 0xe8] */
  ebx = R32((uint32_t)(ebp + 0xffffff18u));
/* 83888d: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 838890: push 0x204 */
  { uint32_t v = 0x204u; esp -= 4; W32(esp, v); }
/* 838895: mov dword ptr [ebp - 0xe4], 0 */
  W32((uint32_t)(ebp + 0xffffff1cu), 0x0u);
/* 83889f: mov ebx, dword ptr [ebp - 0xe4] */
  ebx = R32((uint32_t)(ebp + 0xffffff1cu));
/* 8388a5: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 8388a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8388a9: lea edx, [ebp - 0x150] */
  edx = (uint32_t)(ebp + 0xfffffeb0u);
/* 8388af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8388b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8388b1: lea edx, [ebp - 0x8c] */
  edx = (uint32_t)(ebp + 0xffffff74u);
/* 8388b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8388b8: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x8388beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8388be: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 8388c1: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 8388c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8388c9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8388cc: jp 0x8389e3 */
  if (pf) goto L_8389e3;
L_8388d2: /* 8388d2: mov eax, dword ptr [esi + 0x2d4] */
  eax = R32((uint32_t)(esi + 0x2d4u));
/* 8388d8: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 8388de: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8388e0: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 8388e6: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 8388ec: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8388f2: fsubr dword ptr [edi + 8] */
  ST0 = (F32((uint32_t)(edi + 0x8u))) - ST0;
/* 8388f5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8388f8: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8388fb: mov dword ptr [ebp - 0x144], edx */
  W32((uint32_t)(ebp + 0xfffffebcu), edx);
/* 838901: mov edx, esp */
  edx = esp;
/* 838903: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 838909: mov dword ptr [ebp - 0x104], eax */
  W32((uint32_t)(ebp + 0xfffffefcu), eax);
/* 83890f: mov ebx, dword ptr [ebp - 0x104] */
  ebx = R32((uint32_t)(ebp + 0xfffffefcu));
/* 838915: fstp dword ptr [ebp - 0x13c] */
  WF32((uint32_t)(ebp + 0xfffffec4u), ST0); FPOP();
/* 83891b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 83891d: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 83891f: mov ebx, dword ptr [ebp - 0x100] */
  ebx = R32((uint32_t)(ebp + 0xffffff00u));
/* 838925: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 838928: push 0xdf */
  { uint32_t v = 0xdfu; esp -= 4; W32(esp, v); }
/* 83892d: mov dword ptr [ebp - 0xfc], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x40000000u);
/* 838937: mov ebx, dword ptr [ebp - 0xfc] */
  ebx = R32((uint32_t)(ebp + 0xffffff04u));
/* 83893d: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 838940: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 838941: lea edx, [ebp - 0x144] */
  edx = (uint32_t)(ebp + 0xfffffebcu);
/* 838947: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 838948: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 838949: lea edx, [ebp - 0x8c] */
  edx = (uint32_t)(ebp + 0xffffff74u);
/* 83894f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 838950: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x838956u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 838956: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 83895c: fsub dword ptr [ebp - 0x68] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff98u)));
/* 83895f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 838961: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 838967: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 838969: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 83896b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83896d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83896f: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 838975: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 838976: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 838979: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* 83897f: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 838981: mov ecx, esp */
  ecx = esp;
/* 838983: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 838985: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 838988: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 83898b: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 83898e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 838991: fmul dword ptr [esi + 0x2d8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2d8u)));
/* 838997: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83899a: mov ecx, esp */
  ecx = esp;
/* 83899c: fadd dword ptr [0xa0b130] */
  ST0 = ST0 + (F32((uint32_t)(0xa0b130u)));
/* 8389a2: mov dword ptr [ebp - 0x128], 0 */
  W32((uint32_t)(ebp + 0xfffffed8u), 0x0u);
/* 8389ac: mov edx, dword ptr [ebp - 0x128] */
  edx = R32((uint32_t)(ebp + 0xfffffed8u));
/* 8389b2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8389b4: mov dword ptr [ebp - 0x124], 0 */
  W32((uint32_t)(ebp + 0xfffffedcu), 0x0u);
/* 8389be: fstp dword ptr [ebp - 0x120] */
  WF32((uint32_t)(ebp + 0xfffffee0u), ST0); FPOP();
/* 8389c4: mov edx, dword ptr [ebp - 0x124] */
  edx = R32((uint32_t)(ebp + 0xfffffedcu));
/* 8389ca: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8389cd: mov edx, dword ptr [ebp - 0x120] */
  edx = R32((uint32_t)(ebp + 0xfffffee0u));
/* 8389d3: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8389d6: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8389dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8389dd: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x8389e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8389e3: /* 8389e3: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 8389e9: mov eax, dword ptr [esi + 0x2d4] */
  eax = R32((uint32_t)(esi + 0x2d4u));
/* 8389ef: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 8389f5: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8389fb: fstp dword ptr [ebp - 0x130] */
  WF32((uint32_t)(ebp + 0xfffffed0u), ST0); FPOP();
/* 838a01: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 838a04: mov dword ptr [ebp - 0x134], eax */
  W32((uint32_t)(ebp + 0xfffffeccu), eax);
/* 838a0a: mov ebx, dword ptr [ebp - 0x134] */
  ebx = R32((uint32_t)(ebp + 0xfffffeccu));
/* 838a10: fstp dword ptr [ebp - 0x12c] */
  WF32((uint32_t)(ebp + 0xfffffed4u), ST0); FPOP();
/* 838a16: fld dword ptr [ebp - 0xd4] */
  { double v = F32((uint32_t)(ebp + 0xffffff2cu)); FPUSH(v); }
/* 838a1c: mov eax, esp */
  eax = esp;
/* 838a1e: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 838a21: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 838a23: fld dword ptr [ebp - 0xd8] */
  { double v = F32((uint32_t)(ebp + 0xffffff28u)); FPUSH(v); }
/* 838a29: mov ebx, dword ptr [ebp - 0x130] */
  ebx = R32((uint32_t)(ebp + 0xfffffed0u));
/* 838a2f: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 838a32: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 838a35: fld dword ptr [ebp - 0xdc] */
  { double v = F32((uint32_t)(ebp + 0xffffff24u)); FPUSH(v); }
/* 838a3b: mov ebx, dword ptr [ebp - 0x12c] */
  ebx = R32((uint32_t)(ebp + 0xfffffed4u));
/* 838a41: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 838a43: push 0xdf */
  { uint32_t v = 0xdfu; esp -= 4; W32(esp, v); }
/* 838a48: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 838a4b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 838a4c: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 838a52: lea eax, [ebp - 0x98] */
  eax = (uint32_t)(ebp + 0xffffff68u);
/* 838a58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 838a59: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 838a5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 838a60: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 838a66: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 838a6c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 838a6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 838a6f: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x838a75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 838a75: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 838a78: fmul qword ptr [0xa15d30] */
  ST0 = ST0 * (F64((uint32_t)(0xa15d30u)));
/* 838a7e: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 838a81: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 838a84: lea eax, [esi + 0x44c] */
  eax = (uint32_t)(esi + 0x44cu);
/* 838a8a: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 838a8d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 838a8f: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 838a92: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 838a95: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 838a9b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 838a9e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 838aa1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 838aa3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 838aa6: jp 0x838bf5 */
  if (pf) goto L_838bf5;
L_838aac: /* 838aac: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 838aaf: call dword ptr [0xcfa5d4] */
  esp -= 4; W32(esp, 0x838ab5u); SPILL(); f_4e2b03(); if (g_unwind) return; /* Core!?IsNearlyZero@FVector@@QBEHXZ */ RELOAD();
/* 838ab5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 838ab7: jne 0x838bf5 */
  if (!zf) goto L_838bf5;
L_838abd: /* 838abd: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 838ac0: fmul dword ptr [ebp - 0x70] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff90u)));
/* 838ac3: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 838ac6: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 838ac9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 838acb: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 838ace: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 838ad1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 838ad3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 838ad9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 838adb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 838ade: jp 0x838bf5 */
  if (pf) goto L_838bf5;
L_838ae4: /* 838ae4: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 838ae7: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 838aed: fadd dword ptr [ebp - 0x78] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff88u)));
/* 838af0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 838af2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 838af4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 838af6: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 838afc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 838afe: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 838b01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 838b03: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 838b09: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 838b0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 838b10: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 838b13: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 838b15: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 838b1b: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 838b1e: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 838b20: mov edi, esp */
  edi = esp;
/* 838b22: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 838b24: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 838b27: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 838b29: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 838b2b: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 838b2e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 838b31: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 838b34: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 838b37: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 838b3a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 838b3c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 838b3f: fmul dword ptr [ebp - 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff88u)));
/* 838b42: mov eax, esp */
  eax = esp;
/* 838b44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 838b45: fstp dword ptr [ebp - 0x184] */
  WF32((uint32_t)(ebp + 0xfffffe7cu), ST0); FPOP();
/* 838b4b: fsubr dword ptr [0xa14ac0] */
  ST0 = (F32((uint32_t)(0xa14ac0u))) - ST0;
/* 838b51: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 838b54: fchs  */
  ST0 = -ST0;
/* 838b56: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 838b59: fld dword ptr [ebp - 0x184] */
  { double v = F32((uint32_t)(ebp + 0xfffffe7cu)); FPUSH(v); }
/* 838b5f: fchs  */
  ST0 = -ST0;
/* 838b61: fstp dword ptr [ebp - 0x178] */
  WF32((uint32_t)(ebp + 0xfffffe88u), ST0); FPOP();
/* 838b67: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 838b6d: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 838b70: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 838b76: fld dword ptr [ebp - 0x178] */
  { double v = F32((uint32_t)(ebp + 0xfffffe88u)); FPUSH(v); }
/* 838b7c: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 838b82: fstp dword ptr [ebp - 0x11c] */
  WF32((uint32_t)(ebp + 0xfffffee4u), ST0); FPOP();
/* 838b88: mov edi, dword ptr [ebp - 0x11c] */
  edi = R32((uint32_t)(ebp + 0xfffffee4u));
/* 838b8e: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 838b90: fstp dword ptr [ebp - 0x118] */
  WF32((uint32_t)(ebp + 0xfffffee8u), ST0); FPOP();
/* 838b96: mov edi, dword ptr [ebp - 0x118] */
  edi = R32((uint32_t)(ebp + 0xfffffee8u));
/* 838b9c: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 838b9f: fstp dword ptr [ebp - 0x114] */
  WF32((uint32_t)(ebp + 0xfffffeecu), ST0); FPOP();
/* 838ba5: mov edi, dword ptr [ebp - 0x114] */
  edi = R32((uint32_t)(ebp + 0xfffffeecu));
/* 838bab: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 838bae: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x838bb4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 838bb4: mov eax, dword ptr [ebp - 0x88] */
  eax = R32((uint32_t)(ebp + 0xffffff78u));
/* 838bba: cmp eax, dword ptr [esi + 0x5c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 838bbd: je 0x838d87 */
  if (zf) goto L_838d87;
L_838bc3: /* 838bc3: cmp byte ptr [esi + 0x50], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 838bc7: jne 0x838d87 */
  if (!zf) goto L_838d87;
L_838bcd: /* 838bcd: mov edi, dword ptr [ebp - 0x78] */
  edi = R32((uint32_t)(ebp + 0xffffff88u));
/* 838bd0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 838bd2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 838bd4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 838bd7: mov ecx, esp */
  ecx = esp;
/* 838bd9: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 838bdb: mov edi, dword ptr [ebp - 0x74] */
  edi = R32((uint32_t)(ebp + 0xffffff8cu));
/* 838bde: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 838be1: mov edi, dword ptr [ebp - 0x70] */
  edi = R32((uint32_t)(ebp + 0xffffff90u));
/* 838be4: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 838be7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 838be8: mov ecx, esi */
  ecx = esi;
/* 838bea: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x838bf0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 838bf0: jmp 0x838d87 */
  goto L_838d87;
L_838bf5: /* 838bf5: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 838bf8: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 838bfe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 838c00: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 838c03: jp 0x838cc1 */
  if (pf) goto L_838cc1;
L_838c09: /* 838c09: mov edx, dword ptr [ebp - 0x88] */
  edx = R32((uint32_t)(ebp + 0xffffff78u));
/* 838c0f: cmp edx, dword ptr [esi + 0x5c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 838c12: jne 0x838c28 */
  if (!zf) goto L_838c28;
L_838c14: /* 838c14: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 838c17: fcomp dword ptr [0xa155c4] */
  fpu_com(ST0, F32((uint32_t)(0xa155c4u)));
  FPOP();
/* 838c1d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 838c1f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 838c22: jne 0x838cc1 */
  if (!zf) goto L_838cc1;
L_838c28: /* 838c28: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 838c2e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 838c30: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 838c32: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 838c34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 838c36: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 838c38: lea edx, [ebp - 0x8c] */
  edx = (uint32_t)(ebp + 0xffffff74u);
/* 838c3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 838c3f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 838c42: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* 838c48: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 838c4a: mov edi, esp */
  edi = esp;
/* 838c4c: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 838c4e: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 838c51: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 838c54: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 838c57: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 838c5a: mov edi, dword ptr [ebp - 0xdc] */
  edi = R32((uint32_t)(ebp + 0xffffff24u));
/* 838c60: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 838c63: mov edx, esp */
  edx = esp;
/* 838c65: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 838c67: mov edi, dword ptr [ebp - 0xd8] */
  edi = R32((uint32_t)(ebp + 0xffffff28u));
/* 838c6d: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 838c70: mov edi, dword ptr [ebp - 0xd4] */
  edi = R32((uint32_t)(ebp + 0xffffff2cu));
/* 838c76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 838c77: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 838c7a: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x838c80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 838c80: mov eax, dword ptr [ebp - 0x88] */
  eax = R32((uint32_t)(ebp + 0xffffff78u));
/* 838c86: cmp eax, dword ptr [esi + 0x5c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 838c89: je 0x838d87 */
  if (zf) goto L_838d87;
L_838c8f: /* 838c8f: cmp byte ptr [esi + 0x50], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 838c93: jne 0x838d87 */
  if (!zf) goto L_838d87;
L_838c99: /* 838c99: mov edi, dword ptr [ebp - 0x78] */
  edi = R32((uint32_t)(ebp + 0xffffff88u));
/* 838c9c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 838c9e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 838ca0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 838ca3: mov ecx, esp */
  ecx = esp;
/* 838ca5: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 838ca7: mov edi, dword ptr [ebp - 0x74] */
  edi = R32((uint32_t)(ebp + 0xffffff8cu));
/* 838caa: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 838cad: mov edi, dword ptr [ebp - 0x70] */
  edi = R32((uint32_t)(ebp + 0xffffff90u));
/* 838cb0: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 838cb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 838cb4: mov ecx, esi */
  ecx = esi;
/* 838cb6: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x838cbcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 838cbc: jmp 0x838d87 */
  goto L_838d87;
L_838cc1: /* 838cc1: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 838cc4: fcomp dword ptr [0xa155c0] */
  fpu_com(ST0, F32((uint32_t)(0xa155c0u)));
  FPOP();
/* 838cca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 838ccc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 838ccf: jp 0x838d87 */
  if (pf) goto L_838d87;
L_838cd5: /* 838cd5: mov eax, dword ptr [ebp - 0x74] */
  eax = R32((uint32_t)(ebp + 0xffffff8cu));
/* 838cd8: fld dword ptr [0xa155c0] */
  { double v = F32((uint32_t)(0xa155c0u)); FPUSH(v); }
/* 838cde: fadd dword ptr [0xa155c4] */
  ST0 = ST0 + (F32((uint32_t)(0xa155c4u)));
/* 838ce4: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 838ce7: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 838cea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 838cec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 838cee: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 838cf1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 838cf3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 838cf5: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 838cfb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 838cfc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 838cff: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 838d05: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 838d07: mov edi, esp */
  edi = esp;
/* 838d09: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 838d0b: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 838d0e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 838d11: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 838d14: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 838d17: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 838d1d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 838d20: mov eax, esp */
  eax = esp;
/* 838d22: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 838d25: mov dword ptr [ebp - 0xf8], 0 */
  W32((uint32_t)(ebp + 0xffffff08u), 0x0u);
/* 838d2f: mov edi, dword ptr [ebp - 0xf8] */
  edi = R32((uint32_t)(ebp + 0xffffff08u));
/* 838d35: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 838d37: mov dword ptr [ebp - 0xf4], 0 */
  W32((uint32_t)(ebp + 0xffffff0cu), 0x0u);
/* 838d41: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 838d47: mov edi, dword ptr [ebp - 0xf4] */
  edi = R32((uint32_t)(ebp + 0xffffff0cu));
/* 838d4d: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 838d50: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 838d56: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 838d59: mov edi, dword ptr [ebp - 0xf0] */
  edi = R32((uint32_t)(ebp + 0xffffff10u));
/* 838d5f: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 838d62: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 838d64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 838d65: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 838d68: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x838d6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 838d6e: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 838d71: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 838d74: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 838d77: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 838d7e: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 838d81: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 838d84: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
L_838d87: /* 838d87: cmp byte ptr [esi + 0x50], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 838d8b: je 0x838f40 */
  if (zf) goto L_838f40;
L_838d91: /* 838d91: mov edi, dword ptr [ebp - 0x9c] */
  edi = R32((uint32_t)(ebp + 0xffffff64u));
/* 838d97: xor ebx, ebx */
  ebx = 0;
/* 838d99: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 838d9b: jne 0x838fdb */
  if (!zf) goto L_838fdb;
L_838da1: /* 838da1: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 838da4: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 838daa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 838dac: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 838daf: jp 0x838f97 */
  if (pf) goto L_838f97;
L_838db5: /* 838db5: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 838db8: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 838dbe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 838dc0: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 838dc3: jne 0x838f97 */
  if (!zf) goto L_838f97;
L_838dc9: /* 838dc9: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 838dcc: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 838dd2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 838dd4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 838dd7: jp 0x838494 */
  if (pf) goto L_838494;
L_838ddd: /* 838ddd: mov edi, dword ptr [esi + 0x16c] */
  edi = R32((uint32_t)(esi + 0x16cu));
/* 838de3: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 838de6: fmul dword ptr [edi + 0x3d0] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x3d0u)));
/* 838dec: fcomp dword ptr [0xa15d2c] */
  fpu_com(ST0, F32((uint32_t)(0xa15d2cu)));
  FPOP();
/* 838df2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 838df4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 838df7: jp 0x838494 */
  if (pf) goto L_838494;
L_838dfd: /* 838dfd: mov ecx, dword ptr [edi + 0x3d0] */
  ecx = R32((uint32_t)(edi + 0x3d0u));
/* 838e03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 838e04: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 838e09: call 0x6c47be */
  esp -= 4; W32(esp, 0x838e0eu); SPILL(); f_6c47be(); if (g_unwind) return; RELOAD();
/* 838e0e: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 838e10: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 838e13: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 838e16: lea edx, [ebp - 0x1a8] */
  edx = (uint32_t)(ebp + 0xfffffe58u);
/* 838e1c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 838e1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 838e20: add edi, 0x3c4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3c4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 838e26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 838e27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 838e28: lea ecx, [ebp - 0x190] */
  ecx = (uint32_t)(ebp + 0xfffffe70u);
/* 838e2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 838e2f: call 0x6cb802 */
  esp -= 4; W32(esp, 0x838e34u); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 838e34: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 838e37: mov ecx, eax */
  ecx = eax;
/* 838e39: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x838e3fu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 838e3f: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 838e42: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 838e45: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 838e48: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 838e4b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 838e4e: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 838e50: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 838e52: fmul dword ptr [ebp - 0x70] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff90u)));
/* 838e55: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 838e58: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 838e5a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 838e5c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 838e5e: fmul dword ptr [ebp - 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff88u)));
/* 838e61: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 838e63: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 838e66: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 838e68: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 838e6b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 838e6d: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 838e70: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 838e72: fmul dword ptr [ebp - 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff88u)));
/* 838e75: fstp dword ptr [ebp - 0x168] */
  WF32((uint32_t)(ebp + 0xfffffe98u), ST0); FPOP();
/* 838e7b: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 838e7d: fsubrp st(1) */
  STI(1) = ST0 - STI(1);
  FPOP();
/* 838e7f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 838e81: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 838e84: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 838e86: fsub dword ptr [ebp - 0x168] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffe98u)));
/* 838e8c: fstp dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0); FPOP();
/* 838e92: mov edx, dword ptr [ebp - 0xd0] */
  edx = R32((uint32_t)(ebp + 0xffffff30u));
/* 838e98: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 838e9b: fst dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0);
/* 838ea1: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* 838ea7: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 838ea9: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 838eac: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 838eb2: mov ecx, dword ptr [ebp - 0xc8] */
  ecx = R32((uint32_t)(ebp + 0xffffff38u));
/* 838eb8: fld dword ptr [ebp - 0xd0] */
  { double v = F32((uint32_t)(ebp + 0xffffff30u)); FPUSH(v); }
/* 838ebe: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 838ec1: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 838ec3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 838ec5: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 838ec7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 838ec9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 838ecb: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 838ecd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 838ecf: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 838ed5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 838ed7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 838ed9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 838edb: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 838ede: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 838ee0: jne 0x838f36 */
  if (!zf) goto L_838f36;
L_838ee2: /* 838ee2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 838ee3: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 838ee9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 838eea: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 838eec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 838eed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 838eee: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 838ef4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 838ef5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 838ef8: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 838efe: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 838f00: mov edi, esp */
  edi = esp;
/* 838f02: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 838f04: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 838f07: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 838f0a: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 838f0d: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 838f10: mov edi, dword ptr [ebp - 0xd0] */
  edi = R32((uint32_t)(ebp + 0xffffff30u));
/* 838f16: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 838f19: mov eax, esp */
  eax = esp;
/* 838f1b: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 838f1d: mov edi, dword ptr [ebp - 0xcc] */
  edi = R32((uint32_t)(ebp + 0xffffff34u));
/* 838f23: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 838f26: mov edi, dword ptr [ebp - 0xc8] */
  edi = R32((uint32_t)(ebp + 0xffffff38u));
/* 838f2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 838f2d: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 838f30: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x838f36u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_838f36: /* 838f36: cmp byte ptr [esi + 0x50], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 838f3a: jne 0x838492 */
  if (!zf) goto L_838492;
L_838f40: /* 838f40: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 838f43: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 838f46: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 838f49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 838f4a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 838f4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 838f4c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 838f4f: lea ecx, [esi + 0x188] */
  ecx = (uint32_t)(esi + 0x188u);
/* 838f55: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 838f57: mov edx, esp */
  edx = esp;
/* 838f59: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 838f5b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 838f5e: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 838f61: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 838f64: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 838f67: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 838f6a: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 838f6d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 838f70: mov edx, esp */
  edx = esp;
/* 838f72: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 838f74: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 838f77: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 838f7a: mov ecx, esi */
  ecx = esi;
/* 838f7c: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 838f7f: call 0x6c7e50 */
  esp -= 4; W32(esp, 0x838f84u); SPILL(); f_6c7e50(); if (g_unwind) return; RELOAD();
/* 838f84: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 838f87: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 838f8e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 838f8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 838f90: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 838f91: mov esp, ebp */
  esp = ebp;
/* 838f93: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 838f94: ret 8 */
  esp += 12; SPILL(); return;
L_838f97: /* 838f97: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 838f9d: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 838fa0: je 0x838fdb */
  if (zf) goto L_838fdb;
L_838fa2: /* 838fa2: cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 838fa5: jne 0x838fdb */
  if (!zf) goto L_838fdb;
L_838fa7: /* 838fa7: cmp dword ptr [esi + 0x33c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x33cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 838fad: je 0x838fdb */
  if (zf) goto L_838fdb;
L_838faf: /* 838faf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 838fb0: mov ecx, esp */
  ecx = esp;
/* 838fb2: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 838fb5: push 0x14d */
  { uint32_t v = 0x14du; esp -= 4; W32(esp, v); }
/* 838fba: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x838fc0u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 838fc0: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 838fc6: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x838fccu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 838fcc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 838fce: je 0x838fdb */
  if (zf) goto L_838fdb;
L_838fd0: /* 838fd0: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 838fd6: call 0x6c93b3 */
  esp -= 4; W32(esp, 0x838fdbu); SPILL(); f_6c93b3(); if (g_unwind) return; RELOAD();
L_838fdb: /* 838fdb: test dword ptr [esi + 0x88], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 838fe5: jne 0x839106 */
  if (!zf) goto L_839106;
L_838feb: /* 838feb: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 838fed: jne 0x839106 */
  if (!zf) goto L_839106;
L_838ff3: /* 838ff3: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 838ff9: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 838ffc: je 0x839011 */
  if (zf) goto L_839011;
L_838ffe: /* 838ffe: test eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 839003: jne 0x839106 */
  if (!zf) goto L_839106;
L_839009: /* 839009: test al, 0x24 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x24u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83900b: je 0x839106 */
  if (zf) goto L_839106;
L_839011: /* 839011: mov edi, dword ptr [ebp - 0x44] */
  edi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 839014: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 83901b: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 83901e: lea ecx, [esi + 0x188] */
  ecx = (uint32_t)(esi + 0x188u);
/* 839024: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 839026: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 83902d: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 839030: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 839033: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 83903a: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 83903d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 839040: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 839041: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 839042: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 839049: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 83904c: lea eax, [esi + 0x194] */
  eax = (uint32_t)(esi + 0x194u);
/* 839052: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 839054: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 83905b: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 83905e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 839061: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 839062: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 839069: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 83906c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83906f: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 839075: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 839077: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83907a: mov eax, esp */
  eax = esp;
/* 83907c: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 83907e: mov edi, dword ptr [ebp - 0x40] */
  edi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 839081: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 839084: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 839087: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 839088: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 83908b: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x839091u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 839091: mov ecx, dword ptr [ebp - 0xb8] */
  ecx = R32((uint32_t)(ebp + 0xffffff48u));
/* 839097: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 839099: je 0x8390db */
  if (zf) goto L_8390db;
L_83909b: /* 83909b: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 8390a1: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8390a3: jne 0x8390b8 */
  if (!zf) goto L_8390b8;
L_8390a5: /* 8390a5: test eax, 0x200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8390aa: jne 0x8390b8 */
  if (!zf) goto L_8390b8;
L_8390ac: /* 8390ac: test dword ptr [ecx + 0x84], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x84u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8390b6: jne 0x8390db */
  if (!zf) goto L_8390db;
L_8390b8: /* 8390b8: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8390bb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8390bd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8390bf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8390c2: mov eax, esp */
  eax = esp;
/* 8390c4: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8390c6: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8390c9: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 8390cc: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8390cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8390d0: mov ecx, esi */
  ecx = esi;
/* 8390d2: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 8390d5: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x8390dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8390db: /* 8390db: mov esi, dword ptr [esi + 0x33c] */
  esi = R32((uint32_t)(esi + 0x33cu));
/* 8390e1: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8390e3: je 0x838821 */
  if (zf) goto L_838821;
L_8390e9: /* 8390e9: mov dword ptr [esi + 0x36c], 0xbf800000 */
  W32((uint32_t)(esi + 0x36cu), 0xbf800000u);
/* 8390f3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8390f6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8390fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8390fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8390ff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 839100: mov esp, ebp */
  esp = ebp;
/* 839102: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 839103: ret 8 */
  esp += 12; SPILL(); return;
L_839106: /* 839106: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 839109: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x83910fu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 83910f: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 839112: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 839118: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 83911b: fsub dword ptr [ebp - 0xa0] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff60u)));
/* 839121: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 839124: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 83912a: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 839130: fsub dword ptr [ebp - 0xa4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff5cu)));
/* 839136: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 83913c: fsub dword ptr [ebp - 0xa8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff58u)));
/* 839142: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 839148: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 83914e: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 839154: call dword ptr [0xcfa8a0] */
  esp -= 4; W32(esp, 0x83915au); SPILL(); f_4e23dd(); if (g_unwind) return; /* Core!?Size2D@FVector@@QBEMXZ */ RELOAD();
/* 83915a: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 839160: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 839163: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 839169: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83916b: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83916e: jp 0x839179 */
  if (pf) goto L_839179;
L_839170: /* 839170: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 839177: jmp 0x8391ac */
  goto L_8391ac;
L_839179: /* 839179: fld dword ptr [ebp - 0xb8] */
  { double v = F32((uint32_t)(ebp + 0xffffff48u)); FPUSH(v); }
/* 83917f: fdiv dword ptr [ebp + 8] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x8u)));
/* 839182: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 839188: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 83918a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83918c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83918f: jp 0x839199 */
  if (pf) goto L_839199;
L_839191: /* 839191: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 839193: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_839199: /* 839199: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 83919f: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8391a1: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8391a4: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8391a7: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8391aa: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8391ac: /* 8391ac: mov ecx, esi */
  ecx = esi;
/* 8391ae: mov dword ptr [esi + 0x190], ebx */
  W32((uint32_t)(esi + 0x190u), ebx);
/* 8391b4: call 0x6c3d6e */
  esp -= 4; W32(esp, 0x8391b9u); SPILL(); f_6c3d6e(); if (g_unwind) return; RELOAD();
/* 8391b9: cmp byte ptr [esi + 0x50], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8391bd: jne 0x838812 */
  if (!zf) goto L_838812;
L_8391c3: /* 8391c3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8391c5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8391c8: mov eax, esp */
  eax = esp;
/* 8391ca: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 8391d1: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8391d4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8391d6: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8391dd: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8391e0: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8391e3: mov dword ptr [ebp - 0x30], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f800000u);
/* 8391ea: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8391ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8391ee: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8391f1: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8391f3: mov ecx, esi */
  ecx = esi;
/* 8391f5: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x8391fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8391fb: jmp 0x838812 */
  goto L_838812;
L_839200: /* 839200: test dword ptr [esi + 0x88], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83920a: jne 0x839272 */
  if (!zf) goto L_839272;
L_83920c: /* 83920c: test dword ptr [esi + 0x390], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x390u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 839216: jne 0x839272 */
  if (!zf) goto L_839272;
L_839218: /* 839218: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 83921e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 839221: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 839224: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 839225: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 83922b: lea edx, [ebp - 0x190] */
  edx = (uint32_t)(ebp + 0xfffffe70u);
/* 839231: fsub dword ptr [ebp - 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 839234: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 839235: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 83923b: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 839241: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 839244: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 83924a: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 839250: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 839256: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x83925cu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 83925c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83925e: lea ecx, [esi + 0x188] */
  ecx = (uint32_t)(esi + 0x188u);
/* 839264: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 839266: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 839269: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83926c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83926f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
L_839272: /* 839272: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 839278: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83927b: and eax, 0xfdffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfdffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 839280: mov dword ptr [esi + 0x190], ebx */
  W32((uint32_t)(esi + 0x190u), ebx);
/* 839286: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 839287: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 83928d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83928e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 839295: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 839296: mov esp, ebp */
  esp = ebp;
/* 839298: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 839299: ret 8 */
  esp += 12; SPILL(); return;
}

void f_83929c(void) {
  LOAD_REGS();
L_83929c: /* 83929c: mov ecx, dword ptr [ebp - 0x16c] */
  ecx = R32((uint32_t)(ebp + 0xfffffe94u));
/* 8392a2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8392a7: lea edx, [ebp - 0x138] */
  edx = (uint32_t)(ebp + 0xfffffec8u);
/* 8392ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8392ae: mov dword ptr [ebp - 0x138], ecx */
  W32((uint32_t)(ebp + 0xfffffec8u), ecx);
/* 8392b4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8392b9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8392b9(); return;
}

void f_8392b9(void) {
  LOAD_REGS();
L_8392b9: /* 8392b9: push 0xa15cfc */
  { uint32_t v = 0xa15cfcu; esp -= 4; W32(esp, v); }
/* 8392be: push 0xae3a8c */
  { uint32_t v = 0xae3a8cu; esp -= 4; W32(esp, v); }
/* 8392c3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8392c9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8392c9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8392cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8392ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8392d0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8392d5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8392d5: guest_badaddr(0x8392d5); return;
}

void f_839740(void) {
  LOAD_REGS();
L_839740: /* 839740: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 839741: mov ebp, esp */
  ebp = esp;
/* 839743: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 839745: push 0x9d33d0 */
  { uint32_t v = 0x9d33d0u; esp -= 4; W32(esp, v); }
/* 83974a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 839750: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 839751: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 839758: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83975b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83975c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83975d: mov esi, ecx */
  esi = ecx;
/* 83975f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 839760: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 839763: lea edi, [esi + 0x170] */
  edi = (uint32_t)(esi + 0x170u);
/* 839769: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83976b: mov eax, edi */
  eax = edi;
/* 83976d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 83976f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 839772: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 839775: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 839778: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 83977e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 839780: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 839782: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 839785: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 839787: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 83978a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83978c: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 83978f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 839790: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 839793: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 839799: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 83979b: mov eax, esp */
  eax = esp;
/* 83979d: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 83979f: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 8397a2: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8397a5: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 8397a8: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8397ab: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8397ae: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8397b1: mov eax, esp */
  eax = esp;
/* 8397b3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8397b5: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8397b8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8397bb: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8397be: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8397c1: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8397c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8397c8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8397cf: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8397d6: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x8397dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8397dc: mov edx, dword ptr [esi + 0x16c] */
  edx = R32((uint32_t)(esi + 0x16cu));
/* 8397e2: test byte ptr [edx + 0x410], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x410u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8397e9: jne 0x839928 */
  if (!zf) goto L_839928;
L_8397ef: /* 8397ef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8397f2: mov ecx, esp */
  ecx = esp;
/* 8397f4: mov eax, edi */
  eax = edi;
/* 8397f6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8397f8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8397fa: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8397fd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 839800: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 839803: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 839806: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 839809: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 83980c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83980f: mov ecx, esp */
  ecx = esp;
/* 839811: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 839813: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 839816: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 839819: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 83981c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 83981f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 839820: mov ecx, esi */
  ecx = esi;
/* 839822: call 0x6c8030 */
  esp -= 4; W32(esp, 0x839827u); SPILL(); f_6c8030(); if (g_unwind) return; RELOAD();
/* 839827: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 839828: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 83982b: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x839831u); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 839831: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 839833: je 0x839928 */
  if (zf) goto L_839928;
L_839839: /* 839839: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 83983c: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 83983f: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 839842: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 839845: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 839848: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83984b: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 83984d: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 839850: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 839853: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 839856: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x83985cu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 83985c: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 83985f: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 839862: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x839868u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 839868: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83986b: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 83986e: fdiv dword ptr [ebp - 0x18] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 839871: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 839874: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 839877: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 83987a: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 83987d: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 839880: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 839883: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 839885: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 839888: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 83988b: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 83988e: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 839891: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 839893: fsub dword ptr [ebp - 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 839896: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 839898: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83989a: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 83989c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83989e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8398a0: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8398a2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8398a4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8398aa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8398ac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8398ae: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8398b0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8398b3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8398b5: jne 0x8398be */
  if (!zf) goto L_8398be;
L_8398b7: /* 8398b7: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_8398be: /* 8398be: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8398c1: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8398c4: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 8398c7: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8398cd: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8398d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8398d2: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 8398d5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8398d7: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8398da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8398dc: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 8398de: mov edi, dword ptr [esi + 0x17c] */
  edi = R32((uint32_t)(esi + 0x17cu));
/* 8398e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8398e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8398e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8398e9: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8398ec: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8398ef: mov eax, esp */
  eax = esp;
/* 8398f1: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8398f4: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8398f6: mov edi, dword ptr [esi + 0x180] */
  edi = R32((uint32_t)(esi + 0x180u));
/* 8398fc: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8398ff: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 839902: mov edi, dword ptr [esi + 0x184] */
  edi = R32((uint32_t)(esi + 0x184u));
/* 839908: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 83990b: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 83990e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 839911: mov eax, esp */
  eax = esp;
/* 839913: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 839915: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 839918: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 83991b: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 83991e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83991f: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 839922: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x839928u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_839928: /* 839928: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83992b: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 83992e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83992f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 839930: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 839937: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 839938: mov esp, ebp */
  esp = ebp;
/* 83993a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83993b: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_83993e(void) {
  LOAD_REGS();
L_83993e: /* 83993e: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 839941: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 839946: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 839949: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83994a: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 83994d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x839952u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_839952(); return;
}

void f_839952(void) {
  LOAD_REGS();
L_839952: /* 839952: push 0xa15d3c */
  { uint32_t v = 0xa15d3cu; esp -= 4; W32(esp, v); }
/* 839957: push 0xae3be8 */
  { uint32_t v = 0xae3be8u; esp -= 4; W32(esp, v); }
/* 83995c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x839962u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 839962: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 839965: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 839967: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 839969: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83996eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_83996e: guest_badaddr(0x83996e); return;
}

void f_839a00(void) {
  LOAD_REGS();
L_839a00: /* 839a00: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 839a04: fcomp dword ptr [0xa15d58] */
  fpu_com(ST0, F32((uint32_t)(0xa15d58u)));
  FPOP();
/* 839a0a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 839a0c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 839a0f: jnp 0x839a9b */
  if (!pf) goto L_839a9b;
L_839a15: /* 839a15: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 839a19: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 839a1c: jg 0x839a9b */
  if ((!zf && sf == of)) goto L_839a9b;
L_839a1e: /* 839a1e: movzx edx, byte ptr [ecx + 0x50] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x50u)));
/* 839a22: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 839a23: cmp edx, 0xe */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 839a26: ja 0x839a9b */
  if ((!cf && !zf)) goto L_839a9b;
L_839a28: /* 839a28: jmp dword ptr [edx*4 + 0x839aa0] */
  switch (R32((uint32_t)(edx*4 + 0x839aa0u))) {
    case 0x839a2fu: goto L_839a2f;
    case 0x839a38u: goto L_839a38;
    case 0x839a44u: goto L_839a44;
    case 0x839a4du: goto L_839a4d;
    case 0x839a56u: goto L_839a56;
    case 0x839a5fu: goto L_839a5f;
    case 0x839a68u: goto L_839a68;
    case 0x839a75u: goto L_839a75;
    case 0x839a81u: goto L_839a81;
    case 0x839a91u: goto L_839a91;
    case 0x839a9bu: goto L_839a9b;
    default: guest_badjump(0x839a28, R32((uint32_t)(edx*4 + 0x839aa0u))); return;
  }
L_839a2f: /* 839a2f: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 839a33: jmp 0x6c3d32 */
  SPILL(); f_6c3d32(); return;
L_839a38: /* 839a38: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 839a3a: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 839a3e: jmp dword ptr [edx + 0x128] */
  { uint32_t t = R32((uint32_t)(edx + 0x128u)); SPILL(); call_ind(t); return; }
L_839a44: /* 839a44: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 839a48: jmp 0x6cb7f3 */
  SPILL(); f_6cb7f3(); return;
L_839a4d: /* 839a4d: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 839a51: jmp 0x6cc644 */
  SPILL(); f_6cc644(); return;
L_839a56: /* 839a56: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 839a5a: jmp 0x6c7a4f */
  SPILL(); f_6c7a4f(); return;
L_839a5f: /* 839a5f: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 839a63: jmp 0x6c1a6e */
  SPILL(); f_6c1a6e(); return;
L_839a68: /* 839a68: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 839a6c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 839a6d: call 0x6cbad7 */
  esp -= 4; W32(esp, 0x839a72u); SPILL(); f_6cbad7(); if (g_unwind) return; RELOAD();
/* 839a72: ret 8 */
  esp += 12; SPILL(); return;
L_839a75: /* 839a75: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 839a77: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 839a7b: jmp dword ptr [edx + 0x1a8] */
  { uint32_t t = R32((uint32_t)(edx + 0x1a8u)); SPILL(); call_ind(t); return; }
L_839a81: /* 839a81: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 839a85: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 839a87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 839a88: call dword ptr [edx + 0x140] */
  { uint32_t t = R32((uint32_t)(edx + 0x140u)); esp -= 4; W32(esp, 0x839a8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 839a8e: ret 8 */
  esp += 12; SPILL(); return;
L_839a91: /* 839a91: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 839a95: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 839a96: call 0x6cba32 */
  esp -= 4; W32(esp, 0x839a9bu); SPILL(); f_6cba32(); if (g_unwind) return; RELOAD();
L_839a9b: /* 839a9b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_839b20(void) {
  LOAD_REGS();
L_839b20: /* 839b20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 839b21: mov ebp, esp */
  ebp = esp;
/* 839b23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 839b25: push 0x9d33e0 */
  { uint32_t v = 0x9d33e0u; esp -= 4; W32(esp, v); }
/* 839b2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 839b30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 839b31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 839b38: sub esp, 0x88 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 839b3e: xor eax, eax */
  eax = 0;
/* 839b40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 839b41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 839b42: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 839b45: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 839b48: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 839b4b: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 839b4e: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 839b51: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 839b54: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 839b57: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 839b5a: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 839b5d: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 839b60: mov esi, ecx */
  esi = ecx;
/* 839b62: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 839b68: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 839b6b: fmul dword ptr [0xa0c18c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c18cu)));
/* 839b71: mov eax, dword ptr [esi + 0x2d4] */
  eax = R32((uint32_t)(esi + 0x2d4u));
/* 839b77: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 839b7a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 839b7d: mov edx, eax */
  edx = eax;
/* 839b7f: fmul dword ptr [0xa0c18c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c18cu)));
/* 839b85: mov eax, dword ptr [esi + 0x170] */
  eax = R32((uint32_t)(esi + 0x170u));
/* 839b8b: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 839b91: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 839b94: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 839b97: fmul dword ptr [0xa0c18c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c18cu)));
/* 839b9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 839b9e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 839ba1: lea edi, [esi + 0x170] */
  edi = (uint32_t)(esi + 0x170u);
/* 839ba7: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 839baa: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 839bad: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 839bb0: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 839bb3: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 839bb6: mov eax, esp */
  eax = esp;
/* 839bb8: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 839bbb: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 839bbd: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 839bc3: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 839bc6: fmul dword ptr [0xa08920] */
  ST0 = ST0 * (F32((uint32_t)(0xa08920u)));
/* 839bcc: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 839bcf: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 839bd2: push 0x297 */
  { uint32_t v = 0x297u; esp -= 4; W32(esp, v); }
/* 839bd7: fadd dword ptr [0xa0b294] */
  ST0 = ST0 + (F32((uint32_t)(0xa0b294u)));
/* 839bdd: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 839be0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 839be1: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 839be4: fsubr dword ptr [edi + 8] */
  ST0 = (F32((uint32_t)(edi + 0x8u))) - ST0;
/* 839be7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 839be8: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 839beb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 839bec: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 839bef: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 839bf2: mov dword ptr [ebp - 0x3c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x3f800000u);
/* 839bf9: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 839bfc: mov dword ptr [ebp - 0x38], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffc8u), 0xffffffffu);
/* 839c03: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 839c05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 839c06: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x839c0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 839c0c: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 839c0f: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 839c15: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 839c17: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 839c1a: jp 0x839d2a */
  if (pf) goto L_839d2a;
L_839c20: /* 839c20: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 839c26: mov ecx, edi */
  ecx = edi;
/* 839c28: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 839c2a: fmul dword ptr [0xa10ca8] */
  ST0 = ST0 * (F32((uint32_t)(0xa10ca8u)));
/* 839c30: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 839c33: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 839c36: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 839c39: mov edx, dword ptr [esi + 0x2d4] */
  edx = R32((uint32_t)(esi + 0x2d4u));
/* 839c3f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 839c42: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 839c45: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 839c48: mov eax, edx */
  eax = edx;
/* 839c4a: fmul dword ptr [0xa10ca8] */
  ST0 = ST0 * (F32((uint32_t)(0xa10ca8u)));
/* 839c50: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 839c53: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 839c56: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 839c59: fmul dword ptr [0xa10ca8] */
  ST0 = ST0 * (F32((uint32_t)(0xa10ca8u)));
/* 839c5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 839c60: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 839c63: mov eax, esp */
  eax = esp;
/* 839c65: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 839c68: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 839c6b: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 839c6d: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 839c70: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 839c73: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 839c76: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 839c7c: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 839c7f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 839c81: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 839c84: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 839c87: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 839c8a: call dword ptr [edx + 0xbc] */
  { uint32_t t = R32((uint32_t)(edx + 0xbcu)); esp -= 4; W32(esp, 0x839c90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 839c90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 839c92: je 0x839d2a */
  if (zf) goto L_839d2a;
L_839c98: /* 839c98: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 839c99: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 839c9c: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x839ca2u); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 839ca2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 839ca4: je 0x839d2a */
  if (zf) goto L_839d2a;
L_839caa: /* 839caa: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 839cad: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 839cb3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 839cb5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 839cb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 839cb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 839cbb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 839cbe: mov eax, esp */
  eax = esp;
/* 839cc0: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 839cc2: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 839cc5: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 839cc8: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 839ccb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 839ccc: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 839ccf: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x839cd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 839cd5: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x839cdbu); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 839cdb: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
/* 839cde: fmul dword ptr [0xa15d90] */
  ST0 = ST0 * (F32((uint32_t)(0xa15d90u)));
/* 839ce4: fsub dword ptr [0xa15b48] */
  ST0 = ST0 - (F32((uint32_t)(0xa15b48u)));
/* 839cea: fadd dword ptr [esi + 0x188] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x188u)));
/* 839cf0: fstp dword ptr [esi + 0x188] */
  WF32((uint32_t)(esi + 0x188u), ST0); FPOP();
/* 839cf6: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x839cfcu); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 839cfc: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
/* 839cff: fmul dword ptr [0xa15d90] */
  ST0 = ST0 * (F32((uint32_t)(0xa15d90u)));
/* 839d05: fsub dword ptr [0xa15b48] */
  ST0 = ST0 - (F32((uint32_t)(0xa15b48u)));
/* 839d0b: fadd dword ptr [esi + 0x18c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x18cu)));
/* 839d11: fstp dword ptr [esi + 0x18c] */
  WF32((uint32_t)(esi + 0x18cu), ST0); FPOP();
L_839d17: /* 839d17: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 839d1a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 839d21: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 839d22: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 839d23: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 839d24: mov esp, ebp */
  esp = ebp;
/* 839d26: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 839d27: ret 0x18 */
  esp += 28; SPILL(); return;
L_839d2a: /* 839d2a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 839d2d: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 839d30: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 839d33: lea ecx, [esi + 0x44c] */
  ecx = (uint32_t)(esi + 0x44cu);
/* 839d39: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 839d3b: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 839d3e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 839d41: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 839d47: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 839d49: je 0x839d64 */
  if (zf) goto L_839d64;
L_839d4b: /* 839d4b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 839d4e: mov edx, esp */
  edx = esp;
/* 839d50: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 839d52: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 839d55: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 839d58: call 0x6c4935 */
  esp -= 4; W32(esp, 0x839d5du); SPILL(); f_6c4935(); if (g_unwind) return; RELOAD();
/* 839d5d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 839d5f: jne 0x839d78 */
  if (!zf) goto L_839d78;
L_839d61: /* 839d61: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
L_839d64: /* 839d64: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 839d67: mov ecx, esp */
  ecx = esp;
/* 839d69: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 839d6b: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 839d6e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 839d71: mov ecx, esi */
  ecx = esi;
/* 839d73: call 0x6c6db1 */
  esp -= 4; W32(esp, 0x839d78u); SPILL(); f_6c6db1(); if (g_unwind) return; RELOAD();
L_839d78: /* 839d78: cmp byte ptr [esi + 0x50], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 839d7c: jne 0x839dac */
  if (!zf) goto L_839dac;
L_839d7e: /* 839d7e: mov eax, dword ptr [esi + 0x46c] */
  eax = R32((uint32_t)(esi + 0x46cu));
/* 839d84: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 839d87: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 839d89: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 839d8c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 839d8e: mov eax, esp */
  eax = esp;
/* 839d90: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 839d92: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 839d95: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 839d98: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 839d9b: mov ecx, esi */
  ecx = esi;
/* 839d9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 839d9e: jle 0x839da4 */
  if ((zf || sf != of)) goto L_839da4;
L_839da0: /* 839da0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 839da2: jmp 0x839da6 */
  goto L_839da6;
L_839da4: /* 839da4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
L_839da6: /* 839da6: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x839dacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_839dac: /* 839dac: cmp byte ptr [esi + 0x50], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 839db0: jne 0x839dd4 */
  if (!zf) goto L_839dd4;
L_839db2: /* 839db2: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 839db5: lea ebx, [esi + 0x194] */
  ebx = (uint32_t)(esi + 0x194u);
/* 839dbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 839dbc: mov ecx, ebx */
  ecx = ebx;
/* 839dbe: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x839dc4u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 839dc4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 839dc6: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 839dc8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 839dcb: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 839dce: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 839dd1: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
L_839dd4: /* 839dd4: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 839dd7: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 839dda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 839ddb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 839ddc: mov ecx, esi */
  ecx = esi;
/* 839dde: call 0x6cb717 */
  esp -= 4; W32(esp, 0x839de3u); SPILL(); f_6cb717(); if (g_unwind) return; RELOAD();
/* 839de3: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 839de9: xor eax, eax */
  eax = 0;
/* 839deb: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 839ded: jne 0x839d17 */
  if (!zf) goto L_839d17;
L_839df3: /* 839df3: mov cl, byte ptr [esi + 0x50] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 839df6: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 839df8: jne 0x839d17 */
  if (!zf) goto L_839d17;
L_839dfe: /* 839dfe: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 839e00: mov dword ptr [ebp - 0x90], eax */
  W32((uint32_t)(ebp + 0xffffff70u), eax);
/* 839e06: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* 839e0c: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 839e12: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 839e18: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 839e1b: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 839e1e: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 839e21: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 839e24: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 839e27: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 839e2a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 839e2d: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 839e33: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 839e35: mov ecx, esp */
  ecx = esp;
/* 839e37: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 839e39: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 839e3c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 839e3f: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 839e42: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 839e45: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 839e48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 839e4b: mov ecx, esp */
  ecx = esp;
/* 839e4d: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 839e4f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 839e52: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 839e55: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 839e58: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 839e5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 839e5c: mov ecx, esi */
  ecx = esi;
/* 839e5e: mov dword ptr [ebp - 0x6c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x3f800000u);
/* 839e65: mov dword ptr [ebp - 0x68], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff98u), 0xffffffffu);
/* 839e6c: call dword ptr [edx + 0x12c] */
  { uint32_t t = R32((uint32_t)(edx + 0x12cu)); esp -= 4; W32(esp, 0x839e72u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 839e72: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 839e75: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 839e7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 839e7d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 839e7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 839e81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 839e83: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 839e85: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 839e8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 839e8c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 839e8f: mov eax, esp */
  eax = esp;
/* 839e91: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 839e93: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 839e96: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 839e99: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 839e9c: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 839e9f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 839ea2: mov eax, esp */
  eax = esp;
/* 839ea4: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 839eab: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 839eae: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 839eb0: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 839eb7: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 839eba: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 839ebd: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 839ec4: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 839ec7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 839ec8: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 839ecb: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x839ed1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 839ed1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 839ed4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 839ed5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 839ed6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 839edd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 839ede: mov esp, ebp */
  esp = ebp;
/* 839ee0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 839ee1: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_839ee4(void) {
  LOAD_REGS();
L_839ee4: /* 839ee4: mov ecx, dword ptr [ebp - 0x94] */
  ecx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 839eea: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 839eef: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 839ef2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 839ef3: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 839ef6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x839efbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_839efb(); return;
}

void f_839efb(void) {
  LOAD_REGS();
L_839efb: /* 839efb: push 0xa15d5c */
  { uint32_t v = 0xa15d5cu; esp -= 4; W32(esp, v); }
/* 839f00: push 0xae3af4 */
  { uint32_t v = 0xae3af4u; esp -= 4; W32(esp, v); }
/* 839f05: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x839f0bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 839f0b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 839f0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 839f10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 839f12: call 0x99caf8 */
  esp -= 4; W32(esp, 0x839f17u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_839f17: guest_badaddr(0x839f17); return;
}

void f_83a020(void) {
  LOAD_REGS();
L_83a020: /* 83a020: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 83a021: mov ebp, esp */
  ebp = esp;
/* 83a023: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 83a025: push 0x9d33f0 */
  { uint32_t v = 0x9d33f0u; esp -= 4; W32(esp, v); }
/* 83a02a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 83a030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83a031: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 83a038: sub esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83a03e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83a03f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83a040: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83a041: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 83a044: mov esi, ecx */
  esi = ecx;
/* 83a046: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 83a049: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83a04a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 83a04d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83a04e: mov ecx, esi */
  ecx = esi;
/* 83a050: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 83a057: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 83a05e: call 0x6c8922 */
  esp -= 4; W32(esp, 0x83a063u); SPILL(); f_6c8922(); if (g_unwind) return; RELOAD();
/* 83a063: fld dword ptr [esi + 0x190] */
  { double v = F32((uint32_t)(esi + 0x190u)); FPUSH(v); }
/* 83a069: fcomp dword ptr [0xa09ac8] */
  fpu_com(ST0, F32((uint32_t)(0xa09ac8u)));
  FPOP();
/* 83a06f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83a071: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83a074: jne 0x83a09e */
  if (!zf) goto L_83a09e;
L_83a076: /* 83a076: fld dword ptr [esi + 0x2e0] */
  { double v = F32((uint32_t)(esi + 0x2e0u)); FPUSH(v); }
/* 83a07c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83a082: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83a084: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83a087: jnp 0x83a09e */
  if (!pf) goto L_83a09e;
L_83a089: /* 83a089: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 83a08c: fdiv dword ptr [esi + 0x2e0] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x2e0u)));
/* 83a092: fmul dword ptr [esi + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x190u)));
/* 83a098: fstp dword ptr [esi + 0x190] */
  WF32((uint32_t)(esi + 0x190u), ST0); FPOP();
L_83a09e: /* 83a09e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 83a0a1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 83a0a2: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 83a0a8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83a0aa: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 83a0ad: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 83a0b0: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 83a0b6: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 83a0b9: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 83a0bf: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 83a0c5: and eax, 0xfffdffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffdffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 83a0ca: lea edi, [esi + 0x194] */
  edi = (uint32_t)(esi + 0x194u);
/* 83a0d0: mov ecx, edi */
  ecx = edi;
/* 83a0d2: mov dword ptr [ebp - 0x84], edx */
  W32((uint32_t)(ebp + 0xffffff7cu), edx);
/* 83a0d8: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 83a0de: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x83a0e4u); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 83a0e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83a0e6: je 0x83a0f2 */
  if (zf) goto L_83a0f2;
L_83a0e8: /* 83a0e8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 83a0ea: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 83a0ed: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 83a0f0: jmp 0x83a106 */
  goto L_83a106;
L_83a0f2: /* 83a0f2: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 83a0f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83a0f6: mov ecx, edi */
  ecx = edi;
/* 83a0f8: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x83a0feu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 83a0fe: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 83a100: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83a103: mov edi, dword ptr [eax + 8] */
  edi = R32((uint32_t)(eax + 0x8u));
L_83a106: /* 83a106: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 83a10c: fld dword ptr [eax + 0x3f4] */
  { double v = F32((uint32_t)(eax + 0x3f4u)); FPUSH(v); }
/* 83a112: mov eax, dword ptr [esi + 0x3fc] */
  eax = R32((uint32_t)(esi + 0x3fcu));
/* 83a118: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 83a11e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 83a120: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83a122: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 83a124: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83a125: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 83a128: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83a129: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 83a12c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83a12d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83a130: mov eax, esp */
  eax = esp;
/* 83a132: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83a134: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83a137: mov ecx, esi */
  ecx = esi;
/* 83a139: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 83a13c: call 0x6c6b40 */
  esp -= 4; W32(esp, 0x83a141u); SPILL(); f_6c6b40(); if (g_unwind) return; RELOAD();
/* 83a141: mov ecx, dword ptr [esi + 0x190] */
  ecx = R32((uint32_t)(esi + 0x190u));
/* 83a147: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 83a14a: mov ecx, esi */
  ecx = esi;
/* 83a14c: call 0x6c2e00 */
  esp -= 4; W32(esp, 0x83a151u); SPILL(); f_6c2e00(); if (g_unwind) return; RELOAD();
/* 83a151: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83a153: jne 0x83a18e */
  if (!zf) goto L_83a18e;
L_83a155: /* 83a155: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 83a15b: add ecx, 0x3b8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3b8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 83a161: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x83a167u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 83a167: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 83a16a: fcomp dword ptr [0xa15be4] */
  fpu_com(ST0, F32((uint32_t)(0xa15be4u)));
  FPOP();
/* 83a170: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83a172: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83a175: je 0x83a18e */
  if (zf) goto L_83a18e;
L_83a177: /* 83a177: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 83a17e: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 83a185: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 83a18c: jmp 0x83a1d4 */
  goto L_83a1d4;
L_83a18e: /* 83a18e: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 83a194: fld dword ptr [eax + 0x3c0] */
  { double v = F32((uint32_t)(eax + 0x3c0u)); FPUSH(v); }
/* 83a19a: add eax, 0x3b8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83a19f: fmul dword ptr [0x9f489c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f489cu)));
/* 83a1a5: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 83a1a8: fmul dword ptr [0x9f489c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f489cu)));
/* 83a1ae: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83a1b1: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 83a1b3: fmul dword ptr [0x9f489c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f489cu)));
/* 83a1b9: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 83a1bc: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83a1bf: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 83a1c2: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83a1c5: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 83a1c8: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83a1cb: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 83a1ce: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 83a1d1: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
L_83a1d4: /* 83a1d4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83a1d7: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83a1da: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83a1dd: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 83a1e0: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 83a1e3: fadd dword ptr [esi + 0x190] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x190u)));
/* 83a1e9: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 83a1ec: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83a1ef: lea ebx, [esi + 0x188] */
  ebx = (uint32_t)(esi + 0x188u);
/* 83a1f5: fadd dword ptr [ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4u)));
/* 83a1f8: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 83a1fb: xor eax, eax */
  eax = 0;
/* 83a1fd: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 83a200: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83a203: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83a204: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 83a207: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 83a20a: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 83a20c: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 83a20f: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 83a212: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 83a215: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 83a218: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 83a21b: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 83a21e: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83a221: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 83a224: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 83a227: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 83a22a: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83a22d: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 83a230: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 83a233: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 83a236: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83a239: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83a23c: mov eax, esp */
  eax = esp;
/* 83a23e: mov dword ptr [ebp - 0x5c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x3f800000u);
/* 83a245: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 83a248: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 83a24b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83a24d: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 83a250: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 83a253: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83a256: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 83a259: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 83a25c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83a25f: mov ecx, esi */
  ecx = esi;
/* 83a261: mov dword ptr [ebp - 0x58], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffa8u), 0xffffffffu);
/* 83a268: call 0x6cbda7 */
  esp -= 4; W32(esp, 0x83a26du); SPILL(); f_6cbda7(); if (g_unwind) return; RELOAD();
/* 83a26d: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 83a270: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83a273: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 83a276: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 83a279: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 83a27f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83a281: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83a284: jp 0x83a57f */
  if (pf) goto L_83a57f;
L_83a28a: /* 83a28a: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 83a28d: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 83a290: lea edx, [esi + 0x44c] */
  edx = (uint32_t)(esi + 0x44cu);
/* 83a296: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 83a298: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 83a29b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83a29e: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 83a2a4: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 83a2a7: fld dword ptr [ecx + 0x3cc] */
  { double v = F32((uint32_t)(ecx + 0x3ccu)); FPUSH(v); }
/* 83a2ad: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83a2b3: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 83a2ba: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 83a2c1: mov dword ptr [ebp - 0x28], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0xbf800000u);
/* 83a2c8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83a2ca: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83a2cd: jne 0x83a2d6 */
  if (!zf) goto L_83a2d6;
L_83a2cf: /* 83a2cf: mov dword ptr [ebp - 0x28], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x3f800000u);
L_83a2d6: /* 83a2d6: mov edi, dword ptr [0xcfa578] */
  edi = R32((uint32_t)(0xcfa578u));
/* 83a2dc: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 83a2e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83a2e3: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 83a2e6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x83a2e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83a2e8: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 83a2eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83a2ec: mov ecx, ebx */
  ecx = ebx;
/* 83a2ee: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x83a2f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83a2f0: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83a2f3: fadd dword ptr [ebp - 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 83a2f6: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 83a2fc: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 83a2ff: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 83a302: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83a304: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 83a307: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83a30d: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 83a310: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83a312: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83a315: je 0x83a319 */
  if (zf) goto L_83a319;
L_83a317: /* 83a317: fchs  */
  ST0 = -ST0;
L_83a319: /* 83a319: fcomp dword ptr [0xa08920] */
  fpu_com(ST0, F32((uint32_t)(0xa08920u)));
  FPOP();
/* 83a31f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83a321: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83a324: jp 0x83a3ef */
  if (pf) goto L_83a3ef;
L_83a32a: /* 83a32a: fcom dword ptr [0x9f7194] */
  fpu_com(ST0, F32((uint32_t)(0x9f7194u)));
/* 83a330: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83a332: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83a335: jp 0x83a3ef */
  if (pf) goto L_83a3ef;
L_83a33b: /* 83a33b: fcomp dword ptr [0xa159ac] */
  fpu_com(ST0, F32((uint32_t)(0xa159acu)));
  FPOP();
/* 83a341: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83a343: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83a346: jne 0x83a3f1 */
  if (!zf) goto L_83a3f1;
L_83a34c: /* 83a34c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 83a352: mov ecx, dword ptr [esi + 0x178] */
  ecx = R32((uint32_t)(esi + 0x178u));
/* 83a358: fsub dword ptr [ebp - 0x5c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 83a35b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 83a35e: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 83a361: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83a362: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 83a365: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 83a368: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 83a36a: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 83a36d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83a370: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 83a373: mov ecx, esp */
  ecx = esp;
/* 83a375: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 83a378: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83a37b: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 83a37e: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 83a381: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 83a384: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83a387: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 83a389: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 83a38c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83a38f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83a392: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83a395: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83a398: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83a39b: mov eax, dword ptr [ebp - 0x98] */
  eax = R32((uint32_t)(ebp + 0xffffff68u));
/* 83a3a1: mov ecx, esp */
  ecx = esp;
/* 83a3a3: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 83a3a5: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 83a3ab: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83a3ae: mov eax, dword ptr [ebp - 0x90] */
  eax = R32((uint32_t)(ebp + 0xffffff70u));
/* 83a3b4: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83a3b7: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 83a3ba: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83a3bd: mov ecx, esp */
  ecx = esp;
/* 83a3bf: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 83a3c1: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 83a3c4: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83a3c7: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83a3ca: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83a3cd: mov ecx, esi */
  ecx = esi;
/* 83a3cf: call dword ptr [edx + 0x134] */
  { uint32_t t = R32((uint32_t)(edx + 0x134u)); esp -= 4; W32(esp, 0x83a3d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83a3d5: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 83a3db: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 83a3de: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 83a3e4: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 83a3ea: jmp 0x83a5ab */
  goto L_83a5ab;
L_83a3ef: /* 83a3ef: fstp st(0) */
  STI(0) = ST0; FPOP();
L_83a3f1: /* 83a3f1: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
/* 83a3f4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 83a3f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83a3f7: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 83a3fa: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83a3fd: mov ecx, esp */
  ecx = esp;
/* 83a3ff: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 83a401: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 83a404: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83a407: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 83a40a: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83a40d: mov ecx, esi */
  ecx = esi;
/* 83a40f: call dword ptr [edx + 0x120] */
  { uint32_t t = R32((uint32_t)(edx + 0x120u)); esp -= 4; W32(esp, 0x83a415u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83a415: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 83a418: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 83a41b: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 83a41e: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 83a421: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 83a424: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 83a427: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 83a42a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 83a42d: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 83a430: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83a432: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 83a435: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 83a438: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 83a43b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83a43d: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 83a440: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83a442: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 83a445: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 83a447: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83a44a: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 83a44d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 83a44f: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83a452: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 83a455: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 83a457: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 83a459: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83a45b: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 83a45e: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 83a461: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 83a464: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 83a467: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83a46a: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 83a470: fsub dword ptr [ebp - 0x5c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 83a473: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 83a476: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83a478: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 83a47b: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83a47e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 83a481: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 83a484: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 83a487: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 83a48a: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 83a48d: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83a490: fst dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0);
/* 83a493: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 83a496: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 83a499: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 83a49c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 83a49e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83a4a0: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 83a4a3: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 83a4a6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83a4a8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83a4ae: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83a4b0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83a4b2: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83a4b5: jne 0x83a5ab */
  if (!zf) goto L_83a5ab;
L_83a4bb: /* 83a4bb: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 83a4be: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 83a4c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83a4c2: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 83a4c5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83a4c8: mov eax, esp */
  eax = esp;
/* 83a4ca: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83a4cc: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83a4cf: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83a4d2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83a4d5: mov ecx, esi */
  ecx = esi;
/* 83a4d7: call 0x6cbda7 */
  esp -= 4; W32(esp, 0x83a4dcu); SPILL(); f_6cbda7(); if (g_unwind) return; RELOAD();
/* 83a4dc: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83a4df: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 83a4e5: fsub dword ptr [ebp - 0x5c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 83a4e8: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 83a4eb: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 83a4ee: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 83a4f1: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 83a4f4: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 83a4fa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83a4fc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83a4ff: jp 0x83a5ab */
  if (pf) goto L_83a5ab;
L_83a505: /* 83a505: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
/* 83a508: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 83a50a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83a50b: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 83a50e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83a511: mov ecx, esp */
  ecx = esp;
/* 83a513: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 83a515: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 83a518: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83a51b: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 83a51e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83a521: mov ecx, esi */
  ecx = esi;
/* 83a523: call dword ptr [edx + 0x120] */
  { uint32_t t = R32((uint32_t)(edx + 0x120u)); esp -= 4; W32(esp, 0x83a529u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83a529: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 83a52c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83a52d: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 83a530: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83a531: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 83a534: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83a535: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 83a538: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83a539: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 83a53f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83a540: mov ecx, esi */
  ecx = esi;
/* 83a542: call 0x6c6163 */
  esp -= 4; W32(esp, 0x83a547u); SPILL(); f_6c6163(); if (g_unwind) return; RELOAD();
/* 83a547: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 83a54a: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 83a54d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83a54e: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 83a551: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83a554: mov ecx, esp */
  ecx = esp;
/* 83a556: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83a558: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83a55b: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83a55e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 83a561: mov ecx, esi */
  ecx = esi;
/* 83a563: call 0x6cbda7 */
  esp -= 4; W32(esp, 0x83a568u); SPILL(); f_6cbda7(); if (g_unwind) return; RELOAD();
/* 83a568: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83a56b: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 83a571: fsub dword ptr [ebp - 0x5c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 83a574: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 83a577: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 83a57a: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 83a57d: jmp 0x83a5ab */
  goto L_83a5ab;
L_83a57f: /* 83a57f: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 83a586: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83a589: lea eax, [esi + 0x44c] */
  eax = (uint32_t)(esi + 0x44cu);
/* 83a58f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83a591: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 83a598: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83a59b: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 83a5a2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83a5a5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83a5a8: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_83a5ab: /* 83a5ab: test dword ptr [esi + 0x88], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83a5b5: jne 0x83a66f */
  if (!zf) goto L_83a66f;
L_83a5bb: /* 83a5bb: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 83a5be: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 83a5c1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83a5c3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83a5c6: jp 0x83a66f */
  if (pf) goto L_83a66f;
L_83a5cc: /* 83a5cc: mov edx, dword ptr [esi + 0x16c] */
  edx = R32((uint32_t)(esi + 0x16cu));
/* 83a5d2: mov edi, dword ptr [edx + 0x410] */
  edi = R32((uint32_t)(edx + 0x410u));
/* 83a5d8: shr edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 83a5db: not edi */
  edi = ~edi;
/* 83a5dd: and edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edi = r;
  }
/* 83a5e0: je 0x83a5eb */
  if (zf) goto L_83a5eb;
L_83a5e2: /* 83a5e2: mov eax, dword ptr [esi + 0x190] */
  eax = R32((uint32_t)(esi + 0x190u));
/* 83a5e8: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
L_83a5eb: /* 83a5eb: test dword ptr [esi + 0x390], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x390u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83a5f5: jne 0x83a650 */
  if (!zf) goto L_83a650;
L_83a5f7: /* 83a5f7: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 83a5fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83a5fe: fsub dword ptr [ebp - 0x84] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 83a604: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 83a60a: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 83a610: fsub dword ptr [ebp - 0x88] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff78u)));
/* 83a616: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 83a61c: fsub dword ptr [ebp - 0x8c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff74u)));
/* 83a622: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 83a625: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 83a628: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 83a62b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 83a62e: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 83a631: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 83a634: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83a635: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 83a638: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x83a63eu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 83a63e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 83a640: mov edx, ebx */
  edx = ebx;
/* 83a642: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 83a644: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 83a647: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83a64a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83a64d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_83a650: /* 83a650: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 83a656: and ecx, 0xfdffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfdffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 83a65c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83a65e: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 83a664: je 0x83a66f */
  if (zf) goto L_83a66f;
L_83a666: /* 83a666: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 83a669: mov dword ptr [esi + 0x190], ecx */
  W32((uint32_t)(esi + 0x190u), ecx);
L_83a66f: /* 83a66f: mov edx, dword ptr [esi + 0x16c] */
  edx = R32((uint32_t)(esi + 0x16cu));
/* 83a675: test byte ptr [edx + 0x410], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x410u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83a67c: jne 0x83a704 */
  if (!zf) goto L_83a704;
L_83a682: /* 83a682: cmp byte ptr [esi + 0x50], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 83a686: jne 0x83a6c1 */
  if (!zf) goto L_83a6c1;
L_83a688: /* 83a688: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 83a68a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83a68d: mov ecx, esp */
  ecx = esp;
/* 83a68f: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 83a696: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83a699: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83a69b: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 83a6a2: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83a6a5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83a6a8: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 83a6af: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83a6b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83a6b4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 83a6b7: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 83a6b9: mov ecx, esi */
  ecx = esi;
/* 83a6bb: call dword ptr [eax + 0x114] */
  { uint32_t t = R32((uint32_t)(eax + 0x114u)); esp -= 4; W32(esp, 0x83a6c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_83a6c1: /* 83a6c1: fld dword ptr [esi + 0x190] */
  { double v = F32((uint32_t)(esi + 0x190u)); FPUSH(v); }
/* 83a6c7: fcomp dword ptr [0xa15de4] */
  fpu_com(ST0, F32((uint32_t)(0xa15de4u)));
  FPOP();
/* 83a6cd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83a6cf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83a6d2: jp 0x83a704 */
  if (pf) goto L_83a704;
L_83a6d4: /* 83a6d4: fld dword ptr [esi + 0x190] */
  { double v = F32((uint32_t)(esi + 0x190u)); FPUSH(v); }
/* 83a6da: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83a6e0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83a6e2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83a6e5: jne 0x83a704 */
  if (!zf) goto L_83a704;
L_83a6e7: /* 83a6e7: mov ecx, ebx */
  ecx = ebx;
/* 83a6e9: call dword ptr [0xcfa8a0] */
  esp -= 4; W32(esp, 0x83a6efu); SPILL(); f_4e23dd(); if (g_unwind) return; /* Core!?Size2D@FVector@@QBEMXZ */ RELOAD();
/* 83a6ef: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 83a6f2: fmul qword ptr [0xa15dd8] */
  ST0 = ST0 * (F64((uint32_t)(0xa15dd8u)));
/* 83a6f8: fadd qword ptr [0xa15dc8] */
  ST0 = ST0 + (F64((uint32_t)(0xa15dc8u)));
/* 83a6fe: fstp dword ptr [esi + 0x190] */
  WF32((uint32_t)(esi + 0x190u), ST0); FPOP();
L_83a704: /* 83a704: cmp byte ptr [esi + 0x50], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 83a708: je 0x83a719 */
  if (zf) goto L_83a719;
L_83a70a: /* 83a70a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 83a70d: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 83a710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83a711: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83a712: mov ecx, esi */
  ecx = esi;
/* 83a714: call 0x6cb717 */
  esp -= 4; W32(esp, 0x83a719u); SPILL(); f_6cb717(); if (g_unwind) return; RELOAD();
L_83a719: /* 83a719: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83a71c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83a71d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83a71e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83a725: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83a726: mov esp, ebp */
  esp = ebp;
/* 83a728: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83a729: ret 8 */
  esp += 12; SPILL(); return;
}

void f_83a72c(void) {
  LOAD_REGS();
L_83a72c: /* 83a72c: mov edx, dword ptr [ebp - 0xa0] */
  edx = R32((uint32_t)(ebp + 0xffffff60u));
/* 83a732: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 83a737: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 83a73d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83a73e: mov dword ptr [ebp - 0x9c], edx */
  W32((uint32_t)(ebp + 0xffffff64u), edx);
/* 83a744: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83a749u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_83a749(); return;
}

void f_83a749(void) {
  LOAD_REGS();
L_83a749: /* 83a749: push 0xa15d94 */
  { uint32_t v = 0xa15d94u; esp -= 4; W32(esp, v); }
/* 83a74e: push 0xae3c08 */
  { uint32_t v = 0xae3c08u; esp -= 4; W32(esp, v); }
/* 83a753: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x83a759u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 83a759: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83a75c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83a75e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83a760: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83a765u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_83a765: guest_badaddr(0x83a765); return;
}

void f_83a950(void) {
  LOAD_REGS();
L_83a950: /* 83a950: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 83a951: mov ebp, esp */
  ebp = esp;
/* 83a953: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 83a955: push 0x9d3400 */
  { uint32_t v = 0x9d3400u; esp -= 4; W32(esp, v); }
/* 83a95a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 83a960: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83a961: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 83a968: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83a96b: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 83a970: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83a971: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83a972: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 83a975: mov ecx, dword ptr [0xce847c] */
  ecx = R32((uint32_t)(0xce847cu));
/* 83a97b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83a97c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 83a97f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 83a986: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 83a989: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 83a98b: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 83a98d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83a990: mov edx, dword ptr [ecx + 0xc0] */
  edx = R32((uint32_t)(ecx + 0xc0u));
/* 83a996: mov al, byte ptr [edx + 0x358] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x358u))) & 0xffu);
/* 83a99c: mov ebx, 1 */
  ebx = 0x1u;
/* 83a9a1: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83a9a3: je 0x83a9b8 */
  if (zf) goto L_83a9b8;
L_83a9a5: /* 83a9a5: cmp byte ptr [ecx + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 83a9a8: je 0x83a9b8 */
  if (zf) goto L_83a9b8;
L_83a9aa: /* 83a9aa: fld dword ptr [edx + 0x350] */
  { double v = F32((uint32_t)(edx + 0x350u)); FPUSH(v); }
/* 83a9b0: fsub dword ptr [0xa08704] */
  ST0 = ST0 - (F32((uint32_t)(0xa08704u)));
/* 83a9b6: jmp 0x83a9be */
  goto L_83a9be;
L_83a9b8: /* 83a9b8: fld dword ptr [edx + 0x350] */
  { double v = F32((uint32_t)(edx + 0x350u)); FPUSH(v); }
L_83a9be: /* 83a9be: fcomp dword ptr [ecx + 0x178] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x178u)));
  FPOP();
/* 83a9c4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83a9c6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83a9c9: jne 0x83aa3e */
  if (!zf) goto L_83aa3e;
L_83a9cb: /* 83a9cb: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 83a9d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83a9d3: jne 0x83a9de */
  if (!zf) goto L_83a9de;
L_83a9d5: /* 83a9d5: cmp byte ptr [edx + 0x354], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x354u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 83a9dc: je 0x83aa3e */
  if (zf) goto L_83aa3e;
L_83a9de: /* 83a9de: mov eax, dword ptr [0xb7e3cc] */
  eax = R32((uint32_t)(0xb7e3ccu));
/* 83a9e3: mov dl, byte ptr [edx + 0x354] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x354u))) & 0xffu);
/* 83a9e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83a9eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83a9ec: mov byte ptr [ebp - 0x11], dl */
  W8((uint32_t)(ebp + 0xffffffefu), (edx & 0xffu));
/* 83a9ef: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x83a9f5u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 83a9f5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83a9f8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83a9fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83a9fc: lea esi, [ebp - 0x11] */
  esi = (uint32_t)(ebp + 0xffffffefu);
/* 83a9ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83aa00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83aa01: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x83aa04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83aa04: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83aa07: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 83aa0d: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83aa10: je 0x83aa3e */
  if (zf) goto L_83aa3e;
L_83aa12: /* 83aa12: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 83aa17: mov ecx, dword ptr [0xce847c] */
  ecx = R32((uint32_t)(0xce847cu));
/* 83aa1d: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 83aa20: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
L_83aa22: /* 83aa22: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83aa24: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83aa27: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 83aa29: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83aa2a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83aa2c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83aa2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83aa30: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83aa37: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83aa38: mov esp, ebp */
  esp = ebp;
/* 83aa3a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83aa3b: ret 4 */
  esp += 8; SPILL(); return;
L_83aa3e: /* 83aa3e: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 83aa44: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83aa46: je 0x83aa92 */
  if (zf) goto L_83aa92;
L_83aa48: /* 83aa48: mov dl, byte ptr [ecx + 0xc8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xc8u))) & 0xffu);
/* 83aa4e: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83aa50: jne 0x83aa92 */
  if (!zf) goto L_83aa92;
L_83aa52: /* 83aa52: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83aa55: jne 0x83aa92 */
  if (!zf) goto L_83aa92;
L_83aa57: /* 83aa57: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x83aa5du); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 83aa5d: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 83aa63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83aa64: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 83aa66: push 0xae3a20 */
  { uint32_t v = 0xae3a20u; esp -= 4; W32(esp, v); }
/* 83aa6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83aa6c: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x83aa72u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 83aa72: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83aa75: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83aa78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83aa7a: call 0x6c3b7f */
  esp -= 4; W32(esp, 0x83aa7fu); SPILL(); f_6c3b7f(); if (g_unwind) return; RELOAD();
/* 83aa7f: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 83aa85: mov edx, dword ptr [0xce847c] */
  edx = R32((uint32_t)(0xce847cu));
/* 83aa8b: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 83aa8e: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 83aa90: jmp 0x83aa22 */
  goto L_83aa22;
L_83aa92: /* 83aa92: lea eax, [ecx + 0x188] */
  eax = (uint32_t)(ecx + 0x188u);
/* 83aa98: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 83aa9a: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 83aa9d: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 83aaa0: mov eax, dword ptr [ecx + 0x178] */
  eax = R32((uint32_t)(ecx + 0x178u));
/* 83aaa6: mov dword ptr [ecx + 0x464], eax */
  W32((uint32_t)(ecx + 0x464u), eax);
/* 83aaac: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83aaaf: cmp byte ptr [ecx + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 83aab2: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 83aab5: je 0x83aac9 */
  if (zf) goto L_83aac9;
L_83aab7: /* 83aab7: test byte ptr [ecx + 0x390], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x390u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83aabe: je 0x83ab21 */
  if (zf) goto L_83ab21;
L_83aac0: /* 83aac0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83aac2: call 0x6c7220 */
  esp -= 4; W32(esp, 0x83aac7u); SPILL(); f_6c7220(); if (g_unwind) return; RELOAD();
/* 83aac7: jmp 0x83ab1e */
  goto L_83ab1e;
L_83aac9: /* 83aac9: mov eax, dword ptr [ecx + 0x390] */
  eax = R32((uint32_t)(ecx + 0x390u));
/* 83aacf: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83aad1: je 0x83ab21 */
  if (zf) goto L_83ab21;
L_83aad3: /* 83aad3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 83aad5: jns 0x83ab21 */
  if (!sf) goto L_83ab21;
L_83aad7: /* 83aad7: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83aad9: jne 0x83aae4 */
  if (!zf) goto L_83aae4;
L_83aadb: /* 83aadb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83aadd: call 0x6c77f7 */
  esp -= 4; W32(esp, 0x83aae2u); SPILL(); f_6c77f7(); if (g_unwind) return; RELOAD();
/* 83aae2: jmp 0x83ab1e */
  goto L_83ab1e;
L_83aae4: /* 83aae4: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83aae6: je 0x83ab21 */
  if (zf) goto L_83ab21;
L_83aae8: /* 83aae8: fld dword ptr [ecx + 0x3f0] */
  { double v = F32((uint32_t)(ecx + 0x3f0u)); FPUSH(v); }
/* 83aaee: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 83aaf1: fstp dword ptr [ecx + 0x3f0] */
  WF32((uint32_t)(ecx + 0x3f0u), ST0); FPOP();
/* 83aaf7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83aafa: fld dword ptr [ecx + 0x3f0] */
  { double v = F32((uint32_t)(ecx + 0x3f0u)); FPUSH(v); }
/* 83ab00: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83ab06: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83ab08: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83ab0b: jp 0x83ab21 */
  if (pf) goto L_83ab21;
L_83ab0d: /* 83ab0d: and dword ptr [ecx + 0x390], 0xffffffef */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x390u))); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x390u), r);
  }
/* 83ab14: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83ab17: and dword ptr [eax + 0x390], 0xffffffbf */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x390u))); uint32_t b = (uint32_t)(0xffffffbfu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x390u), r);
  }
L_83ab1e: /* 83ab1e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
L_83ab21: /* 83ab21: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 83ab24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83ab26: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83ab27: call 0x6cb717 */
  esp -= 4; W32(esp, 0x83ab2cu); SPILL(); f_6cb717(); if (g_unwind) return; RELOAD();
/* 83ab2c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83ab2f: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 83ab32: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 83ab34: je 0x83ab3e */
  if (zf) goto L_83ab3e;
L_83ab36: /* 83ab36: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 83ab38: je 0x83ab3e */
  if (zf) goto L_83ab3e;
L_83ab3a: /* 83ab3a: xor eax, eax */
  eax = 0;
/* 83ab3c: jmp 0x83ab40 */
  goto L_83ab40;
L_83ab3e: /* 83ab3e: mov eax, ebx */
  eax = ebx;
L_83ab40: /* 83ab40: mov edx, dword ptr [ecx + 0x390] */
  edx = R32((uint32_t)(ecx + 0x390u));
/* 83ab46: shl eax, 0x16 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 22;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 83ab49: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 83ab4b: and eax, 0x400000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 83ab50: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 83ab52: mov dword ptr [ecx + 0x390], edx */
  W32((uint32_t)(ecx + 0x390u), edx);
/* 83ab58: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83ab5b: mov eax, dword ptr [ecx + 0x390] */
  eax = R32((uint32_t)(ecx + 0x390u));
/* 83ab61: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83ab63: je 0x83ab78 */
  if (zf) goto L_83ab78;
L_83ab65: /* 83ab65: cmp byte ptr [ecx + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 83ab68: jne 0x83ab6e */
  if (!zf) goto L_83ab6e;
L_83ab6a: /* 83ab6a: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83ab6c: jne 0x83ab78 */
  if (!zf) goto L_83ab78;
L_83ab6e: /* 83ab6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83ab70: call 0x6c7220 */
  esp -= 4; W32(esp, 0x83ab75u); SPILL(); f_6c7220(); if (g_unwind) return; RELOAD();
/* 83ab75: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
L_83ab78: /* 83ab78: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 83ab7e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83ab80: je 0x83ac01 */
  if (zf) goto L_83ac01;
L_83ab82: /* 83ab82: fld dword ptr [eax + 0x36c] */
  { double v = F32((uint32_t)(eax + 0x36cu)); FPUSH(v); }
/* 83ab88: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 83ab8b: fstp dword ptr [eax + 0x36c] */
  WF32((uint32_t)(eax + 0x36cu), ST0); FPOP();
/* 83ab91: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83ab94: test byte ptr [ecx + 0x8a], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x8au))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83ab9a: jne 0x83ac01 */
  if (!zf) goto L_83ac01;
L_83ab9c: /* 83ab9c: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 83ab9f: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 83aba1: je 0x83ac01 */
  if (zf) goto L_83ac01;
L_83aba3: /* 83aba3: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 83aba5: je 0x83ac01 */
  if (zf) goto L_83ac01;
L_83aba7: /* 83aba7: mov eax, dword ptr [ecx + 0x390] */
  eax = R32((uint32_t)(ecx + 0x390u));
/* 83abad: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83abb0: jne 0x83abe2 */
  if (!zf) goto L_83abe2;
L_83abb2: /* 83abb2: lea eax, [ecx + 0x2f0] */
  eax = (uint32_t)(ecx + 0x2f0u);
/* 83abb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83abb9: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 83abbf: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x83abc5u); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 83abc5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83abc7: jne 0x83abdf */
  if (!zf) goto L_83abdf;
L_83abc9: /* 83abc9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83abcc: mov eax, dword ptr [ecx + 0x2ec] */
  eax = R32((uint32_t)(ecx + 0x2ecu));
/* 83abd2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 83abd4: jg 0x83abe2 */
  if ((!zf && sf == of)) goto L_83abe2;
L_83abd6: /* 83abd6: call 0x6c2e00 */
  esp -= 4; W32(esp, 0x83abdbu); SPILL(); f_6c2e00(); if (g_unwind) return; RELOAD();
/* 83abdb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83abdd: je 0x83abfe */
  if (zf) goto L_83abfe;
L_83abdf: /* 83abdf: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
L_83abe2: /* 83abe2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83abe4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83abe7: mov eax, esp */
  eax = esp;
/* 83abe9: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 83abeb: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 83abee: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 83abf1: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 83abf4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 83abf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83abf8: call dword ptr [edx + 0x1ac] */
  { uint32_t t = R32((uint32_t)(edx + 0x1acu)); esp -= 4; W32(esp, 0x83abfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_83abfe: /* 83abfe: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
L_83ac01: /* 83ac01: lea edx, [ecx + 0x194] */
  edx = (uint32_t)(ecx + 0x194u);
/* 83ac07: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 83ac09: add ecx, 0x53c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x53cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 83ac0f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 83ac11: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 83ac14: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83ac17: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 83ac1a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 83ac1d: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 83ac20: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83ac23: fmul dword ptr [0xa08920] */
  ST0 = ST0 * (F32((uint32_t)(0xa08920u)));
/* 83ac29: fld dword ptr [eax + 0x3bc] */
  { double v = F32((uint32_t)(eax + 0x3bcu)); FPUSH(v); }
/* 83ac2f: fmul dword ptr [0xa08924] */
  ST0 = ST0 * (F32((uint32_t)(0xa08924u)));
/* 83ac35: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83ac37: fstp dword ptr [eax + 0x3bc] */
  WF32((uint32_t)(eax + 0x3bcu), ST0); FPOP();
/* 83ac3d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83ac40: mov ecx, dword ptr [eax + 0x2fc] */
  ecx = R32((uint32_t)(eax + 0x2fcu));
/* 83ac46: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83ac48: je 0x83ac73 */
  if (zf) goto L_83ac73;
L_83ac4a: /* 83ac4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83ac4b: call 0x6cc464 */
  esp -= 4; W32(esp, 0x83ac50u); SPILL(); f_6cc464(); if (g_unwind) return; RELOAD();
/* 83ac50: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83ac53: mov eax, dword ptr [ecx + 0x2fc] */
  eax = R32((uint32_t)(ecx + 0x2fcu));
/* 83ac59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83ac5b: je 0x83ac73 */
  if (zf) goto L_83ac73;
L_83ac5d: /* 83ac5d: mov edx, dword ptr [eax + 0x2fc] */
  edx = R32((uint32_t)(eax + 0x2fcu));
/* 83ac63: mov dword ptr [ecx + 0x2fc], edx */
  W32((uint32_t)(ecx + 0x2fcu), edx);
/* 83ac69: mov dword ptr [eax + 0x2fc], 0 */
  W32((uint32_t)(eax + 0x2fcu), 0x0u);
L_83ac73: /* 83ac73: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 83ac78: mov ecx, dword ptr [0xce847c] */
  ecx = R32((uint32_t)(0xce847cu));
/* 83ac7e: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 83ac81: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 83ac83: jmp 0x83aa22 */
  goto L_83aa22;
}

void f_83ac88(void) {
  LOAD_REGS();
L_83ac88: /* 83ac88: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83ac8b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 83ac90: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 83ac93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83ac94: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 83ac97: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83ac9cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_83ac9c(); return;
}

void f_83ac9c(void) {
  LOAD_REGS();
L_83ac9c: /* 83ac9c: push 0xa15de8 */
  { uint32_t v = 0xa15de8u; esp -= 4; W32(esp, v); }
/* 83aca1: push 0xae3a54 */
  { uint32_t v = 0xae3a54u; esp -= 4; W32(esp, v); }
/* 83aca6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x83acacu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 83acac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83acaf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83acb1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83acb3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83acb8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_83acb8: guest_badaddr(0x83acb8); return;
}

void f_83ada0(void) {
  LOAD_REGS();
L_83ada0: /* 83ada0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 83ada1: mov ebp, esp */
  ebp = esp;
/* 83ada3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 83ada5: push 0x9d3410 */
  { uint32_t v = 0x9d3410u; esp -= 4; W32(esp, v); }
/* 83adaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 83adb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83adb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 83adb8: sub esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83adbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83adbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83adbd: mov esi, ecx */
  esi = ecx;
/* 83adbf: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 83adc5: xor ebx, ebx */
  ebx = 0;
/* 83adc7: test eax, 0x22000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x22000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83adcc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83adcd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 83add0: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 83add3: jne 0x83aee1 */
  if (!zf) goto L_83aee1;
L_83add9: /* 83add9: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 83addc: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83ade2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83ade4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83ade7: jne 0x83ae34 */
  if (!zf) goto L_83ae34;
L_83ade9: /* 83ade9: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 83adef: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 83adf2: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 83adf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83adf6: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 83adfc: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 83adff: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 83ae02: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83ae03: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 83ae09: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 83ae0c: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 83ae0f: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 83ae12: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83ae15: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83ae18: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x83ae1eu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 83ae1e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 83ae20: lea edx, [esi + 0x188] */
  edx = (uint32_t)(esi + 0x188u);
/* 83ae26: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 83ae28: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 83ae2b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83ae2e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83ae31: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_83ae34: /* 83ae34: fld dword ptr [esi + 0x190] */
  { double v = F32((uint32_t)(esi + 0x190u)); FPUSH(v); }
/* 83ae3a: lea edi, [esi + 0x188] */
  edi = (uint32_t)(esi + 0x188u);
/* 83ae40: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 83ae42: mov ecx, edi */
  ecx = edi;
/* 83ae44: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 83ae47: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 83ae49: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83ae4c: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 83ae4e: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 83ae50: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 83ae53: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 83ae56: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 83ae59: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 83ae5c: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 83ae5f: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* 83ae62: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 83ae65: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 83ae68: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83ae6a: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 83ae6d: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 83ae70: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83ae73: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 83ae76: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 83ae79: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 83ae7c: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x83ae82u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 83ae82: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 83ae85: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 83ae8b: fld dword ptr [eax + 0x3d4] */
  { double v = F32((uint32_t)(eax + 0x3d4u)); FPUSH(v); }
/* 83ae91: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83ae93: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83ae95: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 83ae98: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 83ae9a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83ae9c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83ae9e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83aea1: jne 0x83aee1 */
  if (!zf) goto L_83aee1;
L_83aea3: /* 83aea3: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 83aea6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83aea7: mov ecx, edi */
  ecx = edi;
/* 83aea9: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x83aeafu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 83aeaf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 83aeb1: mov edx, edi */
  edx = edi;
/* 83aeb3: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 83aeb5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 83aeb8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83aebb: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83aebe: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 83aec4: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 83aec7: fld dword ptr [ecx + 0x3d4] */
  { double v = F32((uint32_t)(ecx + 0x3d4u)); FPUSH(v); }
/* 83aecd: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83aecf: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 83aed1: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 83aed3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83aed5: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 83aed8: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 83aedb: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 83aede: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
L_83aee1: /* 83aee1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 83aee4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 83aee7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83aeea: mov edx, esp */
  edx = esp;
/* 83aeec: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 83aeee: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 83aef1: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83aef4: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 83aef7: lea edi, [esi + 0x170] */
  edi = (uint32_t)(esi + 0x170u);
/* 83aefd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83af00: mov ecx, edi */
  ecx = edi;
/* 83af02: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 83af04: mov edx, esp */
  edx = esp;
/* 83af06: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 83af08: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 83af0b: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83af0e: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 83af11: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 83af14: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 83af17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83af18: mov ecx, esi */
  ecx = esi;
/* 83af1a: call 0x6c8030 */
  esp -= 4; W32(esp, 0x83af1fu); SPILL(); f_6c8030(); if (g_unwind) return; RELOAD();
/* 83af1f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83af20: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 83af23: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x83af29u); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 83af29: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 83af2b: je 0x83b032 */
  if (zf) goto L_83b032;
L_83af31: /* 83af31: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 83af34: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 83af37: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 83af3a: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 83af3d: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 83af40: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 83af43: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 83af45: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 83af48: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 83af4b: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 83af4e: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 83af51: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 83af54: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 83af57: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 83af5a: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 83af5c: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 83af5f: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 83af62: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83af65: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83af68: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x83af6eu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 83af6e: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 83af71: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 83af74: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x83af7au); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 83af7a: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 83af7d: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 83af80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83af81: fdiv dword ptr [ebp + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x1cu)));
/* 83af84: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83af8a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83af8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83af8c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83af8d: lea edx, [ebp - 0x70] */
  edx = (uint32_t)(ebp + 0xffffff90u);
/* 83af90: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83af91: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83af94: mov dword ptr [ebp - 0x70], ebx */
  W32((uint32_t)(ebp + 0xffffff90u), ebx);
/* 83af97: mov dword ptr [ebp - 0x6c], ebx */
  W32((uint32_t)(ebp + 0xffffff94u), ebx);
/* 83af9a: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* 83af9d: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 83afa0: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* 83afa6: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 83afa8: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 83afaf: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 83afb6: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 83afbd: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 83afc4: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 83afcb: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 83afd2: mov dword ptr [ebp - 0x4c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x3f800000u);
/* 83afd9: mov dword ptr [ebp - 0x48], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffb8u), 0xffffffffu);
/* 83afe0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 83afe2: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 83afe5: fadd dword ptr [ebp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x24u)));
/* 83afe8: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 83afeb: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 83afee: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 83aff1: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 83aff4: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 83aff7: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 83affa: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 83affc: mov edi, esp */
  edi = esp;
/* 83affe: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 83b000: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 83b003: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 83b006: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 83b009: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 83b00c: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 83b00f: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 83b012: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 83b015: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83b018: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 83b01b: mov edx, esp */
  edx = esp;
/* 83b01d: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 83b01f: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 83b022: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 83b025: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 83b028: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83b029: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 83b02c: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x83b032u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_83b032: /* 83b032: fld dword ptr [esi + 0x190] */
  { double v = F32((uint32_t)(esi + 0x190u)); FPUSH(v); }
/* 83b038: fcomp dword ptr [0xa15e5c] */
  fpu_com(ST0, F32((uint32_t)(0xa15e5cu)));
  FPOP();
/* 83b03e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83b040: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83b043: jne 0x83b079 */
  if (!zf) goto L_83b079;
L_83b045: /* 83b045: fld dword ptr [esi + 0x190] */
  { double v = F32((uint32_t)(esi + 0x190u)); FPUSH(v); }
/* 83b04b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83b051: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83b053: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83b056: jp 0x83b079 */
  if (pf) goto L_83b079;
L_83b058: /* 83b058: lea ecx, [esi + 0x188] */
  ecx = (uint32_t)(esi + 0x188u);
/* 83b05e: call dword ptr [0xcfa8a0] */
  esp -= 4; W32(esp, 0x83b064u); SPILL(); f_4e23dd(); if (g_unwind) return; /* Core!?Size2D@FVector@@QBEMXZ */ RELOAD();
/* 83b064: fst dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0);
/* 83b067: fmul qword ptr [0xa092e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa092e8u)));
/* 83b06d: fsubr qword ptr [0xa15e50] */
  ST0 = (F64((uint32_t)(0xa15e50u))) - ST0;
/* 83b073: fstp dword ptr [esi + 0x190] */
  WF32((uint32_t)(esi + 0x190u), ST0); FPOP();
L_83b079: /* 83b079: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 83b07c: fcomp dword ptr [0x9f7c0c] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c0cu)));
  FPOP();
/* 83b082: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83b084: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83b087: jne 0x83b09d */
  if (!zf) goto L_83b09d;
L_83b089: /* 83b089: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 83b08c: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 83b08f: jge 0x83b09d */
  if ((sf == of)) goto L_83b09d;
L_83b091: /* 83b091: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83b092: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 83b095: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83b096: mov ecx, esi */
  ecx = esi;
/* 83b098: call 0x6cc644 */
  esp -= 4; W32(esp, 0x83b09du); SPILL(); f_6cc644(); if (g_unwind) return; RELOAD();
L_83b09d: /* 83b09d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83b0a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83b0a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83b0a2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83b0a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83b0aa: mov esp, ebp */
  esp = ebp;
/* 83b0ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83b0ad: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_83b0b0(void) {
  LOAD_REGS();
L_83b0b0: /* 83b0b0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83b0b3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 83b0b8: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 83b0bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83b0bc: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 83b0bf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83b0c4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_83b0c4(); return;
}

void f_83b0c4(void) {
  LOAD_REGS();
L_83b0c4: /* 83b0c4: push 0xa15e1c */
  { uint32_t v = 0xa15e1cu; esp -= 4; W32(esp, v); }
/* 83b0c9: push 0xae3ba4 */
  { uint32_t v = 0xae3ba4u; esp -= 4; W32(esp, v); }
/* 83b0ce: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x83b0d4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 83b0d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83b0d7: xor ebx, ebx */
  ebx = 0;
/* 83b0d9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83b0da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83b0db: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83b0e0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_83b0e0: guest_badaddr(0x83b0e0); return;
}

void f_83b1d0(void) {
  LOAD_REGS();
L_83b1d0: /* 83b1d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 83b1d1: mov ebp, esp */
  ebp = esp;
/* 83b1d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 83b1d5: push 0x9d3420 */
  { uint32_t v = 0x9d3420u; esp -= 4; W32(esp, v); }
/* 83b1da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 83b1e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83b1e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 83b1e8: sub esp, 0x114 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83b1ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83b1ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83b1f0: mov esi, ecx */
  esi = ecx;
/* 83b1f2: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 83b1f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83b1fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83b1fb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 83b1fe: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 83b205: je 0x83b955 */
  if (zf) goto L_83b955;
L_83b20b: /* 83b20b: lea ebx, [esi + 0x44c] */
  ebx = (uint32_t)(esi + 0x44cu);
/* 83b211: mov ecx, ebx */
  ecx = ebx;
/* 83b213: call dword ptr [0xcfa5d4] */
  esp -= 4; W32(esp, 0x83b219u); SPILL(); f_4e2b03(); if (g_unwind) return; /* Core!?IsNearlyZero@FVector@@QBEHXZ */ RELOAD();
/* 83b219: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83b21b: je 0x83b250 */
  if (zf) goto L_83b250;
L_83b21d: /* 83b21d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 83b220: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83b221: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 83b224: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83b225: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83b226: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 83b22c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 83b22e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83b231: mov edx, esp */
  edx = esp;
/* 83b233: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 83b235: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 83b238: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83b23b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 83b23e: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 83b241: mov ecx, esi */
  ecx = esi;
/* 83b243: call 0x6c63c0 */
  esp -= 4; W32(esp, 0x83b248u); SPILL(); f_6c63c0(); if (g_unwind) return; RELOAD();
/* 83b248: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83b24a: je 0x83b955 */
  if (zf) goto L_83b955;
L_83b250: /* 83b250: lea edi, [esi + 0x194] */
  edi = (uint32_t)(esi + 0x194u);
/* 83b256: mov ecx, edi */
  ecx = edi;
/* 83b258: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x83b25eu); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 83b25e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83b260: je 0x83b334 */
  if (zf) goto L_83b334;
L_83b266: /* 83b266: fld dword ptr [esi + 0x190] */
  { double v = F32((uint32_t)(esi + 0x190u)); FPUSH(v); }
/* 83b26c: lea edi, [esi + 0x188] */
  edi = (uint32_t)(esi + 0x188u);
/* 83b272: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 83b274: mov edx, edi */
  edx = edi;
/* 83b276: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 83b279: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 83b27b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 83b27d: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 83b280: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 83b282: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 83b288: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 83b28a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 83b28d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 83b290: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 83b293: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 83b296: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 83b299: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83b29b: mov ecx, edi */
  ecx = edi;
/* 83b29d: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83b2a0: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83b2a3: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83b2a6: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83b2a9: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83b2ac: fld dword ptr [eax + 0x3d0] */
  { double v = F32((uint32_t)(eax + 0x3d0u)); FPUSH(v); }
/* 83b2b2: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 83b2b5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83b2b7: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83b2ba: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 83b2bc: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 83b2be: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83b2c1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83b2c3: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 83b2c6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83b2c8: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 83b2cb: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 83b2ce: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 83b2d1: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 83b2d4: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 83b2d6: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 83b2d9: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 83b2dc: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83b2df: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83b2e1: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 83b2e4: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 83b2e7: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83b2ea: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 83b2ed: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83b2f0: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 83b2f3: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 83b2f6: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 83b2f9: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 83b2fc: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 83b2ff: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83b301: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 83b304: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 83b306: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83b308: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83b30e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83b310: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83b313: jp 0x83b45e */
  if (pf) goto L_83b45e;
L_83b319: /* 83b319: lea eax, [esi + 0x194] */
  eax = (uint32_t)(esi + 0x194u);
/* 83b31f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83b321: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83b323: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83b326: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83b329: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83b32c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83b32f: jmp 0x83b45e */
  goto L_83b45e;
L_83b334: /* 83b334: lea ecx, [ebp - 0xe0] */
  ecx = (uint32_t)(ebp + 0xffffff20u);
/* 83b33a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83b33b: mov ecx, edi */
  ecx = edi;
/* 83b33d: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x83b343u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 83b343: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83b345: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 83b348: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 83b34b: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 83b34e: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 83b351: lea edi, [esi + 0x188] */
  edi = (uint32_t)(esi + 0x188u);
/* 83b357: mov ecx, edi */
  ecx = edi;
/* 83b359: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 83b35c: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x83b362u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 83b362: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83b365: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83b368: lea ecx, [esi + 0x194] */
  ecx = (uint32_t)(esi + 0x194u);
/* 83b36e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 83b371: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x83b377u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 83b377: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83b37a: fld dword ptr [esi + 0x408] */
  { double v = F32((uint32_t)(esi + 0x408u)); FPUSH(v); }
/* 83b380: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83b382: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83b384: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 83b387: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 83b389: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83b38b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83b38d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83b390: jne 0x83b3cd */
  if (!zf) goto L_83b3cd;
L_83b392: /* 83b392: mov ecx, dword ptr [esi + 0x408] */
  ecx = R32((uint32_t)(esi + 0x408u));
/* 83b398: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 83b39b: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 83b39e: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 83b3a1: lea eax, [esi + 0x194] */
  eax = (uint32_t)(esi + 0x194u);
/* 83b3a7: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 83b3aa: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 83b3ad: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 83b3b0: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 83b3b3: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 83b3b6: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83b3b9: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 83b3bb: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 83b3be: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 83b3c1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 83b3c4: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 83b3c7: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83b3ca: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_83b3cd: /* 83b3cd: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 83b3d0: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 83b3d6: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 83b3d9: mov ecx, edi */
  ecx = edi;
/* 83b3db: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 83b3de: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 83b3e1: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 83b3e4: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 83b3e7: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 83b3ea: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 83b3ed: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 83b3ef: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83b3f2: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 83b3f5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 83b3f7: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 83b3f9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83b3fb: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 83b3fd: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 83b400: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 83b403: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83b406: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83b409: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83b40b: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83b40e: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83b411: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83b414: fld dword ptr [eax + 0x3d0] */
  { double v = F32((uint32_t)(eax + 0x3d0u)); FPUSH(v); }
/* 83b41a: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 83b41d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83b41f: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83b422: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83b425: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83b427: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83b42a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83b42c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83b42e: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 83b431: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83b433: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 83b436: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 83b439: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 83b43c: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 83b43f: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 83b441: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 83b444: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 83b447: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83b44a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83b44c: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 83b44f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 83b452: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83b455: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 83b458: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83b45b: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_83b45e: /* 83b45e: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 83b461: mov eax, edi */
  eax = edi;
/* 83b463: fmul dword ptr [esi + 0x19c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x19cu)));
/* 83b469: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 83b46c: fmul dword ptr [esi + 0x198] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x198u)));
/* 83b472: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83b475: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 83b478: fmul dword ptr [esi + 0x194] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x194u)));
/* 83b47e: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 83b481: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 83b484: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 83b487: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 83b48a: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83b48d: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 83b48f: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 83b492: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83b495: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83b497: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 83b49a: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 83b49d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83b4a0: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 83b4a3: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83b4a6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83b4a9: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 83b4ac: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 83b4af: mov edx, edi */
  edx = edi;
/* 83b4b1: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 83b4b4: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 83b4b7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83b4b9: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 83b4bb: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 83b4bd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83b4bf: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83b4c1: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 83b4c4: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83b4c7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83b4c9: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 83b4cc: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83b4cf: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 83b4d1: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 83b4d4: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 83b4d7: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 83b4da: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 83b4dd: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 83b4e0: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 83b4e2: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 83b4e5: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 83b4e8: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83b4eb: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 83b4ed: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 83b4f0: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 83b4f3: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83b4f6: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 83b4f9: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83b4fc: fld dword ptr [esi + 0x3f8] */
  { double v = F32((uint32_t)(esi + 0x3f8u)); FPUSH(v); }
/* 83b502: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 83b505: fmul dword ptr [esi + 0x39c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x39cu)));
/* 83b50b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 83b50e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 83b50f: mov ecx, edi */
  ecx = edi;
/* 83b511: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83b514: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 83b517: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x83b51du); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 83b51d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83b520: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83b523: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 83b526: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 83b529: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83b52b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83b52e: jp 0x83b56a */
  if (pf) goto L_83b56a;
L_83b530: /* 83b530: lea ecx, [ebp - 0xe0] */
  ecx = (uint32_t)(ebp + 0xffffff20u);
/* 83b536: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83b537: mov ecx, edi */
  ecx = edi;
/* 83b539: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x83b53fu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 83b53f: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83b542: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 83b544: mov edx, edi */
  edx = edi;
/* 83b546: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 83b548: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 83b54b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83b54e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83b551: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 83b554: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 83b556: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 83b558: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83b55b: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 83b55e: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 83b561: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83b564: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 83b567: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
L_83b56a: /* 83b56a: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 83b56d: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 83b56f: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 83b572: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 83b575: xor eax, eax */
  eax = 0;
/* 83b577: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 83b57a: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 83b57d: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 83b580: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 83b583: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 83b586: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 83b589: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 83b58c: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 83b58f: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 83b592: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 83b595: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 83b59b: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 83b5a1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 83b5a3: mov dword ptr [ebp - 0x84], edx */
  W32((uint32_t)(ebp + 0xffffff7cu), edx);
/* 83b5a9: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83b5ac: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83b5af: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 83b5b2: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 83b5b8: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 83b5bb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 83b5be: and eax, 0xfffdffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffdffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 83b5c3: mov dword ptr [ebp - 0x58], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x3f800000u);
/* 83b5ca: mov dword ptr [ebp - 0x54], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffacu), 0xffffffffu);
/* 83b5d1: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 83b5d4: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 83b5da: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 83b5dd: mov dword ptr [ebp - 0x2c], 0x44992000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x44992000u);
L_83b5e4: /* 83b5e4: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 83b5e7: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83b5ed: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83b5ef: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83b5f2: jne 0x83bbde */
  if (!zf) goto L_83bbde;
L_83b5f8: /* 83b5f8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 83b5fb: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 83b5fe: jge 0x83bbde */
  if ((sf == of)) goto L_83bbde;
L_83b604: /* 83b604: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 83b607: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 83b608: fcomp dword ptr [0xa110dc] */
  fpu_com(ST0, F32((uint32_t)(0xa110dcu)));
  FPOP();
/* 83b60e: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 83b611: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83b613: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83b616: jne 0x83b68b */
  if (!zf) goto L_83b68b;
L_83b618: /* 83b618: mov ecx, esi */
  ecx = esi;
/* 83b61a: call 0x6c2e00 */
  esp -= 4; W32(esp, 0x83b61fu); SPILL(); f_6c2e00(); if (g_unwind) return; RELOAD();
/* 83b61f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83b621: jne 0x83b663 */
  if (!zf) goto L_83b663;
L_83b623: /* 83b623: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 83b629: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83b62b: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 83b62d: fcom dword ptr [ebp - 0x2c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd4u)));
/* 83b630: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83b632: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83b635: jp 0x83b63c */
  if (pf) goto L_83b63c;
L_83b637: /* 83b637: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83b63a: jmp 0x83b644 */
  goto L_83b644;
L_83b63c: /* 83b63c: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 83b63f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83b641: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
L_83b644: /* 83b644: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 83b64a: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x83b650u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 83b650: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 83b653: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 83b656: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 83b659: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 83b65c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83b65e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83b661: jne 0x83b68b */
  if (!zf) goto L_83b68b;
L_83b663: /* 83b663: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 83b666: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 83b66c: fld dword ptr [0xa110dc] */
  { double v = F32((uint32_t)(0xa110dcu)); FPUSH(v); }
/* 83b672: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 83b674: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83b676: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83b679: jp 0x83b686 */
  if (pf) goto L_83b686;
L_83b67b: /* 83b67b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83b67d: mov dword ptr [ebp - 0x18], 0x3d4ccccd */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3d4ccccdu);
/* 83b684: jmp 0x83b691 */
  goto L_83b691;
L_83b686: /* 83b686: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83b689: jmp 0x83b691 */
  goto L_83b691;
L_83b68b: /* 83b68b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83b68e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_83b691: /* 83b691: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 83b694: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 83b697: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 83b69a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 83b69d: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 83b6a0: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 83b6a3: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 83b6a9: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 83b6ac: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 83b6b2: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 83b6b5: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 83b6b8: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 83b6bb: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 83b6be: call dword ptr [0xcfa5d4] */
  esp -= 4; W32(esp, 0x83b6c4u); SPILL(); f_4e2b03(); if (g_unwind) return; /* Core!?IsNearlyZero@FVector@@QBEHXZ */ RELOAD();
/* 83b6c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83b6c6: je 0x83b81c */
  if (zf) goto L_83b81c;
L_83b6cc: /* 83b6cc: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 83b6d2: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83b6d8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83b6da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83b6dd: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 83b6e0: mov eax, esp */
  eax = esp;
/* 83b6e2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 83b6e4: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 83b6ee: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 83b6f1: mov edi, dword ptr [ebp - 0xac] */
  edi = R32((uint32_t)(ebp + 0xffffff54u));
/* 83b6f7: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 83b6f9: mov dword ptr [ebp - 0xa8], 0 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x0u);
/* 83b703: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83b706: mov edi, dword ptr [ebp - 0xa8] */
  edi = R32((uint32_t)(ebp + 0xffffff58u));
/* 83b70c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83b70e: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 83b711: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 83b713: mov dword ptr [ebp - 0xa4], 0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x0u);
/* 83b71d: mov edi, dword ptr [ebp - 0xa4] */
  edi = R32((uint32_t)(ebp + 0xffffff5cu));
/* 83b723: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 83b726: fstp dword ptr [ebp - 0x120] */
  WF32((uint32_t)(ebp + 0xfffffee0u), ST0); FPOP();
/* 83b72c: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 83b731: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 83b737: fsubr dword ptr [esi + 0x178] */
  ST0 = (F32((uint32_t)(esi + 0x178u))) - ST0;
/* 83b73d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83b73e: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 83b744: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* 83b74a: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 83b74d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83b74e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83b74f: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 83b752: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 83b755: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83b756: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 83b75c: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 83b763: fsub dword ptr [ebp - 0x120] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffee0u)));
/* 83b769: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 83b76f: fstp dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0); FPOP();
/* 83b775: fst dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0);
/* 83b77b: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 83b77e: fmul dword ptr [0xa105c0] */
  ST0 = ST0 * (F32((uint32_t)(0xa105c0u)));
/* 83b784: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 83b787: fmul dword ptr [0xa105c0] */
  ST0 = ST0 * (F32((uint32_t)(0xa105c0u)));
/* 83b78d: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 83b790: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 83b792: fmul dword ptr [0xa105c0] */
  ST0 = ST0 * (F32((uint32_t)(0xa105c0u)));
/* 83b798: fstp dword ptr [ebp - 0x114] */
  WF32((uint32_t)(ebp + 0xfffffeecu), ST0); FPOP();
/* 83b79e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 83b7a0: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 83b7a3: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 83b7a6: fld dword ptr [ebp - 0xd4] */
  { double v = F32((uint32_t)(ebp + 0xffffff2cu)); FPUSH(v); }
/* 83b7ac: fsub dword ptr [ebp - 0x114] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffeecu)));
/* 83b7b2: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 83b7b8: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 83b7be: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 83b7c4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83b7c6: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x83b7ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83b7cc: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 83b7cf: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 83b7d2: fmul dword ptr [0xa105c0] */
  ST0 = ST0 * (F32((uint32_t)(0xa105c0u)));
/* 83b7d8: cmp ecx, dword ptr [ebp - 0x78] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff88u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 83b7db: jne 0x83b968 */
  if (!zf) goto L_83b968;
L_83b7e1: /* 83b7e1: fld dword ptr [0xa155b8] */
  { double v = F32((uint32_t)(0xa155b8u)); FPUSH(v); }
/* 83b7e7: fadd dword ptr [0xa155c4] */
  ST0 = ST0 + (F32((uint32_t)(0xa155c4u)));
/* 83b7ed: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 83b7ef: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 83b7f1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83b7f3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83b7f6: jp 0x83b968 */
  if (pf) goto L_83b968;
L_83b7fc: /* 83b7fc: fld dword ptr [0xa155c0] */
  { double v = F32((uint32_t)(0xa155c0u)); FPUSH(v); }
/* 83b802: fadd dword ptr [0xa155b8] */
  ST0 = ST0 + (F32((uint32_t)(0xa155b8u)));
/* 83b808: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83b80a: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 83b80c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83b80e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83b811: je 0x83b5e4 */
  if (zf) goto L_83b5e4;
L_83b817: /* 83b817: jmp 0x83b96a */
  goto L_83b96a;
L_83b81c: /* 83b81c: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 83b822: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83b824: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83b826: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83b828: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83b82a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83b82c: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 83b82f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83b830: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83b833: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 83b839: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 83b83b: mov eax, esp */
  eax = esp;
/* 83b83d: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 83b83f: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 83b842: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83b845: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 83b848: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83b84b: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 83b84e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83b851: mov eax, esp */
  eax = esp;
/* 83b853: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83b855: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 83b858: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 83b85b: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 83b85e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83b861: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83b867: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83b868: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x83b86eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83b86e: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 83b871: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 83b877: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83b879: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83b87c: jp 0x83b90b */
  if (pf) goto L_83b90b;
L_83b882: /* 83b882: lea edx, [ebp - 0xec] */
  edx = (uint32_t)(ebp + 0xffffff14u);
/* 83b888: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83b889: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 83b88c: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x83b892u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 83b892: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 83b898: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 83b89b: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 83b89e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83b89f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83b8a2: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83b8a5: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 83b8a8: mov ecx, esp */
  ecx = esp;
/* 83b8aa: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 83b8ad: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83b8b0: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 83b8b3: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 83b8b6: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 83b8b9: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 83b8bc: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 83b8c2: mov edx, dword ptr [ebp - 0x94] */
  edx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 83b8c8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83b8ca: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 83b8d0: mov eax, dword ptr [ebp - 0x90] */
  eax = R32((uint32_t)(ebp + 0xffffff70u));
/* 83b8d6: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83b8d9: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 83b8df: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* 83b8e5: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 83b8e8: mov ecx, dword ptr [ebp - 0xec] */
  ecx = R32((uint32_t)(ebp + 0xffffff14u));
/* 83b8ee: mov edx, dword ptr [ebp - 0xe8] */
  edx = R32((uint32_t)(ebp + 0xffffff18u));
/* 83b8f4: mov eax, esp */
  eax = esp;
/* 83b8f6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83b8f8: mov ecx, dword ptr [ebp - 0xe4] */
  ecx = R32((uint32_t)(ebp + 0xffffff1cu));
/* 83b8fe: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83b901: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83b904: mov ecx, esi */
  ecx = esi;
/* 83b906: call 0x6ccdd8 */
  esp -= 4; W32(esp, 0x83b90bu); SPILL(); f_6ccdd8(); if (g_unwind) return; RELOAD();
L_83b90b: /* 83b90b: cmp byte ptr [esi + 0x50], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 83b90f: jne 0x83b96a */
  if (!zf) goto L_83b96a;
L_83b911: /* 83b911: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 83b914: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83b917: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83b91a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83b91b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83b91c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83b91d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83b920: lea edx, [esi + 0x188] */
  edx = (uint32_t)(esi + 0x188u);
/* 83b926: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 83b928: mov eax, esp */
  eax = esp;
/* 83b92a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83b92c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 83b92f: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 83b932: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 83b935: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83b938: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 83b93b: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 83b93e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83b941: mov eax, esp */
  eax = esp;
/* 83b943: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83b945: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83b948: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83b94b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83b94e: mov ecx, esi */
  ecx = esi;
/* 83b950: call 0x6c7e50 */
  esp -= 4; W32(esp, 0x83b955u); SPILL(); f_6c7e50(); if (g_unwind) return; RELOAD();
L_83b955: /* 83b955: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83b958: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83b95f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83b960: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83b961: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83b962: mov esp, ebp */
  esp = ebp;
/* 83b964: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83b965: ret 8 */
  esp += 12; SPILL(); return;
L_83b968: /* 83b968: fstp st(0) */
  STI(0) = ST0; FPOP();
L_83b96a: /* 83b96a: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 83b970: mov edx, dword ptr [esi + 0x2d4] */
  edx = R32((uint32_t)(esi + 0x2d4u));
/* 83b976: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 83b97c: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83b982: fstp dword ptr [ebp - 0xb4] */
  WF32((uint32_t)(ebp + 0xffffff4cu), ST0); FPOP();
/* 83b988: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 83b98e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83b991: fstp dword ptr [ebp - 0xb0] */
  WF32((uint32_t)(ebp + 0xffffff50u), ST0); FPOP();
/* 83b997: mov dword ptr [ebp - 0xb8], edx */
  W32((uint32_t)(ebp + 0xffffff48u), edx);
/* 83b99d: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 83b9a0: mov edi, dword ptr [ebp - 0xb8] */
  edi = R32((uint32_t)(ebp + 0xffffff48u));
/* 83b9a6: fmul dword ptr [0xa15154] */
  ST0 = ST0 * (F32((uint32_t)(0xa15154u)));
/* 83b9ac: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 83b9af: fmul dword ptr [0xa15154] */
  ST0 = ST0 * (F32((uint32_t)(0xa15154u)));
/* 83b9b5: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 83b9b8: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 83b9ba: fmul dword ptr [0xa15154] */
  ST0 = ST0 * (F32((uint32_t)(0xa15154u)));
/* 83b9c0: fstp dword ptr [ebp - 0x108] */
  WF32((uint32_t)(ebp + 0xfffffef8u), ST0); FPOP();
/* 83b9c6: fsubr dword ptr [eax + 8] */
  ST0 = (F32((uint32_t)(eax + 0x8u))) - ST0;
/* 83b9c9: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 83b9cc: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 83b9cf: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 83b9d1: fsub dword ptr [ebp - 0x108] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffef8u)));
/* 83b9d7: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 83b9da: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 83b9dd: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 83b9e0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83b9e2: mov ecx, esp */
  ecx = esp;
/* 83b9e4: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 83b9e6: mov edi, dword ptr [ebp - 0xb4] */
  edi = R32((uint32_t)(ebp + 0xffffff4cu));
/* 83b9ec: push 0xdf */
  { uint32_t v = 0xdfu; esp -= 4; W32(esp, v); }
/* 83b9f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83b9f2: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 83b9f5: mov edi, dword ptr [ebp - 0xb0] */
  edi = R32((uint32_t)(ebp + 0xffffff50u));
/* 83b9fb: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 83b9fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83b9ff: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 83ba02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83ba03: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 83ba06: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83ba07: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83ba0d: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x83ba13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83ba13: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 83ba16: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 83ba1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83ba1e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83ba20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83ba22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83ba24: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83ba26: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83ba29: jp 0x83baf4 */
  if (pf) goto L_83baf4;
L_83ba2f: /* 83ba2f: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 83ba35: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 83ba38: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83ba3a: fmul dword ptr [0xa15e8c] */
  ST0 = ST0 * (F32((uint32_t)(0xa15e8cu)));
/* 83ba40: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 83ba43: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 83ba46: fmul dword ptr [0xa15e8c] */
  ST0 = ST0 * (F32((uint32_t)(0xa15e8cu)));
/* 83ba4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83ba4d: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 83ba4f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83ba52: fmul dword ptr [0xa15e8c] */
  ST0 = ST0 * (F32((uint32_t)(0xa15e8cu)));
/* 83ba58: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 83ba5e: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 83ba60: mov eax, esp */
  eax = esp;
/* 83ba62: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 83ba64: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 83ba6a: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 83ba6d: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83ba70: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 83ba76: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 83ba79: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83ba7c: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 83ba82: mov ecx, dword ptr [ebp - 0xc8] */
  ecx = R32((uint32_t)(ebp + 0xffffff38u));
/* 83ba88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83ba8b: mov eax, esp */
  eax = esp;
/* 83ba8d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83ba8f: mov ecx, dword ptr [ebp - 0xc4] */
  ecx = R32((uint32_t)(ebp + 0xffffff3cu));
/* 83ba95: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 83ba98: mov ecx, dword ptr [ebp - 0xc0] */
  ecx = R32((uint32_t)(ebp + 0xffffff40u));
/* 83ba9e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83baa1: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83baa7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83baa8: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x83baaeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83baae: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 83bab1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 83bab4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83bab5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83bab6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83bab7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83baba: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 83bac0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83bac2: mov ecx, esp */
  ecx = esp;
/* 83bac4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83bac6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83bac9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83bacc: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83bacf: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83bad2: mov ecx, esi */
  ecx = esi;
/* 83bad4: call 0x6c63c0 */
  esp -= 4; W32(esp, 0x83bad9u); SPILL(); f_6c63c0(); if (g_unwind) return; RELOAD();
/* 83bad9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83badb: jne 0x83b5e4 */
  if (!zf) goto L_83b5e4;
L_83bae1: /* 83bae1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83bae4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83baeb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83baec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83baed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83baee: mov esp, ebp */
  esp = ebp;
/* 83baf0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83baf1: ret 8 */
  esp += 12; SPILL(); return;
L_83baf4: /* 83baf4: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 83baf7: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 83bafa: mov ecx, ebx */
  ecx = ebx;
/* 83bafc: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83bafe: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 83bb01: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83bb04: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 83bb07: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 83bb0a: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 83bb10: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 83bb16: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 83bb19: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 83bb1b: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 83bb21: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 83bb24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83bb25: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83bb28: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 83bb2b: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* 83bb31: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 83bb33: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 83bb35: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 83bb3b: mov ecx, esp */
  ecx = esp;
/* 83bb3d: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 83bb3f: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 83bb42: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 83bb45: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 83bb4b: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 83bb4e: fmul dword ptr [0xa15154] */
  ST0 = ST0 * (F32((uint32_t)(0xa15154u)));
/* 83bb54: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 83bb57: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 83bb5a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83bb5d: fmul dword ptr [0xa15154] */
  ST0 = ST0 * (F32((uint32_t)(0xa15154u)));
/* 83bb63: mov ecx, esp */
  ecx = esp;
/* 83bb65: fld dword ptr [ebp - 0xe0] */
  { double v = F32((uint32_t)(ebp + 0xffffff20u)); FPUSH(v); }
/* 83bb6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83bb6c: fmul dword ptr [0xa15154] */
  ST0 = ST0 * (F32((uint32_t)(0xa15154u)));
/* 83bb72: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 83bb78: mov edx, dword ptr [ebp - 0xa0] */
  edx = R32((uint32_t)(ebp + 0xffffff60u));
/* 83bb7e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83bb80: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 83bb86: mov edx, dword ptr [ebp - 0x9c] */
  edx = R32((uint32_t)(ebp + 0xffffff64u));
/* 83bb8c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83bb8f: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 83bb95: mov edx, dword ptr [ebp - 0x98] */
  edx = R32((uint32_t)(ebp + 0xffffff68u));
/* 83bb9b: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 83bb9e: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83bba4: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x83bbaau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83bbaa: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 83bbad: cmp eax, dword ptr [esi + 0x5c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 83bbb0: je 0x83b5e4 */
  if (zf) goto L_83b5e4;
L_83bbb6: /* 83bbb6: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* 83bbb9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 83bbbb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 83bbbd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83bbc0: mov ecx, esp */
  ecx = esp;
/* 83bbc2: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 83bbc4: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 83bbc7: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 83bbca: mov edi, dword ptr [ebp - 0x60] */
  edi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 83bbcd: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 83bbd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83bbd1: mov ecx, esi */
  ecx = esi;
/* 83bbd3: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x83bbd9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83bbd9: jmp 0x83b5e4 */
  goto L_83b5e4;
L_83bbde: /* 83bbde: test dword ptr [esi + 0x88], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83bbe8: jne 0x83b955 */
  if (!zf) goto L_83b955;
L_83bbee: /* 83bbee: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 83bbf4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 83bbf7: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 83bbfa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83bbfb: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 83bc01: lea eax, [ebp - 0xe0] */
  eax = (uint32_t)(ebp + 0xffffff20u);
/* 83bc07: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 83bc0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83bc0b: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 83bc11: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 83bc14: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 83bc17: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 83bc1a: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 83bc1d: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 83bc20: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x83bc26u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 83bc26: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 83bc28: add esi, 0x188 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 83bc2e: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 83bc30: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83bc33: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83bc36: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 83bc39: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83bc3c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83bc3d: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 83bc40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83bc41: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83bc48: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83bc49: mov esp, ebp */
  esp = ebp;
/* 83bc4b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83bc4c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_83bc4f(void) {
  LOAD_REGS();
L_83bc4f: /* 83bc4f: mov ecx, dword ptr [ebp - 0xfc] */
  ecx = R32((uint32_t)(ebp + 0xffffff04u));
/* 83bc55: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 83bc5a: lea edx, [ebp - 0xbc] */
  edx = (uint32_t)(ebp + 0xffffff44u);
/* 83bc60: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83bc61: mov dword ptr [ebp - 0xbc], ecx */
  W32((uint32_t)(ebp + 0xffffff44u), ecx);
/* 83bc67: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83bc6cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_83bc6c(); return;
}

void f_83bc6c(void) {
  LOAD_REGS();
L_83bc6c: /* 83bc6c: push 0xa15e60 */
  { uint32_t v = 0xa15e60u; esp -= 4; W32(esp, v); }
/* 83bc71: push 0xae3c40 */
  { uint32_t v = 0xae3c40u; esp -= 4; W32(esp, v); }
/* 83bc76: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x83bc7cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 83bc7c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83bc7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83bc81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83bc83: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83bc88u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_83bc88: guest_badaddr(0x83bc88); return;
}

void f_83bf40(void) {
  LOAD_REGS();
L_83bf40: /* 83bf40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 83bf41: mov ebp, esp */
  ebp = esp;
/* 83bf43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 83bf45: push 0x9d3430 */
  { uint32_t v = 0x9d3430u; esp -= 4; W32(esp, v); }
/* 83bf4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 83bf50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83bf51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 83bf58: sub esp, 0x18c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83bf5e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83bf5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83bf60: mov esi, ecx */
  esi = ecx;
/* 83bf62: lea ebx, [esi + 0x194] */
  ebx = (uint32_t)(esi + 0x194u);
/* 83bf68: mov ecx, ebx */
  ecx = ebx;
/* 83bf6a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83bf6c: xor eax, eax */
  eax = 0;
/* 83bf6e: mov dword ptr [ebp - 0xb4], edx */
  W32((uint32_t)(ebp + 0xffffff4cu), edx);
/* 83bf74: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 83bf77: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83bf7a: mov dword ptr [ebp - 0xb0], edx */
  W32((uint32_t)(ebp + 0xffffff50u), edx);
/* 83bf80: mov edx, dword ptr [esi + 0x410] */
  edx = R32((uint32_t)(esi + 0x410u));
/* 83bf86: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 83bf89: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 83bf8c: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 83bf8f: fcomp dword ptr [0xa110dc] */
  fpu_com(ST0, F32((uint32_t)(0xa110dcu)));
  FPOP();
/* 83bf95: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 83bf98: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 83bf9b: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 83bf9e: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 83bfa1: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 83bfa4: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 83bfa7: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 83bfaa: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 83bfad: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 83bfb0: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 83bfb3: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 83bfb6: mov dword ptr [esi + 0x19c], eax */
  W32((uint32_t)(esi + 0x19cu), eax);
/* 83bfbc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83bfbe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83bfbf: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83bfc2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 83bfc5: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 83bfc8: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
/* 83bfce: mov dword ptr [ebp - 0x48], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x3f800000u);
/* 83bfd5: mov dword ptr [ebp - 0x44], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffbcu), 0xffffffffu);
/* 83bfdc: jne 0x83c0cc */
  if (!zf) goto L_83c0cc;
L_83bfe2: /* 83bfe2: lea eax, [ebp - 0x110] */
  eax = (uint32_t)(ebp + 0xfffffef0u);
/* 83bfe8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83bfe9: mov ecx, ebx */
  ecx = ebx;
/* 83bfeb: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x83bff1u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 83bff1: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 83bff4: fmul dword ptr [esi + 0x408] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x408u)));
/* 83bffa: mov edx, dword ptr [esi + 0x2d4] */
  edx = R32((uint32_t)(esi + 0x2d4u));
/* 83c000: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83c006: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c009: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83c00b: mov dword ptr [ebp - 0x90], edx */
  W32((uint32_t)(ebp + 0xffffff70u), edx);
/* 83c011: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 83c014: mov edi, dword ptr [ebp - 0x90] */
  edi = R32((uint32_t)(ebp + 0xffffff70u));
/* 83c01a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83c01c: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 83c01e: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 83c024: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 83c02a: fadd dword ptr [esi + 0x18c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x18cu)));
/* 83c030: fld dword ptr [ebp - 0xc0] */
  { double v = F32((uint32_t)(ebp + 0xffffff40u)); FPUSH(v); }
/* 83c036: fadd dword ptr [esi + 0x188] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x188u)));
/* 83c03c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83c03e: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83c041: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83c044: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83c047: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 83c04d: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 83c053: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 83c059: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 83c05f: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 83c065: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 83c068: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 83c06b: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 83c06e: fld dword ptr [ebp - 0xc0] */
  { double v = F32((uint32_t)(ebp + 0xffffff40u)); FPUSH(v); }
/* 83c074: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 83c076: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 83c07c: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 83c082: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 83c088: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83c08a: mov ecx, esp */
  ecx = esp;
/* 83c08c: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 83c08e: mov edi, dword ptr [ebp - 0x8c] */
  edi = R32((uint32_t)(ebp + 0xffffff74u));
/* 83c094: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 83c099: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c09a: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 83c09d: mov edi, dword ptr [ebp - 0x88] */
  edi = R32((uint32_t)(ebp + 0xffffff78u));
/* 83c0a3: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 83c0a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c0aa: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 83c0ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83c0ae: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 83c0b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83c0b2: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83c0b8: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x83c0beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83c0be: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 83c0c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83c0c3: je 0x83c0cc */
  if (zf) goto L_83c0cc;
L_83c0c5: /* 83c0c5: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
L_83c0cc: /* 83c0cc: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 83c0cf: lea edi, [esi + 0x188] */
  edi = (uint32_t)(esi + 0x188u);
/* 83c0d5: fmul dword ptr [esi + 0x408] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x408u)));
/* 83c0db: mov edx, edi */
  edx = edi;
/* 83c0dd: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 83c0df: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 83c0e2: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 83c0e5: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83c0e8: mov dword ptr [ebp - 0xf4], ecx */
  W32((uint32_t)(ebp + 0xffffff0cu), ecx);
/* 83c0ee: mov dword ptr [ebp - 0xf0], edx */
  W32((uint32_t)(ebp + 0xffffff10u), edx);
/* 83c0f4: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 83c0fa: mov dword ptr [ebp - 0xf8], eax */
  W32((uint32_t)(ebp + 0xffffff08u), eax);
/* 83c100: mov dword ptr [ebp - 0xf0], 0 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x0u);
/* 83c10a: call dword ptr [0xcfa8a0] */
  esp -= 4; W32(esp, 0x83c110u); SPILL(); f_4e23dd(); if (g_unwind) return; /* Core!?Size2D@FVector@@QBEMXZ */ RELOAD();
/* 83c110: fcom dword ptr [0xa0c188] */
  fpu_com(ST0, F32((uint32_t)(0xa0c188u)));
/* 83c116: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 83c119: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c11b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83c11e: jp 0x83c207 */
  if (pf) goto L_83c207;
L_83c124: /* 83c124: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 83c127: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83c12d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c12f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c132: jne 0x83c207 */
  if (!zf) goto L_83c207;
L_83c138: /* 83c138: fld dword ptr [0xa0c188] */
  { double v = F32((uint32_t)(0xa0c188u)); FPUSH(v); }
/* 83c13e: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 83c140: fdiv dword ptr [ebp + 8] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x8u)));
/* 83c143: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 83c146: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
L_83c149: /* 83c149: fstp st(0) */
  STI(0) = ST0; FPOP();
L_83c14b: /* 83c14b: mov ecx, ebx */
  ecx = ebx;
/* 83c14d: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x83c153u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 83c153: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83c156: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83c159: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 83c15c: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 83c15f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c161: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83c164: jp 0x83c1a0 */
  if (pf) goto L_83c1a0;
L_83c166: /* 83c166: lea eax, [ebp - 0x110] */
  eax = (uint32_t)(ebp + 0xfffffef0u);
/* 83c16c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c16d: mov ecx, ebx */
  ecx = ebx;
/* 83c16f: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x83c175u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 83c175: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83c178: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83c17a: mov ecx, ebx */
  ecx = ebx;
/* 83c17c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83c17e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83c181: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83c184: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83c187: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83c18a: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 83c18c: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 83c18e: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83c191: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 83c194: fstp dword ptr [ebx + 4] */
  WF32((uint32_t)(ebx + 0x4u), ST0); FPOP();
/* 83c197: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83c19a: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 83c19d: fstp dword ptr [ebx + 8] */
  WF32((uint32_t)(ebx + 0x8u), ST0); FPOP();
L_83c1a0: /* 83c1a0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 83c1a3: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 83c1a6: jmp 0x83c1b0 */
  goto L_83c1b0;
L_83c1b0: /* 83c1b0: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83c1b3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83c1b9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c1bb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c1be: jne 0x83cc8b */
  if (!zf) goto L_83cc8b;
L_83c1c4: /* 83c1c4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 83c1c7: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 83c1ca: jge 0x83cc8b */
  if ((sf == of)) goto L_83cc8b;
L_83c1d0: /* 83c1d0: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83c1d3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 83c1d4: fcomp dword ptr [0xa110dc] */
  fpu_com(ST0, F32((uint32_t)(0xa110dcu)));
  FPOP();
/* 83c1da: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 83c1dd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c1df: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c1e2: jne 0x83c241 */
  if (!zf) goto L_83c241;
L_83c1e4: /* 83c1e4: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83c1e7: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 83c1ed: fld dword ptr [0xa110dc] */
  { double v = F32((uint32_t)(0xa110dcu)); FPUSH(v); }
/* 83c1f3: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 83c1f5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c1f7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83c1fa: jp 0x83c23c */
  if (pf) goto L_83c23c;
L_83c1fc: /* 83c1fc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83c1fe: mov dword ptr [ebp + 8], 0x3d4ccccd */
  W32((uint32_t)(ebp + 0x8u), 0x3d4ccccdu);
/* 83c205: jmp 0x83c247 */
  goto L_83c247;
L_83c207: /* 83c207: fcom dword ptr [esi + 0x3f8] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x3f8u)));
/* 83c20d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c20f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c212: jne 0x83c149 */
  if (!zf) goto L_83c149;
L_83c218: /* 83c218: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 83c21b: fcomp dword ptr [0xa110dc] */
  fpu_com(ST0, F32((uint32_t)(0xa110dcu)));
  FPOP();
/* 83c221: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c223: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83c226: jp 0x83c234 */
  if (pf) goto L_83c234;
L_83c228: /* 83c228: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 83c22f: jmp 0x83c149 */
  goto L_83c149;
L_83c234: /* 83c234: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 83c237: jmp 0x83c14b */
  goto L_83c14b;
L_83c23c: /* 83c23c: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 83c23f: jmp 0x83c247 */
  goto L_83c247;
L_83c241: /* 83c241: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83c244: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
L_83c247: /* 83c247: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83c24a: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 83c250: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 83c252: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 83c255: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83c258: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83c25b: mov dword ptr [ebp - 0x80], edx */
  W32((uint32_t)(ebp + 0xffffff80u), edx);
/* 83c25e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83c261: mov edx, dword ptr [esi + 0x88] */
  edx = R32((uint32_t)(esi + 0x88u));
/* 83c267: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 83c26d: and edx, 0xfffdffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffdffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 83c273: mov dword ptr [esi + 0x88], edx */
  W32((uint32_t)(esi + 0x88u), edx);
/* 83c279: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 83c27c: mov ecx, edi */
  ecx = edi;
/* 83c27e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83c280: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 83c283: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 83c286: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 83c28c: fld dword ptr [eax + 0x3cc] */
  { double v = F32((uint32_t)(eax + 0x3ccu)); FPUSH(v); }
/* 83c292: add eax, 0x3c4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3c4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83c297: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 83c29a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83c29d: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 83c2a0: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 83c2a3: fadd dword ptr [ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4u)));
/* 83c2a6: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 83c2a9: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83c2ac: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 83c2ae: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 83c2b0: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 83c2b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83c2b4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c2b7: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 83c2bd: mov edx, esp */
  edx = esp;
/* 83c2bf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c2c2: fadd dword ptr [esi + 0x428] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x428u)));
/* 83c2c8: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 83c2cb: fadd dword ptr [esi + 0x424] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x424u)));
/* 83c2d1: fld dword ptr [ebp - 0x144] */
  { double v = F32((uint32_t)(ebp + 0xfffffebcu)); FPUSH(v); }
/* 83c2d7: fadd dword ptr [esi + 0x420] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x420u)));
/* 83c2dd: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 83c2e3: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* 83c2e9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 83c2eb: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 83c2f1: mov ecx, dword ptr [ebp - 0xd8] */
  ecx = R32((uint32_t)(ebp + 0xffffff28u));
/* 83c2f7: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83c2fa: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 83c300: mov eax, dword ptr [ebp - 0xd4] */
  eax = R32((uint32_t)(ebp + 0xffffff2cu));
/* 83c306: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 83c309: mov ecx, edi */
  ecx = edi;
/* 83c30b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 83c30d: mov edx, esp */
  edx = esp;
/* 83c30f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 83c311: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 83c314: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83c317: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 83c31a: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 83c31d: lea edx, [ebp - 0x198] */
  edx = (uint32_t)(ebp + 0xfffffe68u);
/* 83c323: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83c324: mov ecx, esi */
  ecx = esi;
/* 83c326: call 0x6c2234 */
  esp -= 4; W32(esp, 0x83c32bu); SPILL(); f_6c2234(); if (g_unwind) return; RELOAD();
/* 83c32b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83c32d: mov ecx, edi */
  ecx = edi;
/* 83c32f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83c331: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83c334: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83c337: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83c33a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83c33b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83c33e: mov ecx, esp */
  ecx = esp;
/* 83c340: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 83c343: push 0x152 */
  { uint32_t v = 0x152u; esp -= 4; W32(esp, v); }
/* 83c348: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x83c34eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 83c34e: mov ecx, esi */
  ecx = esi;
/* 83c350: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x83c356u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 83c356: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83c358: je 0x83c378 */
  if (zf) goto L_83c378;
L_83c35a: /* 83c35a: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 83c35d: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83c360: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c363: mov ecx, esp */
  ecx = esp;
/* 83c365: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83c367: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 83c36a: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83c36d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 83c370: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83c371: mov ecx, esi */
  ecx = esi;
/* 83c373: call 0x6c68e3 */
  esp -= 4; W32(esp, 0x83c378u); SPILL(); f_6c68e3(); if (g_unwind) return; RELOAD();
L_83c378: /* 83c378: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 83c37e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83c380: je 0x83c3e6 */
  if (zf) goto L_83c3e6;
L_83c382: /* 83c382: mov eax, dword ptr [ecx + 0x350] */
  eax = R32((uint32_t)(ecx + 0x350u));
/* 83c388: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c38b: je 0x83c3e6 */
  if (zf) goto L_83c3e6;
L_83c38d: /* 83c38d: fld dword ptr [esi + 0x190] */
  { double v = F32((uint32_t)(esi + 0x190u)); FPUSH(v); }
/* 83c393: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83c399: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c39b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83c39e: jp 0x83c3e6 */
  if (pf) goto L_83c3e6;
L_83c3a0: /* 83c3a0: or dword ptr [esi + 0x88], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x88u), r);
  }
/* 83c3aa: and dword ptr [ecx + 0x350], 0xfffffbff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x350u))); uint32_t b = (uint32_t)(0xfffffbffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x350u), r);
  }
/* 83c3b4: mov ebx, dword ptr [esi + 0x33c] */
  ebx = R32((uint32_t)(esi + 0x33cu));
/* 83c3ba: mov eax, dword ptr [0xb7e4f8] */
  eax = R32((uint32_t)(0xb7e4f8u));
/* 83c3bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c3c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c3c2: mov ecx, ebx */
  ecx = ebx;
/* 83c3c4: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x83c3cau); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 83c3ca: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 83c3cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c3ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c3d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c3d1: mov ecx, ebx */
  ecx = ebx;
/* 83c3d3: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x83c3d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83c3d6: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 83c3dc: and dword ptr [eax + 0x350], 0xffffefff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x350u))); uint32_t b = (uint32_t)(0xffffefffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x350u), r);
  }
L_83c3e6: /* 83c3e6: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 83c3e9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83c3ef: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c3f1: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83c3f4: jnp 0x83c4a0 */
  if (!pf) goto L_83c4a0;
L_83c3fa: /* 83c3fa: mov eax, edi */
  eax = edi;
/* 83c3fc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 83c3fe: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83c401: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83c404: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 83c407: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 83c40a: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 83c40d: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 83c410: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 83c417: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x83c41du); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 83c41d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83c420: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 83c423: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 83c426: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 83c429: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c42b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83c42e: jp 0x83c4a0 */
  if (pf) goto L_83c4a0;
L_83c430: /* 83c430: lea ecx, [ebp - 0x12c] */
  ecx = (uint32_t)(ebp + 0xfffffed4u);
/* 83c436: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83c437: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 83c43a: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x83c440u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 83c440: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83c442: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 83c445: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 83c448: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 83c44b: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 83c44e: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 83c451: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 83c454: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 83c457: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 83c45a: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 83c45d: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 83c460: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 83c463: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 83c469: mov eax, dword ptr [ebp - 0xe8] */
  eax = R32((uint32_t)(ebp + 0xffffff18u));
/* 83c46f: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 83c475: mov ecx, dword ptr [ebp - 0xe4] */
  ecx = R32((uint32_t)(ebp + 0xffffff1cu));
/* 83c47b: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 83c481: mov edx, dword ptr [ebp - 0xe0] */
  edx = R32((uint32_t)(ebp + 0xffffff20u));
/* 83c487: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 83c48a: mov edx, dword ptr [esi + 0x190] */
  edx = R32((uint32_t)(esi + 0x190u));
/* 83c490: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 83c493: mov edx, edi */
  edx = edi;
/* 83c495: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 83c497: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 83c49a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83c49d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_83c4a0: /* 83c4a0: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 83c4a6: fld dword ptr [eax + 0x3c0] */
  { double v = F32((uint32_t)(eax + 0x3c0u)); FPUSH(v); }
/* 83c4ac: add eax, 0x3b8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83c4b1: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 83c4b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c4b6: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 83c4b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c4bb: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 83c4be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c4c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c4c2: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 83c4c8: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83c4cb: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 83c4cd: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 83c4cf: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 83c4d1: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 83c4d7: fstp dword ptr [ebp - 0x138] */
  WF32((uint32_t)(ebp + 0xfffffec8u), ST0); FPOP();
/* 83c4dd: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83c4e0: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 83c4e3: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83c4e6: fld dword ptr [ebp - 0x138] */
  { double v = F32((uint32_t)(ebp + 0xfffffec8u)); FPUSH(v); }
/* 83c4ec: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83c4ef: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 83c4f2: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 83c4f5: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 83c4f8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83c4fa: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 83c4fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c4fe: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c501: mov eax, esp */
  eax = esp;
/* 83c503: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 83c505: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 83c508: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83c50b: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 83c50e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83c511: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 83c514: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c517: mov eax, esp */
  eax = esp;
/* 83c519: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83c51b: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 83c51e: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 83c521: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 83c524: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83c527: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83c52d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83c52e: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x83c534u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83c534: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 83c53a: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c53d: jne 0x83c6a0 */
  if (!zf) goto L_83c6a0;
L_83c543: /* 83c543: cmp byte ptr [esi + 0x50], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 83c547: jne 0x83c5b0 */
  if (!zf) goto L_83c5b0;
L_83c549: /* 83c549: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 83c54f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 83c552: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 83c555: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 83c558: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83c559: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83c55c: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 83c55f: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83c562: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83c565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c566: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 83c569: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83c56a: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83c56d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c570: mov edx, esp */
  edx = esp;
/* 83c572: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 83c574: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 83c577: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83c57a: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 83c57d: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 83c583: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 83c586: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c589: mov ecx, esp */
  ecx = esp;
/* 83c58b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83c58d: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 83c590: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83c593: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 83c596: mov ecx, esi */
  ecx = esi;
/* 83c598: call 0x6c7e50 */
  esp -= 4; W32(esp, 0x83c59du); SPILL(); f_6c7e50(); if (g_unwind) return; RELOAD();
/* 83c59d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83c5a0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83c5a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83c5a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83c5a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83c5aa: mov esp, ebp */
  esp = ebp;
/* 83c5ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83c5ad: ret 8 */
  esp += 12; SPILL(); return;
L_83c5b0: /* 83c5b0: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83c5b3: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 83c5b9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c5bb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83c5be: jp 0x83caf8 */
  if (pf) goto L_83caf8;
L_83c5c4: /* 83c5c4: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 83c5c7: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 83c5cd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c5cf: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c5d2: jne 0x83c6b3 */
  if (!zf) goto L_83c6b3;
L_83c5d8: /* 83c5d8: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 83c5de: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 83c5e4: test eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83c5e9: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 83c5ec: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83c5ef: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 83c5f2: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83c5f5: jne 0x83c674 */
  if (!zf) goto L_83c674;
L_83c5f7: /* 83c5f7: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83c5fa: fcomp dword ptr [0xa0973c] */
  fpu_com(ST0, F32((uint32_t)(0xa0973cu)));
  FPOP();
/* 83c600: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c602: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c605: jne 0x83c674 */
  if (!zf) goto L_83c674;
L_83c607: /* 83c607: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83c60a: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83c60d: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 83c610: fcomp dword ptr [0xa15bb4] */
  fpu_com(ST0, F32((uint32_t)(0xa15bb4u)));
  FPOP();
/* 83c616: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c618: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c61b: jne 0x83c674 */
  if (!zf) goto L_83c674;
L_83c61d: /* 83c61d: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 83c623: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 83c626: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 83c629: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c62a: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 83c630: lea ecx, [ebp - 0x12c] */
  ecx = (uint32_t)(ebp + 0xfffffed4u);
/* 83c636: fsub dword ptr [ebp - 0x80] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff80u)));
/* 83c639: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83c63a: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 83c640: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 83c646: fsub dword ptr [ebp - 0x84] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 83c64c: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 83c652: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 83c658: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 83c65e: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x83c664u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 83c664: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83c666: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 83c668: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 83c66b: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 83c66e: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 83c671: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
L_83c674: /* 83c674: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 83c677: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83c67a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 83c67c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83c67d: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 83c680: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83c681: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83c682: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 83c685: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c688: mov edx, esp */
  edx = esp;
/* 83c68a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 83c68c: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 83c68f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83c692: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 83c695: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
L_83c698: /* 83c698: mov ecx, esi */
  ecx = esi;
/* 83c69a: call dword ptr [eax + 0x124] */
  { uint32_t t = R32((uint32_t)(eax + 0x124u)); esp -= 4; W32(esp, 0x83c6a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_83c6a0: /* 83c6a0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83c6a3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83c6aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83c6ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83c6ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83c6ad: mov esp, ebp */
  esp = ebp;
/* 83c6af: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83c6b0: ret 8 */
  esp += 12; SPILL(); return;
L_83c6b3: /* 83c6b3: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 83c6b9: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x83c6bfu); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 83c6bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83c6c1: je 0x83c754 */
  if (zf) goto L_83c754;
L_83c6c7: /* 83c6c7: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 83c6cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83c6ce: call 0x6cb4b5 */
  esp -= 4; W32(esp, 0x83c6d3u); SPILL(); f_6cb4b5(); if (g_unwind) return; RELOAD();
/* 83c6d3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83c6d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83c6d8: je 0x83c754 */
  if (zf) goto L_83c754;
L_83c6da: /* 83c6da: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 83c6dd: mov eax, edi */
  eax = edi;
/* 83c6df: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83c6e1: mov ecx, ebx */
  ecx = ebx;
/* 83c6e3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83c6e5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83c6e8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83c6eb: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83c6ee: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83c6f1: lea ecx, [ebp - 0x168] */
  ecx = (uint32_t)(ebp + 0xfffffe98u);
/* 83c6f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83c6f8: mov ecx, ebx */
  ecx = ebx;
/* 83c6fa: mov dword ptr [esi + 0x19c], 0 */
  W32((uint32_t)(esi + 0x19cu), 0x0u);
/* 83c704: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x83c70au); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 83c70a: fld dword ptr [esi + 0x408] */
  { double v = F32((uint32_t)(esi + 0x408u)); FPUSH(v); }
/* 83c710: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 83c712: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83c714: mov edx, ebx */
  edx = ebx;
/* 83c716: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 83c718: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 83c71b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83c71e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83c721: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 83c724: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 83c726: mov ecx, ebx */
  ecx = ebx;
/* 83c728: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 83c72a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83c72c: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 83c72f: fstp dword ptr [ebx + 4] */
  WF32((uint32_t)(ebx + 0x4u), ST0); FPOP();
/* 83c732: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 83c735: fstp dword ptr [ebx + 8] */
  WF32((uint32_t)(ebx + 0x8u), ST0); FPOP();
/* 83c738: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83c73a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 83c73d: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83c740: mov dword ptr [ebp - 0xb4], edx */
  W32((uint32_t)(ebp + 0xffffff4cu), edx);
/* 83c746: mov dword ptr [ebp - 0xb0], eax */
  W32((uint32_t)(ebp + 0xffffff50u), eax);
/* 83c74c: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
/* 83c752: jmp 0x83c77b */
  goto L_83c77b;
L_83c754: /* 83c754: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 83c757: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 83c759: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c75a: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 83c75d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c760: mov ecx, esp */
  ecx = esp;
/* 83c762: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 83c764: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 83c767: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83c76a: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 83c76d: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83c770: mov ecx, esi */
  ecx = esi;
/* 83c772: call dword ptr [edx + 0x120] */
  { uint32_t t = R32((uint32_t)(edx + 0x120u)); esp -= 4; W32(esp, 0x83c778u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83c778: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
L_83c77b: /* 83c77b: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 83c77e: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 83c781: fmul dword ptr [ebp - 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 83c784: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 83c787: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 83c78a: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 83c78d: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 83c790: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 83c796: mov dword ptr [ebp - 0x90], ecx */
  W32((uint32_t)(ebp + 0xffffff70u), ecx);
/* 83c79c: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 83c7a2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83c7a4: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 83c7a7: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 83c7aa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83c7ac: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 83c7af: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83c7b1: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 83c7b4: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 83c7b6: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83c7b9: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 83c7bc: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 83c7be: fstp dword ptr [ebp - 0x150] */
  WF32((uint32_t)(ebp + 0xfffffeb0u), ST0); FPOP();
/* 83c7c4: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 83c7c7: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 83c7c9: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 83c7cb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83c7cd: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 83c7d0: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 83c7d3: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 83c7d6: fsub dword ptr [ebp - 0x150] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffeb0u)));
/* 83c7dc: fstp dword ptr [ebp - 0x120] */
  WF32((uint32_t)(ebp + 0xfffffee0u), ST0); FPOP();
/* 83c7e2: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 83c7e8: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 83c7eb: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 83c7ee: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83c7f0: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 83c7f3: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83c7f6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 83c7f9: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 83c7fc: mov dword ptr [ebp - 0xa0], ecx */
  W32((uint32_t)(ebp + 0xffffff60u), ecx);
/* 83c802: fld dword ptr [ebp - 0x120] */
  { double v = F32((uint32_t)(ebp + 0xfffffee0u)); FPUSH(v); }
/* 83c808: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 83c80b: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 83c811: fst dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0);
/* 83c817: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 83c81a: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 83c81d: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 83c820: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 83c822: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83c824: fld dword ptr [ebp - 0xa8] */
  { double v = F32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* 83c82a: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 83c82d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83c82f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83c835: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c837: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83c839: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c83c: jne 0x83ca8c */
  if (!zf) goto L_83ca8c;
L_83c842: /* 83c842: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 83c848: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83c84a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c84c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c84e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c850: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c852: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 83c855: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c856: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c859: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 83c85f: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 83c861: mov ecx, esp */
  ecx = esp;
/* 83c863: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 83c865: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 83c868: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83c86b: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 83c86e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83c871: mov eax, dword ptr [ebp - 0xa8] */
  eax = R32((uint32_t)(ebp + 0xffffff58u));
/* 83c877: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c87a: mov ecx, esp */
  ecx = esp;
/* 83c87c: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 83c87e: mov eax, dword ptr [ebp - 0xa4] */
  eax = R32((uint32_t)(ebp + 0xffffff5cu));
/* 83c884: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83c887: mov eax, dword ptr [ebp - 0xa0] */
  eax = R32((uint32_t)(ebp + 0xffffff60u));
/* 83c88d: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83c890: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83c896: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83c897: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x83c89du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83c89d: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83c8a0: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 83c8a6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c8a8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83c8ab: jp 0x83ca89 */
  if (pf) goto L_83ca89;
L_83c8b1: /* 83c8b1: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 83c8b4: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x83c8bau); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 83c8ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83c8bc: je 0x83c8df */
  if (zf) goto L_83c8df;
L_83c8be: /* 83c8be: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 83c8c1: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x83c8c7u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 83c8c7: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 83c8cd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83c8cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c8d0: push 0xae3b0c */
  { uint32_t v = 0xae3b0cu; esp -= 4; W32(esp, v); }
/* 83c8d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83c8d6: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x83c8dcu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 83c8dc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_83c8df: /* 83c8df: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 83c8e2: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 83c8e8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c8ea: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c8ed: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 83c8ef: jne 0x83c916 */
  if (!zf) goto L_83c916;
L_83c8f1: /* 83c8f1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 83c8f4: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 83c8f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83c8f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c8fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83c8fb: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 83c8fe: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c901: mov ecx, esp */
  ecx = esp;
/* 83c903: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83c905: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 83c908: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83c90b: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 83c90e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 83c911: jmp 0x83c698 */
  goto L_83c698;
L_83c916: /* 83c916: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 83c919: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83c91a: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 83c91d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c920: mov edx, esp */
  edx = esp;
/* 83c922: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 83c924: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 83c927: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83c92a: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 83c92d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 83c930: mov ecx, esi */
  ecx = esi;
/* 83c932: call dword ptr [eax + 0x120] */
  { uint32_t t = R32((uint32_t)(eax + 0x120u)); esp -= 4; W32(esp, 0x83c938u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83c938: lea edx, [ebp - 0x15c] */
  edx = (uint32_t)(ebp + 0xfffffea4u);
/* 83c93e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83c93f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 83c942: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x83c948u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 83c948: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 83c94b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c94c: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 83c952: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83c953: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 83c956: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83c957: lea eax, [ebp - 0xa8] */
  eax = (uint32_t)(ebp + 0xffffff58u);
/* 83c95d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c95e: lea ecx, [ebp - 0x15c] */
  ecx = (uint32_t)(ebp + 0xfffffea4u);
/* 83c964: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83c965: mov ecx, esi */
  ecx = esi;
/* 83c967: call 0x6c6163 */
  esp -= 4; W32(esp, 0x83c96cu); SPILL(); f_6c6163(); if (g_unwind) return; RELOAD();
/* 83c96c: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 83c972: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83c978: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c97a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c97d: jne 0x83c9d5 */
  if (!zf) goto L_83c9d5;
L_83c97f: /* 83c97f: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 83c982: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83c988: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c98a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c98d: jne 0x83c9d5 */
  if (!zf) goto L_83c9d5;
L_83c98f: /* 83c98f: fld dword ptr [ebp - 0xa0] */
  { double v = F32((uint32_t)(ebp + 0xffffff60u)); FPUSH(v); }
/* 83c995: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83c99b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c99d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83c9a0: jp 0x83c9d5 */
  if (pf) goto L_83c9d5;
L_83c9a2: /* 83c9a2: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 83c9a8: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 83c9af: fmul dword ptr [ebp - 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 83c9b2: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 83c9b8: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 83c9bb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83c9bd: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 83c9c3: fmul dword ptr [ebp - 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 83c9c6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83c9c8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83c9ce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c9d0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83c9d3: jnp 0x83c9dc */
  if (!pf) goto L_83c9dc;
L_83c9d5: /* 83c9d5: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_83c9dc: /* 83c9dc: mov ebx, dword ptr [esi + 0x17c] */
  ebx = R32((uint32_t)(esi + 0x17cu));
/* 83c9e2: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83c9e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c9ea: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83c9ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c9ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c9f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c9f2: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 83c9f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c9f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c9f9: mov eax, esp */
  eax = esp;
/* 83c9fb: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 83c9fd: mov ebx, dword ptr [esi + 0x180] */
  ebx = R32((uint32_t)(esi + 0x180u));
/* 83ca03: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 83ca06: mov ebx, dword ptr [esi + 0x184] */
  ebx = R32((uint32_t)(esi + 0x184u));
/* 83ca0c: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 83ca0f: mov ebx, dword ptr [ebp - 0xa8] */
  ebx = R32((uint32_t)(ebp + 0xffffff58u));
/* 83ca15: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83ca18: mov eax, esp */
  eax = esp;
/* 83ca1a: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 83ca1c: mov ebx, dword ptr [ebp - 0xa4] */
  ebx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 83ca22: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 83ca25: mov ebx, dword ptr [ebp - 0xa0] */
  ebx = R32((uint32_t)(ebp + 0xffffff60u));
/* 83ca2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83ca2c: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 83ca2f: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x83ca35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83ca35: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83ca38: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83ca3a: jne 0x83ca4c */
  if (!zf) goto L_83ca4c;
L_83ca3c: /* 83ca3c: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 83ca3f: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 83ca45: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83ca47: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83ca4a: jne 0x83ca89 */
  if (!zf) goto L_83ca89;
L_83ca4c: /* 83ca4c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 83ca4f: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 83ca52: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 83ca54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83ca55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83ca57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83ca58: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 83ca5b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83ca5e: mov eax, esp */
  eax = esp;
/* 83ca60: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83ca62: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 83ca65: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 83ca68: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 83ca6b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83ca6e: mov ecx, esi */
  ecx = esi;
/* 83ca70: call dword ptr [edx + 0x124] */
  { uint32_t t = R32((uint32_t)(edx + 0x124u)); esp -= 4; W32(esp, 0x83ca76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83ca76: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83ca79: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83ca80: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83ca81: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83ca82: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83ca83: mov esp, ebp */
  esp = ebp;
/* 83ca85: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83ca86: ret 8 */
  esp += 12; SPILL(); return;
L_83ca89: /* 83ca89: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
L_83ca8c: /* 83ca8c: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 83ca92: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 83ca95: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 83ca98: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 83ca9b: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 83caa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83caa2: fsub dword ptr [ebp - 0x80] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff80u)));
/* 83caa5: lea ecx, [ebp - 0x18c] */
  ecx = (uint32_t)(ebp + 0xfffffe74u);
/* 83caab: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 83cab1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83cab2: fsub dword ptr [ebp - 0x84] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 83cab8: lea ecx, [ebp - 0x104] */
  ecx = (uint32_t)(ebp + 0xfffffefcu);
/* 83cabe: mov dword ptr [ebp - 0xec], edx */
  W32((uint32_t)(ebp + 0xffffff14u), edx);
/* 83cac4: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 83caca: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 83cad0: fstp dword ptr [ebp - 0xfc] */
  WF32((uint32_t)(ebp + 0xffffff04u), ST0); FPOP();
/* 83cad6: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x83cadcu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 83cadc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83cade: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 83cae1: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 83cae4: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 83cae7: mov eax, dword ptr [ebp - 0xec] */
  eax = R32((uint32_t)(ebp + 0xffffff14u));
/* 83caed: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 83caf0: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 83caf3: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 83caf6: jmp 0x83cafb */
  goto L_83cafb;
L_83caf8: /* 83caf8: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
L_83cafb: /* 83cafb: test dword ptr [esi + 0x88], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83cb05: jne 0x83c1b0 */
  if (!zf) goto L_83c1b0;
L_83cb0b: /* 83cb0b: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 83cb11: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 83cb14: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 83cb17: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 83cb1d: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 83cb23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83cb24: fsub dword ptr [ebp - 0x80] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff80u)));
/* 83cb27: lea edx, [ebp - 0x174] */
  edx = (uint32_t)(ebp + 0xfffffe8cu);
/* 83cb2d: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 83cb33: add eax, 0x3b8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83cb38: fsub dword ptr [ebp - 0x84] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 83cb3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83cb3f: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 83cb45: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 83cb48: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 83cb4e: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* 83cb54: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 83cb5a: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x83cb60u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 83cb60: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 83cb63: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 83cb66: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 83cb69: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 83cb6c: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 83cb6f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 83cb71: mov eax, edi */
  eax = edi;
/* 83cb73: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 83cb75: fstp dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0); FPOP();
/* 83cb7b: mov ecx, dword ptr [ebp - 0xcc] */
  ecx = R32((uint32_t)(ebp + 0xffffff34u));
/* 83cb81: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83cb83: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 83cb89: mov edx, dword ptr [ebp - 0xc8] */
  edx = R32((uint32_t)(ebp + 0xffffff38u));
/* 83cb8f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83cb92: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 83cb98: mov ecx, dword ptr [ebp - 0xc4] */
  ecx = R32((uint32_t)(ebp + 0xffffff3cu));
/* 83cb9e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83cba1: fld dword ptr [esi + 0x190] */
  { double v = F32((uint32_t)(esi + 0x190u)); FPUSH(v); }
/* 83cba7: fcomp dword ptr [ebp - 0x24] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffdcu)));
  FPOP();
/* 83cbaa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83cbac: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83cbaf: jnp 0x83cbc1 */
  if (!pf) goto L_83cbc1;
L_83cbb1: /* 83cbb1: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 83cbb4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83cbba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83cbbc: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83cbbf: jne 0x83cc18 */
  if (!zf) goto L_83cc18;
L_83cbc1: /* 83cbc1: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 83cbc4: mov edx, edi */
  edx = edi;
/* 83cbc6: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 83cbc8: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 83cbcb: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 83cbcd: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83cbd0: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 83cbd2: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 83cbd4: fstp dword ptr [ebp - 0x110] */
  WF32((uint32_t)(ebp + 0xfffffef0u), ST0); FPOP();
/* 83cbda: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 83cbdd: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 83cbe0: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 83cbe3: fld dword ptr [ebp - 0x110] */
  { double v = F32((uint32_t)(ebp + 0xfffffef0u)); FPUSH(v); }
/* 83cbe9: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 83cbec: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 83cbf2: mov eax, dword ptr [ebp - 0x9c] */
  eax = R32((uint32_t)(ebp + 0xffffff64u));
/* 83cbf8: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 83cbfa: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 83cc00: mov ecx, dword ptr [ebp - 0x98] */
  ecx = R32((uint32_t)(ebp + 0xffffff68u));
/* 83cc06: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83cc09: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 83cc0f: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 83cc15: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_83cc18: /* 83cc18: mov ecx, edi */
  ecx = edi;
/* 83cc1a: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x83cc20u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 83cc20: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83cc23: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 83cc29: fld dword ptr [ecx + 0x3d4] */
  { double v = F32((uint32_t)(ecx + 0x3d4u)); FPUSH(v); }
/* 83cc2f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83cc31: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83cc33: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 83cc36: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 83cc38: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83cc3a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83cc3c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83cc3f: jne 0x83c1b0 */
  if (!zf) goto L_83c1b0;
L_83cc45: /* 83cc45: lea edx, [ebp - 0x180] */
  edx = (uint32_t)(ebp + 0xfffffe80u);
/* 83cc4b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83cc4c: mov ecx, edi */
  ecx = edi;
/* 83cc4e: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x83cc54u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 83cc54: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83cc56: mov ecx, edi */
  ecx = edi;
/* 83cc58: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83cc5a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83cc5d: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83cc60: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83cc63: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83cc66: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 83cc6c: fld dword ptr [ecx + 0x3d4] */
  { double v = F32((uint32_t)(ecx + 0x3d4u)); FPUSH(v); }
/* 83cc72: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83cc74: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 83cc76: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 83cc78: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83cc7a: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 83cc7d: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 83cc80: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 83cc83: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 83cc86: jmp 0x83c1b0 */
  goto L_83c1b0;
L_83cc8b: /* 83cc8b: mov edx, dword ptr [ebp - 0xb4] */
  edx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 83cc91: mov eax, dword ptr [ebp - 0xb0] */
  eax = R32((uint32_t)(ebp + 0xffffff50u));
/* 83cc97: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 83cc9d: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 83cc9f: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 83cca2: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 83cca5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83cca8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83cca9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83ccaa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83ccb1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83ccb2: mov esp, ebp */
  esp = ebp;
/* 83ccb4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83ccb5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_83c1a8(void) {
  LOAD_REGS();
L_83c1a8: /* 83c1a8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 83c1af: nop  */
L_83c1b0: /* 83c1b0: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83c1b3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83c1b9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c1bb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c1be: jne 0x83cc8b */
  if (!zf) goto L_83cc8b;
L_83c1c4: /* 83c1c4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 83c1c7: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 83c1ca: jge 0x83cc8b */
  if ((sf == of)) goto L_83cc8b;
L_83c1d0: /* 83c1d0: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83c1d3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 83c1d4: fcomp dword ptr [0xa110dc] */
  fpu_com(ST0, F32((uint32_t)(0xa110dcu)));
  FPOP();
/* 83c1da: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 83c1dd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c1df: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c1e2: jne 0x83c241 */
  if (!zf) goto L_83c241;
L_83c1e4: /* 83c1e4: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83c1e7: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 83c1ed: fld dword ptr [0xa110dc] */
  { double v = F32((uint32_t)(0xa110dcu)); FPUSH(v); }
/* 83c1f3: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 83c1f5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c1f7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83c1fa: jp 0x83c23c */
  if (pf) goto L_83c23c;
L_83c1fc: /* 83c1fc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83c1fe: mov dword ptr [ebp + 8], 0x3d4ccccd */
  W32((uint32_t)(ebp + 0x8u), 0x3d4ccccdu);
/* 83c205: jmp 0x83c247 */
  goto L_83c247;
L_83c23c: /* 83c23c: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 83c23f: jmp 0x83c247 */
  goto L_83c247;
L_83c241: /* 83c241: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83c244: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
L_83c247: /* 83c247: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83c24a: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 83c250: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 83c252: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 83c255: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83c258: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83c25b: mov dword ptr [ebp - 0x80], edx */
  W32((uint32_t)(ebp + 0xffffff80u), edx);
/* 83c25e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83c261: mov edx, dword ptr [esi + 0x88] */
  edx = R32((uint32_t)(esi + 0x88u));
/* 83c267: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 83c26d: and edx, 0xfffdffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffdffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 83c273: mov dword ptr [esi + 0x88], edx */
  W32((uint32_t)(esi + 0x88u), edx);
/* 83c279: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 83c27c: mov ecx, edi */
  ecx = edi;
/* 83c27e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83c280: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 83c283: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 83c286: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 83c28c: fld dword ptr [eax + 0x3cc] */
  { double v = F32((uint32_t)(eax + 0x3ccu)); FPUSH(v); }
/* 83c292: add eax, 0x3c4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3c4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83c297: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 83c29a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83c29d: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 83c2a0: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 83c2a3: fadd dword ptr [ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4u)));
/* 83c2a6: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 83c2a9: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83c2ac: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 83c2ae: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 83c2b0: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 83c2b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83c2b4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c2b7: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 83c2bd: mov edx, esp */
  edx = esp;
/* 83c2bf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c2c2: fadd dword ptr [esi + 0x428] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x428u)));
/* 83c2c8: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 83c2cb: fadd dword ptr [esi + 0x424] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x424u)));
/* 83c2d1: fld dword ptr [ebp - 0x144] */
  { double v = F32((uint32_t)(ebp + 0xfffffebcu)); FPUSH(v); }
/* 83c2d7: fadd dword ptr [esi + 0x420] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x420u)));
/* 83c2dd: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 83c2e3: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* 83c2e9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 83c2eb: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 83c2f1: mov ecx, dword ptr [ebp - 0xd8] */
  ecx = R32((uint32_t)(ebp + 0xffffff28u));
/* 83c2f7: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83c2fa: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 83c300: mov eax, dword ptr [ebp - 0xd4] */
  eax = R32((uint32_t)(ebp + 0xffffff2cu));
/* 83c306: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 83c309: mov ecx, edi */
  ecx = edi;
/* 83c30b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 83c30d: mov edx, esp */
  edx = esp;
/* 83c30f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 83c311: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 83c314: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83c317: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 83c31a: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 83c31d: lea edx, [ebp - 0x198] */
  edx = (uint32_t)(ebp + 0xfffffe68u);
/* 83c323: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83c324: mov ecx, esi */
  ecx = esi;
/* 83c326: call 0x6c2234 */
  esp -= 4; W32(esp, 0x83c32bu); SPILL(); f_6c2234(); if (g_unwind) return; RELOAD();
/* 83c32b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83c32d: mov ecx, edi */
  ecx = edi;
/* 83c32f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83c331: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83c334: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83c337: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83c33a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83c33b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83c33e: mov ecx, esp */
  ecx = esp;
/* 83c340: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 83c343: push 0x152 */
  { uint32_t v = 0x152u; esp -= 4; W32(esp, v); }
/* 83c348: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x83c34eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 83c34e: mov ecx, esi */
  ecx = esi;
/* 83c350: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x83c356u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 83c356: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83c358: je 0x83c378 */
  if (zf) goto L_83c378;
L_83c35a: /* 83c35a: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 83c35d: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83c360: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c363: mov ecx, esp */
  ecx = esp;
/* 83c365: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83c367: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 83c36a: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83c36d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 83c370: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83c371: mov ecx, esi */
  ecx = esi;
/* 83c373: call 0x6c68e3 */
  esp -= 4; W32(esp, 0x83c378u); SPILL(); f_6c68e3(); if (g_unwind) return; RELOAD();
L_83c378: /* 83c378: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 83c37e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83c380: je 0x83c3e6 */
  if (zf) goto L_83c3e6;
L_83c382: /* 83c382: mov eax, dword ptr [ecx + 0x350] */
  eax = R32((uint32_t)(ecx + 0x350u));
/* 83c388: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c38b: je 0x83c3e6 */
  if (zf) goto L_83c3e6;
L_83c38d: /* 83c38d: fld dword ptr [esi + 0x190] */
  { double v = F32((uint32_t)(esi + 0x190u)); FPUSH(v); }
/* 83c393: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83c399: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c39b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83c39e: jp 0x83c3e6 */
  if (pf) goto L_83c3e6;
L_83c3a0: /* 83c3a0: or dword ptr [esi + 0x88], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x88u), r);
  }
/* 83c3aa: and dword ptr [ecx + 0x350], 0xfffffbff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x350u))); uint32_t b = (uint32_t)(0xfffffbffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x350u), r);
  }
/* 83c3b4: mov ebx, dword ptr [esi + 0x33c] */
  ebx = R32((uint32_t)(esi + 0x33cu));
/* 83c3ba: mov eax, dword ptr [0xb7e4f8] */
  eax = R32((uint32_t)(0xb7e4f8u));
/* 83c3bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c3c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c3c2: mov ecx, ebx */
  ecx = ebx;
/* 83c3c4: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x83c3cau); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 83c3ca: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 83c3cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c3ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c3d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c3d1: mov ecx, ebx */
  ecx = ebx;
/* 83c3d3: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x83c3d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83c3d6: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 83c3dc: and dword ptr [eax + 0x350], 0xffffefff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x350u))); uint32_t b = (uint32_t)(0xffffefffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x350u), r);
  }
L_83c3e6: /* 83c3e6: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 83c3e9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83c3ef: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c3f1: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83c3f4: jnp 0x83c4a0 */
  if (!pf) goto L_83c4a0;
L_83c3fa: /* 83c3fa: mov eax, edi */
  eax = edi;
/* 83c3fc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 83c3fe: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83c401: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83c404: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 83c407: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 83c40a: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 83c40d: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 83c410: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 83c417: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x83c41du); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 83c41d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83c420: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 83c423: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 83c426: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 83c429: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c42b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83c42e: jp 0x83c4a0 */
  if (pf) goto L_83c4a0;
L_83c430: /* 83c430: lea ecx, [ebp - 0x12c] */
  ecx = (uint32_t)(ebp + 0xfffffed4u);
/* 83c436: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83c437: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 83c43a: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x83c440u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 83c440: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83c442: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 83c445: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 83c448: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 83c44b: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 83c44e: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 83c451: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 83c454: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 83c457: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 83c45a: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 83c45d: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 83c460: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 83c463: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 83c469: mov eax, dword ptr [ebp - 0xe8] */
  eax = R32((uint32_t)(ebp + 0xffffff18u));
/* 83c46f: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 83c475: mov ecx, dword ptr [ebp - 0xe4] */
  ecx = R32((uint32_t)(ebp + 0xffffff1cu));
/* 83c47b: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 83c481: mov edx, dword ptr [ebp - 0xe0] */
  edx = R32((uint32_t)(ebp + 0xffffff20u));
/* 83c487: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 83c48a: mov edx, dword ptr [esi + 0x190] */
  edx = R32((uint32_t)(esi + 0x190u));
/* 83c490: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 83c493: mov edx, edi */
  edx = edi;
/* 83c495: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 83c497: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 83c49a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83c49d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_83c4a0: /* 83c4a0: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 83c4a6: fld dword ptr [eax + 0x3c0] */
  { double v = F32((uint32_t)(eax + 0x3c0u)); FPUSH(v); }
/* 83c4ac: add eax, 0x3b8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83c4b1: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 83c4b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c4b6: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 83c4b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c4bb: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 83c4be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c4c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c4c2: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 83c4c8: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83c4cb: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 83c4cd: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 83c4cf: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 83c4d1: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 83c4d7: fstp dword ptr [ebp - 0x138] */
  WF32((uint32_t)(ebp + 0xfffffec8u), ST0); FPOP();
/* 83c4dd: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83c4e0: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 83c4e3: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83c4e6: fld dword ptr [ebp - 0x138] */
  { double v = F32((uint32_t)(ebp + 0xfffffec8u)); FPUSH(v); }
/* 83c4ec: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83c4ef: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 83c4f2: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 83c4f5: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 83c4f8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83c4fa: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 83c4fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c4fe: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c501: mov eax, esp */
  eax = esp;
/* 83c503: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 83c505: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 83c508: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83c50b: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 83c50e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83c511: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 83c514: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c517: mov eax, esp */
  eax = esp;
/* 83c519: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83c51b: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 83c51e: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 83c521: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 83c524: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83c527: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83c52d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83c52e: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x83c534u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83c534: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 83c53a: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c53d: jne 0x83c6a0 */
  if (!zf) goto L_83c6a0;
L_83c543: /* 83c543: cmp byte ptr [esi + 0x50], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 83c547: jne 0x83c5b0 */
  if (!zf) goto L_83c5b0;
L_83c549: /* 83c549: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 83c54f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 83c552: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 83c555: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 83c558: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83c559: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83c55c: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 83c55f: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83c562: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83c565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c566: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 83c569: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83c56a: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83c56d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c570: mov edx, esp */
  edx = esp;
/* 83c572: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 83c574: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 83c577: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83c57a: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 83c57d: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 83c583: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 83c586: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c589: mov ecx, esp */
  ecx = esp;
/* 83c58b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83c58d: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 83c590: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83c593: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 83c596: mov ecx, esi */
  ecx = esi;
/* 83c598: call 0x6c7e50 */
  esp -= 4; W32(esp, 0x83c59du); SPILL(); f_6c7e50(); if (g_unwind) return; RELOAD();
/* 83c59d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83c5a0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83c5a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83c5a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83c5a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83c5aa: mov esp, ebp */
  esp = ebp;
/* 83c5ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83c5ad: ret 8 */
  esp += 12; SPILL(); return;
L_83c5b0: /* 83c5b0: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83c5b3: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 83c5b9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c5bb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83c5be: jp 0x83caf8 */
  if (pf) goto L_83caf8;
L_83c5c4: /* 83c5c4: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 83c5c7: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 83c5cd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c5cf: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c5d2: jne 0x83c6b3 */
  if (!zf) goto L_83c6b3;
L_83c5d8: /* 83c5d8: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 83c5de: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 83c5e4: test eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83c5e9: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 83c5ec: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83c5ef: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 83c5f2: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83c5f5: jne 0x83c674 */
  if (!zf) goto L_83c674;
L_83c5f7: /* 83c5f7: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83c5fa: fcomp dword ptr [0xa0973c] */
  fpu_com(ST0, F32((uint32_t)(0xa0973cu)));
  FPOP();
/* 83c600: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c602: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c605: jne 0x83c674 */
  if (!zf) goto L_83c674;
L_83c607: /* 83c607: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83c60a: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83c60d: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 83c610: fcomp dword ptr [0xa15bb4] */
  fpu_com(ST0, F32((uint32_t)(0xa15bb4u)));
  FPOP();
/* 83c616: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c618: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c61b: jne 0x83c674 */
  if (!zf) goto L_83c674;
L_83c61d: /* 83c61d: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 83c623: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 83c626: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 83c629: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c62a: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 83c630: lea ecx, [ebp - 0x12c] */
  ecx = (uint32_t)(ebp + 0xfffffed4u);
/* 83c636: fsub dword ptr [ebp - 0x80] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff80u)));
/* 83c639: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83c63a: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 83c640: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 83c646: fsub dword ptr [ebp - 0x84] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 83c64c: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 83c652: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 83c658: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 83c65e: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x83c664u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 83c664: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83c666: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 83c668: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 83c66b: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 83c66e: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 83c671: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
L_83c674: /* 83c674: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 83c677: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83c67a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 83c67c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83c67d: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 83c680: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83c681: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83c682: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 83c685: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c688: mov edx, esp */
  edx = esp;
/* 83c68a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 83c68c: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 83c68f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83c692: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 83c695: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
L_83c698: /* 83c698: mov ecx, esi */
  ecx = esi;
/* 83c69a: call dword ptr [eax + 0x124] */
  { uint32_t t = R32((uint32_t)(eax + 0x124u)); esp -= 4; W32(esp, 0x83c6a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_83c6a0: /* 83c6a0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83c6a3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83c6aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83c6ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83c6ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83c6ad: mov esp, ebp */
  esp = ebp;
/* 83c6af: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83c6b0: ret 8 */
  esp += 12; SPILL(); return;
L_83c6b3: /* 83c6b3: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 83c6b9: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x83c6bfu); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 83c6bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83c6c1: je 0x83c754 */
  if (zf) goto L_83c754;
L_83c6c7: /* 83c6c7: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 83c6cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83c6ce: call 0x6cb4b5 */
  esp -= 4; W32(esp, 0x83c6d3u); SPILL(); f_6cb4b5(); if (g_unwind) return; RELOAD();
/* 83c6d3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83c6d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83c6d8: je 0x83c754 */
  if (zf) goto L_83c754;
L_83c6da: /* 83c6da: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 83c6dd: mov eax, edi */
  eax = edi;
/* 83c6df: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83c6e1: mov ecx, ebx */
  ecx = ebx;
/* 83c6e3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83c6e5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83c6e8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83c6eb: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83c6ee: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83c6f1: lea ecx, [ebp - 0x168] */
  ecx = (uint32_t)(ebp + 0xfffffe98u);
/* 83c6f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83c6f8: mov ecx, ebx */
  ecx = ebx;
/* 83c6fa: mov dword ptr [esi + 0x19c], 0 */
  W32((uint32_t)(esi + 0x19cu), 0x0u);
/* 83c704: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x83c70au); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 83c70a: fld dword ptr [esi + 0x408] */
  { double v = F32((uint32_t)(esi + 0x408u)); FPUSH(v); }
/* 83c710: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 83c712: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83c714: mov edx, ebx */
  edx = ebx;
/* 83c716: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 83c718: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 83c71b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83c71e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83c721: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 83c724: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 83c726: mov ecx, ebx */
  ecx = ebx;
/* 83c728: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 83c72a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83c72c: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 83c72f: fstp dword ptr [ebx + 4] */
  WF32((uint32_t)(ebx + 0x4u), ST0); FPOP();
/* 83c732: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 83c735: fstp dword ptr [ebx + 8] */
  WF32((uint32_t)(ebx + 0x8u), ST0); FPOP();
/* 83c738: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83c73a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 83c73d: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83c740: mov dword ptr [ebp - 0xb4], edx */
  W32((uint32_t)(ebp + 0xffffff4cu), edx);
/* 83c746: mov dword ptr [ebp - 0xb0], eax */
  W32((uint32_t)(ebp + 0xffffff50u), eax);
/* 83c74c: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
/* 83c752: jmp 0x83c77b */
  goto L_83c77b;
L_83c754: /* 83c754: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 83c757: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 83c759: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c75a: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 83c75d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c760: mov ecx, esp */
  ecx = esp;
/* 83c762: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 83c764: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 83c767: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83c76a: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 83c76d: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83c770: mov ecx, esi */
  ecx = esi;
/* 83c772: call dword ptr [edx + 0x120] */
  { uint32_t t = R32((uint32_t)(edx + 0x120u)); esp -= 4; W32(esp, 0x83c778u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83c778: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
L_83c77b: /* 83c77b: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 83c77e: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 83c781: fmul dword ptr [ebp - 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 83c784: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 83c787: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 83c78a: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 83c78d: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 83c790: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 83c796: mov dword ptr [ebp - 0x90], ecx */
  W32((uint32_t)(ebp + 0xffffff70u), ecx);
/* 83c79c: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 83c7a2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83c7a4: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 83c7a7: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 83c7aa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83c7ac: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 83c7af: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83c7b1: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 83c7b4: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 83c7b6: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83c7b9: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 83c7bc: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 83c7be: fstp dword ptr [ebp - 0x150] */
  WF32((uint32_t)(ebp + 0xfffffeb0u), ST0); FPOP();
/* 83c7c4: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 83c7c7: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 83c7c9: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 83c7cb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83c7cd: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 83c7d0: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 83c7d3: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 83c7d6: fsub dword ptr [ebp - 0x150] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffeb0u)));
/* 83c7dc: fstp dword ptr [ebp - 0x120] */
  WF32((uint32_t)(ebp + 0xfffffee0u), ST0); FPOP();
/* 83c7e2: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 83c7e8: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 83c7eb: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 83c7ee: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83c7f0: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 83c7f3: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83c7f6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 83c7f9: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 83c7fc: mov dword ptr [ebp - 0xa0], ecx */
  W32((uint32_t)(ebp + 0xffffff60u), ecx);
/* 83c802: fld dword ptr [ebp - 0x120] */
  { double v = F32((uint32_t)(ebp + 0xfffffee0u)); FPUSH(v); }
/* 83c808: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 83c80b: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 83c811: fst dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0);
/* 83c817: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 83c81a: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 83c81d: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 83c820: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 83c822: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83c824: fld dword ptr [ebp - 0xa8] */
  { double v = F32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* 83c82a: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 83c82d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83c82f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83c835: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c837: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83c839: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c83c: jne 0x83ca8c */
  if (!zf) goto L_83ca8c;
L_83c842: /* 83c842: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 83c848: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83c84a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c84c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c84e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c850: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c852: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 83c855: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c856: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c859: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 83c85f: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 83c861: mov ecx, esp */
  ecx = esp;
/* 83c863: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 83c865: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 83c868: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83c86b: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 83c86e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83c871: mov eax, dword ptr [ebp - 0xa8] */
  eax = R32((uint32_t)(ebp + 0xffffff58u));
/* 83c877: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c87a: mov ecx, esp */
  ecx = esp;
/* 83c87c: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 83c87e: mov eax, dword ptr [ebp - 0xa4] */
  eax = R32((uint32_t)(ebp + 0xffffff5cu));
/* 83c884: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83c887: mov eax, dword ptr [ebp - 0xa0] */
  eax = R32((uint32_t)(ebp + 0xffffff60u));
/* 83c88d: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83c890: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83c896: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83c897: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x83c89du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83c89d: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83c8a0: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 83c8a6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c8a8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83c8ab: jp 0x83ca89 */
  if (pf) goto L_83ca89;
L_83c8b1: /* 83c8b1: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 83c8b4: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x83c8bau); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 83c8ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83c8bc: je 0x83c8df */
  if (zf) goto L_83c8df;
L_83c8be: /* 83c8be: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 83c8c1: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x83c8c7u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 83c8c7: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 83c8cd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83c8cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c8d0: push 0xae3b0c */
  { uint32_t v = 0xae3b0cu; esp -= 4; W32(esp, v); }
/* 83c8d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83c8d6: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x83c8dcu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 83c8dc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_83c8df: /* 83c8df: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 83c8e2: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 83c8e8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c8ea: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c8ed: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 83c8ef: jne 0x83c916 */
  if (!zf) goto L_83c916;
L_83c8f1: /* 83c8f1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 83c8f4: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 83c8f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83c8f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c8fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83c8fb: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 83c8fe: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c901: mov ecx, esp */
  ecx = esp;
/* 83c903: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83c905: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 83c908: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83c90b: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 83c90e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 83c911: jmp 0x83c698 */
  goto L_83c698;
L_83c916: /* 83c916: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 83c919: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83c91a: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 83c91d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c920: mov edx, esp */
  edx = esp;
/* 83c922: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 83c924: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 83c927: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83c92a: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 83c92d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 83c930: mov ecx, esi */
  ecx = esi;
/* 83c932: call dword ptr [eax + 0x120] */
  { uint32_t t = R32((uint32_t)(eax + 0x120u)); esp -= 4; W32(esp, 0x83c938u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83c938: lea edx, [ebp - 0x15c] */
  edx = (uint32_t)(ebp + 0xfffffea4u);
/* 83c93e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83c93f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 83c942: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x83c948u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 83c948: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 83c94b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c94c: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 83c952: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83c953: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 83c956: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83c957: lea eax, [ebp - 0xa8] */
  eax = (uint32_t)(ebp + 0xffffff58u);
/* 83c95d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c95e: lea ecx, [ebp - 0x15c] */
  ecx = (uint32_t)(ebp + 0xfffffea4u);
/* 83c964: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83c965: mov ecx, esi */
  ecx = esi;
/* 83c967: call 0x6c6163 */
  esp -= 4; W32(esp, 0x83c96cu); SPILL(); f_6c6163(); if (g_unwind) return; RELOAD();
/* 83c96c: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 83c972: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83c978: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c97a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c97d: jne 0x83c9d5 */
  if (!zf) goto L_83c9d5;
L_83c97f: /* 83c97f: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 83c982: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83c988: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c98a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83c98d: jne 0x83c9d5 */
  if (!zf) goto L_83c9d5;
L_83c98f: /* 83c98f: fld dword ptr [ebp - 0xa0] */
  { double v = F32((uint32_t)(ebp + 0xffffff60u)); FPUSH(v); }
/* 83c995: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83c99b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c99d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83c9a0: jp 0x83c9d5 */
  if (pf) goto L_83c9d5;
L_83c9a2: /* 83c9a2: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 83c9a8: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 83c9af: fmul dword ptr [ebp - 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 83c9b2: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 83c9b8: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 83c9bb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83c9bd: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 83c9c3: fmul dword ptr [ebp - 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 83c9c6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83c9c8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83c9ce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83c9d0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83c9d3: jnp 0x83c9dc */
  if (!pf) goto L_83c9dc;
L_83c9d5: /* 83c9d5: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_83c9dc: /* 83c9dc: mov ebx, dword ptr [esi + 0x17c] */
  ebx = R32((uint32_t)(esi + 0x17cu));
/* 83c9e2: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83c9e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c9ea: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83c9ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c9ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c9f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83c9f2: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 83c9f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83c9f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83c9f9: mov eax, esp */
  eax = esp;
/* 83c9fb: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 83c9fd: mov ebx, dword ptr [esi + 0x180] */
  ebx = R32((uint32_t)(esi + 0x180u));
/* 83ca03: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 83ca06: mov ebx, dword ptr [esi + 0x184] */
  ebx = R32((uint32_t)(esi + 0x184u));
/* 83ca0c: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 83ca0f: mov ebx, dword ptr [ebp - 0xa8] */
  ebx = R32((uint32_t)(ebp + 0xffffff58u));
/* 83ca15: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83ca18: mov eax, esp */
  eax = esp;
/* 83ca1a: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 83ca1c: mov ebx, dword ptr [ebp - 0xa4] */
  ebx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 83ca22: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 83ca25: mov ebx, dword ptr [ebp - 0xa0] */
  ebx = R32((uint32_t)(ebp + 0xffffff60u));
/* 83ca2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83ca2c: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 83ca2f: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x83ca35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83ca35: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83ca38: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83ca3a: jne 0x83ca4c */
  if (!zf) goto L_83ca4c;
L_83ca3c: /* 83ca3c: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 83ca3f: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 83ca45: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83ca47: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83ca4a: jne 0x83ca89 */
  if (!zf) goto L_83ca89;
L_83ca4c: /* 83ca4c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 83ca4f: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 83ca52: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 83ca54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83ca55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83ca57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83ca58: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 83ca5b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83ca5e: mov eax, esp */
  eax = esp;
/* 83ca60: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83ca62: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 83ca65: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 83ca68: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 83ca6b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83ca6e: mov ecx, esi */
  ecx = esi;
/* 83ca70: call dword ptr [edx + 0x124] */
  { uint32_t t = R32((uint32_t)(edx + 0x124u)); esp -= 4; W32(esp, 0x83ca76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83ca76: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83ca79: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83ca80: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83ca81: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83ca82: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83ca83: mov esp, ebp */
  esp = ebp;
/* 83ca85: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83ca86: ret 8 */
  esp += 12; SPILL(); return;
L_83ca89: /* 83ca89: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
L_83ca8c: /* 83ca8c: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 83ca92: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 83ca95: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 83ca98: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 83ca9b: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 83caa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83caa2: fsub dword ptr [ebp - 0x80] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff80u)));
/* 83caa5: lea ecx, [ebp - 0x18c] */
  ecx = (uint32_t)(ebp + 0xfffffe74u);
/* 83caab: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 83cab1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83cab2: fsub dword ptr [ebp - 0x84] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 83cab8: lea ecx, [ebp - 0x104] */
  ecx = (uint32_t)(ebp + 0xfffffefcu);
/* 83cabe: mov dword ptr [ebp - 0xec], edx */
  W32((uint32_t)(ebp + 0xffffff14u), edx);
/* 83cac4: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 83caca: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 83cad0: fstp dword ptr [ebp - 0xfc] */
  WF32((uint32_t)(ebp + 0xffffff04u), ST0); FPOP();
/* 83cad6: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x83cadcu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 83cadc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83cade: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 83cae1: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 83cae4: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 83cae7: mov eax, dword ptr [ebp - 0xec] */
  eax = R32((uint32_t)(ebp + 0xffffff14u));
/* 83caed: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 83caf0: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 83caf3: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 83caf6: jmp 0x83cafb */
  goto L_83cafb;
L_83caf8: /* 83caf8: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
L_83cafb: /* 83cafb: test dword ptr [esi + 0x88], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83cb05: jne 0x83c1b0 */
  if (!zf) goto L_83c1b0;
L_83cb0b: /* 83cb0b: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 83cb11: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 83cb14: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 83cb17: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 83cb1d: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 83cb23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83cb24: fsub dword ptr [ebp - 0x80] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff80u)));
/* 83cb27: lea edx, [ebp - 0x174] */
  edx = (uint32_t)(ebp + 0xfffffe8cu);
/* 83cb2d: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 83cb33: add eax, 0x3b8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83cb38: fsub dword ptr [ebp - 0x84] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 83cb3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83cb3f: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 83cb45: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 83cb48: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 83cb4e: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* 83cb54: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 83cb5a: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x83cb60u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 83cb60: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 83cb63: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 83cb66: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 83cb69: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 83cb6c: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 83cb6f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 83cb71: mov eax, edi */
  eax = edi;
/* 83cb73: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 83cb75: fstp dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0); FPOP();
/* 83cb7b: mov ecx, dword ptr [ebp - 0xcc] */
  ecx = R32((uint32_t)(ebp + 0xffffff34u));
/* 83cb81: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83cb83: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 83cb89: mov edx, dword ptr [ebp - 0xc8] */
  edx = R32((uint32_t)(ebp + 0xffffff38u));
/* 83cb8f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83cb92: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 83cb98: mov ecx, dword ptr [ebp - 0xc4] */
  ecx = R32((uint32_t)(ebp + 0xffffff3cu));
/* 83cb9e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83cba1: fld dword ptr [esi + 0x190] */
  { double v = F32((uint32_t)(esi + 0x190u)); FPUSH(v); }
/* 83cba7: fcomp dword ptr [ebp - 0x24] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffdcu)));
  FPOP();
/* 83cbaa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83cbac: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83cbaf: jnp 0x83cbc1 */
  if (!pf) goto L_83cbc1;
L_83cbb1: /* 83cbb1: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 83cbb4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83cbba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83cbbc: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83cbbf: jne 0x83cc18 */
  if (!zf) goto L_83cc18;
L_83cbc1: /* 83cbc1: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 83cbc4: mov edx, edi */
  edx = edi;
/* 83cbc6: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 83cbc8: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 83cbcb: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 83cbcd: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83cbd0: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 83cbd2: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 83cbd4: fstp dword ptr [ebp - 0x110] */
  WF32((uint32_t)(ebp + 0xfffffef0u), ST0); FPOP();
/* 83cbda: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 83cbdd: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 83cbe0: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 83cbe3: fld dword ptr [ebp - 0x110] */
  { double v = F32((uint32_t)(ebp + 0xfffffef0u)); FPUSH(v); }
/* 83cbe9: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 83cbec: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 83cbf2: mov eax, dword ptr [ebp - 0x9c] */
  eax = R32((uint32_t)(ebp + 0xffffff64u));
/* 83cbf8: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 83cbfa: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 83cc00: mov ecx, dword ptr [ebp - 0x98] */
  ecx = R32((uint32_t)(ebp + 0xffffff68u));
/* 83cc06: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83cc09: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 83cc0f: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 83cc15: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_83cc18: /* 83cc18: mov ecx, edi */
  ecx = edi;
/* 83cc1a: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x83cc20u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 83cc20: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83cc23: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 83cc29: fld dword ptr [ecx + 0x3d4] */
  { double v = F32((uint32_t)(ecx + 0x3d4u)); FPUSH(v); }
/* 83cc2f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83cc31: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83cc33: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 83cc36: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 83cc38: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83cc3a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83cc3c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83cc3f: jne 0x83c1b0 */
  if (!zf) goto L_83c1b0;
L_83cc45: /* 83cc45: lea edx, [ebp - 0x180] */
  edx = (uint32_t)(ebp + 0xfffffe80u);
/* 83cc4b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83cc4c: mov ecx, edi */
  ecx = edi;
/* 83cc4e: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x83cc54u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 83cc54: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83cc56: mov ecx, edi */
  ecx = edi;
/* 83cc58: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83cc5a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83cc5d: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83cc60: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83cc63: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83cc66: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 83cc6c: fld dword ptr [ecx + 0x3d4] */
  { double v = F32((uint32_t)(ecx + 0x3d4u)); FPUSH(v); }
/* 83cc72: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83cc74: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 83cc76: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 83cc78: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83cc7a: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 83cc7d: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 83cc80: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 83cc83: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 83cc86: jmp 0x83c1b0 */
  goto L_83c1b0;
L_83cc8b: /* 83cc8b: mov edx, dword ptr [ebp - 0xb4] */
  edx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 83cc91: mov eax, dword ptr [ebp - 0xb0] */
  eax = R32((uint32_t)(ebp + 0xffffff50u));
/* 83cc97: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 83cc9d: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 83cc9f: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 83cca2: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 83cca5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83cca8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83cca9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83ccaa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83ccb1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83ccb2: mov esp, ebp */
  esp = ebp;
/* 83ccb4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83ccb5: ret 8 */
  esp += 12; SPILL(); return;
}
