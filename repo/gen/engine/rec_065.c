#include "recomp.h"
#include "rec_mod.h"

void f_824e29(void) {
  LOAD_REGS();
L_824e29: /* 824e29: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 824e2c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 824e31: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 824e34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 824e35: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 824e38: call 0x99caf8 */
  esp -= 4; W32(esp, 0x824e3du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_824e3d(); return;
}

void f_824e3d(void) {
  LOAD_REGS();
L_824e3d: /* 824e3d: push 0xa15010 */
  { uint32_t v = 0xa15010u; esp -= 4; W32(esp, v); }
/* 824e42: push 0xae38d0 */
  { uint32_t v = 0xae38d0u; esp -= 4; W32(esp, v); }
/* 824e47: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x824e4du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 824e4d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 824e50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 824e52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 824e54: call 0x99caf8 */
  esp -= 4; W32(esp, 0x824e59u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_824e59: guest_badaddr(0x824e59); return;
}

void f_824f00(void) {
  LOAD_REGS();
L_824f00: /* 824f00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 824f01: mov ebp, esp */
  ebp = esp;
/* 824f03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 824f05: push 0x9d3010 */
  { uint32_t v = 0x9d3010u; esp -= 4; W32(esp, v); }
/* 824f0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 824f10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 824f11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 824f18: sub esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 824f1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 824f1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 824f1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 824f1e: xor ebx, ebx */
  ebx = 0;
/* 824f20: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 824f23: mov esi, ecx */
  esi = ecx;
/* 824f25: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 824f28: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x824f2eu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 824f2e: mov ecx, eax */
  ecx = eax;
/* 824f30: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x824f36u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 824f36: mov eax, dword ptr [eax + 0x2d8] */
  eax = R32((uint32_t)(eax + 0x2d8u));
/* 824f3c: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 824f3f: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 824f41: mov ecx, dword ptr [esi + 0x2d8] */
  ecx = R32((uint32_t)(esi + 0x2d8u));
/* 824f47: mov edx, dword ptr [esi + 0x2d4] */
  edx = R32((uint32_t)(esi + 0x2d4u));
/* 824f4d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 824f50: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 824f53: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 824f56: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 824f58: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 824f5b: fsub dword ptr [esi + 0x2d8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x2d8u)));
/* 824f61: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 824f64: je 0x825164 */
  if (zf) goto L_825164;
L_824f6a: /* 824f6a: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 824f6f: mov ecx, edi */
  ecx = edi;
/* 824f71: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x824f77u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 824f77: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 824f79: mov ecx, edi */
  ecx = edi;
/* 824f7b: je 0x825098 */
  if (zf) goto L_825098;
L_824f81: /* 824f81: push 0xb6bd98 */
  { uint32_t v = 0xb6bd98u; esp -= 4; W32(esp, v); }
/* 824f86: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x824f8cu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 824f8c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 824f8e: je 0x825002 */
  if (zf) goto L_825002;
L_824f90: /* 824f90: mov eax, dword ptr [esi + 0x4fc] */
  eax = R32((uint32_t)(esi + 0x4fcu));
/* 824f96: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 824f98: je 0x824fed */
  if (zf) goto L_824fed;
L_824f9a: /* 824f9a: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 824f9d: fmul dword ptr [eax + 0x45c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x45cu)));
/* 824fa3: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 824fa6: fmul dword ptr [eax + 0x460] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x460u)));
/* 824fac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 824fae: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 824fb1: fmul dword ptr [eax + 0x458] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x458u)));
/* 824fb7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 824fb9: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 824fbf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 824fc1: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 824fc4: je 0x824fc8 */
  if (zf) goto L_824fc8;
L_824fc6: /* 824fc6: fchs  */
  ST0 = -ST0;
L_824fc8: /* 824fc8: fcomp dword ptr [esi + 0x2d8] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x2d8u)));
  FPOP();
/* 824fce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 824fd0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 824fd3: jp 0x824fed */
  if (pf) goto L_824fed;
L_824fd5: /* 824fd5: mov eax, 1 */
  eax = 0x1u;
/* 824fda: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 824fdd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 824fe4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 824fe5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 824fe6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 824fe7: mov esp, ebp */
  esp = ebp;
/* 824fe9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 824fea: ret 0x10 */
  esp += 20; SPILL(); return;
L_824fed: /* 824fed: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 824ff0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 824ff1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 824ff2: xor eax, eax */
  eax = 0;
/* 824ff4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 824ffb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 824ffc: mov esp, ebp */
  esp = ebp;
/* 824ffe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 824fff: ret 0x10 */
  esp += 20; SPILL(); return;
L_825002: /* 825002: test byte ptr [edi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 825009: je 0x82503d */
  if (zf) goto L_82503d;
L_82500b: /* 82500b: push 0xb62728 */
  { uint32_t v = 0xb62728u; esp -= 4; W32(esp, v); }
/* 825010: mov ecx, edi */
  ecx = edi;
/* 825012: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x825018u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 825018: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82501a: je 0x82503d */
  if (zf) goto L_82503d;
L_82501c: /* 82501c: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 825021: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 825023: jne 0x82503d */
  if (!zf) goto L_82503d;
L_825025: /* 825025: xor eax, eax */
  eax = 0;
L_825027: /* 825027: cmp eax, dword ptr [edi + 0x114] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82502d: jge 0x824fed */
  if ((sf == of)) goto L_824fed;
L_82502f: /* 82502f: mov ecx, dword ptr [edi + 0x110] */
  ecx = R32((uint32_t)(edi + 0x110u));
/* 825035: cmp dword ptr [ecx + eax*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 825038: je 0x824fd5 */
  if (zf) goto L_824fd5;
L_82503a: /* 82503a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 82503b: jmp 0x825027 */
  goto L_825027;
L_82503d: /* 82503d: fld dword ptr [edi + 0x2d8] */
  { double v = F32((uint32_t)(edi + 0x2d8u)); FPUSH(v); }
/* 825043: fadd dword ptr [0xa0b130] */
  ST0 = ST0 + (F32((uint32_t)(0xa0b130u)));
/* 825049: fsub dword ptr [esi + 0x2d8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x2d8u)));
/* 82504f: fadd qword ptr [0xa138d8] */
  ST0 = ST0 + (F64((uint32_t)(0xa138d8u)));
/* 825055: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 825058: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 82505a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82505c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82505f: je 0x825066 */
  if (zf) goto L_825066;
L_825061: /* 825061: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 825064: jmp 0x825068 */
  goto L_825068;
L_825066: /* 825066: fstp st(0) */
  STI(0) = ST0; FPOP();
L_825068: /* 825068: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 82506e: fadd dword ptr [0xa0b130] */
  ST0 = ST0 + (F32((uint32_t)(0xa0b130u)));
/* 825074: fadd qword ptr [0xa138d8] */
  ST0 = ST0 + (F64((uint32_t)(0xa138d8u)));
/* 82507a: fsub dword ptr [edi + 0x2d8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x2d8u)));
/* 825080: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 825083: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 825085: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 825087: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82508a: je 0x825156 */
  if (zf) goto L_825156;
L_825090: /* 825090: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 825093: jmp 0x825158 */
  goto L_825158;
L_825098: /* 825098: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 82509d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8250a3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8250a3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8250a5: je 0x82511c */
  if (zf) goto L_82511c;
L_8250a7: /* 8250a7: fld dword ptr [edi + 0x2d8] */
  { double v = F32((uint32_t)(edi + 0x2d8u)); FPUSH(v); }
/* 8250ad: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8250b0: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8250b2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8250b4: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8250b7: je 0x8250be */
  if (zf) goto L_8250be;
L_8250b9: /* 8250b9: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8250bc: jmp 0x8250c0 */
  goto L_8250c0;
L_8250be: /* 8250be: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8250c0: /* 8250c0: cmp byte ptr [edi + 0x50], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x50u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8250c4: jne 0x8250d2 */
  if (!zf) goto L_8250d2;
L_8250c6: /* 8250c6: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8250c9: fadd dword ptr [0xa1507c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1507cu)));
/* 8250cf: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
L_8250d2: /* 8250d2: fld dword ptr [edi + 0x2d8] */
  { double v = F32((uint32_t)(edi + 0x2d8u)); FPUSH(v); }
/* 8250d8: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8250db: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8250dd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8250df: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8250e2: je 0x8250e9 */
  if (zf) goto L_8250e9;
L_8250e4: /* 8250e4: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8250e7: jmp 0x8250eb */
  goto L_8250eb;
L_8250e9: /* 8250e9: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8250eb: /* 8250eb: fld dword ptr [esi + 0x3c0] */
  { double v = F32((uint32_t)(esi + 0x3c0u)); FPUSH(v); }
/* 8250f1: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 8250f7: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 8250fd: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
/* 825100: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 825102: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 825104: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 825107: jp 0x82510e */
  if (pf) goto L_82510e;
L_825109: /* 825109: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82510b: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
L_82510e: /* 82510e: fadd dword ptr [edi + 0x2d4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x2d4u)));
/* 825114: fadd dword ptr [esi + 0x2d4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x2d4u)));
/* 82511a: jmp 0x82515b */
  goto L_82515b;
L_82511c: /* 82511c: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 82511f: mov al, byte ptr [edi + 0x88] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x88u))) & 0xffu);
/* 825125: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 825127: fadd dword ptr [edi + 0x2d8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x2d8u)));
/* 82512d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 825130: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 825133: fadd dword ptr [edi + 0x2d8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x2d8u)));
/* 825139: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 82513c: jne 0x825148 */
  if (!zf) goto L_825148;
L_82513e: /* 82513e: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 825144: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 825146: je 0x825158 */
  if (zf) goto L_825158;
L_825148: /* 825148: fld dword ptr [edi + 0x2d4] */
  { double v = F32((uint32_t)(edi + 0x2d4u)); FPUSH(v); }
/* 82514e: fadd dword ptr [esi + 0x2d4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x2d4u)));
/* 825154: jmp 0x82515b */
  goto L_82515b;
L_825156: /* 825156: fstp st(0) */
  STI(0) = ST0; FPOP();
L_825158: /* 825158: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
L_82515b: /* 82515b: fadd dword ptr [esi + 0x3d4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x3d4u)));
/* 825161: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
L_825164: /* 825164: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 825167: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 82516a: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 82516d: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 825174: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x82517au); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 82517a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 82517d: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 825180: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 825183: fcomp dword ptr [ebp - 0x24] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffdcu)));
  FPOP();
/* 825186: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 825188: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82518b: jnp 0x824fed */
  if (!pf) goto L_824fed;
L_825191: /* 825191: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 825194: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 82519a: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 82519d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82519f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8251a5: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8251a8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8251ab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8251ad: jne 0x8251c5 */
  if (!zf) goto L_8251c5;
L_8251af: /* 8251af: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8251b2: je 0x8251b6 */
  if (zf) goto L_8251b6;
L_8251b4: /* 8251b4: fchs  */
  ST0 = -ST0;
L_8251b6: /* 8251b6: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 8251b9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8251bb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8251be: je 0x8251da */
  if (zf) goto L_8251da;
L_8251c0: /* 8251c0: jmp 0x824fd5 */
  goto L_824fd5;
L_8251c5: /* 8251c5: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8251c8: je 0x8251cc */
  if (zf) goto L_8251cc;
L_8251ca: /* 8251ca: fchs  */
  ST0 = -ST0;
L_8251cc: /* 8251cc: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 8251cf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8251d1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8251d4: jne 0x824fd5 */
  if (!zf) goto L_824fd5;
L_8251da: /* 8251da: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8251dd: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8251e3: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8251e6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8251e8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8251ee: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8251f1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8251f4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8251f6: jne 0x825204 */
  if (!zf) goto L_825204;
L_8251f8: /* 8251f8: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8251fb: je 0x8251ff */
  if (zf) goto L_8251ff;
L_8251fd: /* 8251fd: fchs  */
  ST0 = -ST0;
L_8251ff: /* 8251ff: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 825202: jmp 0x82520e */
  goto L_82520e;
L_825204: /* 825204: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 825207: je 0x82520b */
  if (zf) goto L_82520b;
L_825209: /* 825209: fchs  */
  ST0 = -ST0;
L_82520b: /* 82520b: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
L_82520e: /* 82520e: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 825210: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 825212: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 825214: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 825216: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 825219: je 0x824fed */
  if (zf) goto L_824fed;
L_82521f: /* 82521f: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 825225: mov edx, dword ptr [esi + 0x2d4] */
  edx = R32((uint32_t)(esi + 0x2d4u));
/* 82522b: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 825231: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 825237: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 82523a: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 825240: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 825243: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 825245: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 825248: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 82524b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82524e: fsub dword ptr [0x9f7fc4] */
  ST0 = ST0 - (F32((uint32_t)(0x9f7fc4u)));
/* 825254: mov dword ptr [ebp - 0x70], ebx */
  W32((uint32_t)(ebp + 0xffffff90u), ebx);
/* 825257: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 82525a: mov dword ptr [ebp - 0x6c], ebx */
  W32((uint32_t)(ebp + 0xffffff94u), ebx);
/* 82525d: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 825260: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* 825263: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 825266: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 825269: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 82526c: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 825273: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 82527a: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 825281: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 825288: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 82528f: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 825296: mov dword ptr [ebp - 0x4c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x3f800000u);
/* 82529d: mov dword ptr [ebp - 0x48], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffb8u), 0xffffffffu);
/* 8252a4: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8252a7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8252a9: mov ecx, esp */
  ecx = esp;
/* 8252ab: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8252ad: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8252b0: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 8252b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8252b6: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8252b9: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8252bc: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 8252bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8252c0: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 8252c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8252c4: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8252c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8252c8: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8252ce: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x8252d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8252d4: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8252d7: fcomp dword ptr [0xa15078] */
  fpu_com(ST0, F32((uint32_t)(0xa15078u)));
  FPOP();
/* 8252dd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8252df: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8252e2: jp 0x824fed */
  if (pf) goto L_824fed;
L_8252e8: /* 8252e8: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8252eb: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 8252f1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8252f3: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8252f6: jne 0x824fed */
  if (!zf) goto L_824fed;
L_8252fc: /* 8252fc: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8252ff: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 825305: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 825307: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82530a: jp 0x825352 */
  if (pf) goto L_825352;
L_82530c: /* 82530c: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 82530f: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 825312: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 825315: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 82531b: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 825321: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 825324: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x82532au); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 82532a: fstp qword ptr [ebp - 0x28] */
  WF64((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 82532d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 825330: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 825333: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 825339: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 82533f: fmul qword ptr [ebp - 0x28] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffd8u)));
/* 825342: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 825345: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 825347: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 825349: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82534c: je 0x824fd5 */
  if (zf) goto L_824fd5;
L_825352: /* 825352: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 825354: je 0x825361 */
  if (zf) goto L_825361;
L_825356: /* 825356: mov edx, dword ptr [edi + 0x2d4] */
  edx = R32((uint32_t)(edi + 0x2d4u));
/* 82535c: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 82535f: jmp 0x825375 */
  goto L_825375;
L_825361: /* 825361: mov ecx, 0xb602d8 */
  ecx = 0xb602d8u;
/* 825366: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x82536cu); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 82536c: mov eax, dword ptr [eax + 0x2d4] */
  eax = R32((uint32_t)(eax + 0x2d4u));
/* 825372: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_825375: /* 825375: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 82537b: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* 82537e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 825380: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 825383: jp 0x824fed */
  if (pf) goto L_824fed;
L_825389: /* 825389: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 82538c: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82538f: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 825392: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 825398: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 82539e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8253a1: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8253a7u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8253a7: fstp qword ptr [ebp - 0x28] */
  WF64((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8253aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8253ad: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8253b0: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8253b3: fadd dword ptr [0x9f74fc] */
  ST0 = ST0 + (F32((uint32_t)(0x9f74fcu)));
/* 8253b9: fsub dword ptr [esi + 0x2d4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x2d4u)));
/* 8253bf: fmul qword ptr [ebp - 0x28] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffd8u)));
/* 8253c2: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8253c5: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8253c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8253c9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8253cc: jne 0x824fed */
  if (!zf) goto L_824fed;
L_8253d2: /* 8253d2: jmp 0x824fd5 */
  goto L_824fd5;
}

void f_8253d7(void) {
  LOAD_REGS();
L_8253d7: /* 8253d7: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8253da: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8253df: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 8253e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8253e3: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8253e6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8253ebu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8253eb(); return;
}

void f_8253eb(void) {
  LOAD_REGS();
L_8253eb: /* 8253eb: push 0xa15038 */
  { uint32_t v = 0xa15038u; esp -= 4; W32(esp, v); }
/* 8253f0: push 0xae38e0 */
  { uint32_t v = 0xae38e0u; esp -= 4; W32(esp, v); }
/* 8253f5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8253fbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8253fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8253fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 825400: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 825402: call 0x99caf8 */
  esp -= 4; W32(esp, 0x825407u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_825407: guest_badaddr(0x825407); return;
}

void f_825560(void) {
  LOAD_REGS();
L_825560: /* 825560: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 825561: mov ebp, esp */
  ebp = esp;
/* 825563: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 825565: push 0x9d3020 */
  { uint32_t v = 0x9d3020u; esp -= 4; W32(esp, v); }
/* 82556a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 825570: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 825571: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 825578: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82557b: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 82557e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82557f: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 825582: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 825583: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 825584: mov esi, ecx */
  esi = ecx;
/* 825586: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 825589: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 82558c: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82558f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 825592: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 825595: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 82559c: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 82559f: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8255a6: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 8255a9: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8255ac: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8255af: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8255b5u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8255b5: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 8255b8: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8255bb: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8255be: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8255c1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8255c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8255c9: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8255cc: jnp 0x8257f9 */
  if (!pf) goto L_8257f9;
L_8255d2: /* 8255d2: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 8255d5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8255db: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8255dd: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8255e0: jnp 0x8257f9 */
  if (!pf) goto L_8257f9;
L_8255e6: /* 8255e6: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8255e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8255ea: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 8255ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8255ee: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8255f1: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8255f7u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8255f7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8255f9: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 8255fc: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8255ff: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 825605: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 825608: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82560b: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 82560e: fld dword ptr [ecx + 0x3cc] */
  { double v = F32((uint32_t)(ecx + 0x3ccu)); FPUSH(v); }
/* 825614: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 82561a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82561c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82561f: jne 0x825651 */
  if (!zf) goto L_825651;
L_825621: /* 825621: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 825624: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 825627: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 82562a: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 82562c: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 82562f: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 825632: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 825635: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 825638: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
L_82563b: /* 82563b: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 82563e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 825641: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 825648: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 825649: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82564a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82564b: mov esp, ebp */
  esp = ebp;
/* 82564d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82564e: ret 0x2c */
  esp += 48; SPILL(); return;
L_825651: /* 825651: fld dword ptr [ecx + 0x3cc] */
  { double v = F32((uint32_t)(ecx + 0x3ccu)); FPUSH(v); }
/* 825657: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 82565d: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* 825660: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 825663: fdiv dword ptr [ebp + 0x24] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x24u)));
/* 825666: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 825669: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 82566c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 825672: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 825674: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 825677: jp 0x8256c1 */
  if (pf) goto L_8256c1;
L_825679: /* 825679: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x82567fu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 82567f: mov ecx, eax */
  ecx = eax;
/* 825681: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x825687u); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 825687: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 82568d: fld dword ptr [ecx + 0x3cc] */
  { double v = F32((uint32_t)(ecx + 0x3ccu)); FPUSH(v); }
/* 825693: fcomp dword ptr [eax + 0x3cc] */
  fpu_com(ST0, F32((uint32_t)(eax + 0x3ccu)));
  FPOP();
/* 825699: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82569b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82569e: jne 0x8256c1 */
  if (!zf) goto L_8256c1;
L_8256a0: /* 8256a0: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8256a3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8256a6: fdiv dword ptr [ebp + 0x20] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x20u)));
/* 8256a9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8256ac: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8256b2u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8256b2: fstp qword ptr [ebp - 0x28] */
  WF64((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8256b5: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8256b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8256bb: fsub qword ptr [ebp - 0x28] */
  ST0 = ST0 - (F64((uint32_t)(ebp + 0xffffffd8u)));
/* 8256be: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
L_8256c1: /* 8256c1: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8256c4: fdiv dword ptr [ebp + 0x14] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x14u)));
/* 8256c7: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8256ca: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 8256cd: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8256cf: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8256d2: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8256d5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8256db: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8256dd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8256e0: jne 0x82571b */
  if (!zf) goto L_82571b;
L_8256e2: /* 8256e2: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 8256e8: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8256eeu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8256ee: mov ecx, eax */
  ecx = eax;
/* 8256f0: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x8256f6u); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 8256f6: mov edx, dword ptr [esi + 0x16c] */
  edx = R32((uint32_t)(esi + 0x16cu));
/* 8256fc: fld dword ptr [edx + 0x3cc] */
  { double v = F32((uint32_t)(edx + 0x3ccu)); FPUSH(v); }
/* 825702: fcomp dword ptr [eax + 0x3cc] */
  fpu_com(ST0, F32((uint32_t)(eax + 0x3ccu)));
  FPOP();
/* 825708: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82570a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82570d: jp 0x82571b */
  if (pf) goto L_82571b;
L_82570f: /* 82570f: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 825712: fadd dword ptr [0xa150c4] */
  ST0 = ST0 + (F32((uint32_t)(0xa150c4u)));
/* 825718: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
L_82571b: /* 82571b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 82571e: fcomp dword ptr [ebp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x28u)));
  FPOP();
/* 825721: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 825723: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 825726: jp 0x82579a */
  if (pf) goto L_82579a;
L_825728: /* 825728: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 82572b: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82572e: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 825731: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 825737: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 82573a: fmul dword ptr [ebp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x28u)));
/* 82573d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82573f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 825742: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x825748u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 825748: fstp qword ptr [ebp + 0x10] */
  WF64((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 82574b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82574e: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 825751: fsubr qword ptr [ebp + 0x10] */
  ST0 = (F64((uint32_t)(ebp + 0x10u))) - ST0;
/* 825754: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 825757: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 825759: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 82575b: fcom dword ptr [0xa110dc] */
  fpu_com(ST0, F32((uint32_t)(0xa110dcu)));
/* 825761: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 825763: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 825766: je 0x825770 */
  if (zf) goto L_825770;
L_825768: /* 825768: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82576a: fld dword ptr [0xa110dc] */
  { double v = F32((uint32_t)(0xa110dcu)); FPUSH(v); }
L_825770: /* 825770: fdivr dword ptr [ebp - 0x18] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe8u))) / ST0;
/* 825773: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 825776: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 825778: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82577a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82577d: jp 0x82578f */
  if (pf) goto L_82578f;
L_82577f: /* 82577f: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 825782: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 825784: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 825787: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* 82578a: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 82578d: jmp 0x8257be */
  goto L_8257be;
L_82578f: /* 82578f: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 825792: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 825795: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 825798: jmp 0x8257be */
  goto L_8257be;
L_82579a: /* 82579a: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 82579d: fadd dword ptr [ebp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x2cu)));
/* 8257a0: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8257a3: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8257a5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8257a7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8257aa: jne 0x8257bc */
  if (!zf) goto L_8257bc;
L_8257ac: /* 8257ac: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8257af: fdivr st(1) */
  ST0 = STI(1) / ST0;
/* 8257b1: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 8257b4: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 8257b7: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8257ba: jmp 0x8257be */
  goto L_8257be;
L_8257bc: /* 8257bc: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8257be: /* 8257be: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8257c1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8257c4: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 8257c7: mov edx, eax */
  edx = eax;
/* 8257c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8257ca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8257cb: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8257ce: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8257d1: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8257d4: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8257d6: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 8257d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8257da: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8257dd: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8257e0: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8257e3: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8257e6: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8257e9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8257ec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8257f3: mov esp, ebp */
  esp = ebp;
/* 8257f5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8257f6: ret 0x2c */
  esp += 48; SPILL(); return;
L_8257f9: /* 8257f9: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 8257fc: fcomp dword ptr [ebp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x2cu)));
  FPOP();
/* 8257ff: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 825801: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 825804: jne 0x82580b */
  if (!zf) goto L_82580b;
L_825806: /* 825806: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 825809: jmp 0x82580e */
  goto L_82580e;
L_82580b: /* 82580b: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
L_82580e: /* 82580e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 825811: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 825817: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 82581e: jmp 0x82563b */
  goto L_82563b;
}

void f_825823(void) {
  LOAD_REGS();
L_825823: /* 825823: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 825826: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82582b: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 82582e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82582f: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 825832: call 0x99caf8 */
  esp -= 4; W32(esp, 0x825837u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_825837(); return;
}

void f_825837(void) {
  LOAD_REGS();
L_825837: /* 825837: push 0xa15080 */
  { uint32_t v = 0xa15080u; esp -= 4; W32(esp, v); }
/* 82583c: push 0xae3950 */
  { uint32_t v = 0xae3950u; esp -= 4; W32(esp, v); }
/* 825841: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x825847u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 825847: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82584a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82584c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82584e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x825853u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_825853: guest_badaddr(0x825853); return;
}

void f_825920(void) {
  LOAD_REGS();
L_825920: /* 825920: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 825921: mov ebp, esp */
  ebp = esp;
/* 825923: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 825925: push 0x9d3030 */
  { uint32_t v = 0x9d3030u; esp -= 4; W32(esp, v); }
/* 82592a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 825930: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 825931: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 825938: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82593b: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 825940: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 825941: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 825942: mov esi, ecx */
  esi = ecx;
/* 825944: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 825947: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 825948: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 82594b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 825952: je 0x8259bb */
  if (zf) goto L_8259bb;
L_825954: /* 825954: mov ecx, dword ptr [esi + 0x3f8] */
  ecx = R32((uint32_t)(esi + 0x3f8u));
/* 82595a: mov edx, dword ptr [esi + 0x40c] */
  edx = R32((uint32_t)(esi + 0x40cu));
/* 825960: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 825963: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 825964: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 825967: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 82596a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82596b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82596c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82596d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 825970: lea edx, [esi + 0x170] */
  edx = (uint32_t)(esi + 0x170u);
/* 825976: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 825978: mov eax, esp */
  eax = esp;
/* 82597a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 82597c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 82597f: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 825982: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 825985: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 825988: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 82598b: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 82598e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 825991: mov eax, esp */
  eax = esp;
/* 825993: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 825995: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 825998: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 82599b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 82599e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82599f: mov ecx, esi */
  ecx = esi;
/* 8259a1: call 0x6cc73e */
  esp -= 4; W32(esp, 0x8259a6u); SPILL(); f_6cc73e(); if (g_unwind) return; RELOAD();
/* 8259a6: mov eax, edi */
  eax = edi;
/* 8259a8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8259ab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8259b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8259b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8259b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8259b5: mov esp, ebp */
  esp = ebp;
/* 8259b7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8259b8: ret 0x18 */
  esp += 28; SPILL(); return;
L_8259bb: /* 8259bb: mov edx, dword ptr [esi + 0x16c] */
  edx = R32((uint32_t)(esi + 0x16cu));
/* 8259c1: fld dword ptr [edx + 0x3cc] */
  { double v = F32((uint32_t)(edx + 0x3ccu)); FPUSH(v); }
/* 8259c7: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8259ca: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8259d0: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8259d7: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8259da: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8259dd: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 8259e3: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8259e6: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8259e9: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 8259ef: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8259f2: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 8259f8: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8259fb: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8259fe: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x825a04u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 825a04: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 825a07: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 825a0a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 825a0d: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 825a10: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 825a16: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 825a18: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 825a1b: jp 0x825a5a */
  if (pf) goto L_825a5a;
L_825a1d: /* 825a1d: fld dword ptr [esi + 0x40c] */
  { double v = F32((uint32_t)(esi + 0x40cu)); FPUSH(v); }
/* 825a23: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 825a26: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 825a28: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 825a2a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 825a2d: jne 0x825a34 */
  if (!zf) goto L_825a34;
L_825a2f: /* 825a2f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 825a31: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
L_825a34: /* 825a34: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 825a37: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 825a3a: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 825a40: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 825a47: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 825a4a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 825a51: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 825a52: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 825a53: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 825a54: mov esp, ebp */
  esp = ebp;
/* 825a56: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 825a57: ret 0x18 */
  esp += 28; SPILL(); return;
L_825a5a: /* 825a5a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 825a5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 825a5e: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 825a61: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 825a62: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 825a65: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x825a6bu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 825a6b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 825a6d: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 825a70: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 825a73: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 825a79: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 825a7c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 825a7f: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 825a82: fld dword ptr [ecx + 0x3cc] */
  { double v = F32((uint32_t)(ecx + 0x3ccu)); FPUSH(v); }
/* 825a88: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 825a8e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 825a90: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 825a93: jne 0x825ada */
  if (!zf) goto L_825ada;
L_825a95: /* 825a95: fld dword ptr [esi + 0x3f8] */
  { double v = F32((uint32_t)(esi + 0x3f8u)); FPUSH(v); }
/* 825a9b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 825a9e: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 825aa1: mov edx, eax */
  edx = eax;
/* 825aa3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 825aa5: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 825aa8: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 825aab: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 825aae: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 825ab0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 825ab2: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 825ab5: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 825ab8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 825abb: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 825abe: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 825ac1: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 825ac4: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 825ac7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 825aca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 825ad1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 825ad2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 825ad3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 825ad4: mov esp, ebp */
  esp = ebp;
/* 825ad6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 825ad7: ret 0x18 */
  esp += 28; SPILL(); return;
L_825ada: /* 825ada: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 825add: fdiv dword ptr [esi + 0x3f8] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x3f8u)));
/* 825ae3: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 825ae6: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 825ae8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 825aea: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 825aed: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 825aef: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
/* 825af2: fcomp dword ptr [ebp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x1cu)));
  FPOP();
/* 825af5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 825af7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 825afa: jne 0x825b27 */
  if (!zf) goto L_825b27;
L_825afc: /* 825afc: fld dword ptr [esi + 0x40c] */
  { double v = F32((uint32_t)(esi + 0x40cu)); FPUSH(v); }
/* 825b02: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 825b08: fadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x1cu)));
/* 825b0b: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 825b0e: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 825b10: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 825b12: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 825b15: jne 0x825b22 */
  if (!zf) goto L_825b22;
L_825b17: /* 825b17: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 825b19: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 825b1c: fadd dword ptr [esi + 0x40c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x40cu)));
L_825b22: /* 825b22: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 825b25: jmp 0x825b2d */
  goto L_825b2d;
L_825b27: /* 825b27: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 825b2a: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
L_825b2d: /* 825b2d: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 825b30: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 825b33: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 825b36: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 825b39: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 825b3f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 825b41: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 825b47: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 825b49: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 825b4c: jne 0x825b8f */
  if (!zf) goto L_825b8f;
L_825b4e: /* 825b4e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 825b51: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 825b54: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x825b5au); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 825b5a: fstp qword ptr [ebp - 0x20] */
  WF64((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 825b5d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 825b60: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 825b63: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 825b69: fsub qword ptr [ebp - 0x20] */
  ST0 = ST0 - (F64((uint32_t)(ebp + 0xffffffe0u)));
/* 825b6c: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 825b6f: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 825b71: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 825b73: fdivr dword ptr [ebp - 0x14] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffecu))) / ST0;
/* 825b76: fld dword ptr [esi + 0x3f8] */
  { double v = F32((uint32_t)(esi + 0x3f8u)); FPUSH(v); }
/* 825b7c: fst dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0);
/* 825b7f: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 825b81: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 825b83: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 825b86: jp 0x825b94 */
  if (pf) goto L_825b94;
L_825b88: /* 825b88: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 825b8a: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 825b8d: jmp 0x825b94 */
  goto L_825b94;
L_825b8f: /* 825b8f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 825b91: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
L_825b94: /* 825b94: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 825b97: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 825b9a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 825b9c: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 825b9f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 825ba2: mov ecx, eax */
  ecx = eax;
/* 825ba4: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 825ba7: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 825baa: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 825bad: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 825baf: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 825bb1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 825bb2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 825bb3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 825bb4: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 825bb7: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 825bba: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 825bbd: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 825bc0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 825bc2: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 825bc5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 825bc8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 825bcf: mov esp, ebp */
  esp = ebp;
/* 825bd1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 825bd2: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_825bd5(void) {
  LOAD_REGS();
L_825bd5: /* 825bd5: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 825bd8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 825bdd: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 825be0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 825be1: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 825be4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x825be9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_825be9(); return;
}

void f_825be9(void) {
  LOAD_REGS();
L_825be9: /* 825be9: push 0xa150c8 */
  { uint32_t v = 0xa150c8u; esp -= 4; W32(esp, v); }
/* 825bee: push 0xae3958 */
  { uint32_t v = 0xae3958u; esp -= 4; W32(esp, v); }
/* 825bf3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x825bf9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 825bf9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 825bfc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 825bfe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 825c00: call 0x99caf8 */
  esp -= 4; W32(esp, 0x825c05u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_825c05: guest_badaddr(0x825c05); return;
}

void f_825cd0(void) {
  LOAD_REGS();
L_825cd0: /* 825cd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 825cd1: mov ebp, esp */
  ebp = esp;
/* 825cd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 825cd5: push 0x9d3040 */
  { uint32_t v = 0x9d3040u; esp -= 4; W32(esp, v); }
/* 825cda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 825ce0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 825ce1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 825ce8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 825ceb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 825cee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 825cef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 825cf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 825cf1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 825cf4: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 825cf9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 825d00: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x825d06u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 825d06: xor ecx, ecx */
  ecx = 0;
/* 825d08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 825d0a: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 825d0d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 825d0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 825d0f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 825d10: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 825d11: and ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 825d14: mov eax, ecx */
  eax = ecx;
/* 825d16: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 825d19: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 825d20: mov esp, ebp */
  esp = ebp;
/* 825d22: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 825d23: ret 4 */
  esp += 8; SPILL(); return;
}

void f_825d26(void) {
  LOAD_REGS();
L_825d26: /* 825d26: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 825d29: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 825d2e: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 825d31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 825d32: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 825d35: call 0x99caf8 */
  esp -= 4; W32(esp, 0x825d3au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_825d3a(); return;
}

void f_825d3a(void) {
  LOAD_REGS();
L_825d3a: /* 825d3a: push 0xa15108 */
  { uint32_t v = 0xa15108u; esp -= 4; W32(esp, v); }
/* 825d3f: push 0xae3968 */
  { uint32_t v = 0xae3968u; esp -= 4; W32(esp, v); }
/* 825d44: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x825d4au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 825d4a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 825d4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 825d4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 825d51: call 0x99caf8 */
  esp -= 4; W32(esp, 0x825d56u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_825d56: guest_badaddr(0x825d56); return;
}

void f_825d90(void) {
  LOAD_REGS();
L_825d90: /* 825d90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 825d91: mov ebp, esp */
  ebp = esp;
/* 825d93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 825d95: push 0x9d3050 */
  { uint32_t v = 0x9d3050u; esp -= 4; W32(esp, v); }
/* 825d9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 825da0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 825da1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 825da8: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 825dab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 825dac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 825dad: mov esi, ecx */
  esi = ecx;
/* 825daf: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 825db5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 825db7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 825dba: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 825dbd: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 825dc0: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 825dc6: fld dword ptr [ecx + 0x3cc] */
  { double v = F32((uint32_t)(ecx + 0x3ccu)); FPUSH(v); }
/* 825dcc: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 825dcf: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 825dd5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 825dd6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 825dd9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 825de0: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 825de3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 825de5: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 825dec: mov dword ptr [ebp - 0x54], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffacu), 0xbf800000u);
/* 825df3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 825df6: jne 0x825dff */
  if (!zf) goto L_825dff;
L_825df8: /* 825df8: mov dword ptr [ebp - 0x54], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x3f800000u);
L_825dff: /* 825dff: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 825e05: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 825e08: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 825e0a: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 825e10: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 825e13: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 825e15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 825e17: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 825e1a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 825e1c: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 825e1f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 825e21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 825e22: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 825e25: lea edi, [esi + 0x17c] */
  edi = (uint32_t)(esi + 0x17cu);
/* 825e2b: mov eax, esp */
  eax = esp;
/* 825e2d: mov ecx, edi */
  ecx = edi;
/* 825e2f: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 825e31: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 825e33: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 825e36: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 825e39: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 825e3c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 825e3f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 825e42: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 825e45: mov eax, esp */
  eax = esp;
/* 825e47: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 825e49: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 825e4c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 825e4f: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 825e52: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 825e55: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 825e5b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 825e5c: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 825e63: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 825e6a: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x825e70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 825e70: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 825e73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 825e75: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 825e78: je 0x825e9a */
  if (zf) goto L_825e9a;
L_825e7a: /* 825e7a: cmp dword ptr [ebx + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 825e7d: jne 0x825e9a */
  if (!zf) goto L_825e9a;
L_825e7f: /* 825e7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 825e80: mov ecx, esi */
  ecx = esi;
/* 825e82: call 0x6c8639 */
  esp -= 4; W32(esp, 0x825e87u); SPILL(); f_6c8639(); if (g_unwind) return; RELOAD();
/* 825e87: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 825e8a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 825e91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 825e92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 825e93: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 825e94: mov esp, ebp */
  esp = ebp;
/* 825e96: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 825e97: ret 0x18 */
  esp += 28; SPILL(); return;
L_825e9a: /* 825e9a: fld dword ptr [ebx + 0x24] */
  { double v = F32((uint32_t)(ebx + 0x24u)); FPUSH(v); }
/* 825e9d: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 825ea3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 825ea5: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 825eab: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 825eae: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 825eb1: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 825eb4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 825eb6: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 825eb9: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 825ebc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 825ebf: jp 0x826063 */
  if (pf) goto L_826063;
L_825ec5: /* 825ec5: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 825ecb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 825ecd: fsub dword ptr [ebx + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x24u)));
/* 825ed0: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 825ed6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 825ed8: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 825eda: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 825edc: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 825edf: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 825ee5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 825ee7: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 825eea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 825eeb: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 825eee: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 825ef1: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 825ef4: mov edx, esp */
  edx = esp;
/* 825ef6: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 825ef9: mov ecx, edi */
  ecx = edi;
/* 825efb: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 825efd: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 825eff: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 825f02: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 825f05: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 825f08: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 825f0b: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 825f0e: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 825f11: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 825f14: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 825f17: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 825f1a: mov edx, esp */
  edx = esp;
/* 825f1c: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 825f22: mov dword ptr [ebp + 8], 0x80000000 */
  W32((uint32_t)(ebp + 0x8u), 0x80000000u);
/* 825f29: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 825f2c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 825f2e: mov dword ptr [ebp + 0xc], 0x80000000 */
  W32((uint32_t)(ebp + 0xcu), 0x80000000u);
/* 825f35: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 825f38: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 825f3b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 825f3e: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 825f41: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 825f44: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 825f4a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 825f4b: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x825f51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 825f51: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 825f57: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 825f59: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 825f5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 825f5e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 825f60: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 825f62: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 825f64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 825f65: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 825f68: mov eax, esp */
  eax = esp;
/* 825f6a: mov ecx, edi */
  ecx = edi;
/* 825f6c: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 825f6e: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 825f70: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 825f73: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 825f76: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 825f79: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 825f7c: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 825f7f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 825f82: mov eax, esp */
  eax = esp;
/* 825f84: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 825f86: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 825f89: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 825f8c: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 825f8f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 825f92: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 825f98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 825f99: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x825f9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 825f9f: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 825fa2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 825fa4: je 0x825fb2 */
  if (zf) goto L_825fb2;
L_825fa6: /* 825fa6: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 825fa9: cmp dword ptr [edx + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 825fac: je 0x825e7f */
  if (zf) goto L_825e7f;
L_825fb2: /* 825fb2: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 825fb5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 825fb7: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 825fbd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 825fbf: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 825fc1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 825fc3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 825fc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 825fc6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 825fc9: mov ecx, esp */
  ecx = esp;
/* 825fcb: mov edx, edi */
  edx = edi;
/* 825fcd: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 825fcf: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 825fd1: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 825fd4: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 825fd7: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 825fda: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 825fdd: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 825fe0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 825fe3: mov ecx, esp */
  ecx = esp;
/* 825fe5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 825fe7: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 825fea: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 825fed: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 825ff0: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 825ff3: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 825ff9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 825ffa: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x826000u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 826000: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 826003: fld dword ptr [ebx + 0x24] */
  { double v = F32((uint32_t)(ebx + 0x24u)); FPUSH(v); }
/* 826006: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82600c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82600e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 826011: jp 0x826063 */
  if (pf) goto L_826063;
L_826013: /* 826013: fld dword ptr [ebx + 0x1c] */
  { double v = F32((uint32_t)(ebx + 0x1cu)); FPUSH(v); }
/* 826016: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 82601c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82601e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 826021: jp 0x826063 */
  if (pf) goto L_826063;
L_826023: /* 826023: mov edi, dword ptr [ebp - 0x44] */
  edi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 826026: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82602c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 82602e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 826030: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 826032: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 826034: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 826037: mov edx, esp */
  edx = esp;
/* 826039: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 82603b: mov edi, dword ptr [ebp - 0x40] */
  edi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 82603e: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 826041: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 826044: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 826045: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 826048: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x82604eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_82604e: /* 82604e: xor eax, eax */
  eax = 0;
/* 826050: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 826053: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82605a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82605b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82605c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82605d: mov esp, ebp */
  esp = ebp;
/* 82605f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 826060: ret 0x18 */
  esp += 28; SPILL(); return;
L_826063: /* 826063: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 826066: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 826068: fmul dword ptr [0xa15154] */
  ST0 = ST0 * (F32((uint32_t)(0xa15154u)));
/* 82606e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 826070: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 826076: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 826079: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82607b: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 82607e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 826081: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 826084: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 826086: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 826089: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 82608f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 826091: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 826094: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 826096: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 826097: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82609a: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 82609d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82609f: mov eax, esp */
  eax = esp;
/* 8260a1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8260a3: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8260a6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8260a9: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 8260ac: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8260af: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8260b2: mov eax, esp */
  eax = esp;
/* 8260b4: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 8260bb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8260be: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8260c0: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 8260c7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8260ca: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8260cd: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8260d0: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8260d3: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8260d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8260da: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x8260e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8260e0: cmp dword ptr [ebx + 0x24], 0x3f800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x24u))); uint32_t b = (uint32_t)(0x3f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8260e7: je 0x82615e */
  if (zf) goto L_82615e;
L_8260e9: /* 8260e9: fld dword ptr [ebx + 0x1c] */
  { double v = F32((uint32_t)(ebx + 0x1cu)); FPUSH(v); }
/* 8260ec: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 8260f2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8260f4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8260f7: jnp 0x82615e */
  if (!pf) goto L_82615e;
L_8260f9: /* 8260f9: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8260fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8260fe: je 0x826109 */
  if (zf) goto L_826109;
L_826100: /* 826100: cmp dword ptr [ebx + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 826103: je 0x825e7f */
  if (zf) goto L_825e7f;
L_826109: /* 826109: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 82610c: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 82610f: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 826112: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 826115: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 826118: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 82611b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 82611d: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 826120: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 826123: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 826126: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 826129: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x82612fu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 82612f: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 826132: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 826135: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 826138: fcomp dword ptr [ebp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x14u)));
  FPOP();
/* 82613b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82613d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 826140: je 0x82604e */
  if (zf) goto L_82604e;
L_826146: /* 826146: mov eax, 1 */
  eax = 0x1u;
/* 82614b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82614e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 826155: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 826156: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 826157: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 826158: mov esp, ebp */
  esp = ebp;
/* 82615a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82615b: ret 0x18 */
  esp += 28; SPILL(); return;
L_82615e: /* 82615e: mov edi, dword ptr [ebp - 0x44] */
  edi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 826161: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 826167: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 826169: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82616b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82616d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82616f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 826172: mov eax, esp */
  eax = esp;
/* 826174: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 826176: mov edi, dword ptr [ebp - 0x40] */
  edi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 826179: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 82617c: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 82617f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 826180: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 826183: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x826189u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 826189: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82618c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82618d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82618e: mov eax, 2 */
  eax = 0x2u;
/* 826193: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82619a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82619b: mov esp, ebp */
  esp = ebp;
/* 82619d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82619e: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_8261a1(void) {
  LOAD_REGS();
L_8261a1: /* 8261a1: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8261a4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8261a9: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 8261ac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8261ad: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8261b0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8261b5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8261b5(); return;
}

void f_8261b5(void) {
  LOAD_REGS();
L_8261b5: /* 8261b5: push 0xa1512c */
  { uint32_t v = 0xa1512cu; esp -= 4; W32(esp, v); }
/* 8261ba: push 0xae3970 */
  { uint32_t v = 0xae3970u; esp -= 4; W32(esp, v); }
/* 8261bf: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8261c5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8261c5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8261c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8261ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8261cc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8261d1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8261d1: guest_badaddr(0x8261d1); return;
}

void f_826300(void) {
  LOAD_REGS();
L_826300: /* 826300: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 826301: mov ebp, esp */
  ebp = esp;
/* 826303: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 826305: push 0x9d3060 */
  { uint32_t v = 0x9d3060u; esp -= 4; W32(esp, v); }
/* 82630a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 826310: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 826311: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 826318: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82631b: xor eax, eax */
  eax = 0;
/* 82631d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82631e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82631f: mov esi, ecx */
  esi = ecx;
/* 826321: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 826322: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 826325: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 826326: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 826327: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 82632d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 826330: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 826332: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 826335: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 826338: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 82633b: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 82633e: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 826341: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 826344: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 826347: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 82634a: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 82634d: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 826350: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 826353: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 826356: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 826359: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 82635c: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 82635f: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 826365: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 826367: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 826369: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 82636c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82636d: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 826370: mov dword ptr [ebp - 0x44], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x3f800000u);
/* 826377: mov dword ptr [ebp - 0x40], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffc0u), 0xffffffffu);
/* 82637e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 826380: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 826383: lea edi, [esi + 0x17c] */
  edi = (uint32_t)(esi + 0x17cu);
/* 826389: mov eax, esp */
  eax = esp;
/* 82638b: mov ecx, edi */
  ecx = edi;
/* 82638d: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 82638f: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 826391: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 826394: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 826397: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 82639a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 82639d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8263a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8263a3: mov eax, esp */
  eax = esp;
/* 8263a5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8263a7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8263aa: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8263ad: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8263b0: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8263b3: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8263b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8263ba: mov dword ptr [ebp - 0x2c], 0x80000000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x80000000u);
/* 8263c1: mov dword ptr [ebp - 0x28], 0x80000000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x80000000u);
/* 8263c8: mov dword ptr [ebp - 0x24], 0x420c0000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x420c0000u);
/* 8263cf: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x8263d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8263d5: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8263d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8263da: je 0x8263fc */
  if (zf) goto L_8263fc;
L_8263dc: /* 8263dc: cmp dword ptr [ebp - 0x64], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8263df: jne 0x8263fc */
  if (!zf) goto L_8263fc;
L_8263e1: /* 8263e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8263e2: mov ecx, esi */
  ecx = esi;
/* 8263e4: call 0x6c8639 */
  esp -= 4; W32(esp, 0x8263e9u); SPILL(); f_6c8639(); if (g_unwind) return; RELOAD();
/* 8263e9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8263ec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8263f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8263f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8263f5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8263f6: mov esp, ebp */
  esp = ebp;
/* 8263f8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8263f9: ret 0x14 */
  esp += 24; SPILL(); return;
L_8263fc: /* 8263fc: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8263ff: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 826405: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 826407: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82640a: jp 0x8264db */
  if (pf) goto L_8264db;
L_826410: /* 826410: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 826416: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 82641c: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 82641f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 826421: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 826423: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 826425: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 826427: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 826429: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 82642c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82642d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 826430: mov eax, esp */
  eax = esp;
/* 826432: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 826435: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 826438: mov ecx, edi */
  ecx = edi;
/* 82643a: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 82643c: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 82643f: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 826442: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 826444: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 826447: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 82644a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 82644d: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 826450: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 826453: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 826456: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 826459: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 82645c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82645f: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 826462: mov eax, esp */
  eax = esp;
/* 826464: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 826466: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 826469: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 82646c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 82646f: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 826472: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 826475: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 826478: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82647e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82647f: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x826485u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 826485: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 826487: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82648d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82648f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 826491: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 826493: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 826495: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 826497: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 82649a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82649b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82649e: mov eax, esp */
  eax = esp;
/* 8264a0: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8264a2: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 8264a5: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 8264a8: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 8264ab: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 8264ae: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8264b1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8264b4: mov eax, esp */
  eax = esp;
/* 8264b6: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8264b8: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8264bb: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 8264be: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 8264c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8264c2: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 8264c5: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x8264cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8264cb: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8264ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8264d0: je 0x8264db */
  if (zf) goto L_8264db;
L_8264d2: /* 8264d2: cmp dword ptr [ebp - 0x64], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8264d5: je 0x8263e1 */
  if (zf) goto L_8263e1;
L_8264db: /* 8264db: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8264de: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8264e1: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8264e4: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8264e7: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8264ea: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 8264ed: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8264ef: fsub dword ptr [ebp - 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 8264f2: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8264f5: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 8264f8: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8264fb: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x826501u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 826501: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 826504: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 826507: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 82650a: fcomp dword ptr [ebp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x14u)));
  FPOP();
/* 82650d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82650f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 826512: jne 0x826529 */
  if (!zf) goto L_826529;
L_826514: /* 826514: xor eax, eax */
  eax = 0;
/* 826516: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 826519: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 826520: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 826521: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 826522: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 826523: mov esp, ebp */
  esp = ebp;
/* 826525: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 826526: ret 0x14 */
  esp += 24; SPILL(); return;
L_826529: /* 826529: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82652c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82652d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82652e: mov eax, 1 */
  eax = 0x1u;
/* 826533: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82653a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82653b: mov esp, ebp */
  esp = ebp;
/* 82653d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82653e: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_826541(void) {
  LOAD_REGS();
L_826541: /* 826541: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 826544: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 826549: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 82654c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82654d: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 826550: call 0x99caf8 */
  esp -= 4; W32(esp, 0x826555u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_826555(); return;
}

void f_826555(void) {
  LOAD_REGS();
L_826555: /* 826555: push 0xa15158 */
  { uint32_t v = 0xa15158u; esp -= 4; W32(esp, v); }
/* 82655a: push 0xae3978 */
  { uint32_t v = 0xae3978u; esp -= 4; W32(esp, v); }
/* 82655f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x826565u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 826565: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 826568: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82656a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82656c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x826571u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_826571: guest_badaddr(0x826571); return;
}

void f_826620(void) {
  LOAD_REGS();
L_826620: /* 826620: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 826621: mov ebp, esp */
  ebp = esp;
/* 826623: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 826625: push 0x9d3070 */
  { uint32_t v = 0x9d3070u; esp -= 4; W32(esp, v); }
/* 82662a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 826630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 826631: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 826638: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82663b: xor eax, eax */
  eax = 0;
/* 82663d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82663e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82663f: mov esi, ecx */
  esi = ecx;
/* 826641: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 826642: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 826645: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 826646: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 826647: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 82664d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 826650: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 826652: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 826655: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 826658: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 82665b: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 82665e: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 826661: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 826664: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 826667: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 82666a: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 82666d: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 826670: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 826673: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 826676: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 826679: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 82667c: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 82667f: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 826685: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 826687: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 826689: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 82668c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82668d: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 826690: mov dword ptr [ebp - 0x44], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x3f800000u);
/* 826697: mov dword ptr [ebp - 0x40], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffc0u), 0xffffffffu);
/* 82669e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8266a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8266a3: lea edi, [esi + 0x17c] */
  edi = (uint32_t)(esi + 0x17cu);
/* 8266a9: mov eax, esp */
  eax = esp;
/* 8266ab: mov ecx, edi */
  ecx = edi;
/* 8266ad: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 8266af: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8266b1: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 8266b4: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8266b7: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 8266ba: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8266bd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8266c0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8266c3: mov eax, esp */
  eax = esp;
/* 8266c5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8266c7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8266ca: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8266cd: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8266d0: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8266d3: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8266d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8266da: mov dword ptr [ebp - 0x38], 0x80000000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x80000000u);
/* 8266e1: mov dword ptr [ebp - 0x34], 0x80000000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x80000000u);
/* 8266e8: mov dword ptr [ebp - 0x30], 0x420c0000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x420c0000u);
/* 8266ef: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x8266f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8266f5: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8266f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8266fa: je 0x82671c */
  if (zf) goto L_82671c;
L_8266fc: /* 8266fc: cmp dword ptr [ebp - 0x64], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8266ff: jne 0x82671c */
  if (!zf) goto L_82671c;
L_826701: /* 826701: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 826702: mov ecx, esi */
  ecx = esi;
/* 826704: call 0x6c8639 */
  esp -= 4; W32(esp, 0x826709u); SPILL(); f_6c8639(); if (g_unwind) return; RELOAD();
/* 826709: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82670c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 826713: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 826714: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 826715: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 826716: mov esp, ebp */
  esp = ebp;
/* 826718: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 826719: ret 0x14 */
  esp += 24; SPILL(); return;
L_82671c: /* 82671c: mov edx, dword ptr [esi + 0x16c] */
  edx = R32((uint32_t)(esi + 0x16cu));
/* 826722: test byte ptr [edx + 0x410], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x410u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 826729: jne 0x8267ed */
  if (!zf) goto L_8267ed;
L_82672f: /* 82672f: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 826732: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 826735: mov ecx, esp */
  ecx = esp;
/* 826737: mov eax, ebx */
  eax = ebx;
/* 826739: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82673b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82673d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 826740: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 826743: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 826746: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 826749: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 82674c: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 82674f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 826752: mov ecx, esp */
  ecx = esp;
/* 826754: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 826756: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 826759: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 82675c: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 82675f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 826762: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 826763: mov ecx, esi */
  ecx = esi;
/* 826765: call 0x6c8030 */
  esp -= 4; W32(esp, 0x82676au); SPILL(); f_6c8030(); if (g_unwind) return; RELOAD();
/* 82676a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82676b: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 82676e: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x826774u); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 826774: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 826776: je 0x8267d8 */
  if (zf) goto L_8267d8;
L_826778: /* 826778: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 82677b: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 826781: fsub dword ptr [ebx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x8u)));
/* 826784: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 826786: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 826789: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82678b: fsub dword ptr [ebx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x4u)));
/* 82678e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 826790: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 826793: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 826795: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 826797: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 826799: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82679b: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 82679e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82679f: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8267a2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8267a5: mov eax, esp */
  eax = esp;
/* 8267a7: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 8267aa: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8267ac: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 8267af: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8267b2: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 8267b5: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 8267b8: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 8267bb: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8267be: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8267c1: mov eax, esp */
  eax = esp;
/* 8267c3: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8267c5: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8267c8: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 8267cb: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 8267ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8267cf: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 8267d2: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x8267d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8267d8: /* 8267d8: xor eax, eax */
  eax = 0;
/* 8267da: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8267dd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8267e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8267e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8267e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8267e7: mov esp, ebp */
  esp = ebp;
/* 8267e9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8267ea: ret 0x14 */
  esp += 24; SPILL(); return;
L_8267ed: /* 8267ed: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8267f0: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 8267f6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8267f8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8267fb: jp 0x8268cc */
  if (pf) goto L_8268cc;
L_826801: /* 826801: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 826807: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 82680d: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 826810: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 826812: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 826814: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 826816: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 826818: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82681a: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 82681d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82681e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 826821: mov eax, esp */
  eax = esp;
/* 826823: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 826826: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 826829: mov ecx, edi */
  ecx = edi;
/* 82682b: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 82682d: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 826830: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 826833: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 826835: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 826838: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 82683b: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 82683e: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 826841: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 826844: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 826847: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 82684a: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 82684d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 826850: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 826853: mov eax, esp */
  eax = esp;
/* 826855: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 826857: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 82685a: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 82685d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 826860: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 826863: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 826866: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 826869: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82686f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 826870: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x826876u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 826876: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 826878: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82687e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 826880: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 826882: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 826884: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 826886: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 826888: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 82688b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82688c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82688f: mov eax, esp */
  eax = esp;
/* 826891: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 826893: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 826896: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 826899: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 82689c: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 82689f: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8268a2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8268a5: mov eax, esp */
  eax = esp;
/* 8268a7: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8268a9: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8268ac: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 8268af: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 8268b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8268b3: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 8268b6: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x8268bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8268bc: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8268bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8268c1: je 0x8268cc */
  if (zf) goto L_8268cc;
L_8268c3: /* 8268c3: cmp dword ptr [ebp - 0x64], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8268c6: je 0x826701 */
  if (zf) goto L_826701;
L_8268cc: /* 8268cc: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8268cf: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8268d2: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8268d5: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8268d8: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8268db: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8268de: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8268e0: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8268e3: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8268e6: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 8268e9: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8268ec: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8268f2u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8268f2: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 8268f5: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8268f8: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 8268fb: fcomp dword ptr [ebp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x14u)));
  FPOP();
/* 8268fe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 826900: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 826903: je 0x8267d8 */
  if (zf) goto L_8267d8;
L_826909: /* 826909: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82690c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82690d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82690e: mov eax, 1 */
  eax = 0x1u;
/* 826913: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82691a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82691b: mov esp, ebp */
  esp = ebp;
/* 82691d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82691e: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_826921(void) {
  LOAD_REGS();
L_826921: /* 826921: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 826924: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 826929: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 82692c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82692d: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 826930: call 0x99caf8 */
  esp -= 4; W32(esp, 0x826935u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_826935(); return;
}

void f_826935(void) {
  LOAD_REGS();
L_826935: /* 826935: push 0xa1517c */
  { uint32_t v = 0xa1517cu; esp -= 4; W32(esp, v); }
/* 82693a: push 0xae3980 */
  { uint32_t v = 0xae3980u; esp -= 4; W32(esp, v); }
/* 82693f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x826945u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 826945: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 826948: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82694a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82694c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x826951u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_826951: guest_badaddr(0x826951); return;
}

void f_826a30(void) {
  LOAD_REGS();
L_826a30: /* 826a30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 826a31: mov ebp, esp */
  ebp = esp;
/* 826a33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 826a35: push 0x9d3080 */
  { uint32_t v = 0x9d3080u; esp -= 4; W32(esp, v); }
/* 826a3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 826a40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 826a41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 826a48: sub esp, 0xb8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xb8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 826a4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 826a4f: xor ebx, ebx */
  ebx = 0;
/* 826a51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 826a52: mov esi, ecx */
  esi = ecx;
/* 826a54: fld dword ptr [esi + 0x444] */
  { double v = F32((uint32_t)(esi + 0x444u)); FPUSH(v); }
/* 826a5a: mov eax, dword ptr [esi + 0x170] */
  eax = R32((uint32_t)(esi + 0x170u));
/* 826a60: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 826a66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 826a67: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 826a6d: lea edi, [esi + 0x170] */
  edi = (uint32_t)(esi + 0x170u);
/* 826a73: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 826a79: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* 826a7f: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 826a85: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 826a8b: mov dword ptr [ebp - 0xbc], ebx */
  W32((uint32_t)(ebp + 0xffffff44u), ebx);
/* 826a91: mov dword ptr [ebp - 0xb8], ebx */
  W32((uint32_t)(ebp + 0xffffff48u), ebx);
/* 826a97: mov dword ptr [ebp - 0xb4], ebx */
  W32((uint32_t)(ebp + 0xffffff4cu), ebx);
/* 826a9d: mov dword ptr [ebp - 0xb0], ebx */
  W32((uint32_t)(ebp + 0xffffff50u), ebx);
/* 826aa3: mov dword ptr [ebp - 0xac], ebx */
  W32((uint32_t)(ebp + 0xffffff54u), ebx);
/* 826aa9: mov dword ptr [ebp - 0xa8], ebx */
  W32((uint32_t)(ebp + 0xffffff58u), ebx);
/* 826aaf: mov dword ptr [ebp - 0xa4], ebx */
  W32((uint32_t)(ebp + 0xffffff5cu), ebx);
/* 826ab5: mov dword ptr [ebp - 0xa0], ebx */
  W32((uint32_t)(ebp + 0xffffff60u), ebx);
/* 826abb: mov dword ptr [ebp - 0x9c], ebx */
  W32((uint32_t)(ebp + 0xffffff64u), ebx);
/* 826ac1: mov dword ptr [ebp - 0x98], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x3f800000u);
/* 826acb: mov dword ptr [ebp - 0x94], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff6cu), 0xffffffffu);
/* 826ad5: mov dword ptr [ebp - 0x90], ebx */
  W32((uint32_t)(ebp + 0xffffff70u), ebx);
/* 826adb: fld dword ptr [eax + 0x37c] */
  { double v = F32((uint32_t)(eax + 0x37cu)); FPUSH(v); }
/* 826ae1: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 826ae4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 826ae7: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 826aea: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 826aed: fld dword ptr [eax + 0x378] */
  { double v = F32((uint32_t)(eax + 0x378u)); FPUSH(v); }
/* 826af3: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 826af6: fld dword ptr [eax + 0x374] */
  { double v = F32((uint32_t)(eax + 0x374u)); FPUSH(v); }
/* 826afc: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 826aff: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 826b01: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 826b04: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 826b07: mov eax, dword ptr [eax + 0x370] */
  eax = R32((uint32_t)(eax + 0x370u));
/* 826b0d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 826b0f: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 826b15: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 826b1b: fadd dword ptr [0xa14ac4] */
  ST0 = ST0 + (F32((uint32_t)(0xa14ac4u)));
/* 826b21: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 826b24: je 0x826b35 */
  if (zf) goto L_826b35;
L_826b26: /* 826b26: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 826b28: mov ecx, eax */
  ecx = eax;
/* 826b2a: call dword ptr [edx + 0x158] */
  { uint32_t t = R32((uint32_t)(edx + 0x158u)); esp -= 4; W32(esp, 0x826b30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 826b30: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 826b33: jmp 0x826b38 */
  goto L_826b38;
L_826b35: /* 826b35: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
L_826b38: /* 826b38: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 826b3b: mov dword ptr [ebp - 0x74], ebx */
  W32((uint32_t)(ebp + 0xffffff8cu), ebx);
/* 826b3e: fcomp dword ptr [esi + 0x2d8] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x2d8u)));
  FPOP();
/* 826b44: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 826b46: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 826b49: jp 0x826d9d */
  if (pf) goto L_826d9d;
L_826b4f: /* 826b4f: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 826b55: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 826b58: fmul dword ptr [ebp - 0x68] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff98u)));
/* 826b5b: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 826b5e: fmul dword ptr [ebp - 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff94u)));
/* 826b61: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 826b63: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 826b66: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 826b69: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 826b6b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 826b6d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 826b6f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 826b71: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 826b77: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 826b79: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 826b7b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 826b7e: jp 0x826b95 */
  if (pf) goto L_826b95;
L_826b80: /* 826b80: xor eax, eax */
  eax = 0;
/* 826b82: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 826b85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 826b8c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 826b8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 826b8e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 826b8f: mov esp, ebp */
  esp = ebp;
/* 826b91: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 826b92: ret 0xc */
  esp += 16; SPILL(); return;
L_826b95: /* 826b95: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 826b98: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x826b9eu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 826b9e: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 826ba1: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 826ba7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 826ba9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 826bab: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 826bb1: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 826bb4: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 826bb6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 826bb8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 826bba: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 826bbd: jp 0x826d9d */
  if (pf) goto L_826d9d;
L_826bc3: /* 826bc3: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 826bc9: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 826bcf: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 826bd2: mov dword ptr [ebp - 0x74], 1 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x1u);
/* 826bd9: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 826bdf: fcomp dword ptr [eax + 0x37c] */
  fpu_com(ST0, F32((uint32_t)(eax + 0x37cu)));
  FPOP();
/* 826be5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 826be7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 826bea: jp 0x826bfe */
  if (pf) goto L_826bfe;
L_826bec: /* 826bec: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 826bf2: mov dword ptr [ebp - 0x74], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff8cu), 0xffffffffu);
/* 826bf9: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 826bfc: jmp 0x826c00 */
  goto L_826c00;
L_826bfe: /* 826bfe: fstp st(0) */
  STI(0) = ST0; FPOP();
L_826c00: /* 826c00: mov edx, dword ptr [esi + 0x2d4] */
  edx = R32((uint32_t)(esi + 0x2d4u));
/* 826c06: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 826c0c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 826c0e: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 826c14: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 826c1a: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 826c1d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 826c20: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 826c23: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 826c26: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 826c29: mov eax, esp */
  eax = esp;
/* 826c2b: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 826c2e: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 826c31: mov ebx, dword ptr [ebp - 0x44] */
  ebx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 826c34: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 826c37: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 826c39: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 826c3c: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 826c3f: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 826c42: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 826c45: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 826c48: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 826c4a: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 826c4f: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 826c52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 826c53: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 826c56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 826c57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 826c58: lea eax, [ebp - 0xbc] */
  eax = (uint32_t)(ebp + 0xffffff44u);
/* 826c5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 826c5f: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x826c65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 826c65: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 826c6b: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 826c71: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 826c73: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 826c76: jp 0x826d9d */
  if (pf) goto L_826d9d;
L_826c7c: /* 826c7c: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 826c7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 826c80: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 826c83: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x826c89u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 826c89: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 826c8f: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 826c92: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 826c94: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 826c96: mov edx, dword ptr [esi + 0x2d4] */
  edx = R32((uint32_t)(esi + 0x2d4u));
/* 826c9c: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 826ca2: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 826ca5: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 826ca8: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 826cab: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 826cae: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 826cb1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 826cb3: mov eax, esp */
  eax = esp;
/* 826cb5: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 826cb8: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 826cbb: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 826cbe: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 826cc1: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 826cc4: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 826cc6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 826cc8: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 826ccb: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 826cd0: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 826cd3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 826cd5: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 826cdb: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 826ce1: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 826ce4: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 826ce7: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 826cea: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 826ced: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 826cf0: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 826cf3: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 826cf6: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 826cf9: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 826cfc: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 826cff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 826d00: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 826d03: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 826d06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 826d07: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 826d0a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 826d0b: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 826d0e: lea eax, [ebp - 0xbc] */
  eax = (uint32_t)(ebp + 0xffffff44u);
/* 826d14: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 826d17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 826d18: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 826d1b: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 826d1e: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 826d21: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 826d24: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 826d27: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 826d2a: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 826d2d: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 826d30: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 826d32: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x826d38u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 826d38: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 826d3e: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 826d44: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 826d46: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 826d49: jp 0x826d9d */
  if (pf) goto L_826d9d;
L_826d4b: /* 826d4b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 826d4d: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 826d50: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
L_826d53: /* 826d53: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 826d56: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
L_826d59: /* 826d59: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 826d5c: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 826d5f: mov esi, dword ptr [esi + 0x33c] */
  esi = R32((uint32_t)(esi + 0x33cu));
/* 826d65: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 826d67: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 826d6a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 826d6d: mov eax, esp */
  eax = esp;
/* 826d6f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 826d71: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 826d74: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 826d77: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 826d7a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 826d7d: mov ecx, esi */
  ecx = esi;
/* 826d7f: call dword ptr [edx + 0x1a0] */
  { uint32_t t = R32((uint32_t)(edx + 0x1a0u)); esp -= 4; W32(esp, 0x826d85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_826d85: /* 826d85: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 826d88: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 826d89: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 826d8a: mov eax, 1 */
  eax = 0x1u;
/* 826d8f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 826d96: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 826d97: mov esp, ebp */
  esp = ebp;
/* 826d99: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 826d9a: ret 0xc */
  esp += 16; SPILL(); return;
L_826d9d: /* 826d9d: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 826da0: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x826da6u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 826da6: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 826da9: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 826dac: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 826db2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 826db4: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 826db7: jnp 0x826b80 */
  if (!pf) goto L_826b80;
L_826dbd: /* 826dbd: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 826dc0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 826dc1: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 826dc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 826dc5: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 826dc8: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x826dceu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 826dce: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 826dd0: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 826dd3: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 826dd6: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 826ddc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 826ddf: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 826de2: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 826de5: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 826de8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 826dea: mov eax, esp */
  eax = esp;
/* 826dec: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 826df3: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 826df6: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 826df8: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 826dff: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 826e02: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 826e05: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 826e0c: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 826e0f: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 826e12: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 826e17: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 826e1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 826e1e: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 826e24: add eax, 0x374 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x374u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 826e29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 826e2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 826e2b: lea eax, [ebp - 0xbc] */
  eax = (uint32_t)(ebp + 0xffffff44u);
/* 826e31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 826e32: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x826e38u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 826e38: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 826e3b: cmp dword ptr [ebp - 0xb8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff48u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 826e41: je 0x826eeb */
  if (zf) goto L_826eeb;
L_826e47: /* 826e47: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 826e4a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 826e50: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 826e52: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 826e55: jne 0x826eeb */
  if (!zf) goto L_826eeb;
L_826e5b: /* 826e5b: mov edx, dword ptr [esi + 0x2d8] */
  edx = R32((uint32_t)(esi + 0x2d8u));
/* 826e61: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 826e67: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 826e6d: mov eax, dword ptr [esi + 0x2d4] */
  eax = R32((uint32_t)(esi + 0x2d4u));
/* 826e73: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 826e79: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 826e7c: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 826e7f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 826e81: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 826e84: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 826e87: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 826e8a: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 826e8d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 826e8f: mov edx, esp */
  edx = esp;
/* 826e91: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 826e94: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 826e97: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 826e9a: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 826e9d: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 826e9f: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 826ea2: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 826ea5: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 826ea8: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 826eab: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 826eae: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 826eb0: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 826eb5: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 826eb8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 826eb9: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 826ebc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 826ebd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 826ebe: lea edx, [ebp - 0xbc] */
  edx = (uint32_t)(ebp + 0xffffff44u);
/* 826ec4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 826ec5: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x826ecbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 826ecb: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 826ed1: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 826ed7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 826ed9: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 826edc: jp 0x826eeb */
  if (pf) goto L_826eeb;
L_826ede: /* 826ede: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 826ee0: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 826ee3: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 826ee6: jmp 0x826d53 */
  goto L_826d53;
L_826eeb: /* 826eeb: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 826eee: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 826ef1: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 826ef7: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 826efa: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 826efd: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 826f04: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 826f07: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 826f0a: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 826f0d: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 826f10: fmul dword ptr [0xa151e4] */
  ST0 = ST0 * (F32((uint32_t)(0xa151e4u)));
/* 826f16: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 826f1d: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 826f20: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 826f27: fmul dword ptr [0xa151e4] */
  ST0 = ST0 * (F32((uint32_t)(0xa151e4u)));
/* 826f2d: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 826f30: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 826f36: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 826f3d: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 826f43: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 826f45: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 826f48: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 826f4b: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 826f4d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 826f4f: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 826f52: mov edx, esp */
  edx = esp;
/* 826f54: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 826f56: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 826f59: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 826f5c: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 826f5f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 826f61: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 826f64: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 826f67: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 826f6a: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 826f6d: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 826f72: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 826f75: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 826f77: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 826f78: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 826f7e: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 826f84: fadd dword ptr [ebp - 0x58] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 826f87: add edx, 0x374 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x374u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 826f8d: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 826f93: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 826f94: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 826f97: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 826f9a: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 826f9d: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 826fa3: fadd dword ptr [ebp - 0x8c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff74u)));
/* 826fa9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 826faa: lea edx, [ebp - 0xbc] */
  edx = (uint32_t)(ebp + 0xffffff44u);
/* 826fb0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 826fb1: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 826fb4: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 826fb7: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 826fba: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 826fbc: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x826fc2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 826fc2: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 826fc5: cmp dword ptr [ebp - 0xb8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff48u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 826fcb: je 0x82709d */
  if (zf) goto L_82709d;
L_826fd1: /* 826fd1: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 826fd4: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 826fda: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 826fe0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 826fe3: mov eax, esp */
  eax = esp;
/* 826fe5: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 826fec: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 826fef: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 826ff2: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 826ff5: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 826ff7: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 826ffd: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 827004: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 827007: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 82700a: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 82700d: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 827014: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 827017: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 82701a: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 827020: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 827023: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 827028: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 82702b: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 82702e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82702f: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 827032: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 827038: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 82703e: add eax, 0x374 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x374u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 827043: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 827044: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 827045: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 827048: lea eax, [ebp - 0xbc] */
  eax = (uint32_t)(ebp + 0xffffff44u);
/* 82704e: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 827051: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 827052: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 827058: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* 82705f: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 827062: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 827065: fadd dword ptr [ebp - 0x84] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 82706b: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 82706e: fadd dword ptr [ebp - 0x88] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff78u)));
/* 827074: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 827077: fadd dword ptr [ebp - 0x8c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff74u)));
/* 82707d: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 827080: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 827083: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 827086: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 827088: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82708eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82708e: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 827091: cmp dword ptr [ebp - 0xb8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff48u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 827097: jne 0x826b80 */
  if (!zf) goto L_826b80;
L_82709d: /* 82709d: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 8270a0: mov edx, dword ptr [esi + 0x2d4] */
  edx = R32((uint32_t)(esi + 0x2d4u));
/* 8270a6: fmul dword ptr [0xa151e0] */
  ST0 = ST0 * (F32((uint32_t)(0xa151e0u)));
/* 8270ac: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8270b2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8270b5: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8270b8: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 8270bb: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8270be: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 8270c1: mov edx, esp */
  edx = esp;
/* 8270c3: fmul dword ptr [0xa151e0] */
  ST0 = ST0 * (F32((uint32_t)(0xa151e0u)));
/* 8270c9: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8270cb: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 8270d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8270d1: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 8270d4: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 8270d7: fmul dword ptr [0xa151e0] */
  ST0 = ST0 * (F32((uint32_t)(0xa151e0u)));
/* 8270dd: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 8270e0: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8270e3: fmul dword ptr [ebp - 0x70] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff90u)));
/* 8270e6: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8270e9: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8270ec: fmul dword ptr [ebp - 0x70] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff90u)));
/* 8270ef: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8270f2: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 8270f5: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8270fb: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8270fe: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 827104: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 82710a: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 82710d: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 827110: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 827113: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 827116: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 827119: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 82711c: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 82711f: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 827122: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 827125: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 827128: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 827129: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 82712c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82712d: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 827130: lea edx, [ebp - 0xbc] */
  edx = (uint32_t)(ebp + 0xffffff44u);
/* 827136: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 827138: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 827139: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 82713c: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 82713f: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 827142: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 827144: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x82714au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82714a: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 827150: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 827156: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 827158: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82715b: jp 0x827215 */
  if (pf) goto L_827215;
L_827161: /* 827161: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 827167: mov eax, dword ptr [esi + 0x2d4] */
  eax = R32((uint32_t)(esi + 0x2d4u));
/* 82716d: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 827173: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 827179: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 82717c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 82717f: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 827182: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 827185: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 827188: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 82718b: mov eax, esp */
  eax = esp;
/* 82718d: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 827190: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 827192: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 827195: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 827198: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 82719b: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 82719e: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8271a1: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8271a4: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 8271a6: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 8271a9: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 8271ae: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 8271b1: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8271b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8271b5: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 8271b8: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8271bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8271bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8271bd: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8271c0: lea eax, [ebp - 0xbc] */
  eax = (uint32_t)(ebp + 0xffffff44u);
/* 8271c6: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8271c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8271ca: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 8271cd: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8271d0: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 8271d3: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 8271d6: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8271d9: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 8271db: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8271de: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 8271e1: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 8271e4: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 8271e7: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 8271ea: fadd dword ptr [ebp - 0x80] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff80u)));
/* 8271ed: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8271f0: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8271f3: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8271f6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8271f8: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x8271feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8271fe: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 827204: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82720a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82720c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82720f: jnp 0x82740f */
  if (!pf) goto L_82740f;
L_827215: /* 827215: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 827218: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82721a: jne 0x827428 */
  if (!zf) goto L_827428;
L_827220: /* 827220: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 827223: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 827229: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 82722f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 827232: mov eax, esp */
  eax = esp;
/* 827234: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 82723b: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82723e: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 827241: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 827244: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 827246: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 82724c: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 827253: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 827256: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 827259: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 82725c: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 827263: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 827266: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 827269: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 82726f: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 827272: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 827277: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 82727a: fadd dword ptr [ebp - 0x84] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 827280: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 827281: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 827284: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 82728a: fadd dword ptr [ebp - 0x88] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff78u)));
/* 827290: add eax, 0x374 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x374u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 827295: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 827298: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 827299: fadd dword ptr [ebp - 0x8c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff74u)));
/* 82729f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8272a0: lea eax, [ebp - 0xbc] */
  eax = (uint32_t)(ebp + 0xffffff44u);
/* 8272a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8272a7: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8272aa: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8272ad: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8272b0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8272b2: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x8272b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8272b8: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 8272be: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 8272c4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8272c6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8272c9: jnp 0x826b80 */
  if (!pf) goto L_826b80;
L_8272cf: /* 8272cf: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8272d2: mov ebx, dword ptr [esi + 0xb4] */
  ebx = R32((uint32_t)(esi + 0xb4u));
/* 8272d8: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8272de: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8272e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8272e2: mov ecx, esi */
  ecx = esi;
/* 8272e4: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8272e7: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8272ea: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8272f0: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8272f3: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8272f6: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8272fc: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8272ff: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 827302: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 827305: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 827308: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 82730b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 82730e: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 827310: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 827313: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 827316: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 827319: call 0x6cbe92 */
  esp -= 4; W32(esp, 0x82731eu); SPILL(); f_6cbe92(); if (g_unwind) return; RELOAD();
/* 82731e: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 827320: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 827322: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 827325: mov ecx, esp */
  ecx = esp;
/* 827327: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 827329: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 82732c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82732f: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 827332: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 827337: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 82733a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82733b: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 82733e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82733f: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 827345: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 827346: lea eax, [ebp - 0xbc] */
  eax = (uint32_t)(ebp + 0xffffff44u);
/* 82734c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82734d: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x827353u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 827353: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 827359: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82735f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 827361: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 827364: jp 0x827428 */
  if (pf) goto L_827428;
L_82736a: /* 82736a: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 82736d: mov ebx, dword ptr [esi + 0xb4] */
  ebx = R32((uint32_t)(esi + 0xb4u));
/* 827373: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 827376: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 827379: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 82737c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82737d: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 827380: mov ecx, esi */
  ecx = esi;
/* 827382: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 827385: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 827387: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 82738a: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 82738d: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 827390: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 827393: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 827396: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 827399: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 82739c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 82739f: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8273a2: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 8273a4: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8273a7: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 8273aa: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8273ad: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 8273b0: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8273b3: fadd dword ptr [ebp - 0x80] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff80u)));
/* 8273b6: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8273b9: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8273bc: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8273bf: call 0x6cbe92 */
  esp -= 4; W32(esp, 0x8273c4u); SPILL(); f_6cbe92(); if (g_unwind) return; RELOAD();
/* 8273c4: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8273c6: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8273c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8273cb: mov ecx, esp */
  ecx = esp;
/* 8273cd: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8273cf: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8273d2: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8273d5: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8273d8: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8273db: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 8273e0: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8273e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8273e4: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 8273e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8273e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8273e9: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 8273ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8273f0: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8273f6: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x8273fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8273fc: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 827402: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 827408: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82740a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82740d: jp 0x827428 */
  if (pf) goto L_827428;
L_82740f: /* 82740f: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 827412: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 827415: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 827418: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 82741b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 82741e: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 827420: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 827423: jmp 0x826d59 */
  goto L_826d59;
L_827428: /* 827428: cmp dword ptr [ebp - 0x74], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff8cu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82742c: mov edx, dword ptr [esi + 0x2d8] */
  edx = R32((uint32_t)(esi + 0x2d8u));
/* 827432: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 827435: je 0x82758c */
  if (zf) goto L_82758c;
L_82743b: /* 82743b: mov eax, dword ptr [esi + 0x2d4] */
  eax = R32((uint32_t)(esi + 0x2d4u));
/* 827441: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 827447: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 827449: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 82744f: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 827455: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 827458: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82745b: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 82745e: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 827461: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 827464: mov edx, esp */
  edx = esp;
/* 827466: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 827469: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 82746c: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82746f: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 827472: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 827474: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 827477: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 82747a: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 82747d: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 827480: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 827483: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 827485: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 82748a: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 82748d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82748e: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 827491: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 827492: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 827493: lea edx, [ebp - 0xbc] */
  edx = (uint32_t)(ebp + 0xffffff44u);
/* 827499: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82749a: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x8274a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8274a0: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 8274a6: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 8274ac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8274ae: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8274b1: jp 0x82758c */
  if (pf) goto L_82758c;
L_8274b7: /* 8274b7: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8274ba: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8274bd: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 8274c0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8274c2: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8274c5: mov ebx, dword ptr [esi + 0xb4] */
  ebx = R32((uint32_t)(esi + 0xb4u));
/* 8274cb: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8274ce: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8274d1: mov edx, eax */
  edx = eax;
/* 8274d3: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8274d6: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8274d9: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8274dc: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 8274df: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 8274e2: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8274e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8274e6: mov ecx, esi */
  ecx = esi;
/* 8274e8: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 8274eb: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8274ee: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 8274f1: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8274f4: fadd dword ptr [ebp - 0x80] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff80u)));
/* 8274f7: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8274fa: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8274fd: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 827500: call 0x6cbe92 */
  esp -= 4; W32(esp, 0x827505u); SPILL(); f_6cbe92(); if (g_unwind) return; RELOAD();
/* 827505: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 827507: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 827509: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82750c: mov ecx, esp */
  ecx = esp;
/* 82750e: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 827510: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 827513: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 827516: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 827519: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 82751c: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 827521: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 827524: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 827525: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 827528: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 827529: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82752a: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 827530: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 827531: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 827537: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82753du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82753d: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 827543: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 827549: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82754b: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82754e: jp 0x82758c */
  if (pf) goto L_82758c;
L_827550: /* 827550: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 827553: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 827555: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 827558: mov esi, dword ptr [esi + 0x33c] */
  esi = R32((uint32_t)(esi + 0x33cu));
/* 82755e: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 827561: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 827563: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 827566: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 827569: mov ecx, esp */
  ecx = esp;
/* 82756b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82756d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 827570: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 827573: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 827576: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 827579: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 82757c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 82757f: mov ecx, esi */
  ecx = esi;
/* 827581: call dword ptr [eax + 0x1a0] */
  { uint32_t t = R32((uint32_t)(eax + 0x1a0u)); esp -= 4; W32(esp, 0x827587u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 827587: jmp 0x826d85 */
  goto L_826d85;
L_82758c: /* 82758c: cmp dword ptr [ebp - 0x74], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff8cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 827590: je 0x826b80 */
  if (zf) goto L_826b80;
L_827596: /* 827596: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 827599: mov eax, dword ptr [esi + 0x2d4] */
  eax = R32((uint32_t)(esi + 0x2d4u));
/* 82759f: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8275a5: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8275a7: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8275ad: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8275b0: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8275b3: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 8275b6: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 8275bc: mov edx, esp */
  edx = esp;
/* 8275be: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 8275c4: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8275c7: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8275ca: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8275cd: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8275cf: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8275d2: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8275d5: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8275d8: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8275db: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 8275de: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8275e1: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8275e4: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 8275e9: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 8275ec: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8275ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8275f0: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 8275f3: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8275f6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8275f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8275f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8275fa: lea edx, [ebp - 0xbc] */
  edx = (uint32_t)(ebp + 0xffffff44u);
/* 827600: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 827601: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x827607u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 827607: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 82760d: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 827613: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 827615: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 827618: jp 0x826b80 */
  if (pf) goto L_826b80;
L_82761e: /* 82761e: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 827621: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 827624: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 827627: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 827629: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 82762c: mov ebx, dword ptr [esi + 0xb4] */
  ebx = R32((uint32_t)(esi + 0xb4u));
/* 827632: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 827635: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 827638: mov edx, eax */
  edx = eax;
/* 82763a: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 82763d: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 827640: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 827643: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 827646: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 827649: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 82764c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82764d: mov ecx, esi */
  ecx = esi;
/* 82764f: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 827652: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 827655: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 827658: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 82765b: fadd dword ptr [ebp - 0x80] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff80u)));
/* 82765e: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 827661: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 827664: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 827667: call 0x6cbe92 */
  esp -= 4; W32(esp, 0x82766cu); SPILL(); f_6cbe92(); if (g_unwind) return; RELOAD();
/* 82766c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 82766e: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 827670: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 827673: mov ecx, esp */
  ecx = esp;
/* 827675: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 827677: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 82767a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82767d: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 827680: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 827683: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 827688: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 82768b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82768c: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 82768f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 827690: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 827691: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 827697: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 827698: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82769e: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x8276a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8276a4: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 8276aa: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 8276b0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8276b2: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8276b5: jp 0x826b80 */
  if (pf) goto L_826b80;
L_8276bb: /* 8276bb: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8276bd: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8276c0: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 8276c6: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 8276c9: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8276cc: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8276ce: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8276d1: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8276d4: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8276d7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8276da: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8276dd: mov edx, esp */
  edx = esp;
/* 8276df: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 8276e1: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8276e4: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 8276e7: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8276ea: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 8276ed: call dword ptr [eax + 0x1a0] */
  { uint32_t t = R32((uint32_t)(eax + 0x1a0u)); esp -= 4; W32(esp, 0x8276f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8276f3: jmp 0x826d85 */
  goto L_826d85;
}

void f_8276f8(void) {
  LOAD_REGS();
L_8276f8: /* 8276f8: mov eax, dword ptr [ebp - 0xc4] */
  eax = R32((uint32_t)(ebp + 0xffffff3cu));
/* 8276fe: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 827703: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 827709: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82770a: mov dword ptr [ebp - 0xc0], eax */
  W32((uint32_t)(ebp + 0xffffff40u), eax);
/* 827710: call 0x99caf8 */
  esp -= 4; W32(esp, 0x827715u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_827715(); return;
}

void f_827715(void) {
  LOAD_REGS();
L_827715: /* 827715: push 0xa151a4 */
  { uint32_t v = 0xa151a4u; esp -= 4; W32(esp, v); }
/* 82771a: push 0xae3990 */
  { uint32_t v = 0xae3990u; esp -= 4; W32(esp, v); }
/* 82771f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x827725u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 827725: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 827728: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82772a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82772c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x827731u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_827731: guest_badaddr(0x827731); return;
}

void f_827a90(void) {
  LOAD_REGS();
L_827a90: /* 827a90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 827a91: mov ebp, esp */
  ebp = esp;
/* 827a93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 827a95: push 0x9d3090 */
  { uint32_t v = 0x9d3090u; esp -= 4; W32(esp, v); }
/* 827a9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 827aa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 827aa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 827aa8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 827aab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 827aae: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 827ab1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 827ab2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 827ab3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 827ab4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 827ab5: mov edi, ecx */
  edi = ecx;
/* 827ab7: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 827aba: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 827abd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 827ac0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 827ac7: jne 0x827ade */
  if (!zf) goto L_827ade;
L_827ac9: /* 827ac9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 827acc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 827acd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 827acf: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 827ad2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 827ad3: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 827ad8: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x827adeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_827ade: /* 827ade: mov eax, dword ptr [edi + 0xb0] */
  eax = R32((uint32_t)(edi + 0xb0u));
/* 827ae4: mov cl, byte ptr [eax + 0x4c8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4c8u))) & 0xffu);
/* 827aea: xor ebx, ebx */
  ebx = 0;
/* 827aec: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 827aee: je 0x827b74 */
  if (zf) goto L_827b74;
L_827af4: /* 827af4: cmp cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 827af7: je 0x827b74 */
  if (zf) goto L_827b74;
L_827af9: /* 827af9: mov esi, dword ptr [eax + 0x514] */
  esi = R32((uint32_t)(eax + 0x514u));
/* 827aff: nop  */
L_827b00: /* 827b00: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 827b02: je 0x827b95 */
  if (zf) goto L_827b95;
L_827b08: /* 827b08: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 827b0a: mov ecx, esi */
  ecx = esi;
/* 827b0c: call dword ptr [edx + 0x180] */
  { uint32_t t = R32((uint32_t)(edx + 0x180u)); esp -= 4; W32(esp, 0x827b12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 827b12: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 827b14: je 0x827b3c */
  if (zf) goto L_827b3c;
L_827b16: /* 827b16: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 827b1b: mov ecx, esi */
  ecx = esi;
/* 827b1d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x827b23u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 827b23: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 827b25: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 827b27: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 827b29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 827b2a: mov ecx, edi */
  ecx = edi;
/* 827b2c: call 0x6c9ae3 */
  esp -= 4; W32(esp, 0x827b31u); SPILL(); f_6c9ae3(); if (g_unwind) return; RELOAD();
/* 827b31: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 827b33: je 0x827b3c */
  if (zf) goto L_827b3c;
L_827b35: /* 827b35: mov ebx, 1 */
  ebx = 0x1u;
/* 827b3a: jmp 0x827b95 */
  goto L_827b95;
L_827b3c: /* 827b3c: mov esi, dword ptr [esi + 0x364] */
  esi = R32((uint32_t)(esi + 0x364u));
/* 827b42: jmp 0x827b00 */
  goto L_827b00;
L_827b74: /* 827b74: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 827b7a: fld dword ptr [edi + 0xd4] */
  { double v = F32((uint32_t)(edi + 0xd4u)); FPUSH(v); }
/* 827b80: fsubr qword ptr [edx + 0xd0] */
  ST0 = (F64((uint32_t)(edx + 0xd0u))) - ST0;
/* 827b86: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 827b8c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 827b8e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 827b91: jnp 0x827b35 */
  if (!pf) goto L_827b35;
L_827b93: /* 827b93: xor ebx, ebx */
  ebx = 0;
L_827b95: /* 827b95: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 827b98: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 827b9b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 827b9c: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 827b9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 827b9f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 827ba6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 827ba7: mov esp, ebp */
  esp = ebp;
/* 827ba9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 827baa: ret 8 */
  esp += 12; SPILL(); return;
}

void f_827b3c(void) {
  LOAD_REGS();
  goto L_827b3c;
L_827b00: /* 827b00: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 827b02: je 0x827b95 */
  if (zf) goto L_827b95;
L_827b08: /* 827b08: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 827b0a: mov ecx, esi */
  ecx = esi;
/* 827b0c: call dword ptr [edx + 0x180] */
  { uint32_t t = R32((uint32_t)(edx + 0x180u)); esp -= 4; W32(esp, 0x827b12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 827b12: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 827b14: je 0x827b3c */
  if (zf) goto L_827b3c;
L_827b16: /* 827b16: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 827b1b: mov ecx, esi */
  ecx = esi;
/* 827b1d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x827b23u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 827b23: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 827b25: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 827b27: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 827b29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 827b2a: mov ecx, edi */
  ecx = edi;
/* 827b2c: call 0x6c9ae3 */
  esp -= 4; W32(esp, 0x827b31u); SPILL(); f_6c9ae3(); if (g_unwind) return; RELOAD();
/* 827b31: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 827b33: je 0x827b3c */
  if (zf) goto L_827b3c;
L_827b35: /* 827b35: mov ebx, 1 */
  ebx = 0x1u;
/* 827b3a: jmp 0x827b95 */
  goto L_827b95;
L_827b3c: /* 827b3c: mov esi, dword ptr [esi + 0x364] */
  esi = R32((uint32_t)(esi + 0x364u));
/* 827b42: jmp 0x827b00 */
  goto L_827b00;
L_827b95: /* 827b95: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 827b98: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 827b9b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 827b9c: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 827b9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 827b9f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 827ba6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 827ba7: mov esp, ebp */
  esp = ebp;
/* 827ba9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 827baa: ret 8 */
  esp += 12; SPILL(); return;
}

void f_827b44(void) {
  LOAD_REGS();
L_827b44: /* 827b44: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 827b47: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 827b4c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 827b4f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 827b50: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 827b53: call 0x99caf8 */
  esp -= 4; W32(esp, 0x827b58u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_827b58(); return;
}

void f_827b58(void) {
  LOAD_REGS();
  goto L_827b58;
L_827b35: /* 827b35: mov ebx, 1 */
  ebx = 0x1u;
/* 827b3a: jmp 0x827b95 */
  goto L_827b95;
L_827b58: /* 827b58: push 0xa151e8 */
  { uint32_t v = 0xa151e8u; esp -= 4; W32(esp, v); }
/* 827b5d: push 0xae3868 */
  { uint32_t v = 0xae3868u; esp -= 4; W32(esp, v); }
/* 827b62: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x827b68u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 827b68: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 827b6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 827b6d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 827b6f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x827b74u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 827b74: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 827b7a: fld dword ptr [edi + 0xd4] */
  { double v = F32((uint32_t)(edi + 0xd4u)); FPUSH(v); }
/* 827b80: fsubr qword ptr [edx + 0xd0] */
  ST0 = (F64((uint32_t)(edx + 0xd0u))) - ST0;
/* 827b86: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 827b8c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 827b8e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 827b91: jnp 0x827b35 */
  if (!pf) goto L_827b35;
L_827b93: /* 827b93: xor ebx, ebx */
  ebx = 0;
L_827b95: /* 827b95: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 827b98: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 827b9b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 827b9c: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 827b9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 827b9f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 827ba6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 827ba7: mov esp, ebp */
  esp = ebp;
/* 827ba9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 827baa: ret 8 */
  esp += 12; SPILL(); return;
}

void f_827c00(void) {
  LOAD_REGS();
L_827c00: /* 827c00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 827c04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 827c05: mov esi, ecx */
  esi = ecx;
/* 827c07: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 827c0a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 827c0b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 827c0e: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 827c11: jne 0x827c28 */
  if (!zf) goto L_827c28;
L_827c13: /* 827c13: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 827c14: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 827c17: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 827c1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 827c1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 827c1d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 827c22: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x827c28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_827c28: /* 827c28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 827c2a: mov ecx, esi */
  ecx = esi;
/* 827c2c: call 0x6c77f7 */
  esp -= 4; W32(esp, 0x827c31u); SPILL(); f_6c77f7(); if (g_unwind) return; RELOAD();
/* 827c31: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 827c32: ret 8 */
  esp += 12; SPILL(); return;
}

void f_827c50(void) {
  LOAD_REGS();
L_827c50: /* 827c50: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 827c53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 827c54: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 827c58: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 827c5b: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 827c63: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 827c66: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 827c67: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 827c68: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 827c6b: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 827c6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 827c70: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 827c75: mov edi, ecx */
  edi = ecx;
/* 827c77: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 827c7a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 827c7b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x827c7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 827c7e: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 827c81: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 827c82: mov eax, edx */
  eax = edx;
/* 827c84: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 827c87: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 827c8a: jne 0x827ca2 */
  if (!zf) goto L_827ca2;
L_827c8c: /* 827c8c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 827c8f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 827c90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 827c92: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 827c95: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 827c9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 827c9c: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x827ca2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_827ca2: /* 827ca2: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 827ca6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 827ca8: je 0x827d09 */
  if (zf) goto L_827d09;
L_827caa: /* 827caa: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 827cb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 827cb1: fsub dword ptr [edi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x170u)));
/* 827cb7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 827cba: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 827cbe: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 827cc2: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 827cc8: fsub dword ptr [edi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x174u)));
/* 827cce: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 827cd2: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 827cd8: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 827cdc: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 827ce2: mov eax, esp */
  eax = esp;
/* 827ce4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 827ce6: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 827ce9: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 827ced: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 827cf1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 827cf4: mov ecx, edi */
  ecx = edi;
/* 827cf6: call 0x6c14a6 */
  esp -= 4; W32(esp, 0x827cfbu); SPILL(); f_6c14a6(); if (g_unwind) return; RELOAD();
/* 827cfb: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 827cff: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 827d01: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 827d02: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 827d03: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 827d06: ret 8 */
  esp += 12; SPILL(); return;
L_827d09: /* 827d09: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 827d0d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 827d0e: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 827d14: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 827d15: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 827d18: ret 8 */
  esp += 12; SPILL(); return;
}

void f_827d60(void) {
  LOAD_REGS();
L_827d60: /* 827d60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 827d61: mov ebp, esp */
  ebp = esp;
/* 827d63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 827d65: push 0x9d30a0 */
  { uint32_t v = 0x9d30a0u; esp -= 4; W32(esp, v); }
/* 827d6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 827d70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 827d71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 827d78: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 827d7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 827d7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 827d80: mov esi, ecx */
  esi = ecx;
/* 827d82: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 827d88: xor edx, edx */
  edx = 0;
/* 827d8a: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 827d8c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 827d8d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 827d90: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 827d93: je 0x827f30 */
  if (zf) goto L_827f30;
L_827d99: /* 827d99: test byte ptr [ecx + 0x350], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x350u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 827da0: je 0x827da5 */
  if (zf) goto L_827da5;
L_827da2: /* 827da2: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
L_827da5: /* 827da5: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 827da8: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 827dab: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 827dae: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 827db0: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 827db6: lea edi, [esi + 0x170] */
  edi = (uint32_t)(esi + 0x170u);
/* 827dbc: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 827dbf: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 827dc2: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 827dc5: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 827dc7: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 827dc9: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 827dcc: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 827dcf: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 827dd2: jne 0x827ea7 */
  if (!zf) goto L_827ea7;
L_827dd8: /* 827dd8: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
L_827ddf: /* 827ddf: mov ecx, dword ptr [ecx + 0x370] */
  ecx = R32((uint32_t)(ecx + 0x370u));
/* 827de5: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 827de7: je 0x827e6d */
  if (zf) goto L_827e6d;
L_827ded: /* 827ded: push 0xb68ee8 */
  { uint32_t v = 0xb68ee8u; esp -= 4; W32(esp, v); }
/* 827df2: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x827df8u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 827df8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 827dfa: je 0x827e6d */
  if (zf) goto L_827e6d;
L_827dfc: /* 827dfc: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 827e02: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 827e08: mov ecx, dword ptr [edx + 0x370] */
  ecx = R32((uint32_t)(edx + 0x370u));
/* 827e0e: fsub dword ptr [ecx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x178u)));
/* 827e14: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 827e1a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 827e1c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 827e1f: je 0x827e23 */
  if (zf) goto L_827e23;
L_827e21: /* 827e21: fchs  */
  ST0 = -ST0;
L_827e23: /* 827e23: fcomp dword ptr [esi + 0x2d8] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x2d8u)));
  FPOP();
/* 827e29: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 827e2b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 827e2e: jp 0x827e6d */
  if (pf) goto L_827e6d;
L_827e30: /* 827e30: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 827e32: fsub dword ptr [ecx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x170u)));
/* 827e38: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 827e3e: fsub dword ptr [ecx + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x174u)));
/* 827e44: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 827e4a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 827e4c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 827e4e: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 827e50: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 827e52: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 827e54: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 827e56: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 827e58: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 827e5a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 827e5c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 827e5e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 827e60: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 827e63: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 827e65: jne 0x827e6d */
  if (!zf) goto L_827e6d;
L_827e67: /* 827e67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 827e68: call 0x6c3a94 */
  esp -= 4; W32(esp, 0x827e6du); SPILL(); f_6c3a94(); if (g_unwind) return; RELOAD();
L_827e6d: /* 827e6d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 827e70: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x827e76u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 827e76: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 827e79: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 827e7c: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 827e7f: test byte ptr [esi + 0x392], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x392u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 827e86: jne 0x82825a */
  if (!zf) goto L_82825a;
L_827e8c: /* 827e8c: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 827e8f: cmp al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 827e91: je 0x827e9b */
  if (zf) goto L_827e9b;
L_827e93: /* 827e93: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 827e95: jne 0x82825a */
  if (!zf) goto L_82825a;
L_827e9b: /* 827e9b: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 827ea2: jmp 0x828261 */
  goto L_828261;
L_827ea7: /* 827ea7: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 827ea9: jne 0x8280be */
  if (!zf) goto L_8280be;
L_827eaf: /* 827eaf: fld dword ptr [esi + 0x190] */
  { double v = F32((uint32_t)(esi + 0x190u)); FPUSH(v); }
/* 827eb5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 827ebb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 827ebd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 827ec0: jp 0x827f30 */
  if (pf) goto L_827f30;
L_827ec2: /* 827ec2: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 827ec8: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x827eceu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 827ece: mov ecx, eax */
  ecx = eax;
/* 827ed0: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x827ed6u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 827ed6: fld dword ptr [eax + 0x3cc] */
  { double v = F32((uint32_t)(eax + 0x3ccu)); FPUSH(v); }
/* 827edc: fmul dword ptr [0xa0c18c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c18cu)));
/* 827ee2: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 827ee8: fcomp dword ptr [ecx + 0x3cc] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x3ccu)));
  FPOP();
/* 827eee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 827ef0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 827ef3: jp 0x827f30 */
  if (pf) goto L_827f30;
L_827ef5: /* 827ef5: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 827ef8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 827efe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 827f00: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 827f03: jne 0x827f45 */
  if (!zf) goto L_827f45;
L_827f05: /* 827f05: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 827f08: fcomp dword ptr [0xa1507c] */
  fpu_com(ST0, F32((uint32_t)(0xa1507cu)));
  FPOP();
/* 827f0e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 827f10: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 827f13: jne 0x827f30 */
  if (!zf) goto L_827f30;
L_827f15: /* 827f15: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 827f1b: mov dword ptr [edx + 0x36c], 0xbf800000 */
  W32((uint32_t)(edx + 0x36cu), 0xbf800000u);
/* 827f25: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 827f2b: call 0x6c4462 */
  esp -= 4; W32(esp, 0x827f30u); SPILL(); f_6c4462(); if (g_unwind) return; RELOAD();
L_827f30: /* 827f30: xor eax, eax */
  eax = 0;
/* 827f32: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 827f35: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 827f3c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 827f3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 827f3e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 827f3f: mov esp, ebp */
  esp = ebp;
/* 827f41: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 827f42: ret 8 */
  esp += 12; SPILL(); return;
L_827f45: /* 827f45: fld dword ptr [esi + 0x188] */
  { double v = F32((uint32_t)(esi + 0x188u)); FPUSH(v); }
/* 827f4b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 827f51: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 827f53: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 827f56: jp 0x827f99 */
  if (pf) goto L_827f99;
L_827f58: /* 827f58: fld dword ptr [esi + 0x18c] */
  { double v = F32((uint32_t)(esi + 0x18cu)); FPUSH(v); }
/* 827f5e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 827f64: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 827f66: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 827f69: jp 0x827f99 */
  if (pf) goto L_827f99;
L_827f6b: /* 827f6b: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 827f72: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 827f75: add esi, 0x194 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 827f7b: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 827f82: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 827f85: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 827f87: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 827f8e: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 827f91: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 827f94: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 827f97: jmp 0x827f30 */
  goto L_827f30;
L_827f99: /* 827f99: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 827f9c: call dword ptr [0xcfa8a0] */
  esp -= 4; W32(esp, 0x827fa2u); SPILL(); f_4e23dd(); if (g_unwind) return; /* Core!?Size2D@FVector@@QBEMXZ */ RELOAD();
/* 827fa2: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 827fa5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 827fa8: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 827fab: lea edi, [esi + 0x194] */
  edi = (uint32_t)(esi + 0x194u);
/* 827fb1: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 827fb4: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 827fb7: mov ecx, edi */
  ecx = edi;
/* 827fb9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 827fbb: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 827fbe: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 827fc5: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 827fc8: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 827fcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 827fcc: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 827fcf: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x827fd5u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 827fd5: fld dword ptr [esi + 0x408] */
  { double v = F32((uint32_t)(esi + 0x408u)); FPUSH(v); }
/* 827fdb: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 827fdd: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 827fdf: mov ecx, edi */
  ecx = edi;
/* 827fe1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 827fe3: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 827fe6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 827fe9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 827fec: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 827fef: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 827ff1: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 827ff4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 827ff5: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 827ff7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 827ff9: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 827ffc: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 827fff: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 828002: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 828005: call 0x6cae61 */
  esp -= 4; W32(esp, 0x82800au); SPILL(); f_6cae61(); if (g_unwind) return; RELOAD();
/* 82800a: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 828010: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 828013: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 828016: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 828018: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82801b: jne 0x828073 */
  if (!zf) goto L_828073;
L_82801d: /* 82801d: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 828020: fmul dword ptr [esi + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x190u)));
/* 828026: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 828029: fmul dword ptr [esi + 0x18c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18cu)));
/* 82802f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 828031: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 828034: fmul dword ptr [esi + 0x188] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x188u)));
/* 82803a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82803c: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 82803f: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 828042: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 828048: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 82804a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82804c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82804f: jp 0x828073 */
  if (pf) goto L_828073;
L_828051: /* 828051: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 828053: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 828059: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 82805b: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 82805e: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 828064: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 828067: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 82806a: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 828070: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
L_828073: /* 828073: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 828076: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 82807c: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 828082: xor edi, edi */
  edi = 0;
/* 828084: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 828086: je 0x82809b */
  if (zf) goto L_82809b;
L_828088: /* 828088: mov edx, dword ptr [eax + 0x2d4] */
  edx = R32((uint32_t)(eax + 0x2d4u));
/* 82808e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82808f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 828092: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 828093: call 0x6cb8f2 */
  esp -= 4; W32(esp, 0x828098u); SPILL(); f_6cb8f2(); if (g_unwind) return; RELOAD();
/* 828098: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_82809b: /* 82809b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 82809e: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8280a0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8280a2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8280a4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8280a7: jp 0x827f30 */
  if (pf) goto L_827f30;
L_8280ad: /* 8280ad: mov dword ptr [esi + 0x188], edi */
  W32((uint32_t)(esi + 0x188u), edi);
/* 8280b3: mov dword ptr [esi + 0x18c], edi */
  W32((uint32_t)(esi + 0x18cu), edi);
/* 8280b9: jmp 0x827f30 */
  goto L_827f30;
L_8280be: /* 8280be: cmp al, 0xb */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8280c0: jne 0x827ddf */
  if (!zf) goto L_827ddf;
L_8280c6: /* 8280c6: cmp dword ptr [esi + 0x4fc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4fcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8280cc: je 0x827ddf */
  if (zf) goto L_827ddf;
L_8280d2: /* 8280d2: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 8280d5: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8280d8: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 8280db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8280dc: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 8280df: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8280e2: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 8280e5: mov ecx, esp */
  ecx = esp;
/* 8280e7: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 8280e9: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 8280eb: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8280ee: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8280f1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8280f3: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8280f6: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8280f9: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8280fc: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8280ff: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 828102: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 828105: mov ecx, esi */
  ecx = esi;
/* 828107: call 0x6c14a6 */
  esp -= 4; W32(esp, 0x82810cu); SPILL(); f_6c14a6(); if (g_unwind) return; RELOAD();
/* 82810c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82810e: je 0x82816c */
  if (zf) goto L_82816c;
L_828110: /* 828110: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 828117: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 82811a: lea eax, [esi + 0x194] */
  eax = (uint32_t)(esi + 0x194u);
/* 828120: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 828122: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 828129: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 82812c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 82812f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 828132: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 828139: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 82813c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82813d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 828140: call 0x6c4944 */
  esp -= 4; W32(esp, 0x828145u); SPILL(); f_6c4944(); if (g_unwind) return; RELOAD();
/* 828145: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 828148: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82814a: je 0x828154 */
  if (zf) goto L_828154;
L_82814c: /* 82814c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82814d: mov ecx, esi */
  ecx = esi;
/* 82814f: call 0x6c5579 */
  esp -= 4; W32(esp, 0x828154u); SPILL(); f_6c5579(); if (g_unwind) return; RELOAD();
L_828154: /* 828154: mov eax, 1 */
  eax = 0x1u;
/* 828159: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82815c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 828163: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 828164: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 828165: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 828166: mov esp, ebp */
  esp = ebp;
/* 828168: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 828169: ret 8 */
  esp += 12; SPILL(); return;
L_82816c: /* 82816c: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 82816f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 828170: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 828173: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x828179u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 828179: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82817b: lea edi, [esi + 0x194] */
  edi = (uint32_t)(esi + 0x194u);
/* 828181: mov ecx, edi */
  ecx = edi;
/* 828183: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 828185: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 828188: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 82818b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82818e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 828191: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 828194: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 828196: je 0x82823b */
  if (zf) goto L_82823b;
L_82819c: /* 82819c: mov eax, dword ptr [esi + 0x4fc] */
  eax = R32((uint32_t)(esi + 0x4fcu));
/* 8281a2: cmp eax, dword ptr [ecx + 0x16c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x16cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8281a8: je 0x82823b */
  if (zf) goto L_82823b;
L_8281ae: /* 8281ae: fld dword ptr [eax + 0x454] */
  { double v = F32((uint32_t)(eax + 0x454u)); FPUSH(v); }
/* 8281b4: fadd dword ptr [eax + 0x460] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x460u)));
/* 8281ba: fld dword ptr [eax + 0x450] */
  { double v = F32((uint32_t)(eax + 0x450u)); FPUSH(v); }
/* 8281c0: fadd dword ptr [eax + 0x45c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x45cu)));
/* 8281c6: fld dword ptr [eax + 0x458] */
  { double v = F32((uint32_t)(eax + 0x458u)); FPUSH(v); }
/* 8281cc: fadd dword ptr [eax + 0x44c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x44cu)));
/* 8281d2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8281d4: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 8281d7: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8281d9: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 8281dc: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 8281de: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 8281e0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8281e2: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8281e8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8281ea: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8281ed: jne 0x82823b */
  if (!zf) goto L_82823b;
L_8281ef: /* 8281ef: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 8281f5: fcomp dword ptr [esi + 0x178] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x178u)));
  FPOP();
/* 8281fb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8281fd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 828200: jp 0x82823b */
  if (pf) goto L_82823b;
L_828202: /* 828202: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 828204: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 828207: mov eax, esp */
  eax = esp;
/* 828209: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 828210: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 828213: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 828215: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 82821c: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 82821f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 828222: mov dword ptr [ebp - 0x40], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x3f800000u);
/* 828229: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 82822c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82822e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 828231: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 828233: mov ecx, esi */
  ecx = esi;
/* 828235: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x82823bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_82823b: /* 82823b: fld dword ptr [esi + 0x404] */
  { double v = F32((uint32_t)(esi + 0x404u)); FPUSH(v); }
/* 828241: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 828243: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 828245: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 828247: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 828249: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 82824c: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 82824f: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 828252: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 828255: jmp 0x827f30 */
  goto L_827f30;
L_82825a: /* 82825a: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_828261: /* 828261: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 828264: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 828267: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 82826a: xor eax, eax */
  eax = 0;
/* 82826c: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 82826f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 828270: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 828273: mov dword ptr [ebp - 0x90], eax */
  W32((uint32_t)(ebp + 0xffffff70u), eax);
/* 828279: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 82827b: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* 828281: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 828283: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 828289: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 82828f: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 828292: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 828295: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 828298: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 82829b: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 82829e: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8282a1: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8282a4: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 8282a7: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8282aa: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 8282ad: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8282b0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8282b3: mov edx, esp */
  edx = esp;
/* 8282b5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8282b7: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8282ba: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8282bd: mov ecx, esi */
  ecx = esi;
/* 8282bf: mov dword ptr [ebp - 0x6c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x3f800000u);
/* 8282c6: mov dword ptr [ebp - 0x68], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff98u), 0xffffffffu);
/* 8282cd: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8282d0: call 0x6c14a6 */
  esp -= 4; W32(esp, 0x8282d5u); SPILL(); f_6c14a6(); if (g_unwind) return; RELOAD();
/* 8282d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8282d7: je 0x828347 */
  if (zf) goto L_828347;
L_8282d9: /* 8282d9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8282dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8282de: jne 0x82830c */
  if (!zf) goto L_82830c;
L_8282e0: /* 8282e0: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 8282e7: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8282ea: lea ecx, [esi + 0x194] */
  ecx = (uint32_t)(esi + 0x194u);
/* 8282f0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8282f2: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 8282f9: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8282fc: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 828303: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 828306: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 828309: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_82830c: /* 82830c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 82830f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 828311: je 0x82832f */
  if (zf) goto L_82832f;
L_828313: /* 828313: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 828318: mov ecx, eax */
  ecx = eax;
/* 82831a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x828320u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 828320: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 828322: je 0x82832f */
  if (zf) goto L_82832f;
L_828324: /* 828324: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 828327: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 828328: mov ecx, esi */
  ecx = esi;
/* 82832a: call 0x6c5579 */
  esp -= 4; W32(esp, 0x82832fu); SPILL(); f_6c5579(); if (g_unwind) return; RELOAD();
L_82832f: /* 82832f: mov eax, 1 */
  eax = 0x1u;
/* 828334: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 828337: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82833e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82833f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 828340: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 828341: mov esp, ebp */
  esp = ebp;
/* 828343: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 828344: ret 8 */
  esp += 12; SPILL(); return;
L_828347: /* 828347: cmp byte ptr [esi + 0x50], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82834b: jne 0x8283da */
  if (!zf) goto L_8283da;
L_828351: /* 828351: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 828354: fcomp dword ptr [esi + 0x2d4] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x2d4u)));
  FPOP();
/* 82835a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82835c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82835f: jp 0x8283da */
  if (pf) goto L_8283da;
L_828361: /* 828361: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 828364: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 828366: je 0x828154 */
  if (zf) goto L_828154;
L_82836c: /* 82836c: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82836f: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 828375: fadd qword ptr [0xa0d218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0d218u)));
/* 82837b: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 82837d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82837f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 828382: jp 0x8283da */
  if (pf) goto L_8283da;
L_828384: /* 828384: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 82838a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82838c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82838f: mov eax, esp */
  eax = esp;
/* 828391: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 828398: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 82839b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 82839d: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 8283a2: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 8283a9: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8283ac: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8283af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8283b0: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 8283b7: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8283ba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8283bb: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8283be: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8283c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8283c5: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 8283cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8283cc: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x8283d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8283d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8283d4: je 0x828154 */
  if (zf) goto L_828154;
L_8283da: /* 8283da: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8283dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8283df: je 0x828407 */
  if (zf) goto L_828407;
L_8283e1: /* 8283e1: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8283e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8283e5: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 8283eb: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x8283f1u); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 8283f1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8283f3: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8283f6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8283f9: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8283fc: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8283ff: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 828402: jmp 0x82880b */
  goto L_82880b;
L_828407: /* 828407: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 82840a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 828410: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 828412: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 828415: jne 0x82880b */
  if (!zf) goto L_82880b;
L_82841b: /* 82841b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 82841e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82841f: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 828422: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 828423: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 828426: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x82842cu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 82842c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82842e: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 828431: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 828434: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 828437: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 82843a: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 828440: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 828443: mov eax, dword ptr [ecx + 0x428] */
  eax = R32((uint32_t)(ecx + 0x428u));
/* 828449: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82844b: je 0x82880b */
  if (zf) goto L_82880b;
L_828451: /* 828451: fld dword ptr [esi + 0x3ec] */
  { double v = F32((uint32_t)(esi + 0x3ecu)); FPUSH(v); }
/* 828457: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 82845d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82845f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 828462: jne 0x82867c */
  if (!zf) goto L_82867c;
L_828468: /* 828468: fld dword ptr [esi + 0x3ec] */
  { double v = F32((uint32_t)(esi + 0x3ecu)); FPUSH(v); }
/* 82846e: fsub dword ptr [esi + 0x3bc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x3bcu)));
/* 828474: fst dword ptr [esi + 0x3ec] */
  WF32((uint32_t)(esi + 0x3ecu), ST0);
/* 82847a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 828480: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 828482: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 828485: jp 0x8284d2 */
  if (pf) goto L_8284d2;
L_828487: /* 828487: mov eax, dword ptr [ecx + 0x428] */
  eax = R32((uint32_t)(ecx + 0x428u));
/* 82848d: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 828490: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 828496: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 828498: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82849b: mov eax, esp */
  eax = esp;
/* 82849d: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 82849f: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 8284a2: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8284a5: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 8284a8: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8284ab: add ecx, 0x42c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x42cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8284b1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8284b3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8284b6: mov eax, esp */
  eax = esp;
/* 8284b8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8284ba: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8284bd: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8284c0: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8284c3: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8284c6: mov ecx, esi */
  ecx = esi;
/* 8284c8: call 0x6ca853 */
  esp -= 4; W32(esp, 0x8284cdu); SPILL(); f_6ca853(); if (g_unwind) return; RELOAD();
/* 8284cd: jmp 0x82867c */
  goto L_82867c;
L_8284d2: /* 8284d2: fld dword ptr [esi + 0x3e8] */
  { double v = F32((uint32_t)(esi + 0x3e8u)); FPUSH(v); }
/* 8284d8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8284de: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8284e0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8284e3: jne 0x82867c */
  if (!zf) goto L_82867c;
L_8284e9: /* 8284e9: fld dword ptr [esi + 0x3e8] */
  { double v = F32((uint32_t)(esi + 0x3e8u)); FPUSH(v); }
/* 8284ef: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 8284f1: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 8284f4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8284f6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8284f9: jne 0x828507 */
  if (!zf) goto L_828507;
L_8284fb: /* 8284fb: mov ecx, esi */
  ecx = esi;
/* 8284fd: call 0x6c7bbc */
  esp -= 4; W32(esp, 0x828502u); SPILL(); f_6c7bbc(); if (g_unwind) return; RELOAD();
/* 828502: jmp 0x82867c */
  goto L_82867c;
L_828507: /* 828507: mov edx, dword ptr [ecx + 0x428] */
  edx = R32((uint32_t)(ecx + 0x428u));
/* 82850d: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 828510: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 828513: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 828518: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82851a: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 82851d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 828520: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 828523: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 828526: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 828529: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 82852c: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 82852f: fsub dword ptr [ebp - 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 828532: lea eax, [ecx + 0x42c] */
  eax = (uint32_t)(ecx + 0x42cu);
/* 828538: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 82853a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82853b: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 82853e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82853f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 828541: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 828544: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 828547: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 828549: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 82854c: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 82854e: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 828550: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 828552: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 828555: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 828556: call 0x6cb802 */
  esp -= 4; W32(esp, 0x82855bu); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 82855b: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 82855e: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 828561: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 828564: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 828567: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 82856a: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 82856d: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 828570: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 828573: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 828575: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 828578: fsubr dword ptr [edi + 8] */
  ST0 = (F32((uint32_t)(edi + 0x8u))) - ST0;
/* 82857b: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 82857e: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 828581: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 828583: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 828586: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 828589: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 82858c: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 82858f: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x828595u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 828595: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 828598: fld dword ptr [esi + 0x3e8] */
  { double v = F32((uint32_t)(esi + 0x3e8u)); FPUSH(v); }
/* 82859e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8285a0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8285a2: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8285a5: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8285a7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8285a9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8285ab: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8285ae: jne 0x82862c */
  if (!zf) goto L_82862c;
L_8285b0: /* 8285b0: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8285b3: fmul dword ptr [esi + 0x3e4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3e4u)));
/* 8285b9: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8285bc: fmul dword ptr [esi + 0x3e0] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3e0u)));
/* 8285c2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8285c4: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8285c7: fmul dword ptr [esi + 0x3dc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3dcu)));
/* 8285cd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8285cf: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8285d5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8285d7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8285da: jne 0x82862c */
  if (!zf) goto L_82862c;
L_8285dc: /* 8285dc: fld dword ptr [esi + 0x3e8] */
  { double v = F32((uint32_t)(esi + 0x3e8u)); FPUSH(v); }
/* 8285e2: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 8285e5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8285e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8285e8: fmul dword ptr [esi + 0x3e4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3e4u)));
/* 8285ee: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 8285f1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8285f3: fmul dword ptr [esi + 0x3e0] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3e0u)));
/* 8285f9: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8285fc: fmul dword ptr [esi + 0x3dc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3dcu)));
/* 828602: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 828605: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 828608: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 82860b: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 82860e: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 828611: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 828614: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 828616: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 828618: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 82861b: fadd dword ptr [ebp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xcu)));
/* 82861e: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 828621: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 828624: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 828627: fadd dword ptr [ebp - 0x54] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffacu)));
/* 82862a: jmp 0x828659 */
  goto L_828659;
L_82862c: /* 82862c: lea ecx, [esi + 0x3dc] */
  ecx = (uint32_t)(esi + 0x3dcu);
/* 828632: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 828633: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 828636: push 0x3e4ccccd */
  { uint32_t v = 0x3e4ccccdu; esp -= 4; W32(esp, v); }
/* 82863b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82863c: call 0x6cb802 */
  esp -= 4; W32(esp, 0x828641u); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 828641: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 828644: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 828647: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82864a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 82864d: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 828650: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 828653: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 828655: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 828658: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_828659: /* 828659: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 82865c: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 82865f: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 828662: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 828665: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x82866bu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 82866b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82866d: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 828670: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 828673: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 828676: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 828679: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_82867c: /* 82867c: fld dword ptr [esi + 0x3ec] */
  { double v = F32((uint32_t)(esi + 0x3ecu)); FPUSH(v); }
/* 828682: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 828688: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82868a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82868d: jp 0x82880b */
  if (pf) goto L_82880b;
L_828693: /* 828693: fld dword ptr [esi + 0x3e8] */
  { double v = F32((uint32_t)(esi + 0x3e8u)); FPUSH(v); }
/* 828699: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 82869b: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 82869e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8286a0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8286a3: jne 0x8286b1 */
  if (!zf) goto L_8286b1;
L_8286a5: /* 8286a5: mov ecx, esi */
  ecx = esi;
/* 8286a7: call 0x6c7bbc */
  esp -= 4; W32(esp, 0x8286acu); SPILL(); f_6c7bbc(); if (g_unwind) return; RELOAD();
/* 8286ac: jmp 0x82880b */
  goto L_82880b;
L_8286b1: /* 8286b1: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 8286b7: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8286ba: mov ecx, dword ptr [eax + 0x428] */
  ecx = R32((uint32_t)(eax + 0x428u));
/* 8286c0: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 8286c3: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8286c9: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8286cb: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8286ce: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8286d1: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 8286d4: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 8286d7: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8286da: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 8286dd: fsub dword ptr [ebp - 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 8286e0: add eax, 0x42c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x42cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8286e5: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8286e7: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 8286ea: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8286ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8286ee: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8286f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8286f1: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8286f4: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8286f6: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8286f9: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 8286fb: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8286fd: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 828700: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 828702: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 828705: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 828706: call 0x6cb802 */
  esp -= 4; W32(esp, 0x82870bu); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 82870b: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 82870e: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 828711: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 828714: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 828717: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 82871a: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 82871d: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 828720: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 828723: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 828725: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 828728: fsubr dword ptr [edi + 8] */
  ST0 = (F32((uint32_t)(edi + 0x8u))) - ST0;
/* 82872b: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 82872e: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 828731: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 828733: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 828736: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 828739: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 82873c: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 82873f: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x828745u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 828745: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 828748: fld dword ptr [esi + 0x3e8] */
  { double v = F32((uint32_t)(esi + 0x3e8u)); FPUSH(v); }
/* 82874e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 828750: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 828752: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 828755: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 828757: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 828759: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82875b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82875e: jne 0x8287c9 */
  if (!zf) goto L_8287c9;
L_828760: /* 828760: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 828763: fmul dword ptr [esi + 0x3e4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3e4u)));
/* 828769: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 82876c: fmul dword ptr [esi + 0x3e0] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3e0u)));
/* 828772: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 828774: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 828777: fmul dword ptr [esi + 0x3dc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3dcu)));
/* 82877d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82877f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 828785: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 828787: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82878a: jne 0x8287c9 */
  if (!zf) goto L_8287c9;
L_82878c: /* 82878c: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 82878f: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 828792: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 828795: mov ecx, esp */
  ecx = esp;
/* 828797: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 828799: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 82879c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 82879f: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 8287a5: add ecx, 0x42c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x42cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8287ab: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8287ad: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8287b0: mov edx, esp */
  edx = esp;
/* 8287b2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8287b4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8287b7: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8287ba: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8287bd: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8287c0: mov ecx, esi */
  ecx = esi;
/* 8287c2: call 0x6ca853 */
  esp -= 4; W32(esp, 0x8287c7u); SPILL(); f_6ca853(); if (g_unwind) return; RELOAD();
/* 8287c7: jmp 0x82880b */
  goto L_82880b;
L_8287c9: /* 8287c9: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8287cc: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* 8287cf: fadd dword ptr [esi + 0x3e4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x3e4u)));
/* 8287d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8287d6: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8287d9: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8287dc: fadd dword ptr [esi + 0x3e0] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x3e0u)));
/* 8287e2: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8287e5: fadd dword ptr [esi + 0x3dc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x3dcu)));
/* 8287eb: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8287ee: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8287f1: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8287f4: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8287fau); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8287fa: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8287fc: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8287ff: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 828802: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 828805: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 828808: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_82880b: /* 82880b: mov ecx, dword ptr [esi + 0x408] */
  ecx = R32((uint32_t)(esi + 0x408u));
/* 828811: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 828814: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 828817: lea edi, [esi + 0x194] */
  edi = (uint32_t)(esi + 0x194u);
/* 82881d: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 828820: mov edx, edi */
  edx = edi;
/* 828822: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 828825: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 828828: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 82882b: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 82882e: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 828831: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 828834: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 828836: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 828839: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 82883c: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 82883f: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 828842: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 828845: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 828848: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 82884e: test byte ptr [eax + 0x350], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x350u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 828855: jne 0x8288bc */
  if (!zf) goto L_8288bc;
L_828857: /* 828857: mov eax, dword ptr [eax + 0x370] */
  eax = R32((uint32_t)(eax + 0x370u));
/* 82885d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82885f: je 0x8288bc */
  if (zf) goto L_8288bc;
L_828861: /* 828861: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 828866: mov ecx, eax */
  ecx = eax;
/* 828868: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x82886eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 82886e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 828870: je 0x8288bc */
  if (zf) goto L_8288bc;
L_828872: /* 828872: fld dword ptr [esi + 0x3c0] */
  { double v = F32((uint32_t)(esi + 0x3c0u)); FPUSH(v); }
/* 828878: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 82887e: fmul dword ptr [0xa08924] */
  ST0 = ST0 * (F32((uint32_t)(0xa08924u)));
/* 828884: mov edx, dword ptr [ecx + 0x370] */
  edx = R32((uint32_t)(ecx + 0x370u));
/* 82888a: fadd dword ptr [edx + 0x2d4] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x2d4u)));
/* 828890: fadd dword ptr [esi + 0x2d4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x2d4u)));
/* 828896: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 828899: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82889b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82889e: jne 0x827f30 */
  if (!zf) goto L_827f30;
L_8288a4: /* 8288a4: mov eax, 1 */
  eax = 0x1u;
/* 8288a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8288ac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8288b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8288b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8288b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8288b6: mov esp, ebp */
  esp = ebp;
/* 8288b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8288b9: ret 8 */
  esp += 12; SPILL(); return;
L_8288bc: /* 8288bc: lea ebx, [esi + 0x188] */
  ebx = (uint32_t)(esi + 0x188u);
/* 8288c2: mov ecx, ebx */
  ecx = ebx;
/* 8288c4: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8288cau); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8288ca: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 8288cd: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8288d0: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8288d3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8288d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8288d8: jne 0x82896a */
  if (!zf) goto L_82896a;
L_8288de: /* 8288de: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8288e1: fcomp dword ptr [0xa09ac8] */
  fpu_com(ST0, F32((uint32_t)(0xa09ac8u)));
  FPOP();
/* 8288e7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8288e9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8288ec: jne 0x82896a */
  if (!zf) goto L_82896a;
L_8288ee: /* 8288ee: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8288f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8288f2: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 8288f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8288f6: mov ecx, ebx */
  ecx = ebx;
/* 8288f8: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8288feu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8288fe: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 828901: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 828904: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 828907: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 828908: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 828909: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 82890c: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 82890f: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 828912: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 828915: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 828918: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 82891b: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 82891e: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 828921: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 828924: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 828927: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 82892a: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 82892d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82892f: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 828932: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 828935: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 828937: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 82893d: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 828940: fmul dword ptr [0xa08920] */
  ST0 = ST0 * (F32((uint32_t)(0xa08920u)));
/* 828946: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 828949: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82894a: call 0x6cb802 */
  esp -= 4; W32(esp, 0x82894fu); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 82894f: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 828951: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 828953: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 828956: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 828958: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 82895b: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 82895e: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 828961: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 828964: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 828967: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
L_82896a: /* 82896a: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 82896d: fmul dword ptr [esi + 0x3bc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3bcu)));
/* 828973: fmul dword ptr [0xa151e4] */
  ST0 = ST0 * (F32((uint32_t)(0xa151e4u)));
/* 828979: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 82897c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82897e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 828981: jne 0x827f30 */
  if (!zf) goto L_827f30;
L_828987: /* 828987: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 82898d: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 828990: jne 0x8289af */
  if (!zf) goto L_8289af;
L_828992: /* 828992: fld dword ptr [esi + 0x39c] */
  { double v = F32((uint32_t)(esi + 0x39cu)); FPUSH(v); }
/* 828998: or eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 82899d: fmul dword ptr [0xa15250] */
  ST0 = ST0 * (F32((uint32_t)(0xa15250u)));
/* 8289a3: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 8289a9: fstp dword ptr [esi + 0x39c] */
  WF32((uint32_t)(esi + 0x39cu), ST0); FPOP();
L_8289af: /* 8289af: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8289b2: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8289b8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8289ba: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8289bd: jne 0x8289e1 */
  if (!zf) goto L_8289e1;
L_8289bf: /* 8289bf: fld dword ptr [0xa1524c] */
  { double v = F32((uint32_t)(0xa1524cu)); FPUSH(v); }
/* 8289c5: mov edx, dword ptr [esi + 0x39c] */
  edx = R32((uint32_t)(esi + 0x39cu));
/* 8289cb: fdiv dword ptr [ebp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xcu)));
/* 8289ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8289cf: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8289d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8289d3: call 0x6cb8f2 */
  esp -= 4; W32(esp, 0x8289d8u); SPILL(); f_6cb8f2(); if (g_unwind) return; RELOAD();
/* 8289d8: fstp dword ptr [esi + 0x39c] */
  WF32((uint32_t)(esi + 0x39cu), ST0); FPOP();
/* 8289de: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8289e1: /* 8289e1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8289e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8289e6: je 0x827f30 */
  if (zf) goto L_827f30;
L_8289ec: /* 8289ec: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8289ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8289f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8289f1: mov eax, 1 */
  eax = 0x1u;
/* 8289f6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8289fd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8289fe: mov esp, ebp */
  esp = ebp;
/* 828a00: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 828a01: ret 8 */
  esp += 12; SPILL(); return;
}

void f_828a04(void) {
  LOAD_REGS();
L_828a04: /* 828a04: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 828a07: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 828a0c: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 828a0f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 828a10: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 828a13: call 0x99caf8 */
  esp -= 4; W32(esp, 0x828a18u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_828a18(); return;
}

void f_828a18(void) {
  LOAD_REGS();
L_828a18: /* 828a18: push 0xa15220 */
  { uint32_t v = 0xa15220u; esp -= 4; W32(esp, v); }
/* 828a1d: push 0xae3898 */
  { uint32_t v = 0xae3898u; esp -= 4; W32(esp, v); }
/* 828a22: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x828a28u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 828a28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 828a2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 828a2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 828a2f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x828a34u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_828a34: guest_badaddr(0x828a34); return;
}

void f_828d80(void) {
  LOAD_REGS();
L_828d80: /* 828d80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 828d81: mov ebp, esp */
  ebp = esp;
/* 828d83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 828d85: push 0x9d30b0 */
  { uint32_t v = 0x9d30b0u; esp -= 4; W32(esp, v); }
/* 828d8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 828d90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 828d91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 828d98: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 828d9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 828d9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 828d9d: mov esi, ecx */
  esi = ecx;
/* 828d9f: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 828da5: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 828da8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 828da9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 828dac: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 828db3: jne 0x828f6c */
  if (!zf) goto L_828f6c;
L_828db9: /* 828db9: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 828dbc: cmp al, 9 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 828dbe: je 0x828f6c */
  if (zf) goto L_828f6c;
L_828dc4: /* 828dc4: mov cl, byte ptr [esi + 0x392] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x392u))) & 0xffu);
/* 828dca: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 828dcc: test bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 828dce: jne 0x828e22 */
  if (!zf) goto L_828e22;
L_828dd0: /* 828dd0: cmp al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 828dd2: je 0x828dd8 */
  if (zf) goto L_828dd8;
L_828dd4: /* 828dd4: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 828dd6: jne 0x828e22 */
  if (!zf) goto L_828e22;
L_828dd8: /* 828dd8: mov eax, dword ptr [esi + 0x408] */
  eax = R32((uint32_t)(esi + 0x408u));
/* 828dde: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 828de1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 828de2: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 828de8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 828deb: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x828df1u); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 828df1: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 828df4: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 828df7: lea edx, [esi + 0x194] */
  edx = (uint32_t)(esi + 0x194u);
/* 828dfd: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 828e00: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 828e03: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 828e06: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 828e08: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 828e0b: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 828e0e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 828e10: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 828e13: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 828e16: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 828e19: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 828e1c: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 828e1f: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_828e22: /* 828e22: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 828e25: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 828e27: je 0x828eec */
  if (zf) goto L_828eec;
L_828e2d: /* 828e2d: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 828e32: mov ecx, edi */
  ecx = edi;
/* 828e34: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x828e3au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 828e3a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 828e3c: je 0x828ed5 */
  if (zf) goto L_828ed5;
L_828e42: /* 828e42: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 828e48: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 828e4a: je 0x828ed5 */
  if (zf) goto L_828ed5;
L_828e50: /* 828e50: mov ecx, dword ptr [eax + 0x428] */
  ecx = R32((uint32_t)(eax + 0x428u));
/* 828e56: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 828e58: je 0x828ed5 */
  if (zf) goto L_828ed5;
L_828e5a: /* 828e5a: cmp dword ptr [eax + 0x370], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x370u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 828e60: jne 0x828ed5 */
  if (!zf) goto L_828ed5;
L_828e62: /* 828e62: lea ecx, [esi + 0x188] */
  ecx = (uint32_t)(esi + 0x188u);
/* 828e68: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x828e6eu); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 828e6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 828e70: jne 0x828ed5 */
  if (!zf) goto L_828ed5;
L_828e72: /* 828e72: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 828e78: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 828e7e: mov edx, dword ptr [ecx + 0x428] */
  edx = R32((uint32_t)(ecx + 0x428u));
/* 828e84: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 828e87: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 828e8d: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 828e92: fld dword ptr [edi + 0x174] */
  { double v = F32((uint32_t)(edi + 0x174u)); FPUSH(v); }
/* 828e98: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 828e9b: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 828e9e: fld dword ptr [edi + 0x170] */
  { double v = F32((uint32_t)(edi + 0x170u)); FPUSH(v); }
/* 828ea4: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 828ea6: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 828ea9: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 828eaf: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 828eb2: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 828eb8: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 828ebb: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 828ec1: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 828ec4: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 828ec7: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 828eca: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 828ecd: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 828ed0: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 828ed3: jmp 0x828ee3 */
  goto L_828ee3;
L_828ed5: /* 828ed5: add edi, 0x170 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 828edb: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 828edd: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 828ee0: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
L_828ee3: /* 828ee3: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 828ee6: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 828ee9: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
L_828eec: /* 828eec: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 828eef: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 828ef2: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 828ef8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 828ef9: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 828efc: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 828eff: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 828f05: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 828f08: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 828f0e: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 828f11: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 828f14: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 828f17: call dword ptr [0xcfaa94] */
  esp -= 4; W32(esp, 0x828f1du); SPILL(); f_4e2dfb(); if (g_unwind) return; /* Core!?Rotation@FVector@@QAE?AVFRotator@@XZ */ RELOAD();
/* 828f1d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 828f1f: lea edi, [esi + 0x2f0] */
  edi = (uint32_t)(esi + 0x2f0u);
/* 828f25: mov ecx, edi */
  ecx = edi;
/* 828f27: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 828f29: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 828f2c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 828f2f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 828f32: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 828f35: cmp byte ptr [esi + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 828f38: mov word ptr [esi + 0x2f6], 0 */
  W16((uint32_t)(esi + 0x2f6u), 0x0u);
/* 828f41: jne 0x828f6c */
  if (!zf) goto L_828f6c;
L_828f43: /* 828f43: mov esi, dword ptr [esi + 0x33c] */
  esi = R32((uint32_t)(esi + 0x33cu));
/* 828f49: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 828f4b: je 0x828f66 */
  if (zf) goto L_828f66;
L_828f4d: /* 828f4d: mov ecx, dword ptr [esi + 0x370] */
  ecx = R32((uint32_t)(esi + 0x370u));
/* 828f53: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 828f55: je 0x828f66 */
  if (zf) goto L_828f66;
L_828f57: /* 828f57: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 828f5c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x828f62u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 828f62: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 828f64: jne 0x828f6c */
  if (!zf) goto L_828f6c;
L_828f66: /* 828f66: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
L_828f6c: /* 828f6c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 828f6f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 828f70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 828f71: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 828f78: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 828f79: mov esp, ebp */
  esp = ebp;
/* 828f7b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 828f7c: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_828f7f(void) {
  LOAD_REGS();
L_828f7f: /* 828f7f: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 828f82: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 828f87: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 828f8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 828f8b: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 828f8e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x828f93u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_828f93(); return;
}

void f_828f93(void) {
  LOAD_REGS();
L_828f93: /* 828f93: push 0xa15254 */
  { uint32_t v = 0xa15254u; esp -= 4; W32(esp, v); }
/* 828f98: push 0xae38a0 */
  { uint32_t v = 0xae38a0u; esp -= 4; W32(esp, v); }
/* 828f9d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x828fa3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 828fa3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 828fa6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 828fa8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 828faa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x828fafu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_828faf: guest_badaddr(0x828faf); return;
}

void f_829040(void) {
  LOAD_REGS();
L_829040: /* 829040: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 829041: mov ebp, esp */
  ebp = esp;
/* 829043: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 829045: push 0x9d30c0 */
  { uint32_t v = 0x9d30c0u; esp -= 4; W32(esp, v); }
/* 82904a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 829050: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 829051: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 829058: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82905b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82905c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 82905f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 829060: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 829061: xor edi, edi */
  edi = 0;
/* 829063: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 829066: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 829069: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 82906c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_829070: /* 829070: cmp edi, dword ptr [ebx + 0x114] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 829076: jge 0x829119 */
  if ((sf == of)) goto L_829119;
L_82907c: /* 82907c: mov eax, dword ptr [ebx + 0x110] */
  eax = R32((uint32_t)(ebx + 0x110u));
/* 829082: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 829085: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 829087: je 0x829113 */
  if (zf) goto L_829113;
L_82908d: /* 82908d: push 0xb6e1e8 */
  { uint32_t v = 0xb6e1e8u; esp -= 4; W32(esp, v); }
/* 829092: mov ecx, esi */
  ecx = esi;
/* 829094: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x82909au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 82909a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82909c: je 0x829113 */
  if (zf) goto L_829113;
L_82909e: /* 82909e: test byte ptr [esi + 0x3b4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3b4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8290a5: je 0x829113 */
  if (zf) goto L_829113;
L_8290a7: /* 8290a7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8290aa: mov eax, dword ptr [esi + 0x3dc] */
  eax = R32((uint32_t)(esi + 0x3dcu));
/* 8290b0: cmp eax, dword ptr [ecx + 0x47c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x47cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8290b6: je 0x829113 */
  if (zf) goto L_829113;
L_8290b8: /* 8290b8: fld dword ptr [esi + 0x3d8] */
  { double v = F32((uint32_t)(esi + 0x3d8u)); FPUSH(v); }
/* 8290be: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8290c4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8290c6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8290c9: jne 0x829113 */
  if (!zf) goto L_829113;
L_8290cb: /* 8290cb: mov eax, 1 */
  eax = 0x1u;
/* 8290d0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8290d3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8290da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8290db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8290dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8290dd: mov esp, ebp */
  esp = ebp;
/* 8290df: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8290e0: ret 4 */
  esp += 8; SPILL(); return;
L_829113: /* 829113: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 829114: jmp 0x829070 */
  goto L_829070;
L_829119: /* 829119: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82911c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82911d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82911e: xor eax, eax */
  eax = 0;
/* 829120: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 829127: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 829128: mov esp, ebp */
  esp = ebp;
/* 82912a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82912b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8290e3(void) {
  LOAD_REGS();
L_8290e3: /* 8290e3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8290e6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8290eb: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8290ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8290ef: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8290f2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8290f7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8290f7(); return;
}

void f_8290f7(void) {
  LOAD_REGS();
  goto L_8290f7;
L_829070: /* 829070: cmp edi, dword ptr [ebx + 0x114] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 829076: jge 0x829119 */
  if ((sf == of)) goto L_829119;
L_82907c: /* 82907c: mov eax, dword ptr [ebx + 0x110] */
  eax = R32((uint32_t)(ebx + 0x110u));
/* 829082: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 829085: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 829087: je 0x829113 */
  if (zf) goto L_829113;
L_82908d: /* 82908d: push 0xb6e1e8 */
  { uint32_t v = 0xb6e1e8u; esp -= 4; W32(esp, v); }
/* 829092: mov ecx, esi */
  ecx = esi;
/* 829094: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x82909au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 82909a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82909c: je 0x829113 */
  if (zf) goto L_829113;
L_82909e: /* 82909e: test byte ptr [esi + 0x3b4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3b4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8290a5: je 0x829113 */
  if (zf) goto L_829113;
L_8290a7: /* 8290a7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8290aa: mov eax, dword ptr [esi + 0x3dc] */
  eax = R32((uint32_t)(esi + 0x3dcu));
/* 8290b0: cmp eax, dword ptr [ecx + 0x47c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x47cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8290b6: je 0x829113 */
  if (zf) goto L_829113;
L_8290b8: /* 8290b8: fld dword ptr [esi + 0x3d8] */
  { double v = F32((uint32_t)(esi + 0x3d8u)); FPUSH(v); }
/* 8290be: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8290c4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8290c6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8290c9: jne 0x829113 */
  if (!zf) goto L_829113;
L_8290cb: /* 8290cb: mov eax, 1 */
  eax = 0x1u;
/* 8290d0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8290d3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8290da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8290db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8290dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8290dd: mov esp, ebp */
  esp = ebp;
/* 8290df: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8290e0: ret 4 */
  esp += 8; SPILL(); return;
L_8290f7: /* 8290f7: push 0xa15284 */
  { uint32_t v = 0xa15284u; esp -= 4; W32(esp, v); }
/* 8290fc: push 0xae38a8 */
  { uint32_t v = 0xae38a8u; esp -= 4; W32(esp, v); }
/* 829101: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x829107u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 829107: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82910a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82910c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82910e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x829113u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_829113: /* 829113: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 829114: jmp 0x829070 */
  goto L_829070;
L_829119: /* 829119: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82911c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82911d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82911e: xor eax, eax */
  eax = 0;
/* 829120: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 829127: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 829128: mov esp, ebp */
  esp = ebp;
/* 82912a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82912b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_829170(void) {
  LOAD_REGS();
L_829170: /* 829170: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 829171: mov ebp, esp */
  ebp = esp;
/* 829173: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 829175: push 0x9d30d0 */
  { uint32_t v = 0x9d30d0u; esp -= 4; W32(esp, v); }
/* 82917a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 829180: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 829181: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 829188: sub esp, 0xa8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82918e: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 829191: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 829194: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 829195: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 829198: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 829199: mov esi, ecx */
  esi = ecx;
/* 82919b: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 8291a1: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 8291a4: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8291a7: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 8291ad: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8291b0: mov ecx, eax */
  ecx = eax;
/* 8291b2: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8291b5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8291b7: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8291b9: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 8291bc: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8291bf: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8291c2: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8291c5: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 8291c8: lea edx, [esi + 0x188] */
  edx = (uint32_t)(esi + 0x188u);
/* 8291ce: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8291d1: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 8291d4: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8291d6: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8291d9: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 8291dc: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 8291e2: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8291e5: fld dword ptr [0xa1524c] */
  { double v = F32((uint32_t)(0xa1524cu)); FPUSH(v); }
/* 8291eb: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8291ee: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8291f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8291f1: xor edi, edi */
  edi = 0;
/* 8291f3: mov ebx, 1 */
  ebx = 0x1u;
/* 8291f8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8291fb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8291fd: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 829200: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 829203: test bl, ah */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 829205: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* 829208: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 82920b: jne 0x829218 */
  if (!zf) goto L_829218;
L_82920d: /* 82920d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82920f: mov dword ptr [ebp - 0x18], 0x43480000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x43480000u);
/* 829216: jmp 0x82921b */
  goto L_82921b;
L_829218: /* 829218: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
L_82921b: /* 82921b: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82921e: mov dword ptr [ebp - 0x2c], 0x64 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x64u);
/* 829225: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 829228: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 82922b: jmp 0x829230 */
  goto L_829230;
L_829230: /* 829230: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 829232: je 0x82951a */
  if (zf) goto L_82951a;
L_829238: /* 829238: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82923b: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 82923e: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 829244: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 829245: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 829248: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82924b: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 829251: mov ebx, esp */
  ebx = esp;
/* 829253: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 829256: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 82925c: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 82925f: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 829262: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 829264: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 829267: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 82926a: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 82926d: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 829270: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 829273: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 829276: mov ecx, esi */
  ecx = esi;
/* 829278: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 82927b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 82927e: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 829281: call 0x6c14a6 */
  esp -= 4; W32(esp, 0x829286u); SPILL(); f_6c14a6(); if (g_unwind) return; RELOAD();
/* 829286: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 829288: jne 0x8294f8 */
  if (!zf) goto L_8294f8;
L_82928e: /* 82928e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 829291: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x829297u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 829297: fst dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0);
/* 82929a: fcomp dword ptr [ebp - 0x4c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb4u)));
  FPOP();
/* 82929d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82929f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8292a2: jp 0x8292c5 */
  if (pf) goto L_8292c5;
L_8292a4: /* 8292a4: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8292a7: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8292aa: push 0x41000000 */
  { uint32_t v = 0x41000000u; esp -= 4; W32(esp, v); }
/* 8292af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8292b0: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8292b3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8292b6: mov ecx, esp */
  ecx = esp;
/* 8292b8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8292ba: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8292bd: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8292c0: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8292c3: jmp 0x829320 */
  goto L_829320;
L_8292c5: /* 8292c5: lea eax, [ebp - 0xb4] */
  eax = (uint32_t)(ebp + 0xffffff4cu);
/* 8292cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8292cc: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8292cf: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8292d5u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8292d5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8292d7: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8292da: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8292dd: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8292e0: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8292e3: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8292e6: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8292e9: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8292ec: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8292ef: push 0x40833333 */
  { uint32_t v = 0x40833333u; esp -= 4; W32(esp, v); }
/* 8292f4: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8292f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8292f8: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8292fb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8292fe: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 829301: mov edx, esp */
  edx = esp;
/* 829303: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 829306: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 829309: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 82930c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 82930e: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 829311: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 829314: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 829317: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 82931a: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 82931d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_829320: /* 829320: mov ecx, esi */
  ecx = esi;
/* 829322: call 0x6c5da8 */
  esp -= 4; W32(esp, 0x829327u); SPILL(); f_6c5da8(); if (g_unwind) return; RELOAD();
/* 829327: mov ebx, eax */
  ebx = eax;
/* 829329: xor edx, edx */
  edx = 0;
/* 82932b: cmp ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82932e: jne 0x82933a */
  if (!zf) goto L_82933a;
L_829330: /* 829330: mov edi, 1 */
  edi = 0x1u;
/* 829335: xor ebx, ebx */
  ebx = 0;
/* 829337: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_82933a: /* 82933a: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 829340: test byte ptr [ecx + 0x410], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x410u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 829347: jne 0x8294e0 */
  if (!zf) goto L_8294e0;
L_82934d: /* 82934d: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 829353: xor ebx, ebx */
  ebx = 0;
/* 829355: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 829358: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 82935b: je 0x82938f */
  if (zf) goto L_82938f;
L_82935d: /* 82935d: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 829360: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 829363: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 829364: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 829367: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 829368: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 82936b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82936e: mov ecx, esp */
  ecx = esp;
/* 829370: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 829372: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 829375: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 829378: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 82937b: mov ecx, esi */
  ecx = esi;
/* 82937d: call 0x6c17da */
  esp -= 4; W32(esp, 0x829382u); SPILL(); f_6c17da(); if (g_unwind) return; RELOAD();
/* 829382: mov edi, eax */
  edi = eax;
/* 829384: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 829387: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 82938a: jmp 0x82950a */
  goto L_82950a;
L_82938f: /* 82938f: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 829392: je 0x82950a */
  if (zf) goto L_82950a;
L_829398: /* 829398: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82939b: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 8293a1: fadd dword ptr [0xa152e8] */
  ST0 = ST0 + (F32((uint32_t)(0xa152e8u)));
/* 8293a7: fadd qword ptr [0xa138d8] */
  ST0 = ST0 + (F64((uint32_t)(0xa138d8u)));
/* 8293ad: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8293af: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8293b1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8293b4: jne 0x82950a */
  if (!zf) goto L_82950a;
L_8293ba: /* 8293ba: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8293bd: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8293c3: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 8293c9: mov dword ptr [ebp - 0xa4], edx */
  W32((uint32_t)(ebp + 0xffffff5cu), edx);
/* 8293cf: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 8293d5: mov dword ptr [ebp - 0xa0], edx */
  W32((uint32_t)(ebp + 0xffffff60u), edx);
/* 8293db: fadd dword ptr [0xa14ac0] */
  ST0 = ST0 + (F32((uint32_t)(0xa14ac0u)));
/* 8293e1: mov dword ptr [ebp - 0x9c], 0 */
  W32((uint32_t)(ebp + 0xffffff64u), 0x0u);
/* 8293eb: mov dword ptr [ebp - 0x98], 0 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x0u);
/* 8293f5: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* 8293ff: fst dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0);
/* 829402: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* 82940c: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 82940e: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* 829418: mov dword ptr [ebp - 0x88], 0 */
  W32((uint32_t)(ebp + 0xffffff78u), 0x0u);
/* 829422: mov dword ptr [ebp - 0x84], edx */
  W32((uint32_t)(ebp + 0xffffff7cu), edx);
/* 829428: mov dword ptr [ebp - 0x80], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x3f800000u);
/* 82942f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 829431: mov dword ptr [ebp - 0x7c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff84u), 0xffffffffu);
/* 829438: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 82943b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82943e: jne 0x829445 */
  if (!zf) goto L_829445;
L_829440: /* 829440: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 829442: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
L_829445: /* 829445: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 829446: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 829449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82944a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 82944c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82944e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 829450: lea edx, [ebp - 0xa4] */
  edx = (uint32_t)(ebp + 0xffffff5cu);
/* 829456: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 829457: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82945a: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* 829460: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 829462: mov edi, esp */
  edi = esp;
/* 829464: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 829466: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 829469: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 82946c: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 82946f: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 829472: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 829475: mov edx, esp */
  edx = esp;
/* 829477: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 82947e: mov edi, dword ptr [ebp - 0x58] */
  edi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 829481: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 829483: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 82948a: mov edi, dword ptr [ebp - 0x54] */
  edi = R32((uint32_t)(ebp + 0xffffffacu));
/* 82948d: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 829490: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 829493: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 829494: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 829497: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x82949du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82949d: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 8294a0: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 8294a6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8294a8: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8294ab: jp 0x829504 */
  if (pf) goto L_829504;
L_8294ad: /* 8294ad: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8294b0: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8294b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8294b4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8294b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8294b8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8294bb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8294be: mov edx, esp */
  edx = esp;
/* 8294c0: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8294c2: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8294c5: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8294c8: mov ecx, esi */
  ecx = esi;
/* 8294ca: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8294cd: call 0x6c17da */
  esp -= 4; W32(esp, 0x8294d2u); SPILL(); f_6c17da(); if (g_unwind) return; RELOAD();
/* 8294d2: mov edi, eax */
  edi = eax;
/* 8294d4: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8294d7: mov dword ptr [ebp + 0x14], 1 */
  W32((uint32_t)(ebp + 0x14u), 0x1u);
/* 8294de: jmp 0x829507 */
  goto L_829507;
L_8294e0: /* 8294e0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8294e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8294e3: mov ecx, esi */
  ecx = esi;
/* 8294e5: call dword ptr [edx + 0x1a4] */
  { uint32_t t = R32((uint32_t)(edx + 0x1a4u)); esp -= 4; W32(esp, 0x8294ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8294eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8294ed: je 0x82950a */
  if (zf) goto L_82950a;
L_8294ef: /* 8294ef: xor ebx, ebx */
  ebx = 0;
/* 8294f1: xor edi, edi */
  edi = 0;
/* 8294f3: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8294f6: jmp 0x82950a */
  goto L_82950a;
L_8294f8: /* 8294f8: mov edi, 1 */
  edi = 0x1u;
/* 8294fd: xor ebx, ebx */
  ebx = 0;
/* 8294ff: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 829502: jmp 0x82950a */
  goto L_82950a;
L_829504: /* 829504: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_829507: /* 829507: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
L_82950a: /* 82950a: dec dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffd4u), r);
  }
/* 82950d: jns 0x829230 */
  if (!sf) goto L_829230;
L_829513: /* 829513: xor ebx, ebx */
  ebx = 0;
/* 829515: jmp 0x829230 */
  goto L_829230;
L_82951a: /* 82951a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82951c: jne 0x829547 */
  if (!zf) goto L_829547;
L_82951e: /* 82951e: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 829521: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 829523: je 0x829547 */
  if (zf) goto L_829547;
L_829525: /* 829525: push 0xb650a8 */
  { uint32_t v = 0xb650a8u; esp -= 4; W32(esp, v); }
/* 82952a: mov ecx, ebx */
  ecx = ebx;
/* 82952c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x829532u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 829532: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 829534: je 0x829547 */
  if (zf) goto L_829547;
L_829536: /* 829536: mov edi, dword ptr [esi + 0xc0] */
  edi = R32((uint32_t)(esi + 0xc0u));
/* 82953c: sub edi, dword ptr [ebx + 0x3a8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x3a8u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 829542: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edi = r;
  }
/* 829544: sbb edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edi = r;
  }
/* 829546: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_829547: /* 829547: mov ebx, dword ptr [ebp - 0x74] */
  ebx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 82954a: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 829550: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 829552: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 829554: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 829556: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 829558: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82955b: mov edx, esp */
  edx = esp;
/* 82955d: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 82955f: mov ebx, dword ptr [ebp - 0x70] */
  ebx = R32((uint32_t)(ebp + 0xffffff90u));
/* 829562: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 829565: mov ebx, dword ptr [ebp - 0x6c] */
  ebx = R32((uint32_t)(ebp + 0xffffff94u));
/* 829568: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 829569: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 82956c: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x829572u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 829572: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 829575: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 829578: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 82957b: add esi, 0x188 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 829581: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 829583: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 829586: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 829589: mov eax, edi */
  eax = edi;
/* 82958b: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 82958d: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 82958f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 829590: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 829593: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 829595: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 829598: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 829599: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8295a0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8295a1: mov esp, ebp */
  esp = ebp;
/* 8295a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8295a4: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_82922d(void) {
  LOAD_REGS();
L_82922d: /* 82922d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_829230: /* 829230: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 829232: je 0x82951a */
  if (zf) goto L_82951a;
L_829238: /* 829238: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82923b: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 82923e: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 829244: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 829245: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 829248: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82924b: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 829251: mov ebx, esp */
  ebx = esp;
/* 829253: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 829256: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 82925c: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 82925f: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 829262: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 829264: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 829267: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 82926a: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 82926d: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 829270: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 829273: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 829276: mov ecx, esi */
  ecx = esi;
/* 829278: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 82927b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 82927e: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 829281: call 0x6c14a6 */
  esp -= 4; W32(esp, 0x829286u); SPILL(); f_6c14a6(); if (g_unwind) return; RELOAD();
/* 829286: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 829288: jne 0x8294f8 */
  if (!zf) goto L_8294f8;
L_82928e: /* 82928e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 829291: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x829297u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 829297: fst dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0);
/* 82929a: fcomp dword ptr [ebp - 0x4c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb4u)));
  FPOP();
/* 82929d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82929f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8292a2: jp 0x8292c5 */
  if (pf) goto L_8292c5;
L_8292a4: /* 8292a4: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8292a7: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8292aa: push 0x41000000 */
  { uint32_t v = 0x41000000u; esp -= 4; W32(esp, v); }
/* 8292af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8292b0: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8292b3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8292b6: mov ecx, esp */
  ecx = esp;
/* 8292b8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8292ba: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8292bd: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8292c0: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8292c3: jmp 0x829320 */
  goto L_829320;
L_8292c5: /* 8292c5: lea eax, [ebp - 0xb4] */
  eax = (uint32_t)(ebp + 0xffffff4cu);
/* 8292cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8292cc: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8292cf: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8292d5u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8292d5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8292d7: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8292da: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8292dd: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8292e0: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8292e3: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8292e6: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8292e9: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8292ec: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8292ef: push 0x40833333 */
  { uint32_t v = 0x40833333u; esp -= 4; W32(esp, v); }
/* 8292f4: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8292f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8292f8: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8292fb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8292fe: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 829301: mov edx, esp */
  edx = esp;
/* 829303: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 829306: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 829309: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 82930c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 82930e: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 829311: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 829314: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 829317: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 82931a: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 82931d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_829320: /* 829320: mov ecx, esi */
  ecx = esi;
/* 829322: call 0x6c5da8 */
  esp -= 4; W32(esp, 0x829327u); SPILL(); f_6c5da8(); if (g_unwind) return; RELOAD();
/* 829327: mov ebx, eax */
  ebx = eax;
/* 829329: xor edx, edx */
  edx = 0;
/* 82932b: cmp ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82932e: jne 0x82933a */
  if (!zf) goto L_82933a;
L_829330: /* 829330: mov edi, 1 */
  edi = 0x1u;
/* 829335: xor ebx, ebx */
  ebx = 0;
/* 829337: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_82933a: /* 82933a: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 829340: test byte ptr [ecx + 0x410], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x410u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 829347: jne 0x8294e0 */
  if (!zf) goto L_8294e0;
L_82934d: /* 82934d: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 829353: xor ebx, ebx */
  ebx = 0;
/* 829355: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 829358: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 82935b: je 0x82938f */
  if (zf) goto L_82938f;
L_82935d: /* 82935d: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 829360: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 829363: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 829364: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 829367: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 829368: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 82936b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82936e: mov ecx, esp */
  ecx = esp;
/* 829370: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 829372: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 829375: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 829378: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 82937b: mov ecx, esi */
  ecx = esi;
/* 82937d: call 0x6c17da */
  esp -= 4; W32(esp, 0x829382u); SPILL(); f_6c17da(); if (g_unwind) return; RELOAD();
/* 829382: mov edi, eax */
  edi = eax;
/* 829384: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 829387: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 82938a: jmp 0x82950a */
  goto L_82950a;
L_82938f: /* 82938f: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 829392: je 0x82950a */
  if (zf) goto L_82950a;
L_829398: /* 829398: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82939b: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 8293a1: fadd dword ptr [0xa152e8] */
  ST0 = ST0 + (F32((uint32_t)(0xa152e8u)));
/* 8293a7: fadd qword ptr [0xa138d8] */
  ST0 = ST0 + (F64((uint32_t)(0xa138d8u)));
/* 8293ad: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8293af: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8293b1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8293b4: jne 0x82950a */
  if (!zf) goto L_82950a;
L_8293ba: /* 8293ba: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8293bd: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8293c3: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 8293c9: mov dword ptr [ebp - 0xa4], edx */
  W32((uint32_t)(ebp + 0xffffff5cu), edx);
/* 8293cf: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 8293d5: mov dword ptr [ebp - 0xa0], edx */
  W32((uint32_t)(ebp + 0xffffff60u), edx);
/* 8293db: fadd dword ptr [0xa14ac0] */
  ST0 = ST0 + (F32((uint32_t)(0xa14ac0u)));
/* 8293e1: mov dword ptr [ebp - 0x9c], 0 */
  W32((uint32_t)(ebp + 0xffffff64u), 0x0u);
/* 8293eb: mov dword ptr [ebp - 0x98], 0 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x0u);
/* 8293f5: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* 8293ff: fst dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0);
/* 829402: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* 82940c: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 82940e: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* 829418: mov dword ptr [ebp - 0x88], 0 */
  W32((uint32_t)(ebp + 0xffffff78u), 0x0u);
/* 829422: mov dword ptr [ebp - 0x84], edx */
  W32((uint32_t)(ebp + 0xffffff7cu), edx);
/* 829428: mov dword ptr [ebp - 0x80], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x3f800000u);
/* 82942f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 829431: mov dword ptr [ebp - 0x7c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff84u), 0xffffffffu);
/* 829438: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 82943b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82943e: jne 0x829445 */
  if (!zf) goto L_829445;
L_829440: /* 829440: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 829442: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
L_829445: /* 829445: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 829446: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 829449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82944a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 82944c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82944e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 829450: lea edx, [ebp - 0xa4] */
  edx = (uint32_t)(ebp + 0xffffff5cu);
/* 829456: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 829457: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82945a: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* 829460: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 829462: mov edi, esp */
  edi = esp;
/* 829464: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 829466: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 829469: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 82946c: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 82946f: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 829472: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 829475: mov edx, esp */
  edx = esp;
/* 829477: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 82947e: mov edi, dword ptr [ebp - 0x58] */
  edi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 829481: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 829483: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 82948a: mov edi, dword ptr [ebp - 0x54] */
  edi = R32((uint32_t)(ebp + 0xffffffacu));
/* 82948d: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 829490: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 829493: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 829494: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 829497: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x82949du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82949d: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 8294a0: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 8294a6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8294a8: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8294ab: jp 0x829504 */
  if (pf) goto L_829504;
L_8294ad: /* 8294ad: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8294b0: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8294b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8294b4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8294b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8294b8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8294bb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8294be: mov edx, esp */
  edx = esp;
/* 8294c0: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8294c2: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8294c5: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8294c8: mov ecx, esi */
  ecx = esi;
/* 8294ca: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8294cd: call 0x6c17da */
  esp -= 4; W32(esp, 0x8294d2u); SPILL(); f_6c17da(); if (g_unwind) return; RELOAD();
/* 8294d2: mov edi, eax */
  edi = eax;
/* 8294d4: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8294d7: mov dword ptr [ebp + 0x14], 1 */
  W32((uint32_t)(ebp + 0x14u), 0x1u);
/* 8294de: jmp 0x829507 */
  goto L_829507;
L_8294e0: /* 8294e0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8294e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8294e3: mov ecx, esi */
  ecx = esi;
/* 8294e5: call dword ptr [edx + 0x1a4] */
  { uint32_t t = R32((uint32_t)(edx + 0x1a4u)); esp -= 4; W32(esp, 0x8294ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8294eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8294ed: je 0x82950a */
  if (zf) goto L_82950a;
L_8294ef: /* 8294ef: xor ebx, ebx */
  ebx = 0;
/* 8294f1: xor edi, edi */
  edi = 0;
/* 8294f3: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8294f6: jmp 0x82950a */
  goto L_82950a;
L_8294f8: /* 8294f8: mov edi, 1 */
  edi = 0x1u;
/* 8294fd: xor ebx, ebx */
  ebx = 0;
/* 8294ff: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 829502: jmp 0x82950a */
  goto L_82950a;
L_829504: /* 829504: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_829507: /* 829507: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
L_82950a: /* 82950a: dec dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffd4u), r);
  }
/* 82950d: jns 0x829230 */
  if (!sf) goto L_829230;
L_829513: /* 829513: xor ebx, ebx */
  ebx = 0;
/* 829515: jmp 0x829230 */
  goto L_829230;
L_82951a: /* 82951a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82951c: jne 0x829547 */
  if (!zf) goto L_829547;
L_82951e: /* 82951e: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 829521: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 829523: je 0x829547 */
  if (zf) goto L_829547;
L_829525: /* 829525: push 0xb650a8 */
  { uint32_t v = 0xb650a8u; esp -= 4; W32(esp, v); }
/* 82952a: mov ecx, ebx */
  ecx = ebx;
/* 82952c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x829532u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 829532: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 829534: je 0x829547 */
  if (zf) goto L_829547;
L_829536: /* 829536: mov edi, dword ptr [esi + 0xc0] */
  edi = R32((uint32_t)(esi + 0xc0u));
/* 82953c: sub edi, dword ptr [ebx + 0x3a8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x3a8u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 829542: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edi = r;
  }
/* 829544: sbb edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edi = r;
  }
/* 829546: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_829547: /* 829547: mov ebx, dword ptr [ebp - 0x74] */
  ebx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 82954a: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 829550: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 829552: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 829554: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 829556: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 829558: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82955b: mov edx, esp */
  edx = esp;
/* 82955d: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 82955f: mov ebx, dword ptr [ebp - 0x70] */
  ebx = R32((uint32_t)(ebp + 0xffffff90u));
/* 829562: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 829565: mov ebx, dword ptr [ebp - 0x6c] */
  ebx = R32((uint32_t)(ebp + 0xffffff94u));
/* 829568: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 829569: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 82956c: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x829572u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 829572: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 829575: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 829578: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 82957b: add esi, 0x188 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 829581: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 829583: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 829586: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 829589: mov eax, edi */
  eax = edi;
/* 82958b: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 82958d: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 82958f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 829590: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 829593: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 829595: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 829598: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 829599: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8295a0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8295a1: mov esp, ebp */
  esp = ebp;
/* 8295a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8295a4: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8295a7(void) {
  LOAD_REGS();
L_8295a7: /* 8295a7: mov eax, dword ptr [ebp - 0xa8] */
  eax = R32((uint32_t)(ebp + 0xffffff58u));
/* 8295ad: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8295b2: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8295b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8295b6: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8295b9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8295beu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8295be(); return;
}

void f_8295be(void) {
  LOAD_REGS();
L_8295be: /* 8295be: push 0xa152b4 */
  { uint32_t v = 0xa152b4u; esp -= 4; W32(esp, v); }
/* 8295c3: push 0xae38f8 */
  { uint32_t v = 0xae38f8u; esp -= 4; W32(esp, v); }
/* 8295c8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8295ceu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8295ce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8295d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8295d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8295d5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8295dau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8295da: guest_badaddr(0x8295da); return;
}

void f_829700(void) {
  LOAD_REGS();
L_829700: /* 829700: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 829701: mov ebp, esp */
  ebp = esp;
/* 829703: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 829705: push 0x9d30e0 */
  { uint32_t v = 0x9d30e0u; esp -= 4; W32(esp, v); }
/* 82970a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 829710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 829711: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 829718: sub esp, 0xe8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82971e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82971f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 829720: mov esi, ecx */
  esi = ecx;
/* 829722: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 829728: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82972a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 82972d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 829730: xor ebx, ebx */
  ebx = 0;
/* 829732: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 829733: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 829736: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 829739: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 82973c: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 82973f: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 829742: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 829745: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 829748: mov dword ptr [ebp - 0x18], 0x3dcccccd */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3dcccccdu);
/* 82974f: nop  */
L_829750: /* 829750: cmp dword ptr [ebp - 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 829753: jne 0x829b81 */
  if (!zf) goto L_829b81;
L_829759: /* 829759: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 82975f: test byte ptr [eax + 0x410], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x410u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 829766: je 0x829770 */
  if (zf) goto L_829770;
L_829768: /* 829768: fld dword ptr [eax + 0x3f4] */
  { double v = F32((uint32_t)(eax + 0x3f4u)); FPUSH(v); }
/* 82976e: jmp 0x829776 */
  goto L_829776;
L_829770: /* 829770: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_829776: /* 829776: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 829779: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82977a: fmul dword ptr [eax + 0x3cc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x3ccu)));
/* 829780: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 829781: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 829784: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 829786: fmul dword ptr [eax + 0x3c8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x3c8u)));
/* 82978c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82978e: lea edi, [esi + 0x17c] */
  edi = (uint32_t)(esi + 0x17cu);
/* 829794: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 829797: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82979a: fmul dword ptr [eax + 0x3c4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x3c4u)));
/* 8297a0: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 8297a6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8297a8: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8297ab: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 8297b1: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8297b4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8297b6: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8297b9: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8297bc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8297be: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8297c1: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8297c4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8297c6: fstp dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0); FPOP();
/* 8297cc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8297ce: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8297d1: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8297d3: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8297d6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8297d9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8297db: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 8297e1: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8297e4: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8297e7: fld dword ptr [ebp - 0xd0] */
  { double v = F32((uint32_t)(ebp + 0xffffff30u)); FPUSH(v); }
/* 8297ed: fadd dword ptr [ebp - 0xf4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff0cu)));
/* 8297f3: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 8297f9: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* 8297ff: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 829802: fst dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0);
/* 829808: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 82980e: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 829811: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 829817: fadd dword ptr [eax + 0x3c0] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x3c0u)));
/* 82981d: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 829820: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 829823: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 829824: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 829827: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82982a: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 82982d: fadd dword ptr [eax + 0x3bc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x3bcu)));
/* 829833: mov edx, edi */
  edx = edi;
/* 829835: mov ecx, esp */
  ecx = esp;
/* 829837: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 82983a: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 829840: fadd dword ptr [eax + 0x3b8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x3b8u)));
/* 829846: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 82984c: mov dword ptr [ebp - 0x80], ebx */
  W32((uint32_t)(ebp + 0xffffff80u), ebx);
/* 82984f: mov dword ptr [ebp - 0x7c], ebx */
  W32((uint32_t)(ebp + 0xffffff84u), ebx);
/* 829852: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 829858: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 82985f: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 829862: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 829869: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 82986c: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 829873: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 829876: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 82987d: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 829880: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 829887: fld dword ptr [ebp - 0xb8] */
  { double v = F32((uint32_t)(ebp + 0xffffff48u)); FPUSH(v); }
/* 82988d: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 829894: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 829897: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* 82989a: mov dword ptr [ebp - 0x5c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x3f800000u);
/* 8298a1: mov dword ptr [ebp - 0x58], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffa8u), 0xffffffffu);
/* 8298a8: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8298ab: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
/* 8298ae: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8298b1: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8298b4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8298b6: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8298b8: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8298ba: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 8298bd: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8298c0: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8298c3: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8298c6: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8298c9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8298cc: mov ecx, esp */
  ecx = esp;
/* 8298ce: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8298d0: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8298d3: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8298d6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8298d9: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8298dc: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8298e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8298e3: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x8298e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8298e9: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 8298ef: test byte ptr [eax + 0x410], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x410u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8298f6: jne 0x829b26 */
  if (!zf) goto L_829b26;
L_8298fc: /* 8298fc: fld dword ptr [esi + 0x41c] */
  { double v = F32((uint32_t)(esi + 0x41cu)); FPUSH(v); }
/* 829902: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 829908: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 82990b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82990d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 829910: jne 0x829949 */
  if (!zf) goto L_829949;
L_829912: /* 829912: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 829915: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82991b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82991d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82991f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 829921: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 829923: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 829926: mov eax, esp */
  eax = esp;
/* 829928: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 82992a: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 82992d: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 829930: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 829933: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 829934: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 82993b: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 82993e: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x829944u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 829944: jmp 0x829b2d */
  goto L_829b2d;
L_829949: /* 829949: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 82994c: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 829952: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 829954: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 829957: jp 0x829b2d */
  if (pf) goto L_829b2d;
L_82995d: /* 82995d: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 829960: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 829966: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 829968: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82996b: je 0x829b26 */
  if (zf) goto L_829b26;
L_829971: /* 829971: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 829974: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 829977: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 82997a: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 82997d: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 829980: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 829983: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 829986: mov dword ptr [ebp - 0xa0], eax */
  W32((uint32_t)(ebp + 0xffffff60u), eax);
/* 82998c: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 829992: mov dword ptr [ebp - 0xa4], edx */
  W32((uint32_t)(ebp + 0xffffff5cu), edx);
/* 829998: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82999a: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 82999d: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 8299a0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8299a2: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 8299a5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8299a7: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 8299aa: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8299ac: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8299af: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8299b1: fmul dword ptr [ebp - 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff94u)));
/* 8299b4: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 8299ba: fsubr dword ptr [ebp - 0x24] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffdcu))) - ST0;
/* 8299bd: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8299c0: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8299c3: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8299c6: fsub dword ptr [ebp - 0xe8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff18u)));
/* 8299cc: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 8299d2: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8299d8: fsub dword ptr [ebp - 0x5c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 8299db: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8299de: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8299e0: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8299e3: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8299e6: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8299e9: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8299ec: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 8299ef: fld dword ptr [ebp - 0xc4] */
  { double v = F32((uint32_t)(ebp + 0xffffff3cu)); FPUSH(v); }
/* 8299f5: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8299f8: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8299fb: fst dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0);
/* 8299fe: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 829a01: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 829a04: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 829a07: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 829a09: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 829a0b: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 829a0e: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 829a11: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 829a13: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 829a19: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 829a1b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 829a1d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 829a20: jne 0x829b2d */
  if (!zf) goto L_829b2d;
L_829a26: /* 829a26: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 829a2c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 829a2e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 829a30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 829a32: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 829a34: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 829a36: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 829a39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 829a3a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 829a3d: mov eax, esp */
  eax = esp;
/* 829a3f: mov ecx, edi */
  ecx = edi;
/* 829a41: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 829a43: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 829a45: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 829a48: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 829a4b: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 829a4e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 829a51: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 829a54: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 829a57: mov eax, esp */
  eax = esp;
/* 829a59: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 829a5b: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 829a5e: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 829a61: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 829a64: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 829a67: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 829a6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 829a6e: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x829a74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 829a74: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 829a77: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 829a7d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 829a7f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 829a82: jp 0x829b2d */
  if (pf) goto L_829b2d;
L_829a88: /* 829a88: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 829a8b: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 829a91: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 829a93: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 829a96: jne 0x829a9f */
  if (!zf) goto L_829a9f;
L_829a98: /* 829a98: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
L_829a9f: /* 829a9f: lea edx, [ebp - 0xdc] */
  edx = (uint32_t)(ebp + 0xffffff24u);
/* 829aa5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 829aa6: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 829aa9: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x829aafu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 829aaf: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 829ab2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 829ab3: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 829ab9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 829aba: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* 829abd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 829abe: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 829ac1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 829ac2: lea ecx, [ebp - 0xdc] */
  ecx = (uint32_t)(ebp + 0xffffff24u);
/* 829ac8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 829ac9: mov ecx, esi */
  ecx = esi;
/* 829acb: call 0x6c6163 */
  esp -= 4; W32(esp, 0x829ad0u); SPILL(); f_6c6163(); if (g_unwind) return; RELOAD();
/* 829ad0: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 829ad2: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 829ad8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 829ada: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 829adc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 829ade: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 829ae0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 829ae2: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 829ae5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 829ae6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 829ae9: mov eax, esp */
  eax = esp;
/* 829aeb: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 829aed: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 829af0: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 829af3: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 829af6: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 829af9: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 829afc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 829aff: mov eax, esp */
  eax = esp;
/* 829b01: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 829b03: mov edi, dword ptr [ebp - 0x4c] */
  edi = R32((uint32_t)(ebp + 0xffffffb4u));
/* 829b06: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 829b09: mov edi, dword ptr [ebp - 0x48] */
  edi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 829b0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 829b0d: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 829b10: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x829b16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 829b16: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 829b19: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 829b1f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 829b21: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 829b24: jne 0x829b2d */
  if (!zf) goto L_829b2d;
L_829b26: /* 829b26: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
L_829b2d: /* 829b2d: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 829b30: mov al, byte ptr [esi + 0xc8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xc8u))) & 0xffu);
/* 829b36: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 829b37: xor ebx, ebx */
  ebx = 0;
/* 829b39: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 829b3b: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 829b3e: je 0x829b4b */
  if (zf) goto L_829b4b;
L_829b40: /* 829b40: mov eax, ecx */
  eax = ecx;
/* 829b42: cmp eax, 0x23 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x23u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 829b45: jle 0x829750 */
  if ((zf || sf != of)) goto L_829750;
L_829b4b: /* 829b4b: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 829b4e: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 829b54: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 829b56: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 829b57: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 829b59: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 829b5b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 829b5e: mov eax, esp */
  eax = esp;
/* 829b60: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 829b62: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 829b65: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 829b68: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 829b6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 829b6c: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 829b6f: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x829b75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 829b75: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 829b7c: jmp 0x829750 */
  goto L_829750;
L_829b81: /* 829b81: push 0xb60d38 */
  { uint32_t v = 0xb60d38u; esp -= 4; W32(esp, v); }
/* 829b86: mov ecx, esi */
  ecx = esi;
/* 829b88: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x829b8eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 829b8e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 829b90: je 0x829bb8 */
  if (zf) goto L_829bb8;
L_829b92: /* 829b92: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 829b95: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 829b9b: fld dword ptr [esi + 0x598] */
  { double v = F32((uint32_t)(esi + 0x598u)); FPUSH(v); }
/* 829ba1: fst dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0);
/* 829ba4: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 829ba6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 829ba8: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 829bab: jne 0x829bb2 */
  if (!zf) goto L_829bb2;
L_829bad: /* 829bad: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 829baf: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
L_829bb2: /* 829bb2: fstp dword ptr [esi + 0x598] */
  WF32((uint32_t)(esi + 0x598u), ST0); FPOP();
L_829bb8: /* 829bb8: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 829bbe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 829bc0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 829bc3: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 829bc6: mov dword ptr [ebp - 0x98], eax */
  W32((uint32_t)(ebp + 0xffffff68u), eax);
/* 829bcc: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 829bcf: mov dword ptr [ebp - 0x9c], edx */
  W32((uint32_t)(ebp + 0xffffff64u), edx);
/* 829bd5: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 829bdb: jne 0x829c07 */
  if (!zf) goto L_829c07;
L_829bdd: /* 829bdd: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 829be0: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 829be6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 829be8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 829be9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 829beb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 829bed: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 829bf0: mov eax, esp */
  eax = esp;
/* 829bf2: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 829bf4: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 829bf7: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 829bfa: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 829bfd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 829bfe: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 829c01: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x829c07u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_829c07: /* 829c07: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 829c0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 829c0b: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 829c11: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x829c17u); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 829c17: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 829c1a: xor edx, edx */
  edx = 0;
/* 829c1c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 829c1e: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 829c21: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 829c22: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 829c23: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 829c2a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 829c2b: mov eax, edx */
  eax = edx;
/* 829c2d: mov esp, ebp */
  esp = ebp;
/* 829c2f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 829c30: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_829c33(void) {
  LOAD_REGS();
L_829c33: /* 829c33: mov eax, dword ptr [ebp - 0xac] */
  eax = R32((uint32_t)(ebp + 0xffffff54u));
/* 829c39: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 829c3e: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 829c44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 829c45: mov dword ptr [ebp - 0x90], eax */
  W32((uint32_t)(ebp + 0xffffff70u), eax);
/* 829c4b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x829c50u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_829c50(); return;
}

void f_829c50(void) {
  LOAD_REGS();
L_829c50: /* 829c50: push 0xa152ec */
  { uint32_t v = 0xa152ecu; esp -= 4; W32(esp, v); }
/* 829c55: push 0xae3940 */
  { uint32_t v = 0xae3940u; esp -= 4; W32(esp, v); }
/* 829c5a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x829c60u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 829c60: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 829c63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 829c65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 829c67: call 0x99caf8 */
  esp -= 4; W32(esp, 0x829c6cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_829c6c: guest_badaddr(0x829c6c); return;
}

void f_829dd0(void) {
  LOAD_REGS();
L_829dd0: /* 829dd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 829dd1: mov ebp, esp */
  ebp = esp;
/* 829dd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 829dd5: push 0x9d30f0 */
  { uint32_t v = 0x9d30f0u; esp -= 4; W32(esp, v); }
/* 829dda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 829de0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 829de1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 829de8: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 829deb: xor eax, eax */
  eax = 0;
/* 829ded: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 829dee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 829def: mov esi, ecx */
  esi = ecx;
/* 829df1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 829df2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 829df5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 829df6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 829df7: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 829dfd: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 829e00: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 829e02: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 829e05: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 829e08: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 829e0b: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 829e0e: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 829e11: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 829e14: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 829e17: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 829e1a: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 829e1d: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 829e20: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 829e23: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 829e26: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 829e29: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 829e2c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 829e2f: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 829e32: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 829e35: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 829e3b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 829e3d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 829e3f: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 829e42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 829e43: mov dword ptr [ebp - 0x44], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x3f800000u);
/* 829e4a: mov dword ptr [ebp - 0x40], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffc0u), 0xffffffffu);
/* 829e51: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 829e54: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 829e56: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 829e59: lea edi, [esi + 0x17c] */
  edi = (uint32_t)(esi + 0x17cu);
/* 829e5f: mov eax, esp */
  eax = esp;
/* 829e61: mov ecx, edi */
  ecx = edi;
/* 829e63: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 829e65: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 829e67: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 829e6a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 829e6d: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 829e70: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 829e73: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 829e76: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 829e79: mov eax, esp */
  eax = esp;
/* 829e7b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 829e7d: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 829e80: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 829e83: mov dword ptr [ebp - 0x30], 0x42740000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x42740000u);
/* 829e8a: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 829e8d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 829e90: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 829e96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 829e97: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x829e9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 829e9d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 829ea0: push 0x40833333 */
  { uint32_t v = 0x40833333u; esp -= 4; W32(esp, v); }
/* 829ea5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 829ea7: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 829eaa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 829eab: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 829eae: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 829eb1: mov eax, esp */
  eax = esp;
/* 829eb3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 829eb5: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 829eb8: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 829ebb: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 829ebe: mov ecx, esi */
  ecx = esi;
/* 829ec0: call 0x6c750e */
  esp -= 4; W32(esp, 0x829ec5u); SPILL(); f_6c750e(); if (g_unwind) return; RELOAD();
/* 829ec5: mov edx, dword ptr [esi + 0x178] */
  edx = R32((uint32_t)(esi + 0x178u));
/* 829ecb: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 829ed1: mov ebx, eax */
  ebx = eax;
/* 829ed3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 829ed5: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 829ed8: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 829edb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 829edd: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 829edf: je 0x829f84 */
  if (zf) goto L_829f84;
L_829ee5: /* 829ee5: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 829ee7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 829ee9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 829eeb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 829eed: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 829ef0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 829ef1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 829ef4: mov edx, esp */
  edx = esp;
/* 829ef6: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 829ef8: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 829efb: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 829efe: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 829f01: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 829f04: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 829f07: mov edx, esp */
  edx = esp;
/* 829f09: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 829f10: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 829f13: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 829f15: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 829f1c: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 829f1f: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 829f22: mov dword ptr [ebp + 0x10], 0xc2c00000 */
  W32((uint32_t)(ebp + 0x10u), 0xc2c00000u);
/* 829f29: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 829f2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 829f2d: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 829f30: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x829f36u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 829f36: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 829f3c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 829f3f: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 829f42: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 829f45: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 829f48: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 829f4b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 829f4e: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 829f50: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 829f53: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 829f56: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 829f59: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x829f5fu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 829f5f: fst dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0);
/* 829f62: fcomp dword ptr [0xa15348] */
  fpu_com(ST0, F32((uint32_t)(0xa15348u)));
  FPOP();
/* 829f68: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 829f6a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 829f6d: jp 0x829fba */
  if (pf) goto L_829fba;
L_829f6f: /* 829f6f: xor eax, eax */
  eax = 0;
/* 829f71: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 829f74: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 829f7b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 829f7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 829f7d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 829f7e: mov esp, ebp */
  esp = ebp;
/* 829f80: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 829f81: ret 0xc */
  esp += 16; SPILL(); return;
L_829f84: /* 829f84: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 829f87: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 829f89: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 829f8b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 829f8e: mov edx, esp */
  edx = esp;
/* 829f90: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 829f92: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 829f95: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 829f98: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 829f9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 829f9c: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 829f9f: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x829fa5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 829fa5: mov eax, ebx */
  eax = ebx;
/* 829fa7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 829faa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 829fb1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 829fb2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 829fb3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 829fb4: mov esp, ebp */
  esp = ebp;
/* 829fb6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 829fb7: ret 0xc */
  esp += 16; SPILL(); return;
L_829fba: /* 829fba: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 829fbd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 829fc0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 829fc1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 829fc2: mov eax, ebx */
  eax = ebx;
/* 829fc4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 829fcb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 829fcc: mov esp, ebp */
  esp = ebp;
/* 829fce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 829fcf: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_829fd2(void) {
  LOAD_REGS();
L_829fd2: /* 829fd2: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 829fd5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 829fda: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 829fdd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 829fde: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 829fe1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x829fe6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_829fe6(); return;
}

void f_829fe6(void) {
  LOAD_REGS();
L_829fe6: /* 829fe6: push 0xa1531c */
  { uint32_t v = 0xa1531cu; esp -= 4; W32(esp, v); }
/* 829feb: push 0xae3948 */
  { uint32_t v = 0xae3948u; esp -= 4; W32(esp, v); }
/* 829ff0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x829ff6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 829ff6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 829ff9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 829ffb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 829ffd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82a002u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_82a002: guest_badaddr(0x82a002); return;
}

void f_82a0a0(void) {
  LOAD_REGS();
L_82a0a0: /* 82a0a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 82a0a1: mov ebp, esp */
  ebp = esp;
/* 82a0a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 82a0a5: push 0x9d3100 */
  { uint32_t v = 0x9d3100u; esp -= 4; W32(esp, v); }
/* 82a0aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 82a0b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82a0b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 82a0b8: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82a0bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82a0bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82a0bd: mov esi, ecx */
  esi = ecx;
/* 82a0bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82a0c0: lea edi, [esi + 0x170] */
  edi = (uint32_t)(esi + 0x170u);
/* 82a0c6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 82a0c9: mov eax, edi */
  eax = edi;
/* 82a0cb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82a0cd: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 82a0d0: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82a0d3: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 82a0d6: mov ecx, dword ptr [esi + 0x3f8] */
  ecx = R32((uint32_t)(esi + 0x3f8u));
/* 82a0dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82a0de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82a0df: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 82a0e2: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 82a0e5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82a0e8: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 82a0eb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 82a0ee: mov edx, esp */
  edx = esp;
/* 82a0f0: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 82a0f2: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 82a0f5: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 82a0f8: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 82a0fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82a0fc: mov ecx, esi */
  ecx = esi;
/* 82a0fe: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 82a105: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 82a108: call 0x6cb2fd */
  esp -= 4; W32(esp, 0x82a10du); SPILL(); f_6cb2fd(); if (g_unwind) return; RELOAD();
/* 82a10d: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 82a110: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 82a113: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82a115: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82a118: mov edx, esp */
  edx = esp;
/* 82a11a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 82a11c: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 82a11f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 82a122: mov ecx, esi */
  ecx = esi;
/* 82a124: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 82a127: call 0x6c24a5 */
  esp -= 4; W32(esp, 0x82a12cu); SPILL(); f_6c24a5(); if (g_unwind) return; RELOAD();
/* 82a12c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82a12e: je 0x82a1c6 */
  if (zf) goto L_82a1c6;
L_82a134: /* 82a134: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 82a136: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82a137: mov ecx, esi */
  ecx = esi;
/* 82a139: call dword ptr [edx + 0x1a4] */
  { uint32_t t = R32((uint32_t)(edx + 0x1a4u)); esp -= 4; W32(esp, 0x82a13fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82a13f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82a141: jne 0x82a1d9 */
  if (!zf) goto L_82a1d9;
L_82a147: /* 82a147: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 82a14d: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82a150: jne 0x82a161 */
  if (!zf) goto L_82a161;
L_82a152: /* 82a152: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 82a158: test byte ptr [eax + 0x410], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x410u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82a15f: jne 0x82a1d9 */
  if (!zf) goto L_82a1d9;
L_82a161: /* 82a161: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82a164: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 82a167: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 82a16a: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 82a16d: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 82a170: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 82a173: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 82a176: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 82a179: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 82a17c: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 82a17f: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82a182: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 82a185: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 82a188: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 82a18b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 82a18e: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 82a190: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 82a193: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 82a196: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 82a199: call dword ptr [0xcfa8a0] */
  esp -= 4; W32(esp, 0x82a19fu); SPILL(); f_4e23dd(); if (g_unwind) return; /* Core!?Size2D@FVector@@QBEMXZ */ RELOAD();
/* 82a19f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 82a1a2: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 82a1a5: call dword ptr [0xcfa8a0] */
  esp -= 4; W32(esp, 0x82a1abu); SPILL(); f_4e23dd(); if (g_unwind) return; /* Core!?Size2D@FVector@@QBEMXZ */ RELOAD();
/* 82a1ab: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 82a1ae: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82a1b1: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 82a1b4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 82a1ba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82a1bc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82a1bf: jne 0x82a1d9 */
  if (!zf) goto L_82a1d9;
L_82a1c1: /* 82a1c1: mov eax, 1 */
  eax = 0x1u;
L_82a1c6: /* 82a1c6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82a1c9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82a1d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82a1d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82a1d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82a1d3: mov esp, ebp */
  esp = ebp;
/* 82a1d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82a1d6: ret 0xc */
  esp += 16; SPILL(); return;
L_82a1d9: /* 82a1d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82a1dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82a1dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82a1de: xor eax, eax */
  eax = 0;
/* 82a1e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82a1e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82a1e8: mov esp, ebp */
  esp = ebp;
/* 82a1ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82a1eb: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_82a1ee(void) {
  LOAD_REGS();
L_82a1ee: /* 82a1ee: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82a1f1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82a1f6: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 82a1f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82a1fa: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 82a1fd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82a202u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82a202(); return;
}

void f_82a202(void) {
  LOAD_REGS();
L_82a202: /* 82a202: push 0xa1534c */
  { uint32_t v = 0xa1534cu; esp -= 4; W32(esp, v); }
/* 82a207: push 0xae3960 */
  { uint32_t v = 0xae3960u; esp -= 4; W32(esp, v); }
/* 82a20c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x82a212u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 82a212: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82a215: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82a217: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82a219: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82a21eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_82a21e: guest_badaddr(0x82a21e); return;
}

void f_82a280(void) {
  LOAD_REGS();
L_82a280: /* 82a280: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 82a281: mov ebp, esp */
  ebp = esp;
/* 82a283: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 82a285: push 0x9d3110 */
  { uint32_t v = 0x9d3110u; esp -= 4; W32(esp, v); }
/* 82a28a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 82a290: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82a291: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 82a298: sub esp, 0xbc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82a29e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82a29f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82a2a0: mov esi, ecx */
  esi = ecx;
/* 82a2a2: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 82a2a5: xor ebx, ebx */
  ebx = 0;
/* 82a2a7: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82a2a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82a2aa: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 82a2ad: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 82a2b0: je 0x82ae32 */
  if (zf) goto L_82ae32;
L_82a2b6: /* 82a2b6: cmp dword ptr [esi + 0x33c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x33cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82a2bc: je 0x82ae32 */
  if (zf) goto L_82ae32;
L_82a2c2: /* 82a2c2: cmp al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82a2c4: je 0x82adc9 */
  if (zf) goto L_82adc9;
L_82a2ca: /* 82a2ca: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82a2cc: je 0x82adc9 */
  if (zf) goto L_82adc9;
L_82a2d2: /* 82a2d2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82a2d3: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 82a2d8: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 82a2de: call 0x6c6a46 */
  esp -= 4; W32(esp, 0x82a2e3u); SPILL(); f_6c6a46(); if (g_unwind) return; RELOAD();
/* 82a2e3: fld dword ptr [esi + 0x444] */
  { double v = F32((uint32_t)(esi + 0x444u)); FPUSH(v); }
/* 82a2e9: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 82a2ef: mov eax, dword ptr [esi + 0x170] */
  eax = R32((uint32_t)(esi + 0x170u));
/* 82a2f5: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 82a2fb: lea edi, [esi + 0x170] */
  edi = (uint32_t)(esi + 0x170u);
/* 82a301: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 82a304: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 82a307: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 82a30d: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 82a310: fld dword ptr [eax + 0x37c] */
  { double v = F32((uint32_t)(eax + 0x37cu)); FPUSH(v); }
/* 82a316: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 82a319: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 82a31c: fld dword ptr [eax + 0x378] */
  { double v = F32((uint32_t)(eax + 0x378u)); FPUSH(v); }
/* 82a322: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 82a325: fld dword ptr [eax + 0x374] */
  { double v = F32((uint32_t)(eax + 0x374u)); FPUSH(v); }
/* 82a32b: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 82a32e: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 82a330: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 82a333: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 82a336: mov eax, dword ptr [eax + 0x370] */
  eax = R32((uint32_t)(eax + 0x370u));
/* 82a33c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82a33e: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 82a344: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 82a34a: fadd dword ptr [0xa14ac4] */
  ST0 = ST0 + (F32((uint32_t)(0xa14ac4u)));
/* 82a350: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 82a353: je 0x82a364 */
  if (zf) goto L_82a364;
L_82a355: /* 82a355: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82a357: mov ecx, eax */
  ecx = eax;
/* 82a359: call dword ptr [edx + 0x158] */
  { uint32_t t = R32((uint32_t)(edx + 0x158u)); esp -= 4; W32(esp, 0x82a35fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82a35f: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 82a362: jmp 0x82a367 */
  goto L_82a367;
L_82a364: /* 82a364: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
L_82a367: /* 82a367: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 82a36a: fcomp dword ptr [esi + 0x2d8] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x2d8u)));
  FPOP();
/* 82a370: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82a372: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82a375: jp 0x82a3ac */
  if (pf) goto L_82a3ac;
L_82a377: /* 82a377: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 82a37d: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 82a380: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 82a383: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 82a386: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 82a389: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82a38b: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 82a38e: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 82a391: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82a393: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 82a395: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 82a397: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 82a399: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 82a39f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82a3a1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82a3a3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82a3a6: jnp 0x82ae32 */
  if (!pf) goto L_82ae32;
L_82a3ac: /* 82a3ac: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 82a3af: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x82a3b5u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 82a3b5: fst dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0);
/* 82a3b8: fst dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0);
/* 82a3bb: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 82a3c1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82a3c3: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82a3c6: jnp 0x82ae32 */
  if (!pf) goto L_82ae32;
L_82a3cc: /* 82a3cc: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 82a3cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82a3d0: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 82a3d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82a3d4: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 82a3d7: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x82a3ddu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 82a3dd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82a3df: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 82a3e2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 82a3e5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82a3e8: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 82a3eb: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 82a3ee: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82a3f4: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 82a3f7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 82a3f9: mov edx, esp */
  edx = esp;
/* 82a3fb: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 82a402: mov ebx, dword ptr [ebp - 0x5c] */
  ebx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 82a405: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 82a407: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 82a40e: mov ebx, dword ptr [ebp - 0x58] */
  ebx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 82a411: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 82a414: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 82a41b: mov ebx, dword ptr [ebp - 0x54] */
  ebx = R32((uint32_t)(ebp + 0xffffffacu));
/* 82a41e: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 82a421: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 82a426: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 82a429: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82a42a: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 82a430: add edx, 0x374 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x374u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 82a436: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82a437: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82a438: lea edx, [ebp - 0xc0] */
  edx = (uint32_t)(ebp + 0xffffff40u);
/* 82a43e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82a43f: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x82a445u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82a445: mov eax, dword ptr [ebp - 0xbc] */
  eax = R32((uint32_t)(ebp + 0xffffff44u));
/* 82a44b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82a44d: je 0x82a460 */
  if (zf) goto L_82a460;
L_82a44f: /* 82a44f: cmp eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82a452: je 0x82a460 */
  if (zf) goto L_82a460;
L_82a454: /* 82a454: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82a457: fadd dword ptr [esi + 0x2d4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x2d4u)));
/* 82a45d: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
L_82a460: /* 82a460: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 82a463: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82a466: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 82a46c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 82a46f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82a472: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 82a479: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 82a47c: mov ebx, dword ptr [ebp - 0x74] */
  ebx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 82a47f: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 82a482: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 82a485: fmul dword ptr [0xa151e4] */
  ST0 = ST0 * (F32((uint32_t)(0xa151e4u)));
/* 82a48b: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 82a492: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 82a495: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 82a49c: fmul dword ptr [0xa151e4] */
  ST0 = ST0 * (F32((uint32_t)(0xa151e4u)));
/* 82a4a2: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 82a4a5: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 82a4ab: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82a4b1: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 82a4b7: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 82a4be: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 82a4c0: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 82a4c3: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 82a4c6: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 82a4c8: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 82a4ca: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 82a4cd: mov eax, esp */
  eax = esp;
/* 82a4cf: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 82a4d1: mov ebx, dword ptr [ebp - 0x70] */
  ebx = R32((uint32_t)(ebp + 0xffffff90u));
/* 82a4d4: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 82a4d7: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 82a4da: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 82a4dc: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 82a4df: mov ebx, dword ptr [ebp - 0x6c] */
  ebx = R32((uint32_t)(ebp + 0xffffff94u));
/* 82a4e2: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 82a4e5: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 82a4e8: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 82a4ed: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 82a4f0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82a4f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82a4f3: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 82a4f6: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 82a4fc: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 82a4ff: add eax, 0x374 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x374u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 82a504: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 82a507: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82a508: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 82a50b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82a50c: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 82a50f: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 82a515: fadd dword ptr [ebp - 0x80] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff80u)));
/* 82a518: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 82a51b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82a51c: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 82a51f: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 82a522: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 82a525: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82a527: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82a52du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82a52d: mov eax, dword ptr [ebp - 0xbc] */
  eax = R32((uint32_t)(ebp + 0xffffff44u));
/* 82a533: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82a535: je 0x82a60b */
  if (zf) goto L_82a60b;
L_82a53b: /* 82a53b: cmp eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82a53e: je 0x82a5fe */
  if (zf) goto L_82a5fe;
L_82a544: /* 82a544: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 82a547: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82a54d: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 82a553: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82a556: mov eax, esp */
  eax = esp;
/* 82a558: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 82a55f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 82a562: mov ebx, dword ptr [ebp - 0x74] */
  ebx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 82a565: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 82a568: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 82a56a: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 82a570: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 82a577: mov ebx, dword ptr [ebp - 0x70] */
  ebx = R32((uint32_t)(ebp + 0xffffff90u));
/* 82a57a: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 82a57d: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 82a580: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 82a587: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 82a58a: mov ebx, dword ptr [ebp - 0x6c] */
  ebx = R32((uint32_t)(ebp + 0xffffff94u));
/* 82a58d: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 82a593: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 82a596: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 82a59b: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 82a59e: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 82a5a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82a5a2: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 82a5a5: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 82a5ab: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 82a5b1: add eax, 0x374 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x374u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 82a5b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82a5b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82a5b8: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 82a5bb: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 82a5c1: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 82a5c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82a5c5: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 82a5cb: mov dword ptr [ebp - 0x3c], 1 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x1u);
/* 82a5d2: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 82a5d5: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 82a5d8: fadd dword ptr [ebp - 0x78] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff88u)));
/* 82a5db: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 82a5de: fadd dword ptr [ebp - 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff84u)));
/* 82a5e1: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 82a5e4: fadd dword ptr [ebp - 0x80] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff80u)));
/* 82a5e7: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 82a5ea: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 82a5ed: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 82a5f0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82a5f2: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82a5f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82a5f8: mov eax, dword ptr [ebp - 0xbc] */
  eax = R32((uint32_t)(ebp + 0xffffff44u));
L_82a5fe: /* 82a5fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82a600: je 0x82a60b */
  if (zf) goto L_82a60b;
L_82a602: /* 82a602: cmp eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82a605: jne 0x82ae32 */
  if (!zf) goto L_82ae32;
L_82a60b: /* 82a60b: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 82a60e: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 82a611: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82a613: fmul dword ptr [0xa151e0] */
  ST0 = ST0 * (F32((uint32_t)(0xa151e0u)));
/* 82a619: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 82a61c: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 82a61f: fmul dword ptr [0xa151e0] */
  ST0 = ST0 * (F32((uint32_t)(0xa151e0u)));
/* 82a625: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 82a628: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 82a62b: fmul dword ptr [0xa151e0] */
  ST0 = ST0 * (F32((uint32_t)(0xa151e0u)));
/* 82a631: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 82a634: jne 0x82a9e0 */
  if (!zf) goto L_82a9e0;
L_82a63a: /* 82a63a: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 82a640: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82a643: je 0x82a9e0 */
  if (zf) goto L_82a9e0;
L_82a649: /* 82a649: test eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82a64e: mov dword ptr [ebp - 0x2c], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x40000000u);
/* 82a655: jne 0x82a65e */
  if (!zf) goto L_82a65e;
L_82a657: /* 82a657: mov dword ptr [ebp - 0x2c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x3f800000u);
L_82a65e: /* 82a65e: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 82a661: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 82a663: fmul dword ptr [0xa153b0] */
  ST0 = ST0 * (F32((uint32_t)(0xa153b0u)));
/* 82a669: mov ebx, dword ptr [esi + 0xb4] */
  ebx = R32((uint32_t)(esi + 0xb4u));
/* 82a66f: lea edx, [ebp - 0x90] */
  edx = (uint32_t)(ebp + 0xffffff70u);
/* 82a675: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 82a678: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 82a67b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82a67c: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 82a67f: mov ecx, esi */
  ecx = esi;
/* 82a681: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 82a684: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 82a687: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 82a68a: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 82a68d: call 0x6cbe92 */
  esp -= 4; W32(esp, 0x82a692u); SPILL(); f_6cbe92(); if (g_unwind) return; RELOAD();
/* 82a692: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 82a694: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 82a696: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82a699: mov ecx, esp */
  ecx = esp;
/* 82a69b: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 82a69d: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 82a6a0: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82a6a3: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 82a6a6: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 82a6ab: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 82a6ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82a6af: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 82a6b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82a6b3: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82a6b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82a6ba: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 82a6c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82a6c1: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82a6c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82a6c7: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 82a6cd: fdiv dword ptr [ebp - 0x2c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 82a6d0: mov ecx, dword ptr [ebp - 0x9c] */
  ecx = R32((uint32_t)(ebp + 0xffffff64u));
/* 82a6d6: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 82a6dc: fst dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0);
/* 82a6df: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 82a6e5: fcomp dword ptr [ebp - 0x9c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffff64u)));
  FPOP();
/* 82a6eb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82a6ed: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82a6f0: jp 0x82a9e0 */
  if (pf) goto L_82a9e0;
L_82a6f6: /* 82a6f6: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 82a6f9: mov ebx, dword ptr [esi + 0xb4] */
  ebx = R32((uint32_t)(esi + 0xb4u));
/* 82a6ff: fmul dword ptr [ebp - 0x9c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff64u)));
/* 82a705: lea edx, [ebp - 0x90] */
  edx = (uint32_t)(ebp + 0xffffff70u);
/* 82a70b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82a70c: mov ecx, esi */
  ecx = esi;
/* 82a70e: fst dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0);
/* 82a711: fld dword ptr [ebp - 0x9c] */
  { double v = F32((uint32_t)(ebp + 0xffffff64u)); FPUSH(v); }
/* 82a717: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 82a71d: fst dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0);
/* 82a720: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 82a723: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 82a726: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 82a729: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 82a72c: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 82a72f: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 82a732: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 82a734: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 82a737: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 82a73a: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 82a73d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 82a73f: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 82a742: fst dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0);
/* 82a745: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 82a748: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 82a74b: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 82a74e: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 82a751: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 82a754: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 82a757: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 82a759: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 82a75c: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 82a75f: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 82a762: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 82a765: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 82a768: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 82a76b: fadd dword ptr [ebp - 0x74] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 82a76e: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 82a771: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 82a774: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 82a777: call 0x6cbe92 */
  esp -= 4; W32(esp, 0x82a77cu); SPILL(); f_6cbe92(); if (g_unwind) return; RELOAD();
/* 82a77c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 82a77e: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 82a780: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82a783: mov ecx, esp */
  ecx = esp;
/* 82a785: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 82a787: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 82a78a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82a78d: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 82a790: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 82a793: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 82a798: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 82a79b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82a79c: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 82a79f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82a7a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82a7a1: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 82a7a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82a7a8: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82a7ae: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82a7b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82a7b4: fld dword ptr [ebp - 0x9c] */
  { double v = F32((uint32_t)(ebp + 0xffffff64u)); FPUSH(v); }
/* 82a7ba: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82a7c0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82a7c2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82a7c5: jp 0x82a888 */
  if (pf) goto L_82a888;
L_82a7cb: /* 82a7cb: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 82a7ce: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82a7d4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82a7d6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82a7d9: jne 0x82a888 */
  if (!zf) goto L_82a888;
L_82a7df: /* 82a7df: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 82a7e5: fcomp dword ptr [ebp - 0x60] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa0u)));
  FPOP();
/* 82a7e8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82a7ea: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82a7ed: jne 0x82a888 */
  if (!zf) goto L_82a888;
L_82a7f3: /* 82a7f3: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 82a7f6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 82a7f9: fadd dword ptr [0xa153b0] */
  ST0 = ST0 + (F32((uint32_t)(0xa153b0u)));
/* 82a7ff: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 82a801: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 82a804: mov ebx, dword ptr [esi + 0xb4] */
  ebx = R32((uint32_t)(esi + 0xb4u));
/* 82a80a: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 82a80d: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 82a813: mov ecx, edx */
  ecx = edx;
/* 82a815: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 82a818: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 82a81b: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 82a81e: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 82a821: fadd dword ptr [0xa153b0] */
  ST0 = ST0 + (F32((uint32_t)(0xa153b0u)));
/* 82a827: lea edx, [ebp - 0x90] */
  edx = (uint32_t)(ebp + 0xffffff70u);
/* 82a82d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82a82e: mov ecx, esi */
  ecx = esi;
/* 82a830: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 82a833: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 82a839: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 82a83c: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 82a83f: fadd dword ptr [ebp - 0x74] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 82a842: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 82a845: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 82a848: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 82a84b: call 0x6cbe92 */
  esp -= 4; W32(esp, 0x82a850u); SPILL(); f_6cbe92(); if (g_unwind) return; RELOAD();
/* 82a850: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 82a852: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 82a854: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82a857: mov ecx, esp */
  ecx = esp;
/* 82a859: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 82a85b: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 82a85e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82a861: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 82a864: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 82a867: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 82a86c: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 82a86f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82a870: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 82a873: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82a874: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82a875: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 82a87b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82a87c: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82a882: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82a888u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_82a888: /* 82a888: fld dword ptr [ebp - 0x9c] */
  { double v = F32((uint32_t)(ebp + 0xffffff64u)); FPUSH(v); }
/* 82a88e: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82a894: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82a896: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82a899: jp 0x82a9e0 */
  if (pf) goto L_82a9e0;
L_82a89f: /* 82a89f: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 82a8a5: fld dword ptr [eax + 0x37c] */
  { double v = F32((uint32_t)(eax + 0x37cu)); FPUSH(v); }
/* 82a8ab: add eax, 0x374 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x374u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 82a8b0: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 82a8b3: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 82a8b6: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 82a8b9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 82a8bb: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 82a8bd: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 82a8c0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 82a8c3: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 82a8c6: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 82a8c9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 82a8cc: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 82a8cf: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 82a8d2: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 82a8d5: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 82a8d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82a8d9: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 82a8dc: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 82a8df: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 82a8e6: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x82a8ecu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 82a8ec: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82a8ee: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 82a8f1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 82a8f4: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 82a8f7: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82a8fa: mov edx, dword ptr [esi + 0x3f8] */
  edx = R32((uint32_t)(esi + 0x3f8u));
/* 82a900: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 82a903: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82a904: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 82a907: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82a908: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 82a90b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82a90c: call 0x6cb802 */
  esp -= 4; W32(esp, 0x82a911u); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 82a911: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82a913: lea ecx, [esi + 0x188] */
  ecx = (uint32_t)(esi + 0x188u);
/* 82a919: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82a91b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 82a91e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 82a921: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82a924: mov edx, dword ptr [esi + 0x408] */
  edx = R32((uint32_t)(esi + 0x408u));
/* 82a92a: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 82a92d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 82a930: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82a931: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82a932: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 82a935: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82a936: call 0x6cb802 */
  esp -= 4; W32(esp, 0x82a93bu); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 82a93b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82a93d: lea ecx, [esi + 0x194] */
  ecx = (uint32_t)(esi + 0x194u);
/* 82a943: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82a945: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 82a948: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 82a94b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82a94e: mov edx, dword ptr [esi + 0x390] */
  edx = R32((uint32_t)(esi + 0x390u));
/* 82a954: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 82a957: mov ecx, dword ptr [esi + 0x40c] */
  ecx = R32((uint32_t)(esi + 0x40cu));
/* 82a95d: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 82a963: mov dword ptr [esi + 0x190], ecx */
  W32((uint32_t)(esi + 0x190u), ecx);
/* 82a969: or edx, 0x100000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 82a96f: mov dword ptr [esi + 0x390], edx */
  W32((uint32_t)(esi + 0x390u), edx);
/* 82a975: or dword ptr [eax + 0x350], 0x1000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x350u))); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x350u), r);
  }
/* 82a97f: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 82a985: or dword ptr [eax + 0x350], 0x400 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x350u))); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x350u), r);
  }
/* 82a98f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 82a991: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82a994: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 82a99b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 82a99e: mov eax, esp */
  eax = esp;
/* 82a9a0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 82a9a2: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 82a9a9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 82a9ac: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 82a9af: mov dword ptr [ebp + 0x10], 0x3f800000 */
  W32((uint32_t)(ebp + 0x10u), 0x3f800000u);
/* 82a9b6: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 82a9b9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 82a9bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82a9be: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 82a9c0: mov ecx, esi */
  ecx = esi;
/* 82a9c2: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x82a9c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82a9c8: mov eax, 1 */
  eax = 0x1u;
/* 82a9cd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82a9d0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82a9d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82a9d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82a9d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82a9da: mov esp, ebp */
  esp = ebp;
/* 82a9dc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82a9dd: ret 0xc */
  esp += 16; SPILL(); return;
L_82a9e0: /* 82a9e0: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 82a9e3: mov ebx, dword ptr [esi + 0xb4] */
  ebx = R32((uint32_t)(esi + 0xb4u));
/* 82a9e9: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 82a9ec: lea edx, [ebp - 0x90] */
  edx = (uint32_t)(ebp + 0xffffff70u);
/* 82a9f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82a9f3: mov ecx, esi */
  ecx = esi;
/* 82a9f5: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 82a9f8: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82a9fb: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 82a9fe: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 82aa01: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82aa04: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 82aa0a: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 82aa0d: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 82aa10: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 82aa13: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82aa16: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 82aa19: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 82aa1c: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 82aa1e: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 82aa21: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 82aa24: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 82aa27: call 0x6cbe92 */
  esp -= 4; W32(esp, 0x82aa2cu); SPILL(); f_6cbe92(); if (g_unwind) return; RELOAD();
/* 82aa2c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 82aa2e: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 82aa30: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82aa33: mov ecx, esp */
  ecx = esp;
/* 82aa35: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 82aa37: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 82aa3a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82aa3d: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 82aa40: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 82aa45: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 82aa48: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82aa49: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 82aa4c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82aa4d: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82aa53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82aa54: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 82aa5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82aa5b: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82aa61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82aa61: fld dword ptr [ebp - 0x9c] */
  { double v = F32((uint32_t)(ebp + 0xffffff64u)); FPUSH(v); }
/* 82aa67: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82aa6d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82aa6f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82aa72: jp 0x82ab78 */
  if (pf) goto L_82ab78;
L_82aa78: /* 82aa78: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 82aa7b: mov ebx, dword ptr [esi + 0xb4] */
  ebx = R32((uint32_t)(esi + 0xb4u));
/* 82aa81: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 82aa84: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 82aa8a: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82aa8d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82aa8e: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 82aa91: mov ecx, esi */
  ecx = esi;
/* 82aa93: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 82aa96: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 82aa98: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 82aa9b: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 82aa9e: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 82aaa1: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 82aaa4: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 82aaa7: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82aaaa: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 82aaad: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 82aab0: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 82aab3: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 82aab5: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 82aab8: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 82aabb: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82aabe: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 82aac1: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 82aac4: fadd dword ptr [ebp - 0x74] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 82aac7: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 82aaca: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 82aacd: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 82aad0: call 0x6cbe92 */
  esp -= 4; W32(esp, 0x82aad5u); SPILL(); f_6cbe92(); if (g_unwind) return; RELOAD();
/* 82aad5: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 82aad7: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 82aad9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82aadc: mov ecx, esp */
  ecx = esp;
/* 82aade: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 82aae0: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 82aae3: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82aae6: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 82aae9: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 82aaec: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 82aaf1: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 82aaf4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82aaf5: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 82aaf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82aaf9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82aafa: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 82ab00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82ab01: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82ab07: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82ab0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82ab0d: fld dword ptr [ebp - 0x9c] */
  { double v = F32((uint32_t)(ebp + 0xffffff64u)); FPUSH(v); }
/* 82ab13: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82ab19: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82ab1b: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82ab1e: jp 0x82ab78 */
  if (pf) goto L_82ab78;
L_82ab20: /* 82ab20: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 82ab23: mov esi, dword ptr [esi + 0x33c] */
  esi = R32((uint32_t)(esi + 0x33cu));
/* 82ab29: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 82ab2c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 82ab2e: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82ab31: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82ab34: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 82ab37: mov eax, esp */
  eax = esp;
/* 82ab39: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 82ab3c: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 82ab3e: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 82ab41: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 82ab44: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 82ab46: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 82ab49: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 82ab4c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 82ab4f: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 82ab52: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 82ab55: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 82ab58: mov ecx, esi */
  ecx = esi;
/* 82ab5a: call dword ptr [edx + 0x1a0] */
  { uint32_t t = R32((uint32_t)(edx + 0x1a0u)); esp -= 4; W32(esp, 0x82ab60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82ab60: mov eax, 1 */
  eax = 0x1u;
/* 82ab65: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82ab68: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82ab6f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82ab70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82ab71: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82ab72: mov esp, ebp */
  esp = ebp;
/* 82ab74: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82ab75: ret 0xc */
  esp += 16; SPILL(); return;
L_82ab78: /* 82ab78: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 82ab7b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82ab7d: jne 0x82ae32 */
  if (!zf) goto L_82ae32;
L_82ab83: /* 82ab83: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 82ab86: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82ab8c: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 82ab92: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82ab95: mov eax, esp */
  eax = esp;
/* 82ab97: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 82ab9e: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 82aba1: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 82aba4: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 82aba7: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 82aba9: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 82abaf: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 82abb6: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 82abb9: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 82abbc: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 82abbf: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 82abc6: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 82abc9: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 82abcc: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 82abd2: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 82abd5: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 82abda: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 82abdd: fadd dword ptr [ebp - 0x78] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff88u)));
/* 82abe0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82abe1: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 82abe4: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 82abea: fadd dword ptr [ebp - 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff84u)));
/* 82abed: add eax, 0x374 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x374u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 82abf2: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 82abf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82abf6: fadd dword ptr [ebp - 0x80] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff80u)));
/* 82abf9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82abfa: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 82ac00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82ac01: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 82ac04: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 82ac07: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 82ac0a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82ac0c: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82ac12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82ac12: fld dword ptr [ebp - 0x9c] */
  { double v = F32((uint32_t)(ebp + 0xffffff64u)); FPUSH(v); }
/* 82ac18: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82ac1e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82ac20: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82ac23: jnp 0x82ae32 */
  if (!pf) goto L_82ae32;
L_82ac29: /* 82ac29: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 82ac2c: mov ebx, dword ptr [esi + 0xb4] */
  ebx = R32((uint32_t)(esi + 0xb4u));
/* 82ac32: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 82ac38: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 82ac3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82ac3f: mov ecx, esi */
  ecx = esi;
/* 82ac41: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 82ac44: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82ac47: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 82ac4d: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 82ac50: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 82ac53: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 82ac59: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 82ac5c: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 82ac5f: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 82ac62: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82ac65: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 82ac68: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 82ac6b: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 82ac6d: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 82ac70: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 82ac73: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 82ac76: call 0x6cbe92 */
  esp -= 4; W32(esp, 0x82ac7bu); SPILL(); f_6cbe92(); if (g_unwind) return; RELOAD();
/* 82ac7b: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 82ac7d: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 82ac7f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82ac82: mov ecx, esp */
  ecx = esp;
/* 82ac84: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 82ac86: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 82ac89: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82ac8c: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 82ac8f: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 82ac94: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 82ac97: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82ac98: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 82ac9b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82ac9c: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82aca2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82aca3: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 82aca9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82acaa: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82acb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82acb0: fld dword ptr [ebp - 0x9c] */
  { double v = F32((uint32_t)(ebp + 0xffffff64u)); FPUSH(v); }
/* 82acb6: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82acbc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82acbe: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82acc1: jp 0x82ae32 */
  if (pf) goto L_82ae32;
L_82acc7: /* 82acc7: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 82acca: mov ebx, dword ptr [esi + 0xb4] */
  ebx = R32((uint32_t)(esi + 0xb4u));
/* 82acd0: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 82acd3: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 82acd9: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82acdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82acdd: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 82ace0: mov ecx, esi */
  ecx = esi;
/* 82ace2: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 82ace5: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 82ace7: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 82acea: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 82aced: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 82acf0: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 82acf3: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 82acf6: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82acf9: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 82acfc: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 82acff: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 82ad02: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 82ad04: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 82ad07: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 82ad0a: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82ad0d: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 82ad10: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 82ad13: fadd dword ptr [ebp - 0x74] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 82ad16: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 82ad19: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 82ad1c: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 82ad1f: call 0x6cbe92 */
  esp -= 4; W32(esp, 0x82ad24u); SPILL(); f_6cbe92(); if (g_unwind) return; RELOAD();
/* 82ad24: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 82ad26: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 82ad28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82ad2b: mov ecx, esp */
  ecx = esp;
/* 82ad2d: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 82ad2f: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 82ad32: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82ad35: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 82ad38: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 82ad3b: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 82ad40: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 82ad43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82ad44: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 82ad47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82ad48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82ad49: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 82ad4f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82ad50: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82ad56: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82ad5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82ad5c: fld dword ptr [ebp - 0x9c] */
  { double v = F32((uint32_t)(ebp + 0xffffff64u)); FPUSH(v); }
/* 82ad62: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82ad68: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82ad6a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82ad6d: jp 0x82ae32 */
  if (pf) goto L_82ae32;
L_82ad73: /* 82ad73: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 82ad76: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 82ad7c: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 82ad7f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82ad81: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82ad84: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82ad87: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 82ad8a: mov eax, esp */
  eax = esp;
/* 82ad8c: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 82ad8f: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 82ad91: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 82ad94: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 82ad97: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 82ad99: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 82ad9c: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 82ad9f: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 82ada2: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 82ada5: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 82ada8: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 82adab: call dword ptr [edx + 0x1a0] */
  { uint32_t t = R32((uint32_t)(edx + 0x1a0u)); esp -= 4; W32(esp, 0x82adb1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82adb1: mov eax, 1 */
  eax = 0x1u;
/* 82adb6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82adb9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82adc0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82adc1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82adc2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82adc3: mov esp, ebp */
  esp = ebp;
/* 82adc5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82adc6: ret 0xc */
  esp += 16; SPILL(); return;
L_82adc9: /* 82adc9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 82adcc: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 82adcf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82add2: mov ecx, esp */
  ecx = esp;
/* 82add4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82add6: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 82add9: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 82addc: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 82addf: mov ecx, esi */
  ecx = esi;
/* 82ade1: call 0x6c5be6 */
  esp -= 4; W32(esp, 0x82ade6u); SPILL(); f_6c5be6(); if (g_unwind) return; RELOAD();
/* 82ade6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82ade9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82adf0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82adf1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82adf2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82adf3: mov esp, ebp */
  esp = ebp;
/* 82adf5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82adf6: ret 0xc */
  esp += 16; SPILL(); return;
L_82ae32: /* 82ae32: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82ae35: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82ae36: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82ae37: xor eax, eax */
  eax = 0;
/* 82ae39: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82ae40: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82ae41: mov esp, ebp */
  esp = ebp;
/* 82ae43: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82ae44: ret 0xc */
  esp += 16; SPILL(); return;
}
