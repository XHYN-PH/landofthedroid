#include "recomp.h"
#include "rec_mod.h"

void f_433734(void) {
  LOAD_REGS();
L_433734: /* 433734: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 433735: mov ebp, esp */
  ebp = esp;
/* 433737: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 43373a: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 43373d: fmul qword ptr [eax + ecx*8] */
  ST0 = ST0 * (F64((uint32_t)(eax + ecx*8)));
/* 433740: jmp 0x433748 */
  goto L_433748;
L_433742: /* 433742: fadd qword ptr [eax + ecx*8] */
  ST0 = ST0 + (F64((uint32_t)(eax + ecx*8)));
/* 433745: fmul qword ptr [ebp + 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0x8u)));
L_433748: /* 433748: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 433749: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 43374c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 43374e: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 433751: jg 0x433742 */
  if ((!zf && sf == of)) goto L_433742;
L_433753: /* 433753: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 433755: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 433758: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 43375b: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 43375e: fmul qword ptr [esi + edx*8] */
  ST0 = ST0 * (F64((uint32_t)(esi + edx*8)));
/* 433761: jmp 0x43376a */
  goto L_43376a;
L_433763: /* 433763: fadd qword ptr [esi + eax*8] */
  ST0 = ST0 + (F64((uint32_t)(esi + eax*8)));
/* 433766: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 433767: fmul qword ptr [ebp + 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0x8u)));
L_43376a: /* 43376a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 43376c: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 43376f: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 433772: jg 0x433763 */
  if ((!zf && sf == of)) goto L_433763;
L_433774: /* 433774: fadd qword ptr [esi] */
  ST0 = ST0 + (F64((uint32_t)(esi)));
/* 433776: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 433779: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 43377c: fdiv qword ptr [ebp - 0x10] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0xfffffff0u)));
/* 43377f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 433780: ret  */
  esp += 4; SPILL(); return;
}

void f_433781(void) {
  LOAD_REGS();
L_433781: /* 433781: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 433782: mov ebp, esp */
  ebp = esp;
/* 433784: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 433787: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 43378a: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 433790: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 433792: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 433795: jp 0x43379f */
  if (pf) goto L_43379f;
L_433797: /* 433797: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 43379a: fchs  */
  ST0 = -ST0;
/* 43379c: fstp qword ptr [ebp + 8] */
  WF64((uint32_t)(ebp + 0x8u), ST0); FPOP();
L_43379f: /* 43379f: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4337a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4337a3: fcomp qword ptr [0x441230] */
  fpu_com(ST0, F64((uint32_t)(0x441230u)));
  FPOP();
/* 4337a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4337aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4337ab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4337ad: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4337b0: jp 0x4337d5 */
  if (pf) goto L_4337d5;
L_4337b2: /* 4337b2: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4337b5: mov esi, 0x44e650 */
  esi = 0x44e650u;
/* 4337ba: fmul qword ptr [ebp + 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0x8u)));
/* 4337bd: mov eax, 0x44e5f0 */
  eax = 0x44e5f0u;
/* 4337c2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4337c5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4337c7: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 4337c8: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* 4337ca: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4337cb: call 0x433734 */
  esp -= 4; W32(esp, 0x4337d0u); SPILL(); f_433734(); if (g_unwind) return; RELOAD();
/* 4337d0: jmp 0x43386f */
  goto L_43386f;
L_4337d5: /* 4337d5: fld qword ptr [0x441228] */
  { double v = F64((uint32_t)(0x441228u)); FPUSH(v); }
/* 4337db: mov esi, 0x44e6a8 */
  esi = 0x44e6a8u;
/* 4337e0: fdiv qword ptr [ebp + 8] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0x8u)));
/* 4337e3: mov eax, 0x44e678 */
  eax = 0x44e678u;
/* 4337e8: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 4337eb: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 4337ee: fmul qword ptr [ebp - 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 4337f1: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 4337f4: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 4337f7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4337fa: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 4337fc: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 4337fd: mov ecx, edx */
  ecx = edx;
/* 4337ff: call 0x433734 */
  esp -= 4; W32(esp, 0x433804u); SPILL(); f_433734(); if (g_unwind) return; RELOAD();
/* 433804: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 433807: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 43380a: mov esi, 0x44e708 */
  esi = 0x44e708u;
/* 43380f: mov ecx, edx */
  ecx = edx;
/* 433811: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433814: mov eax, 0x44e6d8 */
  eax = 0x44e6d8u;
/* 433819: call 0x433734 */
  esp -= 4; W32(esp, 0x43381eu); SPILL(); f_433734(); if (g_unwind) return; RELOAD();
/* 43381e: fmul qword ptr [ebp - 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 433821: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 433824: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 433827: fsub qword ptr [0x441220] */
  ST0 = ST0 - (F64((uint32_t)(0x441220u)));
/* 43382d: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 433830: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 433833: fmul qword ptr [0x441218] */
  ST0 = ST0 * (F64((uint32_t)(0x441218u)));
/* 433839: fdivr qword ptr [0x441210] */
  ST0 = (F64((uint32_t)(0x441210u))) / ST0;
/* 43383f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433842: call 0x4088dd */
  esp -= 4; W32(esp, 0x433847u); SPILL(); hle_sqrt(); RELOAD();
/* 433847: fstp qword ptr [ebp - 0x20] */
  WF64((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 43384a: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 43384d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433850: call 0x408165 */
  esp -= 4; W32(esp, 0x433855u); SPILL(); hle_cos(); RELOAD();
/* 433855: fmul qword ptr [ebp - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffe8u)));
/* 433858: fstp qword ptr [ebp + 8] */
  WF64((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 43385b: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 43385e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433861: call 0x40882f */
  esp -= 4; W32(esp, 0x433866u); SPILL(); hle_sin(); RELOAD();
/* 433866: fmul qword ptr [ebp - 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 433869: fsubr qword ptr [ebp + 8] */
  ST0 = (F64((uint32_t)(ebp + 0x8u))) - ST0;
/* 43386c: fmul qword ptr [ebp - 0x20] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffe0u)));
L_43386f: /* 43386f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433870: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433871: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 433872: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 433873: ret  */
  esp += 4; SPILL(); return;
}

void f_433874(void) {
  LOAD_REGS();
L_433874: /* 433874: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 433875: mov ebp, esp */
  ebp = esp;
/* 433877: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 43387a: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 43387d: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 433884: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 43388a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 43388c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 43388f: jp 0x43389d */
  if (pf) goto L_43389d;
L_433891: /* 433891: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 433894: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 433898: fchs  */
  ST0 = -ST0;
/* 43389a: fstp qword ptr [ebp + 8] */
  WF64((uint32_t)(ebp + 0x8u), ST0); FPOP();
L_43389d: /* 43389d: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4338a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4338a1: fcomp qword ptr [0x441230] */
  fpu_com(ST0, F64((uint32_t)(0x441230u)));
  FPOP();
/* 4338a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4338a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4338a9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4338ab: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4338ae: jp 0x4338df */
  if (pf) goto L_4338df;
L_4338b0: /* 4338b0: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4338b3: mov esi, 0x44e790 */
  esi = 0x44e790u;
/* 4338b8: fmul qword ptr [ebp + 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0x8u)));
/* 4338bb: mov eax, 0x44e738 */
  eax = 0x44e738u;
/* 4338c0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4338c3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4338c5: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 4338c6: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 4338c8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4338c9: call 0x433734 */
  esp -= 4; W32(esp, 0x4338ceu); SPILL(); f_433734(); if (g_unwind) return; RELOAD();
/* 4338ce: fild dword ptr [ebp - 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 4338d1: fstp qword ptr [ebp - 0x14] */
  WF64((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 4338d4: fmul qword ptr [ebp - 0x14] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffecu)));
/* 4338d7: fmul qword ptr [ebp + 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0x8u)));
/* 4338da: jmp 0x433982 */
  goto L_433982;
L_4338df: /* 4338df: fld qword ptr [0x441228] */
  { double v = F64((uint32_t)(0x441228u)); FPUSH(v); }
/* 4338e5: mov esi, 0x44e7e8 */
  esi = 0x44e7e8u;
/* 4338ea: fdiv qword ptr [ebp + 8] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0x8u)));
/* 4338ed: mov eax, 0x44e7b8 */
  eax = 0x44e7b8u;
/* 4338f2: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 4338f5: fld qword ptr [ebp - 0xc] */
  { double v = F64((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* 4338f8: fmul qword ptr [ebp - 0xc] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff4u)));
/* 4338fb: fstp qword ptr [ebp - 0x14] */
  WF64((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 4338fe: fld qword ptr [ebp - 0x14] */
  { double v = F64((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 433901: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433904: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 433906: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 433907: mov ecx, edx */
  ecx = edx;
/* 433909: call 0x433734 */
  esp -= 4; W32(esp, 0x43390eu); SPILL(); f_433734(); if (g_unwind) return; RELOAD();
/* 43390e: fstp qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 433911: fld qword ptr [ebp - 0x14] */
  { double v = F64((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 433914: mov esi, 0x44e848 */
  esi = 0x44e848u;
/* 433919: mov ecx, edx */
  ecx = edx;
/* 43391b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 43391e: mov eax, 0x44e818 */
  eax = 0x44e818u;
/* 433923: call 0x433734 */
  esp -= 4; W32(esp, 0x433928u); SPILL(); f_433734(); if (g_unwind) return; RELOAD();
/* 433928: fmul qword ptr [ebp - 0xc] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff4u)));
/* 43392b: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 43392e: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 433931: fsub qword ptr [0x441238] */
  ST0 = ST0 - (F64((uint32_t)(0x441238u)));
/* 433937: fstp qword ptr [ebp - 0x14] */
  WF64((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 43393a: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 43393d: fmul qword ptr [0x441218] */
  ST0 = ST0 * (F64((uint32_t)(0x441218u)));
/* 433943: fdivr qword ptr [0x441210] */
  ST0 = (F64((uint32_t)(0x441210u))) / ST0;
/* 433949: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 43394c: call 0x4088dd */
  esp -= 4; W32(esp, 0x433951u); SPILL(); hle_sqrt(); RELOAD();
/* 433951: fstp qword ptr [ebp - 0x24] */
  WF64((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 433954: fld qword ptr [ebp - 0x14] */
  { double v = F64((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 433957: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 43395a: call 0x408165 */
  esp -= 4; W32(esp, 0x43395fu); SPILL(); hle_cos(); RELOAD();
/* 43395f: fmul qword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffe4u)));
/* 433962: fstp qword ptr [ebp + 8] */
  WF64((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 433965: fld qword ptr [ebp - 0x14] */
  { double v = F64((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 433968: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 43396b: call 0x40882f */
  esp -= 4; W32(esp, 0x433970u); SPILL(); hle_sin(); RELOAD();
/* 433970: fmul qword ptr [ebp - 0xc] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff4u)));
/* 433973: fsubr qword ptr [ebp + 8] */
  ST0 = (F64((uint32_t)(ebp + 0x8u))) - ST0;
/* 433976: fmul qword ptr [ebp - 0x24] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffdcu)));
/* 433979: fild dword ptr [ebp - 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 43397c: fstp qword ptr [ebp + 8] */
  WF64((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 43397f: fmul qword ptr [ebp + 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0x8u)));
L_433982: /* 433982: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433983: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433984: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 433985: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 433986: ret  */
  esp += 4; SPILL(); return;
}

void f_433987(void) {
  LOAD_REGS();
L_433987: /* 433987: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 433988: mov ebp, esp */
  ebp = esp;
/* 43398a: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 43398d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 43398e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 433991: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 433993: jge 0x4339a4 */
  if ((sf == of)) goto L_4339a4;
L_433995: /* 433995: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 433998: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
/* 43399a: fchs  */
  ST0 = -ST0;
/* 43399c: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 43399f: fstp qword ptr [ebp + 0xc] */
  WF64((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 4339a2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_4339a4: /* 4339a4: jne 0x4339b8 */
  if (!zf) goto L_4339b8;
L_4339a6: /* 4339a6: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 4339a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4339aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4339ab: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4339ae: call 0x433781 */
  esp -= 4; W32(esp, 0x4339b3u); SPILL(); f_433781(); if (g_unwind) return; RELOAD();
/* 4339b3: jmp 0x433b03 */
  goto L_433b03;
L_4339b8: /* 4339b8: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4339bb: jne 0x4339cf */
  if (!zf) goto L_4339cf;
L_4339bd: /* 4339bd: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 4339c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4339c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4339c2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4339c5: call 0x433874 */
  esp -= 4; W32(esp, 0x4339cau); SPILL(); f_433874(); if (g_unwind) return; RELOAD();
/* 4339ca: jmp 0x433b03 */
  goto L_433b03;
L_4339cf: /* 4339cf: fld qword ptr [0x43fc10] */
  { double v = F64((uint32_t)(0x43fc10u)); FPUSH(v); }
/* 4339d5: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 4339d8: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4339da: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4339dc: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4339df: jnp 0x433b05 */
  if (!pf) goto L_433b05;
L_4339e5: /* 4339e5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4339e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4339e8: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4339eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4339ec: fstp qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 4339ef: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 4339f2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4339f5: call 0x433ed6 */
  esp -= 4; W32(esp, 0x4339fau); SPILL(); f_433ed6(); if (g_unwind) return; RELOAD();
/* 4339fa: fcomp qword ptr [ebp - 0x1c] */
  fpu_com(ST0, F64((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* 4339fd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4339fe: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 433a01: shl esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 433a03: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433a04: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 433a06: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 433a09: jne 0x433a6f */
  if (!zf) goto L_433a6f;
L_433a0b: /* 433a0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 433a0c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 433a0d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433a10: call 0x433781 */
  esp -= 4; W32(esp, 0x433a15u); SPILL(); f_433781(); if (g_unwind) return; RELOAD();
/* 433a15: fstp qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 433a18: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 433a1b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433a1e: call 0x433874 */
  esp -= 4; W32(esp, 0x433a23u); SPILL(); f_433874(); if (g_unwind) return; RELOAD();
/* 433a23: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 433a26: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433a27: fld qword ptr [ebp - 0xc] */
  { double v = F64((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* 433a2a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433a2b: fstp qword ptr [ebp - 0x14] */
  WF64((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 433a2e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 433a30: fld qword ptr [ebp - 0xc] */
  { double v = F64((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* 433a33: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 433a34: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 433a36: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 433a39: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 433a3b: jmp 0x433a5c */
  goto L_433a5c;
L_433a3d: /* 433a3d: fld qword ptr [ebp - 0x14] */
  { double v = F64((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 433a40: fstp qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 433a43: fld qword ptr [ebp - 0xc] */
  { double v = F64((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* 433a46: fstp qword ptr [ebp - 0x14] */
  WF64((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 433a49: fild dword ptr [ebp - 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 433a4c: add dword ptr [ebp - 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 433a50: cmp dword ptr [ebp - 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 433a53: fstp qword ptr [ebp - 0x24] */
  WF64((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 433a56: fld qword ptr [ebp - 0x24] */
  { double v = F64((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 433a59: fmul qword ptr [ebp - 0xc] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff4u)));
L_433a5c: /* 433a5c: fdiv qword ptr [ebp + 0xc] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0xcu)));
/* 433a5f: fsub qword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F64((uint32_t)(ebp + 0xffffffe4u)));
/* 433a62: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 433a65: jne 0x433a3d */
  if (!zf) goto L_433a3d;
L_433a67: /* 433a67: fld qword ptr [ebp - 0xc] */
  { double v = F64((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* 433a6a: jmp 0x433b05 */
  goto L_433b05;
L_433a6f: /* 433a6f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 433a71: lea eax, [esi + 0x24] */
  eax = (uint32_t)(esi + 0x24u);
/* 433a74: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 433a76: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 433a79: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 433a7c: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 433a7e: fstp qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 433a81: fldz  */
  FPUSH(0.0);
/* 433a83: jmp 0x433a9b */
  goto L_433a9b;
L_433a85: /* 433a85: fild dword ptr [ebp - 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 433a88: sub dword ptr [ebp - 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 433a8c: cmp dword ptr [ebp - 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 433a8f: fstp qword ptr [ebp - 0x24] */
  WF64((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 433a92: fld qword ptr [ebp - 0x24] */
  { double v = F64((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 433a95: fsub qword ptr [ebp - 0x14] */
  ST0 = ST0 - (F64((uint32_t)(ebp + 0xffffffecu)));
/* 433a98: fdivr qword ptr [ebp - 0x1c] */
  ST0 = (F64((uint32_t)(ebp + 0xffffffe4u))) / ST0;
L_433a9b: /* 433a9b: fstp qword ptr [ebp - 0x14] */
  WF64((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 433a9e: jg 0x433a85 */
  if ((!zf && sf == of)) goto L_433a85;
L_433aa0: /* 433aa0: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 433aa3: add esi, -2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 433aa6: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 433aa9: fstp qword ptr [ebp - 0x24] */
  WF64((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 433aac: fld qword ptr [ebp - 0x24] */
  { double v = F64((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 433aaf: fsub qword ptr [ebp - 0x14] */
  ST0 = ST0 - (F64((uint32_t)(ebp + 0xffffffecu)));
/* 433ab2: fdivr st(1) */
  ST0 = STI(1) / ST0;
/* 433ab4: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 433ab7: fld qword ptr [ebp - 0xc] */
  { double v = F64((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* 433aba: fstp qword ptr [ebp - 0x2c] */
  WF64((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 433abd: fld1  */
  FPUSH(1.0);
/* 433abf: fstp qword ptr [ebp - 0x14] */
  WF64((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 433ac2: fild dword ptr [ebp - 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 433ac5: fstp qword ptr [ebp - 0x24] */
  WF64((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 433ac8: fld qword ptr [ebp - 0x24] */
  { double v = F64((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 433acb: jmp 0x433ae5 */
  goto L_433ae5;
L_433acd: /* 433acd: fld qword ptr [ebp - 0x14] */
  { double v = F64((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 433ad0: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 433ad3: fld qword ptr [ebp - 0x1c] */
  { double v = F64((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 433ad6: fstp qword ptr [ebp - 0x14] */
  WF64((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 433ad9: fild dword ptr [ebp - 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 433adc: fstp qword ptr [ebp - 0x24] */
  WF64((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 433adf: fld qword ptr [ebp - 0x24] */
  { double v = F64((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 433ae2: fmul qword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffe4u)));
L_433ae5: /* 433ae5: sub dword ptr [ebp - 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 433ae9: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 433aeb: fsub qword ptr [ebp - 0xc] */
  ST0 = ST0 - (F64((uint32_t)(ebp + 0xfffffff4u)));
/* 433aee: fstp qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 433af1: jne 0x433acd */
  if (!zf) goto L_433acd;
L_433af3: /* 433af3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 433af4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 433af5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433af8: call 0x433781 */
  esp -= 4; W32(esp, 0x433afdu); SPILL(); f_433781(); if (g_unwind) return; RELOAD();
/* 433afd: fmul qword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffd4u)));
/* 433b00: fdiv qword ptr [ebp - 0x1c] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0xffffffe4u)));
L_433b03: /* 433b03: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433b04: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_433b05: /* 433b05: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 433b06: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 433b07: ret  */
  esp += 4; SPILL(); return;
}

void f_433b08(void) {
  LOAD_REGS();
L_433b08: /* 433b08: push 0xffff */
  { uint32_t v = 0xffffu; esp -= 4; W32(esp, v); }
/* 433b0d: push 0x133f */
  { uint32_t v = 0x133fu; esp -= 4; W32(esp, v); }
/* 433b12: call 0x434d89 */
  esp -= 4; W32(esp, 0x433b17u); SPILL(); f_434d89(); if (g_unwind) return; RELOAD();
/* 433b17: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 433b1b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433b1c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433b1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 433b1e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 433b21: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 433b25: fld qword ptr [esp + 0x1c] */
  { double v = F64((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 433b29: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433b2c: push dword ptr [esp + 0x18] */
  { uint32_t v = R32((uint32_t)(esp + 0x18u)); esp -= 4; W32(esp, v); }
/* 433b30: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 433b32: call 0x434a91 */
  esp -= 4; W32(esp, 0x433b37u); SPILL(); f_434a91(); if (g_unwind) return; RELOAD();
/* 433b37: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 433b3a: ret  */
  esp += 4; SPILL(); return;
}

void f_433b3b(void) {
  LOAD_REGS();
L_433b3b: /* 433b3b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 433b3c: mov ebp, esp */
  ebp = esp;
/* 433b3e: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 433b41: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 433b44: fcom qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
/* 433b4a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 433b4c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 433b4f: jp 0x433b6d */
  if (pf) goto L_433b6d;
L_433b51: /* 433b51: fld qword ptr [0x44ebb0] */
  { double v = F64((uint32_t)(0x44ebb0u)); FPUSH(v); }
/* 433b57: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 433b5a: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 433b5e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433b61: push 0x22 */
  { uint32_t v = 0x22u; esp -= 4; W32(esp, v); }
/* 433b63: call 0x433b08 */
  esp -= 4; W32(esp, 0x433b68u); SPILL(); f_433b08(); if (g_unwind) return; RELOAD();
/* 433b68: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 433b6b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 433b6c: ret  */
  esp += 4; SPILL(); return;
L_433b6d: /* 433b6d: fcom qword ptr [0x441230] */
  fpu_com(ST0, F64((uint32_t)(0x441230u)));
/* 433b73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 433b74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 433b75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 433b76: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 433b78: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 433b7b: jp 0x433bc7 */
  if (pf) goto L_433bc7;
L_433b7d: /* 433b7d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 433b7f: mov esi, 0x44e8c0 */
  esi = 0x44e8c0u;
/* 433b84: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 433b86: mov eax, 0x44e878 */
  eax = 0x44e878u;
/* 433b8b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433b8e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 433b90: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433b91: mov edx, ecx */
  edx = ecx;
/* 433b93: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 433b95: call 0x433734 */
  esp -= 4; W32(esp, 0x433b9au); SPILL(); f_433734(); if (g_unwind) return; RELOAD();
/* 433b9a: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 433b9d: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 433ba0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433ba3: call 0x433781 */
  esp -= 4; W32(esp, 0x433ba8u); SPILL(); f_433781(); if (g_unwind) return; RELOAD();
/* 433ba8: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 433bab: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 433bae: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433bb1: call 0x4082f7 */
  esp -= 4; W32(esp, 0x433bb6u); SPILL(); f_4082f7(); if (g_unwind) return; RELOAD();
/* 433bb6: fmul qword ptr [ebp - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff0u)));
/* 433bb9: fmul qword ptr [0x441240] */
  ST0 = ST0 * (F64((uint32_t)(0x441240u)));
/* 433bbf: fadd qword ptr [ebp - 8] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 433bc2: jmp 0x433c62 */
  goto L_433c62;
L_433bc7: /* 433bc7: fld qword ptr [0x441228] */
  { double v = F64((uint32_t)(0x441228u)); FPUSH(v); }
/* 433bcd: mov esi, 0x44e6a8 */
  esi = 0x44e6a8u;
/* 433bd2: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 433bd4: mov eax, 0x44e678 */
  eax = 0x44e678u;
/* 433bd9: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 433bdc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 433bde: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 433be1: fmul qword ptr [ebp - 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 433be4: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 433be7: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 433bea: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433bed: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 433bef: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 433bf0: mov ecx, edx */
  ecx = edx;
/* 433bf2: call 0x433734 */
  esp -= 4; W32(esp, 0x433bf7u); SPILL(); f_433734(); if (g_unwind) return; RELOAD();
/* 433bf7: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 433bfa: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 433bfd: mov esi, 0x44e708 */
  esi = 0x44e708u;
/* 433c02: mov ecx, edx */
  ecx = edx;
/* 433c04: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433c07: mov eax, 0x44e6d8 */
  eax = 0x44e6d8u;
/* 433c0c: call 0x433734 */
  esp -= 4; W32(esp, 0x433c11u); SPILL(); f_433734(); if (g_unwind) return; RELOAD();
/* 433c11: fmul qword ptr [ebp - 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 433c14: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 433c17: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 433c1a: fsub qword ptr [0x441220] */
  ST0 = ST0 - (F64((uint32_t)(0x441220u)));
/* 433c20: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 433c23: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 433c26: fmul qword ptr [0x441218] */
  ST0 = ST0 * (F64((uint32_t)(0x441218u)));
/* 433c2c: fdivr qword ptr [0x441210] */
  ST0 = (F64((uint32_t)(0x441210u))) / ST0;
/* 433c32: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433c35: call 0x4088dd */
  esp -= 4; W32(esp, 0x433c3au); SPILL(); hle_sqrt(); RELOAD();
/* 433c3a: fstp qword ptr [ebp - 0x20] */
  WF64((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 433c3d: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 433c40: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433c43: call 0x408165 */
  esp -= 4; W32(esp, 0x433c48u); SPILL(); hle_cos(); RELOAD();
/* 433c48: fmul qword ptr [ebp - 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 433c4b: fstp qword ptr [ebp + 8] */
  WF64((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 433c4e: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 433c51: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433c54: call 0x40882f */
  esp -= 4; W32(esp, 0x433c59u); SPILL(); hle_sin(); RELOAD();
/* 433c59: fmul qword ptr [ebp - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffe8u)));
/* 433c5c: fadd qword ptr [ebp + 8] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0x8u)));
/* 433c5f: fmul qword ptr [ebp - 0x20] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffe0u)));
L_433c62: /* 433c62: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433c63: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433c64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 433c65: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 433c66: ret  */
  esp += 4; SPILL(); return;
}

void f_433c67(void) {
  LOAD_REGS();
L_433c67: /* 433c67: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 433c68: mov ebp, esp */
  ebp = esp;
/* 433c6a: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 433c6d: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 433c70: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 433c76: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 433c78: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 433c7b: jp 0x433c9c */
  if (pf) goto L_433c9c;
L_433c7d: /* 433c7d: fld qword ptr [0x44ebb0] */
  { double v = F64((uint32_t)(0x44ebb0u)); FPUSH(v); }
/* 433c83: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 433c86: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 433c8a: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 433c8d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433c90: push 0x23 */
  { uint32_t v = 0x23u; esp -= 4; W32(esp, v); }
/* 433c92: call 0x433b08 */
  esp -= 4; W32(esp, 0x433c97u); SPILL(); f_433b08(); if (g_unwind) return; RELOAD();
/* 433c97: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 433c9a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 433c9b: ret  */
  esp += 4; SPILL(); return;
L_433c9c: /* 433c9c: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 433c9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 433ca0: fcomp qword ptr [0x441230] */
  fpu_com(ST0, F64((uint32_t)(0x441230u)));
  FPOP();
/* 433ca6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 433ca7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 433ca8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 433caa: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 433cad: jp 0x433d04 */
  if (pf) goto L_433d04;
L_433caf: /* 433caf: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 433cb2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433cb5: call 0x433874 */
  esp -= 4; W32(esp, 0x433cbau); SPILL(); f_433874(); if (g_unwind) return; RELOAD();
/* 433cba: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 433cbd: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 433cc0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433cc3: call 0x4082f7 */
  esp -= 4; W32(esp, 0x433cc8u); SPILL(); f_4082f7(); if (g_unwind) return; RELOAD();
/* 433cc8: fmul qword ptr [ebp - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff0u)));
/* 433ccb: mov esi, 0x44e948 */
  esi = 0x44e948u;
/* 433cd0: fld1  */
  FPUSH(1.0);
/* 433cd2: mov eax, 0x44e908 */
  eax = 0x44e908u;
/* 433cd7: fdiv qword ptr [ebp + 8] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0x8u)));
/* 433cda: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 433cdc: fmul qword ptr [0x441240] */
  ST0 = ST0 * (F64((uint32_t)(0x441240u)));
/* 433ce2: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 433ce5: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 433ce8: fmul qword ptr [ebp + 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0x8u)));
/* 433ceb: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433cee: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 433cf0: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 433cf1: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 433cf3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433cf4: call 0x433734 */
  esp -= 4; W32(esp, 0x433cf9u); SPILL(); f_433734(); if (g_unwind) return; RELOAD();
/* 433cf9: fmul qword ptr [ebp + 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0x8u)));
/* 433cfc: fadd qword ptr [ebp - 0x10] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xfffffff0u)));
/* 433cff: jmp 0x433d9e */
  goto L_433d9e;
L_433d04: /* 433d04: fld qword ptr [0x441228] */
  { double v = F64((uint32_t)(0x441228u)); FPUSH(v); }
/* 433d0a: mov esi, 0x44e7e8 */
  esi = 0x44e7e8u;
/* 433d0f: fdiv qword ptr [ebp + 8] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0x8u)));
/* 433d12: mov eax, 0x44e7b8 */
  eax = 0x44e7b8u;
/* 433d17: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 433d1a: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 433d1d: fmul qword ptr [ebp - 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 433d20: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 433d23: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 433d26: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433d29: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 433d2b: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 433d2c: mov ecx, edx */
  ecx = edx;
/* 433d2e: call 0x433734 */
  esp -= 4; W32(esp, 0x433d33u); SPILL(); f_433734(); if (g_unwind) return; RELOAD();
/* 433d33: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 433d36: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 433d39: mov esi, 0x44e848 */
  esi = 0x44e848u;
/* 433d3e: mov ecx, edx */
  ecx = edx;
/* 433d40: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433d43: mov eax, 0x44e818 */
  eax = 0x44e818u;
/* 433d48: call 0x433734 */
  esp -= 4; W32(esp, 0x433d4du); SPILL(); f_433734(); if (g_unwind) return; RELOAD();
/* 433d4d: fmul qword ptr [ebp - 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 433d50: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 433d53: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 433d56: fsub qword ptr [0x441238] */
  ST0 = ST0 - (F64((uint32_t)(0x441238u)));
/* 433d5c: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 433d5f: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 433d62: fmul qword ptr [0x441218] */
  ST0 = ST0 * (F64((uint32_t)(0x441218u)));
/* 433d68: fdivr qword ptr [0x441210] */
  ST0 = (F64((uint32_t)(0x441210u))) / ST0;
/* 433d6e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433d71: call 0x4088dd */
  esp -= 4; W32(esp, 0x433d76u); SPILL(); hle_sqrt(); RELOAD();
/* 433d76: fstp qword ptr [ebp - 0x20] */
  WF64((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 433d79: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 433d7c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433d7f: call 0x408165 */
  esp -= 4; W32(esp, 0x433d84u); SPILL(); hle_cos(); RELOAD();
/* 433d84: fmul qword ptr [ebp - 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 433d87: fstp qword ptr [ebp + 8] */
  WF64((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 433d8a: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 433d8d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433d90: call 0x40882f */
  esp -= 4; W32(esp, 0x433d95u); SPILL(); hle_sin(); RELOAD();
/* 433d95: fmul qword ptr [ebp - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffe8u)));
/* 433d98: fadd qword ptr [ebp + 8] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0x8u)));
/* 433d9b: fmul qword ptr [ebp - 0x20] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffe0u)));
L_433d9e: /* 433d9e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433d9f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433da0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 433da1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 433da2: ret  */
  esp += 4; SPILL(); return;
}

void f_433da3(void) {
  LOAD_REGS();
L_433da3: /* 433da3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 433da4: mov ebp, esp */
  ebp = esp;
/* 433da6: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 433da9: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 433dac: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 433db2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 433db4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 433db7: jp 0x433dd8 */
  if (pf) goto L_433dd8;
L_433db9: /* 433db9: fld qword ptr [0x44ebb0] */
  { double v = F64((uint32_t)(0x44ebb0u)); FPUSH(v); }
/* 433dbf: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 433dc2: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 433dc6: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 433dc9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433dcc: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 433dce: call 0x433b08 */
  esp -= 4; W32(esp, 0x433dd3u); SPILL(); f_433b08(); if (g_unwind) return; RELOAD();
/* 433dd3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 433dd6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 433dd7: ret  */
  esp += 4; SPILL(); return;
L_433dd8: /* 433dd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 433dd9: xor ebx, ebx */
  ebx = 0;
/* 433ddb: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 433ddc: cmp dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 433de0: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 433de3: jge 0x433df5 */
  if ((sf == of)) goto L_433df5;
L_433de5: /* 433de5: neg dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(0 - a);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 433de8: test byte ptr [ebp + 8], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x8u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 433deb: je 0x433df1 */
  if (zf) goto L_433df1;
L_433ded: /* 433ded: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_433df1: /* 433df1: cmp dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_433df5: /* 433df5: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 433df8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 433df9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 433dfa: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433dfd: jne 0x433e11 */
  if (!zf) goto L_433e11;
L_433dff: /* 433dff: call 0x433b3b */
  esp -= 4; W32(esp, 0x433e04u); SPILL(); f_433b3b(); if (g_unwind) return; RELOAD();
/* 433e04: fild dword ptr [ebp - 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 433e07: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433e08: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433e09: fstp qword ptr [ebp + 0xc] */
  WF64((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 433e0c: fmul qword ptr [ebp + 0xc] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xcu)));
/* 433e0f: jmp 0x433e8a */
  goto L_433e8a;
L_433e11: /* 433e11: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 433e14: jne 0x433e28 */
  if (!zf) goto L_433e28;
L_433e16: /* 433e16: call 0x433c67 */
  esp -= 4; W32(esp, 0x433e1bu); SPILL(); f_433c67(); if (g_unwind) return; RELOAD();
/* 433e1b: fild dword ptr [ebp - 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 433e1e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433e1f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433e20: fstp qword ptr [ebp + 0xc] */
  WF64((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 433e23: fmul qword ptr [ebp + 0xc] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xcu)));
/* 433e26: jmp 0x433e8a */
  goto L_433e8a;
L_433e28: /* 433e28: call 0x433b3b */
  esp -= 4; W32(esp, 0x433e2du); SPILL(); f_433b3b(); if (g_unwind) return; RELOAD();
/* 433e2d: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 433e30: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 433e33: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433e36: call 0x433c67 */
  esp -= 4; W32(esp, 0x433e3bu); SPILL(); f_433c67(); if (g_unwind) return; RELOAD();
/* 433e3b: fstp qword ptr [ebp - 0x14] */
  WF64((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 433e3e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 433e41: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 433e43: fld qword ptr [0x441210] */
  { double v = F64((uint32_t)(0x441210u)); FPUSH(v); }
/* 433e49: fdiv qword ptr [ebp + 0xc] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0xcu)));
/* 433e4c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433e4d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433e4e: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
/* 433e51: fstp qword ptr [ebp - 0x24] */
  WF64((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 433e54: jle 0x433e7e */
  if ((zf || sf != of)) goto L_433e7e;
L_433e56: /* 433e56: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 433e59: inc dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 433e5c: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 433e5f: fstp qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 433e62: fld qword ptr [ebp - 0x14] */
  { double v = F64((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 433e65: fld qword ptr [ebp - 0x1c] */
  { double v = F64((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 433e68: fmul qword ptr [ebp - 0x24] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffdcu)));
/* 433e6b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 433e6d: fsub qword ptr [ebp - 0xc] */
  ST0 = ST0 - (F64((uint32_t)(ebp + 0xfffffff4u)));
/* 433e70: fstp qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 433e73: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 433e76: fld qword ptr [ebp - 0x1c] */
  { double v = F64((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 433e79: fstp qword ptr [ebp - 0x14] */
  WF64((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 433e7c: jl 0x433e56 */
  if ((sf != of)) goto L_433e56;
L_433e7e: /* 433e7e: fild dword ptr [ebp - 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 433e81: fstp qword ptr [ebp + 0xc] */
  WF64((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 433e84: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 433e87: fmul qword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffe4u)));
L_433e8a: /* 433e8a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 433e8b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 433e8c: ret  */
  esp += 4; SPILL(); return;
}

void f_433e8d(void) {
  LOAD_REGS();
L_433e8d: /* 433e8d: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 433e8f: push 0x441248 */
  { uint32_t v = 0x441248u; esp -= 4; W32(esp, v); }
/* 433e94: call 0x40101f */
  esp -= 4; W32(esp, 0x433e99u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 433e99: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 433e9d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 433ea1: movapd xmm0, xmm1 */
  guest_unsupported(0x433ea1); /* movapd xmm0, xmm1 */
/* 433ea5: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 433eac: jmp 0x433eb5 */
  goto L_433eb5;
L_433eb5: /* 433eb5: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 433eb9: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 433ebc: call 0x40105a */
  esp -= 4; W32(esp, 0x433ec1u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 433ec1: ret  */
  esp += 4; SPILL(); return;
}

void f_433eae(void) {
  LOAD_REGS();
L_433eae: /* 433eae: xor eax, eax */
  eax = 0;
/* 433eb0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 433eb1: ret  */
  esp += 4; SPILL(); return;
}

void f_433eb2(void) {
  LOAD_REGS();
L_433eb2: /* 433eb2: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 433eb5: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 433eb9: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 433ebc: call 0x40105a */
  esp -= 4; W32(esp, 0x433ec1u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 433ec1: ret  */
  esp += 4; SPILL(); return;
}

void f_433ec2(void) {
  LOAD_REGS();
L_433ec2: /* 433ec2: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 433ec6: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 433ec8: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 433eca: and eax, dword ptr [0x44b150] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b150u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 433ed0: mov dword ptr [0x44b14c], eax */
  W32((uint32_t)(0x44b14cu), eax);
/* 433ed5: ret  */
  esp += 4; SPILL(); return;
}

void f_433ed6(void) {
  LOAD_REGS();
L_433ed6: /* 433ed6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 433ed7: mov ebp, esp */
  ebp = esp;
/* 433ed9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 433eda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 433edb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 433edc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 433edd: mov esi, 0xffff */
  esi = 0xffffu;
/* 433ee2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 433ee3: push 0x133f */
  { uint32_t v = 0x133fu; esp -= 4; W32(esp, v); }
/* 433ee8: call 0x434d89 */
  esp -= 4; W32(esp, 0x433eedu); SPILL(); f_434d89(); if (g_unwind) return; RELOAD();
/* 433eed: mov edi, eax */
  edi = eax;
/* 433eef: mov eax, dword ptr [ebp + 0xe] */
  eax = R32((uint32_t)(ebp + 0xeu));
/* 433ef2: and ax, 0x7ff0 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7ff0u);
  uint16_t r = (uint16_t)(a & b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 433ef6: cmp ax, 0x7ff0 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7ff0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 433efa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433efb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433efc: jne 0x433f66 */
  if (!zf) goto L_433f66;
L_433efe: /* 433efe: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 433f01: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 433f02: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 433f03: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433f06: call 0x434c5d */
  esp -= 4; W32(esp, 0x433f0bu); SPILL(); f_434c5d(); if (g_unwind) return; RELOAD();
/* 433f0b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 433f0c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433f0d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433f0e: je 0x433f5a */
  if (zf) goto L_433f5a;
L_433f10: /* 433f10: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 433f11: je 0x433f4c */
  if (zf) goto L_433f4c;
L_433f13: /* 433f13: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 433f14: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 433f17: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 433f18: je 0x433f3b */
  if (zf) goto L_433f3b;
L_433f1a: /* 433f1a: fadd qword ptr [0x441208] */
  ST0 = ST0 + (F64((uint32_t)(0x441208u)));
/* 433f20: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 433f23: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 433f27: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 433f2a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433f2d: push 0x15 */
  { uint32_t v = 0x15u; esp -= 4; W32(esp, v); }
/* 433f2f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 433f31: call 0x434a91 */
  esp -= 4; W32(esp, 0x433f36u); SPILL(); f_434a91(); if (g_unwind) return; RELOAD();
/* 433f36: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 433f39: jmp 0x433f83 */
  goto L_433f83;
L_433f3b: /* 433f3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 433f3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 433f3d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 433f40: push 0x15 */
  { uint32_t v = 0x15u; esp -= 4; W32(esp, v); }
/* 433f42: call 0x4349df */
  esp -= 4; W32(esp, 0x433f47u); SPILL(); f_4349df(); if (g_unwind) return; RELOAD();
/* 433f47: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 433f4a: jmp 0x433f83 */
  goto L_433f83;
L_433f4c: /* 433f4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 433f4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 433f4e: call 0x434d89 */
  esp -= 4; W32(esp, 0x433f53u); SPILL(); f_434d89(); if (g_unwind) return; RELOAD();
/* 433f53: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 433f56: fchs  */
  ST0 = -ST0;
/* 433f58: jmp 0x433f81 */
  goto L_433f81;
L_433f5a: /* 433f5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 433f5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 433f5c: call 0x434d89 */
  esp -= 4; W32(esp, 0x433f61u); SPILL(); f_434d89(); if (g_unwind) return; RELOAD();
/* 433f61: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 433f64: jmp 0x433f81 */
  goto L_433f81;
L_433f66: /* 433f66: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 433f69: and eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 433f6e: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 433f71: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 433f74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 433f75: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 433f76: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 433f79: call 0x434d89 */
  esp -= 4; W32(esp, 0x433f7eu); SPILL(); f_434d89(); if (g_unwind) return; RELOAD();
/* 433f7e: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
L_433f81: /* 433f81: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433f82: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_433f83: /* 433f83: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 433f84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 433f85: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 433f86: ret  */
  esp += 4; SPILL(); return;
}

void f_433f87(void) { hle_frexp(); }

void f_434033(void) { hle_ldexp(); }

void f_434259(void) {
  LOAD_REGS();
L_434259: /* 434259: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 43425a: mov ebp, esp */
  ebp = esp;
/* 43425c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43425d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43425e: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 434261: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 434262: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 434263: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 434266: call 0x432bb8 */
  esp -= 4; W32(esp, 0x43426bu); SPILL(); f_432bb8(); if (g_unwind) return; RELOAD();
/* 43426b: test al, 0x90 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x90u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43426d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43426e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43426f: jne 0x4342bf */
  if (!zf) goto L_4342bf;
L_434271: /* 434271: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 434274: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 434275: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 434276: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 434279: call 0x4366a8 */
  esp -= 4; W32(esp, 0x43427eu); SPILL(); f_4366a8(); if (g_unwind) return; RELOAD();
/* 43427e: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 434281: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 434282: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 434285: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 434286: fcomp qword ptr [ebp + 8] */
  fpu_com(ST0, F64((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 434289: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 43428b: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 43428e: jp 0x4342bf */
  if (pf) goto L_4342bf;
L_434290: /* 434290: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 434293: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 434294: fdiv qword ptr [0x441210] */
  ST0 = ST0 / (F64((uint32_t)(0x441210u)));
/* 43429a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43429b: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 43429e: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 4342a1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4342a4: call 0x4366a8 */
  esp -= 4; W32(esp, 0x4342a9u); SPILL(); f_4366a8(); if (g_unwind) return; RELOAD();
/* 4342a9: fcomp qword ptr [ebp - 8] */
  fpu_com(ST0, F64((uint32_t)(ebp + 0xfffffff8u)));
  FPOP();
/* 4342ac: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4342ad: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4342ae: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4342b0: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4342b3: jp 0x4342ba */
  if (pf) goto L_4342ba;
L_4342b5: /* 4342b5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4342b7: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4342b8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4342b9: ret  */
  esp += 4; SPILL(); return;
L_4342ba: /* 4342ba: xor eax, eax */
  eax = 0;
/* 4342bc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4342bd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4342be: ret  */
  esp += 4; SPILL(); return;
L_4342bf: /* 4342bf: xor eax, eax */
  eax = 0;
/* 4342c1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4342c2: ret  */
  esp += 4; SPILL(); return;
}

void f_4342c3(void) {
  LOAD_REGS();
L_4342c3: /* 4342c3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4342c4: mov ebp, esp */
  ebp = esp;
/* 4342c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4342c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4342c8: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4342cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4342cc: fcom qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
/* 4342d2: xor edx, edx */
  edx = 0;
/* 4342d4: xor esi, esi */
  esi = 0;
/* 4342d6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4342d8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4342db: jp 0x4342df */
  if (pf) goto L_4342df;
L_4342dd: /* 4342dd: fchs  */
  ST0 = -ST0;
L_4342df: /* 4342df: mov eax, 0x7ff00000 */
  eax = 0x7ff00000u;
/* 4342e4: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 4342e7: cmp dword ptr [ebp + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4342ea: mov ecx, 0xfff00000 */
  ecx = 0xfff00000u;
/* 4342ef: jne 0x43432f */
  if (!zf) goto L_43432f;
L_4342f1: /* 4342f1: cmp dword ptr [ebp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4342f4: jne 0x43436e */
  if (!zf) goto L_43436e;
L_4342f6: /* 4342f6: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 4342f9: fcomp qword ptr [0x441208] */
  fpu_com(ST0, F64((uint32_t)(0x441208u)));
  FPOP();
/* 4342ff: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 434301: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434304: je 0x43438c */
  if (zf) goto L_43438c;
L_43430a: /* 43430a: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 43430d: fcomp qword ptr [0x441208] */
  fpu_com(ST0, F64((uint32_t)(0x441208u)));
  FPOP();
/* 434313: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 434315: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 434318: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 43431b: jnp 0x4343aa */
  if (!pf) goto L_4343aa;
L_434321: /* 434321: fld qword ptr [0x44ebb0] */
  { double v = F64((uint32_t)(0x44ebb0u)); FPUSH(v); }
/* 434327: xor esi, esi */
  esi = 0;
/* 434329: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 43432a: jmp 0x43441e */
  goto L_43441e;
L_43432f: /* 43432f: cmp dword ptr [ebp + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434332: jne 0x43436e */
  if (!zf) goto L_43436e;
L_434334: /* 434334: cmp dword ptr [ebp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434337: jne 0x43436e */
  if (!zf) goto L_43436e;
L_434339: /* 434339: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 43433c: fcomp qword ptr [0x441208] */
  fpu_com(ST0, F64((uint32_t)(0x441208u)));
  FPOP();
/* 434342: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 434344: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434347: jne 0x434350 */
  if (!zf) goto L_434350;
L_434349: /* 434349: fldz  */
  FPUSH(0.0);
/* 43434b: jmp 0x43441b */
  goto L_43441b;
L_434350: /* 434350: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 434353: fcomp qword ptr [0x441208] */
  fpu_com(ST0, F64((uint32_t)(0x441208u)));
  FPOP();
/* 434359: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 43435b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 43435e: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 434361: jp 0x434321 */
  if (pf) goto L_434321;
L_434363: /* 434363: fld qword ptr [0x44eba8] */
  { double v = F64((uint32_t)(0x44eba8u)); FPUSH(v); }
/* 434369: jmp 0x43441e */
  goto L_43441e;
L_43436e: /* 43436e: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434371: jne 0x4343b2 */
  if (!zf) goto L_4343b2;
L_434373: /* 434373: cmp dword ptr [ebp + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434376: jne 0x434420 */
  if (!zf) goto L_434420;
L_43437c: /* 43437c: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 43437f: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 434385: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 434387: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43438a: jne 0x434397 */
  if (!zf) goto L_434397;
L_43438c: /* 43438c: fld qword ptr [0x44eba8] */
  { double v = F64((uint32_t)(0x44eba8u)); FPUSH(v); }
/* 434392: jmp 0x43441b */
  goto L_43441b;
L_434397: /* 434397: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 43439a: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 4343a0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4343a2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4343a5: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 4343a8: jp 0x4343ae */
  if (pf) goto L_4343ae;
L_4343aa: /* 4343aa: fldz  */
  FPUSH(0.0);
/* 4343ac: jmp 0x43441e */
  goto L_43441e;
L_4343ae: /* 4343ae: fld1  */
  FPUSH(1.0);
/* 4343b0: jmp 0x43441e */
  goto L_43441e;
L_4343b2: /* 4343b2: cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4343b5: jne 0x434420 */
  if (!zf) goto L_434420;
L_4343b7: /* 4343b7: cmp dword ptr [ebp + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4343ba: jne 0x434420 */
  if (!zf) goto L_434420;
L_4343bc: /* 4343bc: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 4343bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4343c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4343c1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4343c4: call 0x434259 */
  esp -= 4; W32(esp, 0x4343c9u); SPILL(); f_434259(); if (g_unwind) return; RELOAD();
/* 4343c9: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 4343cc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4343cd: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 4343d3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4343d4: mov ecx, eax */
  ecx = eax;
/* 4343d6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4343d8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4343db: jne 0x4343f2 */
  if (!zf) goto L_4343f2;
L_4343dd: /* 4343dd: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4343e0: fld qword ptr [0x44eba8] */
  { double v = F64((uint32_t)(0x44eba8u)); FPUSH(v); }
/* 4343e6: jne 0x4343ea */
  if (!zf) goto L_4343ea;
L_4343e8: /* 4343e8: fchs  */
  ST0 = -ST0;
L_4343ea: /* 4343ea: fstp qword ptr [ebp + 0x10] */
  WF64((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 4343ed: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 4343f0: jmp 0x43441b */
  goto L_43441b;
L_4343f2: /* 4343f2: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 4343f5: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 4343fb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4343fd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 434400: jp 0x434419 */
  if (pf) goto L_434419;
L_434402: /* 434402: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434405: jne 0x43440f */
  if (!zf) goto L_43440f;
L_434407: /* 434407: fld qword ptr [0x44ebc0] */
  { double v = F64((uint32_t)(0x44ebc0u)); FPUSH(v); }
/* 43440d: jmp 0x434411 */
  goto L_434411;
L_43440f: /* 43440f: fldz  */
  FPUSH(0.0);
L_434411: /* 434411: fstp qword ptr [ebp + 0x10] */
  WF64((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 434414: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 434417: jmp 0x43441b */
  goto L_43441b;
L_434419: /* 434419: fld1  */
  FPUSH(1.0);
L_43441b: /* 43441b: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
L_43441e: /* 43441e: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
L_434420: /* 434420: mov eax, esi */
  eax = esi;
/* 434422: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 434423: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 434424: ret  */
  esp += 4; SPILL(); return;
}

void f_434425(void) {
  LOAD_REGS();
L_434425: /* 434425: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 434426: mov ebp, esp */
  ebp = esp;
/* 434428: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 43442b: xor eax, eax */
  eax = 0;
/* 43442d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 434430: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 434433: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 434436: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 434439: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 43443a: xor ebx, ebx */
  ebx = 0;
/* 43443c: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 43443f: mov cl, byte ptr [ebp + 0x10] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x10u))) & 0xffu);
/* 434442: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 434443: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 434444: test cl, 0x10 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434447: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 434448: je 0x434457 */
  if (zf) goto L_434457;
L_43444a: /* 43444a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 43444d: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 434450: mov dword ptr [ebp + 0x10], 0xc000008f */
  W32((uint32_t)(ebp + 0x10u), 0xc000008fu);
L_434457: /* 434457: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43445a: je 0x43446a */
  if (zf) goto L_43446a;
L_43445c: /* 43445c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 43445f: or dword ptr [eax + 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 434463: mov dword ptr [ebp + 0x10], 0xc0000093 */
  W32((uint32_t)(ebp + 0x10u), 0xc0000093u);
L_43446a: /* 43446a: test bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43446c: je 0x43447c */
  if (zf) goto L_43447c;
L_43446e: /* 43446e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 434471: or dword ptr [eax + 4], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 434475: mov dword ptr [ebp + 0x10], 0xc0000091 */
  W32((uint32_t)(ebp + 0x10u), 0xc0000091u);
L_43447c: /* 43447c: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43447f: je 0x43448f */
  if (zf) goto L_43448f;
L_434481: /* 434481: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 434484: or dword ptr [eax + 4], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 434488: mov dword ptr [ebp + 0x10], 0xc000008e */
  W32((uint32_t)(ebp + 0x10u), 0xc000008eu);
L_43448f: /* 43448f: test cl, 8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434492: je 0x4344a2 */
  if (zf) goto L_4344a2;
L_434494: /* 434494: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 434497: or dword ptr [eax + 4], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 43449b: mov dword ptr [ebp + 0x10], 0xc0000090 */
  W32((uint32_t)(ebp + 0x10u), 0xc0000090u);
L_4344a2: /* 4344a2: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 4344a5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4344a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4344aa: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 4344ad: not ecx */
  ecx = ~ecx;
/* 4344af: xor ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4344b2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4344b4: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4344b7: xor dword ptr [eax + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(eax + 0x8u), r);
  }
/* 4344ba: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4344bc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4344bf: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 4344c1: not ecx */
  ecx = ~ecx;
/* 4344c3: xor ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4344c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4344c7: and ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4344ca: xor dword ptr [eax + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(eax + 0x8u), r);
  }
/* 4344cd: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4344cf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4344d2: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 4344d4: not ecx */
  ecx = ~ecx;
/* 4344d6: xor ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4344d9: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4344dc: xor dword ptr [eax + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(eax + 0x8u), r);
  }
/* 4344df: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4344e1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4344e4: shr ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 4344e7: not ecx */
  ecx = ~ecx;
/* 4344e9: xor ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4344ec: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4344ee: xor dword ptr [eax + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(eax + 0x8u), r);
  }
/* 4344f1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4344f3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4344f6: shr ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 4344f9: not ecx */
  ecx = ~ecx;
/* 4344fb: xor ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4344fe: and ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 434500: xor dword ptr [eax + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(eax + 0x8u), r);
  }
/* 434503: call 0x434d72 */
  esp -= 4; W32(esp, 0x434508u); SPILL(); f_434d72(); if (g_unwind) return; RELOAD();
/* 434508: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43450a: je 0x434513 */
  if (zf) goto L_434513;
L_43450c: /* 43450c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 43450f: or dword ptr [ecx + 0xc], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
L_434513: /* 434513: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434515: je 0x43451e */
  if (zf) goto L_43451e;
L_434517: /* 434517: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 43451a: or dword ptr [ecx + 0xc], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
L_43451e: /* 43451e: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434520: je 0x434529 */
  if (zf) goto L_434529;
L_434522: /* 434522: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 434525: or dword ptr [ecx + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
L_434529: /* 434529: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43452b: je 0x434533 */
  if (zf) goto L_434533;
L_43452d: /* 43452d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 434530: or dword ptr [ecx + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
L_434533: /* 434533: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434535: je 0x43453d */
  if (zf) goto L_43453d;
L_434537: /* 434537: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 43453a: or dword ptr [eax + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
L_43453d: /* 43453d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 43453f: mov ecx, 0xc00 */
  ecx = 0xc00u;
/* 434544: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 434546: je 0x43457c */
  if (zf) goto L_43457c;
L_434548: /* 434548: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43454d: je 0x43456e */
  if (zf) goto L_43456e;
L_43454f: /* 43454f: cmp eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434554: je 0x434562 */
  if (zf) goto L_434562;
L_434556: /* 434556: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434558: jne 0x434582 */
  if (!zf) goto L_434582;
L_43455a: /* 43455a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 43455d: or dword ptr [eax], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 434560: jmp 0x434582 */
  goto L_434582;
L_434562: /* 434562: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 434565: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 434567: and ecx, 0xfffffffe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 43456a: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 43456c: jmp 0x434578 */
  goto L_434578;
L_43456e: /* 43456e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 434571: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 434573: and ecx, 0xfffffffd */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 434576: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_434578: /* 434578: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 43457a: jmp 0x434582 */
  goto L_434582;
L_43457c: /* 43457c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 43457f: and dword ptr [eax], 0xfffffffc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
L_434582: /* 434582: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 434584: mov ecx, 0x300 */
  ecx = 0x300u;
/* 434589: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 43458b: je 0x4345ad */
  if (zf) goto L_4345ad;
L_43458d: /* 43458d: cmp eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434592: je 0x4345a0 */
  if (zf) goto L_4345a0;
L_434594: /* 434594: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434596: jne 0x4345ba */
  if (!zf) goto L_4345ba;
L_434598: /* 434598: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 43459b: and dword ptr [eax], 0xffffffe3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xffffffe3u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 43459e: jmp 0x4345ba */
  goto L_4345ba;
L_4345a0: /* 4345a0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4345a3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4345a5: and ecx, 0xffffffe7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffe7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4345a8: or ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4345ab: jmp 0x4345b8 */
  goto L_4345b8;
L_4345ad: /* 4345ad: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4345b0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4345b2: and ecx, 0xffffffeb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffebu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4345b5: or ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_4345b8: /* 4345b8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_4345ba: /* 4345ba: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4345bd: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 4345c0: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 4345c3: xor ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4345c5: and ecx, 0x1ffe0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ffe0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4345cb: xor dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(eax), r);
  }
/* 4345cd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4345d0: or dword ptr [eax + 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x20u), r);
  }
/* 4345d3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4345d6: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 4345d9: and ecx, 0xffffffe3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffe3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4345dc: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4345de: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 4345e1: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 4345e4: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 4345e6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4345e9: fstp qword ptr [eax + 0x10] */
  WF64((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 4345ec: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4345ef: or dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 4345f2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4345f5: mov ecx, dword ptr [eax + 0x60] */
  ecx = R32((uint32_t)(eax + 0x60u));
/* 4345f8: and ecx, 0xffffffe3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffe3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4345fb: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4345fd: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 434600: mov dword ptr [eax + 0x60], ecx */
  W32((uint32_t)(eax + 0x60u), ecx);
/* 434603: fld qword ptr [edi] */
  { double v = F64((uint32_t)(edi)); FPUSH(v); }
/* 434605: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 434608: fstp qword ptr [eax + 0x50] */
  WF64((uint32_t)(eax + 0x50u), ST0); FPOP();
/* 43460b: call 0x434d7d */
  esp -= 4; W32(esp, 0x434610u); SPILL(); f_434d7d(); if (g_unwind) return; RELOAD();
/* 434610: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 434613: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 434614: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 434615: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 434617: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 43461a: call dword ptr [0x4391c4] */
  esp -= 4; W32(esp, 0x434620u); SPILL(); call_ind(R32(0x4391c4u)); if (g_unwind) return; /* KERNEL32!RaiseException */ RELOAD();
/* 434620: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 434623: test byte ptr [eax + 8], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x8u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434627: je 0x43462c */
  if (zf) goto L_43462c;
L_434629: /* 434629: and dword ptr [esi], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
L_43462c: /* 43462c: test byte ptr [eax + 8], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x8u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434630: je 0x434635 */
  if (zf) goto L_434635;
L_434632: /* 434632: and dword ptr [esi], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
L_434635: /* 434635: test byte ptr [eax + 8], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x8u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434639: je 0x43463e */
  if (zf) goto L_43463e;
L_43463b: /* 43463b: and dword ptr [esi], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
L_43463e: /* 43463e: test byte ptr [eax + 8], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x8u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434642: je 0x434647 */
  if (zf) goto L_434647;
L_434644: /* 434644: and dword ptr [esi], 0xffffffef */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
L_434647: /* 434647: test byte ptr [eax + 8], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x8u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43464a: je 0x43464f */
  if (zf) goto L_43464f;
L_43464c: /* 43464c: and dword ptr [esi], 0xffffffdf */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xffffffdfu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
L_43464f: /* 43464f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 434651: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 434654: sub ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 434657: mov edx, 0xfffff3ff */
  edx = 0xfffff3ffu;
/* 43465c: je 0x43468f */
  if (zf) goto L_43468f;
L_43465e: /* 43465e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 43465f: je 0x43467d */
  if (zf) goto L_43467d;
L_434661: /* 434661: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 434662: je 0x43466d */
  if (zf) goto L_43466d;
L_434664: /* 434664: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 434665: jne 0x434691 */
  if (!zf) goto L_434691;
L_434667: /* 434667: or byte ptr [esi + 1], 0xc */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1u))); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi + 0x1u), r);
  }
/* 43466b: jmp 0x434691 */
  goto L_434691;
L_43466d: /* 43466d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 43466f: and ecx, 0xfffffbff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffbffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 434675: or ecx, 0x800 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 43467b: jmp 0x43468b */
  goto L_43468b;
L_43467d: /* 43467d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 43467f: and ecx, 0xfffff7ff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffff7ffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 434685: or ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_43468b: /* 43468b: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 43468d: jmp 0x434691 */
  goto L_434691;
L_43468f: /* 43468f: and dword ptr [esi], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
L_434691: /* 434691: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 434693: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 434696: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 434699: sub ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 43469c: je 0x4346b4 */
  if (zf) goto L_4346b4;
L_43469e: /* 43469e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 43469f: je 0x4346a8 */
  if (zf) goto L_4346a8;
L_4346a1: /* 4346a1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 4346a2: jne 0x4346c0 */
  if (!zf) goto L_4346c0;
L_4346a4: /* 4346a4: and dword ptr [esi], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
/* 4346a6: jmp 0x4346c0 */
  goto L_4346c0;
L_4346a8: /* 4346a8: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4346aa: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4346ac: or ecx, 0x200 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4346b2: jmp 0x4346be */
  goto L_4346be;
L_4346b4: /* 4346b4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4346b6: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4346b8: or ecx, 0x300 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x300u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_4346be: /* 4346be: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
L_4346c0: /* 4346c0: fld qword ptr [eax + 0x50] */
  { double v = F64((uint32_t)(eax + 0x50u)); FPUSH(v); }
/* 4346c3: fstp qword ptr [edi] */
  WF64((uint32_t)(edi), ST0); FPOP();
/* 4346c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4346c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4346c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4346c8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4346c9: ret  */
  esp += 4; SPILL(); return;
}

void f_434544(void) {
  LOAD_REGS();
L_434544: /* 434544: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 434546: je 0x43457c */
  if (zf) goto L_43457c;
L_434548: /* 434548: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43454d: je 0x43456e */
  if (zf) goto L_43456e;
L_43454f: /* 43454f: cmp eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434554: je 0x434562 */
  if (zf) goto L_434562;
L_434556: /* 434556: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434558: jne 0x434582 */
  if (!zf) goto L_434582;
L_43455a: /* 43455a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 43455d: or dword ptr [eax], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 434560: jmp 0x434582 */
  goto L_434582;
L_434562: /* 434562: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 434565: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 434567: and ecx, 0xfffffffe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 43456a: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 43456c: jmp 0x434578 */
  goto L_434578;
L_43456e: /* 43456e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 434571: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 434573: and ecx, 0xfffffffd */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 434576: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_434578: /* 434578: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 43457a: jmp 0x434582 */
  goto L_434582;
L_43457c: /* 43457c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 43457f: and dword ptr [eax], 0xfffffffc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
L_434582: /* 434582: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 434584: mov ecx, 0x300 */
  ecx = 0x300u;
/* 434589: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 43458b: je 0x4345ad */
  if (zf) goto L_4345ad;
L_43458d: /* 43458d: cmp eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434592: je 0x4345a0 */
  if (zf) goto L_4345a0;
L_434594: /* 434594: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434596: jne 0x4345ba */
  if (!zf) goto L_4345ba;
L_434598: /* 434598: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 43459b: and dword ptr [eax], 0xffffffe3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xffffffe3u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 43459e: jmp 0x4345ba */
  goto L_4345ba;
L_4345a0: /* 4345a0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4345a3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4345a5: and ecx, 0xffffffe7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffe7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4345a8: or ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4345ab: jmp 0x4345b8 */
  goto L_4345b8;
L_4345ad: /* 4345ad: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4345b0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4345b2: and ecx, 0xffffffeb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffebu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4345b5: or ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_4345b8: /* 4345b8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_4345ba: /* 4345ba: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4345bd: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 4345c0: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 4345c3: xor ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4345c5: and ecx, 0x1ffe0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ffe0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4345cb: xor dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(eax), r);
  }
/* 4345cd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4345d0: or dword ptr [eax + 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x20u), r);
  }
/* 4345d3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4345d6: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 4345d9: and ecx, 0xffffffe3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffe3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4345dc: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4345de: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 4345e1: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 4345e4: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 4345e6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4345e9: fstp qword ptr [eax + 0x10] */
  WF64((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 4345ec: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4345ef: or dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 4345f2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4345f5: mov ecx, dword ptr [eax + 0x60] */
  ecx = R32((uint32_t)(eax + 0x60u));
/* 4345f8: and ecx, 0xffffffe3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffe3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4345fb: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4345fd: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 434600: mov dword ptr [eax + 0x60], ecx */
  W32((uint32_t)(eax + 0x60u), ecx);
/* 434603: fld qword ptr [edi] */
  { double v = F64((uint32_t)(edi)); FPUSH(v); }
/* 434605: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 434608: fstp qword ptr [eax + 0x50] */
  WF64((uint32_t)(eax + 0x50u), ST0); FPOP();
/* 43460b: call 0x434d7d */
  esp -= 4; W32(esp, 0x434610u); SPILL(); f_434d7d(); if (g_unwind) return; RELOAD();
/* 434610: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 434613: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 434614: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 434615: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 434617: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 43461a: call dword ptr [0x4391c4] */
  esp -= 4; W32(esp, 0x434620u); SPILL(); call_ind(R32(0x4391c4u)); if (g_unwind) return; /* KERNEL32!RaiseException */ RELOAD();
/* 434620: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 434623: test byte ptr [eax + 8], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x8u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434627: je 0x43462c */
  if (zf) goto L_43462c;
L_434629: /* 434629: and dword ptr [esi], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
L_43462c: /* 43462c: test byte ptr [eax + 8], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x8u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434630: je 0x434635 */
  if (zf) goto L_434635;
L_434632: /* 434632: and dword ptr [esi], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
L_434635: /* 434635: test byte ptr [eax + 8], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x8u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434639: je 0x43463e */
  if (zf) goto L_43463e;
L_43463b: /* 43463b: and dword ptr [esi], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
L_43463e: /* 43463e: test byte ptr [eax + 8], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x8u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434642: je 0x434647 */
  if (zf) goto L_434647;
L_434644: /* 434644: and dword ptr [esi], 0xffffffef */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
L_434647: /* 434647: test byte ptr [eax + 8], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x8u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43464a: je 0x43464f */
  if (zf) goto L_43464f;
L_43464c: /* 43464c: and dword ptr [esi], 0xffffffdf */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xffffffdfu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
L_43464f: /* 43464f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 434651: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 434654: sub ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 434657: mov edx, 0xfffff3ff */
  edx = 0xfffff3ffu;
/* 43465c: je 0x43468f */
  if (zf) goto L_43468f;
L_43465e: /* 43465e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 43465f: je 0x43467d */
  if (zf) goto L_43467d;
L_434661: /* 434661: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 434662: je 0x43466d */
  if (zf) goto L_43466d;
L_434664: /* 434664: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 434665: jne 0x434691 */
  if (!zf) goto L_434691;
L_434667: /* 434667: or byte ptr [esi + 1], 0xc */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1u))); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi + 0x1u), r);
  }
/* 43466b: jmp 0x434691 */
  goto L_434691;
L_43466d: /* 43466d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 43466f: and ecx, 0xfffffbff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffbffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 434675: or ecx, 0x800 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 43467b: jmp 0x43468b */
  goto L_43468b;
L_43467d: /* 43467d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 43467f: and ecx, 0xfffff7ff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffff7ffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 434685: or ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_43468b: /* 43468b: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 43468d: jmp 0x434691 */
  goto L_434691;
L_43468f: /* 43468f: and dword ptr [esi], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
L_434691: /* 434691: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 434693: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 434696: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 434699: sub ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 43469c: je 0x4346b4 */
  if (zf) goto L_4346b4;
L_43469e: /* 43469e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 43469f: je 0x4346a8 */
  if (zf) goto L_4346a8;
L_4346a1: /* 4346a1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 4346a2: jne 0x4346c0 */
  if (!zf) goto L_4346c0;
L_4346a4: /* 4346a4: and dword ptr [esi], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
/* 4346a6: jmp 0x4346c0 */
  goto L_4346c0;
L_4346a8: /* 4346a8: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4346aa: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4346ac: or ecx, 0x200 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4346b2: jmp 0x4346be */
  goto L_4346be;
L_4346b4: /* 4346b4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4346b6: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4346b8: or ecx, 0x300 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x300u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_4346be: /* 4346be: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
L_4346c0: /* 4346c0: fld qword ptr [eax + 0x50] */
  { double v = F64((uint32_t)(eax + 0x50u)); FPUSH(v); }
/* 4346c3: fstp qword ptr [edi] */
  WF64((uint32_t)(edi), ST0); FPOP();
/* 4346c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4346c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4346c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4346c8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4346c9: ret  */
  esp += 4; SPILL(); return;
}

void f_4346ca(void) {
  LOAD_REGS();
L_4346ca: /* 4346ca: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4346cb: mov ebp, esp */
  ebp = esp;
/* 4346cd: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4346d0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4346d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4346d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4346d5: xor ebx, ebx */
  ebx = 0;
/* 4346d7: mov esi, eax */
  esi = eax;
/* 4346d9: and esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 4346dc: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4346dd: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4346df: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 4346e2: je 0x4346f8 */
  if (zf) goto L_4346f8;
L_4346e4: /* 4346e4: test byte ptr [ebp + 0x10], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4346e7: je 0x4346f8 */
  if (zf) goto L_4346f8;
L_4346e9: /* 4346e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4346ea: call 0x434dad */
  esp -= 4; W32(esp, 0x4346efu); SPILL(); f_434dad(); if (g_unwind) return; RELOAD();
/* 4346ef: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4346f0: and esi, 0xfffffff7 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 4346f3: jmp 0x4348ca */
  goto L_4348ca;
L_4346f8: /* 4346f8: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4346fa: je 0x434712 */
  if (zf) goto L_434712;
L_4346fc: /* 4346fc: test byte ptr [ebp + 0x10], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434700: je 0x434712 */
  if (zf) goto L_434712;
L_434702: /* 434702: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 434704: call 0x434dad */
  esp -= 4; W32(esp, 0x434709u); SPILL(); f_434dad(); if (g_unwind) return; RELOAD();
/* 434709: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43470a: and esi, 0xfffffffb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 43470d: jmp 0x4348ca */
  goto L_4348ca;
L_434712: /* 434712: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434714: je 0x4347f2 */
  if (zf) goto L_4347f2;
L_43471a: /* 43471a: test byte ptr [ebp + 0x10], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43471e: je 0x4347f2 */
  if (zf) goto L_4347f2;
L_434724: /* 434724: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 434726: call 0x434dad */
  esp -= 4; W32(esp, 0x43472bu); SPILL(); f_434dad(); if (g_unwind) return; RELOAD();
/* 43472b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 43472e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43472f: mov ecx, 0xc00 */
  ecx = 0xc00u;
/* 434734: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 434736: je 0x4347c8 */
  if (zf) goto L_4347c8;
L_43473c: /* 43473c: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434741: je 0x43479e */
  if (zf) goto L_43479e;
L_434743: /* 434743: cmp eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434748: je 0x434774 */
  if (zf) goto L_434774;
L_43474a: /* 43474a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43474c: jne 0x4347ea */
  if (!zf) goto L_4347ea;
L_434752: /* 434752: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 434755: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 434757: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 43475d: fld qword ptr [0x44ebb8] */
  { double v = F64((uint32_t)(0x44ebb8u)); FPUSH(v); }
/* 434763: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 434765: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434768: je 0x43476c */
  if (zf) goto L_43476c;
L_43476a: /* 43476a: fchs  */
  ST0 = -ST0;
L_43476c: /* 43476c: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 43476f: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 434772: jmp 0x4347e8 */
  goto L_4347e8;
L_434774: /* 434774: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 434777: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 434779: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 43477f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 434781: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434784: jne 0x43478e */
  if (!zf) goto L_43478e;
L_434786: /* 434786: fld qword ptr [0x44eba8] */
  { double v = F64((uint32_t)(0x44eba8u)); FPUSH(v); }
/* 43478c: jmp 0x434796 */
  goto L_434796;
L_43478e: /* 43478e: fld qword ptr [0x44ebb8] */
  { double v = F64((uint32_t)(0x44ebb8u)); FPUSH(v); }
/* 434794: fchs  */
  ST0 = -ST0;
L_434796: /* 434796: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 434799: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 43479c: jmp 0x4347e8 */
  goto L_4347e8;
L_43479e: /* 43479e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 4347a1: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 4347a3: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 4347a9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4347ab: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4347ae: jne 0x4347b8 */
  if (!zf) goto L_4347b8;
L_4347b0: /* 4347b0: fld qword ptr [0x44ebb8] */
  { double v = F64((uint32_t)(0x44ebb8u)); FPUSH(v); }
/* 4347b6: jmp 0x4347c0 */
  goto L_4347c0;
L_4347b8: /* 4347b8: fld qword ptr [0x44eba8] */
  { double v = F64((uint32_t)(0x44eba8u)); FPUSH(v); }
/* 4347be: fchs  */
  ST0 = -ST0;
L_4347c0: /* 4347c0: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 4347c3: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 4347c6: jmp 0x4347e8 */
  goto L_4347e8;
L_4347c8: /* 4347c8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 4347cb: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 4347cd: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 4347d3: fld qword ptr [0x44eba8] */
  { double v = F64((uint32_t)(0x44eba8u)); FPUSH(v); }
/* 4347d9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4347db: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4347de: je 0x4347e2 */
  if (zf) goto L_4347e2;
L_4347e0: /* 4347e0: fchs  */
  ST0 = -ST0;
L_4347e2: /* 4347e2: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 4347e5: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
L_4347e8: /* 4347e8: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
L_4347ea: /* 4347ea: and esi, 0xfffffffe */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 4347ed: jmp 0x4348ca */
  goto L_4348ca;
L_4347f2: /* 4347f2: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4347f4: je 0x4348ca */
  if (zf) goto L_4348ca;
L_4347fa: /* 4347fa: test byte ptr [ebp + 0x10], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4347fe: je 0x4348ca */
  if (zf) goto L_4348ca;
L_434804: /* 434804: xor esi, esi */
  esi = 0;
/* 434806: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434808: je 0x43480c */
  if (zf) goto L_43480c;
L_43480a: /* 43480a: mov esi, ebx */
  esi = ebx;
L_43480c: /* 43480c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 43480d: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 434810: fld qword ptr [edi] */
  { double v = F64((uint32_t)(edi)); FPUSH(v); }
/* 434812: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 434818: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 43481a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 43481d: jnp 0x4348b4 */
  if (!pf) goto L_4348b4;
L_434823: /* 434823: fld qword ptr [edi] */
  { double v = F64((uint32_t)(edi)); FPUSH(v); }
/* 434825: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 434828: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 434829: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43482a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43482b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 43482e: call 0x434cb8 */
  esp -= 4; W32(esp, 0x434833u); SPILL(); f_434cb8(); if (g_unwind) return; RELOAD();
/* 434833: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 434836: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 434839: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 43483c: add ecx, 0xfffffa00 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffa00u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 434842: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 434845: cmp ecx, 0xfffffbce */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffbceu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 43484b: jge 0x434857 */
  if ((sf == of)) goto L_434857;
L_43484d: /* 43484d: fmul qword ptr [0x43fc10] */
  ST0 = ST0 * (F64((uint32_t)(0x43fc10u)));
/* 434853: mov esi, ebx */
  esi = ebx;
/* 434855: jmp 0x4348aa */
  goto L_4348aa;
L_434857: /* 434857: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 43485d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 43485f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 434862: jp 0x434868 */
  if (pf) goto L_434868;
L_434864: /* 434864: mov edx, ebx */
  edx = ebx;
/* 434866: jmp 0x43486a */
  goto L_43486a;
L_434868: /* 434868: xor edx, edx */
  edx = 0;
L_43486a: /* 43486a: xor eax, eax */
  eax = 0;
/* 43486c: mov al, byte ptr [ebp - 0xa] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xfffffff6u))) & 0xffu);
/* 43486f: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 434872: or eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 434875: mov word ptr [ebp - 0xa], ax */
  W16((uint32_t)(ebp + 0xfffffff6u), (eax & 0xffffu));
/* 434879: mov eax, 0xfffffc03 */
  eax = 0xfffffc03u;
/* 43487e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 434880: jge 0x4348a1 */
  if ((sf == of)) goto L_4348a1;
L_434882: /* 434882: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_434884: /* 434884: test byte ptr [ebp - 0x10], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff0u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434887: je 0x43488f */
  if (zf) goto L_43488f;
L_434889: /* 434889: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43488b: jne 0x43488f */
  if (!zf) goto L_43488f;
L_43488d: /* 43488d: mov esi, ebx */
  esi = ebx;
L_43488f: /* 43488f: shr dword ptr [ebp - 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 434892: test byte ptr [ebp - 0xc], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434895: je 0x43489b */
  if (zf) goto L_43489b;
L_434897: /* 434897: or byte ptr [ebp - 0xd], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff3u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff3u), r);
  }
L_43489b: /* 43489b: shr dword ptr [ebp - 0xc], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 43489e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 43489f: jne 0x434884 */
  if (!zf) goto L_434884;
L_4348a1: /* 4348a1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4348a3: je 0x4348ad */
  if (zf) goto L_4348ad;
L_4348a5: /* 4348a5: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 4348a8: fchs  */
  ST0 = -ST0;
L_4348aa: /* 4348aa: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
L_4348ad: /* 4348ad: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 4348b0: fstp qword ptr [edi] */
  WF64((uint32_t)(edi), ST0); FPOP();
/* 4348b2: jmp 0x4348b6 */
  goto L_4348b6;
L_4348b4: /* 4348b4: mov esi, ebx */
  esi = ebx;
L_4348b6: /* 4348b6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4348b8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4348b9: je 0x4348c3 */
  if (zf) goto L_4348c3;
L_4348bb: /* 4348bb: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 4348bd: call 0x434dad */
  esp -= 4; W32(esp, 0x4348c2u); SPILL(); f_434dad(); if (g_unwind) return; RELOAD();
/* 4348c2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4348c3: /* 4348c3: and dword ptr [ebp - 4], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4348c7: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
L_4348ca: /* 4348ca: test byte ptr [ebp + 8], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x8u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4348ce: je 0x4348e1 */
  if (zf) goto L_4348e1;
L_4348d0: /* 4348d0: test byte ptr [ebp + 0x10], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4348d4: je 0x4348e1 */
  if (zf) goto L_4348e1;
L_4348d6: /* 4348d6: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 4348d8: call 0x434dad */
  esp -= 4; W32(esp, 0x4348ddu); SPILL(); f_434dad(); if (g_unwind) return; RELOAD();
/* 4348dd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4348de: and esi, 0xffffffef */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
L_4348e1: /* 4348e1: xor eax, eax */
  eax = 0;
/* 4348e3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4348e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4348e6: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4348e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4348ea: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4348eb: ret  */
  esp += 4; SPILL(); return;
}

void f_4348ec(void) {
  LOAD_REGS();
L_4348ec: /* 4348ec: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4348f0: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4348f3: je 0x434908 */
  if (zf) goto L_434908;
L_4348f5: /* 4348f5: jle 0x434913 */
  if ((zf || sf != of)) goto L_434913;
L_4348f7: /* 4348f7: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4348fa: jg 0x434913 */
  if ((!zf && sf == of)) goto L_434913;
L_4348fc: /* 4348fc: call 0x4102a5 */
  esp -= 4; W32(esp, 0x434901u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 434901: mov dword ptr [eax], 0x22 */
  W32((uint32_t)(eax), 0x22u);
/* 434907: ret  */
  esp += 4; SPILL(); return;
L_434908: /* 434908: call 0x4102a5 */
  esp -= 4; W32(esp, 0x43490du); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 43490d: mov dword ptr [eax], 0x21 */
  W32((uint32_t)(eax), 0x21u);
L_434913: /* 434913: ret  */
  esp += 4; SPILL(); return;
}

void f_434914(void) {
  LOAD_REGS();
L_434914: /* 434914: mov al, byte ptr [esp + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x4u))) & 0xffu);
/* 434918: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43491a: je 0x434920 */
  if (zf) goto L_434920;
L_43491c: /* 43491c: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 43491e: jmp 0x434936 */
  goto L_434936;
L_434920: /* 434920: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434922: je 0x434928 */
  if (zf) goto L_434928;
L_434924: /* 434924: xor eax, eax */
  eax = 0;
/* 434926: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 434927: ret  */
  esp += 4; SPILL(); return;
L_434928: /* 434928: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43492a: je 0x434930 */
  if (zf) goto L_434930;
L_43492c: /* 43492c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 43492e: jmp 0x434936 */
  goto L_434936;
L_434930: /* 434930: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434932: je 0x434938 */
  if (zf) goto L_434938;
L_434934: /* 434934: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
L_434936: /* 434936: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 434937: ret  */
  esp += 4; SPILL(); return;
L_434938: /* 434938: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 43493b: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 43493e: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 434940: ret  */
  esp += 4; SPILL(); return;
}

void f_434941(void) {
  LOAD_REGS();
L_434941: /* 434941: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 434942: mov ebp, esp */
  ebp = esp;
/* 434944: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 434947: xor eax, eax */
  eax = 0;
L_434949: /* 434949: mov ecx, dword ptr [eax*8 + 0x44eac0] */
  ecx = R32((uint32_t)(eax*8 + 0x44eac0u));
/* 434950: cmp ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434953: je 0x4349b9 */
  if (zf) goto L_4349b9;
L_434955: /* 434955: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 434956: cmp eax, 0x1d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1du);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 434959: jl 0x434949 */
  if ((sf != of)) goto L_434949;
L_43495b: /* 43495b: xor eax, eax */
  eax = 0;
L_43495d: /* 43495d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43495f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 434962: je 0x4349c2 */
  if (zf) goto L_4349c2;
L_434964: /* 434964: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 434967: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 43496a: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 43496d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 434970: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 434973: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 434976: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 434979: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 43497a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 43497d: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 434980: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 434983: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 434986: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 434989: push 0xffff */
  { uint32_t v = 0xffffu; esp -= 4; W32(esp, v); }
/* 43498e: push dword ptr [ebp + 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0x28u)); esp -= 4; W32(esp, v); }
/* 434991: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 434994: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 434997: call 0x434d89 */
  esp -= 4; W32(esp, 0x43499cu); SPILL(); f_434d89(); if (g_unwind) return; RELOAD();
/* 43499c: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 43499f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4349a0: call 0x40f334 */
  esp -= 4; W32(esp, 0x4349a5u); SPILL(); f_40f334(); if (g_unwind) return; RELOAD();
/* 4349a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4349a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4349aa: jne 0x4349b3 */
  if (!zf) goto L_4349b3;
L_4349ac: /* 4349ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4349ad: call 0x4348ec */
  esp -= 4; W32(esp, 0x4349b2u); SPILL(); f_4348ec(); if (g_unwind) return; RELOAD();
/* 4349b2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4349b3: /* 4349b3: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 4349b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4349b7: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4349b8: ret  */
  esp += 4; SPILL(); return;
L_4349b9: /* 4349b9: mov eax, dword ptr [eax*8 + 0x44eac4] */
  eax = R32((uint32_t)(eax*8 + 0x44eac4u));
/* 4349c0: jmp 0x43495d */
  goto L_43495d;
L_4349c2: /* 4349c2: push 0xffff */
  { uint32_t v = 0xffffu; esp -= 4; W32(esp, v); }
/* 4349c7: push dword ptr [ebp + 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0x28u)); esp -= 4; W32(esp, v); }
/* 4349ca: call 0x434d89 */
  esp -= 4; W32(esp, 0x4349cfu); SPILL(); f_434d89(); if (g_unwind) return; RELOAD();
/* 4349cf: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4349d2: call 0x4348ec */
  esp -= 4; W32(esp, 0x4349d7u); SPILL(); f_4348ec(); if (g_unwind) return; RELOAD();
/* 4349d7: fld qword ptr [ebp + 0x20] */
  { double v = F64((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 4349da: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4349dd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4349de: ret  */
  esp += 4; SPILL(); return;
}

void f_4349df(void) {
  LOAD_REGS();
L_4349df: /* 4349df: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4349e0: mov ebp, esp */
  ebp = esp;
/* 4349e2: cmp dword ptr [0x44ba78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ba78u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4349e9: jne 0x434a13 */
  if (!zf) goto L_434a13;
L_4349eb: /* 4349eb: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4349ee: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 4349f1: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4349f4: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4349f8: fldz  */
  FPUSH(0.0);
/* 4349fa: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4349fe: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 434a01: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 434a04: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 434a07: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 434a09: call 0x434941 */
  esp -= 4; W32(esp, 0x434a0eu); SPILL(); f_434941(); if (g_unwind) return; RELOAD();
/* 434a0e: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 434a11: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 434a12: ret  */
  esp += 4; SPILL(); return;
L_434a13: /* 434a13: call 0x4102a5 */
  esp -= 4; W32(esp, 0x434a18u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 434a18: push 0xffff */
  { uint32_t v = 0xffffu; esp -= 4; W32(esp, v); }
/* 434a1d: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 434a20: mov dword ptr [eax], 0x21 */
  W32((uint32_t)(eax), 0x21u);
/* 434a26: call 0x434d89 */
  esp -= 4; W32(esp, 0x434a2bu); SPILL(); f_434d89(); if (g_unwind) return; RELOAD();
/* 434a2b: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 434a2e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 434a2f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 434a30: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 434a31: ret  */
  esp += 4; SPILL(); return;
}

void f_434a32(void) {
  LOAD_REGS();
L_434a32: /* 434a32: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 434a33: mov ebp, esp */
  ebp = esp;
/* 434a35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 434a36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 434a37: cmp dword ptr [0x44ba78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ba78u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434a3e: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 434a41: fadd qword ptr [ebp + 0x14] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0x14u)));
/* 434a44: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 434a47: jne 0x434a72 */
  if (!zf) goto L_434a72;
L_434a49: /* 434a49: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 434a4c: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 434a4f: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 434a52: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 434a56: fld qword ptr [ebp + 0x14] */
  { double v = F64((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 434a59: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 434a5d: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 434a60: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 434a63: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 434a66: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 434a68: call 0x434941 */
  esp -= 4; W32(esp, 0x434a6du); SPILL(); f_434941(); if (g_unwind) return; RELOAD();
/* 434a6d: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 434a70: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 434a71: ret  */
  esp += 4; SPILL(); return;
L_434a72: /* 434a72: call 0x4102a5 */
  esp -= 4; W32(esp, 0x434a77u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 434a77: push 0xffff */
  { uint32_t v = 0xffffu; esp -= 4; W32(esp, v); }
/* 434a7c: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 434a7f: mov dword ptr [eax], 0x21 */
  W32((uint32_t)(eax), 0x21u);
/* 434a85: call 0x434d89 */
  esp -= 4; W32(esp, 0x434a8au); SPILL(); f_434d89(); if (g_unwind) return; RELOAD();
/* 434a8a: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 434a8d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 434a8e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 434a8f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 434a90: ret  */
  esp += 4; SPILL(); return;
}

void f_434a91(void) {
  LOAD_REGS();
L_434a91: /* 434a91: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 434a92: mov ebp, esp */
  ebp = esp;
/* 434a94: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 434a97: sub esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 434a9d: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 434aa2: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 434aa5: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 434aa8: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 434aaf: lea eax, [ebp + 0x18] */
  eax = (uint32_t)(ebp + 0x18u);
/* 434ab2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 434ab3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 434ab6: call 0x4346ca */
  esp -= 4; W32(esp, 0x434abbu); SPILL(); f_4346ca(); if (g_unwind) return; RELOAD();
/* 434abb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 434abe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 434ac0: jne 0x434ae6 */
  if (!zf) goto L_434ae6;
L_434ac2: /* 434ac2: and dword ptr [esp + 0x40], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x40u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esp + 0x40u), r);
  }
/* 434ac7: lea eax, [ebp + 0x18] */
  eax = (uint32_t)(ebp + 0x18u);
/* 434aca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 434acb: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 434ace: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 434acf: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 434ad2: lea eax, [ebp + 0x20] */
  eax = (uint32_t)(ebp + 0x20u);
/* 434ad5: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 434ad8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 434ad9: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 434add: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 434ade: call 0x434425 */
  esp -= 4; W32(esp, 0x434ae3u); SPILL(); f_434425(); if (g_unwind) return; RELOAD();
/* 434ae3: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_434ae6: /* 434ae6: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 434ae9: call 0x434914 */
  esp -= 4; W32(esp, 0x434aeeu); SPILL(); f_434914(); if (g_unwind) return; RELOAD();
/* 434aee: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 434af1: cmp dword ptr [0x44ba78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ba78u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434af8: jne 0x434b25 */
  if (!zf) goto L_434b25;
L_434afa: /* 434afa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 434afc: je 0x434b25 */
  if (zf) goto L_434b25;
L_434afe: /* 434afe: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 434b01: fld qword ptr [ebp + 0x18] */
  { double v = F64((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 434b04: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 434b07: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 434b0b: fldz  */
  FPUSH(0.0);
/* 434b0d: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 434b11: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 434b14: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 434b17: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 434b1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 434b1b: call 0x434941 */
  esp -= 4; W32(esp, 0x434b20u); SPILL(); f_434941(); if (g_unwind) return; RELOAD();
/* 434b20: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 434b23: jmp 0x434b3f */
  goto L_434b3f;
L_434b25: /* 434b25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 434b26: call 0x4348ec */
  esp -= 4; W32(esp, 0x434b2bu); SPILL(); f_4348ec(); if (g_unwind) return; RELOAD();
/* 434b2b: mov dword ptr [esp], 0xffff */
  W32((uint32_t)(esp), 0xffffu);
/* 434b32: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 434b35: call 0x434d89 */
  esp -= 4; W32(esp, 0x434b3au); SPILL(); f_434d89(); if (g_unwind) return; RELOAD();
/* 434b3a: fld qword ptr [ebp + 0x18] */
  { double v = F64((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 434b3d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 434b3e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_434b3f: /* 434b3f: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 434b43: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 434b46: call 0x4013ab */
  esp -= 4; W32(esp, 0x434b4bu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 434b4b: mov esp, ebp */
  esp = ebp;
/* 434b4d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 434b4e: ret  */
  esp += 4; SPILL(); return;
}

void f_434b4f(void) {
  LOAD_REGS();
L_434b4f: /* 434b4f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 434b50: mov ebp, esp */
  ebp = esp;
/* 434b52: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 434b55: sub esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 434b5b: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 434b60: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 434b63: push dword ptr [ebp + 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0x28u)); esp -= 4; W32(esp, v); }
/* 434b66: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 434b6d: lea eax, [ebp + 0x20] */
  eax = (uint32_t)(ebp + 0x20u);
/* 434b70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 434b71: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 434b74: call 0x4346ca */
  esp -= 4; W32(esp, 0x434b79u); SPILL(); f_4346ca(); if (g_unwind) return; RELOAD();
/* 434b79: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 434b7c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 434b7e: jne 0x434bb4 */
  if (!zf) goto L_434bb4;
L_434b80: /* 434b80: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 434b84: fld qword ptr [ebp + 0x18] */
  { double v = F64((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 434b87: and eax, 0xffffffe3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffe3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 434b8a: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 434b8e: or eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 434b91: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 434b95: lea eax, [ebp + 0x20] */
  eax = (uint32_t)(ebp + 0x20u);
/* 434b98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 434b99: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 434b9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 434b9d: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 434ba0: lea eax, [ebp + 0x28] */
  eax = (uint32_t)(ebp + 0x28u);
/* 434ba3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 434ba6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 434ba7: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 434bab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 434bac: call 0x434425 */
  esp -= 4; W32(esp, 0x434bb1u); SPILL(); f_434425(); if (g_unwind) return; RELOAD();
/* 434bb1: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_434bb4: /* 434bb4: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 434bb7: call 0x434914 */
  esp -= 4; W32(esp, 0x434bbcu); SPILL(); f_434914(); if (g_unwind) return; RELOAD();
/* 434bbc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 434bbf: cmp dword ptr [0x44ba78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ba78u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434bc6: jne 0x434bf4 */
  if (!zf) goto L_434bf4;
L_434bc8: /* 434bc8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 434bca: je 0x434bf4 */
  if (zf) goto L_434bf4;
L_434bcc: /* 434bcc: push dword ptr [ebp + 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0x28u)); esp -= 4; W32(esp, v); }
/* 434bcf: fld qword ptr [ebp + 0x20] */
  { double v = F64((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 434bd2: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 434bd5: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 434bd9: fld qword ptr [ebp + 0x18] */
  { double v = F64((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 434bdc: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 434be0: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 434be3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 434be6: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 434be9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 434bea: call 0x434941 */
  esp -= 4; W32(esp, 0x434befu); SPILL(); f_434941(); if (g_unwind) return; RELOAD();
/* 434bef: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 434bf2: jmp 0x434c0e */
  goto L_434c0e;
L_434bf4: /* 434bf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 434bf5: call 0x4348ec */
  esp -= 4; W32(esp, 0x434bfau); SPILL(); f_4348ec(); if (g_unwind) return; RELOAD();
/* 434bfa: mov dword ptr [esp], 0xffff */
  W32((uint32_t)(esp), 0xffffu);
/* 434c01: push dword ptr [ebp + 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0x28u)); esp -= 4; W32(esp, v); }
/* 434c04: call 0x434d89 */
  esp -= 4; W32(esp, 0x434c09u); SPILL(); f_434d89(); if (g_unwind) return; RELOAD();
/* 434c09: fld qword ptr [ebp + 0x20] */
  { double v = F64((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 434c0c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 434c0d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_434c0e: /* 434c0e: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 434c12: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 434c15: call 0x4013ab */
  esp -= 4; W32(esp, 0x434c1au); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 434c1a: mov esp, ebp */
  esp = ebp;
/* 434c1c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 434c1d: ret  */
  esp += 4; SPILL(); return;
}

void f_434c1e(void) {
  LOAD_REGS();
L_434c1e: /* 434c1e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 434c1f: mov ebp, esp */
  ebp = esp;
/* 434c21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 434c22: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 434c23: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 434c26: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 434c29: mov ecx, dword ptr [ebp + 0xe] */
  ecx = R32((uint32_t)(ebp + 0xeu));
/* 434c2c: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 434c2f: add eax, 0x3fe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3feu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 434c34: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 434c37: and ecx, 0xffff800f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffff800fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 434c3d: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 434c3f: mov word ptr [ebp - 2], ax */
  W16((uint32_t)(ebp + 0xfffffffeu), (eax & 0xffffu));
/* 434c43: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 434c46: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 434c47: ret  */
  esp += 4; SPILL(); return;
}

void f_434c48(void) {
  LOAD_REGS();
L_434c48: /* 434c48: mov eax, dword ptr [esp + 0xa] */
  eax = R32((uint32_t)(esp + 0xau));
/* 434c4c: shr eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 434c4f: and eax, 0xffff07ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff07ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 434c54: sub eax, 0x3fe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3feu);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 434c59: movsx eax, ax */
  eax = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 434c5c: ret  */
  esp += 4; SPILL(); return;
}

void f_434c5d(void) {
  LOAD_REGS();
L_434c5d: /* 434c5d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 434c5e: mov ebp, esp */
  ebp = esp;
/* 434c60: xor edx, edx */
  edx = 0;
/* 434c62: cmp dword ptr [ebp + 0xc], 0x7ff00000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434c69: jne 0x434c75 */
  if (!zf) goto L_434c75;
L_434c6b: /* 434c6b: cmp dword ptr [ebp + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434c6e: jne 0x434c87 */
  if (!zf) goto L_434c87;
L_434c70: /* 434c70: xor eax, eax */
  eax = 0;
/* 434c72: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 434c73: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 434c74: ret  */
  esp += 4; SPILL(); return;
L_434c75: /* 434c75: cmp dword ptr [ebp + 0xc], 0xfff00000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0xfff00000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434c7c: jne 0x434c87 */
  if (!zf) goto L_434c87;
L_434c7e: /* 434c7e: cmp dword ptr [ebp + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434c81: jne 0x434c87 */
  if (!zf) goto L_434c87;
L_434c83: /* 434c83: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 434c85: jmp 0x434cb1 */
  goto L_434cb1;
L_434c87: /* 434c87: mov ecx, dword ptr [ebp + 0xe] */
  ecx = R32((uint32_t)(ebp + 0xeu));
/* 434c8a: mov eax, 0x7ff8 */
  eax = 0x7ff8u;
/* 434c8f: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 434c91: cmp cx, ax */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 434c94: jne 0x434c9a */
  if (!zf) goto L_434c9a;
L_434c96: /* 434c96: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 434c98: jmp 0x434cb1 */
  goto L_434cb1;
L_434c9a: /* 434c9a: cmp cx, 0x7ff0 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x7ff0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 434c9f: jne 0x434cb4 */
  if (!zf) goto L_434cb4;
L_434ca1: /* 434ca1: test dword ptr [ebp + 0xc], 0x7ffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x7ffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 434ca8: jne 0x434caf */
  if (!zf) goto L_434caf;
L_434caa: /* 434caa: cmp dword ptr [ebp + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434cad: je 0x434cb4 */
  if (zf) goto L_434cb4;
L_434caf: /* 434caf: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
L_434cb1: /* 434cb1: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 434cb2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 434cb3: ret  */
  esp += 4; SPILL(); return;
L_434cb4: /* 434cb4: xor eax, eax */
  eax = 0;
/* 434cb6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 434cb7: ret  */
  esp += 4; SPILL(); return;
}

void f_434cb8(void) {
  LOAD_REGS();
L_434cb8: /* 434cb8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 434cb9: mov ebp, esp */
  ebp = esp;
/* 434cbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 434cbc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 434cbd: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 434cc0: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 434cc6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 434cc8: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 434ccb: jp 0x434cd6 */
  if (pf) goto L_434cd6;
L_434ccd: /* 434ccd: fldz  */
  FPUSH(0.0);
/* 434ccf: xor edx, edx */
  edx = 0;
/* 434cd1: jmp 0x434d65 */
  goto L_434d65;
L_434cd6: /* 434cd6: xor ecx, ecx */
  ecx = 0;
/* 434cd8: test word ptr [ebp + 0xe], 0x7ff0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xeu))); uint16_t b = (uint16_t)(0x7ff0u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 434cde: jne 0x434d42 */
  if (!zf) goto L_434d42;
L_434ce0: /* 434ce0: test dword ptr [ebp + 0xc], 0xfffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 434ce7: jne 0x434cee */
  if (!zf) goto L_434cee;
L_434ce9: /* 434ce9: cmp dword ptr [ebp + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434cec: je 0x434d42 */
  if (zf) goto L_434d42;
L_434cee: /* 434cee: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 434cf1: mov edx, 0xfffffc03 */
  edx = 0xfffffc03u;
/* 434cf6: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 434cfc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 434cfe: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 434d01: jp 0x434d08 */
  if (pf) goto L_434d08;
L_434d03: /* 434d03: xor eax, eax */
  eax = 0;
/* 434d05: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 434d06: jmp 0x434d1d */
  goto L_434d1d;
L_434d08: /* 434d08: xor eax, eax */
  eax = 0;
/* 434d0a: jmp 0x434d1d */
  goto L_434d1d;
L_434d0c: /* 434d0c: shl dword ptr [ebp + 0xc], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 434d0f: test byte ptr [ebp + 0xb], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xbu))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434d13: je 0x434d19 */
  if (zf) goto L_434d19;
L_434d15: /* 434d15: or dword ptr [ebp + 0xc], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_434d19: /* 434d19: shl dword ptr [ebp + 8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 434d1c: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
L_434d1d: /* 434d1d: test byte ptr [ebp + 0xe], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xeu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434d21: je 0x434d0c */
  if (zf) goto L_434d0c;
L_434d23: /* 434d23: and byte ptr [ebp + 0xe], 0xef */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xeu))); uint8_t b = (uint8_t)(0xefu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xeu), r);
  }
/* 434d27: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434d29: je 0x434d2f */
  if (zf) goto L_434d2f;
L_434d2b: /* 434d2b: or byte ptr [ebp + 0xf], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfu))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfu), r);
  }
L_434d2f: /* 434d2f: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 434d32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 434d33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 434d34: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 434d35: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 434d38: call 0x434c1e */
  esp -= 4; W32(esp, 0x434d3du); SPILL(); f_434c1e(); if (g_unwind) return; RELOAD();
/* 434d3d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 434d40: jmp 0x434d65 */
  goto L_434d65;
L_434d42: /* 434d42: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 434d45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 434d46: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 434d47: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 434d48: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 434d4b: call 0x434c1e */
  esp -= 4; W32(esp, 0x434d50u); SPILL(); f_434c1e(); if (g_unwind) return; RELOAD();
/* 434d50: mov edx, dword ptr [ebp + 0xe] */
  edx = R32((uint32_t)(ebp + 0xeu));
/* 434d53: shr edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 434d56: and edx, 0x7ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 434d5c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 434d5f: sub edx, 0x3fe */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3feu);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_434d65: /* 434d65: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 434d68: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 434d6b: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 434d6e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 434d70: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 434d71: ret  */
  esp += 4; SPILL(); return;
}

void f_434d72(void) {
  LOAD_REGS();
L_434d72: /* 434d72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 434d73: wait  */
/* 434d74: fnstsw word ptr [esp] */
  W16((uint32_t)(esp), fpu_sw());
/* 434d77: movsx eax, word ptr [esp] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp)));
/* 434d7b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 434d7c: ret  */
  esp += 4; SPILL(); return;
}

void f_434d7d(void) {
  LOAD_REGS();
L_434d7d: /* 434d7d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 434d7e: fnstsw word ptr [esp] */
  W16((uint32_t)(esp), fpu_sw());
/* 434d81: fnclex  */
  FSW_CC = 0;
/* 434d83: movsx eax, word ptr [esp] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esp)));
/* 434d87: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 434d88: ret  */
  esp += 4; SPILL(); return;
}

void f_434d89(void) {
  LOAD_REGS();
L_434d89: /* 434d89: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 434d8a: mov ebp, esp */
  ebp = esp;
/* 434d8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 434d8d: wait  */
/* 434d8e: fnstcw word ptr [ebp - 4] */
  W16((uint32_t)(ebp + 0xfffffffcu), FCW);
/* 434d91: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 434d94: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 434d97: and ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 434d9a: not eax */
  eax = ~eax;
/* 434d9c: and eax, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 434d9f: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 434da1: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 434da4: fldcw word ptr [ebp + 0xc] */
  FCW = R16((uint32_t)(ebp + 0xcu));
/* 434da7: movsx eax, word ptr [ebp - 4] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0xfffffffcu)));
/* 434dab: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 434dac: ret  */
  esp += 4; SPILL(); return;
}

void f_434dad(void) {
  LOAD_REGS();
L_434dad: /* 434dad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 434dae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 434daf: mov cl, byte ptr [esp + 0xc] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xcu))) & 0xffu);
/* 434db3: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434db6: je 0x434dc3 */
  if (zf) goto L_434dc3;
L_434db8: /* 434db8: fld xword ptr [0x44ebc8] */
  { double v = F80((uint32_t)(0x44ebc8u)); FPUSH(v); }
/* 434dbe: fistp dword ptr [esp + 0xc] */
  W32((uint32_t)(esp + 0xcu), (uint32_t)fpu_toint32(ST0)); FPOP();
/* 434dc2: wait  */
L_434dc3: /* 434dc3: test cl, 8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434dc6: je 0x434dd8 */
  if (zf) goto L_434dd8;
L_434dc8: /* 434dc8: wait  */
/* 434dc9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 434dcb: fld xword ptr [0x44ebc8] */
  { double v = F80((uint32_t)(0x44ebc8u)); FPUSH(v); }
/* 434dd1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 434dd4: wait  */
/* 434dd5: wait  */
/* 434dd6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
L_434dd8: /* 434dd8: test cl, 0x10 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434ddb: je 0x434de7 */
  if (zf) goto L_434de7;
L_434ddd: /* 434ddd: fld xword ptr [0x44ebd4] */
  { double v = F80((uint32_t)(0x44ebd4u)); FPUSH(v); }
/* 434de3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 434de6: wait  */
L_434de7: /* 434de7: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434dea: je 0x434df5 */
  if (zf) goto L_434df5;
L_434dec: /* 434dec: fldz  */
  FPUSH(0.0);
/* 434dee: fld1  */
  FPUSH(1.0);
/* 434df0: fdivrp st(1) */
  STI(1) = ST0 / STI(1);
  FPOP();
/* 434df2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 434df4: wait  */
L_434df5: /* 434df5: test cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 434df8: je 0x434e00 */
  if (zf) goto L_434e00;
L_434dfa: /* 434dfa: fldpi  */
  FPUSH(3.141592653589793238463);
/* 434dfc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 434dff: wait  */
L_434e00: /* 434e00: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 434e01: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 434e02: ret  */
  esp += 4; SPILL(); return;
}

void f_434e03(void) {
  LOAD_REGS();
L_434e03: /* 434e03: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 434e04: mov ebp, esp */
  ebp = esp;
/* 434e06: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 434e09: cmp eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434e0c: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 434e0f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 434e11: jne 0x434e19 */
  if (!zf) goto L_434e19;
L_434e13: /* 434e13: and dword ptr [ecx + 0x20], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x20u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x20u), r);
  }
/* 434e17: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 434e18: ret  */
  esp += 4; SPILL(); return;
L_434e19: /* 434e19: cmp eax, 0x15 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x15u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434e1c: je 0x434e5c */
  if (zf) goto L_434e5c;
L_434e1e: /* 434e1e: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434e21: je 0x434e5c */
  if (zf) goto L_434e5c;
L_434e23: /* 434e23: cmp eax, 0x17 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434e26: je 0x434e5c */
  if (zf) goto L_434e5c;
L_434e28: /* 434e28: cmp eax, 0x1b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434e2b: je 0x434e5c */
  if (zf) goto L_434e5c;
L_434e2d: /* 434e2d: cmp byte ptr [ebp + 8], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x8u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 434e31: je 0x434e73 */
  if (zf) goto L_434e73;
L_434e33: /* 434e33: cmp eax, 0x12 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434e36: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* 434e38: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 434e39: jne 0x434e3d */
  if (!zf) goto L_434e3d;
L_434e3b: /* 434e3b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_434e3d: /* 434e3d: cmp eax, 0x13 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434e40: jne 0x434e48 */
  if (!zf) goto L_434e48;
L_434e42: /* 434e42: mov dword ptr [ecx], 0x19 */
  W32((uint32_t)(ecx), 0x19u);
L_434e48: /* 434e48: cmp eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434e4b: jne 0x434e4f */
  if (!zf) goto L_434e4f;
L_434e4d: /* 434e4d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_434e4f: /* 434e4f: cmp eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434e52: jne 0x434e73 */
  if (!zf) goto L_434e73;
L_434e54: /* 434e54: mov dword ptr [ecx], 0xb */
  W32((uint32_t)(ecx), 0xbu);
/* 434e5a: jmp 0x434e73 */
  goto L_434e73;
L_434e5c: /* 434e5c: cmp byte ptr [ebp + 8], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x8u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 434e60: je 0x434e6d */
  if (zf) goto L_434e6d;
L_434e62: /* 434e62: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 434e65: jne 0x434e6d */
  if (!zf) goto L_434e6d;
L_434e67: /* 434e67: mov dword ptr [ecx], 8 */
  W32((uint32_t)(ecx), 0x8u);
L_434e6d: /* 434e6d: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 434e70: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
L_434e73: /* 434e73: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 434e74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 434e75: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 434e78: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 434e79: xor eax, eax */
  eax = 0;
/* 434e7b: lea edx, [ecx + 0x10] */
  edx = (uint32_t)(ecx + 0x10u);
/* 434e7e: mov edi, edx */
  edi = edx;
/* 434e80: stosd dword ptr es:[edi], eax */
  W32(edi, eax); edi += (DF ? -4 : 4);
/* 434e81: stosd dword ptr es:[edi], eax */
  W32(edi, eax); edi += (DF ? -4 : 4);
/* 434e82: stosd dword ptr es:[edi], eax */
  W32(edi, eax); edi += (DF ? -4 : 4);
/* 434e83: stosd dword ptr es:[edi], eax */
  W32(edi, eax); edi += (DF ? -4 : 4);
/* 434e84: or dword ptr [ecx + 0x20], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x20u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0x20u), r);
  }
/* 434e88: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 434e8a: cmp edi, 0x13 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 434e8d: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 434e90: lea ebx, [esi + 0xcc] */
  ebx = (uint32_t)(esi + 0xccu);
/* 434e96: ja 0x434f6a */
  if ((!cf && !zf)) goto L_434f6a;
L_434e9c: /* 434e9c: je 0x434f5f */
  if (zf) goto L_434f5f;
L_434ea2: /* 434ea2: sub edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edi = r;
  }
/* 434ea5: je 0x434eff */
  if (zf) goto L_434eff;
L_434ea7: /* 434ea7: sub edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edi = r;
  }
/* 434eaa: je 0x434ef7 */
  if (zf) goto L_434ef7;
L_434eac: /* 434eac: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 434ead: je 0x434eec */
  if (zf) goto L_434eec;
L_434eaf: /* 434eaf: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 434eb0: je 0x434eda */
  if (zf) goto L_434eda;
L_434eb2: /* 434eb2: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 434eb3: je 0x434ed2 */
  if (zf) goto L_434ed2;
L_434eb5: /* 434eb5: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edi = r;
  }
/* 434eb8: jne 0x434ff7 */
  if (!zf) goto L_434ff7;
L_434ebe: /* 434ebe: and eax, 0xffffffe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffe1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_434ec1: /* 434ec1: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
/* 434ec4: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
L_434ec7: /* 434ec7: mov edi, edx */
  edi = edx;
/* 434ec9: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 434eca: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 434ecb: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 434ecc: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 434ecd: jmp 0x434ff7 */
  goto L_434ff7;
L_434ed2: /* 434ed2: and eax, 0xffffffe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffe1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 434ed5: jmp 0x434fad */
  goto L_434fad;
L_434eda: /* 434eda: and eax, 0xffffffe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffe1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_434edd: /* 434edd: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
/* 434ee0: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 434ee3: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_434ee5: /* 434ee5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 434ee7: jmp 0x434ff7 */
  goto L_434ff7;
L_434eec: /* 434eec: and eax, 0xffffffeb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffebu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 434eef: or eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 434ef2: jmp 0x434fad */
  goto L_434fad;
L_434ef7: /* 434ef7: and eax, 0xffffffeb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffebu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 434efa: or eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 434efd: jmp 0x434edd */
  goto L_434edd;
L_434eff: /* 434eff: and eax, 0xffffffeb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffebu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 434f02: or eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 434f05: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
/* 434f08: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 434f0b: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 434f0e: je 0x434f57 */
  if (zf) goto L_434f57;
L_434f10: /* 434f10: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 434f11: je 0x434f4f */
  if (zf) goto L_434f4f;
L_434f13: /* 434f13: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 434f14: je 0x434f47 */
  if (zf) goto L_434f47;
L_434f16: /* 434f16: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 434f17: je 0x434f3f */
  if (zf) goto L_434f3f;
L_434f19: /* 434f19: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 434f1a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 434f1b: je 0x434f37 */
  if (zf) goto L_434f37;
L_434f1d: /* 434f1d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 434f1e: je 0x434f2f */
  if (zf) goto L_434f2f;
L_434f20: /* 434f20: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 434f21: jne 0x434ff7 */
  if (!zf) goto L_434ff7;
L_434f27: /* 434f27: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 434f2d: jmp 0x434ee5 */
  goto L_434ee5;
L_434f2f: /* 434f2f: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* 434f35: jmp 0x434ee5 */
  goto L_434ee5;
L_434f37: /* 434f37: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 434f3d: jmp 0x434ee5 */
  goto L_434ee5;
L_434f3f: /* 434f3f: mov eax, dword ptr [esi + 0xa4] */
  eax = R32((uint32_t)(esi + 0xa4u));
/* 434f45: jmp 0x434ee5 */
  goto L_434ee5;
L_434f47: /* 434f47: mov eax, dword ptr [esi + 0xa8] */
  eax = R32((uint32_t)(esi + 0xa8u));
/* 434f4d: jmp 0x434ee5 */
  goto L_434ee5;
L_434f4f: /* 434f4f: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 434f55: jmp 0x434ee5 */
  goto L_434ee5;
L_434f57: /* 434f57: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 434f5d: jmp 0x434ee5 */
  goto L_434ee5;
L_434f5f: /* 434f5f: and eax, 0xffffffe3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffe3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 434f62: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 434f65: jmp 0x434ec1 */
  goto L_434ec1;
L_434f6a: /* 434f6a: sub edi, 0x14 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edi = r;
  }
/* 434f6d: je 0x434fd9 */
  if (zf) goto L_434fd9;
L_434f6f: /* 434f6f: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 434f70: je 0x434fc3 */
  if (zf) goto L_434fc3;
L_434f72: /* 434f72: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 434f74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 434f75: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edi = r;
  }
/* 434f77: je 0x434fbc */
  if (zf) goto L_434fbc;
L_434f79: /* 434f79: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edi = r;
  }
/* 434f7b: je 0x434fa8 */
  if (zf) goto L_434fa8;
L_434f7d: /* 434f7d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 434f7e: je 0x434f9d */
  if (zf) goto L_434f9d;
L_434f80: /* 434f80: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 434f81: jne 0x434ff7 */
  if (!zf) goto L_434ff7;
L_434f83: /* 434f83: and eax, 0xffffffeb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffebu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 434f86: or eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 434f89: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
/* 434f8c: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 434f8f: add eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 434f92: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 434f95: mov eax, dword ptr [eax + ebx] */
  eax = R32((uint32_t)(eax + ebx));
/* 434f98: jmp 0x434ee5 */
  goto L_434ee5;
L_434f9d: /* 434f9d: and eax, 0xffffffeb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffebu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 434fa0: or eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 434fa3: jmp 0x434ec1 */
  goto L_434ec1;
L_434fa8: /* 434fa8: and eax, 0xffffffe3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffe3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 434fab: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_434fad: /* 434fad: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
/* 434fb0: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 434fb3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 434fb5: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 434fb7: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 434fba: jmp 0x434ff4 */
  goto L_434ff4;
L_434fbc: /* 434fbc: and eax, 0xffffffe3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffe3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 434fbf: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 434fc1: jmp 0x434fc6 */
  goto L_434fc6;
L_434fc3: /* 434fc3: and eax, 0xffffffe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffe1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_434fc6: /* 434fc6: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 434fc9: add esi, 0xa */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 434fcc: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 434fcf: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
/* 434fd2: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 434fd4: jmp 0x434ec7 */
  goto L_434ec7;
L_434fd9: /* 434fd9: and eax, 0xffffffeb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffebu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 434fdc: or eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 434fdf: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
/* 434fe2: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 434fe5: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 434fe8: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 434feb: mov ecx, dword ptr [eax + ebx] */
  ecx = R32((uint32_t)(eax + ebx));
/* 434fee: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 434ff0: mov eax, dword ptr [eax + ebx + 4] */
  eax = R32((uint32_t)(eax + ebx + 0x4u));
L_434ff4: /* 434ff4: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
L_434ff7: /* 434ff7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 434ff8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 434ff9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 434ffa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 434ffb: ret  */
  esp += 4; SPILL(); return;
}

void f_434ffc(void) {
  LOAD_REGS();
L_434ffc: /* 434ffc: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 435000: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 435003: mov edx, dword ptr [eax + 0x60] */
  edx = R32((uint32_t)(eax + 0x60u));
/* 435006: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 435009: je 0x435181 */
  if (zf) goto L_435181;
L_43500f: /* 43500f: and edx, 0x1e */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 435012: cmp dl, 0xe */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 435015: jne 0x435181 */
  if (!zf) goto L_435181;
L_43501b: /* 43501b: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 43501f: cmp edx, 0x52 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x52u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435022: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 435023: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 435024: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 435025: ja 0x435133 */
  if ((!cf && !zf)) goto L_435133;
L_43502b: /* 43502b: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 43502d: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 435030: xor esi, esi */
  esi = 0;
/* 435032: cmp edx, 0x51 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x51u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 435035: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 435036: jae 0x435076 */
  if (!cf) goto L_435076;
L_435038: /* 435038: cmp edx, 0x39 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x39u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 43503b: jb 0x43517e */
  if (cf) goto L_43517e;
L_435041: /* 435041: cmp edx, 0x3a */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435044: jbe 0x43504e */
  if ((cf | zf)) goto L_43504e;
L_435046: /* 435046: cmp edx, 0x3c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435049: jmp 0x43513b */
  goto L_43513b;
L_43504e: /* 43504e: mov edx, dword ptr [eax + 0x50] */
  edx = R32((uint32_t)(eax + 0x50u));
/* 435051: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edx = r;
  }
/* 435053: je 0x4350db */
  if (zf) goto L_4350db;
L_435059: /* 435059: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 43505a: je 0x4350ca */
  if (zf) goto L_4350ca;
L_43505c: /* 43505c: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 43505d: je 0x4350b5 */
  if (zf) goto L_4350b5;
L_43505f: /* 43505f: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 435060: jne 0x435076 */
  if (!zf) goto L_435076;
L_435062: /* 435062: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 435065: cmp edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435068: jbe 0x435073 */
  if ((cf | zf)) goto L_435073;
L_43506a: /* 43506a: cmp edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 43506d: jbe 0x4350d6 */
  if ((cf | zf)) goto L_4350d6;
L_43506f: /* 43506f: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 435071: jne 0x435076 */
  if (!zf) goto L_435076;
L_435073: /* 435073: mov dword ptr [eax + 0x50], esi */
  W32((uint32_t)(eax + 0x50u), esi);
L_435076: /* 435076: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 435079: mov edx, dword ptr [eax + 0x50] */
  edx = R32((uint32_t)(eax + 0x50u));
/* 43507c: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edx = r;
  }
/* 43507e: je 0x43511e */
  if (zf) goto L_43511e;
L_435084: /* 435084: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 435085: je 0x435110 */
  if (zf) goto L_435110;
L_43508b: /* 43508b: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 43508c: je 0x4350fb */
  if (zf) goto L_4350fb;
L_43508e: /* 43508e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 43508f: jne 0x43517e */
  if (!zf) goto L_43517e;
L_435095: /* 435095: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 435098: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 43509b: jbe 0x4350aa */
  if ((cf | zf)) goto L_4350aa;
L_43509d: /* 43509d: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4350a0: jbe 0x4350f0 */
  if ((cf | zf)) goto L_4350f0;
L_4350a2: /* 4350a2: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4350a4: jne 0x43517e */
  if (!zf) goto L_43517e;
L_4350aa: /* 4350aa: mov dword ptr [eax + 0x50], esi */
  W32((uint32_t)(eax + 0x50u), esi);
/* 4350ad: mov dword ptr [eax + 0x54], esi */
  W32((uint32_t)(eax + 0x54u), esi);
/* 4350b0: jmp 0x43517e */
  goto L_43517e;
L_4350b5: /* 4350b5: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 4350b8: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4350ba: ja 0x435076 */
  if ((!cf && !zf)) goto L_435076;
L_4350bc: /* 4350bc: movzx edx, byte ptr [edx + 0x43518a] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x43518au)));
/* 4350c3: jmp dword ptr [edx*4 + 0x435182] */
  switch (R32((uint32_t)(edx*4 + 0x435182u))) {
    case 0x435073u: goto L_435073;
    case 0x4350d6u: goto L_4350d6;
    default: guest_badjump(0x4350c3, R32((uint32_t)(edx*4 + 0x435182u))); return;
  }
L_4350ca: /* 4350ca: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 4350cd: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4350d0: jbe 0x435073 */
  if ((cf | zf)) goto L_435073;
L_4350d2: /* 4350d2: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4350d4: ja 0x435076 */
  if ((!cf && !zf)) goto L_435076;
L_4350d6: /* 4350d6: mov dword ptr [eax + 0x50], ebx */
  W32((uint32_t)(eax + 0x50u), ebx);
/* 4350d9: jmp 0x435076 */
  goto L_435076;
L_4350db: /* 4350db: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 4350de: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4350e0: ja 0x435076 */
  if ((!cf && !zf)) goto L_435076;
L_4350e2: /* 4350e2: movzx edx, byte ptr [edx + 0x43519a] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x43519au)));
/* 4350e9: jmp dword ptr [edx*4 + 0x435192] */
  switch (R32((uint32_t)(edx*4 + 0x435192u))) {
    case 0x435073u: goto L_435073;
    case 0x4350d6u: goto L_4350d6;
    default: guest_badjump(0x4350e9, R32((uint32_t)(edx*4 + 0x435192u))); return;
  }
L_4350f0: /* 4350f0: mov dword ptr [eax + 0x50], ebx */
  W32((uint32_t)(eax + 0x50u), ebx);
/* 4350f3: mov dword ptr [eax + 0x54], ebx */
  W32((uint32_t)(eax + 0x54u), ebx);
/* 4350f6: jmp 0x43517e */
  goto L_43517e;
L_4350fb: /* 4350fb: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 4350fe: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435100: ja 0x43517e */
  if ((!cf && !zf)) goto L_43517e;
L_435102: /* 435102: movzx ecx, byte ptr [ecx + 0x4351aa] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x4351aau)));
/* 435109: jmp dword ptr [ecx*4 + 0x4351a2] */
  switch (R32((uint32_t)(ecx*4 + 0x4351a2u))) {
    case 0x4350aau: goto L_4350aa;
    case 0x4350f0u: goto L_4350f0;
    default: guest_badjump(0x435109, R32((uint32_t)(ecx*4 + 0x4351a2u))); return;
  }
L_435110: /* 435110: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 435113: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435116: jbe 0x4350aa */
  if ((cf | zf)) goto L_4350aa;
L_435118: /* 435118: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 43511a: ja 0x43517e */
  if ((!cf && !zf)) goto L_43517e;
L_43511c: /* 43511c: jmp 0x4350f0 */
  goto L_4350f0;
L_43511e: /* 43511e: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 435121: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435123: ja 0x43517e */
  if ((!cf && !zf)) goto L_43517e;
L_435125: /* 435125: movzx ecx, byte ptr [ecx + 0x4351ba] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x4351bau)));
/* 43512c: jmp dword ptr [ecx*4 + 0x4351b2] */
  switch (R32((uint32_t)(ecx*4 + 0x4351b2u))) {
    case 0x4350aau: goto L_4350aa;
    case 0x4350f0u: goto L_4350f0;
    default: guest_badjump(0x43512c, R32((uint32_t)(ecx*4 + 0x4351b2u))); return;
  }
L_435133: /* 435133: cmp edx, 0x53 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x53u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 435136: jb 0x43517e */
  if (cf) goto L_43517e;
L_435138: /* 435138: cmp edx, 0x54 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
L_43513b: /* 43513b: ja 0x43517e */
  if ((!cf && !zf)) goto L_43517e;
L_43513d: /* 43513d: mov eax, dword ptr [eax + 0x50] */
  eax = R32((uint32_t)(eax + 0x50u));
/* 435140: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 435143: je 0x435170 */
  if (zf) goto L_435170;
L_435145: /* 435145: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 435146: je 0x435168 */
  if (zf) goto L_435168;
L_435148: /* 435148: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 435149: je 0x43515b */
  if (zf) goto L_43515b;
L_43514b: /* 43514b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 43514c: jne 0x43517e */
  if (!zf) goto L_43517e;
L_43514e: /* 43514e: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 435151: and eax, 0xfffff76f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffff76fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 435156: or eax, 0x45 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x45u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 435159: jmp 0x43517b */
  goto L_43517b;
L_43515b: /* 43515b: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 43515e: and eax, 0xfffff72b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffff72bu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 435163: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 435166: jmp 0x43517b */
  goto L_43517b;
L_435168: /* 435168: and word ptr [ecx + 0x1c], 0xf72a */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x1cu))); uint16_t b = (uint16_t)(0xf72au);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ecx + 0x1cu), r);
  }
/* 43516e: jmp 0x43517e */
  goto L_43517e;
L_435170: /* 435170: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 435173: and eax, 0xfffff76a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffff76au);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 435178: or eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_43517b: /* 43517b: mov dword ptr [ecx + 0x1c], eax */
  W32((uint32_t)(ecx + 0x1cu), eax);
L_43517e: /* 43517e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 43517f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 435180: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_435181: /* 435181: ret  */
  esp += 4; SPILL(); return;
}

void f_4351c0(void) {
  LOAD_REGS();
L_4351c0: /* 4351c0: add dword ptr [eax], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
  SPILL(); f_4351c2(); return;
}

void f_4351c2(void) {
  LOAD_REGS();
L_4351c2: /* 4351c2: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4351c6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 4351c8: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4351cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4351cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4351ce: add edx, -8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4351d1: cmp edx, 0x13 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4351d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4351d5: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 4351d8: lea ebx, [ecx + 0x16c] */
  ebx = (uint32_t)(ecx + 0x16cu);
/* 4351de: ja 0x4352b7 */
  if ((!cf && !zf)) goto L_4352b7;
L_4351e4: /* 4351e4: movzx edx, byte ptr [edx + 0x4352db] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x4352dbu)));
/* 4351eb: jmp dword ptr [edx*4 + 0x4352bb] */
  switch (R32((uint32_t)(edx*4 + 0x4352bbu))) {
    case 0x4351f2u: goto L_4351f2;
    case 0x4351fau: goto L_4351fa;
    case 0x435210u: goto L_435210;
    case 0x435220u: goto L_435220;
    case 0x435231u: goto L_435231;
    case 0x43524au: goto L_43524a;
    case 0x4352adu: goto L_4352ad;
    case 0x4352b7u: goto L_4352b7;
    default: guest_badjump(0x4351eb, R32((uint32_t)(edx*4 + 0x4352bbu))); return;
  }
L_4351f2: /* 4351f2: mov edi, dword ptr [ecx + 0xdc] */
  edi = R32((uint32_t)(ecx + 0xdcu));
/* 4351f8: jmp 0x435225 */
  goto L_435225;
L_4351fa: /* 4351fa: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 4351fd: mov ecx, dword ptr [ecx + 0xdc] */
  ecx = R32((uint32_t)(ecx + 0xdcu));
/* 435203: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 435205: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 435208: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 43520b: jmp 0x4352b7 */
  goto L_4352b7;
L_435210: /* 435210: mov ecx, dword ptr [ecx + 0xdc] */
  ecx = R32((uint32_t)(ecx + 0xdcu));
/* 435216: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 435219: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 43521b: jmp 0x4352b7 */
  goto L_4352b7;
L_435220: /* 435220: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 435223: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_435225: /* 435225: lea esi, [eax + 0x10] */
  esi = (uint32_t)(eax + 0x10u);
/* 435228: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 435229: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 43522a: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 43522b: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 43522c: jmp 0x4352b7 */
  goto L_4352b7;
L_435231: /* 435231: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 435234: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 435237: mov dword ptr [edi + ecx + 0xec], edx */
  W32((uint32_t)(edi + ecx + 0xecu), edx);
/* 43523e: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 435241: mov dword ptr [edi + ecx + 0xf0], eax */
  W32((uint32_t)(edi + ecx + 0xf0u), eax);
/* 435248: jmp 0x4352b7 */
  goto L_4352b7;
L_43524a: /* 43524a: sub edi, 0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edi = r;
  }
/* 43524d: je 0x4352a4 */
  if (zf) goto L_4352a4;
L_43524f: /* 43524f: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 435250: je 0x435299 */
  if (zf) goto L_435299;
L_435252: /* 435252: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 435253: je 0x43528e */
  if (zf) goto L_43528e;
L_435255: /* 435255: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 435256: je 0x435283 */
  if (zf) goto L_435283;
L_435258: /* 435258: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 435259: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 43525a: je 0x435278 */
  if (zf) goto L_435278;
L_43525c: /* 43525c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 43525d: je 0x43526d */
  if (zf) goto L_43526d;
L_43525f: /* 43525f: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 435260: jne 0x4352ad */
  if (!zf) goto L_4352ad;
L_435262: /* 435262: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 435265: mov dword ptr [ecx + 0x9c], eax */
  W32((uint32_t)(ecx + 0x9cu), eax);
/* 43526b: jmp 0x4352ad */
  goto L_4352ad;
L_43526d: /* 43526d: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 435270: mov dword ptr [ecx + 0xa0], eax */
  W32((uint32_t)(ecx + 0xa0u), eax);
/* 435276: jmp 0x4352ad */
  goto L_4352ad;
L_435278: /* 435278: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 43527b: mov dword ptr [ecx + 0xb4], eax */
  W32((uint32_t)(ecx + 0xb4u), eax);
/* 435281: jmp 0x4352ad */
  goto L_4352ad;
L_435283: /* 435283: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 435286: mov dword ptr [ecx + 0xa4], eax */
  W32((uint32_t)(ecx + 0xa4u), eax);
/* 43528c: jmp 0x4352ad */
  goto L_4352ad;
L_43528e: /* 43528e: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 435291: mov dword ptr [ecx + 0xa8], eax */
  W32((uint32_t)(ecx + 0xa8u), eax);
/* 435297: jmp 0x4352ad */
  goto L_4352ad;
L_435299: /* 435299: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 43529c: mov dword ptr [ecx + 0xac], eax */
  W32((uint32_t)(ecx + 0xacu), eax);
/* 4352a2: jmp 0x4352ad */
  goto L_4352ad;
L_4352a4: /* 4352a4: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 4352a7: mov dword ptr [ecx + 0xb0], eax */
  W32((uint32_t)(ecx + 0xb0u), eax);
L_4352ad: /* 4352ad: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 4352b1: mov dword ptr [ecx + 0xc0], eax */
  W32((uint32_t)(ecx + 0xc0u), eax);
L_4352b7: /* 4352b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4352b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4352b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4352ba: ret  */
  esp += 4; SPILL(); return;
}

void f_4352ef(void) {
  LOAD_REGS();
L_4352ef: /* 4352ef: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4352f3: mov eax, dword ptr [eax + 0xb0] */
  eax = R32((uint32_t)(eax + 0xb0u));
/* 4352f9: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4352fd: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 4352ff: xor eax, eax */
  eax = 0;
/* 435301: ret  */
  esp += 4; SPILL(); return;
}

void f_435302(void) {
  LOAD_REGS();
L_435302: /* 435302: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 435306: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 435309: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 43530d: add eax, dword ptr [ecx + 0xb0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xb0u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 435313: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 435317: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 435319: xor eax, eax */
  eax = 0;
/* 43531b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 43531c: ret  */
  esp += 4; SPILL(); return;
}

void f_43531d(void) {
  LOAD_REGS();
L_43531d: /* 43531d: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 435321: mov eax, dword ptr [eax + 0xb0] */
  eax = R32((uint32_t)(eax + 0xb0u));
/* 435327: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 43532b: add eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 43532d: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 435331: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 435333: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 435335: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 435336: ret  */
  esp += 4; SPILL(); return;
}

void f_435337(void) {
  LOAD_REGS();
L_435337: /* 435337: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 43533b: mov eax, dword ptr [eax + 0xac] */
  eax = R32((uint32_t)(eax + 0xacu));
/* 435341: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 435345: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 435347: xor eax, eax */
  eax = 0;
/* 435349: ret  */
  esp += 4; SPILL(); return;
}

void f_435345(void) {
  LOAD_REGS();
L_435345: /* 435345: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 435347: xor eax, eax */
  eax = 0;
/* 435349: ret  */
  esp += 4; SPILL(); return;
}

void f_43534a(void) {
  LOAD_REGS();
L_43534a: /* 43534a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 43534e: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 435351: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 435355: add eax, dword ptr [ecx + 0xac] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xacu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 43535b: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 43535f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 435361: xor eax, eax */
  eax = 0;
/* 435363: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 435364: ret  */
  esp += 4; SPILL(); return;
}

void f_435365(void) {
  LOAD_REGS();
L_435365: /* 435365: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 435369: mov eax, dword ptr [eax + 0xac] */
  eax = R32((uint32_t)(eax + 0xacu));
/* 43536f: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 435373: add eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 435375: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 435379: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 43537b: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 43537d: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 43537e: ret  */
  esp += 4; SPILL(); return;
}

void f_43537f(void) {
  LOAD_REGS();
L_43537f: /* 43537f: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 435383: mov eax, dword ptr [eax + 0xa8] */
  eax = R32((uint32_t)(eax + 0xa8u));
/* 435389: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 43538d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 43538f: xor eax, eax */
  eax = 0;
/* 435391: ret  */
  esp += 4; SPILL(); return;
}

void f_435392(void) {
  LOAD_REGS();
L_435392: /* 435392: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 435396: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 435399: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 43539d: add eax, dword ptr [ecx + 0xa8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xa8u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4353a3: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4353a7: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 4353a9: xor eax, eax */
  eax = 0;
/* 4353ab: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4353ac: ret  */
  esp += 4; SPILL(); return;
}

void f_4353ad(void) {
  LOAD_REGS();
L_4353ad: /* 4353ad: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4353b1: mov eax, dword ptr [eax + 0xa8] */
  eax = R32((uint32_t)(eax + 0xa8u));
/* 4353b7: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4353bb: add eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4353bd: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4353c1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4353c3: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 4353c5: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4353c6: ret  */
  esp += 4; SPILL(); return;
}

void f_4353c7(void) {
  LOAD_REGS();
L_4353c7: /* 4353c7: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4353cb: mov eax, dword ptr [eax + 0xa4] */
  eax = R32((uint32_t)(eax + 0xa4u));
/* 4353d1: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4353d5: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 4353d7: xor eax, eax */
  eax = 0;
/* 4353d9: ret  */
  esp += 4; SPILL(); return;
}

void f_4353da(void) {
  LOAD_REGS();
L_4353da: /* 4353da: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4353de: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 4353e1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4353e5: add eax, dword ptr [ecx + 0xa4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xa4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4353eb: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4353ef: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 4353f1: xor eax, eax */
  eax = 0;
/* 4353f3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4353f4: ret  */
  esp += 4; SPILL(); return;
}

void f_4353f5(void) {
  LOAD_REGS();
L_4353f5: /* 4353f5: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4353f9: mov eax, dword ptr [eax + 0xa4] */
  eax = R32((uint32_t)(eax + 0xa4u));
/* 4353ff: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 435403: add eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 435405: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 435409: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 43540b: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 43540d: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 43540e: ret  */
  esp += 4; SPILL(); return;
}

void f_43540f(void) {
  LOAD_REGS();
L_43540f: /* 43540f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 435410: mov ebp, esp */
  ebp = esp;
/* 435412: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 435413: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 435414: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 435415: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 435418: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 43541b: xor esi, esi */
  esi = 0;
/* 43541d: mov eax, edx */
  eax = edx;
/* 43541f: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 435421: mov ecx, edx */
  ecx = edx;
/* 435423: shr ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 435426: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  eax = r;
  }
/* 435429: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  esi = r;
  }
/* 43542a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 43542b: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 43542d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 435430: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 435432: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 435435: je 0x435484 */
  if (zf) goto L_435484;
L_435437: /* 435437: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 435439: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 43543b: ja 0x435484 */
  if ((!cf && !zf)) goto L_435484;
L_43543d: /* 43543d: jmp dword ptr [eax*4 + 0x435516] */
  switch (R32((uint32_t)(eax*4 + 0x435516u))) {
    case 0x435444u: goto L_435444;
    case 0x43544cu: goto L_43544c;
    case 0x435454u: goto L_435454;
    case 0x43545cu: goto L_43545c;
    case 0x435464u: goto L_435464;
    case 0x43546cu: goto L_43546c;
    case 0x435474u: goto L_435474;
    case 0x43547cu: goto L_43547c;
    case 0x4354beu: goto L_4354be;
    case 0x4354c6u: goto L_4354c6;
    case 0x4354ceu: goto L_4354ce;
    case 0x4354d6u: goto L_4354d6;
    case 0x4354deu: goto L_4354de;
    case 0x4354e6u: goto L_4354e6;
    case 0x4354eeu: goto L_4354ee;
    case 0x4354f6u: goto L_4354f6;
    default: guest_badjump(0x43543d, R32((uint32_t)(eax*4 + 0x435516u))); return;
  }
L_435444: /* 435444: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 43544a: jmp 0x435486 */
  goto L_435486;
L_43544c: /* 43544c: mov eax, dword ptr [ecx + 0xac] */
  eax = R32((uint32_t)(ecx + 0xacu));
/* 435452: jmp 0x435486 */
  goto L_435486;
L_435454: /* 435454: mov eax, dword ptr [ecx + 0xa8] */
  eax = R32((uint32_t)(ecx + 0xa8u));
/* 43545a: jmp 0x435486 */
  goto L_435486;
L_43545c: /* 43545c: mov eax, dword ptr [ecx + 0xa4] */
  eax = R32((uint32_t)(ecx + 0xa4u));
/* 435462: jmp 0x435486 */
  goto L_435486;
L_435464: /* 435464: mov eax, dword ptr [ecx + 0xc4] */
  eax = R32((uint32_t)(ecx + 0xc4u));
/* 43546a: jmp 0x435486 */
  goto L_435486;
L_43546c: /* 43546c: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 435472: jmp 0x435486 */
  goto L_435486;
L_435474: /* 435474: mov eax, dword ptr [ecx + 0xa0] */
  eax = R32((uint32_t)(ecx + 0xa0u));
/* 43547a: jmp 0x435486 */
  goto L_435486;
L_43547c: /* 43547c: mov eax, dword ptr [ecx + 0x9c] */
  eax = R32((uint32_t)(ecx + 0x9cu));
/* 435482: jmp 0x435486 */
  goto L_435486;
L_435484: /* 435484: xor eax, eax */
  eax = 0;
L_435486: /* 435486: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 435488: cmp edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43548b: jne 0x43549c */
  if (!zf) goto L_43549c;
L_43548d: /* 43548d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 435490: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 435493: add eax, dword ptr [edi + 1] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 435496: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 435497: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 435499: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 43549a: jmp 0x435511 */
  goto L_435511;
L_43549c: /* 43549c: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43549f: jne 0x4354b1 */
  if (!zf) goto L_4354b1;
L_4354a1: /* 4354a1: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 4354a4: add eax, dword ptr [ecx + 0xc4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xc4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4354aa: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4354ad: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 4354af: jmp 0x43550e */
  goto L_43550e;
L_4354b1: /* 4354b1: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4354b3: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4354b5: ja 0x435503 */
  if ((!cf && !zf)) goto L_435503;
L_4354b7: /* 4354b7: jmp dword ptr [edx*4 + 0x435536] */
  switch (R32((uint32_t)(edx*4 + 0x435536u))) {
    case 0x4354beu: goto L_4354be;
    case 0x4354c6u: goto L_4354c6;
    case 0x4354ceu: goto L_4354ce;
    case 0x4354d6u: goto L_4354d6;
    case 0x4354deu: goto L_4354de;
    case 0x4354e6u: goto L_4354e6;
    case 0x4354eeu: goto L_4354ee;
    case 0x4354f6u: goto L_4354f6;
    default: guest_badjump(0x4354b7, R32((uint32_t)(edx*4 + 0x435536u))); return;
  }
L_4354be: /* 4354be: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 4354c4: jmp 0x4354fc */
  goto L_4354fc;
L_4354c6: /* 4354c6: mov edx, dword ptr [ecx + 0xac] */
  edx = R32((uint32_t)(ecx + 0xacu));
/* 4354cc: jmp 0x4354fc */
  goto L_4354fc;
L_4354ce: /* 4354ce: mov edx, dword ptr [ecx + 0xa8] */
  edx = R32((uint32_t)(ecx + 0xa8u));
/* 4354d4: jmp 0x4354fc */
  goto L_4354fc;
L_4354d6: /* 4354d6: mov edx, dword ptr [ecx + 0xa4] */
  edx = R32((uint32_t)(ecx + 0xa4u));
/* 4354dc: jmp 0x4354fc */
  goto L_4354fc;
L_4354de: /* 4354de: mov edx, dword ptr [ecx + 0xc4] */
  edx = R32((uint32_t)(ecx + 0xc4u));
/* 4354e4: jmp 0x4354fc */
  goto L_4354fc;
L_4354e6: /* 4354e6: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 4354ec: jmp 0x4354fc */
  goto L_4354fc;
L_4354ee: /* 4354ee: mov edx, dword ptr [ecx + 0xa0] */
  edx = R32((uint32_t)(ecx + 0xa0u));
/* 4354f4: jmp 0x4354fc */
  goto L_4354fc;
L_4354f6: /* 4354f6: mov edx, dword ptr [ecx + 0x9c] */
  edx = R32((uint32_t)(ecx + 0x9cu));
L_4354fc: /* 4354fc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4354ff: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 435501: jmp 0x435509 */
  goto L_435509;
L_435503: /* 435503: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 435506: and dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx), r);
  }
L_435509: /* 435509: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 43550c: add dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx), r);
  }
L_43550e: /* 43550e: xor eax, eax */
  eax = 0;
/* 435510: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_435511: /* 435511: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 435512: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 435513: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 435514: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 435515: ret  */
  esp += 4; SPILL(); return;
}

void f_435556(void) {
  LOAD_REGS();
L_435556: /* 435556: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 435557: mov ebp, esp */
  ebp = esp;
/* 435559: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 43555a: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 43555d: movzx edx, byte ptr [ebx] */
  edx = (uint32_t)(R8((uint32_t)(ebx)));
/* 435560: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 435561: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 435562: xor esi, esi */
  esi = 0;
/* 435564: mov eax, edx */
  eax = edx;
/* 435566: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 435568: mov ecx, edx */
  ecx = edx;
/* 43556a: shr ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 43556d: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  eax = r;
  }
/* 435570: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  esi = r;
  }
/* 435571: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 435572: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 435574: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 435577: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 435579: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43557c: je 0x4355cb */
  if (zf) goto L_4355cb;
L_43557e: /* 43557e: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 435580: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435582: ja 0x4355cb */
  if ((!cf && !zf)) goto L_4355cb;
L_435584: /* 435584: jmp dword ptr [eax*4 + 0x435655] */
  switch (R32((uint32_t)(eax*4 + 0x435655u))) {
    case 0x43558bu: goto L_43558b;
    case 0x435593u: goto L_435593;
    case 0x43559bu: goto L_43559b;
    case 0x4355a3u: goto L_4355a3;
    case 0x4355abu: goto L_4355ab;
    case 0x4355b3u: goto L_4355b3;
    case 0x4355bbu: goto L_4355bb;
    case 0x4355c3u: goto L_4355c3;
    case 0x4355f7u: goto L_4355f7;
    case 0x4355ffu: goto L_4355ff;
    case 0x435607u: goto L_435607;
    case 0x43560fu: goto L_43560f;
    case 0x435617u: goto L_435617;
    case 0x43561fu: goto L_43561f;
    case 0x435627u: goto L_435627;
    case 0x43562fu: goto L_43562f;
    default: guest_badjump(0x435584, R32((uint32_t)(eax*4 + 0x435655u))); return;
  }
L_43558b: /* 43558b: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 435591: jmp 0x4355cd */
  goto L_4355cd;
L_435593: /* 435593: mov eax, dword ptr [ecx + 0xac] */
  eax = R32((uint32_t)(ecx + 0xacu));
/* 435599: jmp 0x4355cd */
  goto L_4355cd;
L_43559b: /* 43559b: mov eax, dword ptr [ecx + 0xa8] */
  eax = R32((uint32_t)(ecx + 0xa8u));
/* 4355a1: jmp 0x4355cd */
  goto L_4355cd;
L_4355a3: /* 4355a3: mov eax, dword ptr [ecx + 0xa4] */
  eax = R32((uint32_t)(ecx + 0xa4u));
/* 4355a9: jmp 0x4355cd */
  goto L_4355cd;
L_4355ab: /* 4355ab: mov eax, dword ptr [ecx + 0xc4] */
  eax = R32((uint32_t)(ecx + 0xc4u));
/* 4355b1: jmp 0x4355cd */
  goto L_4355cd;
L_4355b3: /* 4355b3: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 4355b9: jmp 0x4355cd */
  goto L_4355cd;
L_4355bb: /* 4355bb: mov eax, dword ptr [ecx + 0xa0] */
  eax = R32((uint32_t)(ecx + 0xa0u));
/* 4355c1: jmp 0x4355cd */
  goto L_4355cd;
L_4355c3: /* 4355c3: mov eax, dword ptr [ecx + 0x9c] */
  eax = R32((uint32_t)(ecx + 0x9cu));
/* 4355c9: jmp 0x4355cd */
  goto L_4355cd;
L_4355cb: /* 4355cb: xor eax, eax */
  eax = 0;
L_4355cd: /* 4355cd: and edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4355cf: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4355d2: jne 0x4355ea */
  if (!zf) goto L_4355ea;
L_4355d4: /* 4355d4: movzx edx, byte ptr [ebx + 1] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 4355d8: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 4355db: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4355dd: add eax, dword ptr [ecx + 0xc4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xc4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4355e3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4355e6: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 4355e8: jmp 0x43564d */
  goto L_43564d;
L_4355ea: /* 4355ea: and edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4355ec: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4355ee: ja 0x43563c */
  if ((!cf && !zf)) goto L_43563c;
L_4355f0: /* 4355f0: jmp dword ptr [edx*4 + 0x435675] */
  switch (R32((uint32_t)(edx*4 + 0x435675u))) {
    case 0x4355f7u: goto L_4355f7;
    case 0x4355ffu: goto L_4355ff;
    case 0x435607u: goto L_435607;
    case 0x43560fu: goto L_43560f;
    case 0x435617u: goto L_435617;
    case 0x43561fu: goto L_43561f;
    case 0x435627u: goto L_435627;
    case 0x43562fu: goto L_43562f;
    default: guest_badjump(0x4355f0, R32((uint32_t)(edx*4 + 0x435675u))); return;
  }
L_4355f7: /* 4355f7: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 4355fd: jmp 0x435635 */
  goto L_435635;
L_4355ff: /* 4355ff: mov edx, dword ptr [ecx + 0xac] */
  edx = R32((uint32_t)(ecx + 0xacu));
/* 435605: jmp 0x435635 */
  goto L_435635;
L_435607: /* 435607: mov edx, dword ptr [ecx + 0xa8] */
  edx = R32((uint32_t)(ecx + 0xa8u));
/* 43560d: jmp 0x435635 */
  goto L_435635;
L_43560f: /* 43560f: mov edx, dword ptr [ecx + 0xa4] */
  edx = R32((uint32_t)(ecx + 0xa4u));
/* 435615: jmp 0x435635 */
  goto L_435635;
L_435617: /* 435617: mov edx, dword ptr [ecx + 0xc4] */
  edx = R32((uint32_t)(ecx + 0xc4u));
/* 43561d: jmp 0x435635 */
  goto L_435635;
L_43561f: /* 43561f: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 435625: jmp 0x435635 */
  goto L_435635;
L_435627: /* 435627: mov edx, dword ptr [ecx + 0xa0] */
  edx = R32((uint32_t)(ecx + 0xa0u));
/* 43562d: jmp 0x435635 */
  goto L_435635;
L_43562f: /* 43562f: mov edx, dword ptr [ecx + 0x9c] */
  edx = R32((uint32_t)(ecx + 0x9cu));
L_435635: /* 435635: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 435638: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 43563a: jmp 0x435642 */
  goto L_435642;
L_43563c: /* 43563c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 43563f: and dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx), r);
  }
L_435642: /* 435642: movzx edx, byte ptr [ebx + 1] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x1u)));
/* 435646: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 435649: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 43564b: add dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx), r);
  }
L_43564d: /* 43564d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 43564f: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 435650: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 435651: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 435652: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 435653: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 435654: ret  */
  esp += 4; SPILL(); return;
}

void f_435695(void) {
  LOAD_REGS();
L_435695: /* 435695: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 435696: mov ebp, esp */
  ebp = esp;
/* 435698: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 435699: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 43569c: movzx edx, byte ptr [ebx] */
  edx = (uint32_t)(R8((uint32_t)(ebx)));
/* 43569f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4356a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4356a1: xor esi, esi */
  esi = 0;
/* 4356a3: mov eax, edx */
  eax = edx;
/* 4356a5: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 4356a7: mov ecx, edx */
  ecx = edx;
/* 4356a9: shr ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 4356ac: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  eax = r;
  }
/* 4356af: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  esi = r;
  }
/* 4356b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4356b1: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 4356b3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 4356b6: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4356b8: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4356bb: je 0x43570a */
  if (zf) goto L_43570a;
L_4356bd: /* 4356bd: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4356bf: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4356c1: ja 0x43570a */
  if ((!cf && !zf)) goto L_43570a;
L_4356c3: /* 4356c3: jmp dword ptr [eax*4 + 0x43578e] */
  switch (R32((uint32_t)(eax*4 + 0x43578eu))) {
    case 0x4356cau: goto L_4356ca;
    case 0x4356d2u: goto L_4356d2;
    case 0x4356dau: goto L_4356da;
    case 0x4356e2u: goto L_4356e2;
    case 0x4356eau: goto L_4356ea;
    case 0x4356f2u: goto L_4356f2;
    case 0x4356fau: goto L_4356fa;
    case 0x435702u: goto L_435702;
    case 0x435733u: goto L_435733;
    case 0x43573bu: goto L_43573b;
    case 0x435743u: goto L_435743;
    case 0x43574bu: goto L_43574b;
    case 0x435753u: goto L_435753;
    case 0x43575bu: goto L_43575b;
    case 0x435763u: goto L_435763;
    case 0x43576bu: goto L_43576b;
    default: guest_badjump(0x4356c3, R32((uint32_t)(eax*4 + 0x43578eu))); return;
  }
L_4356ca: /* 4356ca: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 4356d0: jmp 0x43570c */
  goto L_43570c;
L_4356d2: /* 4356d2: mov eax, dword ptr [ecx + 0xac] */
  eax = R32((uint32_t)(ecx + 0xacu));
/* 4356d8: jmp 0x43570c */
  goto L_43570c;
L_4356da: /* 4356da: mov eax, dword ptr [ecx + 0xa8] */
  eax = R32((uint32_t)(ecx + 0xa8u));
/* 4356e0: jmp 0x43570c */
  goto L_43570c;
L_4356e2: /* 4356e2: mov eax, dword ptr [ecx + 0xa4] */
  eax = R32((uint32_t)(ecx + 0xa4u));
/* 4356e8: jmp 0x43570c */
  goto L_43570c;
L_4356ea: /* 4356ea: mov eax, dword ptr [ecx + 0xc4] */
  eax = R32((uint32_t)(ecx + 0xc4u));
/* 4356f0: jmp 0x43570c */
  goto L_43570c;
L_4356f2: /* 4356f2: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 4356f8: jmp 0x43570c */
  goto L_43570c;
L_4356fa: /* 4356fa: mov eax, dword ptr [ecx + 0xa0] */
  eax = R32((uint32_t)(ecx + 0xa0u));
/* 435700: jmp 0x43570c */
  goto L_43570c;
L_435702: /* 435702: mov eax, dword ptr [ecx + 0x9c] */
  eax = R32((uint32_t)(ecx + 0x9cu));
/* 435708: jmp 0x43570c */
  goto L_43570c;
L_43570a: /* 43570a: xor eax, eax */
  eax = 0;
L_43570c: /* 43570c: and edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 43570e: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 435711: jne 0x435726 */
  if (!zf) goto L_435726;
L_435713: /* 435713: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 435716: add eax, dword ptr [ecx + 0xc4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xc4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 43571c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 43571f: add eax, dword ptr [ebx + 1] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x1u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 435722: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 435724: jmp 0x435786 */
  goto L_435786;
L_435726: /* 435726: and edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 435728: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 43572a: ja 0x435778 */
  if ((!cf && !zf)) goto L_435778;
L_43572c: /* 43572c: jmp dword ptr [edx*4 + 0x4357ae] */
  switch (R32((uint32_t)(edx*4 + 0x4357aeu))) {
    case 0x435733u: goto L_435733;
    case 0x43573bu: goto L_43573b;
    case 0x435743u: goto L_435743;
    case 0x43574bu: goto L_43574b;
    case 0x435753u: goto L_435753;
    case 0x43575bu: goto L_43575b;
    case 0x435763u: goto L_435763;
    case 0x43576bu: goto L_43576b;
    default: guest_badjump(0x43572c, R32((uint32_t)(edx*4 + 0x4357aeu))); return;
  }
L_435733: /* 435733: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 435739: jmp 0x435771 */
  goto L_435771;
L_43573b: /* 43573b: mov edx, dword ptr [ecx + 0xac] */
  edx = R32((uint32_t)(ecx + 0xacu));
/* 435741: jmp 0x435771 */
  goto L_435771;
L_435743: /* 435743: mov edx, dword ptr [ecx + 0xa8] */
  edx = R32((uint32_t)(ecx + 0xa8u));
/* 435749: jmp 0x435771 */
  goto L_435771;
L_43574b: /* 43574b: mov edx, dword ptr [ecx + 0xa4] */
  edx = R32((uint32_t)(ecx + 0xa4u));
/* 435751: jmp 0x435771 */
  goto L_435771;
L_435753: /* 435753: mov edx, dword ptr [ecx + 0xc4] */
  edx = R32((uint32_t)(ecx + 0xc4u));
/* 435759: jmp 0x435771 */
  goto L_435771;
L_43575b: /* 43575b: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 435761: jmp 0x435771 */
  goto L_435771;
L_435763: /* 435763: mov edx, dword ptr [ecx + 0xa0] */
  edx = R32((uint32_t)(ecx + 0xa0u));
/* 435769: jmp 0x435771 */
  goto L_435771;
L_43576b: /* 43576b: mov edx, dword ptr [ecx + 0x9c] */
  edx = R32((uint32_t)(ecx + 0x9cu));
L_435771: /* 435771: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 435774: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 435776: jmp 0x43577e */
  goto L_43577e;
L_435778: /* 435778: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 43577b: and dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx), r);
  }
L_43577e: /* 43577e: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 435781: add eax, dword ptr [ebx + 1] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x1u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 435784: add dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx), r);
  }
L_435786: /* 435786: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 435788: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 435789: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 43578a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 43578b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 43578c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 43578d: ret  */
  esp += 4; SPILL(); return;
}

void f_4357ce(void) {
  LOAD_REGS();
L_4357ce: /* 4357ce: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4357d2: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4357d4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4357d8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4357da: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 4357dc: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4357dd: ret  */
  esp += 4; SPILL(); return;
}

void f_4357de(void) {
  LOAD_REGS();
L_4357de: /* 4357de: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4357e2: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 4357e5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4357e9: add eax, dword ptr [ecx + 0xb4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xb4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4357ef: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4357f3: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 4357f5: xor eax, eax */
  eax = 0;
/* 4357f7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4357f8: ret  */
  esp += 4; SPILL(); return;
}

void f_4357f9(void) {
  LOAD_REGS();
L_4357f9: /* 4357f9: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4357fd: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 435803: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 435807: add eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 435809: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 43580d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 43580f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 435811: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 435812: ret  */
  esp += 4; SPILL(); return;
}

void f_435813(void) {
  LOAD_REGS();
L_435813: /* 435813: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 435817: mov eax, dword ptr [eax + 0xa0] */
  eax = R32((uint32_t)(eax + 0xa0u));
/* 43581d: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 435821: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 435823: xor eax, eax */
  eax = 0;
/* 435825: ret  */
  esp += 4; SPILL(); return;
}

void f_435826(void) {
  LOAD_REGS();
L_435826: /* 435826: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 43582a: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 43582d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 435831: add eax, dword ptr [ecx + 0xa0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xa0u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 435837: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 43583b: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 43583d: xor eax, eax */
  eax = 0;
/* 43583f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 435840: ret  */
  esp += 4; SPILL(); return;
}

void f_435841(void) {
  LOAD_REGS();
L_435841: /* 435841: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 435845: mov eax, dword ptr [eax + 0xa0] */
  eax = R32((uint32_t)(eax + 0xa0u));
/* 43584b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 43584f: add eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 435851: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 435855: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 435857: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 435859: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 43585a: ret  */
  esp += 4; SPILL(); return;
}

void f_43585b(void) {
  LOAD_REGS();
L_43585b: /* 43585b: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 43585f: mov eax, dword ptr [eax + 0x9c] */
  eax = R32((uint32_t)(eax + 0x9cu));
/* 435865: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 435869: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 43586b: xor eax, eax */
  eax = 0;
/* 43586d: ret  */
  esp += 4; SPILL(); return;
}

void f_43586e(void) {
  LOAD_REGS();
L_43586e: /* 43586e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 435872: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 435875: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 435879: add eax, dword ptr [ecx + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x9cu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 43587f: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 435883: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 435885: xor eax, eax */
  eax = 0;
/* 435887: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 435888: ret  */
  esp += 4; SPILL(); return;
}

void f_435889(void) {
  LOAD_REGS();
L_435889: /* 435889: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 43588d: mov eax, dword ptr [eax + 0x9c] */
  eax = R32((uint32_t)(eax + 0x9cu));
/* 435893: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 435897: add eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 435899: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 43589d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 43589f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 4358a1: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4358a2: ret  */
  esp += 4; SPILL(); return;
}

void f_4358a3(void) {
  LOAD_REGS();
L_4358a3: /* 4358a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4358a4: mov ebx, esp */
  ebx = esp;
/* 4358a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4358a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4358a8: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 4358ab: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4358ae: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4358af: mov ebp, dword ptr [ebx + 4] */
  ebp = R32((uint32_t)(ebx + 0x4u));
/* 4358b2: mov dword ptr [esp + 4], ebp */
  W32((uint32_t)(esp + 0x4u), ebp);
/* 4358b6: mov ebp, esp */
  ebp = esp;
/* 4358b8: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4358ba: push 0x446638 */
  { uint32_t v = 0x446638u; esp -= 4; W32(esp, v); }
/* 4358bf: push 0x406ebd */
  { uint32_t v = 0x406ebdu; esp -= 4; W32(esp, v); }
/* 4358c4: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4358ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4358cb: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4358d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4358d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4358d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4358d5: sub esp, 0x1b8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1b8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4358db: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 4358e0: xor eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4358e3: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 4358e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4358e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4358e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4358e9: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 4358ec: or dword ptr [ebp - 0x28], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffd8u), r);
  }
/* 4358f0: xor edx, edx */
  edx = 0;
/* 4358f2: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 4358f5: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 4358f8: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 4358fb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4358fd: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 435900: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 435902: je 0x43590e */
  if (zf) goto L_43590e;
L_435904: /* 435904: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 435905: call dword ptr [ebx + 0x10] */
  { uint32_t t = R32((uint32_t)(ebx + 0x10u)); esp -= 4; W32(esp, 0x435908u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 435908: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 435909: jmp 0x436033 */
  goto L_436033;
L_43590e: /* 43590e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 435911: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 435914: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 435916: mov ecx, 0x10020 */
  ecx = 0x10020u;
/* 43591b: and esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 43591d: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43591f: jne 0x436031 */
  if (!zf) goto L_436031;
L_435925: /* 435925: mov ecx, dword ptr [eax + 0xdc] */
  ecx = R32((uint32_t)(eax + 0xdcu));
/* 43592b: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 43592e: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 435931: and byte ptr [ebp - 0x3d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffc3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffc3u), r);
  }
/* 435935: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 435938: xor esi, esi */
  esi = 0;
/* 43593a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 43593b: mov byte ptr [ebp - 0x3e], 1 */
  W8((uint32_t)(ebp + 0xffffffc2u), 0x1u);
/* 43593f: and byte ptr [ebp - 0x42], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffbeu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffbeu), r);
  }
/* 435943: mov eax, dword ptr [eax + 0xb8] */
  eax = R32((uint32_t)(eax + 0xb8u));
/* 435949: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
L_43594c: /* 43594c: cmp byte ptr [ebp - 0x3e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffc2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 435950: je 0x4359b5 */
  if (zf) goto L_4359b5;
L_435952: /* 435952: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 435954: mov byte ptr [ebp - 0x49], cl */
  W8((uint32_t)(ebp + 0xffffffb7u), (ecx & 0xffu));
/* 435957: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 435958: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 43595b: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 43595e: cmp ecx, 0x66 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x66u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 435961: jg 0x435989 */
  if ((!zf && sf == of)) goto L_435989;
L_435963: /* 435963: je 0x4359b0 */
  if (zf) goto L_4359b0;
L_435965: /* 435965: cmp ecx, 0x26 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x26u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 435968: je 0x435983 */
  if (zf) goto L_435983;
L_43596a: /* 43596a: cmp ecx, 0x2e */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43596d: je 0x435983 */
  if (zf) goto L_435983;
L_43596f: /* 43596f: cmp ecx, 0x36 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x36u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 435972: je 0x435983 */
  if (zf) goto L_435983;
L_435974: /* 435974: cmp ecx, 0x3e */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 435977: je 0x435983 */
  if (zf) goto L_435983;
L_435979: /* 435979: cmp ecx, 0x63 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 43597c: jle 0x43599d */
  if ((zf || sf != of)) goto L_43599d;
L_43597e: /* 43597e: cmp ecx, 0x65 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x65u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 435981: jg 0x43599d */
  if ((!zf && sf == of)) goto L_43599d;
L_435983: /* 435983: mov byte ptr [ebp - 0x3d], 1 */
  W8((uint32_t)(ebp + 0xffffffc3u), 0x1u);
/* 435987: jmp 0x43594c */
  goto L_43594c;
L_435989: /* 435989: sub ecx, 0x67 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x67u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 43598c: je 0x435983 */
  if (zf) goto L_435983;
L_43598e: /* 43598e: sub ecx, 0x89 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x89u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 435994: je 0x435983 */
  if (zf) goto L_435983;
L_435996: /* 435996: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 435997: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 435998: je 0x4359ac */
  if (zf) goto L_4359ac;
L_43599a: /* 43599a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 43599b: je 0x4359a3 */
  if (zf) goto L_4359a3;
L_43599d: /* 43599d: and byte ptr [ebp - 0x3e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffc2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffc2u), r);
  }
/* 4359a1: jmp 0x43594c */
  goto L_43594c;
L_4359a3: /* 4359a3: mov byte ptr [ebp - 0x42], 1 */
  W8((uint32_t)(ebp + 0xffffffbeu), 0x1u);
L_4359a7: /* 4359a7: inc dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd4u), r);
  }
/* 4359aa: jmp 0x43594c */
  goto L_43594c;
L_4359ac: /* 4359ac: mov byte ptr [ebp - 0x42], 1 */
  W8((uint32_t)(ebp + 0xffffffbeu), 0x1u);
L_4359b0: /* 4359b0: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* 4359b3: jmp 0x4359a7 */
  goto L_4359a7;
L_4359b5: /* 4359b5: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4359b9: cmp byte ptr [ebp - 0x3d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffc3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4359bd: jne 0x436031 */
  if (!zf) goto L_436031;
L_4359c3: /* 4359c3: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 4359c6: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 4359c9: cmp byte ptr [ebp - 0x49], 0xf */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb7u))); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4359cd: jne 0x435bc0 */
  if (!zf) goto L_435bc0;
L_4359d3: /* 4359d3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4359d5: mov eax, ecx */
  eax = ecx;
/* 4359d7: shr eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4359da: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4359dd: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4359e0: jne 0x4359eb */
  if (!zf) goto L_4359eb;
L_4359e2: /* 4359e2: mov dword ptr [ebp - 0x58], 0x44ebe0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x44ebe0u);
/* 4359e9: jmp 0x435a17 */
  goto L_435a17;
L_4359eb: /* 4359eb: cmp eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4359ee: jne 0x4359f9 */
  if (!zf) goto L_4359f9;
L_4359f0: /* 4359f0: mov dword ptr [ebp - 0x58], 0x44ece0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x44ece0u);
/* 4359f7: jmp 0x435a17 */
  goto L_435a17;
L_4359f9: /* 4359f9: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4359fc: jne 0x435a07 */
  if (!zf) goto L_435a07;
L_4359fe: /* 4359fe: mov dword ptr [ebp - 0x58], 0x44ede0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x44ede0u);
/* 435a05: jmp 0x435a17 */
  goto L_435a17;
L_435a07: /* 435a07: cmp eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 435a0a: jne 0x435bc0 */
  if (!zf) goto L_435bc0;
L_435a10: /* 435a10: mov dword ptr [ebp - 0x58], 0x44eee0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x44eee0u);
L_435a17: /* 435a17: mov edx, ecx */
  edx = ecx;
/* 435a19: mov esi, 0xc000 */
  esi = 0xc000u;
/* 435a1e: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 435a20: xor eax, eax */
  eax = 0;
/* 435a22: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 435a24: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 435a27: mov byte ptr [ebp - 0x59], al */
  W8((uint32_t)(ebp + 0xffffffa7u), (eax & 0xffu));
/* 435a2a: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 435a2d: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 435a30: and ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 435a33: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 435a35: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 435a38: cmp eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435a3b: ja 0x435bc0 */
  if ((!cf && !zf)) goto L_435bc0;
L_435a41: /* 435a41: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 435a44: lea eax, [ecx + eax*2] */
  eax = (uint32_t)(ecx + eax*2);
/* 435a47: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 435a4a: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 435a4d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 435a50: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 435a52: mov ecx, 0xfff */
  ecx = 0xfffu;
/* 435a57: test ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 435a59: jne 0x435a64 */
  if (!zf) goto L_435a64;
L_435a5b: /* 435a5b: mov byte ptr [ebp - 0x3d], 1 */
  W8((uint32_t)(ebp + 0xffffffc3u), 0x1u);
/* 435a5f: jmp 0x435bc7 */
  goto L_435bc7;
L_435a64: /* 435a64: mov edx, eax */
  edx = eax;
/* 435a66: mov edi, 0x1f000 */
  edi = 0x1f000u;
/* 435a6b: and edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 435a6d: cmp edx, 0x1e000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1e000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 435a73: jne 0x435a9d */
  if (!zf) goto L_435a9d;
L_435a75: /* 435a75: shr eax, 0x11 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 17;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 435a78: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 435a7b: cmp byte ptr [ebp - 0x42], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffbeu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 435a7f: lea esi, [eax*4 + 0x44efe4] */
  esi = (uint32_t)(eax*4 + 0x44efe4u);
/* 435a86: jne 0x435a8f */
  if (!zf) goto L_435a8f;
L_435a88: /* 435a88: lea esi, [eax*4 + 0x44efe0] */
  esi = (uint32_t)(eax*4 + 0x44efe0u);
L_435a8f: /* 435a8f: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 435a92: and byte ptr [ebp - 0x42], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffbeu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffbeu), r);
  }
/* 435a96: mov dword ptr [ebp - 0x3c], 2 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x2u);
L_435a9d: /* 435a9d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 435a9f: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 435aa1: movzx ecx, byte ptr [ebp - 0x42] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffbeu)));
/* 435aa5: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 435aa7: mov dword ptr [ebp - 0x108], eax */
  W32((uint32_t)(ebp + 0xfffffef8u), eax);
/* 435aad: add dword ptr [ebp - 0x2c], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffd4u), r);
  }
/* 435ab1: cmp byte ptr [ebp - 0x59], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffa7u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 435ab5: je 0x435ae8 */
  if (zf) goto L_435ae8;
L_435ab7: /* 435ab7: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 435aba: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 435abd: inc dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 435ac0: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 435ac3: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 435ac5: mov byte ptr [ebp - 0x49], al */
  W8((uint32_t)(ebp + 0xffffffb7u), (eax & 0xffu));
/* 435ac8: inc dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 435acb: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* 435ace: push dword ptr [ebp - 0x48] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffb8u)); esp -= 4; W32(esp, v); }
/* 435ad1: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 435ad4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 435ad5: add eax, 0xdc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 435ada: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 435adb: call dword ptr [ecx*4 + 0x44b3a8] */
  { uint32_t t = R32((uint32_t)(ecx*4 + 0x44b3a8u)); esp -= 4; W32(esp, 0x435ae2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 435ae2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 435ae5: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
L_435ae8: /* 435ae8: push dword ptr [ebp - 0x34] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffccu)); esp -= 4; W32(esp, v); }
/* 435aeb: lea eax, [ebp - 0xf0] */
  eax = (uint32_t)(ebp + 0xffffff10u);
/* 435af1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 435af2: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 435af5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 435af7: shr eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 435afa: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 435afd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 435afe: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 435b00: shr eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 435b03: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 435b06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 435b07: push dword ptr [ebp - 0x42] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffbeu)); esp -= 4; W32(esp, v); }
/* 435b0a: call 0x434e03 */
  esp -= 4; W32(esp, 0x435b0fu); SPILL(); f_434e03(); if (g_unwind) return; RELOAD();
/* 435b0f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 435b12: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 435b14: mov ecx, eax */
  ecx = eax;
/* 435b16: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 435b18: shr eax, 0x11 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 17;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 435b1b: push dword ptr [ebp - 0x34] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffccu)); esp -= 4; W32(esp, v); }
/* 435b1e: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 435b21: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 435b23: jne 0x435b4d */
  if (!zf) goto L_435b4d;
L_435b25: /* 435b25: lea ecx, [ebp - 0xf0] */
  ecx = (uint32_t)(ebp + 0xffffff10u);
/* 435b2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 435b2c: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 435b2f: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 435b31: shr ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 435b34: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 435b37: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 435b38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 435b39: push dword ptr [ebp - 0x42] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffbeu)); esp -= 4; W32(esp, v); }
/* 435b3c: call 0x434e03 */
  esp -= 4; W32(esp, 0x435b41u); SPILL(); f_434e03(); if (g_unwind) return; RELOAD();
/* 435b41: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 435b44: and dword ptr [ebp - 0xa0], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff60u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffff60u), r);
  }
/* 435b4b: jmp 0x435b6c */
  goto L_435b6c;
L_435b4d: /* 435b4d: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 435b53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 435b54: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 435b57: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 435b59: shr ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 435b5c: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 435b5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 435b60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 435b61: push dword ptr [ebp - 0x42] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffbeu)); esp -= 4; W32(esp, v); }
/* 435b64: call 0x434e03 */
  esp -= 4; W32(esp, 0x435b69u); SPILL(); f_434e03(); if (g_unwind) return; RELOAD();
/* 435b69: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_435b6c: /* 435b6c: push dword ptr [ebp - 0x34] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffccu)); esp -= 4; W32(esp, v); }
/* 435b6f: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 435b75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 435b76: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 435b79: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 435b7b: shr eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 435b7e: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 435b81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 435b82: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 435b84: shr eax, 0x19 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 25;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 435b87: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 435b8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 435b8b: push dword ptr [ebp - 0x42] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffbeu)); esp -= 4; W32(esp, v); }
/* 435b8e: call 0x434e03 */
  esp -= 4; W32(esp, 0x435b93u); SPILL(); f_434e03(); if (g_unwind) return; RELOAD();
/* 435b93: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 435b96: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 435b99: add dword ptr [ebp - 0x2c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffd4u), r);
  }
/* 435b9c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 435b9e: and ecx, 0x1c00000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1c00000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 435ba4: cmp ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 435baa: jne 0x435bc7 */
  if (!zf) goto L_435bc7;
L_435bac: /* 435bac: add dword ptr [ebp - 0x48], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 435baf: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 435bb2: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 435bb5: mov dword ptr [ebp - 0x104], eax */
  W32((uint32_t)(ebp + 0xfffffefcu), eax);
/* 435bbb: inc dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd4u), r);
  }
/* 435bbe: jmp 0x435bc7 */
  goto L_435bc7;
L_435bc0: /* 435bc0: mov byte ptr [ebp - 0x3d], 1 */
  W8((uint32_t)(ebp + 0xffffffc3u), 0x1u);
/* 435bc4: mov esi, dword ptr [ebp - 0x54] */
  esi = R32((uint32_t)(ebp + 0xffffffacu));
L_435bc7: /* 435bc7: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 435bcb: xor eax, eax */
  eax = 0;
/* 435bcd: cmp byte ptr [ebp - 0x3d], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffc3u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 435bd0: jne 0x436033 */
  if (!zf) goto L_436033;
L_435bd6: /* 435bd6: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 435bd9: mov ax, word ptr [edx + 0xcc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + 0xccu))) & 0xffffu);
/* 435be0: mov ecx, 0x300 */
  ecx = 0x300u;
/* 435be5: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 435be7: je 0x435c09 */
  if (zf) goto L_435c09;
L_435be9: /* 435be9: cmp eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 435bee: je 0x435bfd */
  if (zf) goto L_435bfd;
L_435bf0: /* 435bf0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 435bf2: jne 0x435c13 */
  if (!zf) goto L_435c13;
L_435bf4: /* 435bf4: and dword ptr [ebp - 0x140], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffec0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffec0u), r);
  }
/* 435bfb: jmp 0x435c13 */
  goto L_435c13;
L_435bfd: /* 435bfd: mov dword ptr [ebp - 0x140], 1 */
  W32((uint32_t)(ebp + 0xfffffec0u), 0x1u);
/* 435c07: jmp 0x435c13 */
  goto L_435c13;
L_435c09: /* 435c09: mov dword ptr [ebp - 0x140], 2 */
  W32((uint32_t)(ebp + 0xfffffec0u), 0x2u);
L_435c13: /* 435c13: mov eax, dword ptr [edx + 0xe4] */
  eax = R32((uint32_t)(edx + 0xe4u));
/* 435c19: mov ecx, eax */
  ecx = eax;
/* 435c1b: shr ecx, 0xd */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 13;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 435c1e: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 435c20: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 435c21: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 435c23: sub ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 435c26: je 0x435c51 */
  if (zf) goto L_435c51;
L_435c28: /* 435c28: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 435c29: je 0x435c45 */
  if (zf) goto L_435c45;
L_435c2b: /* 435c2b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 435c2c: je 0x435c39 */
  if (zf) goto L_435c39;
L_435c2e: /* 435c2e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 435c2f: jne 0x435c58 */
  if (!zf) goto L_435c58;
L_435c31: /* 435c31: mov dword ptr [ebp - 0x144], edi */
  W32((uint32_t)(ebp + 0xfffffebcu), edi);
/* 435c37: jmp 0x435c58 */
  goto L_435c58;
L_435c39: /* 435c39: mov dword ptr [ebp - 0x144], 2 */
  W32((uint32_t)(ebp + 0xfffffebcu), 0x2u);
/* 435c43: jmp 0x435c58 */
  goto L_435c58;
L_435c45: /* 435c45: mov dword ptr [ebp - 0x144], 1 */
  W32((uint32_t)(ebp + 0xfffffebcu), 0x1u);
/* 435c4f: jmp 0x435c58 */
  goto L_435c58;
L_435c51: /* 435c51: and dword ptr [ebp - 0x144], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffebcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffebcu), r);
  }
L_435c58: /* 435c58: mov ecx, eax */
  ecx = eax;
/* 435c5a: shr ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 435c5d: and ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 435c60: mov dword ptr [ebp - 0x154], ecx */
  W32((uint32_t)(ebp + 0xfffffeacu), ecx);
/* 435c66: mov ecx, eax */
  ecx = eax;
/* 435c68: shr ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 435c6b: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 435c6e: mov dword ptr [ebp - 0x14c], ecx */
  W32((uint32_t)(ebp + 0xfffffeb4u), ecx);
/* 435c74: mov ecx, eax */
  ecx = eax;
/* 435c76: shr ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 435c79: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 435c7c: mov dword ptr [ebp - 0x148], ecx */
  W32((uint32_t)(ebp + 0xfffffeb8u), ecx);
/* 435c82: mov ecx, dword ptr [edx + 0xc0] */
  ecx = R32((uint32_t)(edx + 0xc0u));
/* 435c88: mov dword ptr [ebp - 0x138], ecx */
  W32((uint32_t)(ebp + 0xfffffec8u), ecx);
/* 435c8e: mov ecx, dword ptr [ebp - 0x104] */
  ecx = R32((uint32_t)(ebp + 0xfffffefcu));
/* 435c94: mov dword ptr [ebp - 0x13c], ecx */
  W32((uint32_t)(ebp + 0xfffffec4u), ecx);
/* 435c9a: and eax, 0x3f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 435c9d: mov dword ptr [ebp - 0x130], eax */
  W32((uint32_t)(ebp + 0xfffffed0u), eax);
/* 435ca3: xor edi, edi */
  edi = 0;
/* 435ca5: mov dword ptr [ebp - 0x12c], edi */
  W32((uint32_t)(ebp + 0xfffffed4u), edi);
/* 435cab: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 435cad: shr esi, 0x1e */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 30;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 435cb0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 435cb1: mov dword ptr [ebp - 0x158], esi */
  W32((uint32_t)(ebp + 0xfffffea8u), esi);
/* 435cb7: cmp byte ptr [ebp - 0x42], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffbeu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 435cbb: je 0x435cc6 */
  if (zf) goto L_435cc6;
L_435cbd: /* 435cbd: xor esi, esi */
  esi = 0;
/* 435cbf: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 435cc0: mov dword ptr [ebp - 0x158], esi */
  W32((uint32_t)(ebp + 0xfffffea8u), esi);
L_435cc6: /* 435cc6: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435cc8: jbe 0x435fe4 */
  if ((cf | zf)) goto L_435fe4;
L_435cce: /* 435cce: mov eax, dword ptr [ebp - 0x140] */
  eax = R32((uint32_t)(ebp + 0xfffffec0u));
/* 435cd4: and dword ptr [ebp - 0x150], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffeb0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffeb0u), r);
  }
/* 435cdb: and dword ptr [ebp - 0x1cc], 0xffffffe0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe34u))); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffe34u), r);
  }
/* 435ce2: and dword ptr [ebp - 0x1c8], 0xffffffe0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe38u))); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffe38u), r);
  }
/* 435ce9: and dword ptr [ebp - 0x1c4], 0xffffffe0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe3cu))); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffe3cu), r);
  }
/* 435cf0: mov edx, dword ptr [ebp - 0x108] */
  edx = R32((uint32_t)(ebp + 0xfffffef8u));
/* 435cf6: mov ecx, edx */
  ecx = edx;
/* 435cf8: and ecx, 0xfff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 435cfe: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 435d01: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 435d04: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 435d06: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 435d09: mov eax, dword ptr [ebp - 0x1d0] */
  eax = R32((uint32_t)(ebp + 0xfffffe30u));
/* 435d0f: and eax, 0xfffe0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffe0000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 435d14: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 435d16: mov eax, dword ptr [ebp - 0x144] */
  eax = R32((uint32_t)(ebp + 0xfffffebcu));
/* 435d1c: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 435d1f: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 435d21: mov dword ptr [ebp - 0x1d0], ecx */
  W32((uint32_t)(ebp + 0xfffffe30u), ecx);
/* 435d27: mov eax, dword ptr [ebp - 0x1b0] */
  eax = R32((uint32_t)(ebp + 0xfffffe50u));
/* 435d2d: xor eax, dword ptr [ebp - 0xd0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff30u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 435d33: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 435d36: xor dword ptr [ebp - 0x1b0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe50u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(ebp + 0xfffffe50u), r);
  }
/* 435d3c: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 435d3f: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 435d42: jne 0x435d60 */
  if (!zf) goto L_435d60;
L_435d44: /* 435d44: mov eax, dword ptr [ebp + edi*8 - 0xe0] */
  eax = R32((uint32_t)(ebp + edi*8 + 0xffffff20u));
/* 435d4b: mov dword ptr [ebp - 0x1c0], eax */
  W32((uint32_t)(ebp + 0xfffffe40u), eax);
/* 435d51: mov eax, dword ptr [ebp + edi*8 - 0xdc] */
  eax = R32((uint32_t)(ebp + edi*8 + 0xffffff24u));
/* 435d58: mov dword ptr [ebp - 0x1bc], eax */
  W32((uint32_t)(ebp + 0xfffffe44u), eax);
/* 435d5e: jmp 0x435d93 */
  goto L_435d93;
L_435d60: /* 435d60: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 435d62: je 0x435d86 */
  if (zf) goto L_435d86;
L_435d64: /* 435d64: cmp edx, 0x59 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x59u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 435d67: jb 0x435d93 */
  if (cf) goto L_435d93;
L_435d69: /* 435d69: cmp edx, 0x5a */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435d6c: jbe 0x435d7f */
  if ((cf | zf)) goto L_435d7f;
L_435d6e: /* 435d6e: cmp edx, 0x5c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435d71: jbe 0x435d93 */
  if ((cf | zf)) goto L_435d93;
L_435d73: /* 435d73: cmp edx, 0x5f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435d76: jbe 0x435d86 */
  if ((cf | zf)) goto L_435d86;
L_435d78: /* 435d78: cmp edx, 0x61 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x61u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435d7b: ja 0x435d93 */
  if ((!cf && !zf)) goto L_435d93;
L_435d7d: /* 435d7d: jmp 0x435d44 */
  goto L_435d44;
L_435d7f: /* 435d7f: and dword ptr [ebp - 0x1bc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe44u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffe44u), r);
  }
L_435d86: /* 435d86: mov eax, dword ptr [ebp + edi*4 - 0xe0] */
  eax = R32((uint32_t)(ebp + edi*4 + 0xffffff20u));
/* 435d8d: mov dword ptr [ebp - 0x1c0], eax */
  W32((uint32_t)(ebp + 0xfffffe40u), eax);
L_435d93: /* 435d93: mov eax, dword ptr [ebp - 0x1b0] */
  eax = R32((uint32_t)(ebp + 0xfffffe50u));
/* 435d99: xor eax, dword ptr [ebp - 0xd0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff30u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 435d9f: and eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 435da2: xor dword ptr [ebp - 0x1b0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe50u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(ebp + 0xfffffe50u), r);
  }
/* 435da8: mov ecx, dword ptr [ebp - 0xa0] */
  ecx = R32((uint32_t)(ebp + 0xffffff60u));
/* 435dae: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 435db1: je 0x435e2d */
  if (zf) goto L_435e2d;
L_435db3: /* 435db3: mov eax, dword ptr [ebp - 0x190] */
  eax = R32((uint32_t)(ebp + 0xfffffe70u));
/* 435db9: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 435dbc: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 435dbe: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 435dc1: jne 0x435ddf */
  if (!zf) goto L_435ddf;
L_435dc3: /* 435dc3: mov ecx, dword ptr [ebp + edi*8 - 0xb0] */
  ecx = R32((uint32_t)(ebp + edi*8 + 0xffffff50u));
/* 435dca: mov dword ptr [ebp - 0x1a0], ecx */
  W32((uint32_t)(ebp + 0xfffffe60u), ecx);
/* 435dd0: mov ecx, dword ptr [ebp + edi*8 - 0xac] */
  ecx = R32((uint32_t)(ebp + edi*8 + 0xffffff54u));
/* 435dd7: mov dword ptr [ebp - 0x19c], ecx */
  W32((uint32_t)(ebp + 0xfffffe64u), ecx);
/* 435ddd: jmp 0x435e12 */
  goto L_435e12;
L_435ddf: /* 435ddf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 435de1: je 0x435e05 */
  if (zf) goto L_435e05;
L_435de3: /* 435de3: cmp edx, 0x59 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x59u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 435de6: jb 0x435e12 */
  if (cf) goto L_435e12;
L_435de8: /* 435de8: cmp edx, 0x5a */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435deb: jbe 0x435dfe */
  if ((cf | zf)) goto L_435dfe;
L_435ded: /* 435ded: cmp edx, 0x5c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435df0: jbe 0x435e12 */
  if ((cf | zf)) goto L_435e12;
L_435df2: /* 435df2: cmp edx, 0x5f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435df5: jbe 0x435e05 */
  if ((cf | zf)) goto L_435e05;
L_435df7: /* 435df7: cmp edx, 0x61 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x61u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435dfa: ja 0x435e12 */
  if ((!cf && !zf)) goto L_435e12;
L_435dfc: /* 435dfc: jmp 0x435dc3 */
  goto L_435dc3;
L_435dfe: /* 435dfe: and dword ptr [ebp - 0x19c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe64u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffe64u), r);
  }
L_435e05: /* 435e05: mov ecx, dword ptr [ebp + edi*4 - 0xb0] */
  ecx = R32((uint32_t)(ebp + edi*4 + 0xffffff50u));
/* 435e0c: mov dword ptr [ebp - 0x1a0], ecx */
  W32((uint32_t)(ebp + 0xfffffe60u), ecx);
L_435e12: /* 435e12: mov ecx, eax */
  ecx = eax;
/* 435e14: xor ecx, dword ptr [ebp - 0xa0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff60u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 435e1a: and ecx, 0x1e */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 435e1d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 435e1f: mov dword ptr [ebp - 0x190], eax */
  W32((uint32_t)(ebp + 0xfffffe70u), eax);
/* 435e25: mov edx, dword ptr [ebp - 0x108] */
  edx = R32((uint32_t)(ebp + 0xfffffef8u));
/* 435e2b: jmp 0x435e34 */
  goto L_435e34;
L_435e2d: /* 435e2d: and dword ptr [ebp - 0x190], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe70u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffe70u), r);
  }
L_435e34: /* 435e34: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 435e37: and dword ptr [ebp - 0x170], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe90u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffe90u), r);
  }
/* 435e3e: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 435e41: jne 0x435e59 */
  if (!zf) goto L_435e59;
L_435e43: /* 435e43: mov ecx, dword ptr [ebp + edi*8 - 0x80] */
  ecx = R32((uint32_t)(ebp + edi*8 + 0xffffff80u));
/* 435e47: mov dword ptr [ebp - 0x180], ecx */
  W32((uint32_t)(ebp + 0xfffffe80u), ecx);
/* 435e4d: mov ecx, dword ptr [ebp + edi*8 - 0x7c] */
  ecx = R32((uint32_t)(ebp + edi*8 + 0xffffff84u));
/* 435e51: mov dword ptr [ebp - 0x17c], ecx */
  W32((uint32_t)(ebp + 0xfffffe84u), ecx);
/* 435e57: jmp 0x435e89 */
  goto L_435e89;
L_435e59: /* 435e59: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 435e5b: je 0x435e7f */
  if (zf) goto L_435e7f;
L_435e5d: /* 435e5d: cmp edx, 0x59 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x59u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 435e60: jb 0x435e89 */
  if (cf) goto L_435e89;
L_435e62: /* 435e62: cmp edx, 0x5a */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435e65: jbe 0x435e78 */
  if ((cf | zf)) goto L_435e78;
L_435e67: /* 435e67: cmp edx, 0x5c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435e6a: jbe 0x435e89 */
  if ((cf | zf)) goto L_435e89;
L_435e6c: /* 435e6c: cmp edx, 0x5f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435e6f: jbe 0x435e7f */
  if ((cf | zf)) goto L_435e7f;
L_435e71: /* 435e71: cmp edx, 0x61 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x61u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435e74: ja 0x435e89 */
  if ((!cf && !zf)) goto L_435e89;
L_435e76: /* 435e76: jmp 0x435e43 */
  goto L_435e43;
L_435e78: /* 435e78: and dword ptr [ebp - 0x17c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe84u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffe84u), r);
  }
L_435e7f: /* 435e7f: mov ecx, dword ptr [ebp + edi*4 - 0x80] */
  ecx = R32((uint32_t)(ebp + edi*4 + 0xffffff80u));
/* 435e83: mov dword ptr [ebp - 0x180], ecx */
  W32((uint32_t)(ebp + 0xfffffe80u), ecx);
L_435e89: /* 435e89: xor eax, dword ptr [ebp - 0x170] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe90u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 435e8f: and eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 435e92: xor dword ptr [ebp - 0x170], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe90u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(ebp + 0xfffffe90u), r);
  }
/* 435e98: lea eax, [ebp - 0x1d0] */
  eax = (uint32_t)(ebp + 0xfffffe30u);
/* 435e9e: mov dword ptr [ebp - 0x134], eax */
  W32((uint32_t)(ebp + 0xfffffeccu), eax);
/* 435ea4: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 435ea7: je 0x435ec3 */
  if (zf) goto L_435ec3;
L_435ea9: /* 435ea9: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 435eac: je 0x435ec3 */
  if (zf) goto L_435ec3;
L_435eae: /* 435eae: lea esi, [ebp + edi*4 - 0x128] */
  esi = (uint32_t)(ebp + edi*4 + 0xfffffed8u);
/* 435eb5: lea eax, [ebp - 0x154] */
  eax = (uint32_t)(ebp + 0xfffffeacu);
/* 435ebb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 435ebc: call 0x437ce2 */
  esp -= 4; W32(esp, 0x435ec1u); SPILL(); f_437ce2(); if (g_unwind) return; RELOAD();
/* 435ec1: jmp 0x435ed6 */
  goto L_435ed6;
L_435ec3: /* 435ec3: lea esi, [ebp + edi*4 - 0x128] */
  esi = (uint32_t)(ebp + edi*4 + 0xfffffed8u);
/* 435eca: lea eax, [ebp - 0x154] */
  eax = (uint32_t)(ebp + 0xfffffeacu);
/* 435ed0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 435ed1: call 0x436804 */
  esp -= 4; W32(esp, 0x435ed6u); SPILL(); f_436804(); if (g_unwind) return; RELOAD();
L_435ed6: /* 435ed6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 435ed7: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 435ed9: mov eax, dword ptr [ebp - 0x150] */
  eax = R32((uint32_t)(ebp + 0xfffffeb0u));
/* 435edf: mov dword ptr [ebp + edi*4 - 0x118], eax */
  W32((uint32_t)(ebp + edi*4 + 0xfffffee8u), eax);
/* 435ee6: cmp dword ptr [esi], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 435ee9: jne 0x435f58 */
  if (!zf) goto L_435f58;
L_435eeb: /* 435eeb: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 435eed: je 0x435ef6 */
  if (zf) goto L_435ef6;
L_435eef: /* 435eef: or dword ptr [ebp - 0x12c], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffed4u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffed4u), r);
  }
L_435ef6: /* 435ef6: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 435ef8: je 0x435f01 */
  if (zf) goto L_435f01;
L_435efa: /* 435efa: or dword ptr [ebp - 0x12c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffed4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffed4u), r);
  }
L_435f01: /* 435f01: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 435f03: je 0x435f0c */
  if (zf) goto L_435f0c;
L_435f05: /* 435f05: or dword ptr [ebp - 0x12c], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffed4u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffed4u), r);
  }
L_435f0c: /* 435f0c: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 435f0e: je 0x435f17 */
  if (zf) goto L_435f17;
L_435f10: /* 435f10: or dword ptr [ebp - 0x12c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffed4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffed4u), r);
  }
L_435f17: /* 435f17: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 435f19: je 0x435f22 */
  if (zf) goto L_435f22;
L_435f1b: /* 435f1b: or dword ptr [ebp - 0x12c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffed4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffed4u), r);
  }
L_435f22: /* 435f22: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 435f24: je 0x435f2d */
  if (zf) goto L_435f2d;
L_435f26: /* 435f26: or dword ptr [ebp - 0x12c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffed4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffed4u), r);
  }
L_435f2d: /* 435f2d: lea eax, [ebp - 0x1d0] */
  eax = (uint32_t)(ebp + 0xfffffe30u);
/* 435f33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 435f34: call dword ptr [ebx + 0x10] */
  { uint32_t t = R32((uint32_t)(ebx + 0x10u)); esp -= 4; W32(esp, 0x435f37u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 435f37: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 435f38: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 435f3b: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 435f3e: jne 0x436033 */
  if (!zf) goto L_436033;
L_435f44: /* 435f44: lea eax, [ebp - 0x154] */
  eax = (uint32_t)(ebp + 0xfffffeacu);
/* 435f4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 435f4b: push dword ptr [ebp - 0x108] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffef8u)); esp -= 4; W32(esp, v); }
/* 435f51: call 0x434ffc */
  esp -= 4; W32(esp, 0x435f56u); SPILL(); f_434ffc(); if (g_unwind) return; RELOAD();
/* 435f56: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 435f57: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_435f58: /* 435f58: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 435f5b: xor eax, dword ptr [ebp - 0x170] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe90u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 435f61: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 435f64: xor dword ptr [ebp - 0x70], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff90u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(ebp + 0xffffff90u), r);
  }
/* 435f67: mov eax, dword ptr [ebp - 0x138] */
  eax = R32((uint32_t)(ebp + 0xfffffec8u));
/* 435f6d: mov dword ptr [ebp - 0x100], eax */
  W32((uint32_t)(ebp + 0xffffff00u), eax);
/* 435f73: test byte ptr [ebp - 0x70], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffff90u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 435f77: je 0x435fd7 */
  if (zf) goto L_435fd7;
L_435f79: /* 435f79: cmp dword ptr [ebp - 0x3c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 435f7d: jne 0x435f95 */
  if (!zf) goto L_435f95;
L_435f7f: /* 435f7f: mov eax, dword ptr [ebp - 0x180] */
  eax = R32((uint32_t)(ebp + 0xfffffe80u));
/* 435f85: mov dword ptr [ebp + edi*8 - 0x80], eax */
  W32((uint32_t)(ebp + edi*8 + 0xffffff80u), eax);
/* 435f89: mov eax, dword ptr [ebp - 0x17c] */
  eax = R32((uint32_t)(ebp + 0xfffffe84u));
/* 435f8f: mov dword ptr [ebp + edi*8 - 0x7c], eax */
  W32((uint32_t)(ebp + edi*8 + 0xffffff84u), eax);
/* 435f93: jmp 0x435fd7 */
  goto L_435fd7;
L_435f95: /* 435f95: cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 435f99: jne 0x435fa7 */
  if (!zf) goto L_435fa7;
L_435f9b: /* 435f9b: mov eax, dword ptr [ebp - 0x180] */
  eax = R32((uint32_t)(ebp + 0xfffffe80u));
/* 435fa1: mov dword ptr [ebp + edi*4 - 0x80], eax */
  W32((uint32_t)(ebp + edi*4 + 0xffffff80u), eax);
/* 435fa5: jmp 0x435fd7 */
  goto L_435fd7;
L_435fa7: /* 435fa7: mov eax, dword ptr [ebp - 0x108] */
  eax = R32((uint32_t)(ebp + 0xfffffef8u));
/* 435fad: cmp eax, 0x59 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x59u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 435fb0: jb 0x435fd7 */
  if (cf) goto L_435fd7;
L_435fb2: /* 435fb2: cmp eax, 0x5a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435fb5: jbe 0x435fc8 */
  if ((cf | zf)) goto L_435fc8;
L_435fb7: /* 435fb7: cmp eax, 0x5c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435fba: jbe 0x435fd7 */
  if ((cf | zf)) goto L_435fd7;
L_435fbc: /* 435fbc: cmp eax, 0x5f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435fbf: jbe 0x435f9b */
  if ((cf | zf)) goto L_435f9b;
L_435fc1: /* 435fc1: cmp eax, 0x61 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x61u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 435fc4: ja 0x435fd7 */
  if ((!cf && !zf)) goto L_435fd7;
L_435fc6: /* 435fc6: jmp 0x435f7f */
  goto L_435f7f;
L_435fc8: /* 435fc8: mov eax, dword ptr [ebp - 0x180] */
  eax = R32((uint32_t)(ebp + 0xfffffe80u));
/* 435fce: mov dword ptr [ebp + edi*8 - 0x80], eax */
  W32((uint32_t)(ebp + edi*8 + 0xffffff80u), eax);
/* 435fd2: and dword ptr [ebp + edi*8 - 0x7c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + edi*8 + 0xffffff84u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + edi*8 + 0xffffff84u), r);
  }
L_435fd7: /* 435fd7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 435fd8: cmp edi, dword ptr [ebp - 0x158] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffea8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 435fde: jb 0x435cce */
  if (cf) goto L_435cce;
L_435fe4: /* 435fe4: push dword ptr [ebp - 0x100] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffff00u)); esp -= 4; W32(esp, v); }
/* 435fea: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 435fed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 435fee: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 435ff4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 435ff5: call 0x4351c2 */
  esp -= 4; W32(esp, 0x435ffau); SPILL(); f_4351c2(); if (g_unwind) return; RELOAD();
/* 435ffa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 435ffd: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 436000: add dword ptr [esi + 0xb8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xb8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0xb8u), r);
  }
/* 436006: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 436009: mov dword ptr [esi + 0xdc], eax */
  W32((uint32_t)(esi + 0xdcu), eax);
/* 43600f: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 436012: jmp 0x436033 */
  goto L_436033;
L_436031: /* 436031: xor eax, eax */
  eax = 0;
L_436033: /* 436033: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 436036: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 43603d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 436040: xor ecx, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 436043: call 0x4013ab */
  esp -= 4; W32(esp, 0x436048u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 436048: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 436049: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 43604a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 43604b: mov esp, ebp */
  esp = ebp;
/* 43604d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 43604e: mov esp, ebx */
  esp = ebx;
/* 436050: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 436051: ret  */
  esp += 4; SPILL(); return;
}

void f_436014(void) {
  LOAD_REGS();
L_436014: /* 436014: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 436017: xor eax, eax */
  eax = 0;
/* 436019: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 43601a: ret  */
  esp += 4; SPILL(); return;
}

void f_43601b(void) {
  LOAD_REGS();
L_43601b: /* 43601b: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 43601e: jmp 0x43602a */
  goto L_43602a;
L_43602a: /* 43602a: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 43602d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 436031: xor eax, eax */
  eax = 0;
/* 436033: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 436036: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 43603d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 436040: xor ecx, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 436043: call 0x4013ab */
  esp -= 4; W32(esp, 0x436048u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 436048: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 436049: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 43604a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 43604b: mov esp, ebp */
  esp = ebp;
/* 43604d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 43604e: mov esp, ebx */
  esp = ebx;
/* 436050: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 436051: ret  */
  esp += 4; SPILL(); return;
}

void f_436020(void) {
  LOAD_REGS();
L_436020: /* 436020: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 436023: xor eax, eax */
  eax = 0;
/* 436025: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 436026: ret  */
  esp += 4; SPILL(); return;
}

void f_436027(void) {
  LOAD_REGS();
L_436027: /* 436027: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 43602a: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 43602d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 436031: xor eax, eax */
  eax = 0;
/* 436033: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 436036: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 43603d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 436040: xor ecx, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 436043: call 0x4013ab */
  esp -= 4; W32(esp, 0x436048u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 436048: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 436049: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 43604a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 43604b: mov esp, ebp */
  esp = ebp;
/* 43604d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 43604e: mov esp, ebx */
  esp = ebx;
/* 436050: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 436051: ret  */
  esp += 4; SPILL(); return;
}

void f_436052(void) {
  LOAD_REGS();
L_436052: /* 436052: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 436053: mov ebp, esp */
  ebp = esp;
/* 436055: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 436058: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 43605d: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 436060: mov ecx, 0xa1 */
  ecx = 0xa1u;
/* 436065: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 436068: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 43606b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 43606d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 43606e: jg 0x436187 */
  if ((!zf && sf == of)) goto L_436187;
L_436074: /* 436074: je 0x43617b */
  if (zf) goto L_43617b;
L_43607a: /* 43607a: cmp eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 43607d: jg 0x43610b */
  if ((!zf && sf == of)) goto L_43610b;
L_436083: /* 436083: je 0x4360f8 */
  if (zf) goto L_4360f8;
L_436085: /* 436085: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 436087: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436088: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 43608a: je 0x4360e9 */
  if (zf) goto L_4360e9;
L_43608c: /* 43608c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 43608d: je 0x4360dd */
  if (zf) goto L_4360dd;
L_43608f: /* 43608f: sub eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 436092: je 0x4360ce */
  if (zf) goto L_4360ce;
L_436094: /* 436094: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 436095: je 0x4360c2 */
  if (zf) goto L_4360c2;
L_436097: /* 436097: sub eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 43609a: je 0x4360af */
  if (zf) goto L_4360af;
L_43609c: /* 43609c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 43609d: jne 0x4362d8 */
  if (!zf) goto L_4362d8;
L_4360a3: /* 4360a3: mov dword ptr [ebp - 0x20], 0x446634 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x446634u);
/* 4360aa: jmp 0x43614c */
  goto L_43614c;
L_4360af: /* 4360af: mov dword ptr [ebp - 0x24], 3 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3u);
/* 4360b6: mov dword ptr [ebp - 0x20], 0x446634 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x446634u);
/* 4360bd: jmp 0x43620e */
  goto L_43620e;
L_4360c2: /* 4360c2: mov dword ptr [ebp - 0x20], 0x446624 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x446624u);
/* 4360c9: jmp 0x436275 */
  goto L_436275;
L_4360ce: /* 4360ce: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 4360d1: mov dword ptr [ebp - 0x20], 0x446624 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x446624u);
/* 4360d8: jmp 0x43620e */
  goto L_43620e;
L_4360dd: /* 4360dd: mov dword ptr [ebp - 0x20], 0x44662c */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x44662cu);
/* 4360e4: jmp 0x436275 */
  goto L_436275;
L_4360e9: /* 4360e9: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 4360ec: mov dword ptr [ebp - 0x20], 0x44662c */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x44662cu);
/* 4360f3: jmp 0x43620e */
  goto L_43620e;
L_4360f8: /* 4360f8: mov dword ptr [ebp - 0x24], 3 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3u);
L_4360ff: /* 4360ff: mov dword ptr [ebp - 0x20], 0x446630 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x446630u);
/* 436106: jmp 0x43620e */
  goto L_43620e;
L_43610b: /* 43610b: sub eax, 0x19 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x19u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 43610e: je 0x436145 */
  if (zf) goto L_436145;
L_436110: /* 436110: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 436111: je 0x436139 */
  if (zf) goto L_436139;
L_436113: /* 436113: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 436114: je 0x436130 */
  if (zf) goto L_436130;
L_436116: /* 436116: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 436117: je 0x43626e */
  if (zf) goto L_43626e;
L_43611d: /* 43611d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 43611e: jne 0x4362d8 */
  if (!zf) goto L_4362d8;
L_436124: /* 436124: mov dword ptr [ebp - 0x20], 0x446630 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x446630u);
/* 43612b: jmp 0x436296 */
  goto L_436296;
L_436130: /* 436130: mov dword ptr [ebp - 0x24], 2 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x2u);
/* 436137: jmp 0x4360ff */
  goto L_4360ff;
L_436139: /* 436139: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 43613c: fld1  */
  FPUSH(1.0);
/* 43613e: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 436140: jmp 0x4362d8 */
  goto L_4362d8;
L_436145: /* 436145: mov dword ptr [ebp - 0x20], 0x446630 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x446630u);
L_43614c: /* 43614c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 43614f: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 436151: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 436154: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 436157: fstp qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 43615a: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 43615c: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 43615f: fstp qword ptr [ebp - 0x14] */
  WF64((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 436162: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 436163: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 436165: mov dword ptr [ebp - 0x24], 4 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x4u);
/* 43616c: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 43616f: call dword ptr [0x44f020] */
  { uint32_t t = R32((uint32_t)(0x44f020u)); esp -= 4; W32(esp, 0x436175u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 436175: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436176: jmp 0x4362d3 */
  goto L_4362d3;
L_43617b: /* 43617b: mov dword ptr [ebp - 0x24], 3 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3u);
/* 436182: jmp 0x436207 */
  goto L_436207;
L_436187: /* 436187: mov ecx, 0x3ea */
  ecx = 0x3eau;
/* 43618c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 43618e: jg 0x436252 */
  if ((!zf && sf == of)) goto L_436252;
L_436194: /* 436194: je 0x436249 */
  if (zf) goto L_436249;
L_43619a: /* 43619a: sub eax, 0xa2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 43619f: je 0x436200 */
  if (zf) goto L_436200;
L_4361a1: /* 4361a1: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 4361a4: je 0x4361f0 */
  if (zf) goto L_4361f0;
L_4361a6: /* 4361a6: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 4361a9: je 0x4361e0 */
  if (zf) goto L_4361e0;
L_4361ab: /* 4361ab: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4361ac: je 0x4361d4 */
  if (zf) goto L_4361d4;
L_4361ae: /* 4361ae: sub eax, 0x33d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 4361b3: je 0x4361c8 */
  if (zf) goto L_4361c8;
L_4361b5: /* 4361b5: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4361b6: jne 0x4362d8 */
  if (!zf) goto L_4362d8;
L_4361bc: /* 4361bc: mov dword ptr [ebp - 0x20], 0x446624 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x446624u);
/* 4361c3: jmp 0x436296 */
  goto L_436296;
L_4361c8: /* 4361c8: mov dword ptr [ebp - 0x20], 0x44662c */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x44662cu);
/* 4361cf: jmp 0x436296 */
  goto L_436296;
L_4361d4: /* 4361d4: mov dword ptr [ebp - 0x20], 0x446660 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x446660u);
/* 4361db: jmp 0x436275 */
  goto L_436275;
L_4361e0: /* 4361e0: mov dword ptr [ebp - 0x24], 2 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x2u);
/* 4361e7: mov dword ptr [ebp - 0x20], 0x446660 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x446660u);
/* 4361ee: jmp 0x43620e */
  goto L_43620e;
L_4361f0: /* 4361f0: mov dword ptr [ebp - 0x24], 3 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3u);
/* 4361f7: mov dword ptr [ebp - 0x20], 0x446658 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x446658u);
/* 4361fe: jmp 0x43620e */
  goto L_43620e;
L_436200: /* 436200: mov dword ptr [ebp - 0x24], 4 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x4u);
L_436207: /* 436207: mov dword ptr [ebp - 0x20], 0x446650 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x446650u);
L_43620e: /* 43620e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 436211: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 436213: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 436216: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 436219: fstp qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 43621c: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 43621e: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 436221: fstp qword ptr [ebp - 0x14] */
  WF64((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 436224: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 436225: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 436227: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 43622a: call dword ptr [0x44f020] */
  { uint32_t t = R32((uint32_t)(0x44f020u)); esp -= 4; W32(esp, 0x436230u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 436230: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 436232: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436233: jne 0x4362d3 */
  if (!zf) goto L_4362d3;
L_436239: /* 436239: call 0x4102a5 */
  esp -= 4; W32(esp, 0x43623eu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 43623e: mov dword ptr [eax], 0x22 */
  W32((uint32_t)(eax), 0x22u);
/* 436244: jmp 0x4362d3 */
  goto L_4362d3;
L_436249: /* 436249: mov dword ptr [ebp - 0x20], 0x446634 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x446634u);
/* 436250: jmp 0x436296 */
  goto L_436296;
L_436252: /* 436252: sub eax, 0x3eb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ebu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 436257: je 0x43628f */
  if (zf) goto L_43628f;
L_436259: /* 436259: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 43625a: je 0x436286 */
  if (zf) goto L_436286;
L_43625c: /* 43625c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 43625d: je 0x43627d */
  if (zf) goto L_43627d;
L_43625f: /* 43625f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 436260: je 0x43626e */
  if (zf) goto L_43626e;
L_436262: /* 436262: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 436263: jne 0x4362d8 */
  if (!zf) goto L_4362d8;
L_436265: /* 436265: mov dword ptr [ebp - 0x20], 0x4465b8 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x4465b8u);
/* 43626c: jmp 0x436296 */
  goto L_436296;
L_43626e: /* 43626e: mov dword ptr [ebp - 0x20], 0x446630 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x446630u);
L_436275: /* 436275: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 436278: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 43627b: jmp 0x4362a0 */
  goto L_4362a0;
L_43627d: /* 43627d: mov dword ptr [ebp - 0x20], 0x4465c8 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x4465c8u);
/* 436284: jmp 0x436296 */
  goto L_436296;
L_436286: /* 436286: mov dword ptr [ebp - 0x20], 0x4465d0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x4465d0u);
/* 43628d: jmp 0x436296 */
  goto L_436296;
L_43628f: /* 43628f: mov dword ptr [ebp - 0x20], 0x4465f4 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x4465f4u);
L_436296: /* 436296: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 436299: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 43629b: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 43629e: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
L_4362a0: /* 4362a0: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 4362a2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4362a5: fstp qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 4362a8: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
/* 4362af: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 4362b1: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 4362b4: fstp qword ptr [ebp - 0x14] */
  WF64((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 4362b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4362b8: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 4362ba: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 4362bd: call dword ptr [0x44f020] */
  { uint32_t t = R32((uint32_t)(0x44f020u)); esp -= 4; W32(esp, 0x4362c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4362c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4362c5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4362c6: jne 0x4362d3 */
  if (!zf) goto L_4362d3;
L_4362c8: /* 4362c8: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4362cdu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4362cd: mov dword ptr [eax], 0x21 */
  W32((uint32_t)(eax), 0x21u);
L_4362d3: /* 4362d3: fld qword ptr [ebp - 0xc] */
  { double v = F64((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* 4362d6: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
L_4362d8: /* 4362d8: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4362db: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4362de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4362df: call 0x4013ab */
  esp -= 4; W32(esp, 0x4362e4u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 4362e4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4362e5: ret  */
  esp += 4; SPILL(); return;
}

void f_4365aa(void) {
  LOAD_REGS();
L_4365aa: /* 4365aa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4365ab: mov ebp, esp */
  ebp = esp;
/* 4365ad: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 4365b0: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4365b6: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 4365bb: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4365be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4365bf: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
/* 4365c6: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 4365c9: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 4365cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4365cd: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 4365d0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4365d2: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4365d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4365d4: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 4365d8: je 0x436605 */
  if (zf) goto L_436605;
L_4365da: /* 4365da: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4365db: je 0x436601 */
  if (zf) goto L_436601;
L_4365dd: /* 4365dd: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4365de: je 0x4365fd */
  if (zf) goto L_4365fd;
L_4365e0: /* 4365e0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4365e1: je 0x4365f9 */
  if (zf) goto L_4365f9;
L_4365e3: /* 4365e3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4365e4: je 0x436605 */
  if (zf) goto L_436605;
L_4365e6: /* 4365e6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 4365e7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4365e8: je 0x4365f1 */
  if (zf) goto L_4365f1;
L_4365ea: /* 4365ea: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4365eb: jne 0x436661 */
  if (!zf) goto L_436661;
L_4365ed: /* 4365ed: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 4365ef: jmp 0x436607 */
  goto L_436607;
L_4365f1: /* 4365f1: mov dword ptr [esi], 1 */
  W32((uint32_t)(esi), 0x1u);
/* 4365f7: jmp 0x436661 */
  goto L_436661;
L_4365f9: /* 4365f9: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* 4365fb: jmp 0x436607 */
  goto L_436607;
L_4365fd: /* 4365fd: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 4365ff: jmp 0x436607 */
  goto L_436607;
L_436601: /* 436601: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 436603: jmp 0x436607 */
  goto L_436607;
L_436605: /* 436605: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
L_436607: /* 436607: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 436608: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436609: lea edi, [esi + 0x18] */
  edi = (uint32_t)(esi + 0x18u);
/* 43660c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 43660d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 43660e: call 0x4346ca */
  esp -= 4; W32(esp, 0x436613u); SPILL(); f_4346ca(); if (g_unwind) return; RELOAD();
/* 436613: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 436616: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 436618: jne 0x436661 */
  if (!zf) goto L_436661;
L_43661a: /* 43661a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 43661d: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 436620: je 0x436633 */
  if (zf) goto L_436633;
L_436622: /* 436622: cmp eax, 0x16 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x16u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 436625: je 0x436633 */
  if (zf) goto L_436633;
L_436627: /* 436627: cmp eax, 0x1d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43662a: je 0x436633 */
  if (zf) goto L_436633;
L_43662c: /* 43662c: and dword ptr [esp + 0x50], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x50u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esp + 0x50u), r);
  }
/* 436631: jmp 0x436648 */
  goto L_436648;
L_436633: /* 436633: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 436637: fld qword ptr [esi + 0x10] */
  { double v = F64((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 43663a: and ecx, 0xffffffe3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffe3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 43663d: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 436641: or ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 436644: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
L_436648: /* 436648: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 436649: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 43664c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43664d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43664e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 43664f: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 436653: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 436654: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 436658: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 436659: call 0x434425 */
  esp -= 4; W32(esp, 0x43665eu); SPILL(); f_434425(); if (g_unwind) return; RELOAD();
/* 43665e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_436661: /* 436661: push 0xffff */
  { uint32_t v = 0xffffu; esp -= 4; W32(esp, v); }
/* 436666: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 43666a: call 0x434d89 */
  esp -= 4; W32(esp, 0x43666fu); SPILL(); f_434d89(); if (g_unwind) return; RELOAD();
/* 43666f: cmp dword ptr [esi], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 436672: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436673: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436674: je 0x43668a */
  if (zf) goto L_43668a;
L_436676: /* 436676: cmp dword ptr [0x44ba78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ba78u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43667d: jne 0x43668a */
  if (!zf) goto L_43668a;
L_43667f: /* 43667f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 436680: call 0x40f334 */
  esp -= 4; W32(esp, 0x436685u); SPILL(); f_40f334(); if (g_unwind) return; RELOAD();
/* 436685: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 436687: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436688: jne 0x436692 */
  if (!zf) goto L_436692;
L_43668a: /* 43668a: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 43668c: call 0x4348ec */
  esp -= 4; W32(esp, 0x436691u); SPILL(); f_4348ec(); if (g_unwind) return; RELOAD();
/* 436691: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_436692: /* 436692: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* 436699: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 43669c: call 0x4013ab */
  esp -= 4; W32(esp, 0x4366a1u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 4366a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4366a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4366a3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4366a4: mov esp, ebp */
  esp = ebp;
/* 4366a6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4366a7: ret  */
  esp += 4; SPILL(); return;
}

void f_4366a8(void) {
  LOAD_REGS();
L_4366a8: /* 4366a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4366a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4366aa: fld qword ptr [esp + 0xc] */
  { double v = F64((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4366ae: frndint  */
  ST0 = fpu_round(ST0);
/* 4366b0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4366b3: fld qword ptr [esp] */
  { double v = F64((uint32_t)(esp)); FPUSH(v); }
/* 4366b6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4366b7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4366b8: ret  */
  esp += 4; SPILL(); return;
}

void f_4366b9(void) {
  LOAD_REGS();
L_4366b9: /* 4366b9: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4366bd: and eax, 0x7ff80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff80000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4366c2: cmp eax, 0x7ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4366c7: jne 0x4366de */
  if (!zf) goto L_4366de;
L_4366c9: /* 4366c9: test dword ptr [esp + 8], 0x7ffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x7ffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4366d1: jne 0x4366da */
  if (!zf) goto L_4366da;
L_4366d3: /* 4366d3: cmp dword ptr [esp + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4366d8: je 0x4366de */
  if (zf) goto L_4366de;
L_4366da: /* 4366da: xor eax, eax */
  eax = 0;
/* 4366dc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4366dd: ret  */
  esp += 4; SPILL(); return;
L_4366de: /* 4366de: xor eax, eax */
  eax = 0;
/* 4366e0: ret  */
  esp += 4; SPILL(); return;
}

void f_4366e1(void) {
  LOAD_REGS();
L_4366e1: /* 4366e1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4366e5: mov eax, 0x7ff00000 */
  eax = 0x7ff00000u;
/* 4366ea: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4366ec: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4366ee: jne 0x436705 */
  if (!zf) goto L_436705;
L_4366f0: /* 4366f0: test dword ptr [esp + 8], 0xfffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4366f8: jne 0x436701 */
  if (!zf) goto L_436701;
L_4366fa: /* 4366fa: cmp dword ptr [esp + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4366ff: je 0x436705 */
  if (zf) goto L_436705;
L_436701: /* 436701: xor eax, eax */
  eax = 0;
/* 436703: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 436704: ret  */
  esp += 4; SPILL(); return;
L_436705: /* 436705: xor eax, eax */
  eax = 0;
/* 436707: ret  */
  esp += 4; SPILL(); return;
}

void f_436708(void) {
  LOAD_REGS();
L_436708: /* 436708: test word ptr [esp + 0xa], 0x7ff0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0xau))); uint16_t b = (uint16_t)(0x7ff0u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 43670f: jne 0x436726 */
  if (!zf) goto L_436726;
L_436711: /* 436711: test dword ptr [esp + 8], 0xfffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 436719: jne 0x436722 */
  if (!zf) goto L_436722;
L_43671b: /* 43671b: cmp dword ptr [esp + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 436720: je 0x436726 */
  if (zf) goto L_436726;
L_436722: /* 436722: xor eax, eax */
  eax = 0;
/* 436724: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 436725: ret  */
  esp += 4; SPILL(); return;
L_436726: /* 436726: xor eax, eax */
  eax = 0;
/* 436728: ret  */
  esp += 4; SPILL(); return;
}

void f_436729(void) {
  LOAD_REGS();
L_436729: /* 436729: test word ptr [esp + 6], 0x7f80 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x6u))); uint16_t b = (uint16_t)(0x7f80u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 436730: jne 0x436740 */
  if (!zf) goto L_436740;
L_436732: /* 436732: test dword ptr [esp + 4], 0x7fffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x7fffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43673a: je 0x436740 */
  if (zf) goto L_436740;
L_43673c: /* 43673c: xor eax, eax */
  eax = 0;
/* 43673e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 43673f: ret  */
  esp += 4; SPILL(); return;
L_436740: /* 436740: xor eax, eax */
  eax = 0;
/* 436742: ret  */
  esp += 4; SPILL(); return;
}

void f_436743(void) {
  LOAD_REGS();
L_436743: /* 436743: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 436746: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 436749: xor edx, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 43674b: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 43674e: xor dword ptr [ecx], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(ecx), r);
  }
/* 436750: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 436753: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 436756: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 436759: xor edx, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 43675b: and edx, 0x1c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 43675e: xor dword ptr [ecx], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(ecx), r);
  }
/* 436760: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 436762: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 436765: shr edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 436768: not edx */
  edx = ~edx;
/* 43676a: xor edx, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 43676d: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 436770: xor dword ptr [ecx + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(ecx + 0x8u), r);
  }
/* 436773: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 436775: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 436778: shr edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 43677b: not edx */
  edx = ~edx;
/* 43677d: xor edx, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 436780: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 436783: xor dword ptr [ecx + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(ecx + 0x8u), r);
  }
/* 436786: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 436788: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 43678b: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 43678d: not edx */
  edx = ~edx;
/* 43678f: xor edx, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 436792: and edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 436795: xor dword ptr [ecx + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(ecx + 0x8u), r);
  }
/* 436798: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 43679a: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 43679d: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 43679f: not edx */
  edx = ~edx;
/* 4367a1: xor edx, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 4367a4: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4367a7: xor dword ptr [ecx + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(ecx + 0x8u), r);
  }
/* 4367aa: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 4367ac: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 4367af: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 4367b2: not edx */
  edx = ~edx;
/* 4367b4: xor edx, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 4367b7: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4367ba: xor dword ptr [ecx + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(ecx + 0x8u), r);
  }
/* 4367bd: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 4367c0: and dword ptr [ecx + 0xc], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 4367c4: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 4367c7: and dword ptr [ecx + 0xc], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 4367cb: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 4367ce: and dword ptr [ecx + 0xc], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 4367d2: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 4367d5: and dword ptr [ecx + 0xc], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 4367d9: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 4367dc: and dword ptr [ecx + 0xc], 0xffffffef */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 4367e0: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 4367e3: and dword ptr [ecx + 4], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x4u), r);
  }
/* 4367e7: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 4367ea: and dword ptr [ecx + 4], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x4u), r);
  }
/* 4367ee: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 4367f1: and dword ptr [ecx + 4], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x4u), r);
  }
/* 4367f5: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 4367f8: and dword ptr [ecx + 4], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x4u), r);
  }
/* 4367fc: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 4367ff: and dword ptr [eax + 4], 0xffffffef */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 436803: ret  */
  esp += 4; SPILL(); return;
}

void f_436804(void) {
  LOAD_REGS();
L_436804: /* 436804: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 436805: lea ebp, [esp - 0x74] */
  ebp = (uint32_t)(esp + 0xffffff8cu);
/* 436809: sub esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 43680f: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 436814: xor eax, dword ptr [ebp + 0x78] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x78u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 436817: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 436818: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 436819: mov dword ptr [ebp + 0x70], eax */
  W32((uint32_t)(ebp + 0x70u), eax);
/* 43681c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 43681d: fninit  */
  fpu_init();
/* 43681f: mov esi, dword ptr [ebp + 0x7c] */
  esi = R32((uint32_t)(ebp + 0x7cu));
/* 436822: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436825: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 436827: xor ecx, dword ptr [esi + 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x10u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 43682a: and dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 43682e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 436832: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 436835: xor dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(eax), r);
  }
/* 436837: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 43683a: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43683d: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 436840: xor ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 436842: mov edi, 0xfff */
  edi = 0xfffu;
/* 436847: and ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 43684a: xor dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(eax), r);
  }
/* 43684c: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 43684f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 436851: mov ebx, ecx */
  ebx = ecx;
/* 436853: shr ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 436856: and ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 436858: lea eax, [ebx - 0x43] */
  eax = (uint32_t)(ebx + 0xffffffbdu);
/* 43685b: cmp eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 43685e: mov dword ptr [ebp + 0x7c], eax */
  W32((uint32_t)(ebp + 0x7cu), eax);
/* 436861: ja 0x436e43 */
  if ((!cf && !zf)) goto L_436e43;
L_436867: /* 436867: movzx eax, byte ptr [eax + 0x437c32] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x437c32u)));
/* 43686e: jmp dword ptr [eax*4 + 0x437c0a] */
  switch (R32((uint32_t)(eax*4 + 0x437c0au))) {
    case 0x436875u: goto L_436875;
    case 0x436ebcu: goto L_436ebc;
    case 0x4370efu: goto L_4370ef;
    case 0x4372b7u: goto L_4372b7;
    case 0x43736eu: goto L_43736e;
    case 0x43745du: goto L_43745d;
    case 0x43751cu: goto L_43751c;
    case 0x4375fau: goto L_4375fa;
    case 0x43791fu: goto L_43791f;
    case 0x437acbu: goto L_437acb;
    default: guest_badjump(0x43686e, R32((uint32_t)(eax*4 + 0x437c0au))); return;
  }
L_436875: /* 436875: cmp dword ptr [esi + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 436879: fld qword ptr [edx + 0x10] */
  { double v = F64((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 43687c: fstp qword ptr [ebp + 0x68] */
  WF64((uint32_t)(ebp + 0x68u), ST0); FPOP();
/* 43687f: fld qword ptr [edx + 0x30] */
  { double v = F64((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* 436882: fstp qword ptr [ebp + 0x60] */
  WF64((uint32_t)(ebp + 0x60u), ST0); FPOP();
/* 436885: je 0x4368c7 */
  if (zf) goto L_4368c7;
L_436887: /* 436887: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 43688a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43688b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43688c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 43688f: call 0x436708 */
  esp -= 4; W32(esp, 0x436894u); SPILL(); f_436708(); if (g_unwind) return; RELOAD();
/* 436894: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 436897: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 436899: je 0x4368a7 */
  if (zf) goto L_4368a7;
L_43689b: /* 43689b: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 43689e: fmul qword ptr [0x43fc10] */
  ST0 = ST0 * (F64((uint32_t)(0x43fc10u)));
/* 4368a4: fstp qword ptr [ebp + 0x68] */
  WF64((uint32_t)(ebp + 0x68u), ST0); FPOP();
L_4368a7: /* 4368a7: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 4368aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4368ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4368ac: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4368af: call 0x436708 */
  esp -= 4; W32(esp, 0x4368b4u); SPILL(); f_436708(); if (g_unwind) return; RELOAD();
/* 4368b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4368b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4368b9: je 0x4368c7 */
  if (zf) goto L_4368c7;
L_4368bb: /* 4368bb: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 4368be: fmul qword ptr [0x43fc10] */
  ST0 = ST0 * (F64((uint32_t)(0x43fc10u)));
/* 4368c4: fstp qword ptr [ebp + 0x60] */
  WF64((uint32_t)(ebp + 0x60u), ST0); FPOP();
L_4368c7: /* 4368c7: mov eax, dword ptr [ebp + 0x7c] */
  eax = R32((uint32_t)(ebp + 0x7cu));
/* 4368ca: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4368cd: ja 0x436905 */
  if ((!cf && !zf)) goto L_436905;
L_4368cf: /* 4368cf: jmp dword ptr [eax*4 + 0x437c51] */
  switch (R32((uint32_t)(eax*4 + 0x437c51u))) {
    case 0x4368d6u: goto L_4368d6;
    case 0x4368e1u: goto L_4368e1;
    case 0x4368ecu: goto L_4368ec;
    case 0x4368f7u: goto L_4368f7;
    case 0x436f38u: goto L_436f38;
    case 0x43700au: goto L_43700a;
    default: guest_badjump(0x4368cf, R32((uint32_t)(eax*4 + 0x437c51u))); return;
  }
L_4368d6: /* 4368d6: and ecx, 0xfffe003f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe003fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4368dc: or ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4368df: jmp 0x436903 */
  goto L_436903;
L_4368e1: /* 4368e1: and ecx, 0xfffe005f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe005fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4368e7: or ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4368ea: jmp 0x436903 */
  goto L_436903;
L_4368ec: /* 4368ec: and ecx, 0xfffe007f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe007fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4368f2: or ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4368f5: jmp 0x436903 */
  goto L_436903;
L_4368f7: /* 4368f7: and ecx, 0xfffe009f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe009fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4368fd: or ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_436903: /* 436903: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_436905: /* 436905: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 436908: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 43690b: mov edi, 0x100 */
  edi = 0x100u;
/* 436910: je 0x43692d */
  if (zf) goto L_43692d;
L_436912: /* 436912: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 436913: je 0x436929 */
  if (zf) goto L_436929;
L_436915: /* 436915: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 436916: je 0x436922 */
  if (zf) goto L_436922;
L_436918: /* 436918: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 436919: jne 0x436931 */
  if (!zf) goto L_436931;
L_43691b: /* 43691b: mov eax, 0x300 */
  eax = 0x300u;
/* 436920: jmp 0x436934 */
  goto L_436934;
L_436922: /* 436922: mov eax, 0x200 */
  eax = 0x200u;
/* 436927: jmp 0x436934 */
  goto L_436934;
L_436929: /* 436929: mov eax, edi */
  eax = edi;
/* 43692b: jmp 0x436934 */
  goto L_436934;
L_43692d: /* 43692d: xor eax, eax */
  eax = 0;
/* 43692f: jmp 0x436934 */
  goto L_436934;
L_436931: /* 436931: mov eax, dword ptr [ebp + 0x7c] */
  eax = R32((uint32_t)(ebp + 0x7cu));
L_436934: /* 436934: or eax, 0x9001f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9001fu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 436939: push 0xb031f */
  { uint32_t v = 0xb031fu; esp -= 4; W32(esp, v); }
/* 43693e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43693f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 436942: call 0x404d40 */
  esp -= 4; W32(esp, 0x436947u); SPILL(); f_404d40(); if (g_unwind) return; RELOAD();
/* 436947: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43694a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 43694c: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 43694f: and eax, 0xfff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 436954: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 436955: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436956: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436957: je 0x4369b6 */
  if (zf) goto L_4369b6;
L_436959: /* 436959: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 43695a: je 0x43699a */
  if (zf) goto L_43699a;
L_43695c: /* 43695c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 43695d: je 0x43697e */
  if (zf) goto L_43697e;
L_43695f: /* 43695f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 436960: jne 0x4369d0 */
  if (!zf) goto L_4369d0;
L_436962: /* 436962: fnclex  */
  FSW_CC = 0;
/* 436964: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 436967: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 43696a: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 43696c: fstp qword ptr [ebp + 4] */
  WF64((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* 43696f: fnclex  */
  FSW_CC = 0;
/* 436971: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 436974: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 436977: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 436979: fstp xword ptr [ebp - 0x20] */
  WF80((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 43697c: jmp 0x4369d0 */
  goto L_4369d0;
L_43697e: /* 43697e: fnclex  */
  FSW_CC = 0;
/* 436980: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 436983: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 436986: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 436988: fstp qword ptr [ebp + 4] */
  WF64((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* 43698b: fnclex  */
  FSW_CC = 0;
/* 43698d: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 436990: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 436993: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 436995: fstp xword ptr [ebp - 0x20] */
  WF80((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 436998: jmp 0x4369d0 */
  goto L_4369d0;
L_43699a: /* 43699a: fnclex  */
  FSW_CC = 0;
/* 43699c: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 43699f: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 4369a2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4369a4: fstp qword ptr [ebp + 4] */
  WF64((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* 4369a7: fnclex  */
  FSW_CC = 0;
/* 4369a9: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 4369ac: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 4369af: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4369b1: fstp xword ptr [ebp - 0x20] */
  WF80((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 4369b4: jmp 0x4369d0 */
  goto L_4369d0;
L_4369b6: /* 4369b6: fnclex  */
  FSW_CC = 0;
/* 4369b8: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 4369bb: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 4369be: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4369c0: fstp qword ptr [ebp + 4] */
  WF64((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* 4369c3: fnclex  */
  FSW_CC = 0;
/* 4369c5: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 4369c8: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 4369cb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4369cd: fstp xword ptr [ebp - 0x20] */
  WF80((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
L_4369d0: /* 4369d0: call 0x4151e3 */
  esp -= 4; W32(esp, 0x4369d5u); SPILL(); f_4151e3(); if (g_unwind) return; RELOAD();
/* 4369d5: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4369d7: mov dword ptr [ebp + 0x7c], eax */
  W32((uint32_t)(ebp + 0x7cu), eax);
/* 4369da: je 0x4369e4 */
  if (zf) goto L_4369e4;
L_4369dc: /* 4369dc: and eax, 0xfff7ffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfff7ffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4369e1: mov dword ptr [ebp + 0x7c], eax */
  W32((uint32_t)(ebp + 0x7cu), eax);
L_4369e4: /* 4369e4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4369e6: xor ebx, ebx */
  ebx = 0;
/* 4369e8: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4369e9: test bl, dl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4369eb: jne 0x436a10 */
  if (!zf) goto L_436a10;
L_4369ed: /* 4369ed: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4369ef: je 0x436a10 */
  if (zf) goto L_436a10;
L_4369f1: /* 4369f1: mov eax, esi */
  eax = esi;
/* 4369f3: call 0x436743 */
  esp -= 4; W32(esp, 0x4369f8u); SPILL(); f_436743(); if (g_unwind) return; RELOAD();
/* 4369f8: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4369fb: or dword ptr [eax + 0xc], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4369ff: or dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 436a02: mov esi, dword ptr [esi + 0x20] */
  esi = R32((uint32_t)(esi + 0x20u));
/* 436a05: or dword ptr [esi + 4], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
L_436a09: /* 436a09: mov eax, ebx */
  eax = ebx;
/* 436a0b: jmp 0x436e43 */
  goto L_436e43;
L_436a10: /* 436a10: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 436a13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436a14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436a15: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 436a18: call 0x4366e1 */
  esp -= 4; W32(esp, 0x436a1du); SPILL(); f_4366e1(); if (g_unwind) return; RELOAD();
/* 436a1d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 436a1f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436a20: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436a21: jne 0x436e56 */
  if (!zf) goto L_436e56;
L_436a27: /* 436a27: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 436a2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436a2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436a2c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 436a2f: call 0x4366e1 */
  esp -= 4; W32(esp, 0x436a34u); SPILL(); f_4366e1(); if (g_unwind) return; RELOAD();
/* 436a34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 436a36: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436a37: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436a38: jne 0x436e56 */
  if (!zf) goto L_436e56;
L_436a3e: /* 436a3e: test dl, 2 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 436a41: jne 0x436a56 */
  if (!zf) goto L_436a56;
L_436a43: /* 436a43: test byte ptr [ebp + 0x7e], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x7eu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 436a47: je 0x436a56 */
  if (zf) goto L_436a56;
L_436a49: /* 436a49: mov eax, esi */
  eax = esi;
/* 436a4b: call 0x436743 */
  esp -= 4; W32(esp, 0x436a50u); SPILL(); f_436743(); if (g_unwind) return; RELOAD();
/* 436a50: or dword ptr [esi + 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 436a54: jmp 0x436a09 */
  goto L_436a09;
L_436a56: /* 436a56: test dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 436a59: jne 0x436a7c */
  if (!zf) goto L_436a7c;
L_436a5b: /* 436a5b: test byte ptr [ebp + 0x7c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x7cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 436a5f: je 0x436a7c */
  if (zf) goto L_436a7c;
L_436a61: /* 436a61: mov eax, esi */
  eax = esi;
/* 436a63: call 0x436743 */
  esp -= 4; W32(esp, 0x436a68u); SPILL(); f_436743(); if (g_unwind) return; RELOAD();
/* 436a68: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436a6b: or dword ptr [eax + 0xc], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 436a6f: or dword ptr [esi + 4], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 436a73: mov esi, dword ptr [esi + 0x20] */
  esi = R32((uint32_t)(esi + 0x20u));
/* 436a76: or dword ptr [esi + 4], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 436a7a: jmp 0x436a09 */
  goto L_436a09;
L_436a7c: /* 436a7c: fld qword ptr [ebp + 4] */
  { double v = F64((uint32_t)(ebp + 0x4u)); FPUSH(v); }
/* 436a7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436a80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436a81: fst qword ptr [ebp + 0x58] */
  WF64((uint32_t)(ebp + 0x58u), ST0);
/* 436a84: fst qword ptr [esp] */
  WF64((uint32_t)(esp), ST0);
/* 436a87: call 0x4366e1 */
  esp -= 4; W32(esp, 0x436a8cu); SPILL(); f_4366e1(); if (g_unwind) return; RELOAD();
/* 436a8c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 436a8e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436a8f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436a90: je 0x436ab8 */
  if (zf) goto L_436ab8;
L_436a92: /* 436a92: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436a95: or dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 436a98: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436a9b: fstp qword ptr [eax + 0x50] */
  WF64((uint32_t)(eax + 0x50u), ST0); FPOP();
/* 436a9e: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436aa1: and dword ptr [eax + 0xc], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 436aa5: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436aa8: and dword ptr [eax + 0xc], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 436aac: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436aaf: and dword ptr [eax + 0xc], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 436ab3: jmp 0x4379ee */
  goto L_4379ee;
L_436ab8: /* 436ab8: test byte ptr [ebp + 0x7e], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x7eu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 436abc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 436abe: je 0x436ac4 */
  if (zf) goto L_436ac4;
L_436ac0: /* 436ac0: or dword ptr [esi + 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
L_436ac4: /* 436ac4: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 436ac6: lea eax, [ebp + 0x4c] */
  eax = (uint32_t)(ebp + 0x4cu);
/* 436ac9: push 0x44f064 */
  { uint32_t v = 0x44f064u; esp -= 4; W32(esp, v); }
/* 436ace: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 436acf: call 0x40126b */
  esp -= 4; W32(esp, 0x436ad4u); SPILL(); hle_memcpy(); RELOAD();
/* 436ad4: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 436ad6: lea eax, [ebp + 0x40] */
  eax = (uint32_t)(ebp + 0x40u);
/* 436ad9: push 0x44f070 */
  { uint32_t v = 0x44f070u; esp -= 4; W32(esp, v); }
/* 436ade: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 436adf: call 0x40126b */
  esp -= 4; W32(esp, 0x436ae4u); SPILL(); hle_memcpy(); RELOAD();
/* 436ae4: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 436ae6: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 436ae9: push 0x44f04c */
  { uint32_t v = 0x44f04cu; esp -= 4; W32(esp, v); }
/* 436aee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 436aef: call 0x40126b */
  esp -= 4; W32(esp, 0x436af4u); SPILL(); hle_memcpy(); RELOAD();
/* 436af4: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 436af6: lea eax, [ebp + 0x28] */
  eax = (uint32_t)(ebp + 0x28u);
/* 436af9: push 0x44f058 */
  { uint32_t v = 0x44f058u; esp -= 4; W32(esp, v); }
/* 436afe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 436aff: call 0x40126b */
  esp -= 4; W32(esp, 0x436b04u); SPILL(); hle_memcpy(); RELOAD();
/* 436b04: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 436b06: lea eax, [ebp + 0x34] */
  eax = (uint32_t)(ebp + 0x34u);
/* 436b09: push 0x44f07c */
  { uint32_t v = 0x44f07cu; esp -= 4; W32(esp, v); }
/* 436b0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 436b0f: call 0x40126b */
  esp -= 4; W32(esp, 0x436b14u); SPILL(); hle_memcpy(); RELOAD();
/* 436b14: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 436b16: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 436b19: push 0x44f088 */
  { uint32_t v = 0x44f088u; esp -= 4; W32(esp, v); }
/* 436b1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 436b1f: call 0x40126b */
  esp -= 4; W32(esp, 0x436b24u); SPILL(); hle_memcpy(); RELOAD();
/* 436b24: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 436b27: fld xword ptr [ebp - 0x20] */
  { double v = F80((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 436b2a: fld xword ptr [ebp + 0x4c] */
  { double v = F80((uint32_t)(ebp + 0x4cu)); FPUSH(v); }
/* 436b2d: fchs  */
  ST0 = -ST0;
/* 436b2f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 436b31: wait  */
/* 436b32: fnstsw word ptr [ebp - 0xc] */
  W16((uint32_t)(ebp + 0xfffffff4u), fpu_sw());
/* 436b35: fldz  */
  FPUSH(0.0);
/* 436b37: fld xword ptr [ebp - 0x20] */
  { double v = F80((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 436b3a: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 436b3c: wait  */
/* 436b3d: fnstsw word ptr [ebp - 0x10] */
  W16((uint32_t)(ebp + 0xfffffff0u), fpu_sw());
/* 436b40: fld xword ptr [ebp - 0x20] */
  { double v = F80((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 436b43: fldz  */
  FPUSH(0.0);
/* 436b45: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 436b47: wait  */
/* 436b48: fnstsw word ptr [ebp - 8] */
  W16((uint32_t)(ebp + 0xfffffff8u), fpu_sw());
/* 436b4b: fld xword ptr [ebp + 0x4c] */
  { double v = F80((uint32_t)(ebp + 0x4cu)); FPUSH(v); }
/* 436b4e: fld xword ptr [ebp - 0x20] */
  { double v = F80((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 436b51: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 436b53: wait  */
/* 436b54: fnstsw word ptr [ebp] */
  W16((uint32_t)(ebp), fpu_sw());
/* 436b57: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 436b5a: mov ecx, 0x4500 */
  ecx = 0x4500u;
/* 436b5f: and ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 436b62: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 436b65: jne 0x436b72 */
  if (!zf) goto L_436b72;
L_436b67: /* 436b67: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 436b6a: and ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 436b6d: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 436b70: je 0x436b88 */
  if (zf) goto L_436b88;
L_436b72: /* 436b72: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 436b75: and ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 436b78: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 436b7b: jne 0x436b8b */
  if (!zf) goto L_436b8b;
L_436b7d: /* 436b7d: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 436b80: and ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 436b83: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 436b86: jne 0x436b8b */
  if (!zf) goto L_436b8b;
L_436b88: /* 436b88: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
L_436b8b: /* 436b8b: fld xword ptr [ebp - 0x20] */
  { double v = F80((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 436b8e: fld xword ptr [ebp + 0x28] */
  { double v = F80((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 436b91: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 436b93: wait  */
/* 436b94: fnstsw word ptr [ebp - 0xc] */
  W16((uint32_t)(ebp + 0xfffffff4u), fpu_sw());
/* 436b97: fld xword ptr [ebp + 0x40] */
  { double v = F80((uint32_t)(ebp + 0x40u)); FPUSH(v); }
/* 436b9a: fchs  */
  ST0 = -ST0;
/* 436b9c: fld xword ptr [ebp - 0x20] */
  { double v = F80((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 436b9f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 436ba1: wait  */
/* 436ba2: fnstsw word ptr [ebp - 0x10] */
  W16((uint32_t)(ebp + 0xfffffff0u), fpu_sw());
/* 436ba5: fld xword ptr [ebp - 0x20] */
  { double v = F80((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 436ba8: fld xword ptr [ebp + 0x40] */
  { double v = F80((uint32_t)(ebp + 0x40u)); FPUSH(v); }
/* 436bab: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 436bad: wait  */
/* 436bae: fnstsw word ptr [ebp - 8] */
  W16((uint32_t)(ebp + 0xfffffff8u), fpu_sw());
/* 436bb1: fld xword ptr [ebp + 0x10] */
  { double v = F80((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 436bb4: fld xword ptr [ebp - 0x20] */
  { double v = F80((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 436bb7: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 436bb9: wait  */
/* 436bba: fnstsw word ptr [ebp] */
  W16((uint32_t)(ebp), fpu_sw());
/* 436bbd: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 436bc0: and ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 436bc3: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 436bc6: jne 0x436bd3 */
  if (!zf) goto L_436bd3;
L_436bc8: /* 436bc8: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 436bcb: and ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 436bce: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 436bd1: je 0x436be9 */
  if (zf) goto L_436be9;
L_436bd3: /* 436bd3: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 436bd6: and ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 436bd9: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 436bdc: jne 0x436bec */
  if (!zf) goto L_436bec;
L_436bde: /* 436bde: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 436be1: and ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 436be4: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 436be7: jne 0x436bec */
  if (!zf) goto L_436bec;
L_436be9: /* 436be9: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
L_436bec: /* 436bec: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 436bee: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 436bf0: jne 0x436c1e */
  if (!zf) goto L_436c1e;
L_436bf2: /* 436bf2: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 436bf6: je 0x436c1e */
  if (zf) goto L_436c1e;
L_436bf8: /* 436bf8: fld xword ptr [ebp - 0x20] */
  { double v = F80((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 436bfb: fld xword ptr [ebp + 0x34] */
  { double v = F80((uint32_t)(ebp + 0x34u)); FPUSH(v); }
/* 436bfe: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 436c00: fstp qword ptr [ebp + 4] */
  WF64((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* 436c03: mov eax, esi */
  eax = esi;
/* 436c05: call 0x436743 */
  esp -= 4; W32(esp, 0x436c0au); SPILL(); f_436743(); if (g_unwind) return; RELOAD();
/* 436c0a: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436c0d: or dword ptr [eax + 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 436c11: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436c14: or dword ptr [esi + 4], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 436c18: or dword ptr [eax + 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 436c1c: jmp 0x436c4c */
  goto L_436c4c;
L_436c1e: /* 436c1e: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 436c20: jne 0x436c73 */
  if (!zf) goto L_436c73;
L_436c22: /* 436c22: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 436c26: je 0x436c73 */
  if (zf) goto L_436c73;
L_436c28: /* 436c28: fld xword ptr [ebp - 0x20] */
  { double v = F80((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 436c2b: fld xword ptr [ebp + 0x1c] */
  { double v = F80((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 436c2e: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 436c30: fstp qword ptr [ebp + 4] */
  WF64((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* 436c33: mov eax, esi */
  eax = esi;
/* 436c35: call 0x436743 */
  esp -= 4; W32(esp, 0x436c3au); SPILL(); f_436743(); if (g_unwind) return; RELOAD();
/* 436c3a: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436c3d: or dword ptr [eax + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 436c41: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436c44: or dword ptr [esi + 4], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 436c48: or dword ptr [eax + 4], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
L_436c4c: /* 436c4c: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436c4f: fld qword ptr [ebp + 4] */
  { double v = F64((uint32_t)(ebp + 0x4u)); FPUSH(v); }
/* 436c52: or dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 436c55: test byte ptr [ebp + 0x7c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x7cu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 436c58: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436c5b: fstp qword ptr [eax + 0x50] */
  WF64((uint32_t)(eax + 0x50u), ST0); FPOP();
/* 436c5e: je 0x436a09 */
  if (zf) goto L_436a09;
L_436c64: /* 436c64: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436c67: or dword ptr [eax + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 436c6a: or dword ptr [esi + 4], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 436c6e: jmp 0x436a09 */
  goto L_436a09;
L_436c73: /* 436c73: push 0xb031f */
  { uint32_t v = 0xb031fu; esp -= 4; W32(esp, v); }
/* 436c78: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 436c7b: call 0x404d40 */
  esp -= 4; W32(esp, 0x436c80u); SPILL(); f_404d40(); if (g_unwind) return; RELOAD();
/* 436c80: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436c83: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 436c85: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 436c88: and eax, 0xfff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 436c8d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 436c8e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436c8f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436c90: je 0x436cc2 */
  if (zf) goto L_436cc2;
L_436c92: /* 436c92: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 436c93: je 0x436cb5 */
  if (zf) goto L_436cb5;
L_436c95: /* 436c95: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 436c96: je 0x436ca8 */
  if (zf) goto L_436ca8;
L_436c98: /* 436c98: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 436c99: jne 0x436ccd */
  if (!zf) goto L_436ccd;
L_436c9b: /* 436c9b: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 436c9e: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 436ca1: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 436ca3: fstp qword ptr [ebp + 0x58] */
  WF64((uint32_t)(ebp + 0x58u), ST0); FPOP();
/* 436ca6: jmp 0x436ccd */
  goto L_436ccd;
L_436ca8: /* 436ca8: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 436cab: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 436cae: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 436cb0: fstp qword ptr [ebp + 0x58] */
  WF64((uint32_t)(ebp + 0x58u), ST0); FPOP();
/* 436cb3: jmp 0x436ccd */
  goto L_436ccd;
L_436cb5: /* 436cb5: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 436cb8: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 436cbb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 436cbd: fstp qword ptr [ebp + 0x58] */
  WF64((uint32_t)(ebp + 0x58u), ST0); FPOP();
/* 436cc0: jmp 0x436ccd */
  goto L_436ccd;
L_436cc2: /* 436cc2: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 436cc5: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 436cc8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 436cca: fstp qword ptr [ebp + 0x58] */
  WF64((uint32_t)(ebp + 0x58u), ST0); FPOP();
L_436ccd: /* 436ccd: call 0x4151e3 */
  esp -= 4; W32(esp, 0x436cd2u); SPILL(); f_4151e3(); if (g_unwind) return; RELOAD();
/* 436cd2: mov ecx, eax */
  ecx = eax;
/* 436cd4: xor edi, edi */
  edi = 0;
/* 436cd6: test bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 436cd8: je 0x436ce2 */
  if (zf) goto L_436ce2;
L_436cda: /* 436cda: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 436cdd: je 0x436ce2 */
  if (zf) goto L_436ce2;
L_436cdf: /* 436cdf: or ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_436ce2: /* 436ce2: test byte ptr [esi], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 436ce5: jne 0x436d87 */
  if (!zf) goto L_436d87;
L_436ceb: /* 436ceb: test bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 436ced: jne 0x436d01 */
  if (!zf) goto L_436d01;
L_436cef: /* 436cef: cmp dword ptr [esi + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 436cf2: je 0x436d87 */
  if (zf) goto L_436d87;
L_436cf8: /* 436cf8: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 436cfb: je 0x436d87 */
  if (zf) goto L_436d87;
L_436d01: /* 436d01: mov eax, esi */
  eax = esi;
/* 436d03: call 0x436743 */
  esp -= 4; W32(esp, 0x436d08u); SPILL(); f_436743(); if (g_unwind) return; RELOAD();
/* 436d08: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436d0b: or dword ptr [eax + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 436d0e: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436d11: or dword ptr [esi + 4], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 436d15: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 436d18: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436d1b: or dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 436d1e: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 436d21: je 0x436d2e */
  if (zf) goto L_436d2e;
L_436d23: /* 436d23: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436d26: or dword ptr [eax + 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 436d2a: or dword ptr [esi + 4], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
L_436d2e: /* 436d2e: cmp dword ptr [ebp - 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 436d31: je 0x436d3e */
  if (zf) goto L_436d3e;
L_436d33: /* 436d33: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436d36: or dword ptr [eax + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 436d3a: or dword ptr [esi + 4], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
L_436d3e: /* 436d3e: cmp dword ptr [esi + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 436d41: je 0x436d79 */
  if (zf) goto L_436d79;
L_436d43: /* 436d43: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 436d46: je 0x436d79 */
  if (zf) goto L_436d79;
L_436d48: /* 436d48: fld qword ptr [ebp + 0x58] */
  { double v = F64((uint32_t)(ebp + 0x58u)); FPUSH(v); }
/* 436d4b: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 436d51: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 436d53: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 436d56: jne 0x436d60 */
  if (!zf) goto L_436d60;
L_436d58: /* 436d58: fld qword ptr [0x44f660] */
  { double v = F64((uint32_t)(0x44f660u)); FPUSH(v); }
/* 436d5e: jmp 0x436d76 */
  goto L_436d76;
L_436d60: /* 436d60: fld qword ptr [ebp + 0x58] */
  { double v = F64((uint32_t)(ebp + 0x58u)); FPUSH(v); }
/* 436d63: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 436d69: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 436d6b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 436d6e: jp 0x436d79 */
  if (pf) goto L_436d79;
L_436d70: /* 436d70: fld qword ptr [0x44f034] */
  { double v = F64((uint32_t)(0x44f034u)); FPUSH(v); }
L_436d76: /* 436d76: fstp qword ptr [ebp + 0x58] */
  WF64((uint32_t)(ebp + 0x58u), ST0); FPOP();
L_436d79: /* 436d79: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436d7c: fld qword ptr [ebp + 0x58] */
  { double v = F64((uint32_t)(ebp + 0x58u)); FPUSH(v); }
/* 436d7f: fstp qword ptr [eax + 0x50] */
  WF64((uint32_t)(eax + 0x50u), ST0); FPOP();
/* 436d82: jmp 0x436a09 */
  goto L_436a09;
L_436d87: /* 436d87: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436d8a: or dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 436d8d: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 436d90: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436d93: je 0x436d9f */
  if (zf) goto L_436d9f;
L_436d95: /* 436d95: or dword ptr [eax + 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 436d99: or dword ptr [esi + 4], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 436d9d: jmp 0x436da3 */
  goto L_436da3;
L_436d9f: /* 436d9f: and dword ptr [eax + 0xc], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
L_436da3: /* 436da3: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 436da6: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436da9: je 0x436db5 */
  if (zf) goto L_436db5;
L_436dab: /* 436dab: or dword ptr [eax + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 436daf: or dword ptr [esi + 4], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 436db3: jmp 0x436db9 */
  goto L_436db9;
L_436db5: /* 436db5: and dword ptr [eax + 0xc], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
L_436db9: /* 436db9: test bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 436dbb: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436dbe: je 0x436dc9 */
  if (zf) goto L_436dc9;
L_436dc0: /* 436dc0: or dword ptr [eax + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 436dc3: or dword ptr [esi + 4], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 436dc7: jmp 0x436dcd */
  goto L_436dcd;
L_436dc9: /* 436dc9: and dword ptr [eax + 0xc], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
L_436dcd: /* 436dcd: cmp dword ptr [esi + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 436dd0: je 0x436e1d */
  if (zf) goto L_436e1d;
L_436dd2: /* 436dd2: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 436dd5: je 0x436e1d */
  if (zf) goto L_436e1d;
L_436dd7: /* 436dd7: fld qword ptr [ebp + 0x58] */
  { double v = F64((uint32_t)(ebp + 0x58u)); FPUSH(v); }
/* 436dda: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 436de0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 436de2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 436de5: jne 0x436def */
  if (!zf) goto L_436def;
L_436de7: /* 436de7: fld qword ptr [0x44f660] */
  { double v = F64((uint32_t)(0x44f660u)); FPUSH(v); }
/* 436ded: jmp 0x436e05 */
  goto L_436e05;
L_436def: /* 436def: fld qword ptr [ebp + 0x58] */
  { double v = F64((uint32_t)(ebp + 0x58u)); FPUSH(v); }
/* 436df2: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 436df8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 436dfa: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 436dfd: jp 0x436e08 */
  if (pf) goto L_436e08;
L_436dff: /* 436dff: fld qword ptr [0x44f034] */
  { double v = F64((uint32_t)(0x44f034u)); FPUSH(v); }
L_436e05: /* 436e05: fstp qword ptr [ebp + 0x58] */
  WF64((uint32_t)(ebp + 0x58u), ST0); FPOP();
L_436e08: /* 436e08: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436e0b: or dword ptr [eax + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 436e0e: or dword ptr [esi + 4], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 436e12: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436e15: or dword ptr [eax + 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 436e19: or dword ptr [esi + 4], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
L_436e1d: /* 436e1d: test cl, 8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 436e20: fld qword ptr [ebp + 0x58] */
  { double v = F64((uint32_t)(ebp + 0x58u)); FPUSH(v); }
/* 436e23: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436e26: fstp qword ptr [eax + 0x50] */
  WF64((uint32_t)(eax + 0x50u), ST0); FPOP();
/* 436e29: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436e2c: je 0x437a82 */
  if (zf) goto L_437a82;
L_436e32: /* 436e32: or dword ptr [eax + 0xc], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 436e36: or dword ptr [esi + 4], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
L_436e3a: /* 436e3a: mov esi, dword ptr [esi + 0x20] */
  esi = R32((uint32_t)(esi + 0x20u));
/* 436e3d: and dword ptr [esi + 0xc], 0xffffffef */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0xcu), r);
  }
L_436e41: /* 436e41: xor eax, eax */
  eax = 0;
L_436e43: /* 436e43: mov ecx, dword ptr [ebp + 0x70] */
  ecx = R32((uint32_t)(ebp + 0x70u));
/* 436e46: xor ecx, dword ptr [ebp + 0x78] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x78u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 436e49: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 436e4a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 436e4b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 436e4c: call 0x4013ab */
  esp -= 4; W32(esp, 0x436e51u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 436e51: add ebp, 0x74 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 436e54: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 436e55: ret  */
  esp += 4; SPILL(); return;
L_436e56: /* 436e56: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436e59: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 436e5c: or dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 436e5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436e60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436e61: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 436e64: call 0x4366e1 */
  esp -= 4; W32(esp, 0x436e69u); SPILL(); f_4366e1(); if (g_unwind) return; RELOAD();
/* 436e69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 436e6b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436e6c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436e6d: je 0x436e8c */
  if (zf) goto L_436e8c;
L_436e6f: /* 436e6f: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 436e72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436e73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436e74: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 436e77: call 0x4366e1 */
  esp -= 4; W32(esp, 0x436e7cu); SPILL(); f_4366e1(); if (g_unwind) return; RELOAD();
/* 436e7c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 436e7e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436e7f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436e80: je 0x436e8c */
  if (zf) goto L_436e8c;
L_436e82: /* 436e82: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 436e85: fstp qword ptr [ebp + 4] */
  WF64((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* 436e88: or byte ptr [ebp + 0xa], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xau))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xau), r);
  }
L_436e8c: /* 436e8c: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436e8f: fld qword ptr [ebp + 4] */
  { double v = F64((uint32_t)(ebp + 0x4u)); FPUSH(v); }
/* 436e92: fstp qword ptr [eax + 0x50] */
  WF64((uint32_t)(eax + 0x50u), ST0); FPOP();
/* 436e95: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436e98: and dword ptr [eax + 0xc], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 436e9c: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436e9f: and dword ptr [eax + 0xc], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 436ea3: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436ea6: and dword ptr [eax + 0xc], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 436eaa: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 436ead: and dword ptr [eax + 0xc], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 436eb1: test byte ptr [ebp + 0x7c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x7cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
L_436eb5: /* 436eb5: je 0x436e3a */
  if (zf) goto L_436e3a;
L_436eb7: /* 436eb7: jmp 0x4379f5 */
  goto L_4379f5;
L_436ebc: /* 436ebc: cmp dword ptr [esi + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 436ec0: fld qword ptr [edx + 0x10] */
  { double v = F64((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 436ec3: fstp qword ptr [ebp + 0x68] */
  WF64((uint32_t)(ebp + 0x68u), ST0); FPOP();
/* 436ec6: fld qword ptr [edx + 0x30] */
  { double v = F64((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* 436ec9: fstp qword ptr [ebp + 0x60] */
  WF64((uint32_t)(ebp + 0x60u), ST0); FPOP();
/* 436ecc: je 0x436f0e */
  if (zf) goto L_436f0e;
L_436ece: /* 436ece: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 436ed1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436ed2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436ed3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 436ed6: call 0x436708 */
  esp -= 4; W32(esp, 0x436edbu); SPILL(); f_436708(); if (g_unwind) return; RELOAD();
/* 436edb: fld qword ptr [0x43fc10] */
  { double v = F64((uint32_t)(0x43fc10u)); FPUSH(v); }
/* 436ee1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 436ee4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 436ee6: je 0x436ef0 */
  if (zf) goto L_436ef0;
L_436ee8: /* 436ee8: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 436eeb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 436eed: fstp qword ptr [ebp + 0x68] */
  WF64((uint32_t)(ebp + 0x68u), ST0); FPOP();
L_436ef0: /* 436ef0: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 436ef3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436ef4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436ef5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 436ef8: call 0x436708 */
  esp -= 4; W32(esp, 0x436efdu); SPILL(); f_436708(); if (g_unwind) return; RELOAD();
/* 436efd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 436f00: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 436f02: je 0x436f0c */
  if (zf) goto L_436f0c;
L_436f04: /* 436f04: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 436f07: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 436f09: fstp qword ptr [ebp + 0x60] */
  WF64((uint32_t)(ebp + 0x60u), ST0); FPOP();
L_436f0c: /* 436f0c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_436f0e: /* 436f0e: mov edi, dword ptr [esi + 0x18] */
  edi = R32((uint32_t)(esi + 0x18u));
/* 436f11: and ecx, 0xfffe00ff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe00ffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 436f17: xor ebx, ebx */
  ebx = 0;
/* 436f19: and edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 436f1c: or ecx, 0xe0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 436f22: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 436f23: cmp edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 436f26: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 436f28: ja 0x436f74 */
  if ((!cf && !zf)) goto L_436f74;
L_436f2a: /* 436f2a: movzx eax, byte ptr [edi + 0x437c79] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x437c79u)));
/* 436f31: jmp dword ptr [eax*4 + 0x437c71] */
  switch (R32((uint32_t)(eax*4 + 0x437c71u))) {
    case 0x436f38u: goto L_436f38;
    case 0x43700au: goto L_43700a;
    default: guest_badjump(0x436f31, R32((uint32_t)(eax*4 + 0x437c71u))); return;
  }
L_436f38: /* 436f38: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 436f3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436f3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436f3d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 436f40: call 0x4366b9 */
  esp -= 4; W32(esp, 0x436f45u); SPILL(); f_4366b9(); if (g_unwind) return; RELOAD();
/* 436f45: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 436f48: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 436f4a: jne 0x436f65 */
  if (!zf) goto L_436f65;
L_436f4c: /* 436f4c: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 436f4f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436f50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436f51: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 436f54: call 0x4366b9 */
  esp -= 4; W32(esp, 0x436f59u); SPILL(); f_4366b9(); if (g_unwind) return; RELOAD();
/* 436f59: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 436f5c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 436f5e: jne 0x436f65 */
  if (!zf) goto L_436f65;
L_436f60: /* 436f60: and dword ptr [ebp + 0x7c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x7cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x7cu), r);
  }
/* 436f63: jmp 0x436f68 */
  goto L_436f68;
L_436f65: /* 436f65: mov dword ptr [ebp + 0x7c], ebx */
  W32((uint32_t)(ebp + 0x7cu), ebx);
L_436f68: /* 436f68: call 0x4151e3 */
  esp -= 4; W32(esp, 0x436f6du); SPILL(); f_4151e3(); if (g_unwind) return; RELOAD();
/* 436f6d: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 436f6f: je 0x436f74 */
  if (zf) goto L_436f74;
L_436f71: /* 436f71: mov dword ptr [ebp + 0x7c], ebx */
  W32((uint32_t)(ebp + 0x7cu), ebx);
L_436f74: /* 436f74: xor edx, edx */
  edx = 0;
/* 436f76: cmp dword ptr [ebp + 0x7c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x7cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 436f79: je 0x436f83 */
  if (zf) goto L_436f83;
L_436f7b: /* 436f7b: test byte ptr [esi], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 436f7d: je 0x4369f1 */
  if (zf) goto L_4369f1;
L_436f83: /* 436f83: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 436f86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436f87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436f88: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 436f8b: call 0x4366e1 */
  esp -= 4; W32(esp, 0x436f90u); SPILL(); f_4366e1(); if (g_unwind) return; RELOAD();
/* 436f90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 436f92: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436f93: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436f94: jne 0x43709d */
  if (!zf) goto L_43709d;
L_436f9a: /* 436f9a: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 436f9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436f9e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436f9f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 436fa2: call 0x4366e1 */
  esp -= 4; W32(esp, 0x436fa7u); SPILL(); f_4366e1(); if (g_unwind) return; RELOAD();
/* 436fa7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 436fa9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436faa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 436fab: jne 0x43709d */
  if (!zf) goto L_43709d;
L_436fb1: /* 436fb1: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 436fb4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436fb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436fb6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 436fb9: call 0x436708 */
  esp -= 4; W32(esp, 0x436fbeu); SPILL(); f_436708(); if (g_unwind) return; RELOAD();
/* 436fbe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 436fc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 436fc3: jne 0x436fd9 */
  if (!zf) goto L_436fd9;
L_436fc5: /* 436fc5: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 436fc8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436fc9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 436fca: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 436fcd: call 0x436708 */
  esp -= 4; W32(esp, 0x436fd2u); SPILL(); f_436708(); if (g_unwind) return; RELOAD();
/* 436fd2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 436fd5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 436fd7: je 0x436fe6 */
  if (zf) goto L_436fe6;
L_436fd9: /* 436fd9: or dword ptr [esi + 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 436fdd: test byte ptr [esi], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 436fe0: je 0x437b84 */
  if (zf) goto L_437b84;
L_436fe6: /* 436fe6: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 436fe9: fcomp qword ptr [ebp + 0x60] */
  fpu_com(ST0, F64((uint32_t)(ebp + 0x60u)));
  FPOP();
/* 436fec: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 436fee: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 436ff1: jp 0x437042 */
  if (pf) goto L_437042;
L_436ff3: /* 436ff3: cmp edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 436ff6: ja 0x437089 */
  if ((!cf && !zf)) goto L_437089;
L_436ffc: /* 436ffc: movzx eax, byte ptr [edi + 0x437c89] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x437c89u)));
/* 437003: jmp dword ptr [eax*4 + 0x437c81] */
  switch (R32((uint32_t)(eax*4 + 0x437c81u))) {
    case 0x437059u: goto L_437059;
    case 0x437083u: goto L_437083;
    default: guest_badjump(0x437003, R32((uint32_t)(eax*4 + 0x437c81u))); return;
  }
L_43700a: /* 43700a: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 43700d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43700e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43700f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 437012: call 0x4366e1 */
  esp -= 4; W32(esp, 0x437017u); SPILL(); f_4366e1(); if (g_unwind) return; RELOAD();
/* 437017: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437019: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43701a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43701b: jne 0x436f71 */
  if (!zf) goto L_436f71;
L_437021: /* 437021: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 437024: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437025: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437026: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 437029: call 0x4366e1 */
  esp -= 4; W32(esp, 0x43702eu); SPILL(); f_4366e1(); if (g_unwind) return; RELOAD();
/* 43702e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437030: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 437031: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 437032: jne 0x436f71 */
  if (!zf) goto L_436f71;
L_437038: /* 437038: and dword ptr [ebp + 0x7c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x7cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x7cu), r);
  }
/* 43703b: xor edx, edx */
  edx = 0;
/* 43703d: jmp 0x436f83 */
  goto L_436f83;
L_437042: /* 437042: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 437045: fcomp qword ptr [ebp + 0x60] */
  fpu_com(ST0, F64((uint32_t)(ebp + 0x60u)));
  FPOP();
/* 437048: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 43704a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43704d: jne 0x437063 */
  if (!zf) goto L_437063;
L_43704f: /* 43704f: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 437052: jbe 0x437083 */
  if ((cf | zf)) goto L_437083;
L_437054: /* 437054: cmp edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 437057: ja 0x437089 */
  if ((!cf && !zf)) goto L_437089;
L_437059: /* 437059: or dword ptr [ebp + 0x58], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x58u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0x58u), r);
  }
/* 43705d: or dword ptr [ebp + 0x5c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x5cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0x5cu), r);
  }
/* 437061: jmp 0x437089 */
  goto L_437089;
L_437063: /* 437063: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 437066: fcomp qword ptr [ebp + 0x60] */
  fpu_com(ST0, F64((uint32_t)(ebp + 0x60u)));
  FPOP();
/* 437069: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 43706b: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 43706e: jp 0x437089 */
  if (pf) goto L_437089;
L_437070: /* 437070: cmp edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 437073: ja 0x437089 */
  if ((!cf && !zf)) goto L_437089;
L_437075: /* 437075: movzx eax, byte ptr [edi + 0x437c99] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x437c99u)));
/* 43707c: jmp dword ptr [eax*4 + 0x437c91] */
  switch (R32((uint32_t)(eax*4 + 0x437c91u))) {
    case 0x437059u: goto L_437059;
    case 0x437083u: goto L_437083;
    default: guest_badjump(0x43707c, R32((uint32_t)(eax*4 + 0x437c91u))); return;
  }
L_437083: /* 437083: mov dword ptr [ebp + 0x58], edx */
  W32((uint32_t)(ebp + 0x58u), edx);
/* 437086: mov dword ptr [ebp + 0x5c], edx */
  W32((uint32_t)(ebp + 0x5cu), edx);
L_437089: /* 437089: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43708c: fld qword ptr [ebp + 0x58] */
  { double v = F64((uint32_t)(ebp + 0x58u)); FPUSH(v); }
/* 43708f: or dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 437092: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437095: fstp qword ptr [eax + 0x50] */
  WF64((uint32_t)(eax + 0x50u), ST0); FPOP();
/* 437098: jmp 0x437a6a */
  goto L_437a6a;
L_43709d: /* 43709d: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4370a0: jbe 0x4370ac */
  if ((cf | zf)) goto L_4370ac;
L_4370a2: /* 4370a2: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4370a5: jbe 0x4370e5 */
  if ((cf | zf)) goto L_4370e5;
L_4370a7: /* 4370a7: cmp edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4370aa: jne 0x4370b2 */
  if (!zf) goto L_4370b2;
L_4370ac: /* 4370ac: mov dword ptr [ebp + 0x58], edx */
  W32((uint32_t)(ebp + 0x58u), edx);
/* 4370af: mov dword ptr [ebp + 0x5c], edx */
  W32((uint32_t)(ebp + 0x5cu), edx);
L_4370b2: /* 4370b2: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4370b5: fld qword ptr [ebp + 0x58] */
  { double v = F64((uint32_t)(ebp + 0x58u)); FPUSH(v); }
/* 4370b8: or dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 4370bb: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4370be: fstp qword ptr [eax + 0x50] */
  WF64((uint32_t)(eax + 0x50u), ST0); FPOP();
/* 4370c1: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4370c4: and dword ptr [eax + 0xc], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4370c8: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4370cb: and dword ptr [eax + 0xc], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4370cf: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4370d2: and dword ptr [eax + 0xc], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4370d6: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4370d9: and dword ptr [eax + 0xc], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4370dd: cmp dword ptr [ebp + 0x7c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x7cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4370e0: jmp 0x436eb5 */
  goto L_436eb5;
L_4370e5: /* 4370e5: or dword ptr [ebp + 0x58], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x58u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0x58u), r);
  }
/* 4370e9: or dword ptr [ebp + 0x5c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x5cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0x5cu), r);
  }
/* 4370ed: jmp 0x4370b2 */
  goto L_4370b2;
L_4370ef: /* 4370ef: fld qword ptr [edx + 0x10] */
  { double v = F64((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 4370f2: xor edi, edi */
  edi = 0;
/* 4370f4: cmp dword ptr [esi + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4370f7: fstp qword ptr [ebp + 0x68] */
  WF64((uint32_t)(ebp + 0x68u), ST0); FPOP();
/* 4370fa: fld qword ptr [edx + 0x30] */
  { double v = F64((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* 4370fd: fstp qword ptr [ebp + 0x60] */
  WF64((uint32_t)(ebp + 0x60u), ST0); FPOP();
/* 437100: je 0x437142 */
  if (zf) goto L_437142;
L_437102: /* 437102: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 437105: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437106: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437107: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 43710a: call 0x436708 */
  esp -= 4; W32(esp, 0x43710fu); SPILL(); f_436708(); if (g_unwind) return; RELOAD();
/* 43710f: fld qword ptr [0x43fc10] */
  { double v = F64((uint32_t)(0x43fc10u)); FPUSH(v); }
/* 437115: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 437118: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43711a: je 0x437124 */
  if (zf) goto L_437124;
L_43711c: /* 43711c: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 43711f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 437121: fstp qword ptr [ebp + 0x68] */
  WF64((uint32_t)(ebp + 0x68u), ST0); FPOP();
L_437124: /* 437124: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 437127: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437128: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437129: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 43712c: call 0x436708 */
  esp -= 4; W32(esp, 0x437131u); SPILL(); f_436708(); if (g_unwind) return; RELOAD();
/* 437131: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 437134: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437136: je 0x437140 */
  if (zf) goto L_437140;
L_437138: /* 437138: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 43713b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 43713d: fstp qword ptr [ebp + 0x60] */
  WF64((uint32_t)(ebp + 0x60u), ST0); FPOP();
L_437140: /* 437140: fstp st(0) */
  STI(0) = ST0; FPOP();
L_437142: /* 437142: mov eax, ebx */
  eax = ebx;
/* 437144: sub eax, 0x53 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x53u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 437147: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 437149: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 43714a: je 0x437182 */
  if (zf) goto L_437182;
L_43714c: /* 43714c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 43714d: jne 0x4371ac */
  if (!zf) goto L_4371ac;
L_43714f: /* 43714f: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 437152: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437153: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437154: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 437157: call 0x4366b9 */
  esp -= 4; W32(esp, 0x43715cu); SPILL(); f_4366b9(); if (g_unwind) return; RELOAD();
/* 43715c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 43715f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437161: jne 0x437177 */
  if (!zf) goto L_437177;
L_437163: /* 437163: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 437166: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437167: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437168: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 43716b: call 0x4366b9 */
  esp -= 4; W32(esp, 0x437170u); SPILL(); f_4366b9(); if (g_unwind) return; RELOAD();
/* 437170: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 437173: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437175: je 0x437179 */
  if (zf) goto L_437179;
L_437177: /* 437177: mov edi, ebx */
  edi = ebx;
L_437179: /* 437179: call 0x4151e3 */
  esp -= 4; W32(esp, 0x43717eu); SPILL(); f_4151e3(); if (g_unwind) return; RELOAD();
/* 43717e: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437180: jmp 0x4371a6 */
  goto L_4371a6;
L_437182: /* 437182: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 437185: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437186: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437187: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 43718a: call 0x4366e1 */
  esp -= 4; W32(esp, 0x43718fu); SPILL(); f_4366e1(); if (g_unwind) return; RELOAD();
/* 43718f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437191: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 437192: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 437193: jne 0x4371a8 */
  if (!zf) goto L_4371a8;
L_437195: /* 437195: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 437198: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437199: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43719a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 43719d: call 0x4366e1 */
  esp -= 4; W32(esp, 0x4371a2u); SPILL(); f_4366e1(); if (g_unwind) return; RELOAD();
/* 4371a2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4371a3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4371a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_4371a6: /* 4371a6: je 0x4371af */
  if (zf) goto L_4371af;
L_4371a8: /* 4371a8: mov edi, ebx */
  edi = ebx;
/* 4371aa: jmp 0x4371af */
  goto L_4371af;
L_4371ac: /* 4371ac: mov edi, dword ptr [ebp + 0x7c] */
  edi = R32((uint32_t)(ebp + 0x7cu));
L_4371af: /* 4371af: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4371b2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4371b4: and ecx, 0xfffe00ff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe00ffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4371ba: or ecx, 0xe0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4371c0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4371c2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4371c4: je 0x4371ce */
  if (zf) goto L_4371ce;
L_4371c6: /* 4371c6: test byte ptr [esi], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4371c8: je 0x4369f1 */
  if (zf) goto L_4369f1;
L_4371ce: /* 4371ce: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 4371d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4371d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4371d3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4371d6: call 0x4366e1 */
  esp -= 4; W32(esp, 0x4371dbu); SPILL(); f_4366e1(); if (g_unwind) return; RELOAD();
/* 4371db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4371dd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4371de: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4371df: jne 0x437286 */
  if (!zf) goto L_437286;
L_4371e5: /* 4371e5: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 4371e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4371e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4371ea: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4371ed: call 0x4366e1 */
  esp -= 4; W32(esp, 0x4371f2u); SPILL(); f_4366e1(); if (g_unwind) return; RELOAD();
/* 4371f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4371f4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4371f5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4371f6: jne 0x437286 */
  if (!zf) goto L_437286;
L_4371fc: /* 4371fc: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 4371ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437200: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437201: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 437204: call 0x436708 */
  esp -= 4; W32(esp, 0x437209u); SPILL(); f_436708(); if (g_unwind) return; RELOAD();
/* 437209: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 43720c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43720e: jne 0x437224 */
  if (!zf) goto L_437224;
L_437210: /* 437210: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 437213: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437214: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437215: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 437218: call 0x436708 */
  esp -= 4; W32(esp, 0x43721du); SPILL(); f_436708(); if (g_unwind) return; RELOAD();
/* 43721d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 437220: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437222: je 0x437231 */
  if (zf) goto L_437231;
L_437224: /* 437224: or dword ptr [esi + 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 437228: test byte ptr [esi], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43722b: je 0x437b84 */
  if (zf) goto L_437b84;
L_437231: /* 437231: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 437234: fcomp qword ptr [ebp + 0x60] */
  fpu_com(ST0, F64((uint32_t)(ebp + 0x60u)));
  FPOP();
/* 437237: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 437239: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43723c: jne 0x437249 */
  if (!zf) goto L_437249;
L_43723e: /* 43723e: and word ptr [esi + 0x1c], 0xf72a */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x1cu))); uint16_t b = (uint16_t)(0xf72au);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(esi + 0x1cu), r);
  }
/* 437244: jmp 0x437a6a */
  goto L_437a6a;
L_437249: /* 437249: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 43724c: fcomp qword ptr [ebp + 0x60] */
  fpu_com(ST0, F64((uint32_t)(ebp + 0x60u)));
  FPOP();
/* 43724f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 437251: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 437254: jp 0x437262 */
  if (pf) goto L_437262;
L_437256: /* 437256: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 437259: and eax, 0xfffff72b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffff72bu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 43725e: or eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 437260: jmp 0x43727e */
  goto L_43727e;
L_437262: /* 437262: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 437265: fcomp qword ptr [ebp + 0x60] */
  fpu_com(ST0, F64((uint32_t)(ebp + 0x60u)));
  FPOP();
/* 437268: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 43726a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 43726d: jp 0x437a6a */
  if (pf) goto L_437a6a;
L_437273: /* 437273: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 437276: and eax, 0xfffff76a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffff76au);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 43727b: or eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_43727e: /* 43727e: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 437281: jmp 0x437a6a */
  goto L_437a6a;
L_437286: /* 437286: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 437289: and eax, 0xfffff76f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffff76fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 43728e: or eax, 0x45 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x45u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 437291: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 437294: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437297: and dword ptr [eax + 0xc], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 43729b: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43729e: and dword ptr [eax + 0xc], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4372a2: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4372a5: and dword ptr [eax + 0xc], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4372a9: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4372ac: and dword ptr [eax + 0xc], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4372b0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4372b2: jmp 0x436eb5 */
  goto L_436eb5;
L_4372b7: /* 4372b7: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 4372ba: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 4372bd: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 4372c0: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 4372c3: mov edi, 0x100 */
  edi = 0x100u;
/* 4372c8: je 0x4372e5 */
  if (zf) goto L_4372e5;
L_4372ca: /* 4372ca: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4372cb: je 0x4372e1 */
  if (zf) goto L_4372e1;
L_4372cd: /* 4372cd: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4372ce: je 0x4372da */
  if (zf) goto L_4372da;
L_4372d0: /* 4372d0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4372d1: jne 0x4372e9 */
  if (!zf) goto L_4372e9;
L_4372d3: /* 4372d3: mov eax, 0x300 */
  eax = 0x300u;
/* 4372d8: jmp 0x4372ec */
  goto L_4372ec;
L_4372da: /* 4372da: mov eax, 0x200 */
  eax = 0x200u;
/* 4372df: jmp 0x4372ec */
  goto L_4372ec;
L_4372e1: /* 4372e1: mov eax, edi */
  eax = edi;
/* 4372e3: jmp 0x4372ec */
  goto L_4372ec;
L_4372e5: /* 4372e5: xor eax, eax */
  eax = 0;
/* 4372e7: jmp 0x4372ec */
  goto L_4372ec;
L_4372e9: /* 4372e9: mov eax, dword ptr [ebp + 0x7c] */
  eax = R32((uint32_t)(ebp + 0x7cu));
L_4372ec: /* 4372ec: or eax, 0xa001f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa001fu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4372f1: push 0xb031f */
  { uint32_t v = 0xb031fu; esp -= 4; W32(esp, v); }
/* 4372f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4372f7: call 0x404d40 */
  esp -= 4; W32(esp, 0x4372fcu); SPILL(); f_404d40(); if (g_unwind) return; RELOAD();
/* 4372fc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4372fd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4372fe: fnclex  */
  FSW_CC = 0;
/* 437300: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 437303: fstp dword ptr [ebp + 0x7c] */
  WF32((uint32_t)(ebp + 0x7cu), ST0); FPOP();
/* 437306: call 0x4151e3 */
  esp -= 4; W32(esp, 0x43730bu); SPILL(); f_4151e3(); if (g_unwind) return; RELOAD();
/* 43730b: xor ebx, ebx */
  ebx = 0;
/* 43730d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 43730e: test byte ptr [esi], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437311: jne 0x437348 */
  if (!zf) goto L_437348;
L_437313: /* 437313: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437315: je 0x437348 */
  if (zf) goto L_437348;
L_437317: /* 437317: mov eax, esi */
  eax = esi;
/* 437319: call 0x436743 */
  esp -= 4; W32(esp, 0x43731eu); SPILL(); f_436743(); if (g_unwind) return; RELOAD();
/* 43731e: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437321: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 437323: and ecx, 0xfffe011f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe011fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 437329: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 43732b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 43732d: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437330: or dword ptr [eax + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 437333: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437336: or dword ptr [esi + 4], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 43733a: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 43733d: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437340: or dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 437343: jmp 0x43783d */
  goto L_43783d;
L_437348: /* 437348: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 43734b: fld dword ptr [ebp + 0x7c] */
  { double v = F32((uint32_t)(ebp + 0x7cu)); FPUSH(v); }
/* 43734e: or dword ptr [ecx + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0x60u), r);
  }
/* 437351: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 437354: fstp dword ptr [ecx + 0x50] */
  WF32((uint32_t)(ecx + 0x50u), ST0); FPOP();
/* 437357: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437359: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43735c: je 0x437a6d */
  if (zf) goto L_437a6d;
L_437362: /* 437362: or dword ptr [eax + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 437365: or dword ptr [esi + 4], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 437369: jmp 0x437a71 */
  goto L_437a71;
L_43736e: /* 43736e: cmp dword ptr [esi + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 437372: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 437375: fstp dword ptr [ebp + 0x7c] */
  WF32((uint32_t)(ebp + 0x7cu), ST0); FPOP();
/* 437378: je 0x437399 */
  if (zf) goto L_437399;
L_43737a: /* 43737a: fld dword ptr [ebp + 0x7c] */
  { double v = F32((uint32_t)(ebp + 0x7cu)); FPUSH(v); }
/* 43737d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43737e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 437381: call 0x436729 */
  esp -= 4; W32(esp, 0x437386u); SPILL(); f_436729(); if (g_unwind) return; RELOAD();
/* 437386: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 437389: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43738b: je 0x437399 */
  if (zf) goto L_437399;
L_43738d: /* 43738d: fld dword ptr [ebp + 0x7c] */
  { double v = F32((uint32_t)(ebp + 0x7cu)); FPUSH(v); }
/* 437390: fmul dword ptr [0x43e0f4] */
  ST0 = ST0 * (F32((uint32_t)(0x43e0f4u)));
/* 437396: fstp dword ptr [ebp + 0x7c] */
  WF32((uint32_t)(ebp + 0x7cu), ST0); FPOP();
L_437399: /* 437399: sub ebx, 0x5e */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x5eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ebx = r;
  }
/* 43739c: mov edi, 0x100 */
  edi = 0x100u;
/* 4373a1: je 0x4373b0 */
  if (zf) goto L_4373b0;
L_4373a3: /* 4373a3: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 4373a4: jne 0x4373be */
  if (!zf) goto L_4373be;
L_4373a6: /* 4373a6: and ecx, 0xfffe011f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe011fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4373ac: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4373ae: jmp 0x4373bc */
  goto L_4373bc;
L_4373b0: /* 4373b0: and ecx, 0xfffe055f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe055fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4373b6: or ecx, 0x540 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x540u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_4373bc: /* 4373bc: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_4373be: /* 4373be: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4373c1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4373c3: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4373c6: and eax, 0xfff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4373cb: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4373ce: je 0x4373dc */
  if (zf) goto L_4373dc;
L_4373d0: /* 4373d0: cmp eax, 0x2a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_4373d3: /* 4373d3: jne 0x4373f8 */
  if (!zf) goto L_4373f8;
L_4373d5: /* 4373d5: mov edi, 0x300 */
  edi = 0x300u;
/* 4373da: jmp 0x4373fb */
  goto L_4373fb;
L_4373dc: /* 4373dc: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 4373df: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 4373e2: je 0x4373f4 */
  if (zf) goto L_4373f4;
L_4373e4: /* 4373e4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4373e5: je 0x4373fb */
  if (zf) goto L_4373fb;
L_4373e7: /* 4373e7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4373e8: je 0x4373ed */
  if (zf) goto L_4373ed;
L_4373ea: /* 4373ea: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4373eb: jmp 0x4373d3 */
  goto L_4373d3;
L_4373ed: /* 4373ed: mov edi, 0x200 */
  edi = 0x200u;
/* 4373f2: jmp 0x4373fb */
  goto L_4373fb;
L_4373f4: /* 4373f4: xor edi, edi */
  edi = 0;
/* 4373f6: jmp 0x4373fb */
  goto L_4373fb;
L_4373f8: /* 4373f8: mov edi, dword ptr [ebp + 0x7c] */
  edi = R32((uint32_t)(ebp + 0x7cu));
L_4373fb: /* 4373fb: or edi, 0xa001f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xa001fu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 437401: push 0xb031f */
  { uint32_t v = 0xb031fu; esp -= 4; W32(esp, v); }
/* 437406: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 437407: call 0x404d40 */
  esp -= 4; W32(esp, 0x43740cu); SPILL(); f_404d40(); if (g_unwind) return; RELOAD();
/* 43740c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43740d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43740e: fnclex  */
  FSW_CC = 0;
/* 437410: fld dword ptr [ebp + 0x7c] */
  { double v = F32((uint32_t)(ebp + 0x7cu)); FPUSH(v); }
/* 437413: fistp dword ptr [ebp] */
  W32((uint32_t)(ebp), (uint32_t)fpu_toint32(ST0)); FPOP();
L_437416: /* 437416: call 0x4151e3 */
  esp -= 4; W32(esp, 0x43741bu); SPILL(); f_4151e3(); if (g_unwind) return; RELOAD();
/* 43741b: xor ebx, ebx */
  ebx = 0;
/* 43741d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 43741e: test byte ptr [esi], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437420: jne 0x43742a */
  if (!zf) goto L_43742a;
L_437422: /* 437422: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437424: jne 0x4369f1 */
  if (!zf) goto L_4369f1;
L_43742a: /* 43742a: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 43742d: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 437430: mov dword ptr [ecx + 0x50], edx */
  W32((uint32_t)(ecx + 0x50u), edx);
/* 437433: test byte ptr [esi], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437436: jne 0x437440 */
  if (!zf) goto L_437440;
L_437438: /* 437438: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43743a: jne 0x437ba2 */
  if (!zf) goto L_437ba2;
L_437440: /* 437440: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 437443: or dword ptr [ecx + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0x60u), r);
  }
/* 437446: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437448: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 43744b: je 0x4375da */
  if (zf) goto L_4375da;
L_437451: /* 437451: or dword ptr [ecx + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 437454: or dword ptr [esi + 4], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 437458: jmp 0x4375de */
  goto L_4375de;
L_43745d: /* 43745d: cmp dword ptr [esi + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 437461: fld qword ptr [edx + 0x10] */
  { double v = F64((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 437464: fstp qword ptr [ebp + 0x68] */
  WF64((uint32_t)(ebp + 0x68u), ST0); FPOP();
/* 437467: je 0x437489 */
  if (zf) goto L_437489;
L_437469: /* 437469: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 43746c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43746d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43746e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 437471: call 0x436708 */
  esp -= 4; W32(esp, 0x437476u); SPILL(); f_436708(); if (g_unwind) return; RELOAD();
/* 437476: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 437479: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43747b: je 0x437489 */
  if (zf) goto L_437489;
L_43747d: /* 43747d: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 437480: fmul qword ptr [0x43fc10] */
  ST0 = ST0 * (F64((uint32_t)(0x43fc10u)));
/* 437486: fstp qword ptr [ebp + 0x68] */
  WF64((uint32_t)(ebp + 0x68u), ST0); FPOP();
L_437489: /* 437489: cmp ebx, 0x55 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x55u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 43748c: mov edi, 0x100 */
  edi = 0x100u;
/* 437491: jb 0x4374b1 */
  if (cf) goto L_4374b1;
L_437493: /* 437493: cmp ebx, 0x56 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x56u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 437496: jbe 0x4374a7 */
  if ((cf | zf)) goto L_4374a7;
L_437498: /* 437498: cmp ebx, 0x58 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 43749b: jbe 0x4374cf */
  if ((cf | zf)) goto L_4374cf;
L_43749d: /* 43749d: cmp ebx, 0x60 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4374a0: je 0x4374cf */
  if (zf) goto L_4374cf;
L_4374a2: /* 4374a2: cmp ebx, 0x61 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x61u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4374a5: jne 0x4374b1 */
  if (!zf) goto L_4374b1;
L_4374a7: /* 4374a7: and ecx, 0xfffe011f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe011fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4374ad: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_4374af: /* 4374af: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_4374b1: /* 4374b1: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4374b4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4374b6: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4374b9: and eax, 0xfff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4374be: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4374c1: je 0x4374dd */
  if (zf) goto L_4374dd;
L_4374c3: /* 4374c3: cmp eax, 0x2a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_4374c6: /* 4374c6: jne 0x4374f9 */
  if (!zf) goto L_4374f9;
L_4374c8: /* 4374c8: mov edi, 0x300 */
  edi = 0x300u;
/* 4374cd: jmp 0x4374fc */
  goto L_4374fc;
L_4374cf: /* 4374cf: and ecx, 0xfffe055f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe055fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4374d5: or ecx, 0x540 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x540u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4374db: jmp 0x4374af */
  goto L_4374af;
L_4374dd: /* 4374dd: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 4374e0: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 4374e3: je 0x4374f5 */
  if (zf) goto L_4374f5;
L_4374e5: /* 4374e5: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4374e6: je 0x4374fc */
  if (zf) goto L_4374fc;
L_4374e8: /* 4374e8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4374e9: je 0x4374ee */
  if (zf) goto L_4374ee;
L_4374eb: /* 4374eb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4374ec: jmp 0x4374c6 */
  goto L_4374c6;
L_4374ee: /* 4374ee: mov edi, 0x200 */
  edi = 0x200u;
/* 4374f3: jmp 0x4374fc */
  goto L_4374fc;
L_4374f5: /* 4374f5: xor edi, edi */
  edi = 0;
/* 4374f7: jmp 0x4374fc */
  goto L_4374fc;
L_4374f9: /* 4374f9: mov edi, dword ptr [ebp + 0x7c] */
  edi = R32((uint32_t)(ebp + 0x7cu));
L_4374fc: /* 4374fc: or edi, 0x9001f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x9001fu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 437502: push 0xb031f */
  { uint32_t v = 0xb031fu; esp -= 4; W32(esp, v); }
/* 437507: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 437508: call 0x404d40 */
  esp -= 4; W32(esp, 0x43750du); SPILL(); f_404d40(); if (g_unwind) return; RELOAD();
/* 43750d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43750e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43750f: fnclex  */
  FSW_CC = 0;
/* 437511: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 437514: fistp dword ptr [ebp] */
  W32((uint32_t)(ebp), (uint32_t)fpu_toint32(ST0)); FPOP();
/* 437517: jmp 0x437416 */
  goto L_437416;
L_43751c: /* 43751c: cmp dword ptr [esi + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 437520: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 437523: fstp dword ptr [ebp + 0x7c] */
  WF32((uint32_t)(ebp + 0x7cu), ST0); FPOP();
/* 437526: je 0x437547 */
  if (zf) goto L_437547;
L_437528: /* 437528: fld dword ptr [ebp + 0x7c] */
  { double v = F32((uint32_t)(ebp + 0x7cu)); FPUSH(v); }
/* 43752b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43752c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 43752f: call 0x436729 */
  esp -= 4; W32(esp, 0x437534u); SPILL(); f_436729(); if (g_unwind) return; RELOAD();
/* 437534: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 437537: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437539: je 0x437547 */
  if (zf) goto L_437547;
L_43753b: /* 43753b: fld dword ptr [ebp + 0x7c] */
  { double v = F32((uint32_t)(ebp + 0x7cu)); FPUSH(v); }
/* 43753e: fmul dword ptr [0x43e0f4] */
  ST0 = ST0 * (F32((uint32_t)(0x43e0f4u)));
/* 437544: fstp dword ptr [ebp + 0x7c] */
  WF32((uint32_t)(ebp + 0x7cu), ST0); FPOP();
L_437547: /* 437547: and ecx, 0xfffe011f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe011fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 43754d: mov edi, 0x100 */
  edi = 0x100u;
/* 437552: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 437554: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 437556: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 437559: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 43755c: je 0x437575 */
  if (zf) goto L_437575;
L_43755e: /* 43755e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 43755f: je 0x43757c */
  if (zf) goto L_43757c;
L_437561: /* 437561: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 437562: je 0x43756e */
  if (zf) goto L_43756e;
L_437564: /* 437564: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 437565: jne 0x437579 */
  if (!zf) goto L_437579;
L_437567: /* 437567: mov edi, 0x300 */
  edi = 0x300u;
/* 43756c: jmp 0x43757c */
  goto L_43757c;
L_43756e: /* 43756e: mov edi, 0x200 */
  edi = 0x200u;
/* 437573: jmp 0x43757c */
  goto L_43757c;
L_437575: /* 437575: xor edi, edi */
  edi = 0;
/* 437577: jmp 0x43757c */
  goto L_43757c;
L_437579: /* 437579: mov edi, dword ptr [ebp + 0x7c] */
  edi = R32((uint32_t)(ebp + 0x7cu));
L_43757c: /* 43757c: push 0xb031f */
  { uint32_t v = 0xb031fu; esp -= 4; W32(esp, v); }
/* 437581: or edi, 0x9001f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x9001fu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 437587: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 437588: call 0x404d40 */
  esp -= 4; W32(esp, 0x43758du); SPILL(); f_404d40(); if (g_unwind) return; RELOAD();
/* 43758d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43758e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43758f: fnclex  */
  FSW_CC = 0;
/* 437591: fld dword ptr [ebp + 0x7c] */
  { double v = F32((uint32_t)(ebp + 0x7cu)); FPUSH(v); }
/* 437594: fstp qword ptr [ebp + 0x58] */
  WF64((uint32_t)(ebp + 0x58u), ST0); FPOP();
/* 437597: call 0x4151e3 */
  esp -= 4; W32(esp, 0x43759cu); SPILL(); f_4151e3(); if (g_unwind) return; RELOAD();
/* 43759c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 43759e: xor ebx, ebx */
  ebx = 0;
/* 4375a0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4375a1: test bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4375a3: jne 0x4375ad */
  if (!zf) goto L_4375ad;
L_4375a5: /* 4375a5: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4375a7: jne 0x4369f1 */
  if (!zf) goto L_4369f1;
L_4375ad: /* 4375ad: mov edx, eax */
  edx = eax;
/* 4375af: and edx, 0x80000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edx = r;
  }
/* 4375b5: je 0x4375bb */
  if (zf) goto L_4375bb;
L_4375b7: /* 4375b7: or dword ptr [esi + 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
L_4375bb: /* 4375bb: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4375be: jne 0x4375c8 */
  if (!zf) goto L_4375c8;
L_4375c0: /* 4375c0: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4375c2: jne 0x437b84 */
  if (!zf) goto L_437b84;
L_4375c8: /* 4375c8: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 4375cb: fld qword ptr [ebp + 0x58] */
  { double v = F64((uint32_t)(ebp + 0x58u)); FPUSH(v); }
/* 4375ce: fstp qword ptr [ecx + 0x50] */
  WF64((uint32_t)(ecx + 0x50u), ST0); FPOP();
/* 4375d1: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 4375d4: or dword ptr [ecx + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0x60u), r);
  }
/* 4375d7: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
L_4375da: /* 4375da: and dword ptr [ecx + 0xc], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
L_4375de: /* 4375de: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 4375e1: and dword ptr [ecx + 0xc], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 4375e5: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 4375e8: and dword ptr [ecx + 0xc], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 4375ec: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 4375ef: and dword ptr [ecx + 0xc], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 4375f3: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4375f5: jmp 0x436eb5 */
  goto L_436eb5;
L_4375fa: /* 4375fa: cmp dword ptr [esi + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4375fe: fld qword ptr [edx + 0x10] */
  { double v = F64((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 437601: fstp qword ptr [ebp + 0x68] */
  WF64((uint32_t)(ebp + 0x68u), ST0); FPOP();
/* 437604: je 0x437626 */
  if (zf) goto L_437626;
L_437606: /* 437606: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 437609: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43760a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43760b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 43760e: call 0x436708 */
  esp -= 4; W32(esp, 0x437613u); SPILL(); f_436708(); if (g_unwind) return; RELOAD();
/* 437613: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 437616: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437618: je 0x437626 */
  if (zf) goto L_437626;
L_43761a: /* 43761a: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 43761d: fmul qword ptr [0x43fc10] */
  ST0 = ST0 * (F64((uint32_t)(0x43fc10u)));
/* 437623: fstp qword ptr [ebp + 0x68] */
  WF64((uint32_t)(ebp + 0x68u), ST0); FPOP();
L_437626: /* 437626: and ecx, 0xfffe011f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe011fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 43762c: mov edi, 0x100 */
  edi = 0x100u;
/* 437631: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 437633: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 437635: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 437638: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 43763b: je 0x437654 */
  if (zf) goto L_437654;
L_43763d: /* 43763d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 43763e: je 0x43765b */
  if (zf) goto L_43765b;
L_437640: /* 437640: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 437641: je 0x43764d */
  if (zf) goto L_43764d;
L_437643: /* 437643: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 437644: jne 0x437658 */
  if (!zf) goto L_437658;
L_437646: /* 437646: mov edi, 0x300 */
  edi = 0x300u;
/* 43764b: jmp 0x43765b */
  goto L_43765b;
L_43764d: /* 43764d: mov edi, 0x200 */
  edi = 0x200u;
/* 437652: jmp 0x43765b */
  goto L_43765b;
L_437654: /* 437654: xor edi, edi */
  edi = 0;
/* 437656: jmp 0x43765b */
  goto L_43765b;
L_437658: /* 437658: mov edi, dword ptr [ebp + 0x7c] */
  edi = R32((uint32_t)(ebp + 0x7cu));
L_43765b: /* 43765b: push 0xb031f */
  { uint32_t v = 0xb031fu; esp -= 4; W32(esp, v); }
/* 437660: or edi, 0xa001f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xa001fu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 437666: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 437667: call 0x404d40 */
  esp -= 4; W32(esp, 0x43766cu); SPILL(); f_404d40(); if (g_unwind) return; RELOAD();
/* 43766c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43766d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43766e: fnclex  */
  FSW_CC = 0;
/* 437670: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 437673: fstp dword ptr [ebp + 0x7c] */
  WF32((uint32_t)(ebp + 0x7cu), ST0); FPOP();
/* 437676: call 0x4151e3 */
  esp -= 4; W32(esp, 0x43767bu); SPILL(); f_4151e3(); if (g_unwind) return; RELOAD();
/* 43767b: xor ebx, ebx */
  ebx = 0;
/* 43767d: mov edx, eax */
  edx = eax;
/* 43767f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 437681: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 437682: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437684: jne 0x43768f */
  if (!zf) goto L_43768f;
L_437686: /* 437686: test dl, 0x10 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437689: jne 0x4369f1 */
  if (!zf) goto L_4369f1;
L_43768f: /* 43768f: mov ecx, edx */
  ecx = edx;
/* 437691: and ecx, 0x80000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 437697: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 437699: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 43769a: je 0x43769f */
  if (zf) goto L_43769f;
L_43769c: /* 43769c: or dword ptr [esi + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
L_43769f: /* 43769f: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4376a1: jne 0x4376ab */
  if (!zf) goto L_4376ab;
L_4376a3: /* 4376a3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4376a5: jne 0x437b84 */
  if (!zf) goto L_437b84;
L_4376ab: /* 4376ab: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 4376ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4376af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4376b0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4376b3: call 0x4366e1 */
  esp -= 4; W32(esp, 0x4376b8u); SPILL(); f_4366e1(); if (g_unwind) return; RELOAD();
/* 4376b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4376ba: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4376bb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4376bc: jne 0x4378ec */
  if (!zf) goto L_4378ec;
L_4376c2: /* 4376c2: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 4376c5: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 4376ca: fstp qword ptr [ebp + 4] */
  WF64((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* 4376cd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4376d0: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4376d2: cmp ecx, 0x7ff80000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7ff80000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4376d8: jne 0x4376e4 */
  if (!zf) goto L_4376e4;
L_4376da: /* 4376da: cmp dword ptr [ebp + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4376de: je 0x4378ec */
  if (zf) goto L_4378ec;
L_4376e4: /* 4376e4: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 4376e7: fstp qword ptr [ebp + 4] */
  WF64((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* 4376ea: test dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4376ed: jne 0x4376f9 */
  if (!zf) goto L_4376f9;
L_4376ef: /* 4376ef: cmp dword ptr [ebp + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4376f3: je 0x4378ec */
  if (zf) goto L_4378ec;
L_4376f9: /* 4376f9: fnclex  */
  FSW_CC = 0;
/* 4376fb: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 4376fe: fld1  */
  FPUSH(1.0);
/* 437700: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 437702: fstp qword ptr [ebp + 4] */
  WF64((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* 437705: fld qword ptr [0x44f03c] */
  { double v = F64((uint32_t)(0x44f03cu)); FPUSH(v); }
/* 43770b: fchs  */
  ST0 = -ST0;
/* 43770d: fcomp qword ptr [ebp + 4] */
  fpu_com(ST0, F64((uint32_t)(ebp + 0x4u)));
  FPOP();
/* 437710: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 437712: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 437715: jp 0x43772a */
  if (pf) goto L_43772a;
L_437717: /* 437717: fld qword ptr [ebp + 4] */
  { double v = F64((uint32_t)(ebp + 0x4u)); FPUSH(v); }
/* 43771a: fcomp qword ptr [0x44f03c] */
  fpu_com(ST0, F64((uint32_t)(0x44f03cu)));
  FPOP();
/* 437720: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 437722: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 437725: jp 0x43772a */
  if (pf) goto L_43772a;
L_437727: /* 437727: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
L_43772a: /* 43772a: fld qword ptr [0x44f044] */
  { double v = F64((uint32_t)(0x44f044u)); FPUSH(v); }
/* 437730: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 437732: fchs  */
  ST0 = -ST0;
/* 437734: fcomp qword ptr [ebp + 4] */
  fpu_com(ST0, F64((uint32_t)(ebp + 0x4u)));
  FPOP();
/* 437737: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 437739: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43773c: je 0x43774a */
  if (zf) goto L_43774a;
L_43773e: /* 43773e: fcomp qword ptr [ebp + 4] */
  fpu_com(ST0, F64((uint32_t)(ebp + 0x4u)));
  FPOP();
/* 437741: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 437743: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 437746: jp 0x43774f */
  if (pf) goto L_43774f;
L_437748: /* 437748: jmp 0x43774c */
  goto L_43774c;
L_43774a: /* 43774a: fstp st(0) */
  STI(0) = ST0; FPOP();
L_43774c: /* 43774c: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
L_43774f: /* 43774f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 437751: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437753: jne 0x437774 */
  if (!zf) goto L_437774;
L_437755: /* 437755: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 437759: je 0x437774 */
  if (zf) goto L_437774;
L_43775b: /* 43775b: mov eax, esi */
  eax = esi;
/* 43775d: call 0x436743 */
  esp -= 4; W32(esp, 0x437762u); SPILL(); f_436743(); if (g_unwind) return; RELOAD();
/* 437762: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437765: or dword ptr [eax + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 437768: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43776b: or dword ptr [esi + 4], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 43776f: or dword ptr [eax + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 437772: jmp 0x437797 */
  goto L_437797;
L_437774: /* 437774: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437776: jne 0x4377a3 */
  if (!zf) goto L_4377a3;
L_437778: /* 437778: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43777c: je 0x4377a3 */
  if (zf) goto L_4377a3;
L_43777e: /* 43777e: mov eax, esi */
  eax = esi;
/* 437780: call 0x436743 */
  esp -= 4; W32(esp, 0x437785u); SPILL(); f_436743(); if (g_unwind) return; RELOAD();
/* 437785: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437788: or dword ptr [eax + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 43778c: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43778f: or dword ptr [esi + 4], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 437793: or dword ptr [eax + 4], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
L_437797: /* 437797: mov esi, dword ptr [esi + 0x20] */
  esi = R32((uint32_t)(esi + 0x20u));
/* 43779a: and dword ptr [esi + 0x60], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x60u), r);
  }
/* 43779e: jmp 0x436a09 */
  goto L_436a09;
L_4377a3: /* 4377a3: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4377a5: jne 0x43784b */
  if (!zf) goto L_43784b;
L_4377ab: /* 4377ab: test bl, dl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4377ad: jne 0x4377c3 */
  if (!zf) goto L_4377c3;
L_4377af: /* 4377af: cmp dword ptr [esi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4377b3: je 0x43784b */
  if (zf) goto L_43784b;
L_4377b9: /* 4377b9: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4377bd: je 0x43784b */
  if (zf) goto L_43784b;
L_4377c3: /* 4377c3: mov eax, esi */
  eax = esi;
/* 4377c5: call 0x436743 */
  esp -= 4; W32(esp, 0x4377cau); SPILL(); f_436743(); if (g_unwind) return; RELOAD();
/* 4377ca: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4377cd: or dword ptr [eax + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4377d0: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4377d3: or dword ptr [esi + 4], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 4377d7: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 4377da: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4377dd: or dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 4377e0: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4377e4: je 0x4377f0 */
  if (zf) goto L_4377f0;
L_4377e6: /* 4377e6: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4377e9: or dword ptr [eax + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4377ec: or dword ptr [esi + 4], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
L_4377f0: /* 4377f0: xor ecx, ecx */
  ecx = 0;
/* 4377f2: cmp dword ptr [ebp - 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4377f5: je 0x437802 */
  if (zf) goto L_437802;
L_4377f7: /* 4377f7: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4377fa: or dword ptr [eax + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4377fe: or dword ptr [esi + 4], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
L_437802: /* 437802: cmp dword ptr [esi + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 437805: je 0x43783d */
  if (zf) goto L_43783d;
L_437807: /* 437807: cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43780a: je 0x43783d */
  if (zf) goto L_43783d;
L_43780c: /* 43780c: fld dword ptr [ebp + 0x7c] */
  { double v = F32((uint32_t)(ebp + 0x7cu)); FPUSH(v); }
/* 43780f: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 437815: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 437817: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43781a: jne 0x437824 */
  if (!zf) goto L_437824;
L_43781c: /* 43781c: fld dword ptr [0x44f65c] */
  { double v = F32((uint32_t)(0x44f65cu)); FPUSH(v); }
/* 437822: jmp 0x43783a */
  goto L_43783a;
L_437824: /* 437824: fld dword ptr [ebp + 0x7c] */
  { double v = F32((uint32_t)(ebp + 0x7cu)); FPUSH(v); }
/* 437827: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 43782d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 43782f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 437832: jp 0x43783d */
  if (pf) goto L_43783d;
L_437834: /* 437834: fld dword ptr [0x44f030] */
  { double v = F32((uint32_t)(0x44f030u)); FPUSH(v); }
L_43783a: /* 43783a: fstp dword ptr [ebp + 0x7c] */
  WF32((uint32_t)(ebp + 0x7cu), ST0); FPOP();
L_43783d: /* 43783d: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437840: fld dword ptr [ebp + 0x7c] */
  { double v = F32((uint32_t)(ebp + 0x7cu)); FPUSH(v); }
/* 437843: fstp dword ptr [eax + 0x50] */
  WF32((uint32_t)(eax + 0x50u), ST0); FPOP();
/* 437846: jmp 0x436a09 */
  goto L_436a09;
L_43784b: /* 43784b: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43784e: or dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 437851: test dl, 2 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437854: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437857: je 0x437862 */
  if (zf) goto L_437862;
L_437859: /* 437859: or dword ptr [eax + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 43785c: or dword ptr [esi + 4], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 437860: jmp 0x437866 */
  goto L_437866;
L_437862: /* 437862: and dword ptr [eax + 0xc], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
L_437866: /* 437866: test dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437869: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43786c: je 0x437878 */
  if (zf) goto L_437878;
L_43786e: /* 43786e: or dword ptr [eax + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 437872: or dword ptr [esi + 4], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 437876: jmp 0x43787c */
  goto L_43787c;
L_437878: /* 437878: and dword ptr [eax + 0xc], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
L_43787c: /* 43787c: test bl, dl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43787e: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437881: je 0x43788c */
  if (zf) goto L_43788c;
L_437883: /* 437883: or dword ptr [eax + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 437886: or dword ptr [esi + 4], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 43788a: jmp 0x437890 */
  goto L_437890;
L_43788c: /* 43788c: and dword ptr [eax + 0xc], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
L_437890: /* 437890: cmp dword ptr [esi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 437894: je 0x4378e1 */
  if (zf) goto L_4378e1;
L_437896: /* 437896: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43789a: je 0x4378e1 */
  if (zf) goto L_4378e1;
L_43789c: /* 43789c: fld dword ptr [ebp + 0x7c] */
  { double v = F32((uint32_t)(ebp + 0x7cu)); FPUSH(v); }
/* 43789f: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 4378a5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4378a7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4378aa: jne 0x4378b4 */
  if (!zf) goto L_4378b4;
L_4378ac: /* 4378ac: fld dword ptr [0x44f65c] */
  { double v = F32((uint32_t)(0x44f65cu)); FPUSH(v); }
/* 4378b2: jmp 0x4378ca */
  goto L_4378ca;
L_4378b4: /* 4378b4: fld dword ptr [ebp + 0x7c] */
  { double v = F32((uint32_t)(ebp + 0x7cu)); FPUSH(v); }
/* 4378b7: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 4378bd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4378bf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4378c2: jp 0x4378cd */
  if (pf) goto L_4378cd;
L_4378c4: /* 4378c4: fld dword ptr [0x44f030] */
  { double v = F32((uint32_t)(0x44f030u)); FPUSH(v); }
L_4378ca: /* 4378ca: fstp dword ptr [ebp + 0x7c] */
  WF32((uint32_t)(ebp + 0x7cu), ST0); FPOP();
L_4378cd: /* 4378cd: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4378d0: or dword ptr [eax + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4378d3: or dword ptr [esi + 4], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 4378d7: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4378da: or dword ptr [eax + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4378dd: or dword ptr [esi + 4], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
L_4378e1: /* 4378e1: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4378e4: fld dword ptr [ebp + 0x7c] */
  { double v = F32((uint32_t)(ebp + 0x7cu)); FPUSH(v); }
/* 4378e7: fstp dword ptr [eax + 0x50] */
  WF32((uint32_t)(eax + 0x50u), ST0); FPOP();
/* 4378ea: jmp 0x437917 */
  goto L_437917;
L_4378ec: /* 4378ec: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4378ef: fld dword ptr [ebp + 0x7c] */
  { double v = F32((uint32_t)(ebp + 0x7cu)); FPUSH(v); }
/* 4378f2: or dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 4378f5: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4378f8: fstp dword ptr [eax + 0x50] */
  WF32((uint32_t)(eax + 0x50u), ST0); FPOP();
/* 4378fb: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4378fe: and dword ptr [eax + 0xc], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 437902: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437905: and dword ptr [eax + 0xc], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 437909: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43790c: and dword ptr [eax + 0xc], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 437910: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437913: and dword ptr [eax + 0xc], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
L_437917: /* 437917: test dl, 0x10 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43791a: jmp 0x436eb5 */
  goto L_436eb5;
L_43791f: /* 43791f: cmp dword ptr [esi + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 437923: fld qword ptr [edx + 0x10] */
  { double v = F64((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 437926: fstp qword ptr [ebp + 0x68] */
  WF64((uint32_t)(ebp + 0x68u), ST0); FPOP();
/* 437929: fld qword ptr [edx + 0x30] */
  { double v = F64((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* 43792c: fstp qword ptr [ebp + 0x60] */
  WF64((uint32_t)(ebp + 0x60u), ST0); FPOP();
/* 43792f: je 0x43796e */
  if (zf) goto L_43796e;
L_437931: /* 437931: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 437934: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437935: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437936: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 437939: call 0x436708 */
  esp -= 4; W32(esp, 0x43793eu); SPILL(); f_436708(); if (g_unwind) return; RELOAD();
/* 43793e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 437941: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437943: je 0x437951 */
  if (zf) goto L_437951;
L_437945: /* 437945: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 437948: fmul qword ptr [0x43fc10] */
  ST0 = ST0 * (F64((uint32_t)(0x43fc10u)));
/* 43794e: fstp qword ptr [ebp + 0x68] */
  WF64((uint32_t)(ebp + 0x68u), ST0); FPOP();
L_437951: /* 437951: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
/* 437954: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437955: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437956: fst qword ptr [esp] */
  WF64((uint32_t)(esp), ST0);
/* 437959: call 0x436708 */
  esp -= 4; W32(esp, 0x43795eu); SPILL(); f_436708(); if (g_unwind) return; RELOAD();
/* 43795e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 437961: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437963: je 0x437971 */
  if (zf) goto L_437971;
L_437965: /* 437965: fmul qword ptr [0x43fc10] */
  ST0 = ST0 * (F64((uint32_t)(0x43fc10u)));
/* 43796b: fstp qword ptr [ebp + 0x60] */
  WF64((uint32_t)(ebp + 0x60u), ST0); FPOP();
L_43796e: /* 43796e: fld qword ptr [ebp + 0x60] */
  { double v = F64((uint32_t)(ebp + 0x60u)); FPUSH(v); }
L_437971: /* 437971: cmp ebx, 0x4d */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4du);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 437974: jb 0x43799c */
  if (cf) goto L_43799c;
L_437976: /* 437976: cmp ebx, 0x4e */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 437979: jbe 0x43798e */
  if ((cf | zf)) goto L_43798e;
L_43797b: /* 43797b: cmp ebx, 0x50 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 43797e: ja 0x43799c */
  if ((!cf && !zf)) goto L_43799c;
L_437980: /* 437980: and ecx, 0xfffe051f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe051fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 437986: or ecx, 0x500 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x500u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 43798c: jmp 0x43799a */
  goto L_43799a;
L_43798e: /* 43798e: and ecx, 0xfffe053f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe053fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 437994: or ecx, 0x520 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x520u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_43799a: /* 43799a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_43799c: /* 43799c: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 43799f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4379a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4379a1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4379a4: call 0x4366e1 */
  esp -= 4; W32(esp, 0x4379a9u); SPILL(); f_4366e1(); if (g_unwind) return; RELOAD();
/* 4379a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4379ab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4379ac: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4379ad: jne 0x4379bf */
  if (!zf) goto L_4379bf;
L_4379af: /* 4379af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4379b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4379b1: fst qword ptr [esp] */
  WF64((uint32_t)(esp), ST0);
/* 4379b4: call 0x4366e1 */
  esp -= 4; W32(esp, 0x4379b9u); SPILL(); f_4366e1(); if (g_unwind) return; RELOAD();
/* 4379b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4379bb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4379bc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4379bd: je 0x437a04 */
  if (zf) goto L_437a04;
L_4379bf: /* 4379bf: xor ebx, ebx */
  ebx = 0;
/* 4379c1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4379c2: test byte ptr [esi], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4379c4: jne 0x4379cd */
  if (!zf) goto L_4379cd;
L_4379c6: /* 4379c6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4379c8: jmp 0x4369f1 */
  goto L_4369f1;
L_4379cd: /* 4379cd: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4379d0: or dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 4379d3: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4379d6: fstp qword ptr [eax + 0x50] */
  WF64((uint32_t)(eax + 0x50u), ST0); FPOP();
/* 4379d9: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4379dc: and dword ptr [eax + 0xc], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4379e0: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4379e3: and dword ptr [eax + 0xc], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4379e7: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4379ea: and dword ptr [eax + 0xc], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
L_4379ee: /* 4379ee: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4379f1: and dword ptr [eax + 0xc], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
L_4379f5: /* 4379f5: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4379f8: or dword ptr [eax + 0xc], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4379fc: or dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 4379ff: jmp 0x436e41 */
  goto L_436e41;
L_437a04: /* 437a04: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 437a07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437a08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437a09: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 437a0c: call 0x436708 */
  esp -= 4; W32(esp, 0x437a11u); SPILL(); f_436708(); if (g_unwind) return; RELOAD();
/* 437a11: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 437a14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437a16: jne 0x437a29 */
  if (!zf) goto L_437a29;
L_437a18: /* 437a18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437a19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437a1a: fst qword ptr [esp] */
  WF64((uint32_t)(esp), ST0);
/* 437a1d: call 0x436708 */
  esp -= 4; W32(esp, 0x437a22u); SPILL(); f_436708(); if (g_unwind) return; RELOAD();
/* 437a22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 437a25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437a27: je 0x437a43 */
  if (zf) goto L_437a43;
L_437a29: /* 437a29: or dword ptr [esi + 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 437a2d: test byte ptr [esi], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437a30: jne 0x437a43 */
  if (!zf) goto L_437a43;
L_437a32: /* 437a32: mov eax, esi */
  eax = esi;
/* 437a34: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 437a36: call 0x436743 */
  esp -= 4; W32(esp, 0x437a3bu); SPILL(); f_436743(); if (g_unwind) return; RELOAD();
/* 437a3b: xor eax, eax */
  eax = 0;
/* 437a3d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 437a3e: jmp 0x436e43 */
  goto L_436e43;
L_437a43: /* 437a43: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 437a46: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 437a48: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 437a4a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 437a4d: jp 0x437a8f */
  if (pf) goto L_437a8f;
L_437a4f: /* 437a4f: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 437a52: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 437a54: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 437a57: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 437a59: sub eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 437a5c: je 0x437a8b */
  if (zf) goto L_437a8b;
L_437a5e: /* 437a5e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 437a5f: je 0x437ab2 */
  if (zf) goto L_437ab2;
L_437a61: /* 437a61: fstp st(0) */
  STI(0) = ST0; FPOP();
L_437a63: /* 437a63: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437a66: or dword ptr [eax + 0x60], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
L_437a6a: /* 437a6a: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
L_437a6d: /* 437a6d: and dword ptr [eax + 0xc], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
L_437a71: /* 437a71: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437a74: and dword ptr [eax + 0xc], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 437a78: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437a7b: and dword ptr [eax + 0xc], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 437a7f: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
L_437a82: /* 437a82: and dword ptr [eax + 0xc], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 437a86: jmp 0x436e3a */
  goto L_436e3a;
L_437a8b: /* 437a8b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 437a8d: jmp 0x437aaf */
  goto L_437aaf;
L_437a8f: /* 437a8f: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 437a92: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 437a94: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 437a96: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437a99: jne 0x437ab7 */
  if (!zf) goto L_437ab7;
L_437a9b: /* 437a9b: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 437a9e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 437aa0: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 437aa3: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 437aa5: sub eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 437aa8: je 0x437ab2 */
  if (zf) goto L_437ab2;
L_437aaa: /* 437aaa: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 437aab: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 437aad: jne 0x437a63 */
  if (!zf) goto L_437a63;
L_437aaf: /* 437aaf: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
L_437ab2: /* 437ab2: fstp qword ptr [ecx + 0x50] */
  WF64((uint32_t)(ecx + 0x50u), ST0); FPOP();
/* 437ab5: jmp 0x437a63 */
  goto L_437a63;
L_437ab7: /* 437ab7: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 437aba: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 437abc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 437abe: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 437ac1: jp 0x437a61 */
  if (pf) goto L_437a61;
L_437ac3: /* 437ac3: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437ac6: fstp qword ptr [eax + 0x50] */
  WF64((uint32_t)(eax + 0x50u), ST0); FPOP();
/* 437ac9: jmp 0x437a63 */
  goto L_437a63;
L_437acb: /* 437acb: cmp dword ptr [esi + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 437acf: fld qword ptr [edx + 0x10] */
  { double v = F64((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 437ad2: fstp qword ptr [ebp + 0x68] */
  WF64((uint32_t)(ebp + 0x68u), ST0); FPOP();
/* 437ad5: je 0x437af7 */
  if (zf) goto L_437af7;
L_437ad7: /* 437ad7: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 437ada: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437adb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437adc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 437adf: call 0x436708 */
  esp -= 4; W32(esp, 0x437ae4u); SPILL(); f_436708(); if (g_unwind) return; RELOAD();
/* 437ae4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 437ae7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437ae9: je 0x437af7 */
  if (zf) goto L_437af7;
L_437aeb: /* 437aeb: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 437aee: fmul qword ptr [0x43fc10] */
  ST0 = ST0 * (F64((uint32_t)(0x43fc10u)));
/* 437af4: fstp qword ptr [ebp + 0x68] */
  WF64((uint32_t)(ebp + 0x68u), ST0); FPOP();
L_437af7: /* 437af7: and ecx, 0xfffe00bf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe00bfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 437afd: or ecx, 0xa0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 437b03: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 437b05: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 437b08: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 437b0b: je 0x437b2b */
  if (zf) goto L_437b2b;
L_437b0d: /* 437b0d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 437b0e: je 0x437b24 */
  if (zf) goto L_437b24;
L_437b10: /* 437b10: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 437b11: je 0x437b1d */
  if (zf) goto L_437b1d;
L_437b13: /* 437b13: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 437b14: jne 0x437b2f */
  if (!zf) goto L_437b2f;
L_437b16: /* 437b16: mov eax, 0x300 */
  eax = 0x300u;
/* 437b1b: jmp 0x437b32 */
  goto L_437b32;
L_437b1d: /* 437b1d: mov eax, 0x200 */
  eax = 0x200u;
/* 437b22: jmp 0x437b32 */
  goto L_437b32;
L_437b24: /* 437b24: mov eax, 0x100 */
  eax = 0x100u;
/* 437b29: jmp 0x437b32 */
  goto L_437b32;
L_437b2b: /* 437b2b: xor eax, eax */
  eax = 0;
/* 437b2d: jmp 0x437b32 */
  goto L_437b32;
L_437b2f: /* 437b2f: mov eax, dword ptr [ebp + 0x7c] */
  eax = R32((uint32_t)(ebp + 0x7cu));
L_437b32: /* 437b32: or eax, 0x9001f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9001fu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 437b37: push 0xb031f */
  { uint32_t v = 0xb031fu; esp -= 4; W32(esp, v); }
/* 437b3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 437b3d: call 0x404d40 */
  esp -= 4; W32(esp, 0x437b42u); SPILL(); f_404d40(); if (g_unwind) return; RELOAD();
/* 437b42: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 437b43: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 437b44: fnclex  */
  FSW_CC = 0;
/* 437b46: fld qword ptr [ebp + 0x68] */
  { double v = F64((uint32_t)(ebp + 0x68u)); FPUSH(v); }
/* 437b49: fsqrt  */
  ST0 = sqrt(ST0);
/* 437b4b: fstp qword ptr [ebp + 0x58] */
  WF64((uint32_t)(ebp + 0x58u), ST0); FPOP();
/* 437b4e: call 0x4151e3 */
  esp -= 4; W32(esp, 0x437b53u); SPILL(); f_4151e3(); if (g_unwind) return; RELOAD();
/* 437b53: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437b55: je 0x437b5c */
  if (zf) goto L_437b5c;
L_437b57: /* 437b57: and eax, 0xfff7ffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfff7ffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_437b5c: /* 437b5c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 437b5e: xor ebx, ebx */
  ebx = 0;
/* 437b60: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 437b61: test bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437b63: jne 0x437b6d */
  if (!zf) goto L_437b6d;
L_437b65: /* 437b65: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437b67: jne 0x4369f1 */
  if (!zf) goto L_4369f1;
L_437b6d: /* 437b6d: mov edx, eax */
  edx = eax;
/* 437b6f: and edx, 0x80000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edx = r;
  }
/* 437b75: je 0x437b7b */
  if (zf) goto L_437b7b;
L_437b77: /* 437b77: or dword ptr [esi + 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
L_437b7b: /* 437b7b: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437b7e: jne 0x437b90 */
  if (!zf) goto L_437b90;
L_437b80: /* 437b80: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437b82: je 0x437b90 */
  if (zf) goto L_437b90;
L_437b84: /* 437b84: mov eax, esi */
  eax = esi;
/* 437b86: call 0x436743 */
  esp -= 4; W32(esp, 0x437b8bu); SPILL(); f_436743(); if (g_unwind) return; RELOAD();
/* 437b8b: jmp 0x436a09 */
  goto L_436a09;
L_437b90: /* 437b90: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 437b93: fld qword ptr [ebp + 0x58] */
  { double v = F64((uint32_t)(ebp + 0x58u)); FPUSH(v); }
/* 437b96: fstp qword ptr [ecx + 0x50] */
  WF64((uint32_t)(ecx + 0x50u), ST0); FPOP();
/* 437b99: test byte ptr [esi], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437b9c: jne 0x437bc4 */
  if (!zf) goto L_437bc4;
L_437b9e: /* 437b9e: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437ba0: je 0x437bc4 */
  if (zf) goto L_437bc4;
L_437ba2: /* 437ba2: mov eax, esi */
  eax = esi;
/* 437ba4: call 0x436743 */
  esp -= 4; W32(esp, 0x437ba9u); SPILL(); f_436743(); if (g_unwind) return; RELOAD();
/* 437ba9: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437bac: or dword ptr [eax + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 437baf: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437bb2: or dword ptr [esi + 4], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 437bb6: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 437bb9: mov esi, dword ptr [esi + 0x20] */
  esi = R32((uint32_t)(esi + 0x20u));
/* 437bbc: or dword ptr [esi + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x60u), r);
  }
/* 437bbf: jmp 0x436a09 */
  goto L_436a09;
L_437bc4: /* 437bc4: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 437bc7: or dword ptr [ecx + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0x60u), r);
  }
/* 437bca: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 437bcd: and dword ptr [ecx + 0xc], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 437bd1: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 437bd4: and dword ptr [ecx + 0xc], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 437bd8: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437bda: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 437bdd: je 0x437be8 */
  if (zf) goto L_437be8;
L_437bdf: /* 437bdf: or dword ptr [ecx + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 437be2: or dword ptr [esi + 4], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 437be6: jmp 0x437bec */
  goto L_437bec;
L_437be8: /* 437be8: and dword ptr [ecx + 0xc], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
L_437bec: /* 437bec: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 437bef: and dword ptr [ecx + 0xc], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 437bf3: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437bf5: je 0x436e3a */
  if (zf) goto L_436e3a;
L_437bfb: /* 437bfb: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437bfe: or dword ptr [eax + 0xc], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 437c02: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 437c05: jmp 0x436e41 */
  goto L_436e41;
}

void f_437ca1(void) {
  LOAD_REGS();
L_437ca1: /* 437ca1: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 437ca5: and eax, 0x7fc00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fc00000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 437caa: cmp eax, 0x7f800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 437caf: jne 0x437cbf */
  if (!zf) goto L_437cbf;
L_437cb1: /* 437cb1: test dword ptr [esp + 4], 0x3fffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x3fffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437cb9: je 0x437cbf */
  if (zf) goto L_437cbf;
L_437cbb: /* 437cbb: xor eax, eax */
  eax = 0;
/* 437cbd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 437cbe: ret  */
  esp += 4; SPILL(); return;
L_437cbf: /* 437cbf: xor eax, eax */
  eax = 0;
/* 437cc1: ret  */
  esp += 4; SPILL(); return;
}

void f_437cc2(void) {
  LOAD_REGS();
L_437cc2: /* 437cc2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 437cc6: mov eax, 0x7f800000 */
  eax = 0x7f800000u;
/* 437ccb: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 437ccd: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 437ccf: jne 0x437cdf */
  if (!zf) goto L_437cdf;
L_437cd1: /* 437cd1: test dword ptr [esp + 4], 0x7fffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x7fffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437cd9: je 0x437cdf */
  if (zf) goto L_437cdf;
L_437cdb: /* 437cdb: xor eax, eax */
  eax = 0;
/* 437cdd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 437cde: ret  */
  esp += 4; SPILL(); return;
L_437cdf: /* 437cdf: xor eax, eax */
  eax = 0;
/* 437ce1: ret  */
  esp += 4; SPILL(); return;
}

void f_437ce2(void) {
  LOAD_REGS();
L_437ce2: /* 437ce2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 437ce3: mov ebp, esp */
  ebp = esp;
/* 437ce5: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 437ce8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 437ce9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 437cea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 437ceb: fninit  */
  fpu_init();
/* 437ced: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 437cf0: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437cf3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 437cf5: xor ecx, dword ptr [esi + 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x10u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 437cf8: and dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 437cfc: and dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 437d00: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 437d03: xor dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(eax), r);
  }
/* 437d05: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 437d08: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437d0b: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 437d0e: xor ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 437d10: and ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 437d13: xor dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(eax), r);
  }
/* 437d15: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 437d18: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 437d1a: mov ebx, ecx */
  ebx = ecx;
/* 437d1c: shr ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 437d1f: and ebx, 0xfff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 437d25: lea edi, [ebx - 0x2b] */
  edi = (uint32_t)(ebx + 0xffffffd5u);
/* 437d28: cmp edi, 0x17 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x17u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 437d2b: ja 0x438224 */
  if ((!cf && !zf)) goto L_438224;
L_437d31: /* 437d31: movzx eax, byte ptr [edi + 0x438b44] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x438b44u)));
/* 437d38: jmp dword ptr [eax*4 + 0x438b28] */
  switch (R32((uint32_t)(eax*4 + 0x438b28u))) {
    case 0x437d3fu: goto L_437d3f;
    case 0x438296u: goto L_438296;
    case 0x4384adu: goto L_4384ad;
    case 0x43866eu: goto L_43866e;
    case 0x43872eu: goto L_43872e;
    case 0x438840u: goto L_438840;
    case 0x4389eau: goto L_4389ea;
    default: guest_badjump(0x437d38, R32((uint32_t)(eax*4 + 0x438b28u))); return;
  }
L_437d3f: /* 437d3f: cmp dword ptr [esi + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 437d43: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 437d46: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 437d49: fld dword ptr [edx + 0x30] */
  { double v = F32((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* 437d4c: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 437d4f: je 0x437d8f */
  if (zf) goto L_437d8f;
L_437d51: /* 437d51: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 437d54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437d55: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 437d58: call 0x436729 */
  esp -= 4; W32(esp, 0x437d5du); SPILL(); f_436729(); if (g_unwind) return; RELOAD();
/* 437d5d: fld dword ptr [0x43e0f4] */
  { double v = F32((uint32_t)(0x43e0f4u)); FPUSH(v); }
/* 437d63: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 437d66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437d68: je 0x437d72 */
  if (zf) goto L_437d72;
L_437d6a: /* 437d6a: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 437d6d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 437d6f: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
L_437d72: /* 437d72: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 437d75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437d76: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 437d79: call 0x436729 */
  esp -= 4; W32(esp, 0x437d7eu); SPILL(); f_436729(); if (g_unwind) return; RELOAD();
/* 437d7e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 437d81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437d83: je 0x437d8d */
  if (zf) goto L_437d8d;
L_437d85: /* 437d85: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 437d88: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 437d8a: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
L_437d8d: /* 437d8d: fstp st(0) */
  STI(0) = ST0; FPOP();
L_437d8f: /* 437d8f: cmp edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 437d92: ja 0x437dca */
  if ((!cf && !zf)) goto L_437dca;
L_437d94: /* 437d94: jmp dword ptr [edi*4 + 0x438b5c] */
  switch (R32((uint32_t)(edi*4 + 0x438b5cu))) {
    case 0x437d9bu: goto L_437d9b;
    case 0x437da6u: goto L_437da6;
    case 0x437db1u: goto L_437db1;
    case 0x437dbcu: goto L_437dbc;
    case 0x438310u: goto L_438310;
    case 0x4383dau: goto L_4383da;
    default: guest_badjump(0x437d94, R32((uint32_t)(edi*4 + 0x438b5cu))); return;
  }
L_437d9b: /* 437d9b: and ecx, 0xfffe003f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe003fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 437da1: or ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 437da4: jmp 0x437dc8 */
  goto L_437dc8;
L_437da6: /* 437da6: and ecx, 0xfffe005f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe005fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 437dac: or ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 437daf: jmp 0x437dc8 */
  goto L_437dc8;
L_437db1: /* 437db1: and ecx, 0xfffe007f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe007fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 437db7: or ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 437dba: jmp 0x437dc8 */
  goto L_437dc8;
L_437dbc: /* 437dbc: and ecx, 0xfffe009f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe009fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 437dc2: or ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_437dc8: /* 437dc8: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_437dca: /* 437dca: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 437dcd: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 437dd0: je 0x437df0 */
  if (zf) goto L_437df0;
L_437dd2: /* 437dd2: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 437dd3: je 0x437de9 */
  if (zf) goto L_437de9;
L_437dd5: /* 437dd5: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 437dd6: je 0x437de2 */
  if (zf) goto L_437de2;
L_437dd8: /* 437dd8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 437dd9: jne 0x437df4 */
  if (!zf) goto L_437df4;
L_437ddb: /* 437ddb: mov eax, 0x300 */
  eax = 0x300u;
/* 437de0: jmp 0x437df7 */
  goto L_437df7;
L_437de2: /* 437de2: mov eax, 0x200 */
  eax = 0x200u;
/* 437de7: jmp 0x437df7 */
  goto L_437df7;
L_437de9: /* 437de9: mov eax, 0x100 */
  eax = 0x100u;
/* 437dee: jmp 0x437df7 */
  goto L_437df7;
L_437df0: /* 437df0: xor eax, eax */
  eax = 0;
/* 437df2: jmp 0x437df7 */
  goto L_437df7;
L_437df4: /* 437df4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_437df7: /* 437df7: or eax, 0xa001f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa001fu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 437dfc: push 0xb031f */
  { uint32_t v = 0xb031fu; esp -= 4; W32(esp, v); }
/* 437e01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 437e02: call 0x404d40 */
  esp -= 4; W32(esp, 0x437e07u); SPILL(); f_404d40(); if (g_unwind) return; RELOAD();
/* 437e07: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437e0a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 437e0c: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 437e0f: and eax, 0xfff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 437e14: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 437e15: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 437e16: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 437e17: je 0x437e4f */
  if (zf) goto L_437e4f;
L_437e19: /* 437e19: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 437e1a: je 0x437e40 */
  if (zf) goto L_437e40;
L_437e1c: /* 437e1c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 437e1d: je 0x437e31 */
  if (zf) goto L_437e31;
L_437e1f: /* 437e1f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 437e20: jne 0x437e5c */
  if (!zf) goto L_437e5c;
L_437e22: /* 437e22: fnclex  */
  FSW_CC = 0;
/* 437e24: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 437e27: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 437e2a: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 437e2c: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 437e2f: jmp 0x437e5c */
  goto L_437e5c;
L_437e31: /* 437e31: fnclex  */
  FSW_CC = 0;
/* 437e33: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 437e36: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 437e39: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 437e3b: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 437e3e: jmp 0x437e5c */
  goto L_437e5c;
L_437e40: /* 437e40: fnclex  */
  FSW_CC = 0;
/* 437e42: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 437e45: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 437e48: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 437e4a: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 437e4d: jmp 0x437e5c */
  goto L_437e5c;
L_437e4f: /* 437e4f: fnclex  */
  FSW_CC = 0;
/* 437e51: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 437e54: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 437e57: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 437e59: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
L_437e5c: /* 437e5c: call 0x4151e3 */
  esp -= 4; W32(esp, 0x437e61u); SPILL(); f_4151e3(); if (g_unwind) return; RELOAD();
/* 437e61: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437e63: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 437e66: je 0x437e6c */
  if (zf) goto L_437e6c;
L_437e68: /* 437e68: and byte ptr [ebp - 0xe], 0xf7 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff2u))); uint8_t b = (uint8_t)(0xf7u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffff2u), r);
  }
L_437e6c: /* 437e6c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 437e6e: xor ebx, ebx */
  ebx = 0;
/* 437e70: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 437e71: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437e73: jne 0x437e9a */
  if (!zf) goto L_437e9a;
L_437e75: /* 437e75: test byte ptr [ebp - 0x10], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff0u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437e79: je 0x437e9a */
  if (zf) goto L_437e9a;
L_437e7b: /* 437e7b: mov eax, esi */
  eax = esi;
/* 437e7d: call 0x436743 */
  esp -= 4; W32(esp, 0x437e82u); SPILL(); f_436743(); if (g_unwind) return; RELOAD();
/* 437e82: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437e85: or dword ptr [eax + 0xc], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 437e89: or dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 437e8c: mov esi, dword ptr [esi + 0x20] */
  esi = R32((uint32_t)(esi + 0x20u));
/* 437e8f: or dword ptr [esi + 4], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
L_437e93: /* 437e93: mov eax, ebx */
  eax = ebx;
/* 437e95: jmp 0x438224 */
  goto L_438224;
L_437e9a: /* 437e9a: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 437e9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437e9e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 437ea1: call 0x437cc2 */
  esp -= 4; W32(esp, 0x437ea6u); SPILL(); f_437cc2(); if (g_unwind) return; RELOAD();
/* 437ea6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437ea8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 437ea9: jne 0x438229 */
  if (!zf) goto L_438229;
L_437eaf: /* 437eaf: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 437eb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437eb3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 437eb6: call 0x437cc2 */
  esp -= 4; W32(esp, 0x437ebbu); SPILL(); f_437cc2(); if (g_unwind) return; RELOAD();
/* 437ebb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437ebd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 437ebe: jne 0x438229 */
  if (!zf) goto L_438229;
L_437ec4: /* 437ec4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 437ec6: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437ec8: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 437eca: mov edx, 0x80000 */
  edx = 0x80000u;
/* 437ecf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 437ed0: jne 0x437ee3 */
  if (!zf) goto L_437ee3;
L_437ed2: /* 437ed2: test dword ptr [ebp - 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437ed5: je 0x437ee3 */
  if (zf) goto L_437ee3;
L_437ed7: /* 437ed7: mov eax, esi */
  eax = esi;
/* 437ed9: call 0x436743 */
  esp -= 4; W32(esp, 0x437edeu); SPILL(); f_436743(); if (g_unwind) return; RELOAD();
/* 437ede: or dword ptr [esi + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 437ee1: jmp 0x437e93 */
  goto L_437e93;
L_437ee3: /* 437ee3: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437ee5: jne 0x437f08 */
  if (!zf) goto L_437f08;
L_437ee7: /* 437ee7: test byte ptr [ebp - 0x10], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff0u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437eeb: je 0x437f08 */
  if (zf) goto L_437f08;
L_437eed: /* 437eed: mov eax, esi */
  eax = esi;
/* 437eef: call 0x436743 */
  esp -= 4; W32(esp, 0x437ef4u); SPILL(); f_436743(); if (g_unwind) return; RELOAD();
/* 437ef4: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437ef7: or dword ptr [eax + 0xc], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 437efb: or dword ptr [esi + 4], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 437eff: mov esi, dword ptr [esi + 0x20] */
  esi = R32((uint32_t)(esi + 0x20u));
/* 437f02: or dword ptr [esi + 4], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 437f06: jmp 0x437e93 */
  goto L_437e93;
L_437f08: /* 437f08: fld qword ptr [ebp - 0xc] */
  { double v = F64((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* 437f0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 437f0c: fst dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0);
/* 437f0f: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 437f12: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 437f15: call 0x437cc2 */
  esp -= 4; W32(esp, 0x437f1au); SPILL(); f_437cc2(); if (g_unwind) return; RELOAD();
/* 437f1a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437f1c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 437f1d: je 0x437f4a */
  if (zf) goto L_437f4a;
L_437f1f: /* 437f1f: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437f22: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 437f24: or dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 437f27: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 437f2a: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437f2d: fstp dword ptr [eax + 0x50] */
  WF32((uint32_t)(eax + 0x50u), ST0); FPOP();
/* 437f30: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437f33: and dword ptr [eax + 0xc], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 437f37: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437f3a: and dword ptr [eax + 0xc], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 437f3e: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437f41: and dword ptr [eax + 0xc], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 437f45: jmp 0x438909 */
  goto L_438909;
L_437f4a: /* 437f4a: test dword ptr [ebp - 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 437f4d: je 0x437f52 */
  if (zf) goto L_437f52;
L_437f4f: /* 437f4f: or dword ptr [esi + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
L_437f52: /* 437f52: fld qword ptr [0x44f0a0] */
  { double v = F64((uint32_t)(0x44f0a0u)); FPUSH(v); }
/* 437f58: fchs  */
  ST0 = -ST0;
/* 437f5a: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 437f5c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 437f5e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 437f61: jp 0x437f70 */
  if (pf) goto L_437f70;
L_437f63: /* 437f63: fcom qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
/* 437f69: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 437f6b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 437f6e: jnp 0x437f88 */
  if (!pf) goto L_437f88;
L_437f70: /* 437f70: fldz  */
  FPUSH(0.0);
/* 437f72: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 437f74: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 437f76: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 437f79: jp 0x437f8b */
  if (pf) goto L_437f8b;
L_437f7b: /* 437f7b: fcom qword ptr [0x44f0a0] */
  fpu_com(ST0, F64((uint32_t)(0x44f0a0u)));
/* 437f81: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 437f83: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 437f86: jp 0x437f8b */
  if (pf) goto L_437f8b;
L_437f88: /* 437f88: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_437f8b: /* 437f8b: fld dword ptr [0x44f09c] */
  { double v = F32((uint32_t)(0x44f09cu)); FPUSH(v); }
/* 437f91: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 437f93: fld qword ptr [0x44f0a8] */
  { double v = F64((uint32_t)(0x44f0a8u)); FPUSH(v); }
/* 437f99: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 437f9b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 437f9e: jp 0x437faf */
  if (pf) goto L_437faf;
L_437fa0: /* 437fa0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 437fa2: fchs  */
  ST0 = -ST0;
/* 437fa4: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 437fa6: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 437fa8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 437faa: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 437fad: jnp 0x437fcb */
  if (!pf) goto L_437fcb;
L_437faf: /* 437faf: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 437fb1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 437fb3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 437fb6: jp 0x437fd0 */
  if (pf) goto L_437fd0;
L_437fb8: /* 437fb8: fld dword ptr [0x44f098] */
  { double v = F32((uint32_t)(0x44f098u)); FPUSH(v); }
/* 437fbe: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 437fc0: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 437fc2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 437fc4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 437fc7: jp 0x437fd0 */
  if (pf) goto L_437fd0;
L_437fc9: /* 437fc9: jmp 0x437fcd */
  goto L_437fcd;
L_437fcb: /* 437fcb: fstp st(0) */
  STI(0) = ST0; FPOP();
L_437fcd: /* 437fcd: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
L_437fd0: /* 437fd0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 437fd2: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 437fd4: jne 0x43800b */
  if (!zf) goto L_43800b;
L_437fd6: /* 437fd6: cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 437fda: je 0x43800b */
  if (zf) goto L_43800b;
L_437fdc: /* 437fdc: fld qword ptr [0x44f0b0] */
  { double v = F64((uint32_t)(0x44f0b0u)); FPUSH(v); }
/* 437fe2: mov eax, esi */
  eax = esi;
/* 437fe4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 437fe6: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 437fe9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 437feb: call 0x436743 */
  esp -= 4; W32(esp, 0x437ff0u); SPILL(); f_436743(); if (g_unwind) return; RELOAD();
/* 437ff0: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437ff3: fld qword ptr [ebp - 0xc] */
  { double v = F64((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* 437ff6: or dword ptr [eax + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 437ff9: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 437ffc: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 437fff: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 438002: or dword ptr [esi + 4], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 438006: or dword ptr [eax + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 438009: jmp 0x438044 */
  goto L_438044;
L_43800b: /* 43800b: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43800d: jne 0x438068 */
  if (!zf) goto L_438068;
L_43800f: /* 43800f: cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 438013: je 0x438068 */
  if (zf) goto L_438068;
L_438015: /* 438015: fld qword ptr [0x44f0b8] */
  { double v = F64((uint32_t)(0x44f0b8u)); FPUSH(v); }
/* 43801b: mov eax, esi */
  eax = esi;
/* 43801d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 43801f: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 438022: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 438024: call 0x436743 */
  esp -= 4; W32(esp, 0x438029u); SPILL(); f_436743(); if (g_unwind) return; RELOAD();
/* 438029: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43802c: fld qword ptr [ebp - 0xc] */
  { double v = F64((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* 43802f: or dword ptr [eax + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 438033: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 438036: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438039: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 43803c: or dword ptr [esi + 4], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 438040: or dword ptr [eax + 4], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
L_438044: /* 438044: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438047: or dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 43804a: test byte ptr [ebp - 0x10], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff0u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43804d: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438050: fstp dword ptr [eax + 0x50] */
  WF32((uint32_t)(eax + 0x50u), ST0); FPOP();
/* 438053: je 0x437e93 */
  if (zf) goto L_437e93;
L_438059: /* 438059: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43805c: or dword ptr [eax + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 43805f: or dword ptr [esi + 4], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 438063: jmp 0x437e93 */
  goto L_437e93;
L_438068: /* 438068: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43806b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 43806d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 43806f: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 438072: and eax, 0xfff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 438077: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 438078: je 0x4380aa */
  if (zf) goto L_4380aa;
L_43807a: /* 43807a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 43807b: je 0x43809d */
  if (zf) goto L_43809d;
L_43807d: /* 43807d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 43807e: je 0x438090 */
  if (zf) goto L_438090;
L_438080: /* 438080: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 438081: jne 0x4380b5 */
  if (!zf) goto L_4380b5;
L_438083: /* 438083: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 438086: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 438089: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 43808b: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 43808e: jmp 0x4380b5 */
  goto L_4380b5;
L_438090: /* 438090: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 438093: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 438096: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 438098: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 43809b: jmp 0x4380b5 */
  goto L_4380b5;
L_43809d: /* 43809d: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4380a0: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 4380a3: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4380a5: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 4380a8: jmp 0x4380b5 */
  goto L_4380b5;
L_4380aa: /* 4380aa: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4380ad: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 4380b0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4380b2: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
L_4380b5: /* 4380b5: call 0x4151e3 */
  esp -= 4; W32(esp, 0x4380bau); SPILL(); f_4151e3(); if (g_unwind) return; RELOAD();
/* 4380ba: test byte ptr [esi], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4380bd: mov ecx, eax */
  ecx = eax;
/* 4380bf: jne 0x438168 */
  if (!zf) goto L_438168;
L_4380c5: /* 4380c5: test bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4380c7: jne 0x4380dd */
  if (!zf) goto L_4380dd;
L_4380c9: /* 4380c9: cmp dword ptr [esi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4380cd: je 0x438168 */
  if (zf) goto L_438168;
L_4380d3: /* 4380d3: cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4380d7: je 0x438168 */
  if (zf) goto L_438168;
L_4380dd: /* 4380dd: mov eax, esi */
  eax = esi;
/* 4380df: call 0x436743 */
  esp -= 4; W32(esp, 0x4380e4u); SPILL(); f_436743(); if (g_unwind) return; RELOAD();
/* 4380e4: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4380e7: or dword ptr [eax + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4380ea: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4380ed: or dword ptr [esi + 4], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 4380f1: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 4380f4: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4380f7: or dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 4380fa: cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4380fe: je 0x43810a */
  if (zf) goto L_43810a;
L_438100: /* 438100: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438103: or dword ptr [eax + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 438106: or dword ptr [esi + 4], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
L_43810a: /* 43810a: xor ecx, ecx */
  ecx = 0;
/* 43810c: cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43810f: je 0x43811c */
  if (zf) goto L_43811c;
L_438111: /* 438111: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438114: or dword ptr [eax + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 438118: or dword ptr [esi + 4], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
L_43811c: /* 43811c: cmp dword ptr [esi + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43811f: je 0x4386fa */
  if (zf) goto L_4386fa;
L_438125: /* 438125: cmp dword ptr [ebp - 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 438128: je 0x4386fa */
  if (zf) goto L_4386fa;
L_43812e: /* 43812e: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 438131: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 438137: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 438139: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43813c: jne 0x438146 */
  if (!zf) goto L_438146;
L_43813e: /* 43813e: fld dword ptr [0x44f668] */
  { double v = F32((uint32_t)(0x44f668u)); FPUSH(v); }
/* 438144: jmp 0x438160 */
  goto L_438160;
L_438146: /* 438146: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 438149: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 43814f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 438151: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 438154: jp 0x4386fa */
  if (pf) goto L_4386fa;
L_43815a: /* 43815a: fld dword ptr [0x44f094] */
  { double v = F32((uint32_t)(0x44f094u)); FPUSH(v); }
L_438160: /* 438160: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 438163: jmp 0x4386fa */
  goto L_4386fa;
L_438168: /* 438168: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43816b: or dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 43816e: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 438171: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438174: je 0x43817f */
  if (zf) goto L_43817f;
L_438176: /* 438176: or dword ptr [eax + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 438179: or dword ptr [esi + 4], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 43817d: jmp 0x438183 */
  goto L_438183;
L_43817f: /* 43817f: and dword ptr [eax + 0xc], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
L_438183: /* 438183: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 438186: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438189: je 0x438195 */
  if (zf) goto L_438195;
L_43818b: /* 43818b: or dword ptr [eax + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 43818f: or dword ptr [esi + 4], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 438193: jmp 0x438199 */
  goto L_438199;
L_438195: /* 438195: and dword ptr [eax + 0xc], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
L_438199: /* 438199: test bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43819b: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43819e: je 0x4381a9 */
  if (zf) goto L_4381a9;
L_4381a0: /* 4381a0: or dword ptr [eax + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4381a3: or dword ptr [esi + 4], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 4381a7: jmp 0x4381ad */
  goto L_4381ad;
L_4381a9: /* 4381a9: and dword ptr [eax + 0xc], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
L_4381ad: /* 4381ad: cmp dword ptr [esi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4381b1: je 0x4381fe */
  if (zf) goto L_4381fe;
L_4381b3: /* 4381b3: cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4381b7: je 0x4381fe */
  if (zf) goto L_4381fe;
L_4381b9: /* 4381b9: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 4381bc: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 4381c2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4381c4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4381c7: jne 0x4381d1 */
  if (!zf) goto L_4381d1;
L_4381c9: /* 4381c9: fld dword ptr [0x44f668] */
  { double v = F32((uint32_t)(0x44f668u)); FPUSH(v); }
/* 4381cf: jmp 0x4381e7 */
  goto L_4381e7;
L_4381d1: /* 4381d1: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 4381d4: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 4381da: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4381dc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4381df: jp 0x4381ea */
  if (pf) goto L_4381ea;
L_4381e1: /* 4381e1: fld dword ptr [0x44f094] */
  { double v = F32((uint32_t)(0x44f094u)); FPUSH(v); }
L_4381e7: /* 4381e7: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
L_4381ea: /* 4381ea: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4381ed: or dword ptr [eax + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4381f0: or dword ptr [esi + 4], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 4381f4: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4381f7: or dword ptr [eax + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4381fa: or dword ptr [esi + 4], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
L_4381fe: /* 4381fe: test cl, 8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 438201: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 438204: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438207: fstp dword ptr [eax + 0x50] */
  WF32((uint32_t)(eax + 0x50u), ST0); FPOP();
/* 43820a: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43820d: je 0x43899e */
  if (zf) goto L_43899e;
L_438213: /* 438213: or dword ptr [eax + 0xc], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 438217: or dword ptr [esi + 4], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
L_43821b: /* 43821b: mov esi, dword ptr [esi + 0x20] */
  esi = R32((uint32_t)(esi + 0x20u));
/* 43821e: and dword ptr [esi + 0xc], 0xffffffef */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0xcu), r);
  }
L_438222: /* 438222: xor eax, eax */
  eax = 0;
L_438224: /* 438224: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 438225: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 438226: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 438227: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 438228: ret  */
  esp += 4; SPILL(); return;
L_438229: /* 438229: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43822c: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 43822f: or dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 438232: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 438233: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 438236: call 0x437cc2 */
  esp -= 4; W32(esp, 0x43823bu); SPILL(); f_437cc2(); if (g_unwind) return; RELOAD();
/* 43823b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43823d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43823e: je 0x438260 */
  if (zf) goto L_438260;
L_438240: /* 438240: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 438243: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 438244: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 438247: call 0x437cc2 */
  esp -= 4; W32(esp, 0x43824cu); SPILL(); f_437cc2(); if (g_unwind) return; RELOAD();
/* 43824c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43824e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43824f: je 0x438260 */
  if (zf) goto L_438260;
L_438251: /* 438251: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 438254: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 438257: or byte ptr [ebp + 0xa], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xau))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xau), r);
  }
/* 43825b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 43825e: jmp 0x438269 */
  goto L_438269;
L_438260: /* 438260: fld qword ptr [ebp - 0xc] */
  { double v = F64((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* 438263: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 438266: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_438269: /* 438269: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43826c: fstp dword ptr [eax + 0x50] */
  WF32((uint32_t)(eax + 0x50u), ST0); FPOP();
/* 43826f: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438272: and dword ptr [eax + 0xc], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 438276: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438279: and dword ptr [eax + 0xc], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 43827d: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438280: and dword ptr [eax + 0xc], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 438284: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438287: and dword ptr [eax + 0xc], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 43828b: test byte ptr [ebp - 0x10], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff0u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
L_43828f: /* 43828f: je 0x43821b */
  if (zf) goto L_43821b;
L_438291: /* 438291: jmp 0x438910 */
  goto L_438910;
L_438296: /* 438296: cmp dword ptr [esi + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43829a: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 43829d: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 4382a0: fld dword ptr [edx + 0x30] */
  { double v = F32((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* 4382a3: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 4382a6: je 0x4382e6 */
  if (zf) goto L_4382e6;
L_4382a8: /* 4382a8: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4382ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4382ac: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4382af: call 0x436729 */
  esp -= 4; W32(esp, 0x4382b4u); SPILL(); f_436729(); if (g_unwind) return; RELOAD();
/* 4382b4: fld dword ptr [0x43e0f4] */
  { double v = F32((uint32_t)(0x43e0f4u)); FPUSH(v); }
/* 4382ba: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4382bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4382bf: je 0x4382c9 */
  if (zf) goto L_4382c9;
L_4382c1: /* 4382c1: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4382c4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4382c6: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
L_4382c9: /* 4382c9: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 4382cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4382cd: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4382d0: call 0x436729 */
  esp -= 4; W32(esp, 0x4382d5u); SPILL(); f_436729(); if (g_unwind) return; RELOAD();
/* 4382d5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4382d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4382da: je 0x4382e4 */
  if (zf) goto L_4382e4;
L_4382dc: /* 4382dc: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 4382df: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4382e1: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
L_4382e4: /* 4382e4: fstp st(0) */
  STI(0) = ST0; FPOP();
L_4382e6: /* 4382e6: mov edi, dword ptr [esi + 0x18] */
  edi = R32((uint32_t)(esi + 0x18u));
/* 4382e9: and ecx, 0xfffe00ff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe00ffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4382ef: xor ebx, ebx */
  ebx = 0;
/* 4382f1: and edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 4382f4: or ecx, 0xe0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4382fa: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4382fb: cmp edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4382fe: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 438300: ja 0x43834a */
  if ((!cf && !zf)) goto L_43834a;
L_438302: /* 438302: movzx eax, byte ptr [edi + 0x438b84] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x438b84u)));
/* 438309: jmp dword ptr [eax*4 + 0x438b7c] */
  switch (R32((uint32_t)(eax*4 + 0x438b7cu))) {
    case 0x438310u: goto L_438310;
    case 0x4383dau: goto L_4383da;
    default: guest_badjump(0x438309, R32((uint32_t)(eax*4 + 0x438b7cu))); return;
  }
L_438310: /* 438310: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 438313: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 438314: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 438317: call 0x437ca1 */
  esp -= 4; W32(esp, 0x43831cu); SPILL(); f_437ca1(); if (g_unwind) return; RELOAD();
/* 43831c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 43831f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 438321: jne 0x43833b */
  if (!zf) goto L_43833b;
L_438323: /* 438323: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 438326: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 438327: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 43832a: call 0x437ca1 */
  esp -= 4; W32(esp, 0x43832fu); SPILL(); f_437ca1(); if (g_unwind) return; RELOAD();
/* 43832f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 438332: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 438334: jne 0x43833b */
  if (!zf) goto L_43833b;
L_438336: /* 438336: and dword ptr [ebp - 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 438339: jmp 0x43833e */
  goto L_43833e;
L_43833b: /* 43833b: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
L_43833e: /* 43833e: call 0x4151e3 */
  esp -= 4; W32(esp, 0x438343u); SPILL(); f_4151e3(); if (g_unwind) return; RELOAD();
/* 438343: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 438345: je 0x43834a */
  if (zf) goto L_43834a;
L_438347: /* 438347: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
L_43834a: /* 43834a: xor edx, edx */
  edx = 0;
/* 43834c: cmp dword ptr [ebp - 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43834f: je 0x438359 */
  if (zf) goto L_438359;
L_438351: /* 438351: test byte ptr [esi], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 438353: je 0x437e7b */
  if (zf) goto L_437e7b;
L_438359: /* 438359: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 43835c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43835d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 438360: call 0x437cc2 */
  esp -= 4; W32(esp, 0x438365u); SPILL(); f_437cc2(); if (g_unwind) return; RELOAD();
/* 438365: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 438367: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 438368: jne 0x438462 */
  if (!zf) goto L_438462;
L_43836e: /* 43836e: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 438371: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 438372: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 438375: call 0x437cc2 */
  esp -= 4; W32(esp, 0x43837au); SPILL(); f_437cc2(); if (g_unwind) return; RELOAD();
/* 43837a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43837c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43837d: jne 0x438462 */
  if (!zf) goto L_438462;
L_438383: /* 438383: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 438386: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 438387: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 43838a: call 0x436729 */
  esp -= 4; W32(esp, 0x43838fu); SPILL(); f_436729(); if (g_unwind) return; RELOAD();
/* 43838f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 438392: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 438394: jne 0x4383a9 */
  if (!zf) goto L_4383a9;
L_438396: /* 438396: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 438399: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43839a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 43839d: call 0x436729 */
  esp -= 4; W32(esp, 0x4383a2u); SPILL(); f_436729(); if (g_unwind) return; RELOAD();
/* 4383a2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4383a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4383a7: je 0x4383b6 */
  if (zf) goto L_4383b6;
L_4383a9: /* 4383a9: or dword ptr [esi + 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 4383ad: test byte ptr [esi], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4383b0: je 0x438aa2 */
  if (zf) goto L_438aa2;
L_4383b6: /* 4383b6: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4383b9: fcomp dword ptr [ebp - 4] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xfffffffcu)));
  FPOP();
/* 4383bc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4383be: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4383c1: jp 0x43840e */
  if (pf) goto L_43840e;
L_4383c3: /* 4383c3: cmp edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4383c6: ja 0x43844e */
  if ((!cf && !zf)) goto L_43844e;
L_4383cc: /* 4383cc: movzx eax, byte ptr [edi + 0x438b94] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x438b94u)));
/* 4383d3: jmp dword ptr [eax*4 + 0x438b8c] */
  switch (R32((uint32_t)(eax*4 + 0x438b8cu))) {
    case 0x438425u: goto L_438425;
    case 0x43844bu: goto L_43844b;
    default: guest_badjump(0x4383d3, R32((uint32_t)(eax*4 + 0x438b8cu))); return;
  }
L_4383da: /* 4383da: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4383dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4383de: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4383e1: call 0x437cc2 */
  esp -= 4; W32(esp, 0x4383e6u); SPILL(); f_437cc2(); if (g_unwind) return; RELOAD();
/* 4383e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4383e8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4383e9: jne 0x438347 */
  if (!zf) goto L_438347;
L_4383ef: /* 4383ef: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 4383f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4383f3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4383f6: call 0x437cc2 */
  esp -= 4; W32(esp, 0x4383fbu); SPILL(); f_437cc2(); if (g_unwind) return; RELOAD();
/* 4383fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4383fd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4383fe: jne 0x438347 */
  if (!zf) goto L_438347;
L_438404: /* 438404: and dword ptr [ebp - 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 438407: xor edx, edx */
  edx = 0;
/* 438409: jmp 0x438359 */
  goto L_438359;
L_43840e: /* 43840e: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 438411: fcomp dword ptr [ebp - 4] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xfffffffcu)));
  FPOP();
/* 438414: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 438416: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 438419: jne 0x43842b */
  if (!zf) goto L_43842b;
L_43841b: /* 43841b: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 43841e: jbe 0x43844b */
  if ((cf | zf)) goto L_43844b;
L_438420: /* 438420: cmp edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 438423: ja 0x43844e */
  if ((!cf && !zf)) goto L_43844e;
L_438425: /* 438425: or dword ptr [ebp + 8], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 438429: jmp 0x43844e */
  goto L_43844e;
L_43842b: /* 43842b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 43842e: fcomp dword ptr [ebp - 4] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xfffffffcu)));
  FPOP();
/* 438431: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 438433: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 438436: jp 0x43844e */
  if (pf) goto L_43844e;
L_438438: /* 438438: cmp edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 43843b: ja 0x43844e */
  if ((!cf && !zf)) goto L_43844e;
L_43843d: /* 43843d: movzx eax, byte ptr [edi + 0x438ba4] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x438ba4u)));
/* 438444: jmp dword ptr [eax*4 + 0x438b9c] */
  switch (R32((uint32_t)(eax*4 + 0x438b9cu))) {
    case 0x438425u: goto L_438425;
    case 0x43844bu: goto L_43844b;
    default: guest_badjump(0x438444, R32((uint32_t)(eax*4 + 0x438b9cu))); return;
  }
L_43844b: /* 43844b: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
L_43844e: /* 43844e: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438451: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 438454: or dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 438457: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43845a: fstp dword ptr [eax + 0x50] */
  WF32((uint32_t)(eax + 0x50u), ST0); FPOP();
/* 43845d: jmp 0x438986 */
  goto L_438986;
L_438462: /* 438462: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 438465: jbe 0x438471 */
  if ((cf | zf)) goto L_438471;
L_438467: /* 438467: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 43846a: jbe 0x4384a7 */
  if ((cf | zf)) goto L_4384a7;
L_43846c: /* 43846c: cmp edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43846f: jne 0x438474 */
  if (!zf) goto L_438474;
L_438471: /* 438471: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
L_438474: /* 438474: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438477: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 43847a: or dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 43847d: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438480: fstp dword ptr [eax + 0x50] */
  WF32((uint32_t)(eax + 0x50u), ST0); FPOP();
/* 438483: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438486: and dword ptr [eax + 0xc], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 43848a: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43848d: and dword ptr [eax + 0xc], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 438491: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438494: and dword ptr [eax + 0xc], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 438498: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43849b: and dword ptr [eax + 0xc], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 43849f: cmp dword ptr [ebp - 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4384a2: jmp 0x43828f */
  goto L_43828f;
L_4384a7: /* 4384a7: or dword ptr [ebp + 8], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 4384ab: jmp 0x438474 */
  goto L_438474;
L_4384ad: /* 4384ad: cmp dword ptr [esi + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4384b1: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 4384b4: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 4384b7: fld dword ptr [edx + 0x30] */
  { double v = F32((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* 4384ba: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 4384bd: je 0x4384fd */
  if (zf) goto L_4384fd;
L_4384bf: /* 4384bf: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4384c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4384c3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4384c6: call 0x436729 */
  esp -= 4; W32(esp, 0x4384cbu); SPILL(); f_436729(); if (g_unwind) return; RELOAD();
/* 4384cb: fld dword ptr [0x43e0f4] */
  { double v = F32((uint32_t)(0x43e0f4u)); FPUSH(v); }
/* 4384d1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4384d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4384d6: je 0x4384e0 */
  if (zf) goto L_4384e0;
L_4384d8: /* 4384d8: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4384db: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4384dd: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
L_4384e0: /* 4384e0: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 4384e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4384e4: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4384e7: call 0x436729 */
  esp -= 4; W32(esp, 0x4384ecu); SPILL(); f_436729(); if (g_unwind) return; RELOAD();
/* 4384ec: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4384ef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4384f1: je 0x4384fb */
  if (zf) goto L_4384fb;
L_4384f3: /* 4384f3: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 4384f6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4384f8: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
L_4384fb: /* 4384fb: fstp st(0) */
  STI(0) = ST0; FPOP();
L_4384fd: /* 4384fd: mov eax, ebx */
  eax = ebx;
/* 4384ff: sub eax, 0x3b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 438502: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 438504: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 438505: je 0x438543 */
  if (zf) goto L_438543;
L_438507: /* 438507: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 438508: jne 0x438569 */
  if (!zf) goto L_438569;
L_43850a: /* 43850a: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 43850d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43850e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 438511: call 0x437ca1 */
  esp -= 4; W32(esp, 0x438516u); SPILL(); f_437ca1(); if (g_unwind) return; RELOAD();
/* 438516: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 438519: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43851b: jne 0x438534 */
  if (!zf) goto L_438534;
L_43851d: /* 43851d: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 438520: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 438521: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 438524: call 0x437ca1 */
  esp -= 4; W32(esp, 0x438529u); SPILL(); f_437ca1(); if (g_unwind) return; RELOAD();
/* 438529: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 43852c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43852e: jne 0x438534 */
  if (!zf) goto L_438534;
L_438530: /* 438530: xor edi, edi */
  edi = 0;
/* 438532: jmp 0x438536 */
  goto L_438536;
L_438534: /* 438534: mov edi, ebx */
  edi = ebx;
L_438536: /* 438536: call 0x4151e3 */
  esp -= 4; W32(esp, 0x43853bu); SPILL(); f_4151e3(); if (g_unwind) return; RELOAD();
/* 43853b: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43853d: je 0x43856c */
  if (zf) goto L_43856c;
L_43853f: /* 43853f: mov edi, ebx */
  edi = ebx;
/* 438541: jmp 0x43856c */
  goto L_43856c;
L_438543: /* 438543: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 438546: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 438547: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 43854a: call 0x437cc2 */
  esp -= 4; W32(esp, 0x43854fu); SPILL(); f_437cc2(); if (g_unwind) return; RELOAD();
/* 43854f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 438551: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 438552: jne 0x43853f */
  if (!zf) goto L_43853f;
L_438554: /* 438554: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 438557: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 438558: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 43855b: call 0x437cc2 */
  esp -= 4; W32(esp, 0x438560u); SPILL(); f_437cc2(); if (g_unwind) return; RELOAD();
/* 438560: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 438562: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 438563: jne 0x43853f */
  if (!zf) goto L_43853f;
L_438565: /* 438565: xor edi, edi */
  edi = 0;
/* 438567: jmp 0x43856c */
  goto L_43856c;
L_438569: /* 438569: mov edi, dword ptr [ebp - 0x10] */
  edi = R32((uint32_t)(ebp + 0xfffffff0u));
L_43856c: /* 43856c: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43856f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 438571: and ecx, 0xfffe00ff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe00ffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 438577: or ecx, 0xe0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 43857d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43857f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 438581: je 0x43858b */
  if (zf) goto L_43858b;
L_438583: /* 438583: test byte ptr [esi], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 438585: je 0x437e7b */
  if (zf) goto L_437e7b;
L_43858b: /* 43858b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 43858e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43858f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 438592: call 0x437cc2 */
  esp -= 4; W32(esp, 0x438597u); SPILL(); f_437cc2(); if (g_unwind) return; RELOAD();
/* 438597: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 438599: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43859a: jne 0x43863d */
  if (!zf) goto L_43863d;
L_4385a0: /* 4385a0: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 4385a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4385a4: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4385a7: call 0x437cc2 */
  esp -= 4; W32(esp, 0x4385acu); SPILL(); f_437cc2(); if (g_unwind) return; RELOAD();
/* 4385ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4385ae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4385af: jne 0x43863d */
  if (!zf) goto L_43863d;
L_4385b5: /* 4385b5: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4385b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4385b9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4385bc: call 0x436729 */
  esp -= 4; W32(esp, 0x4385c1u); SPILL(); f_436729(); if (g_unwind) return; RELOAD();
/* 4385c1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4385c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4385c6: jne 0x4385db */
  if (!zf) goto L_4385db;
L_4385c8: /* 4385c8: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 4385cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4385cc: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4385cf: call 0x436729 */
  esp -= 4; W32(esp, 0x4385d4u); SPILL(); f_436729(); if (g_unwind) return; RELOAD();
/* 4385d4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4385d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4385d9: je 0x4385e8 */
  if (zf) goto L_4385e8;
L_4385db: /* 4385db: or dword ptr [esi + 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 4385df: test byte ptr [esi], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4385e2: je 0x438aa2 */
  if (zf) goto L_438aa2;
L_4385e8: /* 4385e8: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4385eb: fcomp dword ptr [ebp - 4] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xfffffffcu)));
  FPOP();
/* 4385ee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4385f0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4385f3: jne 0x438600 */
  if (!zf) goto L_438600;
L_4385f5: /* 4385f5: and word ptr [esi + 0x1c], 0xf72a */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x1cu))); uint16_t b = (uint16_t)(0xf72au);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(esi + 0x1cu), r);
  }
/* 4385fb: jmp 0x438986 */
  goto L_438986;
L_438600: /* 438600: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 438603: fcomp dword ptr [ebp - 4] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xfffffffcu)));
  FPOP();
/* 438606: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 438608: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 43860b: jp 0x438619 */
  if (pf) goto L_438619;
L_43860d: /* 43860d: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 438610: and eax, 0xfffff72b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffff72bu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 438615: or eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 438617: jmp 0x438635 */
  goto L_438635;
L_438619: /* 438619: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 43861c: fcomp dword ptr [ebp - 4] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xfffffffcu)));
  FPOP();
/* 43861f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 438621: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 438624: jp 0x438986 */
  if (pf) goto L_438986;
L_43862a: /* 43862a: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 43862d: and eax, 0xfffff76a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffff76au);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 438632: or eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_438635: /* 438635: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 438638: jmp 0x438986 */
  goto L_438986;
L_43863d: /* 43863d: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 438640: and eax, 0xfffff76f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffff76fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 438645: or eax, 0x45 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x45u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 438648: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 43864b: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43864e: and dword ptr [eax + 0xc], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 438652: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438655: and dword ptr [eax + 0xc], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 438659: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43865c: and dword ptr [eax + 0xc], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 438660: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438663: and dword ptr [eax + 0xc], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 438667: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 438669: jmp 0x43828f */
  goto L_43828f;
L_43866e: /* 43866e: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 438671: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 438674: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 438677: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 43867a: mov edi, 0x100 */
  edi = 0x100u;
/* 43867f: je 0x43869c */
  if (zf) goto L_43869c;
L_438681: /* 438681: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 438682: je 0x438698 */
  if (zf) goto L_438698;
L_438684: /* 438684: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 438685: je 0x438691 */
  if (zf) goto L_438691;
L_438687: /* 438687: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 438688: jne 0x4386a0 */
  if (!zf) goto L_4386a0;
L_43868a: /* 43868a: mov eax, 0x300 */
  eax = 0x300u;
/* 43868f: jmp 0x4386a3 */
  goto L_4386a3;
L_438691: /* 438691: mov eax, 0x200 */
  eax = 0x200u;
/* 438696: jmp 0x4386a3 */
  goto L_4386a3;
L_438698: /* 438698: mov eax, edi */
  eax = edi;
/* 43869a: jmp 0x4386a3 */
  goto L_4386a3;
L_43869c: /* 43869c: xor eax, eax */
  eax = 0;
/* 43869e: jmp 0x4386a3 */
  goto L_4386a3;
L_4386a0: /* 4386a0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_4386a3: /* 4386a3: or eax, 0xa001f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa001fu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4386a8: push 0xb031f */
  { uint32_t v = 0xb031fu; esp -= 4; W32(esp, v); }
/* 4386ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4386ae: call 0x404d40 */
  esp -= 4; W32(esp, 0x4386b3u); SPILL(); f_404d40(); if (g_unwind) return; RELOAD();
/* 4386b3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4386b4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4386b5: fnclex  */
  FSW_CC = 0;
/* 4386b7: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4386ba: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 4386bd: call 0x4151e3 */
  esp -= 4; W32(esp, 0x4386c2u); SPILL(); f_4151e3(); if (g_unwind) return; RELOAD();
/* 4386c2: xor ebx, ebx */
  ebx = 0;
/* 4386c4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4386c5: test byte ptr [esi], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4386c8: jne 0x438708 */
  if (!zf) goto L_438708;
L_4386ca: /* 4386ca: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4386cc: je 0x438708 */
  if (zf) goto L_438708;
L_4386ce: /* 4386ce: mov eax, esi */
  eax = esi;
/* 4386d0: call 0x436743 */
  esp -= 4; W32(esp, 0x4386d5u); SPILL(); f_436743(); if (g_unwind) return; RELOAD();
/* 4386d5: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4386d8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4386da: and ecx, 0xfffe011f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe011fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4386e0: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4386e2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4386e4: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4386e7: or dword ptr [eax + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4386ea: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4386ed: or dword ptr [esi + 4], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 4386f1: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 4386f4: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4386f7: or dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
L_4386fa: /* 4386fa: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4386fd: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 438700: fstp dword ptr [eax + 0x50] */
  WF32((uint32_t)(eax + 0x50u), ST0); FPOP();
/* 438703: jmp 0x437e93 */
  goto L_437e93;
L_438708: /* 438708: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 43870b: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 43870e: or dword ptr [ecx + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0x60u), r);
  }
/* 438711: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 438714: fstp dword ptr [ecx + 0x50] */
  WF32((uint32_t)(ecx + 0x50u), ST0); FPOP();
/* 438717: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 438719: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43871c: je 0x438989 */
  if (zf) goto L_438989;
L_438722: /* 438722: or dword ptr [eax + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 438725: or dword ptr [esi + 4], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 438729: jmp 0x43898d */
  goto L_43898d;
L_43872e: /* 43872e: cmp dword ptr [esi + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 438732: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 438735: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 438738: je 0x438759 */
  if (zf) goto L_438759;
L_43873a: /* 43873a: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 43873d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43873e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 438741: call 0x436729 */
  esp -= 4; W32(esp, 0x438746u); SPILL(); f_436729(); if (g_unwind) return; RELOAD();
/* 438746: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 438749: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43874b: je 0x438759 */
  if (zf) goto L_438759;
L_43874d: /* 43874d: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 438750: fmul dword ptr [0x43e0f4] */
  ST0 = ST0 * (F32((uint32_t)(0x43e0f4u)));
/* 438756: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
L_438759: /* 438759: cmp ebx, 0x3f */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 43875c: mov edi, 0x100 */
  edi = 0x100u;
/* 438761: jb 0x438785 */
  if (cf) goto L_438785;
L_438763: /* 438763: cmp ebx, 0x40 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 438766: jbe 0x43877b */
  if ((cf | zf)) goto L_43877b;
L_438768: /* 438768: cmp ebx, 0x42 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x42u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 43876b: ja 0x438785 */
  if ((!cf && !zf)) goto L_438785;
L_43876d: /* 43876d: and ecx, 0xfffe055f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe055fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 438773: or ecx, 0x540 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x540u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 438779: jmp 0x438783 */
  goto L_438783;
L_43877b: /* 43877b: and ecx, 0xfffe011f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe011fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 438781: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_438783: /* 438783: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_438785: /* 438785: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438788: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 43878a: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 43878d: and eax, 0xfff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 438792: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 438795: je 0x4387a3 */
  if (zf) goto L_4387a3;
L_438797: /* 438797: cmp eax, 0x2a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_43879a: /* 43879a: jne 0x4387c3 */
  if (!zf) goto L_4387c3;
L_43879c: /* 43879c: mov eax, 0x300 */
  eax = 0x300u;
/* 4387a1: jmp 0x4387c6 */
  goto L_4387c6;
L_4387a3: /* 4387a3: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 4387a6: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 4387a9: je 0x4387bf */
  if (zf) goto L_4387bf;
L_4387ab: /* 4387ab: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4387ac: je 0x4387bb */
  if (zf) goto L_4387bb;
L_4387ae: /* 4387ae: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4387af: je 0x4387b4 */
  if (zf) goto L_4387b4;
L_4387b1: /* 4387b1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4387b2: jmp 0x43879a */
  goto L_43879a;
L_4387b4: /* 4387b4: mov eax, 0x200 */
  eax = 0x200u;
/* 4387b9: jmp 0x4387c6 */
  goto L_4387c6;
L_4387bb: /* 4387bb: mov eax, edi */
  eax = edi;
/* 4387bd: jmp 0x4387c6 */
  goto L_4387c6;
L_4387bf: /* 4387bf: xor eax, eax */
  eax = 0;
/* 4387c1: jmp 0x4387c6 */
  goto L_4387c6;
L_4387c3: /* 4387c3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_4387c6: /* 4387c6: or eax, 0xa001f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa001fu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4387cb: push 0xb031f */
  { uint32_t v = 0xb031fu; esp -= 4; W32(esp, v); }
/* 4387d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4387d1: call 0x404d40 */
  esp -= 4; W32(esp, 0x4387d6u); SPILL(); f_404d40(); if (g_unwind) return; RELOAD();
/* 4387d6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4387d7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4387d8: fnclex  */
  FSW_CC = 0;
/* 4387da: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4387dd: fistp dword ptr [ebp - 0x18] */
  W32((uint32_t)(ebp + 0xffffffe8u), (uint32_t)fpu_toint32(ST0)); FPOP();
/* 4387e0: call 0x4151e3 */
  esp -= 4; W32(esp, 0x4387e5u); SPILL(); f_4151e3(); if (g_unwind) return; RELOAD();
/* 4387e5: xor ebx, ebx */
  ebx = 0;
/* 4387e7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4387e8: test byte ptr [esi], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4387ea: jne 0x4387f4 */
  if (!zf) goto L_4387f4;
L_4387ec: /* 4387ec: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4387ee: jne 0x437e7b */
  if (!zf) goto L_437e7b;
L_4387f4: /* 4387f4: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 4387f7: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 4387fa: mov dword ptr [ecx + 0x50], edx */
  W32((uint32_t)(ecx + 0x50u), edx);
/* 4387fd: test byte ptr [esi], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 438800: jne 0x43880a */
  if (!zf) goto L_43880a;
L_438802: /* 438802: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 438804: jne 0x438ac0 */
  if (!zf) goto L_438ac0;
L_43880a: /* 43880a: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 43880d: or dword ptr [ecx + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0x60u), r);
  }
/* 438810: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 438812: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 438815: je 0x438820 */
  if (zf) goto L_438820;
L_438817: /* 438817: or dword ptr [ecx + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 43881a: or dword ptr [esi + 4], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 43881e: jmp 0x438824 */
  goto L_438824;
L_438820: /* 438820: and dword ptr [ecx + 0xc], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
L_438824: /* 438824: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 438827: and dword ptr [ecx + 0xc], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 43882b: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 43882e: and dword ptr [ecx + 0xc], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 438832: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 438835: and dword ptr [ecx + 0xc], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 438839: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43883b: jmp 0x43828f */
  goto L_43828f;
L_438840: /* 438840: cmp dword ptr [esi + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 438844: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 438847: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 43884a: fld dword ptr [edx + 0x30] */
  { double v = F32((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* 43884d: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 438850: je 0x43888d */
  if (zf) goto L_43888d;
L_438852: /* 438852: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 438855: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 438856: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 438859: call 0x436729 */
  esp -= 4; W32(esp, 0x43885eu); SPILL(); f_436729(); if (g_unwind) return; RELOAD();
/* 43885e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 438861: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 438863: je 0x438871 */
  if (zf) goto L_438871;
L_438865: /* 438865: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 438868: fmul dword ptr [0x43e0f4] */
  ST0 = ST0 * (F32((uint32_t)(0x43e0f4u)));
/* 43886e: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
L_438871: /* 438871: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 438874: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 438875: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 438878: call 0x436729 */
  esp -= 4; W32(esp, 0x43887du); SPILL(); f_436729(); if (g_unwind) return; RELOAD();
/* 43887d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 438880: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 438882: je 0x438890 */
  if (zf) goto L_438890;
L_438884: /* 438884: fmul dword ptr [0x43e0f4] */
  ST0 = ST0 * (F32((uint32_t)(0x43e0f4u)));
/* 43888a: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
L_43888d: /* 43888d: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
L_438890: /* 438890: cmp ebx, 0x35 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x35u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 438893: jb 0x4388bb */
  if (cf) goto L_4388bb;
L_438895: /* 438895: cmp ebx, 0x36 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x36u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 438898: jbe 0x4388ad */
  if ((cf | zf)) goto L_4388ad;
L_43889a: /* 43889a: cmp ebx, 0x38 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 43889d: ja 0x4388bb */
  if ((!cf && !zf)) goto L_4388bb;
L_43889f: /* 43889f: and ecx, 0xfffe051f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe051fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4388a5: or ecx, 0x500 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x500u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4388ab: jmp 0x4388b9 */
  goto L_4388b9;
L_4388ad: /* 4388ad: and ecx, 0xfffe053f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe053fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4388b3: or ecx, 0x520 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x520u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_4388b9: /* 4388b9: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_4388bb: /* 4388bb: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4388be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4388bf: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4388c2: call 0x437cc2 */
  esp -= 4; W32(esp, 0x4388c7u); SPILL(); f_437cc2(); if (g_unwind) return; RELOAD();
/* 4388c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4388c9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4388ca: jne 0x4388da */
  if (!zf) goto L_4388da;
L_4388cc: /* 4388cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4388cd: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4388d0: call 0x437cc2 */
  esp -= 4; W32(esp, 0x4388d5u); SPILL(); f_437cc2(); if (g_unwind) return; RELOAD();
/* 4388d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4388d7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4388d8: je 0x43891f */
  if (zf) goto L_43891f;
L_4388da: /* 4388da: xor ebx, ebx */
  ebx = 0;
/* 4388dc: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4388dd: test byte ptr [esi], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4388df: jne 0x4388e8 */
  if (!zf) goto L_4388e8;
L_4388e1: /* 4388e1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4388e3: jmp 0x437e7b */
  goto L_437e7b;
L_4388e8: /* 4388e8: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4388eb: or dword ptr [eax + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 4388ee: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4388f1: fstp dword ptr [eax + 0x50] */
  WF32((uint32_t)(eax + 0x50u), ST0); FPOP();
/* 4388f4: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4388f7: and dword ptr [eax + 0xc], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4388fb: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4388fe: and dword ptr [eax + 0xc], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 438902: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438905: and dword ptr [eax + 0xc], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
L_438909: /* 438909: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 43890c: and dword ptr [eax + 0xc], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
L_438910: /* 438910: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438913: or dword ptr [eax + 0xc], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 438917: or dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 43891a: jmp 0x438222 */
  goto L_438222;
L_43891f: /* 43891f: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 438922: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 438923: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 438926: call 0x436729 */
  esp -= 4; W32(esp, 0x43892bu); SPILL(); f_436729(); if (g_unwind) return; RELOAD();
/* 43892b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 43892e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 438930: jne 0x438942 */
  if (!zf) goto L_438942;
L_438932: /* 438932: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 438933: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 438936: call 0x436729 */
  esp -= 4; W32(esp, 0x43893bu); SPILL(); f_436729(); if (g_unwind) return; RELOAD();
/* 43893b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 43893e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 438940: je 0x43895c */
  if (zf) goto L_43895c;
L_438942: /* 438942: or dword ptr [esi + 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 438946: test byte ptr [esi], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 438949: jne 0x43895c */
  if (!zf) goto L_43895c;
L_43894b: /* 43894b: mov eax, esi */
  eax = esi;
/* 43894d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 43894f: call 0x436743 */
  esp -= 4; W32(esp, 0x438954u); SPILL(); f_436743(); if (g_unwind) return; RELOAD();
/* 438954: xor eax, eax */
  eax = 0;
/* 438956: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 438957: jmp 0x438224 */
  goto L_438224;
L_43895c: /* 43895c: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 43895f: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 438961: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 438963: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 438966: jp 0x4389ab */
  if (pf) goto L_4389ab;
L_438968: /* 438968: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 43896b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 43896d: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 438970: and eax, 0xfff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 438975: sub eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 438978: je 0x4389a7 */
  if (zf) goto L_4389a7;
L_43897a: /* 43897a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 43897b: je 0x4389d1 */
  if (zf) goto L_4389d1;
L_43897d: /* 43897d: fstp st(0) */
  STI(0) = ST0; FPOP();
L_43897f: /* 43897f: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438982: or dword ptr [eax + 0x60], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x60u), r);
  }
L_438986: /* 438986: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
L_438989: /* 438989: and dword ptr [eax + 0xc], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
L_43898d: /* 43898d: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438990: and dword ptr [eax + 0xc], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 438994: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438997: and dword ptr [eax + 0xc], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 43899b: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
L_43899e: /* 43899e: and dword ptr [eax + 0xc], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 4389a2: jmp 0x43821b */
  goto L_43821b;
L_4389a7: /* 4389a7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4389a9: jmp 0x4389ce */
  goto L_4389ce;
L_4389ab: /* 4389ab: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4389ae: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4389b0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4389b2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4389b5: jne 0x4389d6 */
  if (!zf) goto L_4389d6;
L_4389b7: /* 4389b7: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 4389ba: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4389bc: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4389bf: and eax, 0xfff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4389c4: sub eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 4389c7: je 0x4389d1 */
  if (zf) goto L_4389d1;
L_4389c9: /* 4389c9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4389ca: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4389cc: jne 0x43897f */
  if (!zf) goto L_43897f;
L_4389ce: /* 4389ce: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_4389d1: /* 4389d1: fstp dword ptr [ecx + 0x50] */
  WF32((uint32_t)(ecx + 0x50u), ST0); FPOP();
/* 4389d4: jmp 0x43897f */
  goto L_43897f;
L_4389d6: /* 4389d6: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4389d9: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4389db: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4389dd: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4389e0: jp 0x43897d */
  if (pf) goto L_43897d;
L_4389e2: /* 4389e2: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4389e5: fstp dword ptr [eax + 0x50] */
  WF32((uint32_t)(eax + 0x50u), ST0); FPOP();
/* 4389e8: jmp 0x43897f */
  goto L_43897f;
L_4389ea: /* 4389ea: cmp dword ptr [esi + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4389ee: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 4389f1: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 4389f4: je 0x438a15 */
  if (zf) goto L_438a15;
L_4389f6: /* 4389f6: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4389f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4389fa: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4389fd: call 0x436729 */
  esp -= 4; W32(esp, 0x438a02u); SPILL(); f_436729(); if (g_unwind) return; RELOAD();
/* 438a02: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 438a05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 438a07: je 0x438a15 */
  if (zf) goto L_438a15;
L_438a09: /* 438a09: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 438a0c: fmul dword ptr [0x43e0f4] */
  ST0 = ST0 * (F32((uint32_t)(0x43e0f4u)));
/* 438a12: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
L_438a15: /* 438a15: and ecx, 0xfffe00bf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffe00bfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 438a1b: or ecx, 0xa0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 438a21: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 438a23: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 438a26: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 438a29: je 0x438a49 */
  if (zf) goto L_438a49;
L_438a2b: /* 438a2b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 438a2c: je 0x438a42 */
  if (zf) goto L_438a42;
L_438a2e: /* 438a2e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 438a2f: je 0x438a3b */
  if (zf) goto L_438a3b;
L_438a31: /* 438a31: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 438a32: jne 0x438a4d */
  if (!zf) goto L_438a4d;
L_438a34: /* 438a34: mov eax, 0x300 */
  eax = 0x300u;
/* 438a39: jmp 0x438a50 */
  goto L_438a50;
L_438a3b: /* 438a3b: mov eax, 0x200 */
  eax = 0x200u;
/* 438a40: jmp 0x438a50 */
  goto L_438a50;
L_438a42: /* 438a42: mov eax, 0x100 */
  eax = 0x100u;
/* 438a47: jmp 0x438a50 */
  goto L_438a50;
L_438a49: /* 438a49: xor eax, eax */
  eax = 0;
/* 438a4b: jmp 0x438a50 */
  goto L_438a50;
L_438a4d: /* 438a4d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_438a50: /* 438a50: or eax, 0xa001f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa001fu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 438a55: push 0xb031f */
  { uint32_t v = 0xb031fu; esp -= 4; W32(esp, v); }
/* 438a5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 438a5b: call 0x404d40 */
  esp -= 4; W32(esp, 0x438a60u); SPILL(); f_404d40(); if (g_unwind) return; RELOAD();
/* 438a60: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 438a61: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 438a62: fnclex  */
  FSW_CC = 0;
/* 438a64: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 438a67: fsqrt  */
  ST0 = sqrt(ST0);
/* 438a69: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 438a6c: call 0x4151e3 */
  esp -= 4; W32(esp, 0x438a71u); SPILL(); f_4151e3(); if (g_unwind) return; RELOAD();
/* 438a71: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 438a73: je 0x438a7a */
  if (zf) goto L_438a7a;
L_438a75: /* 438a75: and eax, 0xfff7ffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfff7ffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_438a7a: /* 438a7a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 438a7c: xor ebx, ebx */
  ebx = 0;
/* 438a7e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 438a7f: test bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 438a81: jne 0x438a8b */
  if (!zf) goto L_438a8b;
L_438a83: /* 438a83: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 438a85: jne 0x437e7b */
  if (!zf) goto L_437e7b;
L_438a8b: /* 438a8b: mov edx, eax */
  edx = eax;
/* 438a8d: and edx, 0x80000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edx = r;
  }
/* 438a93: je 0x438a99 */
  if (zf) goto L_438a99;
L_438a95: /* 438a95: or dword ptr [esi + 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
L_438a99: /* 438a99: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 438a9c: jne 0x438aae */
  if (!zf) goto L_438aae;
L_438a9e: /* 438a9e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 438aa0: je 0x438aae */
  if (zf) goto L_438aae;
L_438aa2: /* 438aa2: mov eax, esi */
  eax = esi;
/* 438aa4: call 0x436743 */
  esp -= 4; W32(esp, 0x438aa9u); SPILL(); f_436743(); if (g_unwind) return; RELOAD();
/* 438aa9: jmp 0x437e93 */
  goto L_437e93;
L_438aae: /* 438aae: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 438ab1: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 438ab4: fstp dword ptr [ecx + 0x50] */
  WF32((uint32_t)(ecx + 0x50u), ST0); FPOP();
/* 438ab7: test byte ptr [esi], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 438aba: jne 0x438ae2 */
  if (!zf) goto L_438ae2;
L_438abc: /* 438abc: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 438abe: je 0x438ae2 */
  if (zf) goto L_438ae2;
L_438ac0: /* 438ac0: mov eax, esi */
  eax = esi;
/* 438ac2: call 0x436743 */
  esp -= 4; W32(esp, 0x438ac7u); SPILL(); f_436743(); if (g_unwind) return; RELOAD();
/* 438ac7: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438aca: or dword ptr [eax + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 438acd: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438ad0: or dword ptr [esi + 4], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 438ad4: or dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 438ad7: mov esi, dword ptr [esi + 0x20] */
  esi = R32((uint32_t)(esi + 0x20u));
/* 438ada: or dword ptr [esi + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x60u), r);
  }
/* 438add: jmp 0x437e93 */
  goto L_437e93;
L_438ae2: /* 438ae2: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 438ae5: or dword ptr [ecx + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0x60u), r);
  }
/* 438ae8: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 438aeb: and dword ptr [ecx + 0xc], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 438aef: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 438af2: and dword ptr [ecx + 0xc], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 438af6: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 438af8: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 438afb: je 0x438b06 */
  if (zf) goto L_438b06;
L_438afd: /* 438afd: or dword ptr [ecx + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 438b00: or dword ptr [esi + 4], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 438b04: jmp 0x438b0a */
  goto L_438b0a;
L_438b06: /* 438b06: and dword ptr [ecx + 0xc], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
L_438b0a: /* 438b0a: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 438b0d: and dword ptr [ecx + 0xc], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 438b11: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 438b13: je 0x43821b */
  if (zf) goto L_43821b;
L_438b19: /* 438b19: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 438b1c: or dword ptr [eax + 0xc], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 438b20: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 438b23: jmp 0x438222 */
  goto L_438222;
}
