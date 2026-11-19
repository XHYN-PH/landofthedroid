#include "recomp.h"
#include "rec_mod.h"

void f_954640(void) {
  LOAD_REGS();
L_954640: /* 954640: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954641: mov eax, dword ptr [0xcf8584] */
  eax = R32((uint32_t)(0xcf8584u));
/* 954646: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954648: jne 0x9546c8 */
  if (!zf) goto L_9546c8;
L_95464a: /* 95464a: mov eax, dword ptr [0xcf8404] */
  eax = R32((uint32_t)(0xcf8404u));
/* 95464f: mov edx, dword ptr [0xcf8438] */
  edx = R32((uint32_t)(0xcf8438u));
/* 954655: mov ecx, dword ptr [0xcf85a8] */
  ecx = R32((uint32_t)(0xcf85a8u));
/* 95465b: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 95465d: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 95465f: je 0x95468b */
  if (zf) goto L_95468b;
L_954661: /* 954661: mov ecx, dword ptr [0xcf8b4c] */
  ecx = R32((uint32_t)(0xcf8b4cu));
/* 954667: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954668: call 0x955860 */
  esp -= 4; W32(esp, 0x95466du); SPILL(); f_955860(); if (g_unwind) return; RELOAD();
/* 95466d: mov edx, dword ptr [0xcf8b4c] */
  edx = R32((uint32_t)(0xcf8b4cu));
/* 954673: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 954674: call 0x955790 */
  esp -= 4; W32(esp, 0x954679u); SPILL(); f_955790(); if (g_unwind) return; RELOAD();
/* 954679: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 95467e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 954680: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954681: call 0x954a80 */
  esp -= 4; W32(esp, 0x954686u); SPILL(); f_954a80(); if (g_unwind) return; RELOAD();
/* 954686: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 954689: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 95468a: ret  */
  esp += 4; SPILL(); return;
L_95468b: /* 95468b: mov eax, dword ptr [0xcf845c] */
  eax = R32((uint32_t)(0xcf845cu));
/* 954690: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954692: jne 0x9546c8 */
  if (!zf) goto L_9546c8;
L_954694: /* 954694: mov edx, dword ptr [0xcf81c4] */
  edx = R32((uint32_t)(0xcf81c4u));
/* 95469a: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 95469e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95469f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9546a0: call 0x961bf0 */
  esp -= 4; W32(esp, 0x9546a5u); SPILL(); f_961bf0(); if (g_unwind) return; RELOAD();
/* 9546a5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9546a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9546aa: je 0x9546c8 */
  if (zf) goto L_9546c8;
L_9546ac: /* 9546ac: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 9546b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9546b2: call 0x955790 */
  esp -= 4; W32(esp, 0x9546b7u); SPILL(); f_955790(); if (g_unwind) return; RELOAD();
/* 9546b7: mov ecx, dword ptr [0xcf8b4c] */
  ecx = R32((uint32_t)(0xcf8b4cu));
/* 9546bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9546bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9546c0: call 0x954a80 */
  esp -= 4; W32(esp, 0x9546c5u); SPILL(); f_954a80(); if (g_unwind) return; RELOAD();
/* 9546c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9546c8: /* 9546c8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9546c9: ret  */
  esp += 4; SPILL(); return;
}

void f_9546d0(void) {
  LOAD_REGS();
L_9546d0: /* 9546d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9546d1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 9546d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9546d6: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 9546da: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 9546de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9546df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9546e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9546e1: call 0x96fa90 */
  esp -= 4; W32(esp, 0x9546e6u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 9546e6: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9546ea: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9546ee: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 9546f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9546f3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9546f5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9546f8: jne 0x95473c */
  if (!zf) goto L_95473c;
L_9546fa: /* 9546fa: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9546fe: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 954700: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 954701: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 954705: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 954707: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 954709: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 95470b: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 95470e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 954711: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 954715: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 954719: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 95471c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95471d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95471e: call 0x95f210 */
  esp -= 4; W32(esp, 0x954723u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 954723: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 954729: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95472c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95472d: push 0xaf6800 */
  { uint32_t v = 0xaf6800u; esp -= 4; W32(esp, v); }
/* 954732: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954733: call 0x953470 */
  esp -= 4; W32(esp, 0x954738u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 954738: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95473b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_95473c: /* 95473c: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 954740: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 954742: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 954743: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 954747: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 954748: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95474a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95474d: jp 0x954755 */
  if (pf) goto L_954755;
L_95474f: /* 95474f: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 954753: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_954755: /* 954755: ret  */
  esp += 4; SPILL(); return;
}

void f_954760(void) {
  LOAD_REGS();
L_954760: /* 954760: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 954761: mov ebp, esp */
  ebp = esp;
/* 954763: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 954766: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 954769: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95476a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95476b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95476c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95476d: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 954775: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 95477d: mov dword ptr [esp + 0x18], 0xff7fffff */
  W32((uint32_t)(esp + 0x18u), 0xff7fffffu);
/* 954785: call 0x963bf0 */
  esp -= 4; W32(esp, 0x95478au); SPILL(); f_963bf0(); if (g_unwind) return; RELOAD();
/* 95478a: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 954790: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 954795: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 954797: mov ebp, 1 */
  ebp = 0x1u;
/* 95479c: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95479e: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 9547a2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9547a4: jl 0x9547c3 */
  if ((sf != of)) goto L_9547c3;
L_9547a6: /* 9547a6: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9547aa: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9547af: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9547b2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9547b5: push 0xaf6d68 */
  { uint32_t v = 0xaf6d68u; esp -= 4; W32(esp, v); }
/* 9547ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9547bb: call 0x953470 */
  esp -= 4; W32(esp, 0x9547c0u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9547c0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9547c3: /* 9547c3: mov eax, dword ptr [0xcf8b8c] */
  eax = R32((uint32_t)(0xcf8b8cu));
/* 9547c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9547ca: je 0x9547da */
  if (zf) goto L_9547da;
L_9547cc: /* 9547cc: fild dword ptr [0xcf85d4] */
  { double v = (double)(int32_t)R32((uint32_t)(0xcf85d4u)); FPUSH(v); }
/* 9547d2: fimul dword ptr [0xcf8b8c] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(0xcf8b8cu)));
/* 9547d8: jmp 0x9547e6 */
  goto L_9547e6;
L_9547da: /* 9547da: fild dword ptr [0xcf8b80] */
  { double v = (double)(int32_t)R32((uint32_t)(0xcf8b80u)); FPUSH(v); }
/* 9547e0: fimul dword ptr [0xcf85d4] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(0xcf85d4u)));
L_9547e6: /* 9547e6: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 9547ea: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9547ee: fcomp dword ptr [0xa216c8] */
  fpu_com(ST0, F32((uint32_t)(0xa216c8u)));
  FPOP();
/* 9547f4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9547f6: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9547f9: mov eax, dword ptr [0xcf8bb8] */
  eax = R32((uint32_t)(0xcf8bb8u));
/* 9547fe: jne 0x954837 */
  if (!zf) goto L_954837;
L_954800: /* 954800: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954802: jne 0x95483d */
  if (!zf) goto L_95483d;
L_954804: /* 954804: mov eax, dword ptr [0xcf8578] */
  eax = R32((uint32_t)(0xcf8578u));
/* 954809: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95480b: je 0x95482a */
  if (zf) goto L_95482a;
L_95480d: /* 95480d: mov eax, dword ptr [0xcf845c] */
  eax = R32((uint32_t)(0xcf845cu));
/* 954812: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954814: je 0x95482a */
  if (zf) goto L_95482a;
L_954816: /* 954816: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95481c: push 0xaf6ce8 */
  { uint32_t v = 0xaf6ce8u; esp -= 4; W32(esp, v); }
/* 954821: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954822: call 0x953470 */
  esp -= 4; W32(esp, 0x954827u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 954827: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95482a: /* 95482a: call 0x953f90 */
  esp -= 4; W32(esp, 0x95482fu); SPILL(); f_953f90(); if (g_unwind) return; RELOAD();
/* 95482f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 954830: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 954831: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 954832: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 954833: mov esp, ebp */
  esp = ebp;
/* 954835: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 954836: ret  */
  esp += 4; SPILL(); return;
L_954837: /* 954837: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954839: jne 0x95483d */
  if (!zf) goto L_95483d;
L_95483b: /* 95483b: xor ebp, ebp */
  ebp = 0;
L_95483d: /* 95483d: mov eax, dword ptr [0xcf8454] */
  eax = R32((uint32_t)(0xcf8454u));
/* 954842: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954844: jne 0x954858 */
  if (!zf) goto L_954858;
L_954846: /* 954846: mov eax, dword ptr [0xcf8578] */
  eax = R32((uint32_t)(0xcf8578u));
/* 95484b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95484d: jne 0x954858 */
  if (!zf) goto L_954858;
L_95484f: /* 95484f: mov eax, dword ptr [0xcf8470] */
  eax = R32((uint32_t)(0xcf8470u));
/* 954854: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954856: je 0x95486c */
  if (zf) goto L_95486c;
L_954858: /* 954858: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95485e: push 0xaf6c38 */
  { uint32_t v = 0xaf6c38u; esp -= 4; W32(esp, v); }
/* 954863: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 954864: call 0x953470 */
  esp -= 4; W32(esp, 0x954869u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 954869: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95486c: /* 95486c: mov eax, dword ptr [0xcf84b4] */
  eax = R32((uint32_t)(0xcf84b4u));
/* 954871: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954873: je 0x9548e3 */
  if (zf) goto L_9548e3;
L_954875: /* 954875: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954877: mov eax, dword ptr [0xcf8478] */
  eax = R32((uint32_t)(0xcf8478u));
/* 95487c: je 0x9548ac */
  if (zf) goto L_9548ac;
L_95487e: /* 95487e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954880: mov eax, 0xaf68bc */
  eax = 0xaf68bcu;
/* 954885: jne 0x95488c */
  if (!zf) goto L_95488c;
L_954887: /* 954887: mov eax, 0xcf2eb4 */
  eax = 0xcf2eb4u;
L_95488c: /* 95488c: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 954890: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 954893: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 954896: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954897: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95489c: push 0xaf6bb8 */
  { uint32_t v = 0xaf6bb8u; esp -= 4; W32(esp, v); }
/* 9548a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9548a2: call 0x953470 */
  esp -= 4; W32(esp, 0x9548a7u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9548a7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9548aa: jmp 0x9548e3 */
  goto L_9548e3;
L_9548ac: /* 9548ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9548ae: mov eax, 0xaf68bc */
  eax = 0xaf68bcu;
/* 9548b3: jne 0x9548ba */
  if (!zf) goto L_9548ba;
L_9548b5: /* 9548b5: mov eax, 0xcf2eb4 */
  eax = 0xcf2eb4u;
L_9548ba: /* 9548ba: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9548be: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 9548c4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9548c7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9548ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9548cb: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9548cf: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9548d2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9548d5: push 0xaf6b40 */
  { uint32_t v = 0xaf6b40u; esp -= 4; W32(esp, v); }
/* 9548da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9548db: call 0x953470 */
  esp -= 4; W32(esp, 0x9548e0u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9548e0: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9548e3: /* 9548e3: mov edi, dword ptr [0xcf8b4c] */
  edi = R32((uint32_t)(0xcf8b4cu));
/* 9548e9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9548eb: je 0x9549d3 */
  if (zf) goto L_9549d3;
L_9548f1: /* 9548f1: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 9548f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9548f6: je 0x9549d3 */
  if (zf) goto L_9549d3;
L_9548fc: /* 9548fc: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 9548ff: test eax, 0x40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954904: jne 0x954914 */
  if (!zf) goto L_954914;
L_954906: /* 954906: mov ecx, dword ptr [0xcf8478] */
  ecx = R32((uint32_t)(0xcf8478u));
/* 95490c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95490e: jne 0x9549c8 */
  if (!zf) goto L_9549c8;
L_954914: /* 954914: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 954916: js 0x9549c8 */
  if (sf) goto L_9549c8;
L_95491c: /* 95491c: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95491e: je 0x95492f */
  if (zf) goto L_95492f;
L_954920: /* 954920: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 954926: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 954928: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 95492b: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
L_95492f: /* 95492f: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 954935: imul edx, dword ptr [0xcf85d4] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(0xcf85d4u)));
  edx = (uint32_t)r;
  }
/* 95493c: mov esi, dword ptr [0xcf85d8] */
  esi = R32((uint32_t)(0xcf85d8u));
/* 954942: lea ebx, [esi + edx*4] */
  ebx = (uint32_t)(esi + edx*4);
/* 954945: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 954947: jae 0x954983 */
  if (!cf) goto L_954983;
L_954949: /* 954949: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_954950: /* 954950: cmp esi, dword ptr [0xcf8424] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8424u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 954956: je 0x954976 */
  if (zf) goto L_954976;
L_954958: /* 954958: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 95495c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95495d: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 954961: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954962: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 954966: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 954967: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 95496b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95496c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95496d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95496e: call 0x9546d0 */
  esp -= 4; W32(esp, 0x954973u); SPILL(); f_9546d0(); if (g_unwind) return; RELOAD();
/* 954973: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_954976: /* 954976: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 95497c: lea esi, [esi + ecx*4] */
  esi = (uint32_t)(esi + ecx*4);
/* 95497f: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 954981: jb 0x954950 */
  if (cf) goto L_954950;
L_954983: /* 954983: mov esi, dword ptr [0xcf8c14] */
  esi = R32((uint32_t)(0xcf8c14u));
/* 954989: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95498b: je 0x9549c8 */
  if (zf) goto L_9549c8;
L_95498d: /* 95498d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 954990: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 954993: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954995: je 0x9549c8 */
  if (zf) goto L_9549c8;
L_954997: /* 954997: mov ecx, dword ptr [0xcf8424] */
  ecx = R32((uint32_t)(0xcf8424u));
/* 95499d: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9549a0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9549a2: je 0x9549c2 */
  if (zf) goto L_9549c2;
L_9549a4: /* 9549a4: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 9549a8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9549a9: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 9549ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9549ae: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 9549b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9549b3: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 9549b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9549b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9549b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9549ba: call 0x9546d0 */
  esp -= 4; W32(esp, 0x9549bfu); SPILL(); f_9546d0(); if (g_unwind) return; RELOAD();
/* 9549bf: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9549c2: /* 9549c2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9549c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9549c6: jne 0x954997 */
  if (!zf) goto L_954997;
L_9549c8: /* 9549c8: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 9549cb: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9549cd: jne 0x9548f1 */
  if (!zf) goto L_9548f1;
L_9549d3: /* 9549d3: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 9549d7: fcomp dword ptr [0xcf8a4c] */
  fpu_com(ST0, F32((uint32_t)(0xcf8a4cu)));
  FPOP();
/* 9549dd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9549df: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9549e2: jne 0x954a1f */
  if (!zf) goto L_954a1f;
L_9549e4: /* 9549e4: fld dword ptr [0xcf8a4c] */
  { double v = F32((uint32_t)(0xcf8a4cu)); FPUSH(v); }
/* 9549ea: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 9549f0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9549f3: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 9549f7: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9549fb: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9549fe: push 0xaf6ab8 */
  { uint32_t v = 0xaf6ab8u; esp -= 4; W32(esp, v); }
/* 954a03: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 954a04: call 0x953470 */
  esp -= 4; W32(esp, 0x954a09u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 954a09: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 954a0d: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 954a11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954a12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954a13: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 954a15: call 0x96e130 */
  esp -= 4; W32(esp, 0x954a1au); SPILL(); f_96e130(); if (g_unwind) return; RELOAD();
/* 954a1a: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 954a1d: jmp 0x954a4a */
  goto L_954a4a;
L_954a1f: /* 954a1f: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 954a23: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954a25: je 0x954a4a */
  if (zf) goto L_954a4a;
L_954a27: /* 954a27: fld dword ptr [0xcf8a4c] */
  { double v = F32((uint32_t)(0xcf8a4cu)); FPUSH(v); }
/* 954a2d: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 954a33: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 954a35: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 954a38: jne 0x954a4a */
  if (!zf) goto L_954a4a;
L_954a3a: /* 954a3a: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 954a3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 954a3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954a40: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 954a42: call 0x96e130 */
  esp -= 4; W32(esp, 0x954a47u); SPILL(); f_96e130(); if (g_unwind) return; RELOAD();
/* 954a47: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_954a4a: /* 954a4a: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 954a4f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954a51: je 0x954a70 */
  if (zf) goto L_954a70;
L_954a53: /* 954a53: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 954a57: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 954a5c: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 954a5f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 954a62: push 0xaf6a84 */
  { uint32_t v = 0xaf6a84u; esp -= 4; W32(esp, v); }
/* 954a67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954a68: call 0x953470 */
  esp -= 4; W32(esp, 0x954a6du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 954a6d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_954a70: /* 954a70: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 954a71: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 954a72: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 954a73: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 954a74: mov esp, ebp */
  esp = ebp;
/* 954a76: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 954a77: ret  */
  esp += 4; SPILL(); return;
}

void f_954a80(void) {
  LOAD_REGS();
L_954a80: /* 954a80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 954a81: mov ebp, esp */
  ebp = esp;
/* 954a83: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 954a86: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 954a89: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 954a8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 954a8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 954a90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 954a91: xor edi, edi */
  edi = 0;
/* 954a93: mov ebx, 1 */
  ebx = 0x1u;
/* 954a98: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 954a9a: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 954a9e: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 954aa2: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 954aa6: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 954aaa: jl 0x954abf */
  if ((sf != of)) goto L_954abf;
L_954aac: /* 954aac: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 954ab1: push 0xaf7054 */
  { uint32_t v = 0xaf7054u; esp -= 4; W32(esp, v); }
/* 954ab6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954ab7: call 0x953470 */
  esp -= 4; W32(esp, 0x954abcu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 954abc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_954abf: /* 954abf: cmp dword ptr [0xcf8564], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8564u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 954ac5: jne 0x954ad3 */
  if (!zf) goto L_954ad3;
L_954ac7: /* 954ac7: mov dword ptr [0xcf781c], edi */
  W32((uint32_t)(0xcf781cu), edi);
/* 954acd: mov dword ptr [0xcf7844], edi */
  W32((uint32_t)(0xcf7844u), edi);
L_954ad3: /* 954ad3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 954ad6: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 954ad8: je 0x954ee9 */
  if (zf) goto L_954ee9;
L_954ade: /* 954ade: mov edi, edi */
  edi = edi;
L_954ae0: /* 954ae0: cmp dword ptr [esi + 0x1c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 954ae3: je 0x954ec7 */
  if (zf) goto L_954ec7;
L_954ae9: /* 954ae9: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 954aec: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 954aee: jns 0x954b1f */
  if (!sf) goto L_954b1f;
L_954af0: /* 954af0: push 0xaf7044 */
  { uint32_t v = 0xaf7044u; esp -= 4; W32(esp, v); }
/* 954af5: call 0x96f160 */
  esp -= 4; W32(esp, 0x954afau); SPILL(); f_96f160(); if (g_unwind) return; RELOAD();
/* 954afa: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 954afd: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 954b03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954b04: push 0xaf7000 */
  { uint32_t v = 0xaf7000u; esp -= 4; W32(esp, v); }
/* 954b09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 954b0a: call 0x953470 */
  esp -= 4; W32(esp, 0x954b0fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 954b0f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 954b12: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 954b16: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 954b1a: jmp 0x954eba */
  goto L_954eba;
L_954b1f: /* 954b1f: cmp dword ptr [0xcf845c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf845cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 954b25: je 0x954b3c */
  if (zf) goto L_954b3c;
L_954b27: /* 954b27: cmp dword ptr [0xcf89f4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf89f4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 954b2d: je 0x954d51 */
  if (zf) goto L_954d51;
L_954b33: /* 954b33: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 954b36: je 0x954d51 */
  if (zf) goto L_954d51;
L_954b3c: /* 954b3c: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 954b3f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 954b41: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 954b45: je 0x954eba */
  if (zf) goto L_954eba;
L_954b4b: /* 954b4b: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 954b4e: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 954b51: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954b53: je 0x954eba */
  if (zf) goto L_954eba;
L_954b59: /* 954b59: mov ecx, 4 */
  ecx = 0x4u;
/* 954b5e: jmp 0x954b64 */
  goto L_954b64;
L_954b60: /* 954b60: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
L_954b64: /* 954b64: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 954b67: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 954b6b: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 954b6e: mov ebx, dword ptr [ecx + eax] */
  ebx = R32((uint32_t)(ecx + eax));
/* 954b71: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 954b74: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 954b77: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 954b7a: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 954b7e: jne 0x954b8d */
  if (!zf) goto L_954b8d;
L_954b80: /* 954b80: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 954b88: jmp 0x954d32 */
  goto L_954d32;
L_954b8d: /* 954b8d: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 954b90: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 954b94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954b95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 954b96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 954b97: call 0x96fa90 */
  esp -= 4; W32(esp, 0x954b9cu); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 954b9c: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 954ba2: fchs  */
  ST0 = -ST0;
/* 954ba4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 954ba7: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 954bab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 954bad: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 954bb0: jp 0x954d32 */
  if (pf) goto L_954d32;
L_954bb6: /* 954bb6: cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 954bba: jne 0x954bec */
  if (!zf) goto L_954bec;
L_954bbc: /* 954bbc: push 0xaf6fe0 */
  { uint32_t v = 0xaf6fe0u; esp -= 4; W32(esp, v); }
/* 954bc1: call 0x96f160 */
  esp -= 4; W32(esp, 0x954bc6u); SPILL(); f_96f160(); if (g_unwind) return; RELOAD();
/* 954bc6: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 954bca: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 954bcf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954bd0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 954bd3: push 0xaf6f98 */
  { uint32_t v = 0xaf6f98u; esp -= 4; W32(esp, v); }
/* 954bd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954bd9: call 0x953470 */
  esp -= 4; W32(esp, 0x954bdeu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 954bde: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 954be0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 954be2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 954be4: call 0x9535b0 */
  esp -= 4; W32(esp, 0x954be9u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 954be9: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_954bec: /* 954bec: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 954bf0: fcomp dword ptr [0xcf8a14] */
  fpu_com(ST0, F32((uint32_t)(0xcf8a14u)));
  FPOP();
/* 954bf6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 954bf8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 954bfb: jne 0x954c64 */
  if (!zf) goto L_954c64;
L_954bfd: /* 954bfd: mov ecx, dword ptr [0xcf781c] */
  ecx = R32((uint32_t)(0xcf781cu));
/* 954c03: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 954c04: push 0xaf6f88 */
  { uint32_t v = 0xaf6f88u; esp -= 4; W32(esp, v); }
/* 954c09: mov dword ptr [0xcf781c], ecx */
  W32((uint32_t)(0xcf781cu), ecx);
/* 954c0f: call 0x96f160 */
  esp -= 4; W32(esp, 0x954c14u); SPILL(); f_96f160(); if (g_unwind) return; RELOAD();
/* 954c14: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 954c18: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 954c1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954c1c: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* 954c1f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 954c22: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 954c28: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954c29: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 954c2a: call 0x95f210 */
  esp -= 4; W32(esp, 0x954c2fu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 954c2f: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 954c32: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 954c38: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 954c3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954c3c: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 954c3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954c40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954c41: push 0xaf6f38 */
  { uint32_t v = 0xaf6f38u; esp -= 4; W32(esp, v); }
/* 954c46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_954c47: /* 954c47: call 0x953470 */
  esp -= 4; W32(esp, 0x954c4cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 954c4c: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 954c4f: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 954c53: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 954c57: mov dword ptr [esp + 0x14], 1 */
  W32((uint32_t)(esp + 0x14u), 0x1u);
/* 954c5f: jmp 0x954d32 */
  goto L_954d32;
L_954c64: /* 954c64: mov eax, dword ptr [0xcf89f4] */
  eax = R32((uint32_t)(0xcf89f4u));
/* 954c69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954c6b: je 0x954cce */
  if (zf) goto L_954cce;
L_954c6d: /* 954c6d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 954c71: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 954c77: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 954c79: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 954c7c: jne 0x954d32 */
  if (!zf) goto L_954d32;
L_954c82: /* 954c82: mov eax, dword ptr [0xcf7844] */
  eax = R32((uint32_t)(0xcf7844u));
/* 954c87: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 954c88: push 0xaf6f24 */
  { uint32_t v = 0xaf6f24u; esp -= 4; W32(esp, v); }
/* 954c8d: mov dword ptr [0xcf7844], eax */
  W32((uint32_t)(0xcf7844u), eax);
/* 954c92: call 0x96f160 */
  esp -= 4; W32(esp, 0x954c97u); SPILL(); f_96f160(); if (g_unwind) return; RELOAD();
/* 954c97: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 954c9b: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 954c9e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954c9f: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 954ca2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 954ca5: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 954caa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954cab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954cac: call 0x95f210 */
  esp -= 4; W32(esp, 0x954cb1u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 954cb1: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 954cb4: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 954cba: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 954cbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954cbe: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 954cc1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 954cc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954cc3: push 0xaf6ec8 */
  { uint32_t v = 0xaf6ec8u; esp -= 4; W32(esp, v); }
/* 954cc8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954cc9: jmp 0x954c47 */
  goto L_954c47;
L_954cce: /* 954cce: mov eax, dword ptr [0xcf7844] */
  eax = R32((uint32_t)(0xcf7844u));
/* 954cd3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 954cd4: push 0xaf6f24 */
  { uint32_t v = 0xaf6f24u; esp -= 4; W32(esp, v); }
/* 954cd9: mov dword ptr [0xcf7844], eax */
  W32((uint32_t)(0xcf7844u), eax);
/* 954cde: call 0x96f160 */
  esp -= 4; W32(esp, 0x954ce3u); SPILL(); f_96f160(); if (g_unwind) return; RELOAD();
/* 954ce3: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 954ce8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 954ceb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954ced: je 0x954d32 */
  if (zf) goto L_954d32;
L_954cef: /* 954cef: mov edx, dword ptr [0xcf8bac] */
  edx = R32((uint32_t)(0xcf8bacu));
/* 954cf5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 954cf9: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 954cfc: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 954cff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 954d00: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 954d03: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 954d08: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 954d0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954d0c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954d0d: call 0x95f210 */
  esp -= 4; W32(esp, 0x954d12u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 954d12: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 954d15: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 954d1b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 954d1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954d1f: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 954d22: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 954d23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954d24: push 0xaf6e68 */
  { uint32_t v = 0xaf6e68u; esp -= 4; W32(esp, v); }
/* 954d29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954d2a: call 0x953470 */
  esp -= 4; W32(esp, 0x954d2fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 954d2f: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_954d32: /* 954d32: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 954d36: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 954d38: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954d3a: jne 0x954b60 */
  if (!zf) goto L_954b60;
L_954d40: /* 954d40: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 954d44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954d46: mov ebx, 1 */
  ebx = 0x1u;
/* 954d4b: jne 0x954eba */
  if (!zf) goto L_954eba;
L_954d51: /* 954d51: cmp dword ptr [0xcf8ba8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8ba8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 954d58: jne 0x954d76 */
  if (!zf) goto L_954d76;
L_954d5a: /* 954d5a: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 954d5d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954d5f: jne 0x954d6d */
  if (!zf) goto L_954d6d;
L_954d61: /* 954d61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 954d62: call 0x970960 */
  esp -= 4; W32(esp, 0x954d67u); SPILL(); f_970960(); if (g_unwind) return; RELOAD();
/* 954d67: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 954d6a: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
L_954d6d: /* 954d6d: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 954d70: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 954d74: jmp 0x954d87 */
  goto L_954d87;
L_954d76: /* 954d76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 954d77: call 0x970960 */
  esp -= 4; W32(esp, 0x954d7cu); SPILL(); f_970960(); if (g_unwind) return; RELOAD();
/* 954d7c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 954d7f: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 954d83: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
L_954d87: /* 954d87: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 954d8a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954d8c: je 0x954e9e */
  if (zf) goto L_954e9e;
L_954d92: /* 954d92: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 954d95: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 954d98: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954d9a: je 0x954e9e */
  if (zf) goto L_954e9e;
L_954da0: /* 954da0: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 954da3: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 954da7: mov eax, dword ptr [0xcf89f4] */
  eax = R32((uint32_t)(0xcf89f4u));
/* 954dac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954dae: je 0x954dc5 */
  if (zf) goto L_954dc5;
L_954db0: /* 954db0: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 954db3: mov eax, 0x1000 */
  eax = 0x1000u;
/* 954db8: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954dba: je 0x954dc5 */
  if (zf) goto L_954dc5;
L_954dbc: /* 954dbc: test dword ptr [edi + 0x3c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954dbf: jne 0x954e90 */
  if (!zf) goto L_954e90;
L_954dc5: /* 954dc5: mov edx, dword ptr [0xcf7884] */
  edx = R32((uint32_t)(0xcf7884u));
/* 954dcb: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 954dcf: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 954dd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954dd4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 954dd5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 954dd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954dd7: mov dword ptr [0xcf7884], edx */
  W32((uint32_t)(0xcf7884u), edx);
/* 954ddd: call 0x96fa90 */
  esp -= 4; W32(esp, 0x954de2u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 954de2: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 954de6: fcomp dword ptr [0xcf8a14] */
  fpu_com(ST0, F32((uint32_t)(0xcf8a14u)));
  FPOP();
/* 954dec: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 954def: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 954df1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 954df4: jne 0x954e32 */
  if (!zf) goto L_954e32;
L_954df6: /* 954df6: mov edx, dword ptr [0xcf781c] */
  edx = R32((uint32_t)(0xcf781cu));
/* 954dfc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 954dfd: push 0xaf6f88 */
  { uint32_t v = 0xaf6f88u; esp -= 4; W32(esp, v); }
/* 954e02: mov dword ptr [0xcf781c], edx */
  W32((uint32_t)(0xcf781cu), edx);
/* 954e08: call 0x96f160 */
  esp -= 4; W32(esp, 0x954e0du); SPILL(); f_96f160(); if (g_unwind) return; RELOAD();
/* 954e0d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 954e11: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 954e14: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 954e17: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 954e1d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 954e20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954e21: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 954e24: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 954e27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954e28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954e29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954e2a: push 0xaf6e10 */
  { uint32_t v = 0xaf6e10u; esp -= 4; W32(esp, v); }
/* 954e2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 954e30: jmp 0x954e7c */
  goto L_954e7c;
L_954e32: /* 954e32: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 954e36: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 954e3c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 954e3e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 954e41: jne 0x954e90 */
  if (!zf) goto L_954e90;
L_954e43: /* 954e43: mov edx, dword ptr [0xcf7844] */
  edx = R32((uint32_t)(0xcf7844u));
/* 954e49: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 954e4a: push 0xaf6f24 */
  { uint32_t v = 0xaf6f24u; esp -= 4; W32(esp, v); }
/* 954e4f: mov dword ptr [0xcf7844], edx */
  W32((uint32_t)(0xcf7844u), edx);
/* 954e55: call 0x96f160 */
  esp -= 4; W32(esp, 0x954e5au); SPILL(); f_96f160(); if (g_unwind) return; RELOAD();
/* 954e5a: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 954e5e: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 954e61: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 954e64: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 954e67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954e68: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 954e6b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 954e6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954e6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954e70: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 954e75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954e76: push 0xaf6db0 */
  { uint32_t v = 0xaf6db0u; esp -= 4; W32(esp, v); }
/* 954e7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_954e7c: /* 954e7c: call 0x953470 */
  esp -= 4; W32(esp, 0x954e81u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 954e81: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 954e84: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 954e88: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 954e8c: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
L_954e90: /* 954e90: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 954e94: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 954e96: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954e98: jne 0x954da0 */
  if (!zf) goto L_954da0;
L_954e9e: /* 954e9e: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 954ea2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954ea4: je 0x954eba */
  if (zf) goto L_954eba;
L_954ea6: /* 954ea6: mov ecx, dword ptr [0xcf8b40] */
  ecx = R32((uint32_t)(0xcf8b40u));
/* 954eac: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 954eb0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954eb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 954eb2: call 0x953a60 */
  esp -= 4; W32(esp, 0x954eb7u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 954eb7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_954eba: /* 954eba: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 954ebd: xor edi, edi */
  edi = 0;
/* 954ebf: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 954ec1: jne 0x954ae0 */
  if (!zf) goto L_954ae0;
L_954ec7: /* 954ec7: cmp dword ptr [esp + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 954ecb: je 0x954ee9 */
  if (zf) goto L_954ee9;
L_954ecd: /* 954ecd: cmp dword ptr [0xcf841c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf841cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 954ed3: jne 0x954ee9 */
  if (!zf) goto L_954ee9;
L_954ed5: /* 954ed5: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 954ed9: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 954edd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954ede: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954edf: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 954ee1: call 0x96e130 */
  esp -= 4; W32(esp, 0x954ee6u); SPILL(); f_96e130(); if (g_unwind) return; RELOAD();
/* 954ee6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_954ee9: /* 954ee9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 954eea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 954eeb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 954eec: mov esp, ebp */
  esp = ebp;
/* 954eee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 954eef: ret  */
  esp += 4; SPILL(); return;
}

void f_954ef0(void) {
  LOAD_REGS();
L_954ef0: /* 954ef0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 954ef3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 954ef4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 954ef5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 954ef6: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 954efa: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 954efd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 954efe: xor edi, edi */
  edi = 0;
/* 954f00: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 954f03: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 954f07: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 954f0b: mov ebp, 0x7fffffff */
  ebp = 0x7fffffffu;
/* 954f10: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 954f14: je 0x954f37 */
  if (zf) goto L_954f37;
L_954f16: /* 954f16: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 954f19: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 954f1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954f20: push 0xaf7730 */
  { uint32_t v = 0xaf7730u; esp -= 4; W32(esp, v); }
/* 954f25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954f26: call 0x953470 */
  esp -= 4; W32(esp, 0x954f2bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 954f2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 954f2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 954f2d: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 954f2f: call 0x9535b0 */
  esp -= 4; W32(esp, 0x954f34u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 954f34: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_954f37: /* 954f37: cmp dword ptr [esi + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 954f3a: jne 0x954f5b */
  if (!zf) goto L_954f5b;
L_954f3c: /* 954f3c: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 954f3f: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 954f44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 954f45: push 0xaf76e0 */
  { uint32_t v = 0xaf76e0u; esp -= 4; W32(esp, v); }
/* 954f4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954f4b: call 0x953470 */
  esp -= 4; W32(esp, 0x954f50u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 954f50: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 954f53: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
L_954f5b: /* 954f5b: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 954f5e: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 954f61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954f62: push 0xaf76cc */
  { uint32_t v = 0xaf76ccu; esp -= 4; W32(esp, v); }
/* 954f67: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 954f68: call 0x94e910 */
  esp -= 4; W32(esp, 0x954f6du); SPILL(); f_94e910(); if (g_unwind) return; RELOAD();
/* 954f6d: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 954f70: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 954f73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954f74: push 0xaf76bc */
  { uint32_t v = 0xaf76bcu; esp -= 4; W32(esp, v); }
/* 954f79: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954f7a: call 0x94e910 */
  esp -= 4; W32(esp, 0x954f7fu); SPILL(); f_94e910(); if (g_unwind) return; RELOAD();
/* 954f7f: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 954f82: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 954f85: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 954f86: push 0xaf76a8 */
  { uint32_t v = 0xaf76a8u; esp -= 4; W32(esp, v); }
/* 954f8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954f8c: call 0x94e910 */
  esp -= 4; W32(esp, 0x954f91u); SPILL(); f_94e910(); if (g_unwind) return; RELOAD();
/* 954f91: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 954f94: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 954f97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954f98: push 0xaf7694 */
  { uint32_t v = 0xaf7694u; esp -= 4; W32(esp, v); }
/* 954f9d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 954f9e: call 0x94e910 */
  esp -= 4; W32(esp, 0x954fa3u); SPILL(); f_94e910(); if (g_unwind) return; RELOAD();
/* 954fa3: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 954fa6: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 954fa9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954faa: push 0xaf7684 */
  { uint32_t v = 0xaf7684u; esp -= 4; W32(esp, v); }
/* 954faf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 954fb0: call 0x94e910 */
  esp -= 4; W32(esp, 0x954fb5u); SPILL(); f_94e910(); if (g_unwind) return; RELOAD();
/* 954fb5: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 954fb8: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 954fbb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 954fbd: je 0x955053 */
  if (zf) goto L_955053;
L_954fc3: /* 954fc3: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 954fc6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954fc8: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 954fcb: je 0x955053 */
  if (zf) goto L_955053;
L_954fd1: /* 954fd1: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 954fd4: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 954fd7: test eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 954fdc: je 0x955014 */
  if (zf) goto L_955014;
L_954fde: /* 954fde: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 954fe1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 954fe2: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 954fe7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954fe8: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 954fed: push 0xaf7640 */
  { uint32_t v = 0xaf7640u; esp -= 4; W32(esp, v); }
/* 954ff2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 954ff3: call 0x953470 */
  esp -= 4; W32(esp, 0x954ff8u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 954ff8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 954ff9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 954ffb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 954ffd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 954fff: push 0xaf4120 */
  { uint32_t v = 0xaf4120u; esp -= 4; W32(esp, v); }
/* 955004: call 0x953700 */
  esp -= 4; W32(esp, 0x955009u); SPILL(); f_953700(); if (g_unwind) return; RELOAD();
/* 955009: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95500c: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
L_955014: /* 955014: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 955017: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95501c: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 95501e: jae 0x95502a */
  if (!cf) goto L_95502a;
L_955020: /* 955020: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 955022: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955024: mov ebp, eax */
  ebp = eax;
/* 955026: jne 0x954fd1 */
  if (!zf) goto L_954fd1;
L_955028: /* 955028: jmp 0x955053 */
  goto L_955053;
L_95502a: /* 95502a: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 95502d: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 955030: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 955035: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95503b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95503c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95503d: push 0xaf75e0 */
  { uint32_t v = 0xaf75e0u; esp -= 4; W32(esp, v); }
/* 955042: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955043: call 0x953470 */
  esp -= 4; W32(esp, 0x955048u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 955048: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95504b: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
L_955053: /* 955053: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 955056: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 955057: call 0x94f340 */
  esp -= 4; W32(esp, 0x95505cu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95505c: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 95505f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955060: mov edi, eax */
  edi = eax;
/* 955062: call 0x94f340 */
  esp -= 4; W32(esp, 0x955067u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 955067: mov ebx, eax */
  ebx = eax;
/* 955069: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 95506c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95506d: call 0x94f340 */
  esp -= 4; W32(esp, 0x955072u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 955072: mov ebp, eax */
  ebp = eax;
/* 955074: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 955077: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95507a: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95507d: je 0x9550d0 */
  if (zf) goto L_9550d0;
L_95507f: /* 95507f: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 955085: lea ecx, [ebx + edi] */
  ecx = (uint32_t)(ebx + edi);
/* 955088: add edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 95508a: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95508c: je 0x955167 */
  if (zf) goto L_955167;
L_955092: /* 955092: test eax, 0x60000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955097: jne 0x955167 */
  if (!zf) goto L_955167;
L_95509d: /* 95509d: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 9550a0: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 9550a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9550a7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9550a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9550a9: push 0xaf7570 */
  { uint32_t v = 0xaf7570u; esp -= 4; W32(esp, v); }
/* 9550ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9550af: call 0x953470 */
  esp -= 4; W32(esp, 0x9550b4u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9550b4: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 9550b7: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9550bc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9550bd: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 9550c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9550c3: call 0x94f230 */
  esp -= 4; W32(esp, 0x9550c8u); SPILL(); f_94f230(); if (g_unwind) return; RELOAD();
/* 9550c8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9550cb: jmp 0x95515f */
  goto L_95515f;
L_9550d0: /* 9550d0: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 9550d4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9550d6: jne 0x95510f */
  if (!zf) goto L_95510f;
L_9550d8: /* 9550d8: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 9550de: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9550e0: jl 0x9550e6 */
  if ((sf != of)) goto L_9550e6;
L_9550e2: /* 9550e2: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9550e4: jge 0x95510f */
  if ((sf == of)) goto L_95510f;
L_9550e6: /* 9550e6: test eax, 0x60000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9550eb: jne 0x95510f */
  if (!zf) goto L_95510f;
L_9550ed: /* 9550ed: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 9550f0: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 9550f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9550f7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9550f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9550f9: push 0xaf7508 */
  { uint32_t v = 0xaf7508u; esp -= 4; W32(esp, v); }
/* 9550fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9550ff: call 0x953470 */
  esp -= 4; W32(esp, 0x955104u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 955104: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955107: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
L_95510f: /* 95510f: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 955111: jl 0x95513b */
  if ((sf != of)) goto L_95513b;
L_955113: /* 955113: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 955118: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95511b: jne 0x95512c */
  if (!zf) goto L_95512c;
L_95511d: /* 95511d: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95511f: je 0x955167 */
  if (zf) goto L_955167;
L_955121: /* 955121: mov eax, dword ptr [0xcf8bc8] */
  eax = R32((uint32_t)(0xcf8bc8u));
/* 955126: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955128: je 0x95513b */
  if (zf) goto L_95513b;
L_95512a: /* 95512a: jmp 0x955167 */
  goto L_955167;
L_95512c: /* 95512c: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95512f: jne 0x955167 */
  if (!zf) goto L_955167;
L_955131: /* 955131: lea eax, [ebx + edi] */
  eax = (uint32_t)(ebx + edi);
/* 955134: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 955136: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 955139: je 0x955167 */
  if (zf) goto L_955167;
L_95513b: /* 95513b: test dword ptr [esi + 0x3c], 0x60000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x60000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955142: jne 0x955167 */
  if (!zf) goto L_955167;
L_955144: /* 955144: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 955147: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95514d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95514e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95514f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 955150: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 955151: push 0xaf7488 */
  { uint32_t v = 0xaf7488u; esp -= 4; W32(esp, v); }
/* 955156: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955157: call 0x953470 */
  esp -= 4; W32(esp, 0x95515cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95515c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95515f: /* 95515f: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
L_955167: /* 955167: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 95516a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95516c: je 0x9551b4 */
  if (zf) goto L_9551b4;
L_95516e: /* 95516e: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 955171: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955173: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 955176: je 0x9551b4 */
  if (zf) goto L_9551b4;
L_955178: /* 955178: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 95517b: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95517e: je 0x955185 */
  if (zf) goto L_955185;
L_955180: /* 955180: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 955183: jne 0x9551a7 */
  if (!zf) goto L_9551a7;
L_955185: /* 955185: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 955188: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95518e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95518f: push 0xaf7430 */
  { uint32_t v = 0xaf7430u; esp -= 4; W32(esp, v); }
/* 955194: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 955195: call 0x953470 */
  esp -= 4; W32(esp, 0x95519au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95519a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95519c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95519d: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 95519f: call 0x9535b0 */
  esp -= 4; W32(esp, 0x9551a4u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 9551a4: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9551a7: /* 9551a7: or dword ptr [edi + 0x3c], 0x2000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi + 0x3cu), r);
  }
/* 9551ae: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 9551b0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9551b2: jne 0x955178 */
  if (!zf) goto L_955178;
L_9551b4: /* 9551b4: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 9551b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9551b9: je 0x955243 */
  if (zf) goto L_955243;
L_9551bf: /* 9551bf: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 9551c2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9551c4: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 9551c7: je 0x955243 */
  if (zf) goto L_955243;
L_9551cd: /* 9551cd: mov ebp, 1 */
  ebp = 0x1u;
L_9551d2: /* 9551d2: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 9551d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9551d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9551d7: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9551da: call 0x94eed0 */
  esp -= 4; W32(esp, 0x9551dfu); SPILL(); f_94eed0(); if (g_unwind) return; RELOAD();
/* 9551df: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9551e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9551e4: jne 0x95520b */
  if (!zf) goto L_95520b;
L_9551e6: /* 9551e6: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 9551e9: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 9551ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9551ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9551ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9551ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9551f0: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9551f5: push 0xaf73c8 */
  { uint32_t v = 0xaf73c8u; esp -= 4; W32(esp, v); }
/* 9551fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9551fb: call 0x953470 */
  esp -= 4; W32(esp, 0x955200u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 955200: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955203: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 955207: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
L_95520b: /* 95520b: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 95520e: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 955211: jne 0x955236 */
  if (!zf) goto L_955236;
L_955213: /* 955213: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 955216: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 955219: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95521e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95521f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955220: push 0xaf7378 */
  { uint32_t v = 0xaf7378u; esp -= 4; W32(esp, v); }
/* 955225: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955226: call 0x953470 */
  esp -= 4; W32(esp, 0x95522bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95522b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95522e: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 955232: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
L_955236: /* 955236: and dword ptr [edi + 0x3c], 0xffffdfff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(0xffffdfffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(edi + 0x3cu), r);
  }
/* 95523d: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 95523f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955241: jne 0x9551d2 */
  if (!zf) goto L_9551d2;
L_955243: /* 955243: mov ebx, dword ptr [esi + 0x24] */
  ebx = R32((uint32_t)(esi + 0x24u));
/* 955246: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955248: je 0x955286 */
  if (zf) goto L_955286;
L_95524a: /* 95524a: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 95524d: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 955250: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955252: je 0x955286 */
  if (zf) goto L_955286;
L_955254: /* 955254: mov ebp, 0xfeffffff */
  ebp = 0xfeffffffu;
/* 955259: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_955260: /* 955260: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 955263: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 955265: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95526b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95526c: push 0xaf7364 */
  { uint32_t v = 0xaf7364u; esp -= 4; W32(esp, v); }
/* 955271: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955272: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 955275: call 0x94e910 */
  esp -= 4; W32(esp, 0x95527au); SPILL(); f_94e910(); if (g_unwind) return; RELOAD();
/* 95527a: and dword ptr [edi + 0xc], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xcu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(edi + 0xcu), r);
  }
/* 95527d: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 95527f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955282: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955284: jne 0x955260 */
  if (!zf) goto L_955260;
L_955286: /* 955286: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 955289: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95528b: je 0x955384 */
  if (zf) goto L_955384;
L_955291: /* 955291: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 955294: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 955297: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955299: je 0x955384 */
  if (zf) goto L_955384;
L_95529f: /* 95529f: mov ebp, 1 */
  ebp = 0x1u;
L_9552a4: /* 9552a4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9552a7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9552ab: test byte ptr [edi + 0xf], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0xfu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9552af: je 0x9552da */
  if (zf) goto L_9552da;
L_9552b1: /* 9552b1: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 9552b4: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 9552b7: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 9552bd: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9552c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9552c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9552c4: push 0xaf7318 */
  { uint32_t v = 0xaf7318u; esp -= 4; W32(esp, v); }
/* 9552c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9552ca: call 0x953470 */
  esp -= 4; W32(esp, 0x9552cfu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9552cf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9552d2: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 9552d6: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
L_9552da: /* 9552da: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 9552dd: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9552df: or edx, 0x1000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 9552e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9552e6: mov dword ptr [edi + 0xc], edx */
  W32((uint32_t)(edi + 0xcu), edx);
/* 9552e9: call 0x94f340 */
  esp -= 4; W32(esp, 0x9552eeu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 9552ee: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 9552f4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9552f7: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9552f8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9552fa: je 0x955326 */
  if (zf) goto L_955326;
L_9552fc: /* 9552fc: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 9552ff: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 955302: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955303: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 955306: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 955309: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95530a: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95530f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955310: push 0xaf72c0 */
  { uint32_t v = 0xaf72c0u; esp -= 4; W32(esp, v); }
/* 955315: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955316: call 0x953470 */
  esp -= 4; W32(esp, 0x95531bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95531b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95531e: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 955322: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
L_955326: /* 955326: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 955329: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95532b: jne 0x955330 */
  if (!zf) goto L_955330;
L_95532d: /* 95532d: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
L_955330: /* 955330: or dword ptr [ebx + 0x3c], 0x2000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x3cu))); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx + 0x3cu), r);
  }
/* 955337: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 95533a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95533b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95533c: call 0x94eed0 */
  esp -= 4; W32(esp, 0x955341u); SPILL(); f_94eed0(); if (g_unwind) return; RELOAD();
/* 955341: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955344: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955346: jne 0x955376 */
  if (!zf) goto L_955376;
L_955348: /* 955348: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 95534b: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* 95534e: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 955351: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 955357: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955358: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95535e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95535f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 955360: push 0xaf7260 */
  { uint32_t v = 0xaf7260u; esp -= 4; W32(esp, v); }
/* 955365: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955366: call 0x953470 */
  esp -= 4; W32(esp, 0x95536bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95536b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95536e: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 955372: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
L_955376: /* 955376: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 95537a: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 95537c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95537e: jne 0x9552a4 */
  if (!zf) goto L_9552a4;
L_955384: /* 955384: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 955387: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95538a: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 95538d: jne 0x9555eb */
  if (!zf) goto L_9555eb;
L_955393: /* 955393: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955395: je 0x95567b */
  if (zf) goto L_95567b;
L_95539b: /* 95539b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95539e: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 9553a2: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 9553a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9553a6: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9553aa: je 0x95567b */
  if (zf) goto L_95567b;
L_9553b0: /* 9553b0: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 9553b4: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 9553b8: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 9553bb: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9553be: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9553c1: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 9553c5: jne 0x9553ef */
  if (!zf) goto L_9553ef;
L_9553c7: /* 9553c7: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 9553ca: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 9553cd: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 9553d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9553d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9553d5: push 0xaf7208 */
  { uint32_t v = 0xaf7208u; esp -= 4; W32(esp, v); }
/* 9553da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9553db: call 0x953470 */
  esp -= 4; W32(esp, 0x9553e0u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9553e0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9553e3: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 9553e7: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
L_9553ef: /* 9553ef: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 9553f2: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 9553f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9553f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9553f7: call 0x9584c0 */
  esp -= 4; W32(esp, 0x9553fcu); SPILL(); f_9584c0(); if (g_unwind) return; RELOAD();
/* 9553fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9553fd: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 955401: call 0x94f520 */
  esp -= 4; W32(esp, 0x955406u); SPILL(); f_94f520(); if (g_unwind) return; RELOAD();
/* 955406: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 955409: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95540c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95540e: je 0x955431 */
  if (zf) goto L_955431;
L_955410: /* 955410: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 955413: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 955415: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955417: je 0x955431 */
  if (zf) goto L_955431;
L_955419: /* 955419: mov edx, 0xfcffffff */
  edx = 0xfcffffffu;
/* 95541e: mov edi, edi */
  edi = edi;
L_955420: /* 955420: mov ebx, dword ptr [eax + 0x14] */
  ebx = R32((uint32_t)(eax + 0x14u));
/* 955423: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 955425: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 955428: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 95542b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95542d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95542f: jne 0x955420 */
  if (!zf) goto L_955420;
L_955431: /* 955431: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 955435: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955437: je 0x955459 */
  if (zf) goto L_955459;
L_955439: /* 955439: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 95543c: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95543f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955441: je 0x955459 */
  if (zf) goto L_955459;
L_955443: /* 955443: mov edx, 0x1000000 */
  edx = 0x1000000u;
L_955448: /* 955448: mov ebx, dword ptr [eax + 0x14] */
  ebx = R32((uint32_t)(eax + 0x14u));
/* 95544b: or ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 95544d: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 955450: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 955453: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 955455: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955457: jne 0x955448 */
  if (!zf) goto L_955448;
L_955459: /* 955459: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 95545c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95545e: je 0x955503 */
  if (zf) goto L_955503;
L_955464: /* 955464: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 955467: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95546a: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95546c: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 955470: je 0x955503 */
  if (zf) goto L_955503;
L_955476: /* 955476: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 95547a: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 95547d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 955480: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 955482: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 955486: jne 0x95548b */
  if (!zf) goto L_95548b;
L_955488: /* 955488: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_95548b: /* 95548b: cmp dword ptr [esp + 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95548f: jne 0x9554f5 */
  if (!zf) goto L_9554f5;
L_955491: /* 955491: mov ebx, dword ptr [ebp] */
  ebx = R32((uint32_t)(ebp));
/* 955494: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955496: je 0x9554f5 */
  if (zf) goto L_9554f5;
L_955498: /* 955498: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 95549b: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 95549e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9554a0: je 0x9554f5 */
  if (zf) goto L_9554f5;
L_9554a2: /* 9554a2: mov al, byte ptr [edi + 0x17] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x17u))) & 0xffu);
/* 9554a5: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9554a8: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9554aa: jne 0x9554e8 */
  if (!zf) goto L_9554e8;
L_9554ac: /* 9554ac: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9554b0: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 9554b3: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 9554b6: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 9554b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9554ba: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 9554bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9554be: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 9554c4: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9554ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9554cb: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9554d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9554d1: push 0xaf71b0 */
  { uint32_t v = 0xaf71b0u; esp -= 4; W32(esp, v); }
/* 9554d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9554d7: call 0x953470 */
  esp -= 4; W32(esp, 0x9554dcu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9554dc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9554dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9554de: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 9554e0: call 0x9535b0 */
  esp -= 4; W32(esp, 0x9554e5u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 9554e5: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9554e8: /* 9554e8: or dword ptr [edi + 0x14], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x14u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi + 0x14u), r);
  }
/* 9554ef: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 9554f1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9554f3: jne 0x9554a2 */
  if (!zf) goto L_9554a2;
L_9554f5: /* 9554f5: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9554f9: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 9554fb: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9554fd: jne 0x955476 */
  if (!zf) goto L_955476;
L_955503: /* 955503: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 955507: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955509: jne 0x9555c7 */
  if (!zf) goto L_9555c7;
L_95550f: /* 95550f: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 955513: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955515: je 0x9555c7 */
  if (zf) goto L_9555c7;
L_95551b: /* 95551b: mov edi, dword ptr [ebp + 4] */
  edi = R32((uint32_t)(ebp + 0x4u));
/* 95551e: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 955521: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955523: je 0x9555c7 */
  if (zf) goto L_9555c7;
L_955529: /* 955529: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_955530: /* 955530: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 955533: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 955536: test eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95553b: jne 0x9555bc */
  if (!zf) goto L_9555bc;
L_955541: /* 955541: cmp dword ptr [0xcf8438], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 955548: jge 0x955554 */
  if ((sf == of)) goto L_955554;
L_95554a: /* 95554a: mov ecx, dword ptr [0xcf845c] */
  ecx = R32((uint32_t)(0xcf845cu));
/* 955550: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955552: jne 0x9555bc */
  if (!zf) goto L_9555bc;
L_955554: /* 955554: mov ecx, dword ptr [0xcf8bac] */
  ecx = R32((uint32_t)(0xcf8bacu));
/* 95555a: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 95555e: mov edx, dword ptr [ebx + 0x38] */
  edx = R32((uint32_t)(ebx + 0x38u));
/* 955561: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 955562: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 955565: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955566: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95556c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95556d: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 955572: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955573: push 0xaf7120 */
  { uint32_t v = 0xaf7120u; esp -= 4; W32(esp, v); }
/* 955578: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955579: call 0x953470 */
  esp -= 4; W32(esp, 0x95557eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95557e: mov eax, dword ptr [0xcf841c] */
  eax = R32((uint32_t)(0xcf841cu));
/* 955583: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955586: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955588: jne 0x9555bc */
  if (!zf) goto L_9555bc;
L_95558a: /* 95558a: mov eax, dword ptr [0xcf845c] */
  eax = R32((uint32_t)(0xcf845cu));
/* 95558f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955591: jne 0x9555bc */
  if (!zf) goto L_9555bc;
L_955593: /* 955593: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 955594: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 955596: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 955597: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 955598: push 0xaf4120 */
  { uint32_t v = 0xaf4120u; esp -= 4; W32(esp, v); }
/* 95559d: call 0x953700 */
  esp -= 4; W32(esp, 0x9555a2u); SPILL(); f_953700(); if (g_unwind) return; RELOAD();
/* 9555a2: mov eax, dword ptr [0xcf845c] */
  eax = R32((uint32_t)(0xcf845cu));
/* 9555a7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9555aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9555ac: jne 0x9555bc */
  if (!zf) goto L_9555bc;
L_9555ae: /* 9555ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9555b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9555b2: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 9555b4: call 0x9535b0 */
  esp -= 4; W32(esp, 0x9555b9u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 9555b9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9555bc: /* 9555bc: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 9555bf: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9555c1: jne 0x955530 */
  if (!zf) goto L_955530;
L_9555c7: /* 9555c7: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 9555cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9555cc: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x9555d1u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 9555d1: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 9555d5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9555d7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9555da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9555dc: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9555e0: jne 0x9553b0 */
  if (!zf) goto L_9553b0;
L_9555e6: /* 9555e6: jmp 0x95567b */
  goto L_95567b;
L_9555eb: /* 9555eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9555ed: je 0x95567b */
  if (zf) goto L_95567b;
L_9555f3: /* 9555f3: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 9555f6: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9555f9: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9555fb: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 9555ff: je 0x95567b */
  if (zf) goto L_95567b;
L_955605: /* 955605: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 955609: mov eax, dword ptr [ebp + 0x3c] */
  eax = R32((uint32_t)(ebp + 0x3cu));
/* 95560c: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95560f: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 955612: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 955616: je 0x955671 */
  if (zf) goto L_955671;
L_955618: /* 955618: mov ebx, dword ptr [esi + 0x28] */
  ebx = R32((uint32_t)(esi + 0x28u));
/* 95561b: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 95561e: mov edi, ecx */
  edi = ecx;
/* 955620: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 955622: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 955623: sub edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 955626: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955627: sar edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 95562a: call 0x94ef00 */
  esp -= 4; W32(esp, 0x95562fu); SPILL(); f_94ef00(); if (g_unwind) return; RELOAD();
/* 95562f: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 955632: mov ebx, eax */
  ebx = eax;
/* 955634: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 955637: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 955638: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955639: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95563a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95563b: call 0x94eda0 */
  esp -= 4; W32(esp, 0x955640u); SPILL(); f_94eda0(); if (g_unwind) return; RELOAD();
/* 955640: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955643: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955645: jne 0x955671 */
  if (!zf) goto L_955671;
L_955647: /* 955647: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 95564a: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 95564d: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 955653: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 955654: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955655: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 955656: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955657: push 0xaf70c0 */
  { uint32_t v = 0xaf70c0u; esp -= 4; W32(esp, v); }
/* 95565c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95565d: call 0x953470 */
  esp -= 4; W32(esp, 0x955662u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 955662: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955665: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 955669: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
L_955671: /* 955671: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 955675: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 955677: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955679: jne 0x955605 */
  if (!zf) goto L_955605;
L_95567b: /* 95567b: cmp dword ptr [0xcf85cc], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 955682: jge 0x95574f */
  if ((sf == of)) goto L_95574f;
L_955688: /* 955688: cmp dword ptr [0xcf8438], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95568f: jg 0x95569e */
  if ((!zf && sf == of)) goto L_95569e;
L_955691: /* 955691: mov eax, dword ptr [0xcf8404] */
  eax = R32((uint32_t)(0xcf8404u));
/* 955696: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955698: je 0x95574f */
  if (zf) goto L_95574f;
L_95569e: /* 95569e: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 9556a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9556a3: je 0x95574f */
  if (zf) goto L_95574f;
L_9556a9: /* 9556a9: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 9556ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9556ad: call 0x94f340 */
  esp -= 4; W32(esp, 0x9556b2u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 9556b2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9556b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9556b7: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 9556bb: jle 0x95574f */
  if ((zf || sf != of)) goto L_95574f;
L_9556c1: /* 9556c1: mov dword ptr [esp + 0x30], 1 */
  W32((uint32_t)(esp + 0x30u), 0x1u);
/* 9556c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9556d0: /* 9556d0: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 9556d4: cmp ebx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9556d8: jge 0x955736 */
  if ((sf == of)) goto L_955736;
L_9556da: /* 9556da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_9556e0: /* 9556e0: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 9556e3: mov ebp, dword ptr [eax + ebx*4 + 4] */
  ebp = R32((uint32_t)(eax + ebx*4 + 0x4u));
/* 9556e7: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 9556ea: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 9556ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9556ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9556ee: call 0x94ecc0 */
  esp -= 4; W32(esp, 0x9556f3u); SPILL(); f_94ecc0(); if (g_unwind) return; RELOAD();
/* 9556f3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9556f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9556f8: je 0x95572d */
  if (zf) goto L_95572d;
L_9556fa: /* 9556fa: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 9556fd: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 955700: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 955706: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95570b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95570c: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 955712: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 955713: push 0xaf7084 */
  { uint32_t v = 0xaf7084u; esp -= 4; W32(esp, v); }
/* 955718: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955719: call 0x953470 */
  esp -= 4; W32(esp, 0x95571eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95571e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955721: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 955725: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
L_95572d: /* 95572d: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 955731: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 955732: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 955734: jl 0x9556e0 */
  if ((sf != of)) goto L_9556e0;
L_955736: /* 955736: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 95573a: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 95573d: mov edi, dword ptr [ecx + eax*4 + 4] */
  edi = R32((uint32_t)(ecx + eax*4 + 0x4u));
/* 955741: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 955745: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 955746: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 95574a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 95574b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95574d: jl 0x9556d0 */
  if ((sf != of)) goto L_9556d0;
L_95574f: /* 95574f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 955753: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955755: je 0x95577b */
  if (zf) goto L_95577b;
L_955757: /* 955757: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 95575b: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 95575f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 955761: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955762: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955763: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 955764: push 0xaf4120 */
  { uint32_t v = 0xaf4120u; esp -= 4; W32(esp, v); }
/* 955769: call 0x953700 */
  esp -= 4; W32(esp, 0x95576eu); SPILL(); f_953700(); if (g_unwind) return; RELOAD();
/* 95576e: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 955772: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955775: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
L_95577b: /* 95577b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95577c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95577d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95577e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95577f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955782: ret  */
  esp += 4; SPILL(); return;
}

void f_955790(void) {
  LOAD_REGS();
L_955790: /* 955790: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 955791: mov ebp, esp */
  ebp = esp;
/* 955793: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 955796: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 955799: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 95579e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95579f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 9557a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9557a3: xor edi, edi */
  edi = 0;
/* 9557a5: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9557a7: jne 0x9557af */
  if (!zf) goto L_9557af;
L_9557a9: /* 9557a9: mov dword ptr [0xcf78fc], edi */
  W32((uint32_t)(0xcf78fcu), edi);
L_9557af: /* 9557af: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9557b1: je 0x955854 */
  if (zf) goto L_955854;
L_9557b7: /* 9557b7: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 9557ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9557bc: je 0x955824 */
  if (zf) goto L_955824;
L_9557be: /* 9557be: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9557c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9557c3: je 0x95581d */
  if (zf) goto L_95581d;
L_9557c5: /* 9557c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9557c7: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 9557cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9557cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9557cd: call 0x95df60 */
  esp -= 4; W32(esp, 0x9557d2u); SPILL(); f_95df60(); if (g_unwind) return; RELOAD();
/* 9557d2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9557d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9557d7: jne 0x95581d */
  if (!zf) goto L_95581d;
L_9557d9: /* 9557d9: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9557dd: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 9557e0: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 9557e6: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9557e9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9557ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9557ed: push 0xaf77ec */
  { uint32_t v = 0xaf77ecu; esp -= 4; W32(esp, v); }
/* 9557f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9557f3: call 0x953470 */
  esp -= 4; W32(esp, 0x9557f8u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9557f8: mov eax, dword ptr [0xcf841c] */
  eax = R32((uint32_t)(0xcf841cu));
/* 9557fd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955800: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955802: jne 0x95581d */
  if (!zf) goto L_95581d;
L_955804: /* 955804: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 955806: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 955808: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95580a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95580b: push 0xaf4120 */
  { uint32_t v = 0xaf4120u; esp -= 4; W32(esp, v); }
/* 955810: call 0x953700 */
  esp -= 4; W32(esp, 0x955815u); SPILL(); f_953700(); if (g_unwind) return; RELOAD();
/* 955815: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955818: mov edi, 1 */
  edi = 0x1u;
L_95581d: /* 95581d: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 955820: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955822: jne 0x9557b7 */
  if (!zf) goto L_9557b7;
L_955824: /* 955824: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955826: je 0x955854 */
  if (zf) goto L_955854;
L_955828: /* 955828: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 95582e: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 955833: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 955836: fchs  */
  ST0 = -ST0;
/* 955838: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 95583b: push 0xaf7778 */
  { uint32_t v = 0xaf7778u; esp -= 4; W32(esp, v); }
/* 955840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955841: call 0x953470 */
  esp -= 4; W32(esp, 0x955846u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 955846: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 955848: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95584a: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 95584c: call 0x9535b0 */
  esp -= 4; W32(esp, 0x955851u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 955851: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_955854: /* 955854: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 955855: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 955856: mov esp, ebp */
  esp = ebp;
/* 955858: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 955859: ret  */
  esp += 4; SPILL(); return;
}

void f_955860(void) {
  LOAD_REGS();
L_955860: /* 955860: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 955863: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 955868: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 955869: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95586a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95586b: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 95586f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 955870: xor edi, edi */
  edi = 0;
/* 955872: xor ebx, ebx */
  ebx = 0;
/* 955874: xor ebp, ebp */
  ebp = 0;
/* 955876: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 955879: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 95587d: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 955881: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 955885: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 955889: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 95588d: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 955891: jl 0x9558ab */
  if ((sf != of)) goto L_9558ab;
L_955893: /* 955893: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 955896: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95589c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95589d: push 0xaf7b24 */
  { uint32_t v = 0xaf7b24u; esp -= 4; W32(esp, v); }
/* 9558a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9558a3: call 0x953470 */
  esp -= 4; W32(esp, 0x9558a8u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9558a8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9558ab: /* 9558ab: cmp esi, dword ptr [0xcf8b4c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b4cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9558b1: jne 0x9558bc */
  if (!zf) goto L_9558bc;
L_9558b3: /* 9558b3: mov eax, dword ptr [0xcf8478] */
  eax = R32((uint32_t)(0xcf8478u));
/* 9558b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9558ba: je 0x9558c1 */
  if (zf) goto L_9558c1;
L_9558bc: /* 9558bc: mov edi, 1 */
  edi = 0x1u;
L_9558c1: /* 9558c1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9558c3: je 0x95596b */
  if (zf) goto L_95596b;
L_9558c9: /* 9558c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9558d0: /* 9558d0: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 9558d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9558d5: je 0x955963 */
  if (zf) goto L_955963;
L_9558db: /* 9558db: cmp esi, dword ptr [0xcf8b5c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b5cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9558e1: jne 0x9558e8 */
  if (!zf) goto L_9558e8;
L_9558e3: /* 9558e3: mov ebp, 1 */
  ebp = 0x1u;
L_9558e8: /* 9558e8: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 9558eb: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9558ee: jne 0x955958 */
  if (!zf) goto L_955958;
L_9558f0: /* 9558f0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9558f2: jne 0x955947 */
  if (!zf) goto L_955947;
L_9558f4: /* 9558f4: cmp esi, dword ptr [0xcf8b54] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b54u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9558fa: jne 0x955903 */
  if (!zf) goto L_955903;
L_9558fc: /* 9558fc: mov edi, 1 */
  edi = 0x1u;
/* 955901: jmp 0x955947 */
  goto L_955947;
L_955903: /* 955903: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 955906: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955907: call 0x94f340 */
  esp -= 4; W32(esp, 0x95590cu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95590c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95590f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955911: je 0x955947 */
  if (zf) goto L_955947;
L_955913: /* 955913: mov eax, dword ptr [0xcf8a3c] */
  eax = R32((uint32_t)(0xcf8a3cu));
/* 955918: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95591a: je 0x955925 */
  if (zf) goto L_955925;
L_95591c: /* 95591c: mov eax, dword ptr [0xcf8404] */
  eax = R32((uint32_t)(0xcf8404u));
/* 955921: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955923: jne 0x955947 */
  if (!zf) goto L_955947;
L_955925: /* 955925: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 955928: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95592e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95592f: push 0xaf7ad0 */
  { uint32_t v = 0xaf7ad0u; esp -= 4; W32(esp, v); }
/* 955934: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 955935: call 0x953470 */
  esp -= 4; W32(esp, 0x95593au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95593a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95593c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95593d: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 95593f: call 0x9535b0 */
  esp -= 4; W32(esp, 0x955944u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 955944: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_955947: /* 955947: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 95594b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95594c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95594e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95594f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 955950: call 0x954ef0 */
  esp -= 4; W32(esp, 0x955955u); SPILL(); f_954ef0(); if (g_unwind) return; RELOAD();
/* 955955: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_955958: /* 955958: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 95595b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95595d: jne 0x9558d0 */
  if (!zf) goto L_9558d0;
L_955963: /* 955963: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 955967: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
L_95596b: /* 95596b: mov eax, dword ptr [0xcf8b5c] */
  eax = R32((uint32_t)(0xcf8b5cu));
/* 955970: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955972: je 0x9559ac */
  if (zf) goto L_9559ac;
L_955974: /* 955974: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955976: jne 0x9559ac */
  if (!zf) goto L_9559ac;
L_955978: /* 955978: cmp esi, dword ptr [0xcf8b4c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b4cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95597e: jne 0x9559bb */
  if (!zf) goto L_9559bb;
L_955980: /* 955980: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 955983: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 955989: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95598a: push 0xaf7a78 */
  { uint32_t v = 0xaf7a78u; esp -= 4; W32(esp, v); }
/* 95598f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 955990: call 0x953470 */
  esp -= 4; W32(esp, 0x955995u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 955995: call 0x958240 */
  esp -= 4; W32(esp, 0x95599au); SPILL(); f_958240(); if (g_unwind) return; RELOAD();
/* 95599a: mov edx, dword ptr [0xcf8b5c] */
  edx = R32((uint32_t)(0xcf8b5cu));
/* 9559a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9559a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9559a2: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 9559a4: call 0x9535b0 */
  esp -= 4; W32(esp, 0x9559a9u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 9559a9: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9559ac: /* 9559ac: cmp esi, dword ptr [0xcf8b4c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b4cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9559b2: jne 0x9559bb */
  if (!zf) goto L_9559bb;
L_9559b4: /* 9559b4: mov eax, dword ptr [0xcf8b74] */
  eax = R32((uint32_t)(0xcf8b74u));
/* 9559b9: jmp 0x9559d1 */
  goto L_9559d1;
L_9559bb: /* 9559bb: mov edi, dword ptr [0xcf8b58] */
  edi = R32((uint32_t)(0xcf8b58u));
/* 9559c1: mov ecx, dword ptr [0xcf8b7c] */
  ecx = R32((uint32_t)(0xcf8b7cu));
/* 9559c7: xor eax, eax */
  eax = 0;
/* 9559c9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9559cb: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 9559ce: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9559cf: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_9559d1: /* 9559d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9559d3: je 0x9559f6 */
  if (zf) goto L_9559f6;
L_9559d5: /* 9559d5: mov edx, 0xfeffffff */
  edx = 0xfeffffffu;
/* 9559da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_9559e0: /* 9559e0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9559e2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9559e4: je 0x9559f6 */
  if (zf) goto L_9559f6;
L_9559e6: /* 9559e6: and dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x14u), r);
  }
/* 9559e9: mov dword ptr [eax + 0x10], 0 */
  W32((uint32_t)(eax + 0x10u), 0x0u);
/* 9559f0: mov eax, ecx */
  eax = ecx;
/* 9559f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9559f4: jne 0x9559e0 */
  if (!zf) goto L_9559e0;
L_9559f6: /* 9559f6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9559f8: je 0x955acb */
  if (zf) goto L_955acb;
L_9559fe: /* 9559fe: mov ebp, esi */
  ebp = esi;
/* 955a00: mov ebx, 0x1000000 */
  ebx = 0x1000000u;
L_955a05: /* 955a05: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 955a08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955a0a: je 0x955ac3 */
  if (zf) goto L_955ac3;
L_955a10: /* 955a10: mov eax, dword ptr [ebp + 0x3c] */
  eax = R32((uint32_t)(ebp + 0x3cu));
/* 955a13: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 955a16: jne 0x955ab8 */
  if (!zf) goto L_955ab8;
L_955a1c: /* 955a1c: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 955a1f: je 0x955a28 */
  if (zf) goto L_955a28;
L_955a21: /* 955a21: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 955a26: jmp 0x955a34 */
  goto L_955a34;
L_955a28: /* 955a28: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 955a2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 955a2c: call 0x94f340 */
  esp -= 4; W32(esp, 0x955a31u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 955a31: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_955a34: /* 955a34: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 955a38: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 955a3a: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 955a3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955a3f: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 955a43: je 0x955ab8 */
  if (zf) goto L_955ab8;
L_955a45: /* 955a45: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 955a48: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955a4a: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 955a4d: je 0x955ab8 */
  if (zf) goto L_955ab8;
L_955a4f: /* 955a4f: nop  */
L_955a50: /* 955a50: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 955a53: mov al, byte ptr [esi + 0x17] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x17u))) & 0xffu);
/* 955a56: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 955a59: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 955a5a: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 955a5c: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 955a5f: jne 0x955ab2 */
  if (!zf) goto L_955ab2;
L_955a61: /* 955a61: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 955a64: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 955a68: or edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 955a6a: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 955a6d: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 955a70: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 955a71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955a72: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 955a76: call 0x95f210 */
  esp -= 4; W32(esp, 0x955a7bu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 955a7b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955a7e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 955a81: jne 0x955ab2 */
  if (!zf) goto L_955ab2;
L_955a83: /* 955a83: mov eax, dword ptr [0xcf85d8] */
  eax = R32((uint32_t)(0xcf85d8u));
/* 955a88: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 955a8b: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 955a8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955a8f: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 955a94: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 955a9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 955a9b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955a9c: push 0xaf7a20 */
  { uint32_t v = 0xaf7a20u; esp -= 4; W32(esp, v); }
/* 955aa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955aa2: call 0x953470 */
  esp -= 4; W32(esp, 0x955aa7u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 955aa7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955aaa: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
L_955ab2: /* 955ab2: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 955ab4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955ab6: jne 0x955a50 */
  if (!zf) goto L_955a50;
L_955ab8: /* 955ab8: mov ebp, dword ptr [ebp + 0x1c] */
  ebp = R32((uint32_t)(ebp + 0x1cu));
/* 955abb: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955abd: jne 0x955a05 */
  if (!zf) goto L_955a05;
L_955ac3: /* 955ac3: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 955ac7: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
L_955acb: /* 955acb: mov ecx, dword ptr [0xcf8bfc] */
  ecx = R32((uint32_t)(0xcf8bfcu));
/* 955ad1: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 955ad6: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 955ad8: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 955ada: mov dword ptr [0xcf8bfc], ecx */
  W32((uint32_t)(0xcf8bfcu), ecx);
/* 955ae0: jne 0x955c8d */
  if (!zf) goto L_955c8d;
L_955ae6: /* 955ae6: mov eax, dword ptr [0xcf8b80] */
  eax = R32((uint32_t)(0xcf8b80u));
/* 955aeb: sub eax, dword ptr [0xcf8b60] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b60u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 955af1: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 955af3: je 0x955b13 */
  if (zf) goto L_955b13;
L_955af5: /* 955af5: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 955afb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955afc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 955afd: push 0xaf79b8 */
  { uint32_t v = 0xaf79b8u; esp -= 4; W32(esp, v); }
/* 955b02: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 955b03: call 0x953470 */
  esp -= 4; W32(esp, 0x955b08u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 955b08: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955b0b: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
L_955b13: /* 955b13: mov ecx, dword ptr [0xcf8bfc] */
  ecx = R32((uint32_t)(0xcf8bfcu));
/* 955b19: mov eax, dword ptr [0xcf89f0] */
  eax = R32((uint32_t)(0xcf89f0u));
/* 955b1e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 955b1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955b21: mov dword ptr [0xcf8bfc], ecx */
  W32((uint32_t)(0xcf8bfcu), ecx);
/* 955b27: je 0x955bdd */
  if (zf) goto L_955bdd;
L_955b2d: /* 955b2d: mov esi, dword ptr [0xcf8b74] */
  esi = R32((uint32_t)(0xcf8b74u));
/* 955b33: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955b35: je 0x955b83 */
  if (zf) goto L_955b83;
L_955b37: /* 955b37: mov edi, 0x8000000 */
  edi = 0x8000000u;
/* 955b3c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_955b40: /* 955b40: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 955b43: je 0x955b83 */
  if (zf) goto L_955b83;
L_955b45: /* 955b45: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 955b48: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 955b4b: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 955b51: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955b52: push 0xaf79a4 */
  { uint32_t v = 0xaf79a4u; esp -= 4; W32(esp, v); }
/* 955b57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955b58: call 0x94e910 */
  esp -= 4; W32(esp, 0x955b5du); SPILL(); f_94e910(); if (g_unwind) return; RELOAD();
/* 955b5d: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 955b60: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955b63: test edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955b65: jne 0x955b7d */
  if (!zf) goto L_955b7d;
L_955b67: /* 955b67: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 955b6a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 955b6b: call 0x94f340 */
  esp -= 4; W32(esp, 0x955b70u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 955b70: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 955b74: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955b77: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 955b79: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
L_955b7d: /* 955b7d: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 955b7f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955b81: jne 0x955b40 */
  if (!zf) goto L_955b40;
L_955b83: /* 955b83: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 955b87: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955b89: je 0x955bb4 */
  if (zf) goto L_955bb4;
L_955b8b: /* 955b8b: nop  */
/* 955b8c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_955b90: /* 955b90: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 955b93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955b95: je 0x955bb4 */
  if (zf) goto L_955bb4;
L_955b97: /* 955b97: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 955b9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955b9b: call 0x94f340 */
  esp -= 4; W32(esp, 0x955ba0u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 955ba0: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 955ba4: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 955ba7: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 955ba9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955bac: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955bae: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 955bb2: jne 0x955b90 */
  if (!zf) goto L_955b90;
L_955bb4: /* 955bb4: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 955bb8: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 955bbc: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 955bbe: je 0x955bdd */
  if (zf) goto L_955bdd;
L_955bc0: /* 955bc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955bc1: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 955bc6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 955bc7: push 0xaf7938 */
  { uint32_t v = 0xaf7938u; esp -= 4; W32(esp, v); }
/* 955bcc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955bcd: call 0x953470 */
  esp -= 4; W32(esp, 0x955bd2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 955bd2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955bd5: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
L_955bdd: /* 955bdd: mov ecx, dword ptr [0xcf8c18] */
  ecx = R32((uint32_t)(0xcf8c18u));
/* 955be3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 955be4: call 0x94f340 */
  esp -= 4; W32(esp, 0x955be9u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 955be9: mov edx, dword ptr [0xcf8b84] */
  edx = R32((uint32_t)(0xcf8b84u));
/* 955bef: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 955bf3: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 955bf5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955bf8: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 955bfa: je 0x955c2d */
  if (zf) goto L_955c2d;
L_955bfc: /* 955bfc: mov eax, dword ptr [0xcf8c18] */
  eax = R32((uint32_t)(0xcf8c18u));
/* 955c01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955c02: call 0x94f340 */
  esp -= 4; W32(esp, 0x955c07u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 955c07: mov ecx, dword ptr [0xcf8b84] */
  ecx = R32((uint32_t)(0xcf8b84u));
/* 955c0d: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 955c13: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 955c15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 955c16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 955c17: push 0xaf78d0 */
  { uint32_t v = 0xaf78d0u; esp -= 4; W32(esp, v); }
/* 955c1c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955c1d: call 0x953470 */
  esp -= 4; W32(esp, 0x955c22u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 955c22: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955c25: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
L_955c2d: /* 955c2d: cmp dword ptr [0xcf85cc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 955c34: jne 0x955c57 */
  if (!zf) goto L_955c57;
L_955c36: /* 955c36: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 955c38: je 0x955c8d */
  if (zf) goto L_955c8d;
L_955c3a: /* 955c3a: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 955c3f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 955c40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 955c41: push 0xaf7888 */
  { uint32_t v = 0xaf7888u; esp -= 4; W32(esp, v); }
/* 955c46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955c47: call 0x953470 */
  esp -= 4; W32(esp, 0x955c4cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 955c4c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955c4f: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
L_955c57: /* 955c57: cmp dword ptr [0xcf85cc], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 955c5e: jne 0x955c8d */
  if (!zf) goto L_955c8d;
L_955c60: /* 955c60: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 955c64: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 955c65: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 955c67: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 955c69: mov ecx, esi */
  ecx = esi;
/* 955c6b: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 955c6d: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 955c6f: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 955c72: je 0x955c8d */
  if (zf) goto L_955c8d;
L_955c74: /* 955c74: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 955c7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955c7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 955c7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 955c7d: push 0xaf7830 */
  { uint32_t v = 0xaf7830u; esp -= 4; W32(esp, v); }
/* 955c82: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955c83: call 0x953470 */
  esp -= 4; W32(esp, 0x955c88u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 955c88: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955c8b: jmp 0x955c95 */
  goto L_955c95;
L_955c8d: /* 955c8d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 955c91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955c93: je 0x955ca3 */
  if (zf) goto L_955ca3;
L_955c95: /* 955c95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 955c97: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 955c99: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 955c9b: call 0x9535b0 */
  esp -= 4; W32(esp, 0x955ca0u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 955ca0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_955ca3: /* 955ca3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 955ca4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 955ca5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 955ca6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 955ca7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955caa: ret  */
  esp += 4; SPILL(); return;
}

void f_955cb0(void) {
  LOAD_REGS();
L_955cb0: /* 955cb0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 955cb1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 955cb2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 955cb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 955cb4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 955cb5: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 955cb9: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 955cbc: xor ebp, ebp */
  ebp = 0;
/* 955cbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955cbf: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 955cc3: call 0x95f210 */
  esp -= 4; W32(esp, 0x955cc8u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 955cc8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955ccb: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 955cce: jne 0x955ced */
  if (!zf) goto L_955ced;
L_955cd0: /* 955cd0: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 955cd3: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 955cd9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 955cda: push 0xaf7bdc */
  { uint32_t v = 0xaf7bdcu; esp -= 4; W32(esp, v); }
/* 955cdf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955ce0: call 0x953470 */
  esp -= 4; W32(esp, 0x955ce5u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 955ce5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955ce8: mov ebp, 1 */
  ebp = 0x1u;
L_955ced: /* 955ced: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 955cf0: mov edx, dword ptr [0xcf8b98] */
  edx = R32((uint32_t)(0xcf8b98u));
/* 955cf6: mov eax, ecx */
  eax = ecx;
/* 955cf8: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 955cfd: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 955cff: jb 0x955d17 */
  if (cf) goto L_955d17;
L_955d01: /* 955d01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955d02: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 955d07: push 0xaf7b9c */
  { uint32_t v = 0xaf7b9cu; esp -= 4; W32(esp, v); }
/* 955d0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955d0d: call 0x953470 */
  esp -= 4; W32(esp, 0x955d12u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 955d12: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955d15: jmp 0x955d90 */
  goto L_955d90;
L_955d17: /* 955d17: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955d19: jne 0x955d90 */
  if (!zf) goto L_955d90;
L_955d1b: /* 955d1b: test ecx, 0x8000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955d21: jne 0x955db2 */
  if (!zf) goto L_955db2;
L_955d27: /* 955d27: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 955d2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 955d2b: call 0x94f340 */
  esp -= 4; W32(esp, 0x955d30u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 955d30: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955d33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955d35: je 0x955db2 */
  if (zf) goto L_955db2;
L_955d37: /* 955d37: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 955d3a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955d3c: je 0x955db2 */
  if (zf) goto L_955db2;
L_955d3e: /* 955d3e: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 955d41: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955d43: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 955d46: je 0x955db2 */
  if (zf) goto L_955db2;
L_955d48: /* 955d48: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 955d4b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 955d4c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955d4d: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 955d50: call 0x94eed0 */
  esp -= 4; W32(esp, 0x955d55u); SPILL(); f_94eed0(); if (g_unwind) return; RELOAD();
/* 955d55: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955d58: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955d5a: jne 0x955d86 */
  if (!zf) goto L_955d86;
L_955d5c: /* 955d5c: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 955d5f: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 955d62: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 955d68: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 955d6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955d6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 955d6f: push 0xaf7b50 */
  { uint32_t v = 0xaf7b50u; esp -= 4; W32(esp, v); }
/* 955d74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955d75: call 0x953470 */
  esp -= 4; W32(esp, 0x955d7au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 955d7a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955d7d: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 955d81: mov ebp, 1 */
  ebp = 0x1u;
L_955d86: /* 955d86: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 955d88: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955d8a: jne 0x955d48 */
  if (!zf) goto L_955d48;
L_955d8c: /* 955d8c: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955d8e: je 0x955db2 */
  if (zf) goto L_955db2;
L_955d90: /* 955d90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 955d91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 955d93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 955d95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 955d97: push 0xaf4120 */
  { uint32_t v = 0xaf4120u; esp -= 4; W32(esp, v); }
/* 955d9c: call 0x953700 */
  esp -= 4; W32(esp, 0x955da1u); SPILL(); f_953700(); if (g_unwind) return; RELOAD();
/* 955da1: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 955da5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 955da7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955da8: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 955daa: call 0x9535b0 */
  esp -= 4; W32(esp, 0x955dafu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 955daf: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_955db2: /* 955db2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 955db3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 955db4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 955db5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 955db6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 955db7: ret  */
  esp += 4; SPILL(); return;
}

void f_955dc0(void) {
  LOAD_REGS();
L_955dc0: /* 955dc0: mov eax, dword ptr [0xcf8ba8] */
  eax = R32((uint32_t)(0xcf8ba8u));
/* 955dc5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 955dc6: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 955dca: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 955dcc: je 0x955e24 */
  if (zf) goto L_955e24;
L_955dce: /* 955dce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 955dcf: mov esi, dword ptr [0xcf8b4c] */
  esi = R32((uint32_t)(0xcf8b4cu));
/* 955dd5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 955dd6: xor edi, edi */
  edi = 0;
/* 955dd8: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 955dda: je 0x955e1c */
  if (zf) goto L_955e1c;
L_955ddc: /* 955ddc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_955de0: /* 955de0: cmp dword ptr [esi + 0x1c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 955de3: je 0x955e1c */
  if (zf) goto L_955e1c;
L_955de5: /* 955de5: cmp dword ptr [0xcf8ba8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8ba8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 955dec: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 955def: jne 0x955dfe */
  if (!zf) goto L_955dfe;
L_955df1: /* 955df1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 955df3: je 0x955e15 */
  if (zf) goto L_955e15;
L_955df5: /* 955df5: mov ecx, dword ptr [0xcf8b44] */
  ecx = R32((uint32_t)(0xcf8b44u));
/* 955dfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 955dfc: jmp 0x955e09 */
  goto L_955e09;
L_955dfe: /* 955dfe: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 955e00: je 0x955e15 */
  if (zf) goto L_955e15;
L_955e02: /* 955e02: mov edx, dword ptr [0xcf8b40] */
  edx = R32((uint32_t)(0xcf8b40u));
/* 955e08: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_955e09: /* 955e09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955e0a: call 0x953a60 */
  esp -= 4; W32(esp, 0x955e0fu); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 955e0f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955e12: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
L_955e15: /* 955e15: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 955e18: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 955e1a: jne 0x955de0 */
  if (!zf) goto L_955de0;
L_955e1c: /* 955e1c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 955e1d: mov dword ptr [0xcf8ba8], ebx */
  W32((uint32_t)(0xcf8ba8u), ebx);
/* 955e23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_955e24: /* 955e24: cmp dword ptr [0xcf8438], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 955e2b: jl 0x955e41 */
  if ((sf != of)) goto L_955e41;
L_955e2d: /* 955e2d: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 955e32: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 955e33: push 0xaf7c18 */
  { uint32_t v = 0xaf7c18u; esp -= 4; W32(esp, v); }
/* 955e38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955e39: call 0x953470 */
  esp -= 4; W32(esp, 0x955e3eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 955e3e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_955e41: /* 955e41: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 955e42: ret  */
  esp += 4; SPILL(); return;
}

void f_955e50(void) {
  LOAD_REGS();
L_955e50: /* 955e50: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 955e53: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 955e58: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 955e59: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 955e5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 955e5b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 955e5c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 955e5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955e5e: mov dword ptr [esp + 0x14], 1 */
  W32((uint32_t)(esp + 0x14u), 0x1u);
/* 955e66: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x955e6bu); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 955e6b: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 955e6f: call 0x95f070 */
  esp -= 4; W32(esp, 0x955e74u); SPILL(); f_95f070(); if (g_unwind) return; RELOAD();
/* 955e74: xor edi, edi */
  edi = 0;
/* 955e76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 955e77: mov dword ptr [0xcf8b50], eax */
  W32((uint32_t)(0xcf8b50u), eax);
/* 955e7c: mov dword ptr [0xcf8b58], eax */
  W32((uint32_t)(0xcf8b58u), eax);
/* 955e81: mov dword ptr [0xcf8b4c], eax */
  W32((uint32_t)(0xcf8b4cu), eax);
/* 955e86: mov dword ptr [0xcf8b84], edi */
  W32((uint32_t)(0xcf8b84u), edi);
/* 955e8c: mov dword ptr [0xcf8b80], edi */
  W32((uint32_t)(0xcf8b80u), edi);
/* 955e92: call 0x957c20 */
  esp -= 4; W32(esp, 0x955e97u); SPILL(); f_957c20(); if (g_unwind) return; RELOAD();
/* 955e97: mov dword ptr [0xcf8b78], eax */
  W32((uint32_t)(0xcf8b78u), eax);
/* 955e9c: mov dword ptr [0xcf8b7c], eax */
  W32((uint32_t)(0xcf8b7cu), eax);
/* 955ea1: mov dword ptr [0xcf8b74], eax */
  W32((uint32_t)(0xcf8b74u), eax);
/* 955ea6: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 955eaa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955ead: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 955eaf: je 0x955f43 */
  if (zf) goto L_955f43;
L_955eb5: /* 955eb5: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 955eb8: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 955ebb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955ebc: call 0x94f340 */
  esp -= 4; W32(esp, 0x955ec1u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 955ec1: mov ebx, eax */
  ebx = eax;
/* 955ec3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955ec6: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 955ec8: jle 0x955f43 */
  if ((zf || sf != of)) goto L_955f43;
L_955eca: /* 955eca: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 955ece: mov edi, edi */
  edi = edi;
L_955ed0: /* 955ed0: call 0x95f070 */
  esp -= 4; W32(esp, 0x955ed5u); SPILL(); f_95f070(); if (g_unwind) return; RELOAD();
/* 955ed5: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 955ed9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 955edb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 955edc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 955edd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 955ede: mov esi, eax */
  esi = eax;
/* 955ee0: call 0x94f0c0 */
  esp -= 4; W32(esp, 0x955ee5u); SPILL(); f_94f0c0(); if (g_unwind) return; RELOAD();
/* 955ee5: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 955ee9: shl edx, 0xb */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 955eec: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 955eef: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 955ef2: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 955ef4: and edx, 0x800 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 955efa: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 955efc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 955efd: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 955f00: call 0x95dbf0 */
  esp -= 4; W32(esp, 0x955f05u); SPILL(); f_95dbf0(); if (g_unwind) return; RELOAD();
/* 955f05: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 955f08: or ecx, 0x200 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 955f0e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 955f0f: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 955f12: call 0x95dc70 */
  esp -= 4; W32(esp, 0x955f17u); SPILL(); f_95dc70(); if (g_unwind) return; RELOAD();
/* 955f17: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 955f1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 955f1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955f1d: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x955f22u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 955f22: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 955f26: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 955f2a: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 955f2d: xor esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 955f30: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955f33: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 955f36: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 955f37: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 955f39: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 955f3d: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 955f41: jl 0x955ed0 */
  if ((sf != of)) goto L_955ed0;
L_955f43: /* 955f43: mov eax, dword ptr [0xcf8b58] */
  eax = R32((uint32_t)(0xcf8b58u));
/* 955f48: mov esi, eax */
  esi = eax;
/* 955f4a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955f4c: je 0x955f99 */
  if (zf) goto L_955f99;
L_955f4e: /* 955f4e: jmp 0x955f55 */
  goto L_955f55;
L_955f50: /* 955f50: mov eax, dword ptr [0xcf8b58] */
  eax = R32((uint32_t)(0xcf8b58u));
L_955f55: /* 955f55: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 955f58: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955f5a: je 0x955f99 */
  if (zf) goto L_955f99;
L_955f5c: /* 955f5c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955f5e: je 0x955f80 */
  if (zf) goto L_955f80;
L_955f60: /* 955f60: mov ecx, 4 */
  ecx = 0x4u;
L_955f65: /* 955f65: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 955f68: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955f6a: je 0x955f80 */
  if (zf) goto L_955f80;
L_955f6c: /* 955f6c: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 955f6e: je 0x955f79 */
  if (zf) goto L_955f79;
L_955f70: /* 955f70: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 955f73: mov dword ptr [ecx + edx], eax */
  W32((uint32_t)(ecx + edx), eax);
/* 955f76: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_955f79: /* 955f79: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 955f7c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955f7e: jne 0x955f65 */
  if (!zf) goto L_955f65;
L_955f80: /* 955f80: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 955f85: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 955f88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955f89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 955f8a: call 0x94f570 */
  esp -= 4; W32(esp, 0x955f8fu); SPILL(); f_94f570(); if (g_unwind) return; RELOAD();
/* 955f8f: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 955f92: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955f95: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 955f97: jne 0x955f50 */
  if (!zf) goto L_955f50;
L_955f99: /* 955f99: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 955f9d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 955f9e: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x955fa3u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 955fa3: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 955fa8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955fab: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 955fae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 955faf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 955fb0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 955fb1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 955fb2: jl 0x955fc7 */
  if ((sf != of)) goto L_955fc7;
L_955fb4: /* 955fb4: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 955fb9: push 0xaf7c48 */
  { uint32_t v = 0xaf7c48u; esp -= 4; W32(esp, v); }
/* 955fbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955fbf: call 0x953470 */
  esp -= 4; W32(esp, 0x955fc4u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 955fc4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_955fc7: /* 955fc7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 955fca: ret  */
  esp += 4; SPILL(); return;
}

void f_955fd0(void) {
  LOAD_REGS();
L_955fd0: /* 955fd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 955fd1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 955fd5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 955fd8: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 955fdb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 955fdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 955fdd: call 0x94ea40 */
  esp -= 4; W32(esp, 0x955fe2u); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 955fe2: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 955fe5: mov eax, dword ptr [edx + 0x24] */
  eax = R32((uint32_t)(edx + 0x24u));
/* 955fe8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 955fe9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 955fea: call 0x94ea40 */
  esp -= 4; W32(esp, 0x955fefu); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 955fef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 955ff0: call 0x94ee00 */
  esp -= 4; W32(esp, 0x955ff5u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 955ff5: mov eax, dword ptr [0xcf2f64] */
  eax = R32((uint32_t)(0xcf2f64u));
/* 955ffa: mov ecx, dword ptr [0xcf2f38] */
  ecx = R32((uint32_t)(0xcf2f38u));
/* 956000: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956003: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 956004: mov dword ptr [0xcf2f64], eax */
  W32((uint32_t)(0xcf2f64u), eax);
/* 956009: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 95600c: mov eax, dword ptr [0xcf2f30] */
  eax = R32((uint32_t)(0xcf2f30u));
/* 956011: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 956014: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 956017: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 956019: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 95601b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95601c: ret  */
  esp += 4; SPILL(); return;
}

void f_956020(void) {
  LOAD_REGS();
L_956020: /* 956020: mov eax, dword ptr [0xcf8b70] */
  eax = R32((uint32_t)(0xcf8b70u));
/* 956025: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956026: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 95602a: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95602c: jne 0x956038 */
  if (!zf) goto L_956038;
L_95602e: /* 95602e: mov dword ptr [0xcf8b70], 0 */
  W32((uint32_t)(0xcf8b70u), 0x0u);
L_956038: /* 956038: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956039: call 0x95f300 */
  esp -= 4; W32(esp, 0x95603eu); SPILL(); f_95f300(); if (g_unwind) return; RELOAD();
/* 95603e: lea eax, [esi + 0xc] */
  eax = (uint32_t)(esi + 0xcu);
/* 956041: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956042: call 0x94ee00 */
  esp -= 4; W32(esp, 0x956047u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 956047: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 956049: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95604a: call 0x953a60 */
  esp -= 4; W32(esp, 0x95604fu); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 95604f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956052: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 956053: ret  */
  esp += 4; SPILL(); return;
}

void f_956060(void) {
  LOAD_REGS();
L_956060: /* 956060: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 956063: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 956064: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 956065: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956066: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 95606a: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 95606d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95606e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95606f: xor ebp, ebp */
  ebp = 0;
/* 956071: call 0x94f340 */
  esp -= 4; W32(esp, 0x956076u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 956076: mov ebx, eax */
  ebx = eax;
/* 956078: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 956079: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x95607eu); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 95607e: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 956082: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 956085: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956088: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95608b: je 0x956115 */
  if (zf) goto L_956115;
L_956091: /* 956091: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 956094: je 0x9560b8 */
  if (zf) goto L_9560b8;
L_956096: /* 956096: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 956099: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95609f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9560a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9560a1: push 0xaf7cd0 */
  { uint32_t v = 0xaf7cd0u; esp -= 4; W32(esp, v); }
/* 9560a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9560a7: call 0x953470 */
  esp -= 4; W32(esp, 0x9560acu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9560ac: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9560ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9560ae: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 9560b0: call 0x9535b0 */
  esp -= 4; W32(esp, 0x9560b5u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 9560b5: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9560b8: /* 9560b8: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 9560bb: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 9560be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9560bf: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 9560c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9560c4: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x9560c9u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 9560c9: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 9560cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9560cf: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9560d2: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 9560d5: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 9560d8: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 9560dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9560dd: je 0x9560ea */
  if (zf) goto L_9560ea;
L_9560df: /* 9560df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9560e0: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x9560e5u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 9560e5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9560e8: jmp 0x9560f5 */
  goto L_9560f5;
L_9560ea: /* 9560ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9560ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9560ed: call 0x94e6d0 */
  esp -= 4; W32(esp, 0x9560f2u); SPILL(); f_94e6d0(); if (g_unwind) return; RELOAD();
/* 9560f2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9560f5: /* 9560f5: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 9560f8: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 9560fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9560fc: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 956100: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 956101: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x956106u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 956106: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 95610a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95610d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95610e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95610f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 956110: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 956111: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956114: ret  */
  esp += 4; SPILL(); return;
L_956115: /* 956115: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 956118: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 95611b: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 95611f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 956120: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956121: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956122: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 956126: call 0x957ce0 */
  esp -= 4; W32(esp, 0x95612bu); SPILL(); f_957ce0(); if (g_unwind) return; RELOAD();
/* 95612b: mov edi, eax */
  edi = eax;
/* 95612d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956130: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956132: je 0x956170 */
  if (zf) goto L_956170;
L_956134: /* 956134: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 956138: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 956139: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 95613d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95613e: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x956143u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 956143: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956146: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 956147: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 956149: jg 0x956168 */
  if ((!zf && sf == of)) goto L_956168;
L_95614b: /* 95614b: cmp edi, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95614f: je 0x956168 */
  if (zf) goto L_956168;
L_956151: /* 956151: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 956155: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 956156: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956157: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 956158: call 0x957ce0 */
  esp -= 4; W32(esp, 0x95615du); SPILL(); f_957ce0(); if (g_unwind) return; RELOAD();
/* 95615d: mov edi, eax */
  edi = eax;
/* 95615f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956162: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956164: jne 0x956134 */
  if (!zf) goto L_956134;
L_956166: /* 956166: jmp 0x956170 */
  goto L_956170;
L_956168: /* 956168: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95616a: je 0x956170 */
  if (zf) goto L_956170;
L_95616c: /* 95616c: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95616e: je 0x956191 */
  if (zf) goto L_956191;
L_956170: /* 956170: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 956173: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 956178: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 956179: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95617a: push 0xaf7c70 */
  { uint32_t v = 0xaf7c70u; esp -= 4; W32(esp, v); }
/* 95617f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956180: call 0x953470 */
  esp -= 4; W32(esp, 0x956185u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 956185: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 956186: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956187: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 956189: call 0x9535b0 */
  esp -= 4; W32(esp, 0x95618eu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 95618e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_956191: /* 956191: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 956195: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 956196: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 956197: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 956198: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 956199: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95619c: ret  */
  esp += 4; SPILL(); return;
}

void f_9561a0(void) {
  LOAD_REGS();
L_9561a0: /* 9561a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9561a1: mov ecx, dword ptr [0xcf8b4c] */
  ecx = R32((uint32_t)(0xcf8b4cu));
/* 9561a7: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 9561ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9561ac: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 9561b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9561b1: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 9561b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9561b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9561b7: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 9561bb: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 9561bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9561c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9561c1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9561c2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9561c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9561c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9561c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9561c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9561c8: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 9561d0: call 0x96fc50 */
  esp -= 4; W32(esp, 0x9561d5u); SPILL(); f_96fc50(); if (g_unwind) return; RELOAD();
/* 9561d5: mov esi, eax */
  esi = eax;
/* 9561d7: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9561da: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9561dc: jne 0x9561fa */
  if (!zf) goto L_9561fa;
L_9561de: /* 9561de: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9561e3: push 0xaf7d60 */
  { uint32_t v = 0xaf7d60u; esp -= 4; W32(esp, v); }
/* 9561e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9561e9: call 0x953470 */
  esp -= 4; W32(esp, 0x9561eeu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9561ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9561ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9561f0: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 9561f2: call 0x9535b0 */
  esp -= 4; W32(esp, 0x9561f7u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 9561f7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9561fa: /* 9561fa: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 956200: fchs  */
  ST0 = -ST0;
/* 956202: fcomp dword ptr [ebp] */
  fpu_com(ST0, F32((uint32_t)(ebp)));
  FPOP();
/* 956205: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 956207: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95620a: jne 0x956269 */
  if (!zf) goto L_956269;
L_95620c: /* 95620c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 956210: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 956214: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 956215: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 956216: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 956217: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 956218: call 0x9562b0 */
  esp -= 4; W32(esp, 0x95621du); SPILL(); f_9562b0(); if (g_unwind) return; RELOAD();
/* 95621d: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 956221: mov esi, eax */
  esi = eax;
/* 956223: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 956227: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 956229: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95622c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95622e: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 956232: je 0x95623a */
  if (zf) goto L_95623a;
L_956234: /* 956234: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956236: jne 0x956240 */
  if (!zf) goto L_956240;
L_956238: /* 956238: jmp 0x956269 */
  goto L_956269;
L_95623a: /* 95623a: test byte ptr [esi + 0x3e], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3eu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95623e: je 0x956269 */
  if (zf) goto L_956269;
L_956240: /* 956240: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 956244: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 956248: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 956249: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95624a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95624b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95624c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95624e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95624f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956250: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 956251: call 0x96fc50 */
  esp -= 4; W32(esp, 0x956256u); SPILL(); f_96fc50(); if (g_unwind) return; RELOAD();
/* 956256: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 95625a: mov esi, eax */
  esi = eax;
/* 95625c: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 956260: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956263: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 956265: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
L_956269: /* 956269: cmp dword ptr [0xcf8438], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 956270: jl 0x95629b */
  if ((sf != of)) goto L_95629b;
L_956272: /* 956272: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 956276: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 956279: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 95627b: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 95627e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95627f: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 956285: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 956286: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 956289: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 95628c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95628d: push 0xaf7d24 */
  { uint32_t v = 0xaf7d24u; esp -= 4; W32(esp, v); }
/* 956292: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 956293: call 0x953470 */
  esp -= 4; W32(esp, 0x956298u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 956298: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95629b: /* 95629b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95629c: mov eax, esi */
  eax = esi;
/* 95629e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95629f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9562a0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9562a1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9562a2: ret  */
  esp += 4; SPILL(); return;
}

void f_9562b0(void) {
  LOAD_REGS();
L_9562b0: /* 9562b0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 9562b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9562b5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9562b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9562b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9562b8: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 9562bc: xor ebp, ebp */
  ebp = 0;
/* 9562be: mov dword ptr [edi], 0x800000 */
  W32((uint32_t)(edi), 0x800000u);
/* 9562c4: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 9562c6: mov esi, dword ptr [0xcf8b4c] */
  esi = R32((uint32_t)(0xcf8b4cu));
/* 9562cc: xor ebx, ebx */
  ebx = 0;
/* 9562ce: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9562d0: je 0x956334 */
  if (zf) goto L_956334;
L_9562d2: /* 9562d2: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 9562d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9562d7: je 0x956334 */
  if (zf) goto L_956334;
L_9562d9: /* 9562d9: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 9562dc: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 9562de: js 0x956321 */
  if (sf) goto L_956321;
L_9562e0: /* 9562e0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9562e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9562e5: je 0x956321 */
  if (zf) goto L_956321;
L_9562e7: /* 9562e7: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9562eb: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 9562ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9562f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9562f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9562f2: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 9562f3: call 0x96fa90 */
  esp -= 4; W32(esp, 0x9562f8u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 9562f8: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9562fc: fcomp dword ptr [edi] */
  fpu_com(ST0, F32((uint32_t)(edi)));
  FPOP();
/* 9562fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956301: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 956303: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 956306: jne 0x956321 */
  if (!zf) goto L_956321;
L_956308: /* 956308: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 95630c: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 956310: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 956312: fcomp dword ptr [0xcf83ec] */
  fpu_com(ST0, F32((uint32_t)(0xcf83ecu)));
  FPOP();
/* 956318: mov ebx, esi */
  ebx = esi;
/* 95631a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95631c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95631f: je 0x95632a */
  if (zf) goto L_95632a;
L_956321: /* 956321: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 956324: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956326: jne 0x9562d2 */
  if (!zf) goto L_9562d2;
L_956328: /* 956328: jmp 0x956334 */
  goto L_956334;
L_95632a: /* 95632a: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 95632e: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
L_956334: /* 956334: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 956338: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 95633a: cmp dword ptr [0xcf8438], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 956341: jl 0x956373 */
  if ((sf != of)) goto L_956373;
L_956343: /* 956343: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956345: je 0x95634c */
  if (zf) goto L_95634c;
L_956347: /* 956347: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* 95634a: jmp 0x95634f */
  goto L_95634f;
L_95634c: /* 95634c: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_95634f: /* 95634f: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 956353: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 956355: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 956357: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 956358: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 956359: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95635c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 95635f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956360: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 956365: push 0xaf7d9c */
  { uint32_t v = 0xaf7d9cu; esp -= 4; W32(esp, v); }
/* 95636a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95636b: call 0x953470 */
  esp -= 4; W32(esp, 0x956370u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 956370: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_956373: /* 956373: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 956374: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 956375: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 956376: mov eax, ebx */
  eax = ebx;
/* 956378: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 956379: ret  */
  esp += 4; SPILL(); return;
}

void f_956380(void) {
  LOAD_REGS();
L_956380: /* 956380: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 956383: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 956384: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 956385: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956386: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 95638a: xor ebp, ebp */
  ebp = 0;
/* 95638c: xor ebx, ebx */
  ebx = 0;
/* 95638e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956390: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 956391: mov dword ptr [esp + 0x10], 0x7f7fffff */
  W32((uint32_t)(esp + 0x10u), 0x7f7fffffu);
/* 956399: je 0x9563b7 */
  if (zf) goto L_9563b7;
L_95639b: /* 95639b: mov eax, esi */
  eax = esi;
/* 95639d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_9563a0: /* 9563a0: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 9563a3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9563a5: je 0x9563b7 */
  if (zf) goto L_9563b7;
L_9563a7: /* 9563a7: test dword ptr [eax + 0x3c], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9563ae: je 0x9563b1 */
  if (zf) goto L_9563b1;
L_9563b0: /* 9563b0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_9563b1: /* 9563b1: mov eax, ecx */
  eax = ecx;
/* 9563b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9563b5: jne 0x9563a0 */
  if (!zf) goto L_9563a0;
L_9563b7: /* 9563b7: mov eax, dword ptr [0xcf842c] */
  eax = R32((uint32_t)(0xcf842cu));
/* 9563bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9563be: jle 0x9563fd */
  if ((zf || sf != of)) goto L_9563fd;
L_9563c0: /* 9563c0: mov eax, dword ptr [0xcf845c] */
  eax = R32((uint32_t)(0xcf845cu));
/* 9563c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9563c7: jne 0x9563fd */
  if (!zf) goto L_9563fd;
L_9563c9: /* 9563c9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9563cb: je 0x9563fd */
  if (zf) goto L_9563fd;
L_9563cd: /* 9563cd: mov edi, esi */
  edi = esi;
/* 9563cf: nop  */
L_9563d0: /* 9563d0: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 9563d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9563d5: je 0x9563fd */
  if (zf) goto L_9563fd;
L_9563d7: /* 9563d7: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 9563da: mov ecx, dword ptr [0xcf8430] */
  ecx = R32((uint32_t)(0xcf8430u));
/* 9563e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9563e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9563e2: call 0x9574c0 */
  esp -= 4; W32(esp, 0x9563e7u); SPILL(); f_9574c0(); if (g_unwind) return; RELOAD();
/* 9563e7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9563ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9563ec: jne 0x9563f6 */
  if (!zf) goto L_9563f6;
L_9563ee: /* 9563ee: and dword ptr [edi + 0x3c], 0xfffbffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(0xfffbffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(edi + 0x3cu), r);
  }
/* 9563f5: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
L_9563f6: /* 9563f6: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 9563f9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9563fb: jne 0x9563d0 */
  if (!zf) goto L_9563d0;
L_9563fd: /* 9563fd: mov eax, dword ptr [0xcf8420] */
  eax = R32((uint32_t)(0xcf8420u));
/* 956402: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956404: je 0x956482 */
  if (zf) goto L_956482;
L_956406: /* 956406: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956408: je 0x956482 */
  if (zf) goto L_956482;
L_95640a: /* 95640a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95640c: je 0x956482 */
  if (zf) goto L_956482;
L_95640e: /* 95640e: mov edi, esi */
  edi = esi;
L_956410: /* 956410: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 956413: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956415: je 0x956482 */
  if (zf) goto L_956482;
L_956417: /* 956417: test dword ptr [edi + 0x3c], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95641e: je 0x95647b */
  if (zf) goto L_95647b;
L_956420: /* 956420: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 956423: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956425: je 0x95647b */
  if (zf) goto L_95647b;
L_956427: /* 956427: mov ecx, dword ptr [0xcf7888] */
  ecx = R32((uint32_t)(0xcf7888u));
/* 95642d: mov eax, dword ptr [0xcf8424] */
  eax = R32((uint32_t)(0xcf8424u));
/* 956432: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 956436: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 956437: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 956438: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 956439: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95643a: mov dword ptr [0xcf7888], ecx */
  W32((uint32_t)(0xcf7888u), ecx);
/* 956440: call 0x96fa90 */
  esp -= 4; W32(esp, 0x956445u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 956445: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 956449: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 95644f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956452: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 956454: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 956457: jne 0x956460 */
  if (!zf) goto L_956460;
L_956459: /* 956459: mov eax, 1 */
  eax = 0x1u;
/* 95645e: jmp 0x956462 */
  goto L_956462;
L_956460: /* 956460: xor eax, eax */
  eax = 0;
L_956462: /* 956462: mov edx, dword ptr [0xcf8420] */
  edx = R32((uint32_t)(0xcf8420u));
/* 956468: xor ecx, ecx */
  ecx = 0;
/* 95646a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 95646c: setg cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 95646f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  zf = (r) == 0;
  ecx = r;
  }
/* 956471: je 0x95647b */
  if (zf) goto L_95647b;
L_956473: /* 956473: and dword ptr [edi + 0x3c], 0xfffbffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(0xfffbffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(edi + 0x3cu), r);
  }
/* 95647a: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
L_95647b: /* 95647b: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 95647e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956480: jne 0x956410 */
  if (!zf) goto L_956410;
L_956482: /* 956482: mov eax, dword ptr [0xcf8428] */
  eax = R32((uint32_t)(0xcf8428u));
/* 956487: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956489: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 95648d: je 0x9565ca */
  if (zf) goto L_9565ca;
L_956493: /* 956493: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956495: mov eax, dword ptr [0xcf8bb0] */
  eax = R32((uint32_t)(0xcf8bb0u));
/* 95649a: jne 0x9564a8 */
  if (!zf) goto L_9564a8;
L_95649c: /* 95649c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95649e: jne 0x9564a8 */
  if (!zf) goto L_9564a8;
L_9564a0: /* 9564a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9564a2: je 0x9565ca */
  if (zf) goto L_9565ca;
L_9564a8: /* 9564a8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9564aa: je 0x95650b */
  if (zf) goto L_95650b;
L_9564ac: /* 9564ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9564b0: /* 9564b0: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 9564b3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9564b5: je 0x95650b */
  if (zf) goto L_95650b;
L_9564b7: /* 9564b7: test dword ptr [esi + 0x3c], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9564be: je 0x956504 */
  if (zf) goto L_956504;
L_9564c0: /* 9564c0: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 9564c3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9564c5: je 0x956504 */
  if (zf) goto L_956504;
L_9564c7: /* 9564c7: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 9564cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9564cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9564cd: call 0x963630 */
  esp -= 4; W32(esp, 0x9564d2u); SPILL(); f_963630(); if (g_unwind) return; RELOAD();
/* 9564d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9564d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9564d7: jne 0x9564ff */
  if (!zf) goto L_9564ff;
L_9564d9: /* 9564d9: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 9564dc: and ecx, 0xfffbffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffbffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9564e2: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 9564e5: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9564e9: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 9564ed: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 9564ee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9564f0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9564f3: jp 0x9564ff */
  if (pf) goto L_9564ff;
L_9564f5: /* 9564f5: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9564f9: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9564fd: mov ebp, esi */
  ebp = esi;
L_9564ff: /* 9564ff: mov eax, dword ptr [0xcf8bb0] */
  eax = R32((uint32_t)(0xcf8bb0u));
L_956504: /* 956504: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 956507: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956509: jne 0x9564b0 */
  if (!zf) goto L_9564b0;
L_95650b: /* 95650b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95650d: jne 0x9565b5 */
  if (!zf) goto L_9565b5;
L_956513: /* 956513: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956515: je 0x956521 */
  if (zf) goto L_956521;
L_956517: /* 956517: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956519: je 0x9565ca */
  if (zf) goto L_9565ca;
L_95651f: /* 95651f: jmp 0x956525 */
  goto L_956525;
L_956521: /* 956521: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956523: je 0x95655d */
  if (zf) goto L_95655d;
L_956525: /* 956525: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 956528: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95652b: je 0x956536 */
  if (zf) goto L_956536;
L_95652d: /* 95652d: xor eax, eax */
  eax = 0;
/* 95652f: mov dword ptr [0xcf8bb0], eax */
  W32((uint32_t)(0xcf8bb0u), eax);
/* 956534: jmp 0x95655d */
  goto L_95655d;
L_956536: /* 956536: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 956539: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 95653d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95653e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95653f: call 0x963630 */
  esp -= 4; W32(esp, 0x956544u); SPILL(); f_963630(); if (g_unwind) return; RELOAD();
/* 956544: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 956548: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 95654c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95654f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 956551: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 956554: mov eax, dword ptr [0xcf8bb0] */
  eax = R32((uint32_t)(0xcf8bb0u));
/* 956559: jp 0x95655d */
  if (pf) goto L_95655d;
L_95655b: /* 95655b: mov ebp, eax */
  ebp = eax;
L_95655d: /* 95655d: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95655f: je 0x9565ca */
  if (zf) goto L_9565ca;
L_956561: /* 956561: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 956563: je 0x9565ca */
  if (zf) goto L_9565ca;
L_956565: /* 956565: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956567: je 0x956570 */
  if (zf) goto L_956570;
L_956569: /* 956569: and dword ptr [eax + 0x3c], 0xfffbffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(0xfffbffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x3cu), r);
  }
L_956570: /* 956570: mov dword ptr [0xcf8bb0], ebp */
  W32((uint32_t)(0xcf8bb0u), ebp);
/* 956576: or dword ptr [ebp + 0x3c], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x3cu))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0x3cu), r);
  }
/* 95657d: cmp dword ptr [0xcf8438], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 956584: jl 0x9565a8 */
  if ((sf != of)) goto L_9565a8;
L_956586: /* 956586: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 95658a: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 95658d: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 956593: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 956596: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 956599: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95659a: push 0xaf7e10 */
  { uint32_t v = 0xaf7e10u; esp -= 4; W32(esp, v); }
/* 95659f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9565a0: call 0x953470 */
  esp -= 4; W32(esp, 0x9565a5u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9565a5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9565a8: /* 9565a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9565a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9565aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9565ab: mov eax, 1 */
  eax = 0x1u;
/* 9565b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9565b1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9565b4: ret  */
  esp += 4; SPILL(); return;
L_9565b5: /* 9565b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9565b7: je 0x9565ca */
  if (zf) goto L_9565ca;
L_9565b9: /* 9565b9: and dword ptr [eax + 0x3c], 0xfffbffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(0xfffbffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x3cu), r);
  }
/* 9565c0: mov dword ptr [0xcf8bb0], 0 */
  W32((uint32_t)(0xcf8bb0u), 0x0u);
L_9565ca: /* 9565ca: mov ecx, dword ptr [0xcf7904] */
  ecx = R32((uint32_t)(0xcf7904u));
/* 9565d0: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 9565d5: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9565d7: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9565da: mov dword ptr [0xcf7904], ecx */
  W32((uint32_t)(0xcf7904u), ecx);
/* 9565e0: jl 0x9565f8 */
  if ((sf != of)) goto L_9565f8;
L_9565e2: /* 9565e2: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 9565e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9565e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9565ea: push 0xaf7dd8 */
  { uint32_t v = 0xaf7dd8u; esp -= 4; W32(esp, v); }
/* 9565ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9565f0: call 0x953470 */
  esp -= 4; W32(esp, 0x9565f5u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9565f5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9565f8: /* 9565f8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9565fa: jne 0x956610 */
  if (!zf) goto L_956610;
L_9565fc: /* 9565fc: mov eax, dword ptr [0xcf842c] */
  eax = R32((uint32_t)(0xcf842cu));
/* 956601: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 956603: jle 0x956610 */
  if ((zf || sf != of)) goto L_956610;
L_956605: /* 956605: mov eax, dword ptr [0xcf845c] */
  eax = R32((uint32_t)(0xcf845cu));
/* 95660a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95660c: mov eax, edi */
  eax = edi;
/* 95660e: je 0x956612 */
  if (zf) goto L_956612;
L_956610: /* 956610: mov eax, ebx */
  eax = ebx;
L_956612: /* 956612: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 956613: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 956614: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 956615: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 956616: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956619: ret  */
  esp += 4; SPILL(); return;
}

void f_956620(void) {
  LOAD_REGS();
L_956620: /* 956620: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 956623: mov edx, dword ptr [0xcf842c] */
  edx = R32((uint32_t)(0xcf842cu));
/* 956629: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95662a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95662b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95662c: xor ebx, ebx */
  ebx = 0;
/* 95662e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956630: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 956631: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 956639: mov dword ptr [esp + 0x10], 0x7f7fffff */
  W32((uint32_t)(esp + 0x10u), 0x7f7fffffu);
/* 956641: jne 0x956662 */
  if (!zf) goto L_956662;
L_956643: /* 956643: mov eax, dword ptr [0xcf8428] */
  eax = R32((uint32_t)(0xcf8428u));
/* 956648: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95664a: jne 0x956662 */
  if (!zf) goto L_956662;
L_95664c: /* 95664c: mov eax, dword ptr [0xcf8420] */
  eax = R32((uint32_t)(0xcf8420u));
/* 956651: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956653: jne 0x956662 */
  if (!zf) goto L_956662;
L_956655: /* 956655: mov eax, dword ptr [0xcf8580] */
  eax = R32((uint32_t)(0xcf8580u));
/* 95665a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95665c: je 0x9567f5 */
  if (zf) goto L_9567f5;
L_956662: /* 956662: mov eax, dword ptr [0xcf8478] */
  eax = R32((uint32_t)(0xcf8478u));
/* 956667: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956669: jne 0x956681 */
  if (!zf) goto L_956681;
L_95666b: /* 95666b: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 956670: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 956672: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956673: call 0x956380 */
  esp -= 4; W32(esp, 0x956678u); SPILL(); f_956380(); if (g_unwind) return; RELOAD();
/* 956678: mov edx, dword ptr [0xcf842c] */
  edx = R32((uint32_t)(0xcf842cu));
/* 95667e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_956681: /* 956681: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 956685: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956687: je 0x9566a7 */
  if (zf) goto L_9566a7;
L_956689: /* 956689: mov eax, esi */
  eax = esi;
/* 95668b: nop  */
/* 95668c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_956690: /* 956690: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 956693: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956695: je 0x9566a7 */
  if (zf) goto L_9566a7;
L_956697: /* 956697: test dword ptr [eax + 0x3c], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95669e: je 0x9566a1 */
  if (zf) goto L_9566a1;
L_9566a0: /* 9566a0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_9566a1: /* 9566a1: mov eax, ecx */
  eax = ecx;
/* 9566a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9566a5: jne 0x956690 */
  if (!zf) goto L_956690;
L_9566a7: /* 9566a7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9566a9: mov ebp, 0xfffbffff */
  ebp = 0xfffbffffu;
/* 9566ae: jl 0x9566bb */
  if ((sf != of)) goto L_9566bb;
L_9566b0: /* 9566b0: jle 0x95670c */
  if ((zf || sf != of)) goto L_95670c;
L_9566b2: /* 9566b2: mov eax, dword ptr [0xcf845c] */
  eax = R32((uint32_t)(0xcf845cu));
/* 9566b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9566b9: je 0x95670c */
  if (zf) goto L_95670c;
L_9566bb: /* 9566bb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9566bd: je 0x95670c */
  if (zf) goto L_95670c;
L_9566bf: /* 9566bf: mov edi, esi */
  edi = esi;
L_9566c1: /* 9566c1: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 9566c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9566c6: je 0x95670c */
  if (zf) goto L_95670c;
L_9566c8: /* 9566c8: test dword ptr [edi + 0x3c], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9566cf: je 0x956705 */
  if (zf) goto L_956705;
L_9566d1: /* 9566d1: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 9566d4: mov edx, dword ptr [0xcf8430] */
  edx = R32((uint32_t)(0xcf8430u));
/* 9566da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9566db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9566dc: call 0x9574c0 */
  esp -= 4; W32(esp, 0x9566e1u); SPILL(); f_9574c0(); if (g_unwind) return; RELOAD();
/* 9566e1: mov edx, dword ptr [0xcf842c] */
  edx = R32((uint32_t)(0xcf842cu));
/* 9566e7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9566ea: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 9566ec: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 9566ee: xor ecx, ecx */
  ecx = 0;
/* 9566f0: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 9566f2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9566f4: setg cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 9566f7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  zf = (r) == 0;
  eax = r;
  }
/* 9566f9: je 0x956705 */
  if (zf) goto L_956705;
L_9566fb: /* 9566fb: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 9566fc: je 0x9567b6 */
  if (zf) goto L_9567b6;
L_956702: /* 956702: and dword ptr [edi + 0x3c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(edi + 0x3cu), r);
  }
L_956705: /* 956705: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 956708: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95670a: jne 0x9566c1 */
  if (!zf) goto L_9566c1;
L_95670c: /* 95670c: mov eax, dword ptr [0xcf8580] */
  eax = R32((uint32_t)(0xcf8580u));
/* 956711: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956713: mov edi, ebx */
  edi = ebx;
/* 956715: je 0x9567d0 */
  if (zf) goto L_9567d0;
L_95671b: /* 95671b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95671d: je 0x956770 */
  if (zf) goto L_956770;
L_95671f: /* 95671f: nop  */
L_956720: /* 956720: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 956723: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956725: je 0x956770 */
  if (zf) goto L_956770;
L_956727: /* 956727: test dword ptr [esi + 0x3c], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95672e: je 0x956769 */
  if (zf) goto L_956769;
L_956730: /* 956730: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 956733: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 956737: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 956738: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956739: call 0x963630 */
  esp -= 4; W32(esp, 0x95673eu); SPILL(); f_963630(); if (g_unwind) return; RELOAD();
/* 95673e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956741: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956743: jne 0x956769 */
  if (!zf) goto L_956769;
L_956745: /* 956745: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 956748: and ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95674a: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 95674d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 956751: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 956755: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 956756: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 956758: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95675b: jp 0x956769 */
  if (pf) goto L_956769;
L_95675d: /* 95675d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 956761: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 956765: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
L_956769: /* 956769: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 95676c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95676e: jne 0x956720 */
  if (!zf) goto L_956720;
L_956770: /* 956770: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956772: jne 0x9567d0 */
  if (!zf) goto L_9567d0;
L_956774: /* 956774: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 956778: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95677a: je 0x9567d0 */
  if (zf) goto L_9567d0;
L_95677c: /* 95677c: or dword ptr [eax + 0x3c], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x3cu), r);
  }
/* 956783: mov ecx, dword ptr [0xcf8438] */
  ecx = R32((uint32_t)(0xcf8438u));
/* 956789: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95678b: je 0x9567f5 */
  if (zf) goto L_9567f5;
L_95678d: /* 95678d: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 956790: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 956794: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 956799: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95679c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 95679f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9567a0: push 0xaf7ed0 */
  { uint32_t v = 0xaf7ed0u; esp -= 4; W32(esp, v); }
/* 9567a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9567a6: call 0x953470 */
  esp -= 4; W32(esp, 0x9567abu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9567ab: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9567ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9567af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9567b0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9567b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9567b2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9567b5: ret  */
  esp += 4; SPILL(); return;
L_9567b6: /* 9567b6: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 9567b9: mov eax, dword ptr [0xcf8430] */
  eax = R32((uint32_t)(0xcf8430u));
/* 9567be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9567bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9567c0: call 0x95f210 */
  esp -= 4; W32(esp, 0x9567c5u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 9567c5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9567c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9567c9: push 0xaf7e80 */
  { uint32_t v = 0xaf7e80u; esp -= 4; W32(esp, v); }
/* 9567ce: jmp 0x9567e6 */
  goto L_9567e6;
L_9567d0: /* 9567d0: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 9567d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9567d7: mov dword ptr [0xcf8b8c], ebx */
  W32((uint32_t)(0xcf8b8cu), ebx);
/* 9567dd: je 0x9567f5 */
  if (zf) goto L_9567f5;
L_9567df: /* 9567df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9567e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9567e1: push 0xaf7e44 */
  { uint32_t v = 0xaf7e44u; esp -= 4; W32(esp, v); }
L_9567e6: /* 9567e6: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 9567ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9567ed: call 0x953470 */
  esp -= 4; W32(esp, 0x9567f2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9567f2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9567f5: /* 9567f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9567f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9567f7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9567f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9567f9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9567fc: ret  */
  esp += 4; SPILL(); return;
}

void f_956800(void) {
  LOAD_REGS();
L_956800: /* 956800: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 956801: mov ecx, dword ptr [0xcf8b4c] */
  ecx = R32((uint32_t)(0xcf8b4cu));
/* 956807: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956808: xor esi, esi */
  esi = 0;
/* 95680a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95680c: mov dword ptr [esp + 4], 0xff7fffff */
  W32((uint32_t)(esp + 0x4u), 0xff7fffffu);
/* 956814: je 0x956885 */
  if (zf) goto L_956885;
L_956816: /* 956816: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 956819: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95681b: je 0x956841 */
  if (zf) goto L_956841;
L_95681d: /* 95681d: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 956820: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956822: je 0x95683b */
  if (zf) goto L_95683b;
L_956824: /* 956824: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 956826: fcom dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
/* 95682a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95682c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95682f: jne 0x956839 */
  if (!zf) goto L_956839;
L_956831: /* 956831: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 956835: mov esi, ecx */
  esi = ecx;
/* 956837: jmp 0x95683b */
  goto L_95683b;
L_956839: /* 956839: fstp st(0) */
  STI(0) = ST0; FPOP();
L_95683b: /* 95683b: mov ecx, edx */
  ecx = edx;
/* 95683d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95683f: jne 0x956816 */
  if (!zf) goto L_956816;
L_956841: /* 956841: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956843: je 0x956885 */
  if (zf) goto L_956885;
L_956845: /* 956845: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956846: call 0x95f280 */
  esp -= 4; W32(esp, 0x95684bu); SPILL(); f_95f280(); if (g_unwind) return; RELOAD();
/* 95684b: push 0xcf8b54 */
  { uint32_t v = 0xcf8b54u; esp -= 4; W32(esp, v); }
/* 956850: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956851: call 0x958040 */
  esp -= 4; W32(esp, 0x956856u); SPILL(); f_958040(); if (g_unwind) return; RELOAD();
/* 956856: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95685b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95685e: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 956861: jl 0x956885 */
  if ((sf != of)) goto L_956885;
L_956863: /* 956863: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 956867: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 95686a: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 956870: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 956873: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 956876: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956877: push 0xaf7f08 */
  { uint32_t v = 0xaf7f08u; esp -= 4; W32(esp, v); }
/* 95687c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95687d: call 0x953470 */
  esp -= 4; W32(esp, 0x956882u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 956882: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_956885: /* 956885: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 956886: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 956887: ret  */
  esp += 4; SPILL(); return;
}

void f_956890(void) {
  LOAD_REGS();
L_956890: /* 956890: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 956893: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 956894: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 956898: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 95689b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95689c: lea ebp, [ebx + 0x2c] */
  ebp = (uint32_t)(ebx + 0x2cu);
/* 95689f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9568a0: xor esi, esi */
  esi = 0;
/* 9568a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9568a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9568a5: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 9568ad: mov dword ptr [esp + 0x10], 0xff7fffff */
  W32((uint32_t)(esp + 0x10u), 0xff7fffffu);
/* 9568b5: je 0x956921 */
  if (zf) goto L_956921;
L_9568b7: /* 9568b7: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 9568ba: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9568bc: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 9568bf: je 0x956921 */
  if (zf) goto L_956921;
L_9568c1: /* 9568c1: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 9568c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9568c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9568c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9568c8: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9568cb: call 0x96fa90 */
  esp -= 4; W32(esp, 0x9568d0u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 9568d0: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9568d4: mov eax, dword ptr [0xcf780c] */
  eax = R32((uint32_t)(0xcf780cu));
/* 9568d9: fcomp dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
  FPOP();
/* 9568dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9568e0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9568e1: mov dword ptr [0xcf780c], eax */
  W32((uint32_t)(0xcf780cu), eax);
/* 9568e6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9568e8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9568eb: jne 0x9568f9 */
  if (!zf) goto L_9568f9;
L_9568ed: /* 9568ed: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 9568f1: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 9568f5: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
L_9568f9: /* 9568f9: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 9568fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9568fd: jne 0x9568c1 */
  if (!zf) goto L_9568c1;
L_9568ff: /* 9568ff: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 956903: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956905: je 0x956921 */
  if (zf) goto L_956921;
L_956907: /* 956907: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 95690a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95690b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95690c: call 0x94ea40 */
  esp -= 4; W32(esp, 0x956911u); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 956911: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956912: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 956913: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x956918u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 956918: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 95691c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95691f: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
L_956921: /* 956921: and dword ptr [ebx + 0x3c], 0xfffdffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x3cu))); uint32_t b = (uint32_t)(0xfffdffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebx + 0x3cu), r);
  }
/* 956928: cmp dword ptr [0xcf8438], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95692f: jl 0x956953 */
  if ((sf != of)) goto L_956953;
L_956931: /* 956931: mov ecx, dword ptr [ebx + 0x38] */
  ecx = R32((uint32_t)(ebx + 0x38u));
/* 956934: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 956935: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956936: call 0x95f210 */
  esp -= 4; W32(esp, 0x95693bu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 95693b: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 956941: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956944: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956945: push 0xaf7f3c */
  { uint32_t v = 0xaf7f3cu; esp -= 4; W32(esp, v); }
/* 95694a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95694b: call 0x953470 */
  esp -= 4; W32(esp, 0x956950u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 956950: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_956953: /* 956953: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 956954: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 956955: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 956956: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 956957: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95695a: ret  */
  esp += 4; SPILL(); return;
}

void f_956960(void) {
  LOAD_REGS();
L_956960: /* 956960: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 956965: push 0xaf7f78 */
  { uint32_t v = 0xaf7f78u; esp -= 4; W32(esp, v); }
/* 95696a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95696b: call 0x953470 */
  esp -= 4; W32(esp, 0x956970u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 956970: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 956974: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 956976: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 956977: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 956979: call 0x9535b0 */
  esp -= 4; W32(esp, 0x95697eu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 95697e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956981: ret  */
  esp += 4; SPILL(); return;
}

void f_956990(void) {
  LOAD_REGS();
L_956990: /* 956990: mov eax, dword ptr [0xcf8420] */
  eax = R32((uint32_t)(0xcf8420u));
/* 956995: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 956998: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 956999: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95699a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95699b: xor edi, edi */
  edi = 0;
/* 95699d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95699f: mov dword ptr [0xcf8bac], 0xffffffff */
  W32((uint32_t)(0xcf8bacu), 0xffffffffu);
/* 9569a9: mov dword ptr [0xcf8c48], edi */
  W32((uint32_t)(0xcf8c48u), edi);
/* 9569af: mov dword ptr [0xcf8b94], edi */
  W32((uint32_t)(0xcf8b94u), edi);
/* 9569b5: mov dword ptr [0xcf8b98], edi */
  W32((uint32_t)(0xcf8b98u), edi);
/* 9569bb: mov dword ptr [0xcf8b90], edi */
  W32((uint32_t)(0xcf8b90u), edi);
/* 9569c1: mov dword ptr [0xcf8bfc], edi */
  W32((uint32_t)(0xcf8bfcu), edi);
/* 9569c7: mov dword ptr [0xcf8bf8], edi */
  W32((uint32_t)(0xcf8bf8u), edi);
/* 9569cd: mov dword ptr [0xcf8bb8], edi */
  W32((uint32_t)(0xcf8bb8u), edi);
/* 9569d3: jle 0x9569d9 */
  if ((zf || sf != of)) goto L_9569d9;
L_9569d5: /* 9569d5: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9569d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9569d7: jmp 0x9569e1 */
  goto L_9569e1;
L_9569d9: /* 9569d9: jge 0x9569ee */
  if ((sf == of)) goto L_9569ee;
L_9569db: /* 9569db: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9569de: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9569e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_9569e1: /* 9569e1: call 0x957e10 */
  esp -= 4; W32(esp, 0x9569e6u); SPILL(); f_957e10(); if (g_unwind) return; RELOAD();
/* 9569e6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9569e9: mov dword ptr [0xcf8424], eax */
  W32((uint32_t)(0xcf8424u), eax);
L_9569ee: /* 9569ee: mov eax, dword ptr [0xcf842c] */
  eax = R32((uint32_t)(0xcf842cu));
/* 9569f3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9569f5: jle 0x9569fb */
  if ((zf || sf != of)) goto L_9569fb;
L_9569f7: /* 9569f7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9569f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9569f9: jmp 0x956a03 */
  goto L_956a03;
L_9569fb: /* 9569fb: jge 0x956a15 */
  if ((sf == of)) goto L_956a15;
L_9569fd: /* 9569fd: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 956a00: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 956a02: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_956a03: /* 956a03: call 0x957e10 */
  esp -= 4; W32(esp, 0x956a08u); SPILL(); f_957e10(); if (g_unwind) return; RELOAD();
/* 956a08: mov dword ptr [0xcf8430], eax */
  W32((uint32_t)(0xcf8430u), eax);
/* 956a0d: mov eax, dword ptr [0xcf842c] */
  eax = R32((uint32_t)(0xcf842cu));
/* 956a12: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_956a15: /* 956a15: cmp dword ptr [0xcf8420], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8420u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 956a1b: je 0x956a49 */
  if (zf) goto L_956a49;
L_956a1d: /* 956a1d: mov eax, dword ptr [0xcf8424] */
  eax = R32((uint32_t)(0xcf8424u));
/* 956a22: cmp eax, dword ptr [0xcf85d8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf85d8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 956a28: jb 0x956a74 */
  if (cf) goto L_956a74;
L_956a2a: /* 956a2a: mov ecx, dword ptr [0xcf85d4] */
  ecx = R32((uint32_t)(0xcf85d4u));
/* 956a30: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 956a31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 956a32: call 0x957e10 */
  esp -= 4; W32(esp, 0x956a37u); SPILL(); f_957e10(); if (g_unwind) return; RELOAD();
/* 956a37: mov ecx, dword ptr [0xcf8424] */
  ecx = R32((uint32_t)(0xcf8424u));
/* 956a3d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956a40: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 956a42: ja 0x956a74 */
  if ((!cf && !zf)) goto L_956a74;
L_956a44: /* 956a44: mov eax, dword ptr [0xcf842c] */
  eax = R32((uint32_t)(0xcf842cu));
L_956a49: /* 956a49: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 956a4b: je 0x956a99 */
  if (zf) goto L_956a99;
L_956a4d: /* 956a4d: mov edx, dword ptr [0xcf8430] */
  edx = R32((uint32_t)(0xcf8430u));
/* 956a53: cmp edx, dword ptr [0xcf85d8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf85d8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 956a59: jb 0x956a74 */
  if (cf) goto L_956a74;
L_956a5b: /* 956a5b: mov eax, dword ptr [0xcf85d4] */
  eax = R32((uint32_t)(0xcf85d4u));
/* 956a60: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 956a61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956a62: call 0x957e10 */
  esp -= 4; W32(esp, 0x956a67u); SPILL(); f_957e10(); if (g_unwind) return; RELOAD();
/* 956a67: mov ecx, dword ptr [0xcf8430] */
  ecx = R32((uint32_t)(0xcf8430u));
/* 956a6d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956a70: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 956a72: jbe 0x956a99 */
  if ((cf | zf)) goto L_956a99;
L_956a74: /* 956a74: mov ecx, dword ptr [0xcf85d4] */
  ecx = R32((uint32_t)(0xcf85d4u));
/* 956a7a: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 956a80: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 956a81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 956a82: push 0xaf81bc */
  { uint32_t v = 0xaf81bcu; esp -= 4; W32(esp, v); }
/* 956a87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 956a88: call 0x953470 */
  esp -= 4; W32(esp, 0x956a8du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 956a8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 956a8e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 956a8f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 956a91: call 0x9535b0 */
  esp -= 4; W32(esp, 0x956a96u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 956a96: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_956a99: /* 956a99: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 956a9e: mov ecx, dword ptr [0xcf85d4] */
  ecx = R32((uint32_t)(0xcf85d4u));
/* 956aa4: mov edx, dword ptr [0xcf85d8] */
  edx = R32((uint32_t)(0xcf85d8u));
/* 956aaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956aab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 956aac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 956aad: call 0x9639f0 */
  esp -= 4; W32(esp, 0x956ab2u); SPILL(); f_9639f0(); if (g_unwind) return; RELOAD();
/* 956ab2: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 956ab6: mov eax, dword ptr [0xcf8570] */
  eax = R32((uint32_t)(0xcf8570u));
/* 956abb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956abe: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 956ac0: je 0x956af2 */
  if (zf) goto L_956af2;
L_956ac2: /* 956ac2: mov eax, dword ptr [0xcf8a24] */
  eax = R32((uint32_t)(0xcf8a24u));
/* 956ac7: mov ecx, dword ptr [0xcf8a1c] */
  ecx = R32((uint32_t)(0xcf8a1cu));
/* 956acd: mov edx, dword ptr [0xcf8a38] */
  edx = R32((uint32_t)(0xcf8a38u));
/* 956ad3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956ad4: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 956ad9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 956ada: mov ecx, dword ptr [0xcf85d4] */
  ecx = R32((uint32_t)(0xcf85d4u));
/* 956ae0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 956ae1: mov edx, dword ptr [0xcf85d8] */
  edx = R32((uint32_t)(0xcf85d8u));
/* 956ae7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956ae8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 956ae9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 956aea: call 0x9649c0 */
  esp -= 4; W32(esp, 0x956aefu); SPILL(); f_9649c0(); if (g_unwind) return; RELOAD();
/* 956aef: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_956af2: /* 956af2: call 0x9624e0 */
  esp -= 4; W32(esp, 0x956af7u); SPILL(); f_9624e0(); if (g_unwind) return; RELOAD();
/* 956af7: cmp dword ptr [0xcf8410], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8410u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 956afd: je 0x956c1c */
  if (zf) goto L_956c1c;
L_956b03: /* 956b03: mov eax, dword ptr [0xcf89f8] */
  eax = R32((uint32_t)(0xcf89f8u));
/* 956b08: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 956b0e: fld dword ptr [eax + ecx*4 - 4] */
  { double v = F32((uint32_t)(eax + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 956b12: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 956b18: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 956b1a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 956b1d: jne 0x956b98 */
  if (!zf) goto L_956b98;
L_956b1f: /* 956b1f: mov ebp, dword ptr [0xcf89fc] */
  ebp = R32((uint32_t)(0xcf89fcu));
/* 956b25: fld dword ptr [ebp + ecx*4 - 4] */
  { double v = F32((uint32_t)(ebp + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 956b29: fcomp dword ptr [0xa216c4] */
  fpu_com(ST0, F32((uint32_t)(0xa216c4u)));
  FPOP();
/* 956b2f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 956b31: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 956b34: jp 0x956b98 */
  if (pf) goto L_956b98;
L_956b36: /* 956b36: mov edx, dword ptr [0xcf8580] */
  edx = R32((uint32_t)(0xcf8580u));
/* 956b3c: mov esi, dword ptr [0xcf8428] */
  esi = R32((uint32_t)(0xcf8428u));
/* 956b42: mov edi, dword ptr [0xcf8418] */
  edi = R32((uint32_t)(0xcf8418u));
/* 956b48: mov eax, 0x1c */
  eax = 0x1cu;
/* 956b4d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_956b50: /* 956b50: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 956b51: cmp dword ptr [eax*4 + 0xcf84b8], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax*4 + 0xcf84b8u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 956b59: jne 0x956b67 */
  if (!zf) goto L_956b67;
L_956b5b: /* 956b5b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 956b5d: jge 0x956b67 */
  if ((sf == of)) goto L_956b67;
L_956b5f: /* 956b5f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956b61: jne 0x956b67 */
  if (!zf) goto L_956b67;
L_956b63: /* 956b63: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956b65: je 0x956b6d */
  if (zf) goto L_956b6d;
L_956b67: /* 956b67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956b69: jne 0x956b50 */
  if (!zf) goto L_956b50;
L_956b6b: /* 956b6b: jmp 0x956b71 */
  goto L_956b71;
L_956b6d: /* 956b6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 956b6f: jge 0x956b96 */
  if ((sf == of)) goto L_956b96;
L_956b71: /* 956b71: mov eax, dword ptr [0xcf85a4] */
  eax = R32((uint32_t)(0xcf85a4u));
/* 956b76: fld dword ptr [0xcf8a08] */
  { double v = F32((uint32_t)(0xcf8a08u)); FPUSH(v); }
/* 956b7c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956b7e: je 0x956bf7 */
  if (zf) goto L_956bf7;
L_956b80: /* 956b80: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 956b82: fstp dword ptr [ebp + ecx*4 - 4] */
  WF32((uint32_t)(ebp + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 956b86: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 956b8c: mov dword ptr [0xcf8428], 1 */
  W32((uint32_t)(0xcf8428u), 0x1u);
L_956b96: /* 956b96: xor edi, edi */
  edi = 0;
L_956b98: /* 956b98: mov eax, dword ptr [0xcf85d4] */
  eax = R32((uint32_t)(0xcf85d4u));
/* 956b9d: mov edx, dword ptr [0xcf85d8] */
  edx = R32((uint32_t)(0xcf85d8u));
/* 956ba3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956ba4: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 956ba8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 956ba9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956baa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 956bab: call 0x957160 */
  esp -= 4; W32(esp, 0x956bb0u); SPILL(); f_957160(); if (g_unwind) return; RELOAD();
/* 956bb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956bb1: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 956bb5: call 0x956e50 */
  esp -= 4; W32(esp, 0x956bbau); SPILL(); f_956e50(); if (g_unwind) return; RELOAD();
/* 956bba: mov ecx, dword ptr [0xcf85d4] */
  ecx = R32((uint32_t)(0xcf85d4u));
/* 956bc0: mov edx, dword ptr [0xcf85d8] */
  edx = R32((uint32_t)(0xcf85d8u));
/* 956bc6: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 956bca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 956bcb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 956bcc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956bcd: call 0x96e730 */
  esp -= 4; W32(esp, 0x956bd2u); SPILL(); f_96e730(); if (g_unwind) return; RELOAD();
/* 956bd2: mov eax, dword ptr [0xcf84ac] */
  eax = R32((uint32_t)(0xcf84acu));
/* 956bd7: mov ecx, dword ptr [0xcf8590] */
  ecx = R32((uint32_t)(0xcf8590u));
/* 956bdd: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956be0: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 956be2: jne 0x956c27 */
  if (!zf) goto L_956c27;
L_956be4: /* 956be4: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 956be6: jne 0x956c36 */
  if (!zf) goto L_956c36;
L_956be8: /* 956be8: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 956bed: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 956bef: je 0x956c7e */
  if (zf) goto L_956c7e;
L_956bf5: /* 956bf5: jmp 0x956c41 */
  goto L_956c41;
L_956bf7: /* 956bf7: fmul dword ptr [0xa0c9b4] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c9b4u)));
/* 956bfd: mov edx, dword ptr [0xcf89f8] */
  edx = R32((uint32_t)(0xcf89f8u));
/* 956c03: xor edi, edi */
  edi = 0;
/* 956c05: fstp dword ptr [edx + ecx*4 - 4] */
  WF32((uint32_t)(edx + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 956c09: mov eax, dword ptr [0xcf8428] */
  eax = R32((uint32_t)(0xcf8428u));
/* 956c0e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956c10: jne 0x956c1c */
  if (!zf) goto L_956c1c;
L_956c12: /* 956c12: mov dword ptr [0xcf8580], 1 */
  W32((uint32_t)(0xcf8580u), 0x1u);
L_956c1c: /* 956c1c: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 956c22: jmp 0x956b98 */
  goto L_956b98;
L_956c27: /* 956c27: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 956c29: jne 0x956c36 */
  if (!zf) goto L_956c36;
L_956c2b: /* 956c2b: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 956c30: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 956c32: je 0x956c60 */
  if (zf) goto L_956c60;
L_956c34: /* 956c34: jmp 0x956c41 */
  goto L_956c41;
L_956c36: /* 956c36: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 956c3b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 956c3d: jne 0x956c41 */
  if (!zf) goto L_956c41;
L_956c3f: /* 956c3f: mov eax, ecx */
  eax = ecx;
L_956c41: /* 956c41: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 956c47: push 0xcf85e8 */
  { uint32_t v = 0xcf85e8u; esp -= 4; W32(esp, v); }
/* 956c4c: push 0xcf86e8 */
  { uint32_t v = 0xcf86e8u; esp -= 4; W32(esp, v); }
/* 956c51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956c52: push 0xaf819c */
  { uint32_t v = 0xaf819cu; esp -= 4; W32(esp, v); }
/* 956c57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 956c58: call 0x953470 */
  esp -= 4; W32(esp, 0x956c5du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 956c5d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_956c60: /* 956c60: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 956c66: push 0xcf87e8 */
  { uint32_t v = 0xcf87e8u; esp -= 4; W32(esp, v); }
/* 956c6b: push 0xaf40b8 */
  { uint32_t v = 0xaf40b8u; esp -= 4; W32(esp, v); }
/* 956c70: push 0xaf8178 */
  { uint32_t v = 0xaf8178u; esp -= 4; W32(esp, v); }
/* 956c75: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 956c76: call 0x953470 */
  esp -= 4; W32(esp, 0x956c7bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 956c7b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_956c7e: /* 956c7e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 956c7f: call 0x958330 */
  esp -= 4; W32(esp, 0x956c84u); SPILL(); f_958330(); if (g_unwind) return; RELOAD();
/* 956c84: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 956c89: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956c8c: mov dword ptr [0xcf8b54], eax */
  W32((uint32_t)(0xcf8b54u), eax);
/* 956c91: call 0x956800 */
  esp -= 4; W32(esp, 0x956c96u); SPILL(); f_956800(); if (g_unwind) return; RELOAD();
/* 956c96: cmp dword ptr [0xcf8488], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8488u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 956c9c: je 0x956cb6 */
  if (zf) goto L_956cb6;
L_956c9e: /* 956c9e: mov ecx, dword ptr [0xcf8408] */
  ecx = R32((uint32_t)(0xcf8408u));
/* 956ca4: mov edx, dword ptr [0xcf8460] */
  edx = R32((uint32_t)(0xcf8460u));
/* 956caa: mov dword ptr [0xcf8a10], ecx */
  W32((uint32_t)(0xcf8a10u), ecx);
/* 956cb0: mov dword ptr [0xcf8a0c], edx */
  W32((uint32_t)(0xcf8a0cu), edx);
L_956cb6: /* 956cb6: cmp dword ptr [0xcf8478], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8478u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 956cbc: je 0x956e12 */
  if (zf) goto L_956e12;
L_956cc2: /* 956cc2: cmp dword ptr [0xcf842c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf842cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 956cc8: jle 0x956cee */
  if ((zf || sf != of)) goto L_956cee;
L_956cca: /* 956cca: cmp dword ptr [0xcf845c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf845cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 956cd0: je 0x956cee */
  if (zf) goto L_956cee;
L_956cd2: /* 956cd2: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 956cd7: push 0xaf80f0 */
  { uint32_t v = 0xaf80f0u; esp -= 4; W32(esp, v); }
/* 956cdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956cdd: call 0x953470 */
  esp -= 4; W32(esp, 0x956ce2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 956ce2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 956ce3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 956ce4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 956ce6: call 0x9535b0 */
  esp -= 4; W32(esp, 0x956cebu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 956ceb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_956cee: /* 956cee: cmp dword ptr [0xcf8428], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8428u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 956cf4: jne 0x956d33 */
  if (!zf) goto L_956d33;
L_956cf6: /* 956cf6: cmp dword ptr [0xcf8420], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8420u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 956cfc: jne 0x956d33 */
  if (!zf) goto L_956d33;
L_956cfe: /* 956cfe: cmp dword ptr [0xcf8454], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8454u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 956d04: jne 0x956d16 */
  if (!zf) goto L_956d16;
L_956d06: /* 956d06: cmp dword ptr [0xcf8488], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8488u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 956d0c: jne 0x956d16 */
  if (!zf) goto L_956d16;
L_956d0e: /* 956d0e: cmp dword ptr [0xcf8430], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8430u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 956d14: jne 0x956d33 */
  if (!zf) goto L_956d33;
L_956d16: /* 956d16: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 956d1c: push 0xaf8060 */
  { uint32_t v = 0xaf8060u; esp -= 4; W32(esp, v); }
/* 956d21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 956d22: call 0x953470 */
  esp -= 4; W32(esp, 0x956d27u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 956d27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 956d28: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 956d29: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 956d2b: call 0x9535b0 */
  esp -= 4; W32(esp, 0x956d30u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 956d30: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_956d33: /* 956d33: cmp dword ptr [0xcf842c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf842cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 956d39: jle 0x956e03 */
  if ((zf || sf != of)) goto L_956e03;
L_956d3f: /* 956d3f: cmp dword ptr [0xcf845c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf845cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 956d45: jne 0x956e03 */
  if (!zf) goto L_956e03;
L_956d4b: /* 956d4b: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 956d4f: mov eax, dword ptr [0xcf8430] */
  eax = R32((uint32_t)(0xcf8430u));
/* 956d54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 956d55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956d56: call 0x9574c0 */
  esp -= 4; W32(esp, 0x956d5bu); SPILL(); f_9574c0(); if (g_unwind) return; RELOAD();
/* 956d5b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956d5e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956d60: jne 0x956e03 */
  if (!zf) goto L_956e03;
L_956d66: /* 956d66: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 956d6a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 956d6b: mov ecx, dword ptr [0xcf8b4c] */
  ecx = R32((uint32_t)(0xcf8b4cu));
/* 956d71: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 956d75: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 956d76: mov edx, dword ptr [0xcf8430] */
  edx = R32((uint32_t)(0xcf8430u));
/* 956d7c: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 956d80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956d81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 956d82: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 956d83: call 0x9702f0 */
  esp -= 4; W32(esp, 0x956d88u); SPILL(); f_9702f0(); if (g_unwind) return; RELOAD();
/* 956d88: mov ecx, dword ptr [0xcf7888] */
  ecx = R32((uint32_t)(0xcf7888u));
/* 956d8e: mov esi, eax */
  esi = eax;
/* 956d90: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 956d94: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 956d96: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 956d9a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956d9d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 956d9f: mov dword ptr [0xcf7888], ecx */
  W32((uint32_t)(0xcf7888u), ecx);
/* 956da5: jne 0x956dd1 */
  if (!zf) goto L_956dd1;
L_956da7: /* 956da7: mov ecx, dword ptr [0xcf8430] */
  ecx = R32((uint32_t)(0xcf8430u));
/* 956dad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 956dae: call 0x95f210 */
  esp -= 4; W32(esp, 0x956db3u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 956db3: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 956db9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956dba: push 0xaf8000 */
  { uint32_t v = 0xaf8000u; esp -= 4; W32(esp, v); }
/* 956dbf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 956dc0: call 0x953470 */
  esp -= 4; W32(esp, 0x956dc5u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 956dc5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 956dc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 956dc7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 956dc9: call 0x9535b0 */
  esp -= 4; W32(esp, 0x956dceu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 956dce: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_956dd1: /* 956dd1: mov eax, dword ptr [0xcf8430] */
  eax = R32((uint32_t)(0xcf8430u));
/* 956dd6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 956dd7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956dd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956dd9: call 0x96d5a0 */
  esp -= 4; W32(esp, 0x956ddeu); SPILL(); f_96d5a0(); if (g_unwind) return; RELOAD();
/* 956dde: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956de1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956de3: jne 0x956e03 */
  if (!zf) goto L_956e03;
L_956de5: /* 956de5: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 956de9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 956dea: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x956defu); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 956def: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 956df3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 956df4: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x956df9u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 956df9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956dfc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 956dfd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 956dfe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 956dff: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956e02: ret  */
  esp += 4; SPILL(); return;
L_956e03: /* 956e03: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 956e08: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 956e09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956e0a: call 0x956380 */
  esp -= 4; W32(esp, 0x956e0fu); SPILL(); f_956380(); if (g_unwind) return; RELOAD();
/* 956e0f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_956e12: /* 956e12: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 956e16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 956e17: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x956e1cu); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 956e1c: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 956e20: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 956e21: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x956e26u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 956e26: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 956e2b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956e2e: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 956e31: jl 0x956e46 */
  if ((sf != of)) goto L_956e46;
L_956e33: /* 956e33: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 956e38: push 0xaf7fc4 */
  { uint32_t v = 0xaf7fc4u; esp -= 4; W32(esp, v); }
/* 956e3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956e3e: call 0x953470 */
  esp -= 4; W32(esp, 0x956e43u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 956e43: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_956e46: /* 956e46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 956e47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 956e48: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 956e49: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956e4c: ret  */
  esp += 4; SPILL(); return;
}

void f_956e50(void) {
  LOAD_REGS();
L_956e50: /* 956e50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 956e51: mov ebp, esp */
  ebp = esp;
/* 956e53: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 956e56: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 956e59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956e5a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 956e5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 956e5e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956e5f: mov dword ptr [esp + 0x10], 0x7f7fffff */
  W32((uint32_t)(esp + 0x10u), 0x7f7fffffu);
/* 956e67: call 0x955e50 */
  esp -= 4; W32(esp, 0x956e6cu); SPILL(); f_955e50(); if (g_unwind) return; RELOAD();
/* 956e6c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 956e6e: call 0x958330 */
  esp -= 4; W32(esp, 0x956e73u); SPILL(); f_958330(); if (g_unwind) return; RELOAD();
/* 956e73: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 956e78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956e79: mov dword ptr [0xcf8b54], eax */
  W32((uint32_t)(0xcf8b54u), eax);
/* 956e7e: call 0x9708b0 */
  esp -= 4; W32(esp, 0x956e83u); SPILL(); f_9708b0(); if (g_unwind) return; RELOAD();
/* 956e83: mov esi, dword ptr [0xcf8b4c] */
  esi = R32((uint32_t)(0xcf8b4cu));
/* 956e89: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956e8a: mov dword ptr [0xcf8b3c], eax */
  W32((uint32_t)(0xcf8b3cu), eax);
/* 956e8f: call 0x970e90 */
  esp -= 4; W32(esp, 0x956e94u); SPILL(); f_970e90(); if (g_unwind) return; RELOAD();
/* 956e94: mov eax, dword ptr [0xcf79e8] */
  eax = R32((uint32_t)(0xcf79e8u));
/* 956e99: mov edx, dword ptr [0xcf8b3c] */
  edx = R32((uint32_t)(0xcf8b3cu));
/* 956e9f: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 956ea3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 956ea4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 956ea5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956ea6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 956ea7: mov dword ptr [0xcf79e8], eax */
  W32((uint32_t)(0xcf79e8u), eax);
/* 956eac: call 0x96fa90 */
  esp -= 4; W32(esp, 0x956eb1u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 956eb1: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 956eb5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 956ebb: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956ebe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 956ec0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 956ec3: jne 0x956ef1 */
  if (!zf) goto L_956ef1;
L_956ec5: /* 956ec5: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 956eca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956ecc: je 0x956ef1 */
  if (zf) goto L_956ef1;
L_956ece: /* 956ece: mov edi, edi */
  edi = edi;
L_956ed0: /* 956ed0: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 956ed3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956ed5: je 0x956ef1 */
  if (zf) goto L_956ef1;
L_956ed7: /* 956ed7: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 956eda: mov esi, ecx */
  esi = ecx;
/* 956edc: not esi */
  esi = ~esi;
/* 956ede: xor esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 956ee0: and esi, 0x800 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 956ee6: xor esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 956ee8: mov dword ptr [eax + 0x3c], esi */
  W32((uint32_t)(eax + 0x3cu), esi);
/* 956eeb: mov eax, edx */
  eax = edx;
/* 956eed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956eef: jne 0x956ed0 */
  if (!zf) goto L_956ed0;
L_956ef1: /* 956ef1: mov esi, dword ptr [0xcf8b4c] */
  esi = R32((uint32_t)(0xcf8b4cu));
/* 956ef7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956ef9: je 0x956f17 */
  if (zf) goto L_956f17;
L_956efb: /* 956efb: nop  */
/* 956efc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_956f00: /* 956f00: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 956f03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956f05: je 0x956f17 */
  if (zf) goto L_956f17;
L_956f07: /* 956f07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956f08: call 0x970e90 */
  esp -= 4; W32(esp, 0x956f0du); SPILL(); f_970e90(); if (g_unwind) return; RELOAD();
/* 956f0d: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 956f10: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956f13: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956f15: jne 0x956f00 */
  if (!zf) goto L_956f00;
L_956f17: /* 956f17: mov esi, dword ptr [0xcf8b4c] */
  esi = R32((uint32_t)(0xcf8b4cu));
/* 956f1d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956f1f: je 0x956f9b */
  if (zf) goto L_956f9b;
L_956f21: /* 956f21: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 956f24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956f26: je 0x956f9b */
  if (zf) goto L_956f9b;
L_956f28: /* 956f28: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 956f2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 956f2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956f2d: call 0x95df60 */
  esp -= 4; W32(esp, 0x956f32u); SPILL(); f_95df60(); if (g_unwind) return; RELOAD();
/* 956f32: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956f35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956f37: je 0x956f42 */
  if (zf) goto L_956f42;
L_956f39: /* 956f39: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 956f3c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956f3e: jne 0x956f21 */
  if (!zf) goto L_956f21;
L_956f40: /* 956f40: jmp 0x956f9b */
  goto L_956f9b;
L_956f42: /* 956f42: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 956f49: jl 0x956f5e */
  if ((sf != of)) goto L_956f5e;
L_956f4b: /* 956f4b: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 956f50: push 0xaf8420 */
  { uint32_t v = 0xaf8420u; esp -= 4; W32(esp, v); }
/* 956f55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956f56: call 0x953470 */
  esp -= 4; W32(esp, 0x956f5bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 956f5b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_956f5e: /* 956f5e: and dword ptr [esi + 0x3c], 0xffff7fff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0xffff7fffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* 956f65: mov esi, dword ptr [0xcf8b4c] */
  esi = R32((uint32_t)(0xcf8b4cu));
/* 956f6b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956f6d: je 0x956f9b */
  if (zf) goto L_956f9b;
L_956f6f: /* 956f6f: nop  */
L_956f70: /* 956f70: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 956f73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956f75: je 0x956f9b */
  if (zf) goto L_956f9b;
L_956f77: /* 956f77: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 956f7a: mov ecx, eax */
  ecx = eax;
/* 956f7c: not ecx */
  ecx = ~ecx;
/* 956f7e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 956f80: and ecx, 0x800 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 956f86: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 956f88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956f89: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 956f8c: call 0x9640c0 */
  esp -= 4; W32(esp, 0x956f91u); SPILL(); f_9640c0(); if (g_unwind) return; RELOAD();
/* 956f91: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 956f94: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956f97: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956f99: jne 0x956f70 */
  if (!zf) goto L_956f70;
L_956f9b: /* 956f9b: mov esi, dword ptr [0xcf8b4c] */
  esi = R32((uint32_t)(0xcf8b4cu));
/* 956fa1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956fa3: je 0x957040 */
  if (zf) goto L_957040;
L_956fa9: /* 956fa9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_956fb0: /* 956fb0: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 956fb3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956fb5: je 0x957040 */
  if (zf) goto L_957040;
L_956fbb: /* 956fbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 956fbd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 956fbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956fc0: call 0x95df60 */
  esp -= 4; W32(esp, 0x956fc5u); SPILL(); f_95df60(); if (g_unwind) return; RELOAD();
/* 956fc5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 956fc8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956fca: jne 0x956ff7 */
  if (!zf) goto L_956ff7;
L_956fcc: /* 956fcc: push 0xaf83f0 */
  { uint32_t v = 0xaf83f0u; esp -= 4; W32(esp, v); }
/* 956fd1: call 0x96f160 */
  esp -= 4; W32(esp, 0x956fd6u); SPILL(); f_96f160(); if (g_unwind) return; RELOAD();
/* 956fd6: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 956fd9: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 956fde: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 956fdf: push 0xaf83a0 */
  { uint32_t v = 0xaf83a0u; esp -= 4; W32(esp, v); }
/* 956fe4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 956fe5: call 0x953470 */
  esp -= 4; W32(esp, 0x956feau); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 956fea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 956fec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 956fed: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 956fef: call 0x9535b0 */
  esp -= 4; W32(esp, 0x956ff4u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 956ff4: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_956ff7: /* 956ff7: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 956ffa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 956ffc: je 0x957035 */
  if (zf) goto L_957035;
L_956ffe: /* 956ffe: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 957001: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 957003: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957005: je 0x957035 */
  if (zf) goto L_957035;
L_957007: /* 957007: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 95700a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 95700d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95700e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95700f: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 957012: call 0x970820 */
  esp -= 4; W32(esp, 0x957017u); SPILL(); f_970820(); if (g_unwind) return; RELOAD();
/* 957017: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 95701b: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 95701d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957020: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 957022: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 957025: jne 0x95702d */
  if (!zf) goto L_95702d;
L_957027: /* 957027: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 95702b: jmp 0x95702f */
  goto L_95702f;
L_95702d: /* 95702d: fstp st(0) */
  STI(0) = ST0; FPOP();
L_95702f: /* 95702f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 957031: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957033: jne 0x957007 */
  if (!zf) goto L_957007;
L_957035: /* 957035: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 957038: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95703a: jne 0x956fb0 */
  if (!zf) goto L_956fb0;
L_957040: /* 957040: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 957044: fcomp qword ptr [0xa216d8] */
  fpu_com(ST0, F64((uint32_t)(0xa216d8u)));
  FPOP();
/* 95704a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95704c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95704f: jp 0x9570be */
  if (pf) goto L_9570be;
L_957051: /* 957051: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 957055: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 957059: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 95705f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957060: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 957062: push 0xaf838c */
  { uint32_t v = 0xaf838cu; esp -= 4; W32(esp, v); }
/* 957067: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 95706b: mov dword ptr [0xcf8a3c], 1 */
  W32((uint32_t)(0xcf8a3cu), 0x1u);
/* 957075: call 0x953320 */
  esp -= 4; W32(esp, 0x95707au); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 95707a: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 95707e: fcomp qword ptr [0xa216d0] */
  fpu_com(ST0, F64((uint32_t)(0xa216d0u)));
  FPOP();
/* 957084: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957087: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 957089: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95708c: jp 0x9570be */
  if (pf) goto L_9570be;
L_95708e: /* 95708e: mov eax, dword ptr [0xcf8564] */
  eax = R32((uint32_t)(0xcf8564u));
/* 957093: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957095: jne 0x9570be */
  if (!zf) goto L_9570be;
L_957097: /* 957097: mov eax, dword ptr [0xcf84b4] */
  eax = R32((uint32_t)(0xcf84b4u));
/* 95709c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95709e: je 0x9570be */
  if (zf) goto L_9570be;
L_9570a0: /* 9570a0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9570a4: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 9570aa: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9570ad: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9570b0: push 0xaf8238 */
  { uint32_t v = 0xaf8238u; esp -= 4; W32(esp, v); }
/* 9570b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9570b6: call 0x953470 */
  esp -= 4; W32(esp, 0x9570bbu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9570bb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9570be: /* 9570be: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 9570c4: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 9570c9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9570ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9570cb: mov dword ptr [0xcf7a1c], edx */
  W32((uint32_t)(0xcf7a1cu), edx);
/* 9570d1: call 0x955860 */
  esp -= 4; W32(esp, 0x9570d6u); SPILL(); f_955860(); if (g_unwind) return; RELOAD();
/* 9570d6: mov ecx, dword ptr [0xcf8b4c] */
  ecx = R32((uint32_t)(0xcf8b4cu));
/* 9570dc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9570de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9570df: call 0x954a80 */
  esp -= 4; W32(esp, 0x9570e4u); SPILL(); f_954a80(); if (g_unwind) return; RELOAD();
/* 9570e4: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 9570e9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9570ec: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9570ef: jl 0x957150 */
  if ((sf != of)) goto L_957150;
L_9570f1: /* 9570f1: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 9570f7: push 0xaf81fc */
  { uint32_t v = 0xaf81fcu; esp -= 4; W32(esp, v); }
/* 9570fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9570fd: call 0x953470 */
  esp -= 4; W32(esp, 0x957102u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 957102: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 957107: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95710a: xor esi, esi */
  esi = 0;
/* 95710c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 95710e: jle 0x95713c */
  if ((zf || sf != of)) goto L_95713c;
L_957110: /* 957110: mov eax, dword ptr [0xcf8b3c] */
  eax = R32((uint32_t)(0xcf8b3cu));
/* 957115: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 957118: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95711e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 957121: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 957124: push 0xaf81f4 */
  { uint32_t v = 0xaf81f4u; esp -= 4; W32(esp, v); }
/* 957129: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95712a: call 0x953470 */
  esp -= 4; W32(esp, 0x95712fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95712f: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 957134: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957137: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 957138: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95713a: jl 0x957110 */
  if ((sf != of)) goto L_957110;
L_95713c: /* 95713c: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 957142: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 957147: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 957148: call 0x953470 */
  esp -= 4; W32(esp, 0x95714du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95714d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_957150: /* 957150: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 957151: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 957152: mov esp, ebp */
  esp = ebp;
/* 957154: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 957155: ret  */
  esp += 4; SPILL(); return;
}

void f_957160(void) {
  LOAD_REGS();
L_957160: /* 957160: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 957161: mov ebp, esp */
  ebp = esp;
/* 957163: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 957166: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 957169: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95716a: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 95716d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95716e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95716f: lea esi, [ebx + 1] */
  esi = (uint32_t)(ebx + 0x1u);
/* 957172: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957173: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 95717b: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x957180u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 957180: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957181: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 957185: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x95718au); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 95718a: mov ecx, dword ptr [0xcf83e0] */
  ecx = R32((uint32_t)(0xcf83e0u));
/* 957190: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957193: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957195: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 957199: je 0x9571af */
  if (zf) goto L_9571af;
L_95719b: /* 95719b: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 95719e: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 9571a1: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 9571a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9571a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9571a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9571a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9571aa: jmp 0x957465 */
  goto L_957465;
L_9571af: /* 9571af: mov ecx, dword ptr [0xcf8558] */
  ecx = R32((uint32_t)(0xcf8558u));
/* 9571b5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9571b7: je 0x957225 */
  if (zf) goto L_957225;
L_9571b9: /* 9571b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9571ba: call 0x94f340 */
  esp -= 4; W32(esp, 0x9571bfu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 9571bf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9571c2: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9571c4: je 0x95746e */
  if (zf) goto L_95746e;
L_9571ca: /* 9571ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_9571d0: /* 9571d0: call 0x964770 */
  esp -= 4; W32(esp, 0x9571d5u); SPILL(); f_964770(); if (g_unwind) return; RELOAD();
/* 9571d5: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 9571d9: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9571dd: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9571e0: fmul dword ptr [0xa216e0] */
  ST0 = ST0 * (F32((uint32_t)(0xa216e0u)));
/* 9571e6: fild dword ptr [0xcf85d4] */
  { double v = (double)(int32_t)R32((uint32_t)(0xcf85d4u)); FPUSH(v); }
/* 9571ec: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9571ee: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9571f1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9571f3: call dword ptr [0xcfb0cc] */
  esp -= 4; W32(esp, 0x9571f9u); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* 9571f9: call 0x99ceac */
  esp -= 4; W32(esp, 0x9571feu); SPILL(); hle_ftol(); RELOAD();
/* 9571fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9571ff: call 0x957e10 */
  esp -= 4; W32(esp, 0x957204u); SPILL(); f_957e10(); if (g_unwind) return; RELOAD();
/* 957204: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957205: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 957209: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95720a: call 0x94f5d0 */
  esp -= 4; W32(esp, 0x95720fu); SPILL(); f_94f5d0(); if (g_unwind) return; RELOAD();
/* 95720f: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 957213: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 957214: call 0x94f340 */
  esp -= 4; W32(esp, 0x957219u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 957219: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95721c: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95721e: jne 0x9571d0 */
  if (!zf) goto L_9571d0;
L_957220: /* 957220: jmp 0x95746e */
  goto L_95746e;
L_957225: /* 957225: cmp dword ptr [0xcf85cc], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95722c: jl 0x957454 */
  if ((sf != of)) goto L_957454;
L_957232: /* 957232: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957233: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x957238u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 957238: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 95723b: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 95723e: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 957241: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 957245: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 957246: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 95724a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95724b: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x957250u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 957250: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 957253: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 957254: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 957258: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 957259: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95725eu); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95725e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957261: cmp ebx, 6 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 957264: mov eax, ebx */
  eax = ebx;
/* 957266: jl 0x95726d */
  if ((sf != of)) goto L_95726d;
L_957268: /* 957268: mov eax, 6 */
  eax = 0x6u;
L_95726d: /* 95726d: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 957270: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 957274: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 957275: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 957278: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 957279: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95727a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95727b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95727c: call 0x963c50 */
  esp -= 4; W32(esp, 0x957281u); SPILL(); f_963c50(); if (g_unwind) return; RELOAD();
/* 957281: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 957285: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 957286: call 0x94f340 */
  esp -= 4; W32(esp, 0x95728bu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95728b: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 95728d: mov esi, eax */
  esi = eax;
/* 95728f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 957292: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957293: xor ebx, ebx */
  ebx = 0;
/* 957295: call 0x94f340 */
  esp -= 4; W32(esp, 0x95729au); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95729a: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95729d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 95729f: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 9572a3: jle 0x95733e */
  if ((zf || sf != of)) goto L_95733e;
L_9572a9: /* 9572a9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9572ac: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
/* 9572af: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
L_9572b3: /* 9572b3: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9572b6: je 0x957323 */
  if (zf) goto L_957323;
L_9572b8: /* 9572b8: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9572bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9572bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9572be: call 0x94eed0 */
  esp -= 4; W32(esp, 0x9572c3u); SPILL(); f_94eed0(); if (g_unwind) return; RELOAD();
/* 9572c3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9572c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9572c8: jne 0x957323 */
  if (!zf) goto L_957323;
L_9572ca: /* 9572ca: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9572ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9572cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9572d0: call 0x94eed0 */
  esp -= 4; W32(esp, 0x9572d5u); SPILL(); f_94eed0(); if (g_unwind) return; RELOAD();
/* 9572d5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9572d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9572da: jne 0x957323 */
  if (!zf) goto L_957323;
L_9572dc: /* 9572dc: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9572e0: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9572e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9572e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9572e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9572e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9572e8: call 0x962a60 */
  esp -= 4; W32(esp, 0x9572edu); SPILL(); f_962a60(); if (g_unwind) return; RELOAD();
/* 9572ed: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9572ef: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9572f3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9572f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9572f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9572f9: je 0x95730a */
  if (zf) goto L_95730a;
L_9572fb: /* 9572fb: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 9572ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957300: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x957305u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 957305: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957308: jmp 0x957323 */
  goto L_957323;
L_95730a: /* 95730a: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 95730e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95730f: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x957314u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 957314: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 957317: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95731a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95731b: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95731d: je 0x9573ba */
  if (zf) goto L_9573ba;
L_957323: /* 957323: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 957327: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 95732a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95732d: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 957331: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 957335: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 957336: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 957338: jl 0x9572b3 */
  if ((sf != of)) goto L_9572b3;
L_95733e: /* 95733e: cmp esi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957341: je 0x9573ba */
  if (zf) goto L_9573ba;
L_957343: /* 957343: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 957346: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 957347: call 0x94eaa0 */
  esp -= 4; W32(esp, 0x95734cu); SPILL(); f_94eaa0(); if (g_unwind) return; RELOAD();
/* 95734c: mov edi, eax */
  edi = eax;
/* 95734e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957351: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957353: je 0x9573ba */
  if (zf) goto L_9573ba;
L_957355: /* 957355: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 957359: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95735a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95735b: call 0x94eed0 */
  esp -= 4; W32(esp, 0x957360u); SPILL(); f_94eed0(); if (g_unwind) return; RELOAD();
/* 957360: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957363: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957365: jne 0x9573b5 */
  if (!zf) goto L_9573b5;
L_957367: /* 957367: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 95736b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95736c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95736d: call 0x94eed0 */
  esp -= 4; W32(esp, 0x957372u); SPILL(); f_94eed0(); if (g_unwind) return; RELOAD();
/* 957372: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957375: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957377: jne 0x9573b5 */
  if (!zf) goto L_9573b5;
L_957379: /* 957379: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 95737d: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 957381: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 957382: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957383: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957384: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 957385: call 0x962a60 */
  esp -= 4; W32(esp, 0x95738au); SPILL(); f_962a60(); if (g_unwind) return; RELOAD();
/* 95738a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 95738c: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 957390: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957393: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957395: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 957396: je 0x9573a7 */
  if (zf) goto L_9573a7;
L_957398: /* 957398: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 95739c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95739d: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x9573a2u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 9573a2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9573a5: jmp 0x9573b5 */
  goto L_9573b5;
L_9573a7: /* 9573a7: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 9573ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9573ac: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x9573b1u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 9573b1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9573b4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_9573b5: /* 9573b5: cmp esi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9573b8: jne 0x957343 */
  if (!zf) goto L_957343;
L_9573ba: /* 9573ba: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 9573bd: xor ebx, ebx */
  ebx = 0;
/* 9573bf: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9573c1: je 0x95742b */
  if (zf) goto L_95742b;
L_9573c3: /* 9573c3: mov eax, ebx */
  eax = ebx;
/* 9573c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9573c6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 9573c7: call 0x957e10 */
  esp -= 4; W32(esp, 0x9573ccu); SPILL(); f_957e10(); if (g_unwind) return; RELOAD();
/* 9573cc: mov edi, eax */
  edi = eax;
/* 9573ce: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9573d1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9573d3: je 0x95742b */
  if (zf) goto L_95742b;
L_9573d5: /* 9573d5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9573d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9573da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9573db: call 0x94eed0 */
  esp -= 4; W32(esp, 0x9573e0u); SPILL(); f_94eed0(); if (g_unwind) return; RELOAD();
/* 9573e0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9573e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9573e5: jne 0x957426 */
  if (!zf) goto L_957426;
L_9573e7: /* 9573e7: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9573eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9573ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9573ed: call 0x94eed0 */
  esp -= 4; W32(esp, 0x9573f2u); SPILL(); f_94eed0(); if (g_unwind) return; RELOAD();
/* 9573f2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9573f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9573f7: jne 0x957426 */
  if (!zf) goto L_957426;
L_9573f9: /* 9573f9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9573fd: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 957401: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 957402: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957403: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957404: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 957405: call 0x962a60 */
  esp -= 4; W32(esp, 0x95740au); SPILL(); f_962a60(); if (g_unwind) return; RELOAD();
/* 95740a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 95740c: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 957410: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957413: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957415: jne 0x957426 */
  if (!zf) goto L_957426;
L_957417: /* 957417: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 95741b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95741c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95741d: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x957422u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 957422: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957425: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_957426: /* 957426: cmp esi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957429: jne 0x9573c3 */
  if (!zf) goto L_9573c3;
L_95742b: /* 95742b: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 95742f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 957430: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x957435u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 957435: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 957438: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 95743b: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 95743f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957440: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 957443: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 957444: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 957447: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 957448: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957449: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95744a: call 0x963c50 */
  esp -= 4; W32(esp, 0x95744fu); SPILL(); f_963c50(); if (g_unwind) return; RELOAD();
/* 95744f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957452: jmp 0x95746e */
  goto L_95746e;
L_957454: /* 957454: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 957457: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 95745a: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 95745e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95745f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 957462: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957463: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 957464: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_957465: /* 957465: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 957466: call 0x963c50 */
  esp -= 4; W32(esp, 0x95746bu); SPILL(); f_963c50(); if (g_unwind) return; RELOAD();
/* 95746b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95746e: /* 95746e: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 957472: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957474: je 0x95749f */
  if (zf) goto L_95749f;
L_957476: /* 957476: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 957479: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 95747c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95747e: je 0x95749f */
  if (zf) goto L_95749f;
L_957480: /* 957480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957481: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 957484: call 0x957c20 */
  esp -= 4; W32(esp, 0x957489u); SPILL(); f_957c20(); if (g_unwind) return; RELOAD();
/* 957489: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95748a: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 95748e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 957490: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957491: call 0x94e6d0 */
  esp -= 4; W32(esp, 0x957496u); SPILL(); f_94e6d0(); if (g_unwind) return; RELOAD();
/* 957496: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 957498: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95749b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95749d: jne 0x957480 */
  if (!zf) goto L_957480;
L_95749f: /* 95749f: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 9574a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9574a4: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x9574a9u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 9574a9: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9574ad: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9574b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9574b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9574b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9574b3: mov esp, ebp */
  esp = ebp;
/* 9574b5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9574b6: ret  */
  esp += 4; SPILL(); return;
}

void f_9574c0(void) {
  LOAD_REGS();
L_9574c0: /* 9574c0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9574c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9574c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9574c7: je 0x9574e6 */
  if (zf) goto L_9574e6;
L_9574c9: /* 9574c9: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 9574cc: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9574ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9574d0: je 0x9574e6 */
  if (zf) goto L_9574e6;
L_9574d2: /* 9574d2: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
L_9574d6: /* 9574d6: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 9574d9: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9574dc: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9574de: je 0x9574e8 */
  if (zf) goto L_9574e8;
L_9574e0: /* 9574e0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9574e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9574e4: jne 0x9574d6 */
  if (!zf) goto L_9574d6;
L_9574e6: /* 9574e6: xor eax, eax */
  eax = 0;
L_9574e8: /* 9574e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9574e9: ret  */
  esp += 4; SPILL(); return;
}

void f_9574f0(void) {
  LOAD_REGS();
L_9574f0: /* 9574f0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9574f3: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 9574f7: mov eax, dword ptr [0xcf8b50] */
  eax = R32((uint32_t)(0xcf8b50u));
/* 9574fc: mov ecx, dword ptr [0xcf8b78] */
  ecx = R32((uint32_t)(0xcf8b78u));
/* 957502: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 957503: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 957504: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957505: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 957506: xor ebp, ebp */
  ebp = 0;
/* 957508: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 957509: xor ebx, ebx */
  ebx = 0;
/* 95750b: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 95750f: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 957513: mov dword ptr [0xcf8b58], eax */
  W32((uint32_t)(0xcf8b58u), eax);
/* 957518: mov dword ptr [0xcf8b7c], ecx */
  W32((uint32_t)(0xcf8b7cu), ecx);
/* 95751e: call 0x957c20 */
  esp -= 4; W32(esp, 0x957523u); SPILL(); f_957c20(); if (g_unwind) return; RELOAD();
/* 957523: mov edi, eax */
  edi = eax;
/* 957525: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 957526: call 0x95dc70 */
  esp -= 4; W32(esp, 0x95752bu); SPILL(); f_95dc70(); if (g_unwind) return; RELOAD();
/* 95752b: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 957531: mov eax, dword ptr [0xcf8478] */
  eax = R32((uint32_t)(0xcf8478u));
/* 957536: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957539: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95753a: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95753c: mov dword ptr [0xcf8bf8], ecx */
  W32((uint32_t)(0xcf8bf8u), ecx);
/* 957542: jne 0x95754e */
  if (!zf) goto L_95754e;
L_957544: /* 957544: mov dword ptr [0xcf8bc8], 1 */
  W32((uint32_t)(0xcf8bc8u), 0x1u);
L_95754e: /* 95754e: mov esi, dword ptr [0xcf8b5c] */
  esi = R32((uint32_t)(0xcf8b5cu));
/* 957554: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957556: je 0x957600 */
  if (zf) goto L_957600;
L_95755c: /* 95755c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_957560: /* 957560: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 957563: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 957566: je 0x957600 */
  if (zf) goto L_957600;
L_95756c: /* 95756c: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 95756f: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957571: je 0x957595 */
  if (zf) goto L_957595;
L_957573: /* 957573: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 957576: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 957578: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95757a: je 0x957595 */
  if (zf) goto L_957595;
L_95757c: /* 95757c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_957580: /* 957580: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 957583: and edx, 0xffffdfff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffdfffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 957589: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95758c: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 95758f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 957591: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957593: jne 0x957580 */
  if (!zf) goto L_957580;
L_957595: /* 957595: cmp dword ptr [esi + 0x24], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x24u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957598: je 0x9575b5 */
  if (zf) goto L_9575b5;
L_95759a: /* 95759a: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 95759f: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 9575a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9575a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9575a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9575a6: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 9575a9: call 0x95e620 */
  esp -= 4; W32(esp, 0x9575aeu); SPILL(); f_95e620(); if (g_unwind) return; RELOAD();
/* 9575ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9575b1: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_9575b5: /* 9575b5: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 9575b8: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9575bb: je 0x9575ce */
  if (zf) goto L_9575ce;
L_9575bd: /* 9575bd: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 9575c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9575c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9575c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9575c4: call 0x95e870 */
  esp -= 4; W32(esp, 0x9575c9u); SPILL(); f_95e870(); if (g_unwind) return; RELOAD();
/* 9575c9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9575cc: mov ebx, eax */
  ebx = eax;
L_9575ce: /* 9575ce: cmp dword ptr [0xcf8478], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8478u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9575d4: jne 0x9575f5 */
  if (!zf) goto L_9575f5;
L_9575d6: /* 9575d6: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9575da: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9575dc: je 0x9575e0 */
  if (zf) goto L_9575e0;
L_9575de: /* 9575de: mov ebx, eax */
  ebx = eax;
L_9575e0: /* 9575e0: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9575e2: je 0x9575e9 */
  if (zf) goto L_9575e9;
L_9575e4: /* 9575e4: mov dword ptr [esi + 0x10], ebx */
  W32((uint32_t)(esi + 0x10u), ebx);
/* 9575e7: jmp 0x9575ef */
  goto L_9575ef;
L_9575e9: /* 9575e9: inc dword ptr [0xcf7918] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7918u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf7918u), r);
  }
L_9575ef: /* 9575ef: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 9575f2: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
L_9575f5: /* 9575f5: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 9575f8: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9575fa: jne 0x957560 */
  if (!zf) goto L_957560;
L_957600: /* 957600: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 957607: jl 0x95762c */
  if ((sf != of)) goto L_95762c;
L_957609: /* 957609: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 95760d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95760e: call 0x95f210 */
  esp -= 4; W32(esp, 0x957613u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 957613: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 957617: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957618: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95761d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95761e: push 0xaf8468 */
  { uint32_t v = 0xaf8468u; esp -= 4; W32(esp, v); }
/* 957623: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957624: call 0x953470 */
  esp -= 4; W32(esp, 0x957629u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 957629: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95762c: /* 95762c: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 957633: jl 0x957647 */
  if ((sf != of)) goto L_957647;
L_957635: /* 957635: mov ecx, dword ptr [0xcf8b58] */
  ecx = R32((uint32_t)(0xcf8b58u));
/* 95763b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 95763d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95763e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95763f: call 0x953810 */
  esp -= 4; W32(esp, 0x957644u); SPILL(); f_953810(); if (g_unwind) return; RELOAD();
/* 957644: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_957647: /* 957647: mov eax, edi */
  eax = edi;
/* 957649: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95764a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95764b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95764c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95764d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957650: ret  */
  esp += 4; SPILL(); return;
}

void f_957660(void) {
  LOAD_REGS();
L_957660: /* 957660: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 957661: mov ebp, esp */
  ebp = esp;
/* 957663: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 957666: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 957669: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 95766f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 957670: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 957673: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957674: xor eax, eax */
  eax = 0;
/* 957676: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 957677: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 95767a: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 95767e: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 957682: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 957686: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 95768a: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 95768e: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 957691: mov ecx, dword ptr [eax + ebx*4 + 4] */
  ecx = R32((uint32_t)(eax + ebx*4 + 0x4u));
/* 957695: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 957696: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 957698: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 957699: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95769a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 95769d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95769e: mov dword ptr [esp + 0x38], 0xff7fffff */
  W32((uint32_t)(esp + 0x38u), 0xff7fffffu);
/* 9576a6: call 0x95e420 */
  esp -= 4; W32(esp, 0x9576abu); SPILL(); f_95e420(); if (g_unwind) return; RELOAD();
/* 9576ab: mov esi, eax */
  esi = eax;
/* 9576ad: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 9576b2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9576b5: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9576b8: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 9576bc: jl 0x9576de */
  if ((sf != of)) goto L_9576de;
L_9576be: /* 9576be: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 9576c1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 9576c3: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 9576c6: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 9576cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9576cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9576ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9576cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9576d0: push 0xaf86b0 */
  { uint32_t v = 0xaf86b0u; esp -= 4; W32(esp, v); }
/* 9576d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9576d6: call 0x953470 */
  esp -= 4; W32(esp, 0x9576dbu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9576db: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9576de: /* 9576de: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 9576e3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9576e4: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 9576ec: mov dword ptr [0xcf8bf8], eax */
  W32((uint32_t)(0xcf8bf8u), eax);
/* 9576f1: jmp 0x957710 */
  goto L_957710;
L_9576f3: /* 9576f3: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 9576f8: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 9576fb: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 9576fe: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 957702: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 957703: mov dword ptr [0xcf8bf8], eax */
  W32((uint32_t)(0xcf8bf8u), eax);
/* 957708: jmp 0x957710 */
  goto L_957710;
L_95770a: /* 95770a: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 95770e: mov edi, edi */
  edi = edi;
L_957710: /* 957710: inc dword ptr [0xcf7908] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7908u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf7908u), r);
  }
/* 957716: mov edx, dword ptr [0xcf8bf8] */
  edx = R32((uint32_t)(0xcf8bf8u));
/* 95771c: mov dword ptr [edi + 0x34], edx */
  W32((uint32_t)(edi + 0x34u), edx);
/* 95771f: mov ecx, dword ptr [0xcf8c10] */
  ecx = R32((uint32_t)(0xcf8c10u));
/* 957725: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 957729: mov esi, dword ptr [ecx + esi*4 + 4] */
  esi = R32((uint32_t)(ecx + esi*4 + 0x4u));
/* 95772d: xor eax, eax */
  eax = 0;
/* 95772f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957731: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 957735: je 0x957938 */
  if (zf) goto L_957938;
L_95773b: /* 95773b: nop  */
/* 95773c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_957740: /* 957740: test dword ptr [esi + 0x3c], 0x100000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957747: je 0x95790c */
  if (zf) goto L_95790c;
L_95774d: /* 95774d: mov edx, dword ptr [0xcf8bf8] */
  edx = R32((uint32_t)(0xcf8bf8u));
/* 957753: cmp dword ptr [esi + 0x34], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x34u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957756: je 0x95790c */
  if (zf) goto L_95790c;
L_95775c: /* 95775c: mov edx, dword ptr [0xcf7914] */
  edx = R32((uint32_t)(0xcf7914u));
/* 957762: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 957763: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 957767: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957768: mov dword ptr [0xcf7914], edx */
  W32((uint32_t)(0xcf7914u), edx);
/* 95776e: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 957771: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 957774: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 957778: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 957779: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95777a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95777b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95777c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 95777e: call 0x95efb0 */
  esp -= 4; W32(esp, 0x957783u); SPILL(); f_95efb0(); if (g_unwind) return; RELOAD();
/* 957783: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957786: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957788: je 0x95790c */
  if (zf) goto L_95790c;
L_95778e: /* 95778e: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 957791: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 957794: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 957798: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 95779a: shr ecx, 0xb */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 95779d: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9577a0: xor edx, edx */
  edx = 0;
/* 9577a2: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9577a4: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 9577a7: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9577ab: lea ecx, [ecx + eax*4 + 4] */
  ecx = (uint32_t)(ecx + eax*4 + 0x4u);
/* 9577af: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 9577b2: cmp dword ptr [ecx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9577b5: je 0x9577f3 */
  if (zf) goto L_9577f3;
L_9577b7: /* 9577b7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9577bb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9577bd: jne 0x95790c */
  if (!zf) goto L_95790c;
L_9577c3: /* 9577c3: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9577c7: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 9577ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9577cb: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 9577ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9577cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9577d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9577d1: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9577d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9577d7: push 0xaf8648 */
  { uint32_t v = 0xaf8648u; esp -= 4; W32(esp, v); }
/* 9577dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9577dd: call 0x953470 */
  esp -= 4; W32(esp, 0x9577e2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9577e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9577e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9577e4: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 9577e6: call 0x96e130 */
  esp -= 4; W32(esp, 0x9577ebu); SPILL(); f_96e130(); if (g_unwind) return; RELOAD();
/* 9577eb: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9577ee: jmp 0x95790c */
  goto L_95790c;
L_9577f3: /* 9577f3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9577f5: je 0x957904 */
  if (zf) goto L_957904;
L_9577fb: /* 9577fb: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9577ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957801: je 0x957858 */
  if (zf) goto L_957858;
L_957803: /* 957803: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 957806: cmp dword ptr [edx + ebx*4 + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebx*4 + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95780b: jne 0x95790c */
  if (!zf) goto L_95790c;
L_957811: /* 957811: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 957813: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 957816: mov dword ptr [eax + ebx*4 + 4], 2 */
  W32((uint32_t)(eax + ebx*4 + 0x4u), 0x2u);
/* 95781e: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 957821: add dword ptr [eax], -2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 957824: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95782b: jl 0x95790c */
  if ((sf != of)) goto L_95790c;
L_957831: /* 957831: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 957834: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 957838: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 95783b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95783c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95783d: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 957843: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 957844: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957845: push 0xaf85f8 */
  { uint32_t v = 0xaf85f8u; esp -= 4; W32(esp, v); }
/* 95784a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95784b: call 0x953470 */
  esp -= 4; W32(esp, 0x957850u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 957850: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957853: jmp 0x95790c */
  goto L_95790c;
L_957858: /* 957858: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 95785c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95785d: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* 957861: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957862: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 957863: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957864: call 0x9709f0 */
  esp -= 4; W32(esp, 0x957869u); SPILL(); f_9709f0(); if (g_unwind) return; RELOAD();
/* 957869: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 95786d: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 957871: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 957872: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 957876: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 957877: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957878: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 957879: call 0x9709f0 */
  esp -= 4; W32(esp, 0x95787eu); SPILL(); f_9709f0(); if (g_unwind) return; RELOAD();
/* 95787e: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 957882: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 957884: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957887: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 957889: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95788c: jne 0x957894 */
  if (!zf) goto L_957894;
L_95788e: /* 95788e: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 957892: jmp 0x957896 */
  goto L_957896;
L_957894: /* 957894: fstp st(0) */
  STI(0) = ST0; FPOP();
L_957896: /* 957896: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 95789a: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 95789e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9578a0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9578a3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9578a7: jne 0x9578c1 */
  if (!zf) goto L_9578c1;
L_9578a9: /* 9578a9: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 9578ad: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 9578b1: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 9578b5: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 9578b9: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 9578bd: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
L_9578c1: /* 9578c1: cmp dword ptr [0xcf8438], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9578c8: jl 0x95790c */
  if ((sf != of)) goto L_95790c;
L_9578ca: /* 9578ca: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 9578ce: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9578d2: mov ecx, dword ptr [edx + 0x38] */
  ecx = R32((uint32_t)(edx + 0x38u));
/* 9578d5: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9578d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9578da: mov ecx, dword ptr [edx + 0x38] */
  ecx = R32((uint32_t)(edx + 0x38u));
/* 9578dd: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 9578e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9578e1: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 9578e7: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9578ea: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9578ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9578ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9578ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9578f0: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 9578f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9578f4: push 0xaf8598 */
  { uint32_t v = 0xaf8598u; esp -= 4; W32(esp, v); }
/* 9578f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9578fa: call 0x953470 */
  esp -= 4; W32(esp, 0x9578ffu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9578ff: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957902: jmp 0x95790c */
  goto L_95790c;
L_957904: /* 957904: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 957908: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
L_95790c: /* 95790c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 957910: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 957913: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 957914: xor edx, edx */
  edx = 0;
/* 957916: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 957918: mov ecx, dword ptr [0xcf8c10] */
  ecx = R32((uint32_t)(0xcf8c10u));
/* 95791e: setge dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 957921: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 957922: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 957924: mov esi, dword ptr [ecx + eax*4 + 4] */
  esi = R32((uint32_t)(ecx + eax*4 + 0x4u));
/* 957928: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95792a: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 95792e: jne 0x957740 */
  if (!zf) goto L_957740;
L_957934: /* 957934: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
L_957938: /* 957938: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95793a: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 95793e: mov edi, eax */
  edi = eax;
/* 957940: jne 0x95770a */
  if (!zf) goto L_95770a;
L_957946: /* 957946: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 95794a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95794c: jne 0x957a05 */
  if (!zf) goto L_957a05;
L_957952: /* 957952: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 957956: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957958: jne 0x957987 */
  if (!zf) goto L_957987;
L_95795a: /* 95795a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 95795e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 957961: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 957964: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 957967: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 957968: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95796e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95796f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 957970: push 0xaf8530 */
  { uint32_t v = 0xaf8530u; esp -= 4; W32(esp, v); }
/* 957975: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 957976: call 0x953470 */
  esp -= 4; W32(esp, 0x95797bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95797b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95797c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95797d: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 95797f: call 0x9535b0 */
  esp -= 4; W32(esp, 0x957984u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 957984: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_957987: /* 957987: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 95798a: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 95798e: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 957992: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 957996: mov dword ptr [eax + ecx*4 + 4], edi */
  W32((uint32_t)(eax + ecx*4 + 0x4u), edi);
/* 95799a: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 95799d: mov dword ptr [eax + edx*4 + 4], esi */
  W32((uint32_t)(eax + edx*4 + 0x4u), esi);
/* 9579a1: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 9579a4: add dword ptr [eax], -2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 9579a7: mov ebx, dword ptr [0xcf7998] */
  ebx = R32((uint32_t)(0xcf7998u));
/* 9579ad: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 9579b2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 9579b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9579b5: mov dword ptr [0xcf7998], ebx */
  W32((uint32_t)(0xcf7998u), ebx);
/* 9579bb: je 0x9579db */
  if (zf) goto L_9579db;
L_9579bd: /* 9579bd: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 9579c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9579c1: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 9579c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9579c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9579c6: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 9579cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9579cd: push 0xaf84e0 */
  { uint32_t v = 0xaf84e0u; esp -= 4; W32(esp, v); }
/* 9579d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9579d3: call 0x953470 */
  esp -= 4; W32(esp, 0x9579d8u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9579d8: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9579db: /* 9579db: push 0xaf84c0 */
  { uint32_t v = 0xaf84c0u; esp -= 4; W32(esp, v); }
/* 9579e0: call 0x96f160 */
  esp -= 4; W32(esp, 0x9579e5u); SPILL(); f_96f160(); if (g_unwind) return; RELOAD();
/* 9579e5: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 9579ea: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9579ed: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9579f0: jl 0x957a05 */
  if ((sf != of)) goto L_957a05;
L_9579f2: /* 9579f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9579f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9579f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9579f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9579f8: push 0xaf84ac */
  { uint32_t v = 0xaf84acu; esp -= 4; W32(esp, v); }
/* 9579fd: call 0x953700 */
  esp -= 4; W32(esp, 0x957a02u); SPILL(); f_953700(); if (g_unwind) return; RELOAD();
/* 957a02: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_957a05: /* 957a05: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 957a09: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 957a0a: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 957a0d: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 957a11: jl 0x9576f3 */
  if ((sf != of)) goto L_9576f3;
L_957a17: /* 957a17: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 957a18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 957a19: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 957a1a: mov esp, ebp */
  esp = ebp;
/* 957a1c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 957a1d: ret  */
  esp += 4; SPILL(); return;
}

void f_957a20(void) {
  LOAD_REGS();
L_957a20: /* 957a20: mov eax, dword ptr [0xcf8440] */
  eax = R32((uint32_t)(0xcf8440u));
/* 957a25: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 957a28: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 957a29: xor ebx, ebx */
  ebx = 0;
/* 957a2b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957a2d: mov eax, dword ptr [0xcf8444] */
  eax = R32((uint32_t)(0xcf8444u));
/* 957a32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957a33: jne 0x957a70 */
  if (!zf) goto L_957a70;
L_957a35: /* 957a35: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957a37: jne 0x957a78 */
  if (!zf) goto L_957a78;
L_957a39: /* 957a39: mov esi, dword ptr [0xcf8b4c] */
  esi = R32((uint32_t)(0xcf8b4cu));
/* 957a3f: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957a41: je 0x957b2f */
  if (zf) goto L_957b2f;
L_957a47: /* 957a47: cmp dword ptr [esi + 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957a4a: je 0x957b2f */
  if (zf) goto L_957b2f;
L_957a50: /* 957a50: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 957a53: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957a55: lea eax, [esi + 0x30] */
  eax = (uint32_t)(esi + 0x30u);
/* 957a58: je 0x957a63 */
  if (zf) goto L_957a63;
L_957a5a: /* 957a5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957a5b: call 0x94ee00 */
  esp -= 4; W32(esp, 0x957a60u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 957a60: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_957a63: /* 957a63: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 957a66: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957a68: jne 0x957a47 */
  if (!zf) goto L_957a47;
L_957a6a: /* 957a6a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 957a6b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 957a6c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957a6f: ret  */
  esp += 4; SPILL(); return;
L_957a70: /* 957a70: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957a72: jne 0x957b2f */
  if (!zf) goto L_957b2f;
L_957a78: /* 957a78: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 957a7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957a7d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 957a7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 957a7f: call 0x964120 */
  esp -= 4; W32(esp, 0x957a84u); SPILL(); f_964120(); if (g_unwind) return; RELOAD();
/* 957a84: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 957a8a: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 957a90: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957a93: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 957a95: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 957a98: jp 0x957ab2 */
  if (pf) goto L_957ab2;
L_957a9a: /* 957a9a: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 957a9e: fild dword ptr [0xcf85cc] */
  { double v = (double)(int32_t)R32((uint32_t)(0xcf85ccu)); FPUSH(v); }
/* 957aa4: fsqrt  */
  ST0 = sqrt(ST0);
/* 957aa6: fmul dword ptr [0xcf8bb4] */
  ST0 = ST0 * (F32((uint32_t)(0xcf8bb4u)));
/* 957aac: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 957aae: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
L_957ab2: /* 957ab2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 957ab3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 957ab4: mov edi, dword ptr [0xcf8b4c] */
  edi = R32((uint32_t)(0xcf8b4cu));
/* 957aba: xor ebp, ebp */
  ebp = 0;
/* 957abc: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957abe: je 0x957b21 */
  if (zf) goto L_957b21;
L_957ac0: /* 957ac0: cmp dword ptr [edi + 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x1cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957ac3: je 0x957b21 */
  if (zf) goto L_957b21;
L_957ac5: /* 957ac5: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 957ac8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957aca: je 0x957b1a */
  if (zf) goto L_957b1a;
L_957acc: /* 957acc: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 957acf: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 957ad1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957ad3: je 0x957b0e */
  if (zf) goto L_957b0e;
L_957ad5: /* 957ad5: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 957ad9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 957ada: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 957adb: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 957ade: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957adf: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 957ae0: call 0x96fa90 */
  esp -= 4; W32(esp, 0x957ae5u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 957ae5: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 957ae9: fcomp dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
  FPOP();
/* 957aed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957af0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 957af2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 957af5: mov eax, dword ptr [0xcf8444] */
  eax = R32((uint32_t)(0xcf8444u));
/* 957afa: jnp 0x957b01 */
  if (!pf) goto L_957b01;
L_957afc: /* 957afc: mov eax, dword ptr [0xcf8440] */
  eax = R32((uint32_t)(0xcf8440u));
L_957b01: /* 957b01: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957b03: jne 0x957b08 */
  if (!zf) goto L_957b08;
L_957b05: /* 957b05: mov dword ptr [esi - 4], ebx */
  W32((uint32_t)(esi + 0xfffffffcu), ebx);
L_957b08: /* 957b08: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 957b0a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957b0c: jne 0x957ad5 */
  if (!zf) goto L_957ad5;
L_957b0e: /* 957b0e: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 957b11: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 957b12: call 0x94e9b0 */
  esp -= 4; W32(esp, 0x957b17u); SPILL(); f_94e9b0(); if (g_unwind) return; RELOAD();
/* 957b17: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_957b1a: /* 957b1a: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 957b1d: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957b1f: jne 0x957ac0 */
  if (!zf) goto L_957ac0;
L_957b21: /* 957b21: mov eax, dword ptr [0xcf7808] */
  eax = R32((uint32_t)(0xcf7808u));
/* 957b26: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 957b28: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 957b29: mov dword ptr [0xcf7808], eax */
  W32((uint32_t)(0xcf7808u), eax);
/* 957b2e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_957b2f: /* 957b2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 957b30: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 957b31: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957b34: ret  */
  esp += 4; SPILL(); return;
}

void f_957b40(void) {
  LOAD_REGS();
L_957b40: /* 957b40: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 957b43: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 957b48: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957b4a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 957b4b: mov ebx, dword ptr [0xcf85cc] */
  ebx = R32((uint32_t)(0xcf85ccu));
/* 957b51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957b52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 957b53: mov dword ptr [esp + 0xc], 0x7f7fffff */
  W32((uint32_t)(esp + 0xcu), 0x7f7fffffu);
/* 957b5b: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 957b63: je 0x957b66 */
  if (zf) goto L_957b66;
L_957b65: /* 957b65: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
L_957b66: /* 957b66: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 957b6a: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 957b6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957b6f: je 0x957bb1 */
  if (zf) goto L_957bb1;
L_957b71: /* 957b71: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 957b74: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957b76: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 957b79: je 0x957bb1 */
  if (zf) goto L_957bb1;
L_957b7b: /* 957b7b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 957b7c: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 957b80: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
L_957b82: /* 957b82: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 957b85: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 957b86: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 957b87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 957b88: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 957b8b: call 0x964220 */
  esp -= 4; W32(esp, 0x957b90u); SPILL(); f_964220(); if (g_unwind) return; RELOAD();
/* 957b90: fcom dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
/* 957b94: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957b97: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 957b99: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 957b9c: jp 0x957ba8 */
  if (pf) goto L_957ba8;
L_957b9e: /* 957b9e: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 957ba2: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 957ba6: jmp 0x957baa */
  goto L_957baa;
L_957ba8: /* 957ba8: fstp st(0) */
  STI(0) = ST0; FPOP();
L_957baa: /* 957baa: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 957bac: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957bae: jne 0x957b82 */
  if (!zf) goto L_957b82;
L_957bb0: /* 957bb0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_957bb1: /* 957bb1: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 957bb5: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 957bb9: fsqrt  */
  ST0 = sqrt(ST0);
/* 957bbb: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 957bbf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 957bc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 957bc1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 957bc2: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 957bc4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957bc7: ret  */
  esp += 4; SPILL(); return;
}

void f_957bd0(void) {
  LOAD_REGS();
L_957bd0: /* 957bd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 957bd4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957bd5: lea esi, [eax + eax + 2] */
  esi = (uint32_t)(eax + eax + 0x2u);
/* 957bd9: or esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 957bdc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_957be0: /* 957be0: mov eax, esi */
  eax = esi;
/* 957be2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 957be3: mov ecx, 3 */
  ecx = 0x3u;
/* 957be8: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x957be8);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 957bea: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957bec: je 0x957bfc */
  if (zf) goto L_957bfc;
L_957bee: /* 957bee: mov eax, esi */
  eax = esi;
/* 957bf0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 957bf1: mov ecx, 5 */
  ecx = 0x5u;
/* 957bf6: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x957bf6);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 957bf8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957bfa: jne 0x957c01 */
  if (!zf) goto L_957c01;
L_957bfc: /* 957bfc: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 957bff: jmp 0x957be0 */
  goto L_957be0;
L_957c01: /* 957c01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957c02: call 0x94f020 */
  esp -= 4; W32(esp, 0x957c07u); SPILL(); f_94f020(); if (g_unwind) return; RELOAD();
/* 957c07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957c08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 957c0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957c0b: mov dword ptr [0xcf8c10], eax */
  W32((uint32_t)(0xcf8c10u), eax);
/* 957c10: call 0x94f610 */
  esp -= 4; W32(esp, 0x957c15u); SPILL(); f_94f610(); if (g_unwind) return; RELOAD();
/* 957c15: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957c18: mov eax, esi */
  eax = esi;
/* 957c1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 957c1b: ret  */
  esp += 4; SPILL(); return;
}

void f_957c20(void) {
  LOAD_REGS();
L_957c20: /* 957c20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957c21: mov esi, dword ptr [0xcf7a90] */
  esi = R32((uint32_t)(0xcf7a90u));
/* 957c27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 957c28: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 957c29: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 957c2b: mov dword ptr [0xcf7a90], esi */
  W32((uint32_t)(0xcf7a90u), esi);
/* 957c31: call 0x9538c0 */
  esp -= 4; W32(esp, 0x957c36u); SPILL(); f_9538c0(); if (g_unwind) return; RELOAD();
/* 957c36: mov esi, eax */
  esi = eax;
/* 957c38: xor eax, eax */
  eax = 0;
/* 957c3a: mov ecx, 6 */
  ecx = 0x6u;
/* 957c3f: mov edi, esi */
  edi = esi;
/* 957c41: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 957c43: mov ecx, dword ptr [0xcf8b98] */
  ecx = R32((uint32_t)(0xcf8b98u));
/* 957c49: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957c4c: cmp ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957c52: jne 0x957c79 */
  if (!zf) goto L_957c79;
L_957c54: /* 957c54: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 957c59: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 957c5a: push 0xaf8730 */
  { uint32_t v = 0xaf8730u; esp -= 4; W32(esp, v); }
/* 957c5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957c60: call 0x953470 */
  esp -= 4; W32(esp, 0x957c65u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 957c65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 957c67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 957c69: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 957c6b: call 0x9535b0 */
  esp -= 4; W32(esp, 0x957c70u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 957c70: mov ecx, dword ptr [0xcf8b98] */
  ecx = R32((uint32_t)(0xcf8b98u));
/* 957c76: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_957c79: /* 957c79: cmp ecx, dword ptr [0xcf8b6c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b6cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957c7f: jne 0x957c87 */
  if (!zf) goto L_957c87;
L_957c81: /* 957c81: mov dword ptr [0xcf8b70], esi */
  W32((uint32_t)(0xcf8b70u), esi);
L_957c87: /* 957c87: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 957c8a: mov edx, eax */
  edx = eax;
/* 957c8c: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 957c8e: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 957c94: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 957c96: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 957c9a: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 957c9d: inc dword ptr [0xcf8b98] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8b98u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf8b98u), r);
  }
/* 957ca3: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 957ca6: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 957cad: jl 0x957cd7 */
  if ((sf != of)) goto L_957cd7;
L_957caf: /* 957caf: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 957cb2: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 957cb8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 957cb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957cba: call 0x95f210 */
  esp -= 4; W32(esp, 0x957cbfu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 957cbf: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 957cc5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957cc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957cc9: push 0xaf8704 */
  { uint32_t v = 0xaf8704u; esp -= 4; W32(esp, v); }
/* 957cce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 957ccf: call 0x953470 */
  esp -= 4; W32(esp, 0x957cd4u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 957cd4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_957cd7: /* 957cd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 957cd8: mov eax, esi */
  eax = esi;
/* 957cda: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 957cdb: ret  */
  esp += 4; SPILL(); return;
}

void f_957ce0(void) {
  LOAD_REGS();
L_957ce0: /* 957ce0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 957ce1: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 957ce5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 957ce6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957ce7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 957ce8: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 957cec: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957cef: jne 0x957cf8 */
  if (!zf) goto L_957cf8;
L_957cf1: /* 957cf1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 957cf3: mov ebp, dword ptr [eax + 8] */
  ebp = R32((uint32_t)(eax + 0x8u));
/* 957cf6: jmp 0x957cfd */
  goto L_957cfd;
L_957cf8: /* 957cf8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 957cfa: mov ebp, dword ptr [ecx + 4] */
  ebp = R32((uint32_t)(ecx + 0x4u));
L_957cfd: /* 957cfd: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 957d00: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957d02: je 0x957d38 */
  if (zf) goto L_957d38;
L_957d04: /* 957d04: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 957d07: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 957d09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957d0b: je 0x957d38 */
  if (zf) goto L_957d38;
L_957d0d: /* 957d0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_957d10: /* 957d10: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 957d13: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957d15: je 0x957d32 */
  if (zf) goto L_957d32;
L_957d17: /* 957d17: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957d1a: jne 0x957d26 */
  if (!zf) goto L_957d26;
L_957d1c: /* 957d1c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 957d1e: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 957d21: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 957d24: jmp 0x957d2e */
  goto L_957d2e;
L_957d26: /* 957d26: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 957d28: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 957d2b: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
L_957d2e: /* 957d2e: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957d30: je 0x957d3f */
  if (zf) goto L_957d3f;
L_957d32: /* 957d32: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 957d34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957d36: jne 0x957d10 */
  if (!zf) goto L_957d10;
L_957d38: /* 957d38: xor eax, eax */
  eax = 0;
L_957d3a: /* 957d3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 957d3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 957d3c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 957d3d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 957d3e: ret  */
  esp += 4; SPILL(); return;
L_957d3f: /* 957d3f: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 957d43: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957d45: je 0x957d3a */
  if (zf) goto L_957d3a;
L_957d47: /* 957d47: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 957d48: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 957d49: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 957d4a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 957d4c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 957d4d: ret  */
  esp += 4; SPILL(); return;
}

void f_957d50(void) {
  LOAD_REGS();
L_957d50: /* 957d50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 957d51: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 957d58: jl 0x957d6d */
  if ((sf != of)) goto L_957d6d;
L_957d5a: /* 957d5a: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 957d5f: push 0xaf87c0 */
  { uint32_t v = 0xaf87c0u; esp -= 4; W32(esp, v); }
/* 957d64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957d65: call 0x953470 */
  esp -= 4; W32(esp, 0x957d6au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 957d6a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_957d6d: /* 957d6d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 957d6e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 957d6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957d70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 957d71: mov edi, dword ptr [0xcf8b4c] */
  edi = R32((uint32_t)(0xcf8b4cu));
/* 957d77: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957d79: je 0x957e00 */
  if (zf) goto L_957e00;
L_957d7f: /* 957d7f: nop  */
L_957d80: /* 957d80: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 957d83: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957d85: je 0x957e00 */
  if (zf) goto L_957e00;
L_957d87: /* 957d87: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 957d8a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957d8c: lea ebp, [edi + 0x2c] */
  ebp = (uint32_t)(edi + 0x2cu);
/* 957d8f: je 0x957df0 */
  if (zf) goto L_957df0;
L_957d91: /* 957d91: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 957d94: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957d96: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 957d99: je 0x957df0 */
  if (zf) goto L_957df0;
L_957d9b: /* 957d9b: nop  */
/* 957d9c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_957da0: /* 957da0: mov ecx, dword ptr [0xcf8b88] */
  ecx = R32((uint32_t)(0xcf8b88u));
/* 957da6: mov eax, dword ptr [0xcf8440] */
  eax = R32((uint32_t)(0xcf8440u));
/* 957dab: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 957dae: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 957daf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957db1: mov dword ptr [0xcf8b88], ecx */
  W32((uint32_t)(0xcf8b88u), ecx);
/* 957db7: jne 0x957dc2 */
  if (!zf) goto L_957dc2;
L_957db9: /* 957db9: mov eax, dword ptr [0xcf85c8] */
  eax = R32((uint32_t)(0xcf85c8u));
/* 957dbe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957dc0: je 0x957dea */
  if (zf) goto L_957dea;
L_957dc2: /* 957dc2: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 957dc6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 957dc7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 957dc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957dc9: call 0x96fa90 */
  esp -= 4; W32(esp, 0x957dceu); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 957dce: mov ecx, dword ptr [0xcf79fc] */
  ecx = R32((uint32_t)(0xcf79fcu));
/* 957dd4: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 957dd8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 957dd9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 957dda: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 957ddb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957ddc: mov dword ptr [0xcf79fc], ecx */
  W32((uint32_t)(0xcf79fcu), ecx);
/* 957de2: call 0x96ead0 */
  esp -= 4; W32(esp, 0x957de7u); SPILL(); f_96ead0(); if (g_unwind) return; RELOAD();
/* 957de7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_957dea: /* 957dea: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 957dec: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957dee: jne 0x957da0 */
  if (!zf) goto L_957da0;
L_957df0: /* 957df0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 957df1: call 0x94ee00 */
  esp -= 4; W32(esp, 0x957df6u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 957df6: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 957df9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957dfc: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957dfe: jne 0x957d80 */
  if (!zf) goto L_957d80;
L_957e00: /* 957e00: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 957e01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 957e02: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 957e03: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 957e04: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 957e05: ret  */
  esp += 4; SPILL(); return;
}

void f_957e10(void) {
  LOAD_REGS();
L_957e10: /* 957e10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957e11: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 957e15: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 957e17: jl 0x957e55 */
  if ((sf != of)) goto L_957e55;
L_957e19: /* 957e19: mov eax, dword ptr [0xcf85d4] */
  eax = R32((uint32_t)(0xcf85d4u));
/* 957e1e: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 957e20: jge 0x957e35 */
  if ((sf == of)) goto L_957e35;
L_957e22: /* 957e22: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 957e27: mov ecx, dword ptr [0xcf85d8] */
  ecx = R32((uint32_t)(0xcf85d8u));
/* 957e2d: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 957e30: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 957e33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 957e34: ret  */
  esp += 4; SPILL(); return;
L_957e35: /* 957e35: mov edx, dword ptr [0xcf8c14] */
  edx = R32((uint32_t)(0xcf8c14u));
/* 957e3b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 957e3c: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 957e3e: call 0x94f340 */
  esp -= 4; W32(esp, 0x957e43u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 957e43: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957e46: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 957e48: jge 0x957e55 */
  if ((sf == of)) goto L_957e55;
L_957e4a: /* 957e4a: mov eax, dword ptr [0xcf8c14] */
  eax = R32((uint32_t)(0xcf8c14u));
/* 957e4f: mov eax, dword ptr [eax + esi*4 + 4] */
  eax = R32((uint32_t)(eax + esi*4 + 0x4u));
/* 957e53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 957e54: ret  */
  esp += 4; SPILL(); return;
L_957e55: /* 957e55: xor eax, eax */
  eax = 0;
/* 957e57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 957e58: ret  */
  esp += 4; SPILL(); return;
}

void f_957e60(void) {
  LOAD_REGS();
L_957e60: /* 957e60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 957e61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957e62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 957e63: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 957e67: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 957e69: mov esi, dword ptr [edi + eax*4 + 4] */
  esi = R32((uint32_t)(edi + eax*4 + 0x4u));
/* 957e6d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957e6f: je 0x957e74 */
  if (zf) goto L_957e74;
L_957e71: /* 957e71: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 957e72: jmp 0x957e76 */
  goto L_957e76;
L_957e74: /* 957e74: mov esi, eax */
  esi = eax;
L_957e76: /* 957e76: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 957e7a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 957e7b: call 0x95f210 */
  esp -= 4; W32(esp, 0x957e80u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 957e80: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957e83: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 957e85: jge 0x957ea0 */
  if ((sf == of)) goto L_957ea0;
L_957e87: /* 957e87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957e88: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 957e8d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 957e8e: push 0xaf884c */
  { uint32_t v = 0xaf884cu; esp -= 4; W32(esp, v); }
/* 957e93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957e94: call 0x953470 */
  esp -= 4; W32(esp, 0x957e99u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 957e99: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957e9c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 957e9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 957e9e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 957e9f: ret  */
  esp += 4; SPILL(); return;
L_957ea0: /* 957ea0: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 957ea2: jl 0x957eda */
  if ((sf != of)) goto L_957eda;
L_957ea4: /* 957ea4: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 957eaa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957eab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957eac: push 0xaf8808 */
  { uint32_t v = 0xaf8808u; esp -= 4; W32(esp, v); }
/* 957eb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 957eb2: call 0x953470 */
  esp -= 4; W32(esp, 0x957eb7u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 957eb7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957eba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 957ebb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 957ebc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 957ebd: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 957ec5: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 957ecd: mov dword ptr [esp + 4], 5 */
  W32((uint32_t)(esp + 0x4u), 0x5u);
/* 957ed5: jmp 0x9535b0 */
  SPILL(); f_9535b0(); return;
L_957eda: /* 957eda: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 957ede: mov dword ptr [edi + eax*4 + 4], edx */
  W32((uint32_t)(edi + eax*4 + 0x4u), edx);
/* 957ee2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 957ee3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 957ee4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 957ee5: ret  */
  esp += 4; SPILL(); return;
}

void f_957ef0(void) {
  LOAD_REGS();
L_957ef0: /* 957ef0: mov eax, dword ptr [0xcf8c14] */
  eax = R32((uint32_t)(0xcf8c14u));
/* 957ef5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 957ef6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957ef7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 957ef8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957ef9: call 0x94f340 */
  esp -= 4; W32(esp, 0x957efeu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 957efe: mov ebx, dword ptr [0xcf85d4] */
  ebx = R32((uint32_t)(0xcf85d4u));
/* 957f04: mov esi, eax */
  esi = eax;
/* 957f06: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 957f08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957f09: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x957f0eu); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 957f0e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957f0f: mov ebx, eax */
  ebx = eax;
/* 957f11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 957f13: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 957f14: call 0x94f610 */
  esp -= 4; W32(esp, 0x957f19u); SPILL(); f_94f610(); if (g_unwind) return; RELOAD();
/* 957f19: mov ecx, dword ptr [0xcf8bfc] */
  ecx = R32((uint32_t)(0xcf8bfcu));
/* 957f1f: mov esi, dword ptr [0xcf8b4c] */
  esi = R32((uint32_t)(0xcf8b4cu));
/* 957f25: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957f28: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 957f29: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957f2b: mov dword ptr [0xcf8bfc], ecx */
  W32((uint32_t)(0xcf8bfcu), ecx);
/* 957f31: je 0x957fd7 */
  if (zf) goto L_957fd7;
L_957f37: /* 957f37: jmp 0x957f40 */
  goto L_957f40;
L_957f39: /* 957f39: mov ecx, dword ptr [0xcf8bfc] */
  ecx = R32((uint32_t)(0xcf8bfcu));
/* 957f3f: nop  */
L_957f40: /* 957f40: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 957f43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957f45: je 0x957fd7 */
  if (zf) goto L_957fd7;
L_957f4b: /* 957f4b: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 957f4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957f50: je 0x957f84 */
  if (zf) goto L_957f84;
L_957f52: /* 957f52: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 957f55: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 957f57: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957f59: je 0x957f84 */
  if (zf) goto L_957f84;
L_957f5b: /* 957f5b: jmp 0x957f63 */
  goto L_957f63;
L_957f5d: /* 957f5d: mov ecx, dword ptr [0xcf8bfc] */
  ecx = R32((uint32_t)(0xcf8bfcu));
L_957f63: /* 957f63: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 957f66: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 957f69: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 957f6b: je 0x957f7e */
  if (zf) goto L_957f7e;
L_957f6d: /* 957f6d: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 957f70: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 957f73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957f74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 957f75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 957f76: call 0x957e60 */
  esp -= 4; W32(esp, 0x957f7bu); SPILL(); f_957e60(); if (g_unwind) return; RELOAD();
/* 957f7b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_957f7e: /* 957f7e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 957f80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957f82: jne 0x957f5d */
  if (!zf) goto L_957f5d;
L_957f84: /* 957f84: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 957f87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957f89: je 0x957fa8 */
  if (zf) goto L_957fa8;
L_957f8b: /* 957f8b: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 957f8e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 957f90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957f92: je 0x957fa8 */
  if (zf) goto L_957fa8;
L_957f94: /* 957f94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957f95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957f96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 957f97: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 957f9a: call 0x957e60 */
  esp -= 4; W32(esp, 0x957f9fu); SPILL(); f_957e60(); if (g_unwind) return; RELOAD();
/* 957f9f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 957fa1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957fa4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957fa6: jne 0x957f94 */
  if (!zf) goto L_957f94;
L_957fa8: /* 957fa8: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 957fab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957fad: je 0x957fcc */
  if (zf) goto L_957fcc;
L_957faf: /* 957faf: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 957fb2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 957fb4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957fb6: je 0x957fcc */
  if (zf) goto L_957fcc;
L_957fb8: /* 957fb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957fb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957fba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 957fbb: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 957fbe: call 0x957e60 */
  esp -= 4; W32(esp, 0x957fc3u); SPILL(); f_957e60(); if (g_unwind) return; RELOAD();
/* 957fc3: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 957fc5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 957fc8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957fca: jne 0x957fb8 */
  if (!zf) goto L_957fb8;
L_957fcc: /* 957fcc: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 957fcf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 957fd1: jne 0x957f39 */
  if (!zf) goto L_957f39;
L_957fd7: /* 957fd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 957fd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 957fd9: mov eax, ebx */
  eax = ebx;
/* 957fdb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 957fdc: ret  */
  esp += 4; SPILL(); return;
}

void f_957fe0(void) {
  LOAD_REGS();
L_957fe0: /* 957fe0: mov eax, dword ptr [0xcf8c14] */
  eax = R32((uint32_t)(0xcf8c14u));
/* 957fe5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957fe6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 957fe7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 957fe8: call 0x94f340 */
  esp -= 4; W32(esp, 0x957fedu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 957fed: mov edi, dword ptr [0xcf85d4] */
  edi = R32((uint32_t)(0xcf85d4u));
/* 957ff3: mov esi, eax */
  esi = eax;
/* 957ff5: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 957ff7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957ff8: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x957ffdu); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 957ffd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 957ffe: mov edi, eax */
  edi = eax;
/* 958000: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 958002: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 958003: call 0x94f610 */
  esp -= 4; W32(esp, 0x958008u); SPILL(); f_94f610(); if (g_unwind) return; RELOAD();
/* 958008: mov esi, dword ptr [0xcf8b74] */
  esi = R32((uint32_t)(0xcf8b74u));
/* 95800e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958011: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958013: je 0x95802e */
  if (zf) goto L_95802e;
L_958015: /* 958015: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958018: je 0x95802e */
  if (zf) goto L_95802e;
L_95801a: /* 95801a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 95801d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95801e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95801f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 958020: call 0x957e60 */
  esp -= 4; W32(esp, 0x958025u); SPILL(); f_957e60(); if (g_unwind) return; RELOAD();
/* 958025: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 958027: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95802a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95802c: jne 0x958015 */
  if (!zf) goto L_958015;
L_95802e: /* 95802e: mov eax, edi */
  eax = edi;
/* 958030: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 958031: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 958032: ret  */
  esp += 4; SPILL(); return;
}

void f_958040(void) {
  LOAD_REGS();
L_958040: /* 958040: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 958047: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 958048: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 95804c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95804d: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 958051: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 958052: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 958054: jl 0x958072 */
  if ((sf != of)) goto L_958072;
L_958056: /* 958056: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 958059: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 95805c: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 958062: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 958063: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 958064: push 0xaf8888 */
  { uint32_t v = 0xaf8888u; esp -= 4; W32(esp, v); }
/* 958069: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95806a: call 0x953470 */
  esp -= 4; W32(esp, 0x95806fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95806f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_958072: /* 958072: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 958075: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958077: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 95807a: je 0x95807f */
  if (zf) goto L_95807f;
L_95807c: /* 95807c: mov dword ptr [eax + 0x1c], esi */
  W32((uint32_t)(eax + 0x1cu), esi);
L_95807f: /* 95807f: mov dword ptr [edi + 0x18], esi */
  W32((uint32_t)(edi + 0x18u), esi);
/* 958082: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 958084: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 958087: cmp dword ptr [0xcf8b4c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8b4cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95808d: jne 0x958095 */
  if (!zf) goto L_958095;
L_95808f: /* 95808f: mov dword ptr [0xcf8b4c], esi */
  W32((uint32_t)(0xcf8b4cu), esi);
L_958095: /* 958095: cmp dword ptr [0xcf8b54], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8b54u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95809b: jne 0x9580a3 */
  if (!zf) goto L_9580a3;
L_95809d: /* 95809d: mov dword ptr [0xcf8b54], esi */
  W32((uint32_t)(0xcf8b54u), esi);
L_9580a3: /* 9580a3: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* 9580a5: mov eax, dword ptr [0xcf8b80] */
  eax = R32((uint32_t)(0xcf8b80u));
/* 9580aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9580ab: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9580ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9580ad: mov dword ptr [0xcf8b80], eax */
  W32((uint32_t)(0xcf8b80u), eax);
/* 9580b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9580b3: ret  */
  esp += 4; SPILL(); return;
}

void f_9580c0(void) {
  LOAD_REGS();
L_9580c0: /* 9580c0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9580c3: mov eax, dword ptr [0xcf8c10] */
  eax = R32((uint32_t)(0xcf8c10u));
/* 9580c8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9580c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9580ca: xor edi, edi */
  edi = 0;
/* 9580cc: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9580ce: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 9580d2: je 0x958232 */
  if (zf) goto L_958232;
L_9580d8: /* 9580d8: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 9580db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9580dc: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 9580e0: call 0x94f340 */
  esp -= 4; W32(esp, 0x9580e5u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 9580e5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9580e8: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9580ea: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9580ee: jle 0x958232 */
  if ((zf || sf != of)) goto L_958232;
L_9580f4: /* 9580f4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9580f5: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 9580f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9580fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_958100: /* 958100: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958102: je 0x958211 */
  if (zf) goto L_958211;
L_958108: /* 958108: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 95810b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95810d: je 0x95813f */
  if (zf) goto L_95813f;
L_95810f: /* 95810f: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 958112: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 958113: xor edi, edi */
  edi = 0;
/* 958115: call 0x94f340 */
  esp -= 4; W32(esp, 0x95811au); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95811a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95811d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 95811f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 958123: jle 0x95813f */
  if ((zf || sf != of)) goto L_95813f;
L_958125: /* 958125: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958127: je 0x95813f */
  if (zf) goto L_95813f;
L_958129: /* 958129: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95812c: je 0x95813f */
  if (zf) goto L_95813f;
L_95812e: /* 95812e: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958131: je 0x95813f */
  if (zf) goto L_95813f;
L_958133: /* 958133: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 958136: mov esi, dword ptr [ecx + edi*4 + 8] */
  esi = R32((uint32_t)(ecx + edi*4 + 0x8u));
/* 95813a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 95813b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95813d: jl 0x958125 */
  if ((sf != of)) goto L_958125;
L_95813f: /* 95813f: cmp edi, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958143: je 0x958211 */
  if (zf) goto L_958211;
L_958149: /* 958149: mov edx, dword ptr [ebx + 0x38] */
  edx = R32((uint32_t)(ebx + 0x38u));
/* 95814c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 958150: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 958151: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 958152: push 0xaf88cc */
  { uint32_t v = 0xaf88ccu; esp -= 4; W32(esp, v); }
/* 958157: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 958158: call 0x953470 */
  esp -= 4; W32(esp, 0x95815du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95815d: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 958160: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958163: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958165: je 0x958191 */
  if (zf) goto L_958191;
L_958167: /* 958167: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 95816a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95816c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95816e: je 0x958191 */
  if (zf) goto L_958191;
L_958170: /* 958170: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 958173: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 958179: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95817a: push 0xaf88c4 */
  { uint32_t v = 0xaf88c4u; esp -= 4; W32(esp, v); }
/* 95817f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 958180: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 958183: call 0x953470 */
  esp -= 4; W32(esp, 0x958188u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 958188: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95818a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95818d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95818f: jne 0x958170 */
  if (!zf) goto L_958170;
L_958191: /* 958191: push 0xaf88b4 */
  { uint32_t v = 0xaf88b4u; esp -= 4; W32(esp, v); }
/* 958196: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 958197: call 0x953470 */
  esp -= 4; W32(esp, 0x95819cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95819c: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 95819f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9581a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9581a4: je 0x958203 */
  if (zf) goto L_958203;
L_9581a6: /* 9581a6: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 9581a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9581aa: xor edi, edi */
  edi = 0;
/* 9581ac: call 0x94f340 */
  esp -= 4; W32(esp, 0x9581b1u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 9581b1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9581b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9581b6: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9581ba: jle 0x958203 */
  if ((zf || sf != of)) goto L_958203;
L_9581bc: /* 9581bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9581c0: /* 9581c0: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9581c3: jne 0x9581cc */
  if (!zf) goto L_9581cc;
L_9581c5: /* 9581c5: mov esi, 0xfffffffd */
  esi = 0xfffffffdu;
/* 9581ca: jmp 0x9581e4 */
  goto L_9581e4;
L_9581cc: /* 9581cc: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9581cf: jne 0x9581d8 */
  if (!zf) goto L_9581d8;
L_9581d1: /* 9581d1: mov esi, 0xfffffffe */
  esi = 0xfffffffeu;
/* 9581d6: jmp 0x9581e4 */
  goto L_9581e4;
L_9581d8: /* 9581d8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9581da: je 0x9581e1 */
  if (zf) goto L_9581e1;
L_9581dc: /* 9581dc: mov esi, dword ptr [esi + 0x38] */
  esi = R32((uint32_t)(esi + 0x38u));
/* 9581df: jmp 0x9581e4 */
  goto L_9581e4;
L_9581e1: /* 9581e1: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_9581e4: /* 9581e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9581e5: push 0xaf6234 */
  { uint32_t v = 0xaf6234u; esp -= 4; W32(esp, v); }
/* 9581ea: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9581eb: call 0x953470 */
  esp -= 4; W32(esp, 0x9581f0u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9581f0: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9581f4: mov edx, dword ptr [ebx + 0x28] */
  edx = R32((uint32_t)(ebx + 0x28u));
/* 9581f7: mov esi, dword ptr [edx + edi*4 + 8] */
  esi = R32((uint32_t)(edx + edi*4 + 0x8u));
/* 9581fb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9581fe: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9581ff: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 958201: jl 0x9581c0 */
  if ((sf != of)) goto L_9581c0;
L_958203: /* 958203: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 958208: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 958209: call 0x953470 */
  esp -= 4; W32(esp, 0x95820eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95820e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_958211: /* 958211: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 958215: mov ecx, dword ptr [0xcf8c10] */
  ecx = R32((uint32_t)(0xcf8c10u));
/* 95821b: mov ebx, dword ptr [ecx + eax*4 + 8] */
  ebx = R32((uint32_t)(ecx + eax*4 + 0x8u));
/* 95821f: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 958223: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 958224: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 958226: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 95822a: jl 0x958100 */
  if ((sf != of)) goto L_958100;
L_958230: /* 958230: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 958231: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_958232: /* 958232: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 958233: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 958234: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958237: ret  */
  esp += 4; SPILL(); return;
}

void f_958240(void) {
  LOAD_REGS();
L_958240: /* 958240: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 958245: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 958246: push 0xaf8934 */
  { uint32_t v = 0xaf8934u; esp -= 4; W32(esp, v); }
/* 95824b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95824c: call 0x953470 */
  esp -= 4; W32(esp, 0x958251u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 958251: mov esi, dword ptr [0xcf8b4c] */
  esi = R32((uint32_t)(0xcf8b4cu));
/* 958257: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95825a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95825c: je 0x958286 */
  if (zf) goto L_958286;
L_95825e: /* 95825e: mov edi, edi */
  edi = edi;
L_958260: /* 958260: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 958263: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958265: je 0x958286 */
  if (zf) goto L_958286;
L_958267: /* 958267: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 95826a: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 958270: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 958271: push 0xaf6234 */
  { uint32_t v = 0xaf6234u; esp -= 4; W32(esp, v); }
/* 958276: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 958277: call 0x953470 */
  esp -= 4; W32(esp, 0x95827cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95827c: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 95827f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958282: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958284: jne 0x958260 */
  if (!zf) goto L_958260;
L_958286: /* 958286: mov eax, dword ptr [0xcf8b7c] */
  eax = R32((uint32_t)(0xcf8b7cu));
/* 95828b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95828d: je 0x95829a */
  if (zf) goto L_95829a;
L_95828f: /* 95828f: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 958292: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 958298: jmp 0x95829d */
  goto L_95829d;
L_95829a: /* 95829a: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_95829d: /* 95829d: mov eax, dword ptr [0xcf8b54] */
  eax = R32((uint32_t)(0xcf8b54u));
/* 9582a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9582a4: je 0x9582ab */
  if (zf) goto L_9582ab;
L_9582a6: /* 9582a6: mov esi, dword ptr [eax + 0x38] */
  esi = R32((uint32_t)(eax + 0x38u));
/* 9582a9: jmp 0x9582ae */
  goto L_9582ae;
L_9582ab: /* 9582ab: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_9582ae: /* 9582ae: mov eax, dword ptr [0xcf8b5c] */
  eax = R32((uint32_t)(0xcf8b5cu));
/* 9582b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9582b5: je 0x9582bc */
  if (zf) goto L_9582bc;
L_9582b7: /* 9582b7: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 9582ba: jmp 0x9582bf */
  goto L_9582bf;
L_9582bc: /* 9582bc: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
L_9582bf: /* 9582bf: mov eax, dword ptr [0xcf8b58] */
  eax = R32((uint32_t)(0xcf8b58u));
/* 9582c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9582c6: je 0x9582cd */
  if (zf) goto L_9582cd;
L_9582c8: /* 9582c8: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 9582cb: jmp 0x9582d0 */
  goto L_9582d0;
L_9582cd: /* 9582cd: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_9582d0: /* 9582d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9582d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9582d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9582d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9582d4: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9582d9: push 0xaf88e0 */
  { uint32_t v = 0xaf88e0u; esp -= 4; W32(esp, v); }
/* 9582de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9582df: call 0x953470 */
  esp -= 4; W32(esp, 0x9582e4u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9582e4: mov esi, dword ptr [0xcf8b74] */
  esi = R32((uint32_t)(0xcf8b74u));
/* 9582ea: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9582ed: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9582ef: je 0x95831a */
  if (zf) goto L_95831a;
L_9582f1: /* 9582f1: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9582f4: je 0x95831a */
  if (zf) goto L_95831a;
L_9582f6: /* 9582f6: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 9582f9: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 9582ff: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 958305: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 958306: push 0xaf6234 */
  { uint32_t v = 0xaf6234u; esp -= 4; W32(esp, v); }
/* 95830b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95830c: call 0x953470 */
  esp -= 4; W32(esp, 0x958311u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 958311: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 958313: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958316: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958318: jne 0x9582f1 */
  if (!zf) goto L_9582f1;
L_95831a: /* 95831a: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95831f: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 958324: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 958325: call 0x953470 */
  esp -= 4; W32(esp, 0x95832au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95832a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95832d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95832e: ret  */
  esp += 4; SPILL(); return;
}

void f_958330(void) {
  LOAD_REGS();
L_958330: /* 958330: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 958334: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 958335: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 958336: xor edi, edi */
  edi = 0;
/* 958338: xor esi, esi */
  esi = 0;
/* 95833a: xor edx, edx */
  edx = 0;
/* 95833c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95833e: mov eax, dword ptr [0xcf8b7c] */
  eax = R32((uint32_t)(0xcf8b7cu));
/* 958343: je 0x9583a3 */
  if (zf) goto L_9583a3;
L_958345: /* 958345: mov ecx, eax */
  ecx = eax;
/* 958347: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958349: je 0x95835b */
  if (zf) goto L_95835b;
L_95834b: /* 95834b: nop  */
/* 95834c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_958350: /* 958350: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 958352: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958354: je 0x95835b */
  if (zf) goto L_95835b;
L_958356: /* 958356: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 958357: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958359: jne 0x958350 */
  if (!zf) goto L_958350;
L_95835b: /* 95835b: mov ecx, dword ptr [0xcf8b58] */
  ecx = R32((uint32_t)(0xcf8b58u));
/* 958361: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958363: je 0x958371 */
  if (zf) goto L_958371;
L_958365: /* 958365: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 958368: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95836a: je 0x958371 */
  if (zf) goto L_958371;
L_95836c: /* 95836c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95836d: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95836f: jne 0x958365 */
  if (!zf) goto L_958365;
L_958371: /* 958371: add dword ptr [0xcf7ab8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7ab8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(0xcf7ab8u), r);
  }
/* 958377: cmp dword ptr [0xcf7abc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7abcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95837d: jge 0x958385 */
  if ((sf == of)) goto L_958385;
L_95837f: /* 95837f: mov dword ptr [0xcf7abc], edx */
  W32((uint32_t)(0xcf7abcu), edx);
L_958385: /* 958385: mov edx, dword ptr [0xcf79ac] */
  edx = R32((uint32_t)(0xcf79acu));
/* 95838b: mov ecx, dword ptr [0xcf79b0] */
  ecx = R32((uint32_t)(0xcf79b0u));
/* 958391: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 958393: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 958395: mov dword ptr [0xcf79ac], edx */
  W32((uint32_t)(0xcf79acu), edx);
/* 95839b: jge 0x9583a3 */
  if ((sf == of)) goto L_9583a3;
L_95839d: /* 95839d: mov dword ptr [0xcf79b0], esi */
  W32((uint32_t)(0xcf79b0u), esi);
L_9583a3: /* 9583a3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9583a5: je 0x9583bf */
  if (zf) goto L_9583bf;
L_9583a7: /* 9583a7: mov edx, 0xefffffff */
  edx = 0xefffffffu;
/* 9583ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9583b0: /* 9583b0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9583b2: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9583b4: je 0x9583bf */
  if (zf) goto L_9583bf;
L_9583b6: /* 9583b6: and dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x14u), r);
  }
/* 9583b9: mov eax, ecx */
  eax = ecx;
/* 9583bb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9583bd: jne 0x9583b0 */
  if (!zf) goto L_9583b0;
L_9583bf: /* 9583bf: mov eax, dword ptr [0xcf8b58] */
  eax = R32((uint32_t)(0xcf8b58u));
/* 9583c4: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9583c6: mov dword ptr [0xcf8b7c], edi */
  W32((uint32_t)(0xcf8b7cu), edi);
/* 9583cc: je 0x9583e3 */
  if (zf) goto L_9583e3;
L_9583ce: /* 9583ce: mov edx, 0xfffffdff */
  edx = 0xfffffdffu;
L_9583d3: /* 9583d3: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 9583d6: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9583d8: je 0x9583e3 */
  if (zf) goto L_9583e3;
L_9583da: /* 9583da: and dword ptr [eax + 0x3c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x3cu), r);
  }
/* 9583dd: mov eax, ecx */
  eax = ecx;
/* 9583df: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9583e1: jne 0x9583d3 */
  if (!zf) goto L_9583d3;
L_9583e3: /* 9583e3: mov eax, dword ptr [0xcf8b5c] */
  eax = R32((uint32_t)(0xcf8b5cu));
/* 9583e8: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9583ea: mov dword ptr [0xcf8b58], edi */
  W32((uint32_t)(0xcf8b58u), edi);
/* 9583f0: je 0x95840d */
  if (zf) goto L_95840d;
L_9583f2: /* 9583f2: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 9583f5: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9583f8: je 0x95840d */
  if (zf) goto L_95840d;
L_9583fa: /* 9583fa: and ecx, 0xfffffbff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffbffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 958400: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 958403: mov dword ptr [eax + 0x3c], ecx */
  W32((uint32_t)(eax + 0x3cu), ecx);
/* 958406: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 958409: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95840b: jne 0x9583f2 */
  if (!zf) goto L_9583f2;
L_95840d: /* 95840d: mov dword ptr [0xcf8b5c], edi */
  W32((uint32_t)(0xcf8b5cu), edi);
/* 958413: mov dword ptr [0xcf8b60], edi */
  W32((uint32_t)(0xcf8b60u), edi);
/* 958419: mov dword ptr [0xcf8bc8], edi */
  W32((uint32_t)(0xcf8bc8u), edi);
/* 95841f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 958420: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 958421: ret  */
  esp += 4; SPILL(); return;
}

void f_958430(void) {
  LOAD_REGS();
L_958430: /* 958430: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 958431: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 958433: call 0x955dc0 */
  esp -= 4; W32(esp, 0x958438u); SPILL(); f_955dc0(); if (g_unwind) return; RELOAD();
/* 958438: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95843b: call 0x958540 */
  esp -= 4; W32(esp, 0x958440u); SPILL(); f_958540(); if (g_unwind) return; RELOAD();
/* 958440: mov esi, dword ptr [0xcf8b4c] */
  esi = R32((uint32_t)(0xcf8b4cu));
/* 958446: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958448: je 0x95848a */
  if (zf) goto L_95848a;
L_95844a: /* 95844a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_958450: /* 958450: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 958453: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958455: je 0x95848a */
  if (zf) goto L_95848a;
L_958457: /* 958457: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 95845a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95845c: je 0x95846d */
  if (zf) goto L_95846d;
L_95845e: /* 95845e: test byte ptr [esi + 0x3e], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3eu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 958462: je 0x95846d */
  if (zf) goto L_95846d;
L_958464: /* 958464: mov eax, dword ptr [0xcf85a4] */
  eax = R32((uint32_t)(0xcf85a4u));
/* 958469: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95846b: je 0x958483 */
  if (zf) goto L_958483;
L_95846d: /* 95846d: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 958470: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958472: jne 0x958483 */
  if (!zf) goto L_958483;
L_958474: /* 958474: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 958477: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 958478: call 0x963010 */
  esp -= 4; W32(esp, 0x95847du); SPILL(); f_963010(); if (g_unwind) return; RELOAD();
/* 95847d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958480: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
L_958483: /* 958483: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 958486: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958488: jne 0x958450 */
  if (!zf) goto L_958450;
L_95848a: /* 95848a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95848b: ret  */
  esp += 4; SPILL(); return;
}

void f_958490(void) {
  LOAD_REGS();
L_958490: /* 958490: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 958494: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 958495: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 958499: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 95849b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95849c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95849d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95849e: call 0x9584c0 */
  esp -= 4; W32(esp, 0x9584a3u); SPILL(); f_9584c0(); if (g_unwind) return; RELOAD();
/* 9584a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9584a4: mov edi, eax */
  edi = eax;
/* 9584a6: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x9584abu); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 9584ab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9584ac: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 9584ae: call 0x94f520 */
  esp -= 4; W32(esp, 0x9584b3u); SPILL(); f_94f520(); if (g_unwind) return; RELOAD();
/* 9584b3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9584b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9584b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9584b8: ret  */
  esp += 4; SPILL(); return;
}

void f_9584c0(void) {
  LOAD_REGS();
L_9584c0: /* 9584c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9584c1: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 9584c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9584c7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9584c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9584c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9584ca: call 0x94f020 */
  esp -= 4; W32(esp, 0x9584cfu); SPILL(); f_94f020(); if (g_unwind) return; RELOAD();
/* 9584cf: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9584d3: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9584d7: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
/* 9584da: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9584dc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9584df: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9584e1: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 9584e5: lea edi, [edx + 4] */
  edi = (uint32_t)(edx + 0x4u);
/* 9584e8: je 0x958518 */
  if (zf) goto L_958518;
L_9584ea: /* 9584ea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_9584f0: /* 9584f0: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 9584f2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9584f4: je 0x958518 */
  if (zf) goto L_958518;
L_9584f6: /* 9584f6: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9584f8: jne 0x95851c */
  if (!zf) goto L_95851c;
L_9584fa: /* 9584fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9584fb: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 9584ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 958500: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x958505u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 958505: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 958509: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95850c: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_95850f: /* 95850f: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_958512: /* 958512: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 958514: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958516: jne 0x9584f0 */
  if (!zf) goto L_9584f0;
L_958518: /* 958518: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 958519: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95851a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 95851b: ret  */
  esp += 4; SPILL(); return;
L_95851c: /* 95851c: mov edx, dword ptr [edx + 0x14] */
  edx = R32((uint32_t)(edx + 0x14u));
/* 95851f: mov ecx, dword ptr [ecx + 0x14] */
  ecx = R32((uint32_t)(ecx + 0x14u));
/* 958522: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 958528: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95852e: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 958530: jbe 0x95850f */
  if ((cf | zf)) goto L_95850f;
L_958532: /* 958532: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 958535: jmp 0x958512 */
  goto L_958512;
}

void f_958540(void) {
  LOAD_REGS();
L_958540: /* 958540: mov eax, dword ptr [0xcf89f0] */
  eax = R32((uint32_t)(0xcf89f0u));
/* 958545: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958547: jne 0x9585ef */
  if (!zf) goto L_9585ef;
L_95854d: /* 95854d: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 958554: jl 0x958569 */
  if ((sf != of)) goto L_958569;
L_958556: /* 958556: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95855b: push 0xaf8950 */
  { uint32_t v = 0xaf8950u; esp -= 4; W32(esp, v); }
/* 958560: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 958561: call 0x953470 */
  esp -= 4; W32(esp, 0x958566u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 958566: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_958569: /* 958569: mov ecx, dword ptr [0xcf8bfc] */
  ecx = R32((uint32_t)(0xcf8bfcu));
/* 95856f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 958570: mov ebx, dword ptr [0xcf8b4c] */
  ebx = R32((uint32_t)(0xcf8b4cu));
/* 958576: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 958577: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958579: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95857a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95857b: mov dword ptr [0xcf8bfc], ecx */
  W32((uint32_t)(0xcf8bfcu), ecx);
/* 958581: je 0x9585e2 */
  if (zf) goto L_9585e2;
L_958583: /* 958583: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 958586: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958588: je 0x9585e2 */
  if (zf) goto L_9585e2;
L_95858a: /* 95858a: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* 95858d: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 958590: jne 0x9585db */
  if (!zf) goto L_9585db;
L_958592: /* 958592: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 958595: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958597: je 0x9585db */
  if (zf) goto L_9585db;
L_958599: /* 958599: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 95859c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95859e: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 9585a1: je 0x9585db */
  if (zf) goto L_9585db;
L_9585a3: /* 9585a3: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 9585a6: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9585a9: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9585ab: je 0x9585c2 */
  if (zf) goto L_9585c2;
L_9585ad: /* 9585ad: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 9585b0: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 9585b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9585b7: call 0x94f020 */
  esp -= 4; W32(esp, 0x9585bcu); SPILL(); f_94f020(); if (g_unwind) return; RELOAD();
/* 9585bc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9585bf: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
L_9585c2: /* 9585c2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9585c3: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9585c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9585c7: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x9585ccu); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 9585cc: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 9585ce: mov ecx, dword ptr [0xcf8bfc] */
  ecx = R32((uint32_t)(0xcf8bfcu));
/* 9585d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9585d7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9585d9: jne 0x9585a3 */
  if (!zf) goto L_9585a3;
L_9585db: /* 9585db: mov ebx, dword ptr [ebx + 0x1c] */
  ebx = R32((uint32_t)(ebx + 0x1cu));
/* 9585de: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9585e0: jne 0x958583 */
  if (!zf) goto L_958583;
L_9585e2: /* 9585e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9585e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9585e4: mov dword ptr [0xcf89f0], 1 */
  W32((uint32_t)(0xcf89f0u), 0x1u);
/* 9585ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_9585ef: /* 9585ef: ret  */
  esp += 4; SPILL(); return;
}

void f_9585f0(void) {
  LOAD_REGS();
L_9585f0: /* 9585f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9585f4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 9585f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9585f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9585fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9585fb: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 9585fe: lea edx, [ecx + 4] */
  edx = (uint32_t)(ecx + 0x4u);
L_958601: /* 958601: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 958603: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958605: je 0x95862f */
  if (zf) goto L_95862f;
L_958607: /* 958607: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 958609: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95860b: je 0x958638 */
  if (zf) goto L_958638;
L_95860d: /* 95860d: mov edi, dword ptr [eax + 0x14] */
  edi = R32((uint32_t)(eax + 0x14u));
/* 958610: mov ebx, dword ptr [ecx + 0x14] */
  ebx = R32((uint32_t)(ecx + 0x14u));
/* 958613: and edi, 0xffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 958619: and ebx, 0xffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 95861f: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 958621: ja 0x958638 */
  if ((!cf && !zf)) goto L_958638;
L_958623: /* 958623: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958625: jne 0x95862a */
  if (!zf) goto L_95862a;
L_958627: /* 958627: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_95862a: /* 95862a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 95862d: jmp 0x958601 */
  goto L_958601;
L_95862f: /* 95862f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 958630: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 958631: mov eax, 1 */
  eax = 0x1u;
/* 958636: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 958637: ret  */
  esp += 4; SPILL(); return;
L_958638: /* 958638: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 958639: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95863a: xor eax, eax */
  eax = 0;
/* 95863c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95863d: ret  */
  esp += 4; SPILL(); return;
}

void f_958640(void) {
  LOAD_REGS();
L_958640: /* 958640: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 958641: mov eax, dword ptr [0xcf89f4] */
  eax = R32((uint32_t)(0xcf89f4u));
/* 958646: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958648: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 958650: je 0x958664 */
  if (zf) goto L_958664;
L_958652: /* 958652: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 958654: call 0x958f30 */
  esp -= 4; W32(esp, 0x958659u); SPILL(); f_958f30(); if (g_unwind) return; RELOAD();
/* 958659: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95865c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95865e: jne 0x9587f7 */
  if (!zf) goto L_9587f7;
L_958664: /* 958664: cmp dword ptr [0xcf8438], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95866b: jl 0x9586b3 */
  if ((sf != of)) goto L_9586b3;
L_95866d: /* 95866d: mov eax, dword ptr [0xcf8b58] */
  eax = R32((uint32_t)(0xcf8b58u));
/* 958672: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958674: je 0x95867b */
  if (zf) goto L_95867b;
L_958676: /* 958676: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 958679: jmp 0x95867e */
  goto L_95867e;
L_95867b: /* 95867b: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_95867e: /* 95867e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 958682: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 958688: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 958689: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 95868d: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 958690: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 958696: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 958697: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95869a: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 95869e: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9586a2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9586a5: push 0xaf8998 */
  { uint32_t v = 0xaf8998u; esp -= 4; W32(esp, v); }
/* 9586aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9586ab: call 0x953470 */
  esp -= 4; W32(esp, 0x9586b0u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9586b0: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9586b3: /* 9586b3: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9586ba: jl 0x9586ca */
  if ((sf != of)) goto L_9586ca;
L_9586bc: /* 9586bc: cmp dword ptr [0xcf8b80], 0x32 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8b80u))); uint32_t b = (uint32_t)(0x32u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9586c3: jge 0x9586ca */
  if ((sf == of)) goto L_9586ca;
L_9586c5: /* 9586c5: call 0x958240 */
  esp -= 4; W32(esp, 0x9586cau); SPILL(); f_958240(); if (g_unwind) return; RELOAD();
L_9586ca: /* 9586ca: mov edx, dword ptr [0xcf8b48] */
  edx = R32((uint32_t)(0xcf8b48u));
/* 9586d0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 9586d4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9586d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9586d9: mov dword ptr [0xcf8a0c], eax */
  W32((uint32_t)(0xcf8a0cu), eax);
/* 9586de: mov dword ptr [0xcf8a10], ecx */
  W32((uint32_t)(0xcf8a10u), ecx);
/* 9586e4: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x9586e9u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 9586e9: mov dword ptr [0xcf8c0c], eax */
  W32((uint32_t)(0xcf8c0cu), eax);
/* 9586ee: mov eax, dword ptr [0xcf8b48] */
  eax = R32((uint32_t)(0xcf8b48u));
/* 9586f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9586f4: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x9586f9u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 9586f9: mov dword ptr [0xcf8c08], eax */
  W32((uint32_t)(0xcf8c08u), eax);
/* 9586fe: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 958703: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958706: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 958709: jl 0x958776 */
  if ((sf != of)) goto L_958776;
L_95870b: /* 95870b: mov ecx, dword ptr [0xcf8b58] */
  ecx = R32((uint32_t)(0xcf8b58u));
/* 958711: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 958712: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 958713: call 0x95a690 */
  esp -= 4; W32(esp, 0x958718u); SPILL(); f_95a690(); if (g_unwind) return; RELOAD();
/* 958718: mov eax, dword ptr [0xcf8b58] */
  eax = R32((uint32_t)(0xcf8b58u));
/* 95871d: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 958721: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 958722: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 958723: call 0x95b0c0 */
  esp -= 4; W32(esp, 0x958728u); SPILL(); f_95b0c0(); if (g_unwind) return; RELOAD();
/* 958728: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 95872c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95872d: call 0x959da0 */
  esp -= 4; W32(esp, 0x958732u); SPILL(); f_959da0(); if (g_unwind) return; RELOAD();
/* 958732: mov esi, dword ptr [0xcf8b58] */
  esi = R32((uint32_t)(0xcf8b58u));
/* 958738: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95873b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95873d: je 0x958762 */
  if (zf) goto L_958762;
L_95873f: /* 95873f: nop  */
L_958740: /* 958740: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 958743: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958745: je 0x958762 */
  if (zf) goto L_958762;
L_958747: /* 958747: test dword ptr [esi + 0x3c], 0x201000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x201000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95874e: jne 0x95875b */
  if (!zf) goto L_95875b;
L_958750: /* 958750: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 958752: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 958753: call 0x9593c0 */
  esp -= 4; W32(esp, 0x958758u); SPILL(); f_9593c0(); if (g_unwind) return; RELOAD();
/* 958758: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95875b: /* 95875b: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 95875e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958760: jne 0x958740 */
  if (!zf) goto L_958740;
L_958762: /* 958762: call 0x95a9a0 */
  esp -= 4; W32(esp, 0x958767u); SPILL(); f_95a9a0(); if (g_unwind) return; RELOAD();
/* 958767: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958769: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95876a: je 0x958789 */
  if (zf) goto L_958789;
L_95876c: /* 95876c: mov dword ptr [esp], 1 */
  W32((uint32_t)(esp), 0x1u);
/* 958774: jmp 0x958789 */
  goto L_958789;
L_958776: /* 958776: mov eax, dword ptr [0xcf8b58] */
  eax = R32((uint32_t)(0xcf8b58u));
/* 95877b: lea edx, [esp] */
  edx = (uint32_t)(esp);
/* 95877f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 958780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 958781: call 0x95b0c0 */
  esp -= 4; W32(esp, 0x958786u); SPILL(); f_95b0c0(); if (g_unwind) return; RELOAD();
/* 958786: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_958789: /* 958789: mov edx, dword ptr [0xcf8b58] */
  edx = R32((uint32_t)(0xcf8b58u));
/* 95878f: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 958793: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 958794: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 958795: call 0x959b70 */
  esp -= 4; W32(esp, 0x95879au); SPILL(); f_959b70(); if (g_unwind) return; RELOAD();
/* 95879a: mov eax, dword ptr [0xcf8454] */
  eax = R32((uint32_t)(0xcf8454u));
/* 95879f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9587a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9587a4: je 0x9587af */
  if (zf) goto L_9587af;
L_9587a6: /* 9587a6: mov eax, dword ptr [0xcf7a80] */
  eax = R32((uint32_t)(0xcf7a80u));
/* 9587ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9587ad: je 0x9587e0 */
  if (zf) goto L_9587e0;
L_9587af: /* 9587af: mov edx, dword ptr [0xcf7a18] */
  edx = R32((uint32_t)(0xcf7a18u));
/* 9587b5: mov eax, dword ptr [0xcf8b58] */
  eax = R32((uint32_t)(0xcf8b58u));
/* 9587ba: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9587bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9587bc: mov dword ptr [0xcf7a18], edx */
  W32((uint32_t)(0xcf7a18u), edx);
/* 9587c2: mov dword ptr [0xcf8be0], 0 */
  W32((uint32_t)(0xcf8be0u), 0x0u);
/* 9587cc: call 0x95a2a0 */
  esp -= 4; W32(esp, 0x9587d1u); SPILL(); f_95a2a0(); if (g_unwind) return; RELOAD();
/* 9587d1: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 9587d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9587d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9587d8: call 0x9589f0 */
  esp -= 4; W32(esp, 0x9587ddu); SPILL(); f_9589f0(); if (g_unwind) return; RELOAD();
/* 9587dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9587e0: /* 9587e0: push 0xcf8c08 */
  { uint32_t v = 0xcf8c08u; esp -= 4; W32(esp, v); }
/* 9587e5: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x9587eau); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 9587ea: push 0xcf8c0c */
  { uint32_t v = 0xcf8c0cu; esp -= 4; W32(esp, v); }
/* 9587ef: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x9587f4u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 9587f4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9587f7: /* 9587f7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9587f8: ret  */
  esp += 4; SPILL(); return;
}

void f_958800(void) {
  LOAD_REGS();
L_958800: /* 958800: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 958801: mov eax, dword ptr [0xcf855c] */
  eax = R32((uint32_t)(0xcf855cu));
/* 958806: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958808: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 958810: jne 0x95881b */
  if (!zf) goto L_95881b;
L_958812: /* 958812: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 958817: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958819: je 0x958879 */
  if (zf) goto L_958879;
L_95881b: /* 95881b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95881d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95881f: call 0x96de10 */
  esp -= 4; W32(esp, 0x958824u); SPILL(); f_96de10(); if (g_unwind) return; RELOAD();
/* 958824: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 958829: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95882a: call 0x96f1c0 */
  esp -= 4; W32(esp, 0x95882fu); SPILL(); f_96f1c0(); if (g_unwind) return; RELOAD();
/* 95882f: mov eax, dword ptr [0xcf8530] */
  eax = R32((uint32_t)(0xcf8530u));
/* 958834: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958837: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958839: je 0x95884f */
  if (zf) goto L_95884f;
L_95883b: /* 95883b: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 958841: push 0xaf8a34 */
  { uint32_t v = 0xaf8a34u; esp -= 4; W32(esp, v); }
/* 958846: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 958847: call 0x961cd0 */
  esp -= 4; W32(esp, 0x95884cu); SPILL(); f_961cd0(); if (g_unwind) return; RELOAD();
/* 95884c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95884f: /* 95884f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 958853: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 958857: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95885c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95885f: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 958863: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 958867: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 95886a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95886b: push 0xaf8a14 */
  { uint32_t v = 0xaf8a14u; esp -= 4; W32(esp, v); }
/* 958870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 958871: call 0x953470 */
  esp -= 4; W32(esp, 0x958876u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 958876: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_958879: /* 958879: cmp dword ptr [0xcf8438], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 958880: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 958881: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 958885: jl 0x95889c */
  if ((sf != of)) goto L_95889c;
L_958887: /* 958887: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95888d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95888e: push 0xaf89e4 */
  { uint32_t v = 0xaf89e4u; esp -= 4; W32(esp, v); }
/* 958893: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 958894: call 0x953470 */
  esp -= 4; W32(esp, 0x958899u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 958899: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95889c: /* 95889c: mov ecx, dword ptr [0xcf8b48] */
  ecx = R32((uint32_t)(0xcf8b48u));
/* 9588a2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9588a6: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9588aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9588ab: mov dword ptr [0xcf8a0c], edx */
  W32((uint32_t)(0xcf8a0cu), edx);
/* 9588b1: mov dword ptr [0xcf8a10], eax */
  W32((uint32_t)(0xcf8a10u), eax);
/* 9588b6: mov dword ptr [0xcf8be0], 1 */
  W32((uint32_t)(0xcf8be0u), 0x1u);
/* 9588c0: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x9588c5u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 9588c5: mov edx, dword ptr [0xcf8b48] */
  edx = R32((uint32_t)(0xcf8b48u));
/* 9588cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9588cc: mov dword ptr [0xcf8c0c], eax */
  W32((uint32_t)(0xcf8c0cu), eax);
/* 9588d1: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x9588d6u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 9588d6: mov ecx, dword ptr [0xcf8b5c] */
  ecx = R32((uint32_t)(0xcf8b5cu));
/* 9588dc: mov dword ptr [0xcf8c08], eax */
  W32((uint32_t)(0xcf8c08u), eax);
/* 9588e1: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 9588e6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9588e9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9588eb: je 0x9589be */
  if (zf) goto L_9589be;
L_9588f1: /* 9588f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9588f3: mov dword ptr [0xcf8bc8], 1 */
  W32((uint32_t)(0xcf8bc8u), 0x1u);
/* 9588fd: mov dword ptr [0xcf8b58], eax */
  W32((uint32_t)(0xcf8b58u), eax);
/* 958902: mov dword ptr [0xcf8b5c], eax */
  W32((uint32_t)(0xcf8b5cu), eax);
/* 958907: je 0x95893a */
  if (zf) goto L_95893a;
L_958909: /* 958909: mov edx, 0x200 */
  edx = 0x200u;
/* 95890e: mov edi, edi */
  edi = edi;
L_958910: /* 958910: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 958913: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958915: je 0x95893a */
  if (zf) goto L_95893a;
L_958917: /* 958917: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 95891a: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 95891c: test ch, 0x10 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95891f: mov dword ptr [eax + 0x3c], ecx */
  W32((uint32_t)(eax + 0x3cu), ecx);
/* 958922: jne 0x95892d */
  if (!zf) goto L_95892d;
L_958924: /* 958924: or ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 95892a: mov dword ptr [eax + 0x3c], ecx */
  W32((uint32_t)(eax + 0x3cu), ecx);
L_95892d: /* 95892d: inc dword ptr [0xcf7a14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7a14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf7a14u), r);
  }
/* 958933: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 958936: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958938: jne 0x958910 */
  if (!zf) goto L_958910;
L_95893a: /* 95893a: mov eax, dword ptr [0xcf8b74] */
  eax = R32((uint32_t)(0xcf8b74u));
/* 95893f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958941: mov dword ptr [0xcf8b7c], eax */
  W32((uint32_t)(0xcf8b7cu), eax);
/* 958946: je 0x95895b */
  if (zf) goto L_95895b;
L_958948: /* 958948: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 95894a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95894c: je 0x95895b */
  if (zf) goto L_95895b;
L_95894e: /* 95894e: or dword ptr [eax + 0x14], 0x10000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x14u), r);
  }
/* 958955: mov eax, ecx */
  eax = ecx;
/* 958957: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958959: jne 0x958948 */
  if (!zf) goto L_958948;
L_95895b: /* 95895b: mov eax, dword ptr [0xcf89f0] */
  eax = R32((uint32_t)(0xcf89f0u));
/* 958960: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958962: je 0x958998 */
  if (zf) goto L_958998;
L_958964: /* 958964: mov eax, dword ptr [0xcf8b74] */
  eax = R32((uint32_t)(0xcf8b74u));
/* 958969: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95896b: je 0x958981 */
  if (zf) goto L_958981;
L_95896d: /* 95896d: mov edx, 0x4000000 */
  edx = 0x4000000u;
L_958972: /* 958972: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 958974: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958976: je 0x958981 */
  if (zf) goto L_958981;
L_958978: /* 958978: or dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x14u), r);
  }
/* 95897b: mov eax, ecx */
  eax = ecx;
/* 95897d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95897f: jne 0x958972 */
  if (!zf) goto L_958972;
L_958981: /* 958981: mov eax, dword ptr [0xcf8454] */
  eax = R32((uint32_t)(0xcf8454u));
/* 958986: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958988: je 0x958998 */
  if (zf) goto L_958998;
L_95898a: /* 95898a: cmp dword ptr [0xcf85cc], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 958991: jg 0x958998 */
  if ((!zf && sf == of)) goto L_958998;
L_958993: /* 958993: call 0x95ca40 */
  esp -= 4; W32(esp, 0x958998u); SPILL(); f_95ca40(); if (g_unwind) return; RELOAD();
L_958998: /* 958998: mov eax, dword ptr [0xcf8488] */
  eax = R32((uint32_t)(0xcf8488u));
/* 95899d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95899f: jne 0x9589be */
  if (!zf) goto L_9589be;
L_9589a1: /* 9589a1: mov eax, dword ptr [0xcf8454] */
  eax = R32((uint32_t)(0xcf8454u));
/* 9589a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9589a8: jne 0x9589be */
  if (!zf) goto L_9589be;
L_9589aa: /* 9589aa: mov ecx, dword ptr [0xcf8b58] */
  ecx = R32((uint32_t)(0xcf8b58u));
/* 9589b0: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 9589b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9589b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9589b6: call 0x959b70 */
  esp -= 4; W32(esp, 0x9589bbu); SPILL(); f_959b70(); if (g_unwind) return; RELOAD();
/* 9589bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9589be: /* 9589be: mov edx, dword ptr [0xcf8b58] */
  edx = R32((uint32_t)(0xcf8b58u));
/* 9589c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9589c5: call 0x95a2a0 */
  esp -= 4; W32(esp, 0x9589cau); SPILL(); f_95a2a0(); if (g_unwind) return; RELOAD();
/* 9589ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9589cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9589cd: call 0x9589f0 */
  esp -= 4; W32(esp, 0x9589d2u); SPILL(); f_9589f0(); if (g_unwind) return; RELOAD();
/* 9589d2: push 0xcf8c08 */
  { uint32_t v = 0xcf8c08u; esp -= 4; W32(esp, v); }
/* 9589d7: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x9589dcu); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 9589dc: push 0xcf8c0c */
  { uint32_t v = 0xcf8c0cu; esp -= 4; W32(esp, v); }
/* 9589e1: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x9589e6u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 9589e6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9589e9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9589ea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9589eb: ret  */
  esp += 4; SPILL(); return;
}

void f_9589f0(void) {
  LOAD_REGS();
L_9589f0: /* 9589f0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9589f3: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 9589f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9589f9: xor edi, edi */
  edi = 0;
/* 9589fb: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9589fe: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 958a02: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 958a06: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 958a0a: mov dword ptr [esp + 4], edi */
  W32((uint32_t)(esp + 0x4u), edi);
/* 958a0e: jl 0x958a35 */
  if ((sf != of)) goto L_958a35;
L_958a10: /* 958a10: mov eax, dword ptr [0xcf8b58] */
  eax = R32((uint32_t)(0xcf8b58u));
/* 958a15: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958a17: je 0x958a1e */
  if (zf) goto L_958a1e;
L_958a19: /* 958a19: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 958a1c: jmp 0x958a21 */
  goto L_958a21;
L_958a1e: /* 958a1e: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_958a21: /* 958a21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 958a22: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 958a27: push 0xaf8aa0 */
  { uint32_t v = 0xaf8aa0u; esp -= 4; W32(esp, v); }
/* 958a2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 958a2d: call 0x953470 */
  esp -= 4; W32(esp, 0x958a32u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 958a32: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_958a35: /* 958a35: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 958a36: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 958a37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 958a38: mov esi, 5 */
  esi = 0x5u;
/* 958a3d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_958a40: /* 958a40: mov ecx, dword ptr [0xcf8c08] */
  ecx = R32((uint32_t)(0xcf8c08u));
/* 958a46: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 958a47: xor ebx, ebx */
  ebx = 0;
/* 958a49: call 0x94f340 */
  esp -= 4; W32(esp, 0x958a4eu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 958a4e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958a51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958a53: je 0x958b74 */
  if (zf) goto L_958b74;
L_958a59: /* 958a59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_958a60: /* 958a60: mov edx, dword ptr [0xcf8c08] */
  edx = R32((uint32_t)(0xcf8c08u));
/* 958a66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 958a67: call 0x94eaa0 */
  esp -= 4; W32(esp, 0x958a6cu); SPILL(); f_94eaa0(); if (g_unwind) return; RELOAD();
/* 958a6c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958a6f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958a71: je 0x958b32 */
  if (zf) goto L_958b32;
L_958a77: /* 958a77: mov ebp, dword ptr [0xcf2f64] */
  ebp = R32((uint32_t)(0xcf2f64u));
/* 958a7d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 958a80: mov edi, dword ptr [eax + 8] */
  edi = R32((uint32_t)(eax + 0x8u));
/* 958a83: mov esi, dword ptr [eax + 0xc] */
  esi = R32((uint32_t)(eax + 0xcu));
/* 958a86: mov ecx, dword ptr [0xcf2f38] */
  ecx = R32((uint32_t)(0xcf2f38u));
/* 958a8c: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 958a8d: mov dword ptr [0xcf2f64], ebp */
  W32((uint32_t)(0xcf2f64u), ebp);
/* 958a93: mov ebp, dword ptr [0xcf2f30] */
  ebp = R32((uint32_t)(0xcf2f30u));
/* 958a99: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* 958a9c: lea ecx, [ebp + ecx*4] */
  ecx = (uint32_t)(ebp + ecx*4);
/* 958aa0: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 958aa2: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 958aa4: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 958aa6: mov eax, dword ptr [edx + 0x3c] */
  eax = R32((uint32_t)(edx + 0x3cu));
/* 958aa9: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 958aac: jne 0x958b14 */
  if (!zf) goto L_958b14;
L_958aae: /* 958aae: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 958ab1: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 958ab4: jne 0x958b14 */
  if (!zf) goto L_958b14;
L_958ab6: /* 958ab6: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 958ab9: je 0x958ac2 */
  if (zf) goto L_958ac2;
L_958abb: /* 958abb: test eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958ac0: je 0x958acf */
  if (zf) goto L_958acf;
L_958ac2: /* 958ac2: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 958ac5: je 0x958add */
  if (zf) goto L_958add;
L_958ac7: /* 958ac7: test ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958acd: jne 0x958add */
  if (!zf) goto L_958add;
L_958acf: /* 958acf: mov eax, dword ptr [0xcf8458] */
  eax = R32((uint32_t)(0xcf8458u));
/* 958ad4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958ad6: je 0x958add */
  if (zf) goto L_958add;
L_958ad8: /* 958ad8: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 958adb: jle 0x958b14 */
  if ((zf || sf != of)) goto L_958b14;
L_958add: /* 958add: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 958ade: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 958adf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 958ae0: call 0x95ac50 */
  esp -= 4; W32(esp, 0x958ae5u); SPILL(); f_95ac50(); if (g_unwind) return; RELOAD();
/* 958ae5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958ae8: call 0x95a9a0 */
  esp -= 4; W32(esp, 0x958aedu); SPILL(); f_95a9a0(); if (g_unwind) return; RELOAD();
/* 958aed: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 958af1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 958af5: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 958af7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 958af8: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958afb: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 958aff: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 958b03: mov ebx, 1 */
  ebx = 0x1u;
/* 958b08: jne 0x958b10 */
  if (!zf) goto L_958b10;
L_958b0a: /* 958b0a: inc dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* 958b0e: jmp 0x958b14 */
  goto L_958b14;
L_958b10: /* 958b10: inc dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x1cu), r);
  }
L_958b14: /* 958b14: mov edx, dword ptr [0xcf8c08] */
  edx = R32((uint32_t)(0xcf8c08u));
/* 958b1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 958b1b: call 0x94eaa0 */
  esp -= 4; W32(esp, 0x958b20u); SPILL(); f_94eaa0(); if (g_unwind) return; RELOAD();
/* 958b20: xor edi, edi */
  edi = 0;
/* 958b22: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958b25: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958b27: jne 0x958a77 */
  if (!zf) goto L_958a77;
L_958b2d: /* 958b2d: mov esi, 5 */
  esi = 0x5u;
L_958b32: /* 958b32: cmp dword ptr [0xcf8be0], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8be0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958b38: je 0x958b52 */
  if (zf) goto L_958b52;
L_958b3a: /* 958b3a: cmp dword ptr [0xcf85cc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 958b40: jg 0x958b52 */
  if ((!zf && sf == of)) goto L_958b52;
L_958b42: /* 958b42: cmp dword ptr [esp + 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 958b47: jle 0x958b52 */
  if ((zf || sf != of)) goto L_958b52;
L_958b49: /* 958b49: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 958b4d: call 0x95ca40 */
  esp -= 4; W32(esp, 0x958b52u); SPILL(); f_95ca40(); if (g_unwind) return; RELOAD();
L_958b52: /* 958b52: mov eax, dword ptr [0xcf8b58] */
  eax = R32((uint32_t)(0xcf8b58u));
/* 958b57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 958b58: call 0x95a080 */
  esp -= 4; W32(esp, 0x958b5du); SPILL(); f_95a080(); if (g_unwind) return; RELOAD();
/* 958b5d: mov ecx, dword ptr [0xcf8c08] */
  ecx = R32((uint32_t)(0xcf8c08u));
/* 958b63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 958b64: call 0x94f340 */
  esp -= 4; W32(esp, 0x958b69u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 958b69: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958b6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958b6e: jne 0x958a60 */
  if (!zf) goto L_958a60;
L_958b74: /* 958b74: cmp dword ptr [0xcf89f0], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf89f0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958b7a: je 0x958c01 */
  if (zf) goto L_958c01;
L_958b80: /* 958b80: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 958b86: xor eax, eax */
  eax = 0;
/* 958b88: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 958b8b: jl 0x958bb8 */
  if ((sf != of)) goto L_958bb8;
L_958b8d: /* 958b8d: cmp dword ptr [0xcf8be0], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8be0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958b93: je 0x958bb8 */
  if (zf) goto L_958bb8;
L_958b95: /* 958b95: mov eax, dword ptr [0xcf8b74] */
  eax = R32((uint32_t)(0xcf8b74u));
/* 958b9a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958b9c: je 0x958bb3 */
  if (zf) goto L_958bb3;
L_958b9e: /* 958b9e: mov edi, edi */
  edi = edi;
L_958ba0: /* 958ba0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 958ba2: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958ba4: je 0x958bb3 */
  if (zf) goto L_958bb3;
L_958ba6: /* 958ba6: or dword ptr [eax + 0x14], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x14u), r);
  }
/* 958bad: mov eax, ecx */
  eax = ecx;
/* 958baf: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958bb1: jne 0x958ba0 */
  if (!zf) goto L_958ba0;
L_958bb3: /* 958bb3: mov eax, 1 */
  eax = 0x1u;
L_958bb8: /* 958bb8: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958bba: jne 0x958bc2 */
  if (!zf) goto L_958bc2;
L_958bbc: /* 958bbc: cmp dword ptr [esp + 0x24], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958bc0: je 0x958be0 */
  if (zf) goto L_958be0;
L_958bc2: /* 958bc2: cmp dword ptr [0xcf8454], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8454u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958bc8: je 0x958bd2 */
  if (zf) goto L_958bd2;
L_958bca: /* 958bca: cmp dword ptr [0xcf8be0], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8be0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958bd0: je 0x958be0 */
  if (zf) goto L_958be0;
L_958bd2: /* 958bd2: cmp dword ptr [0xcf85cc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 958bd8: jg 0x958be0 */
  if ((!zf && sf == of)) goto L_958be0;
L_958bda: /* 958bda: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 958bde: jmp 0x958be4 */
  goto L_958be4;
L_958be0: /* 958be0: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958be2: je 0x958c01 */
  if (zf) goto L_958c01;
L_958be4: /* 958be4: call 0x95ca40 */
  esp -= 4; W32(esp, 0x958be9u); SPILL(); f_95ca40(); if (g_unwind) return; RELOAD();
/* 958be9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958beb: je 0x958c01 */
  if (zf) goto L_958c01;
L_958bed: /* 958bed: mov edx, dword ptr [0xcf8b58] */
  edx = R32((uint32_t)(0xcf8b58u));
/* 958bf3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 958bf4: call 0x95a080 */
  esp -= 4; W32(esp, 0x958bf9u); SPILL(); f_95a080(); if (g_unwind) return; RELOAD();
/* 958bf9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958bfc: jmp 0x958a40 */
  goto L_958a40;
L_958c01: /* 958c01: cmp dword ptr [esp + 0x28], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958c05: je 0x958c14 */
  if (zf) goto L_958c14;
L_958c07: /* 958c07: call 0x95d600 */
  esp -= 4; W32(esp, 0x958c0cu); SPILL(); f_95d600(); if (g_unwind) return; RELOAD();
/* 958c0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958c0e: jne 0x958a40 */
  if (!zf) goto L_958a40;
L_958c14: /* 958c14: cmp dword ptr [0xcf8404], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8404u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958c1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 958c1b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 958c1c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 958c1d: je 0x958c53 */
  if (zf) goto L_958c53;
L_958c1f: /* 958c1f: cmp dword ptr [0xcf8454], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8454u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958c25: jne 0x958c53 */
  if (!zf) goto L_958c53;
L_958c27: /* 958c27: mov eax, dword ptr [0xcf8548] */
  eax = R32((uint32_t)(0xcf8548u));
/* 958c2c: mov ecx, dword ptr [0xcf8b58] */
  ecx = R32((uint32_t)(0xcf8b58u));
/* 958c32: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 958c33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 958c34: mov dword ptr [0xcf8c50], eax */
  W32((uint32_t)(0xcf8c50u), eax);
/* 958c39: mov dword ptr [0xcf8548], edi */
  W32((uint32_t)(0xcf8548u), edi);
/* 958c3f: call 0x954a80 */
  esp -= 4; W32(esp, 0x958c44u); SPILL(); f_954a80(); if (g_unwind) return; RELOAD();
/* 958c44: mov edx, dword ptr [0xcf8c50] */
  edx = R32((uint32_t)(0xcf8c50u));
/* 958c4a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958c4d: mov dword ptr [0xcf8548], edx */
  W32((uint32_t)(0xcf8548u), edx);
L_958c53: /* 958c53: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 958c5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 958c5b: jl 0x958c7f */
  if ((sf != of)) goto L_958c7f;
L_958c5d: /* 958c5d: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 958c61: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 958c65: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 958c69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 958c6a: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 958c6f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 958c70: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 958c71: push 0xaf8a40 */
  { uint32_t v = 0xaf8a40u; esp -= 4; W32(esp, v); }
/* 958c76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 958c77: call 0x953470 */
  esp -= 4; W32(esp, 0x958c7cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 958c7c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_958c7f: /* 958c7f: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 958c86: jl 0x958c99 */
  if ((sf != of)) goto L_958c99;
L_958c88: /* 958c88: cmp dword ptr [0xcf8b80], 0x32 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8b80u))); uint32_t b = (uint32_t)(0x32u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 958c8f: jge 0x958c99 */
  if ((sf == of)) goto L_958c99;
L_958c91: /* 958c91: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958c94: jmp 0x958240 */
  SPILL(); f_958240(); return;
L_958c99: /* 958c99: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958c9c: ret  */
  esp += 4; SPILL(); return;
}

void f_958ca0(void) {
  LOAD_REGS();
L_958ca0: /* 958ca0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 958ca1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 958ca2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 958ca3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 958ca7: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 958caa: test eax, 0x40000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958caf: jne 0x958d87 */
  if (!zf) goto L_958d87;
L_958cb5: /* 958cb5: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958cba: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 958cbe: je 0x958cc9 */
  if (zf) goto L_958cc9;
L_958cc0: /* 958cc0: cmp ebx, 6 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958cc3: je 0x958d87 */
  if (zf) goto L_958d87;
L_958cc9: /* 958cc9: mov eax, dword ptr [0xcf2f38] */
  eax = R32((uint32_t)(0xcf2f38u));
/* 958cce: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 958cd1: mov edx, dword ptr [0xcf2f30] */
  edx = R32((uint32_t)(0xcf2f30u));
/* 958cd7: mov esi, dword ptr [edx + ecx*4] */
  esi = R32((uint32_t)(edx + ecx*4));
/* 958cda: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958cdc: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 958cdf: je 0x958cef */
  if (zf) goto L_958cef;
L_958ce1: /* 958ce1: inc dword ptr [0xcf2f54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf2f54u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf2f54u), r);
  }
/* 958ce7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 958ce9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 958ceb: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 958ced: jmp 0x958cfb */
  goto L_958cfb;
L_958cef: /* 958cef: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 958cf1: call 0x9538c0 */
  esp -= 4; W32(esp, 0x958cf6u); SPILL(); f_9538c0(); if (g_unwind) return; RELOAD();
/* 958cf6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958cf9: mov esi, eax */
  esi = eax;
L_958cfb: /* 958cfb: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 958cff: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 958d02: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 958d06: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958d08: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 958d0b: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 958d0e: je 0x958d1e */
  if (zf) goto L_958d1e;
L_958d10: /* 958d10: mov ecx, dword ptr [0xcf83e4] */
  ecx = R32((uint32_t)(0xcf83e4u));
/* 958d16: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958d18: je 0x958d1e */
  if (zf) goto L_958d1e;
L_958d1a: /* 958d1a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 958d1c: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
L_958d1e: /* 958d1e: cmp ebx, 6 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 958d21: jge 0x958d35 */
  if ((sf == of)) goto L_958d35;
L_958d23: /* 958d23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 958d24: push 0xcf8c08 */
  { uint32_t v = 0xcf8c08u; esp -= 4; W32(esp, v); }
/* 958d29: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x958d2eu); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 958d2e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958d31: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 958d32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 958d33: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 958d34: ret  */
  esp += 4; SPILL(); return;
L_958d35: /* 958d35: mov ebx, dword ptr [edi + 0x3c] */
  ebx = R32((uint32_t)(edi + 0x3cu));
/* 958d38: jne 0x958d70 */
  if (!zf) goto L_958d70;
L_958d3a: /* 958d3a: or ebx, 0x20000000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 958d40: mov dword ptr [edi + 0x3c], ebx */
  W32((uint32_t)(edi + 0x3cu), ebx);
/* 958d43: mov edx, dword ptr [0xcf8c0c] */
  edx = R32((uint32_t)(0xcf8c0cu));
/* 958d49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 958d4a: call 0x94eff0 */
  esp -= 4; W32(esp, 0x958d4fu); SPILL(); f_94eff0(); if (g_unwind) return; RELOAD();
/* 958d4f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958d52: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958d54: je 0x958d79 */
  if (zf) goto L_958d79;
L_958d56: /* 958d56: cmp dword ptr [eax + 0xc], 6 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958d5a: je 0x958d79 */
  if (zf) goto L_958d79;
L_958d5c: /* 958d5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 958d5d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 958d5f: push 0xcf8c0c */
  { uint32_t v = 0xcf8c0cu; esp -= 4; W32(esp, v); }
/* 958d64: call 0x94e6d0 */
  esp -= 4; W32(esp, 0x958d69u); SPILL(); f_94e6d0(); if (g_unwind) return; RELOAD();
/* 958d69: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958d6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 958d6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 958d6e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 958d6f: ret  */
  esp += 4; SPILL(); return;
L_958d70: /* 958d70: or ebx, 0x40000000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 958d76: mov dword ptr [edi + 0x3c], ebx */
  W32((uint32_t)(edi + 0x3cu), ebx);
L_958d79: /* 958d79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 958d7a: push 0xcf8c0c */
  { uint32_t v = 0xcf8c0cu; esp -= 4; W32(esp, v); }
/* 958d7f: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x958d84u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 958d84: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_958d87: /* 958d87: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 958d88: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 958d89: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 958d8a: ret  */
  esp += 4; SPILL(); return;
}

void f_958d90(void) {
  LOAD_REGS();
L_958d90: /* 958d90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 958d91: mov eax, dword ptr [0xcf8b48] */
  eax = R32((uint32_t)(0xcf8b48u));
/* 958d96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 958d97: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 958d98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 958d99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 958d9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 958d9b: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x958da0u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 958da0: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 958da4: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 958da7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 958dab: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 958dae: mov ecx, dword ptr [0xcf8bfc] */
  ecx = R32((uint32_t)(0xcf8bfcu));
/* 958db4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958db7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 958db8: mov dword ptr [0xcf8bfc], ecx */
  W32((uint32_t)(0xcf8bfcu), ecx);
/* 958dbe: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 958dc1: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 958dc4: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958dc6: je 0x958e24 */
  if (zf) goto L_958e24;
L_958dc8: /* 958dc8: test dword ptr [ebx + 0x3c], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x3cu))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958dcf: jne 0x958e19 */
  if (!zf) goto L_958e19;
L_958dd1: /* 958dd1: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 958dd4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958dd6: je 0x958e19 */
  if (zf) goto L_958e19;
L_958dd8: /* 958dd8: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 958ddb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958ddd: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 958de0: je 0x958e19 */
  if (zf) goto L_958e19;
L_958de2: /* 958de2: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 958de5: mov eax, dword ptr [0xcf8bfc] */
  eax = R32((uint32_t)(0xcf8bfcu));
/* 958dea: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 958ded: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958def: je 0x958e13 */
  if (zf) goto L_958e13;
L_958df1: /* 958df1: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 958df5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 958df6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 958df7: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x958dfcu); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 958dfc: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 958dff: mov ecx, dword ptr [0xcf8bfc] */
  ecx = R32((uint32_t)(0xcf8bfcu));
/* 958e05: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958e08: and eax, 0xfeffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfeffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 958e0d: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 958e10: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
L_958e13: /* 958e13: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 958e15: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958e17: jne 0x958de2 */
  if (!zf) goto L_958de2;
L_958e19: /* 958e19: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958e1b: je 0x958e24 */
  if (zf) goto L_958e24;
L_958e1d: /* 958e1d: mov ebx, dword ptr [ebx + 0x10] */
  ebx = R32((uint32_t)(ebx + 0x10u));
/* 958e20: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958e22: jne 0x958dc8 */
  if (!zf) goto L_958dc8;
L_958e24: /* 958e24: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 958e2b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 958e2c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 958e2d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 958e2e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 958e2f: jl 0x958e4f */
  if ((sf != of)) goto L_958e4f;
L_958e31: /* 958e31: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 958e35: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 958e36: call 0x94f340 */
  esp -= 4; W32(esp, 0x958e3bu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 958e3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 958e3c: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 958e41: push 0xaf8adc */
  { uint32_t v = 0xaf8adcu; esp -= 4; W32(esp, v); }
/* 958e46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 958e47: call 0x953470 */
  esp -= 4; W32(esp, 0x958e4cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 958e4c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_958e4f: /* 958e4f: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 958e53: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 958e54: ret  */
  esp += 4; SPILL(); return;
}

void f_958e60(void) {
  LOAD_REGS();
L_958e60: /* 958e60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 958e61: mov ebx, dword ptr [0xcf8b58] */
  ebx = R32((uint32_t)(0xcf8b58u));
/* 958e67: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 958e68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 958e69: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 958e6a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 958e6b: xor ebp, ebp */
  ebp = 0;
/* 958e6d: call 0x95f280 */
  esp -= 4; W32(esp, 0x958e72u); SPILL(); f_95f280(); if (g_unwind) return; RELOAD();
/* 958e72: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 958e73: call 0x95dbf0 */
  esp -= 4; W32(esp, 0x958e78u); SPILL(); f_95dbf0(); if (g_unwind) return; RELOAD();
/* 958e78: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 958e7d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958e80: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 958e81: mov dword ptr [0xcf8bf8], eax */
  W32((uint32_t)(0xcf8bf8u), eax);
/* 958e86: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 958e89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_958e90: /* 958e90: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 958e93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958e95: je 0x958edc */
  if (zf) goto L_958edc;
L_958e97: /* 958e97: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 958e9a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958e9c: je 0x958ed5 */
  if (zf) goto L_958ed5;
L_958e9e: /* 958e9e: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 958ea1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958ea3: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 958ea6: je 0x958ed5 */
  if (zf) goto L_958ed5;
L_958ea8: /* 958ea8: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 958ead: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 958eb0: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 958eb3: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958eb5: je 0x958ecf */
  if (zf) goto L_958ecf;
L_958eb7: /* 958eb7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 958eb8: call 0x95f280 */
  esp -= 4; W32(esp, 0x958ebdu); SPILL(); f_95f280(); if (g_unwind) return; RELOAD();
/* 958ebd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 958ebe: call 0x95dbf0 */
  esp -= 4; W32(esp, 0x958ec3u); SPILL(); f_95dbf0(); if (g_unwind) return; RELOAD();
/* 958ec3: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 958ec9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958ecc: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
L_958ecf: /* 958ecf: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 958ed1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958ed3: jne 0x958ea8 */
  if (!zf) goto L_958ea8;
L_958ed5: /* 958ed5: mov ebx, dword ptr [ebx + 0x1c] */
  ebx = R32((uint32_t)(ebx + 0x1cu));
/* 958ed8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958eda: jne 0x958e90 */
  if (!zf) goto L_958e90;
L_958edc: /* 958edc: mov esi, dword ptr [0xcf8b58] */
  esi = R32((uint32_t)(0xcf8b58u));
/* 958ee2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958ee4: je 0x958f2a */
  if (zf) goto L_958f2a;
L_958ee6: /* 958ee6: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 958ee9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958eeb: je 0x958f19 */
  if (zf) goto L_958f19;
L_958eed: /* 958eed: mov edx, dword ptr [0xcf8bf8] */
  edx = R32((uint32_t)(0xcf8bf8u));
/* 958ef3: cmp dword ptr [esi + 0x34], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x34u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 958ef6: je 0x958f19 */
  if (zf) goto L_958f19;
L_958ef8: /* 958ef8: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 958efb: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 958f01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 958f02: push 0xaf8b00 */
  { uint32_t v = 0xaf8b00u; esp -= 4; W32(esp, v); }
/* 958f07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 958f08: call 0x953470 */
  esp -= 4; W32(esp, 0x958f0du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 958f0d: mov ebp, esi */
  ebp = esi;
/* 958f0f: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 958f12: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 958f15: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958f17: jne 0x958ee6 */
  if (!zf) goto L_958ee6;
L_958f19: /* 958f19: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 958f1b: je 0x958f2a */
  if (zf) goto L_958f2a;
L_958f1d: /* 958f1d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 958f1f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 958f20: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 958f22: call 0x9535b0 */
  esp -= 4; W32(esp, 0x958f27u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 958f27: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_958f2a: /* 958f2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 958f2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 958f2c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 958f2d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 958f2e: ret  */
  esp += 4; SPILL(); return;
}
