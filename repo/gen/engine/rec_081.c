#include "recomp.h"
#include "rec_mod.h"

void f_872190(void) {
  LOAD_REGS();
L_872190: /* 872190: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 872194: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 87219a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 87219c: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 87219e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8721a0: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 8721a2: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8721a4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8721a6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8721a8: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8721ab: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8721ad: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8721b0: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 8721b3: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 8721b6: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 8721b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8721d0(void) {
  LOAD_REGS();
L_8721d0: /* 8721d0: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8721d3: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 8721d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8721d7: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 8721da: mov esi, dword ptr [edx + 0xc] */
  esi = R32((uint32_t)(edx + 0xcu));
/* 8721dd: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8721df: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 8721e3: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 8721e6: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8721ea: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8721ed: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8721ef: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8721f1: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8721f5: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8721f7: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8721f9: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 8721fc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8721fe: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 872201: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 872203: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 872206: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 872208: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 87220a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 87220c: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 87220f: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 872211: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 872213: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 872215: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 872217: fst dword ptr [eax] */
  WF32((uint32_t)(eax), ST0);
/* 872219: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 87221b: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 87221e: fst dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0);
/* 872222: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 872225: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 872227: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 87222a: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 87222e: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 872231: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 872233: mov edx, esi */
  edx = esi;
/* 872235: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 872237: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 87223b: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 87223f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 872241: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 872243: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 872245: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 872247: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 87224b: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 87224f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 872251: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 872255: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 872259: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 87225b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 87225d: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 872261: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 872263: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 872267: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 872269: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 87226b: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 87226d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 87226f: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 872273: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 872276: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 87227a: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 87227d: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 872281: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 872284: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 872288: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 87228b: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 87228f: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 872292: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 872294: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 872297: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 872299: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 87229b: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 87229d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 87229f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8722a0: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 8722a2: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 8722a6: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8722a8: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8722aa: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8722ac: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 8722b0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8722b2: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8722b5: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8722b8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8722ba: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8722bc: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 8722c0: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8722c4: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8722c7: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 8722ca: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8722cd: ret  */
  esp += 4; SPILL(); return;
}

void f_872310(void) {
  LOAD_REGS();
L_872310: /* 872310: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 872311: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 872312: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 872316: mov eax, dword ptr [ebp + 0x59c] */
  eax = R32((uint32_t)(ebp + 0x59cu));
/* 87231c: xor ebx, ebx */
  ebx = 0;
/* 87231e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 872320: jle 0x87236c */
  if ((zf || sf != of)) goto L_87236c;
L_872322: /* 872322: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 872323: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 872324: jmp 0x872330 */
  goto L_872330;
L_872330: /* 872330: mov eax, dword ptr [ebp + 0x598] */
  eax = R32((uint32_t)(ebp + 0x598u));
/* 872336: mov edi, dword ptr [eax + ebx*4] */
  edi = R32((uint32_t)(eax + ebx*4));
/* 872339: mov esi, dword ptr [edi + 0xec] */
  esi = R32((uint32_t)(edi + 0xecu));
/* 87233f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 872341: je 0x87235f */
  if (zf) goto L_87235f;
L_872343: /* 872343: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 872344: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x872349u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 872349: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87234a: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x87234fu); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
/* 87234f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 872350: call 0x90fcd0 */
  esp -= 4; W32(esp, 0x872355u); SPILL(); f_90fcd0(); if (g_unwind) return; RELOAD();
/* 872355: mov dword ptr [edi + 0xec], 0 */
  W32((uint32_t)(edi + 0xecu), 0x0u);
L_87235f: /* 87235f: mov eax, dword ptr [ebp + 0x59c] */
  eax = R32((uint32_t)(ebp + 0x59cu));
/* 872365: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 872366: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 872368: jl 0x872330 */
  if ((sf != of)) goto L_872330;
L_87236a: /* 87236a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87236b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_87236c: /* 87236c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87236d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87236e: ret  */
  esp += 4; SPILL(); return;
}

void f_872326(void) {
  LOAD_REGS();
L_872326: /* 872326: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 87232d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_872330: /* 872330: mov eax, dword ptr [ebp + 0x598] */
  eax = R32((uint32_t)(ebp + 0x598u));
/* 872336: mov edi, dword ptr [eax + ebx*4] */
  edi = R32((uint32_t)(eax + ebx*4));
/* 872339: mov esi, dword ptr [edi + 0xec] */
  esi = R32((uint32_t)(edi + 0xecu));
/* 87233f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 872341: je 0x87235f */
  if (zf) goto L_87235f;
L_872343: /* 872343: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 872344: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x872349u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 872349: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87234a: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x87234fu); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
/* 87234f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 872350: call 0x90fcd0 */
  esp -= 4; W32(esp, 0x872355u); SPILL(); f_90fcd0(); if (g_unwind) return; RELOAD();
/* 872355: mov dword ptr [edi + 0xec], 0 */
  W32((uint32_t)(edi + 0xecu), 0x0u);
L_87235f: /* 87235f: mov eax, dword ptr [ebp + 0x59c] */
  eax = R32((uint32_t)(ebp + 0x59cu));
/* 872365: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 872366: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 872368: jl 0x872330 */
  if ((sf != of)) goto L_872330;
L_87236a: /* 87236a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87236b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87236c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87236d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87236e: ret  */
  esp += 4; SPILL(); return;
}

void f_872390(void) {
  LOAD_REGS();
L_872390: /* 872390: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 872392: push 0x9d4797 */
  { uint32_t v = 0x9d4797u; esp -= 4; W32(esp, v); }
/* 872397: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87239d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87239e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8723a5: sub esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8723ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8723ac: mov ebx, dword ptr [esp + 0xb0] */
  ebx = R32((uint32_t)(esp + 0xb0u));
/* 8723b3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8723b4: mov ebp, dword ptr [esp + 0xb8] */
  ebp = R32((uint32_t)(esp + 0xb8u));
/* 8723bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8723bc: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 8723c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8723c5: lea eax, [ebp + 0x90] */
  eax = (uint32_t)(ebp + 0x90u);
/* 8723cb: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8723cd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8723d0: mov ecx, esp */
  ecx = esp;
/* 8723d2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8723d4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8723d7: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8723da: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8723dd: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8723e0: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 8723e4: call 0x6c9160 */
  esp -= 4; W32(esp, 0x8723e9u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 8723e9: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8723ee: mov esi, eax */
  esi = eax;
/* 8723f0: lea edi, [esp + 0x2c] */
  edi = (uint32_t)(esp + 0x2cu);
/* 8723f4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8723f6: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 8723fa: mov dword ptr [esp + 0xb4], 1 */
  W32((uint32_t)(esp + 0xb4u), 0x1u);
/* 872405: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x87240bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 87240b: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 87240f: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 872413: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 872417: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 87241b: fld dword ptr [ebp + 0x8c] */
  { double v = F32((uint32_t)(ebp + 0x8cu)); FPUSH(v); }
/* 872421: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 872425: fchs  */
  ST0 = -ST0;
/* 872427: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 87242b: fld dword ptr [ebp + 0x88] */
  { double v = F32((uint32_t)(ebp + 0x88u)); FPUSH(v); }
/* 872431: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 872435: fchs  */
  ST0 = -ST0;
/* 872437: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 87243b: fld dword ptr [ebp + 0x84] */
  { double v = F32((uint32_t)(ebp + 0x84u)); FPUSH(v); }
/* 872441: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 872445: fchs  */
  ST0 = -ST0;
/* 872447: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 87244b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 87244d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 87244f: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 872451: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 872453: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872455: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 872457: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 87245b: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 87245d: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 87245f: fadd dword ptr [esp + 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x5cu)));
/* 872463: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 872467: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 872469: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 87246b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 87246d: fld dword ptr [ebp + 0x8c] */
  { double v = F32((uint32_t)(ebp + 0x8cu)); FPUSH(v); }
/* 872473: fchs  */
  ST0 = -ST0;
/* 872475: fld dword ptr [ebp + 0x88] */
  { double v = F32((uint32_t)(ebp + 0x88u)); FPUSH(v); }
/* 87247b: fchs  */
  ST0 = -ST0;
/* 87247d: fld dword ptr [ebp + 0x84] */
  { double v = F32((uint32_t)(ebp + 0x84u)); FPUSH(v); }
/* 872483: fchs  */
  ST0 = -ST0;
/* 872485: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 872489: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 87248b: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 87248f: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 872491: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 872493: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 872495: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 872499: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 87249b: fadd dword ptr [esp + 0x60] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x60u)));
/* 87249f: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 8724a3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8724a5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8724a7: fld dword ptr [ebp + 0x8c] */
  { double v = F32((uint32_t)(ebp + 0x8cu)); FPUSH(v); }
/* 8724ad: fchs  */
  ST0 = -ST0;
/* 8724af: fld dword ptr [ebp + 0x88] */
  { double v = F32((uint32_t)(ebp + 0x88u)); FPUSH(v); }
/* 8724b5: fchs  */
  ST0 = -ST0;
/* 8724b7: fld dword ptr [ebp + 0x84] */
  { double v = F32((uint32_t)(ebp + 0x84u)); FPUSH(v); }
/* 8724bd: fchs  */
  ST0 = -ST0;
/* 8724bf: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8724c3: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8724c5: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8724ca: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8724ce: lea esi, [esp + 0x2c] */
  esi = (uint32_t)(esp + 0x2cu);
/* 8724d2: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8724d4: mov edi, ebx */
  edi = ebx;
/* 8724d6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8724d8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8724da: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 8724de: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8724e0: fadd dword ptr [esp + 0x64] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x64u)));
/* 8724e4: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 8724e8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8724ea: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8724ec: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8724ee: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 8724f2: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 8724fa: mov byte ptr [esp + 0xb4], 0 */
  W8((uint32_t)(esp + 0xb4u), 0x0u);
/* 872502: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x872508u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 872508: mov ecx, dword ptr [esp + 0xac] */
  ecx = R32((uint32_t)(esp + 0xacu));
/* 87250f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 872510: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 872511: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 872512: mov eax, ebx */
  eax = ebx;
/* 872514: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87251b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87251c: add esp, 0xa8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 872522: ret  */
  esp += 4; SPILL(); return;
}

void f_8725a0(void) {
  LOAD_REGS();
L_8725a0: /* 8725a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8725a1: mov ebp, esp */
  ebp = esp;
/* 8725a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8725a5: push 0x9d47b0 */
  { uint32_t v = 0x9d47b0u; esp -= 4; W32(esp, v); }
/* 8725aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8725b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8725b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8725b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8725bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8725bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8725bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8725be: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8725c1: mov esi, ecx */
  esi = ecx;
/* 8725c3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8725ca: call 0x6c7649 */
  esp -= 4; W32(esp, 0x8725cfu); SPILL(); f_6c7649(); if (g_unwind) return; RELOAD();
/* 8725cf: mov eax, dword ptr [0xb7e4e0] */
  eax = R32((uint32_t)(0xb7e4e0u));
/* 8725d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8725d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8725d7: mov ecx, esi */
  ecx = esi;
/* 8725d9: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x8725dfu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 8725df: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8725e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8725e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8725e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8725e6: mov ecx, esi */
  ecx = esi;
/* 8725e8: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8725ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8725eb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8725ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8725ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8725f0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8725f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8725f8: mov esp, ebp */
  esp = ebp;
/* 8725fa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8725fb: ret  */
  esp += 4; SPILL(); return;
}

void f_8725fc(void) {
  LOAD_REGS();
L_8725fc: /* 8725fc: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8725ff: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 872604: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 872607: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 872608: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 87260b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x872610u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_872610(); return;
}

void f_872610(void) {
  LOAD_REGS();
L_872610: /* 872610: push 0xa18630 */
  { uint32_t v = 0xa18630u; esp -= 4; W32(esp, v); }
/* 872615: push 0xae5b34 */
  { uint32_t v = 0xae5b34u; esp -= 4; W32(esp, v); }
/* 87261a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x872620u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 872620: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 872623: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872625: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872627: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87262cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_87262c: guest_badaddr(0x87262c); return;
}

void f_872660(void) {
  LOAD_REGS();
L_872660: /* 872660: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 872661: mov ebp, esp */
  ebp = esp;
/* 872663: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 872665: push 0x9d47c0 */
  { uint32_t v = 0x9d47c0u; esp -= 4; W32(esp, v); }
/* 87266a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 872670: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 872671: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 872678: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87267b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87267c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87267d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87267e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 872681: mov esi, ecx */
  esi = ecx;
/* 872683: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 87268a: call 0x6c45ed */
  esp -= 4; W32(esp, 0x87268fu); SPILL(); f_6c45ed(); if (g_unwind) return; RELOAD();
/* 87268f: mov eax, dword ptr [0xb7e534] */
  eax = R32((uint32_t)(0xb7e534u));
/* 872694: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 872697: mov ecx, esi */
  ecx = esi;
/* 872699: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x87269fu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 87269f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8726a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8726a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8726a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8726a6: mov ecx, esi */
  ecx = esi;
/* 8726a8: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8726abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8726ab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8726ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8726af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8726b0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8726b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8726b8: mov esp, ebp */
  esp = ebp;
/* 8726ba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8726bb: ret  */
  esp += 4; SPILL(); return;
}

void f_8726bc(void) {
  LOAD_REGS();
L_8726bc: /* 8726bc: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8726bf: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8726c4: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8726c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8726c8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8726cb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8726d0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8726d0(); return;
}

void f_8726d0(void) {
  LOAD_REGS();
L_8726d0: /* 8726d0: push 0xa18670 */
  { uint32_t v = 0xa18670u; esp -= 4; W32(esp, v); }
/* 8726d5: push 0xae5b3c */
  { uint32_t v = 0xae5b3cu; esp -= 4; W32(esp, v); }
/* 8726da: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8726e0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8726e0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8726e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8726e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8726e7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8726ecu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8726ec: guest_badaddr(0x8726ec); return;
}

void f_872720(void) {
  LOAD_REGS();
L_872720: /* 872720: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 872721: mov ebp, esp */
  ebp = esp;
/* 872723: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 872725: push 0x9d47d0 */
  { uint32_t v = 0x9d47d0u; esp -= 4; W32(esp, v); }
/* 87272a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 872730: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 872731: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 872738: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87273b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87273c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87273d: mov esi, ecx */
  esi = ecx;
/* 87273f: cmp byte ptr [esi + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 872743: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 872744: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 872747: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 87274e: je 0x872768 */
  if (zf) goto L_872768;
L_872750: /* 872750: push 0x252 */
  { uint32_t v = 0x252u; esp -= 4; W32(esp, v); }
/* 872755: push 0xae5c00 */
  { uint32_t v = 0xae5c00u; esp -= 4; W32(esp, v); }
/* 87275a: push 0xae5c10 */
  { uint32_t v = 0xae5c10u; esp -= 4; W32(esp, v); }
/* 87275f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x872765u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 872765: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_872768: /* 872768: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 872769: mov ecx, esp */
  ecx = esp;
/* 87276b: push 0x150 */
  { uint32_t v = 0x150u; esp -= 4; W32(esp, v); }
/* 872770: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x872776u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 872776: mov ecx, esi */
  ecx = esi;
/* 872778: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x87277eu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 87277e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 872780: je 0x8727a7 */
  if (zf) goto L_8727a7;
L_872782: /* 872782: mov ecx, dword ptr [0xb7e2fc] */
  ecx = R32((uint32_t)(0xb7e2fcu));
/* 872788: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 87278b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87278d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87278e: mov ecx, esi */
  ecx = esi;
/* 872790: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 872793: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x872799u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 872799: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 87279b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87279d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8727a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8727a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8727a2: mov ecx, esi */
  ecx = esi;
/* 8727a4: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8727a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8727a7: /* 8727a7: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8727aa: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8727ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8727ad: mov ecx, esi */
  ecx = esi;
/* 8727af: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8727b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8727b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8727b3: mov ecx, esi */
  ecx = esi;
/* 8727b5: call 0x6c8350 */
  esp -= 4; W32(esp, 0x8727bau); SPILL(); f_6c8350(); if (g_unwind) return; RELOAD();
/* 8727ba: fld dword ptr [esi + 0xb8] */
  { double v = F32((uint32_t)(esi + 0xb8u)); FPUSH(v); }
/* 8727c0: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8727c6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8727c8: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8727cb: jnp 0x87280d */
  if (!pf) goto L_87280d;
L_8727cd: /* 8727cd: fld dword ptr [esi + 0xb8] */
  { double v = F32((uint32_t)(esi + 0xb8u)); FPUSH(v); }
/* 8727d3: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 8727d6: fst dword ptr [esi + 0xb8] */
  WF32((uint32_t)(esi + 0xb8u), ST0);
/* 8727dc: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 8727e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8727e4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8727e7: jp 0x87280d */
  if (pf) goto L_87280d;
L_8727e9: /* 8727e9: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8727ef: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8727f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8727f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8727f4: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0x8727fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8727fa: /* 8727fa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8727fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 872804: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 872805: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 872806: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 872807: mov esp, ebp */
  esp = ebp;
/* 872809: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87280a: ret 4 */
  esp += 8; SPILL(); return;
L_87280d: /* 87280d: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 872813: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 872816: jne 0x8727fa */
  if (!zf) goto L_8727fa;
L_872818: /* 872818: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 87281a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87281b: mov ecx, esi */
  ecx = esi;
/* 87281d: call dword ptr [edx + 0x118] */
  { uint32_t t = R32((uint32_t)(edx + 0x118u)); esp -= 4; W32(esp, 0x872823u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 872823: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 872826: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 872827: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 872828: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87282f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 872830: mov esp, ebp */
  esp = ebp;
/* 872832: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 872833: ret 4 */
  esp += 8; SPILL(); return;
}

void f_872836(void) {
  LOAD_REGS();
L_872836: /* 872836: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 872839: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 87283e: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 872841: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 872842: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 872845: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87284au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_87284a(); return;
}

void f_87284a(void) {
  LOAD_REGS();
L_87284a: /* 87284a: push 0xa186b0 */
  { uint32_t v = 0xa186b0u; esp -= 4; W32(esp, v); }
/* 87284f: push 0xae5c28 */
  { uint32_t v = 0xae5c28u; esp -= 4; W32(esp, v); }
/* 872854: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x87285au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 87285a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87285d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87285f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872861: call 0x99caf8 */
  esp -= 4; W32(esp, 0x872866u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_872866: guest_badaddr(0x872866); return;
}

void f_8728d0(void) {
  LOAD_REGS();
L_8728d0: /* 8728d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8728d1: mov ebp, esp */
  ebp = esp;
/* 8728d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8728d5: push 0x9d47ec */
  { uint32_t v = 0x9d47ecu; esp -= 4; W32(esp, v); }
/* 8728da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8728e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8728e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8728e8: sub esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8728ee: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8728f1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8728f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8728f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8728f4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8728f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8728f8: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8728fb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 872902: call 0x6cbbc2 */
  esp -= 4; W32(esp, 0x872907u); SPILL(); f_6cbbc2(); if (g_unwind) return; RELOAD();
/* 872907: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 87290a: mov edx, dword ptr [0xb7e538] */
  edx = R32((uint32_t)(0xb7e538u));
/* 872910: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872912: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 872915: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 872918: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 872919: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x87291fu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 87291f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 872922: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 872924: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872926: lea esi, [ebp - 0x18] */
  esi = (uint32_t)(ebp + 0xffffffe8u);
/* 872929: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87292a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87292b: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x87292eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87292e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 872931: mov eax, dword ptr [ecx + 0x59c] */
  eax = R32((uint32_t)(ecx + 0x59cu));
/* 872937: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 872939: je 0x872b7c */
  if (zf) goto L_872b7c;
L_87293f: /* 87293f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 872941: call dword ptr [eax + 0x13c] */
  { uint32_t t = R32((uint32_t)(eax + 0x13cu)); esp -= 4; W32(esp, 0x872947u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 872947: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 87294d: mov esi, eax */
  esi = eax;
/* 87294f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 872951: jne 0x872964 */
  if (!zf) goto L_872964;
L_872953: /* 872953: push 0x55 */
  { uint32_t v = 0x55u; esp -= 4; W32(esp, v); }
/* 872955: push 0xae58f8 */
  { uint32_t v = 0xae58f8u; esp -= 4; W32(esp, v); }
/* 87295a: push 0xae5908 */
  { uint32_t v = 0xae5908u; esp -= 4; W32(esp, v); }
/* 87295f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x872961u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 872961: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_872964: /* 872964: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 872965: call 0x925ce0 */
  esp -= 4; W32(esp, 0x87296au); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 87296a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87296c: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 87296f: jne 0x872982 */
  if (!zf) goto L_872982;
L_872971: /* 872971: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 872973: push 0xae5910 */
  { uint32_t v = 0xae5910u; esp -= 4; W32(esp, v); }
/* 872978: push 0xae5920 */
  { uint32_t v = 0xae5920u; esp -= 4; W32(esp, v); }
/* 87297d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x87297fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87297f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_872982: /* 872982: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 872985: mov eax, dword ptr [ecx + 0xd0] */
  eax = R32((uint32_t)(ecx + 0xd0u));
/* 87298b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87298d: jne 0x8729a0 */
  if (!zf) goto L_8729a0;
L_87298f: /* 87298f: push 0x5b */
  { uint32_t v = 0x5bu; esp -= 4; W32(esp, v); }
/* 872991: push 0xae5928 */
  { uint32_t v = 0xae5928u; esp -= 4; W32(esp, v); }
/* 872996: push 0xae5938 */
  { uint32_t v = 0xae5938u; esp -= 4; W32(esp, v); }
/* 87299b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x87299du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87299d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8729a0: /* 8729a0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8729a3: mov ecx, dword ptr [edx + 0xd0] */
  ecx = R32((uint32_t)(edx + 0xd0u));
/* 8729a9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8729ab: je 0x8729bc */
  if (zf) goto L_8729bc;
L_8729ad: /* 8729ad: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 8729b2: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8729b8u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8729b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8729ba: jne 0x8729cd */
  if (!zf) goto L_8729cd;
L_8729bc: /* 8729bc: push 0x5d */
  { uint32_t v = 0x5du; esp -= 4; W32(esp, v); }
/* 8729be: push 0xae5940 */
  { uint32_t v = 0xae5940u; esp -= 4; W32(esp, v); }
/* 8729c3: push 0xae5950 */
  { uint32_t v = 0xae5950u; esp -= 4; W32(esp, v); }
/* 8729c8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8729cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8729ca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8729cd: /* 8729cd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8729d0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8729d2: lea edx, [ebp - 0xa4] */
  edx = (uint32_t)(ebp + 0xffffff5cu);
/* 8729d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8729d9: call dword ptr [eax + 0xb8] */
  { uint32_t t = R32((uint32_t)(eax + 0xb8u)); esp -= 4; W32(esp, 0x8729dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8729df: xor eax, eax */
  eax = 0;
/* 8729e1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8729e5: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8729e8: jmp 0x8729f0 */
  goto L_8729f0;
L_8729f0: /* 8729f0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8729f3: cmp eax, dword ptr [ecx + 0x59c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x59cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8729f9: jge 0x872b6c */
  if ((sf == of)) goto L_872b6c;
L_8729ff: /* 8729ff: mov ecx, dword ptr [ecx + 0x598] */
  ecx = R32((uint32_t)(ecx + 0x598u));
/* 872a05: mov ebx, dword ptr [ecx + eax*4] */
  ebx = R32((uint32_t)(ecx + eax*4));
/* 872a08: fld dword ptr [ebx + 0xb0] */
  { double v = F32((uint32_t)(ebx + 0xb0u)); FPUSH(v); }
/* 872a0e: mov edx, dword ptr [ebx + 0xa8] */
  edx = R32((uint32_t)(ebx + 0xa8u));
/* 872a14: fld dword ptr [ebx + 0xac] */
  { double v = F32((uint32_t)(ebx + 0xacu)); FPUSH(v); }
/* 872a1a: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 872a1d: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 872a20: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 872a26: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 872a29: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 872a2c: mov dword ptr [ebp - 0x44], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x3f800000u);
/* 872a33: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 872a36: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 872a39: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 872a3c: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 872a3f: lea edi, [ebp - 0x60] */
  edi = (uint32_t)(ebp + 0xffffffa0u);
/* 872a42: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 872a44: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 872a46: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 872a48: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 872a4b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 872a4d: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 872a50: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 872a52: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 872a55: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 872a58: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 872a5b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 872a5e: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 872a61: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 872a64: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 872a67: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 872a6a: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 872a6d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 872a6f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 872a71: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872a73: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872a75: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 872a77: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 872a7a: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 872a7d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 872a80: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 872a83: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 872a86: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 872a89: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 872a8c: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 872a8f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 872a91: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 872a93: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872a95: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872a97: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 872a99: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 872a9c: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 872a9f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 872aa2: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 872aa5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 872aa8: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 872aab: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 872aae: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 872ab1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 872ab3: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 872ab5: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872ab7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872ab9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 872abb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 872abd: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 872abf: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 872ac1: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 872ac4: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 872ac7: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 872aca: fld dword ptr [ebx + 0xc0] */
  { double v = F32((uint32_t)(ebx + 0xc0u)); FPUSH(v); }
/* 872ad0: fmul dword ptr [ebx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x2cu)));
/* 872ad3: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 872ad6: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 872ad9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 872adc: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 872adf: mov edx, esp */
  edx = esp;
/* 872ae1: fld dword ptr [ebx + 0xc4] */
  { double v = F32((uint32_t)(ebx + 0xc4u)); FPUSH(v); }
/* 872ae7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 872ae9: fmul dword ptr [ebx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x2cu)));
/* 872aec: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 872aef: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 872af2: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 872af5: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 872af8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 872af9: fld dword ptr [ebx + 0xc8] */
  { double v = F32((uint32_t)(ebx + 0xc8u)); FPUSH(v); }
/* 872aff: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 872b02: fmul dword ptr [ebx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x2cu)));
/* 872b05: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 872b08: call 0x6c882d */
  esp -= 4; W32(esp, 0x872b0du); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 872b0d: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 872b10: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 872b13: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 872b16: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 872b19: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 872b1c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 872b1d: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 872b20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 872b21: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 872b24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 872b25: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 872b28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 872b29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 872b2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 872b2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 872b2c: call 0x90f3b0 */
  esp -= 4; W32(esp, 0x872b31u); SPILL(); f_90f3b0(); if (g_unwind) return; RELOAD();
/* 872b31: fld dword ptr [ebx + 0xd4] */
  { double v = F32((uint32_t)(ebx + 0xd4u)); FPUSH(v); }
/* 872b37: fmul dword ptr [ebx + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x40u)));
/* 872b3a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 872b3d: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 872b41: fld dword ptr [ebx + 0xd0] */
  { double v = F32((uint32_t)(ebx + 0xd0u)); FPUSH(v); }
/* 872b47: fmul dword ptr [ebx + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x40u)));
/* 872b4a: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 872b4e: fld dword ptr [ebx + 0xcc] */
  { double v = F32((uint32_t)(ebx + 0xccu)); FPUSH(v); }
/* 872b54: fmul dword ptr [ebx + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x40u)));
/* 872b57: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 872b5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 872b5b: call 0x90f450 */
  esp -= 4; W32(esp, 0x872b60u); SPILL(); f_90f450(); if (g_unwind) return; RELOAD();
/* 872b60: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 872b63: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 872b64: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 872b67: jmp 0x8729f0 */
  goto L_8729f0;
L_872b6c: /* 872b6c: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 872b72: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 872b76: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x872b7cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_872b7c: /* 872b7c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 872b7f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 872b80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 872b81: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 872b88: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 872b89: mov esp, ebp */
  esp = ebp;
/* 872b8b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 872b8c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8729ea(void) {
  LOAD_REGS();
L_8729ea: /* 8729ea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8729f0: /* 8729f0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8729f3: cmp eax, dword ptr [ecx + 0x59c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x59cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8729f9: jge 0x872b6c */
  if ((sf == of)) goto L_872b6c;
L_8729ff: /* 8729ff: mov ecx, dword ptr [ecx + 0x598] */
  ecx = R32((uint32_t)(ecx + 0x598u));
/* 872a05: mov ebx, dword ptr [ecx + eax*4] */
  ebx = R32((uint32_t)(ecx + eax*4));
/* 872a08: fld dword ptr [ebx + 0xb0] */
  { double v = F32((uint32_t)(ebx + 0xb0u)); FPUSH(v); }
/* 872a0e: mov edx, dword ptr [ebx + 0xa8] */
  edx = R32((uint32_t)(ebx + 0xa8u));
/* 872a14: fld dword ptr [ebx + 0xac] */
  { double v = F32((uint32_t)(ebx + 0xacu)); FPUSH(v); }
/* 872a1a: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 872a1d: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 872a20: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 872a26: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 872a29: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 872a2c: mov dword ptr [ebp - 0x44], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x3f800000u);
/* 872a33: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 872a36: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 872a39: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 872a3c: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 872a3f: lea edi, [ebp - 0x60] */
  edi = (uint32_t)(ebp + 0xffffffa0u);
/* 872a42: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 872a44: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 872a46: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 872a48: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 872a4b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 872a4d: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 872a50: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 872a52: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 872a55: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 872a58: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 872a5b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 872a5e: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 872a61: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 872a64: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 872a67: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 872a6a: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 872a6d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 872a6f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 872a71: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872a73: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872a75: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 872a77: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 872a7a: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 872a7d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 872a80: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 872a83: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 872a86: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 872a89: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 872a8c: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 872a8f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 872a91: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 872a93: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872a95: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872a97: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 872a99: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 872a9c: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 872a9f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 872aa2: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 872aa5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 872aa8: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 872aab: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 872aae: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 872ab1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 872ab3: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 872ab5: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872ab7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872ab9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 872abb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 872abd: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 872abf: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 872ac1: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 872ac4: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 872ac7: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 872aca: fld dword ptr [ebx + 0xc0] */
  { double v = F32((uint32_t)(ebx + 0xc0u)); FPUSH(v); }
/* 872ad0: fmul dword ptr [ebx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x2cu)));
/* 872ad3: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 872ad6: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 872ad9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 872adc: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 872adf: mov edx, esp */
  edx = esp;
/* 872ae1: fld dword ptr [ebx + 0xc4] */
  { double v = F32((uint32_t)(ebx + 0xc4u)); FPUSH(v); }
/* 872ae7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 872ae9: fmul dword ptr [ebx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x2cu)));
/* 872aec: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 872aef: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 872af2: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 872af5: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 872af8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 872af9: fld dword ptr [ebx + 0xc8] */
  { double v = F32((uint32_t)(ebx + 0xc8u)); FPUSH(v); }
/* 872aff: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 872b02: fmul dword ptr [ebx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x2cu)));
/* 872b05: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 872b08: call 0x6c882d */
  esp -= 4; W32(esp, 0x872b0du); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 872b0d: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 872b10: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 872b13: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 872b16: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 872b19: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 872b1c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 872b1d: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 872b20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 872b21: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 872b24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 872b25: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 872b28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 872b29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 872b2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 872b2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 872b2c: call 0x90f3b0 */
  esp -= 4; W32(esp, 0x872b31u); SPILL(); f_90f3b0(); if (g_unwind) return; RELOAD();
/* 872b31: fld dword ptr [ebx + 0xd4] */
  { double v = F32((uint32_t)(ebx + 0xd4u)); FPUSH(v); }
/* 872b37: fmul dword ptr [ebx + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x40u)));
/* 872b3a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 872b3d: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 872b41: fld dword ptr [ebx + 0xd0] */
  { double v = F32((uint32_t)(ebx + 0xd0u)); FPUSH(v); }
/* 872b47: fmul dword ptr [ebx + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x40u)));
/* 872b4a: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 872b4e: fld dword ptr [ebx + 0xcc] */
  { double v = F32((uint32_t)(ebx + 0xccu)); FPUSH(v); }
/* 872b54: fmul dword ptr [ebx + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x40u)));
/* 872b57: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 872b5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 872b5b: call 0x90f450 */
  esp -= 4; W32(esp, 0x872b60u); SPILL(); f_90f450(); if (g_unwind) return; RELOAD();
/* 872b60: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 872b63: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 872b64: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 872b67: jmp 0x8729f0 */
  goto L_8729f0;
L_872b6c: /* 872b6c: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 872b72: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 872b76: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x872b7cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 872b7c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 872b7f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 872b80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 872b81: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 872b88: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 872b89: mov esp, ebp */
  esp = ebp;
/* 872b8b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 872b8c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_872b8f(void) {
  LOAD_REGS();
L_872b8f: /* 872b8f: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 872b92: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 872b97: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 872b9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 872b9b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 872b9e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x872ba3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_872ba3(); return;
}

void f_872ba3(void) {
  LOAD_REGS();
L_872ba3: /* 872ba3: push 0xa186f8 */
  { uint32_t v = 0xa186f8u; esp -= 4; W32(esp, v); }
/* 872ba8: push 0xae5958 */
  { uint32_t v = 0xae5958u; esp -= 4; W32(esp, v); }
/* 872bad: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x872bb3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 872bb3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 872bb6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872bb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872bba: call 0x99caf8 */
  esp -= 4; W32(esp, 0x872bbfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_872bbf: guest_badaddr(0x872bbf); return;
}

void f_872c80(void) {
  LOAD_REGS();
L_872c80: /* 872c80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 872c81: mov ebp, esp */
  ebp = esp;
/* 872c83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 872c85: push 0x9d4818 */
  { uint32_t v = 0x9d4818u; esp -= 4; W32(esp, v); }
/* 872c8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 872c90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 872c91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 872c98: sub esp, 0x194 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 872c9e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 872ca1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 872ca2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 872ca3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 872ca4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 872ca7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 872ca8: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 872cab: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 872cb2: call 0x6c4872 */
  esp -= 4; W32(esp, 0x872cb7u); SPILL(); f_6c4872(); if (g_unwind) return; RELOAD();
/* 872cb7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 872cba: mov eax, dword ptr [ecx + 0xd0] */
  eax = R32((uint32_t)(ecx + 0xd0u));
/* 872cc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 872cc2: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 872cc8: jne 0x872cde */
  if (!zf) goto L_872cde;
L_872cca: /* 872cca: push 0x278 */
  { uint32_t v = 0x278u; esp -= 4; W32(esp, v); }
/* 872ccf: push 0xae5c38 */
  { uint32_t v = 0xae5c38u; esp -= 4; W32(esp, v); }
/* 872cd4: push 0xae5c48 */
  { uint32_t v = 0xae5c48u; esp -= 4; W32(esp, v); }
/* 872cd9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x872cdbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 872cdb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_872cde: /* 872cde: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 872ce1: mov esi, dword ptr [edx + 0xd0] */
  esi = R32((uint32_t)(edx + 0xd0u));
/* 872ce7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 872ce9: je 0x872cfc */
  if (zf) goto L_872cfc;
L_872ceb: /* 872ceb: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 872cf0: mov ecx, esi */
  ecx = esi;
/* 872cf2: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x872cf8u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 872cf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 872cfa: jne 0x872d12 */
  if (!zf) goto L_872d12;
L_872cfc: /* 872cfc: push 0x27a */
  { uint32_t v = 0x27au; esp -= 4; W32(esp, v); }
/* 872d01: push 0xae5c50 */
  { uint32_t v = 0xae5c50u; esp -= 4; W32(esp, v); }
/* 872d06: push 0xae5c60 */
  { uint32_t v = 0xae5c60u; esp -= 4; W32(esp, v); }
/* 872d0b: xor esi, esi */
  esi = 0;
/* 872d0d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x872d0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 872d0f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_872d12: /* 872d12: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 872d15: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 872d17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 872d18: mov ecx, esi */
  ecx = esi;
/* 872d1a: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x872d20u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 872d20: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 872d22: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 872d25: jne 0x872d3b */
  if (!zf) goto L_872d3b;
L_872d27: /* 872d27: push 0x27d */
  { uint32_t v = 0x27du; esp -= 4; W32(esp, v); }
/* 872d2c: push 0xae5c68 */
  { uint32_t v = 0xae5c68u; esp -= 4; W32(esp, v); }
/* 872d31: push 0xae5c78 */
  { uint32_t v = 0xae5c78u; esp -= 4; W32(esp, v); }
/* 872d36: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x872d38u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 872d38: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_872d3b: /* 872d3b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 872d3e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 872d40: lea eax, [ebp - 0x170] */
  eax = (uint32_t)(ebp + 0xfffffe90u);
/* 872d46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 872d47: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0x872d4du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 872d4d: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 872d53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 872d54: mov ecx, eax */
  ecx = eax;
/* 872d56: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 872d5a: call dword ptr [0xcfab4c] */
  esp -= 4; W32(esp, 0x872d60u); SPILL(); f_4e24c8(); if (g_unwind) return; /* Core!?RemoveScaling@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 872d60: lea ecx, [ebp - 0x170] */
  ecx = (uint32_t)(ebp + 0xfffffe90u);
/* 872d66: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 872d6a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x872d70u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 872d70: xor eax, eax */
  eax = 0;
/* 872d72: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 872d75: jmp 0x872d80 */
  goto L_872d80;
L_872d80: /* 872d80: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 872d83: cmp eax, dword ptr [ecx + 0x59c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x59cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 872d89: jge 0x873089 */
  if ((sf == of)) goto L_873089;
L_872d8f: /* 872d8f: mov edx, dword ptr [ecx + 0x598] */
  edx = R32((uint32_t)(ecx + 0x598u));
/* 872d95: mov ebx, dword ptr [edx + eax*4] */
  ebx = R32((uint32_t)(edx + eax*4));
/* 872d98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872d9a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872d9c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872d9e: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 872da1: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x872da7u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 872da7: test byte ptr [ebx + 0x48], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x48u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 872dab: jne 0x872e60 */
  if (!zf) goto L_872e60;
L_872db1: /* 872db1: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 872db4: fmul dword ptr [ebx + 0xd8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xd8u)));
/* 872dba: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 872dc0: fmul qword ptr [0xa18798] */
  ST0 = ST0 * (F64((uint32_t)(0xa18798u)));
/* 872dc6: fadd dword ptr [ebx + 0xe8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0xe8u)));
/* 872dcc: fst dword ptr [ebx + 0xe8] */
  WF32((uint32_t)(ebx + 0xe8u), ST0);
/* 872dd2: fld dword ptr [ebx + 0x28] */
  { double v = F32((uint32_t)(ebx + 0x28u)); FPUSH(v); }
/* 872dd5: fmul qword ptr [0xa18788] */
  ST0 = ST0 * (F64((uint32_t)(0xa18788u)));
/* 872ddb: fmul qword ptr [0xa18778] */
  ST0 = ST0 * (F64((uint32_t)(0xa18778u)));
/* 872de1: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 872de4: call 0x99c958 */
  esp -= 4; W32(esp, 0x872de9u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 872de9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 872dea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872dec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872dee: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 872df4: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x872dfau); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 872dfa: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 872dfd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872dff: mov esi, eax */
  esi = eax;
/* 872e01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872e03: call 0x99c958 */
  esp -= 4; W32(esp, 0x872e08u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 872e08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 872e09: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 872e0f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x872e15u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 872e15: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 872e1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 872e1c: lea eax, [ebp - 0x1a0] */
  eax = (uint32_t)(ebp + 0xfffffe60u);
/* 872e22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 872e23: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 872e26: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x872e2cu); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 872e2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 872e2d: lea ecx, [ebp - 0x130] */
  ecx = (uint32_t)(ebp + 0xfffffed0u);
/* 872e33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 872e34: mov ecx, eax */
  ecx = eax;
/* 872e36: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x872e3cu); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 872e3c: lea edx, [ebp - 0x90] */
  edx = (uint32_t)(ebp + 0xffffff70u);
/* 872e42: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 872e43: lea ecx, [ebp - 0x130] */
  ecx = (uint32_t)(ebp + 0xfffffed0u);
/* 872e49: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x872e4fu); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 872e4f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 872e51: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 872e54: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 872e57: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 872e5a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 872e5d: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
L_872e60: /* 872e60: fld dword ptr [ebx + 0xe4] */
  { double v = F32((uint32_t)(ebx + 0xe4u)); FPUSH(v); }
/* 872e66: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 872e69: lea edx, [ebp - 0x100] */
  edx = (uint32_t)(ebp + 0xffffff00u);
/* 872e6f: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 872e72: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 872e79: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 872e80: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 872e87: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 872e8a: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 872e8d: mov esi, dword ptr [ebp - 0x50] */
  esi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 872e90: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 872e93: lea edi, [ebp - 0x74] */
  edi = (uint32_t)(ebp + 0xffffff8cu);
/* 872e96: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 872e98: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 872e9a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 872e9c: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 872e9f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 872ea1: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 872ea4: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 872ea6: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 872ea9: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 872eac: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 872eaf: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 872eb2: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 872eb5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 872eb8: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 872ebb: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 872ebe: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 872ec1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 872ec3: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 872ec5: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872ec7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872ec9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 872ecb: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 872ece: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 872ed1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 872ed4: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 872ed7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 872eda: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 872edd: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 872ee0: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 872ee3: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 872ee5: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 872ee7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872ee9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872eeb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 872eed: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 872ef0: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 872ef3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 872ef6: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 872ef9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 872efc: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 872eff: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 872f02: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 872f05: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 872f07: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 872f09: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872f0b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872f0d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 872f0f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 872f11: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 872f13: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 872f15: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 872f18: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 872f1b: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 872f1e: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 872f21: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 872f24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872f26: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 872f2b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 872f2e: mov eax, esp */
  eax = esp;
/* 872f30: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 872f32: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 872f35: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 872f38: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 872f3b: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 872f3e: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 872f41: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 872f44: mov edx, esp */
  edx = esp;
/* 872f46: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 872f48: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 872f4b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 872f4e: mov ecx, dword ptr [ebx + 0x50] */
  ecx = R32((uint32_t)(ebx + 0x50u));
/* 872f51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 872f52: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 872f55: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 872f58: call 0x6c5826 */
  esp -= 4; W32(esp, 0x872f5du); SPILL(); f_6c5826(); if (g_unwind) return; RELOAD();
/* 872f5d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872f5f: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 872f62: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x872f68u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 872f68: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 872f6b: lea esi, [ebx + 0x88] */
  esi = (uint32_t)(ebx + 0x88u);
/* 872f71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 872f72: mov ecx, esi */
  ecx = esi;
/* 872f74: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x872f7au); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 872f7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 872f7c: je 0x87307d */
  if (zf) goto L_87307d;
L_872f82: /* 872f82: fld dword ptr [ebx + 0xb4] */
  { double v = F32((uint32_t)(ebx + 0xb4u)); FPUSH(v); }
/* 872f88: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 872f8e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 872f90: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 872f93: je 0x872f97 */
  if (zf) goto L_872f97;
L_872f95: /* 872f95: fchs  */
  ST0 = -ST0;
L_872f97: /* 872f97: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 872f9d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 872f9f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 872fa2: jne 0x87307d */
  if (!zf) goto L_87307d;
L_872fa8: /* 872fa8: fld dword ptr [ebx + 0xe4] */
  { double v = F32((uint32_t)(ebx + 0xe4u)); FPUSH(v); }
/* 872fae: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 872fb1: fdiv dword ptr [ebx + 0xb4] */
  ST0 = ST0 / (F32((uint32_t)(ebx + 0xb4u)));
/* 872fb7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 872fba: call dword ptr [0xcfab48] */
  esp -= 4; W32(esp, 0x872fc0u); SPILL(); f_4e40ca(); if (g_unwind) return; /* Core!?appAtan@@YANN@Z */ RELOAD();
/* 872fc0: fst qword ptr [ebp - 0x54] */
  WF64((uint32_t)(ebp + 0xffffffacu), ST0);
/* 872fc3: fmul qword ptr [0xa18768] */
  ST0 = ST0 * (F64((uint32_t)(0xa18768u)));
/* 872fc9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 872fcc: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 872fcf: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 872fd2: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x872fd8u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 872fd8: mov bl, byte ptr [ebx + 0x8c] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x8cu))) & 0xffu);
/* 872fde: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 872fe1: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 872fe3: jne 0x872ff5 */
  if (!zf) goto L_872ff5;
L_872fe5: /* 872fe5: call 0x99c958 */
  esp -= 4; W32(esp, 0x872feau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 872fea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 872feb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872fed: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 872ff3: jmp 0x87301a */
  goto L_87301a;
L_872ff5: /* 872ff5: cmp bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 872ff8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872ffa: jne 0x87300c */
  if (!zf) goto L_87300c;
L_872ffc: /* 872ffc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872ffe: call 0x99c958 */
  esp -= 4; W32(esp, 0x873003u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 873003: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 873004: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 87300a: jmp 0x87301c */
  goto L_87301c;
L_87300c: /* 87300c: fchs  */
  ST0 = -ST0;
/* 87300e: call 0x99c958 */
  esp -= 4; W32(esp, 0x873013u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 873013: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 873014: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
L_87301a: /* 87301a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
L_87301c: /* 87301c: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x873022u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 873022: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 873024: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 873026: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 87302b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87302e: mov edi, esp */
  edi = esp;
/* 873030: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 873037: mov ebx, dword ptr [ebp - 0x4c] */
  ebx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 87303a: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 87303c: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 873043: mov ebx, dword ptr [ebp - 0x48] */
  ebx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 873046: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 873049: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 873050: mov ebx, dword ptr [ebp - 0x44] */
  ebx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 873053: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 873056: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 873059: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 87305c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 87305f: mov edi, esp */
  edi = esp;
/* 873061: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 873063: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 873066: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 873069: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 87306c: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 87306f: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 873072: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 873075: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 873077: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 873078: call 0x6c5826 */
  esp -= 4; W32(esp, 0x87307du); SPILL(); f_6c5826(); if (g_unwind) return; RELOAD();
L_87307d: /* 87307d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 873080: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 873081: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 873084: jmp 0x872d80 */
  goto L_872d80;
L_873089: /* 873089: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 87308f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 873093: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x873099u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 873099: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87309c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87309d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87309e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8730a5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8730a6: mov esp, ebp */
  esp = ebp;
/* 8730a8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8730a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_872d77(void) {
  LOAD_REGS();
L_872d77: /* 872d77: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 872d7e: mov edi, edi */
  edi = edi;
L_872d80: /* 872d80: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 872d83: cmp eax, dword ptr [ecx + 0x59c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x59cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 872d89: jge 0x873089 */
  if ((sf == of)) goto L_873089;
L_872d8f: /* 872d8f: mov edx, dword ptr [ecx + 0x598] */
  edx = R32((uint32_t)(ecx + 0x598u));
/* 872d95: mov ebx, dword ptr [edx + eax*4] */
  ebx = R32((uint32_t)(edx + eax*4));
/* 872d98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872d9a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872d9c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872d9e: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 872da1: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x872da7u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 872da7: test byte ptr [ebx + 0x48], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x48u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 872dab: jne 0x872e60 */
  if (!zf) goto L_872e60;
L_872db1: /* 872db1: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 872db4: fmul dword ptr [ebx + 0xd8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xd8u)));
/* 872dba: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 872dc0: fmul qword ptr [0xa18798] */
  ST0 = ST0 * (F64((uint32_t)(0xa18798u)));
/* 872dc6: fadd dword ptr [ebx + 0xe8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0xe8u)));
/* 872dcc: fst dword ptr [ebx + 0xe8] */
  WF32((uint32_t)(ebx + 0xe8u), ST0);
/* 872dd2: fld dword ptr [ebx + 0x28] */
  { double v = F32((uint32_t)(ebx + 0x28u)); FPUSH(v); }
/* 872dd5: fmul qword ptr [0xa18788] */
  ST0 = ST0 * (F64((uint32_t)(0xa18788u)));
/* 872ddb: fmul qword ptr [0xa18778] */
  ST0 = ST0 * (F64((uint32_t)(0xa18778u)));
/* 872de1: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 872de4: call 0x99c958 */
  esp -= 4; W32(esp, 0x872de9u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 872de9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 872dea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872dec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872dee: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 872df4: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x872dfau); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 872dfa: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 872dfd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872dff: mov esi, eax */
  esi = eax;
/* 872e01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872e03: call 0x99c958 */
  esp -= 4; W32(esp, 0x872e08u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 872e08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 872e09: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 872e0f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x872e15u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 872e15: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 872e1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 872e1c: lea eax, [ebp - 0x1a0] */
  eax = (uint32_t)(ebp + 0xfffffe60u);
/* 872e22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 872e23: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 872e26: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x872e2cu); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 872e2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 872e2d: lea ecx, [ebp - 0x130] */
  ecx = (uint32_t)(ebp + 0xfffffed0u);
/* 872e33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 872e34: mov ecx, eax */
  ecx = eax;
/* 872e36: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x872e3cu); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 872e3c: lea edx, [ebp - 0x90] */
  edx = (uint32_t)(ebp + 0xffffff70u);
/* 872e42: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 872e43: lea ecx, [ebp - 0x130] */
  ecx = (uint32_t)(ebp + 0xfffffed0u);
/* 872e49: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x872e4fu); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 872e4f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 872e51: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 872e54: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 872e57: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 872e5a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 872e5d: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
L_872e60: /* 872e60: fld dword ptr [ebx + 0xe4] */
  { double v = F32((uint32_t)(ebx + 0xe4u)); FPUSH(v); }
/* 872e66: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 872e69: lea edx, [ebp - 0x100] */
  edx = (uint32_t)(ebp + 0xffffff00u);
/* 872e6f: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 872e72: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 872e79: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 872e80: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 872e87: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 872e8a: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 872e8d: mov esi, dword ptr [ebp - 0x50] */
  esi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 872e90: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 872e93: lea edi, [ebp - 0x74] */
  edi = (uint32_t)(ebp + 0xffffff8cu);
/* 872e96: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 872e98: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 872e9a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 872e9c: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 872e9f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 872ea1: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 872ea4: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 872ea6: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 872ea9: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 872eac: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 872eaf: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 872eb2: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 872eb5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 872eb8: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 872ebb: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 872ebe: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 872ec1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 872ec3: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 872ec5: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872ec7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872ec9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 872ecb: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 872ece: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 872ed1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 872ed4: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 872ed7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 872eda: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 872edd: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 872ee0: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 872ee3: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 872ee5: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 872ee7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872ee9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872eeb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 872eed: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 872ef0: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 872ef3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 872ef6: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 872ef9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 872efc: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 872eff: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 872f02: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 872f05: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 872f07: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 872f09: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872f0b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 872f0d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 872f0f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 872f11: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 872f13: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 872f15: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 872f18: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 872f1b: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 872f1e: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 872f21: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 872f24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872f26: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 872f2b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 872f2e: mov eax, esp */
  eax = esp;
/* 872f30: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 872f32: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 872f35: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 872f38: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 872f3b: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 872f3e: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 872f41: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 872f44: mov edx, esp */
  edx = esp;
/* 872f46: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 872f48: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 872f4b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 872f4e: mov ecx, dword ptr [ebx + 0x50] */
  ecx = R32((uint32_t)(ebx + 0x50u));
/* 872f51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 872f52: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 872f55: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 872f58: call 0x6c5826 */
  esp -= 4; W32(esp, 0x872f5du); SPILL(); f_6c5826(); if (g_unwind) return; RELOAD();
/* 872f5d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872f5f: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 872f62: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x872f68u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 872f68: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 872f6b: lea esi, [ebx + 0x88] */
  esi = (uint32_t)(ebx + 0x88u);
/* 872f71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 872f72: mov ecx, esi */
  ecx = esi;
/* 872f74: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x872f7au); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 872f7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 872f7c: je 0x87307d */
  if (zf) goto L_87307d;
L_872f82: /* 872f82: fld dword ptr [ebx + 0xb4] */
  { double v = F32((uint32_t)(ebx + 0xb4u)); FPUSH(v); }
/* 872f88: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 872f8e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 872f90: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 872f93: je 0x872f97 */
  if (zf) goto L_872f97;
L_872f95: /* 872f95: fchs  */
  ST0 = -ST0;
L_872f97: /* 872f97: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 872f9d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 872f9f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 872fa2: jne 0x87307d */
  if (!zf) goto L_87307d;
L_872fa8: /* 872fa8: fld dword ptr [ebx + 0xe4] */
  { double v = F32((uint32_t)(ebx + 0xe4u)); FPUSH(v); }
/* 872fae: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 872fb1: fdiv dword ptr [ebx + 0xb4] */
  ST0 = ST0 / (F32((uint32_t)(ebx + 0xb4u)));
/* 872fb7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 872fba: call dword ptr [0xcfab48] */
  esp -= 4; W32(esp, 0x872fc0u); SPILL(); f_4e40ca(); if (g_unwind) return; /* Core!?appAtan@@YANN@Z */ RELOAD();
/* 872fc0: fst qword ptr [ebp - 0x54] */
  WF64((uint32_t)(ebp + 0xffffffacu), ST0);
/* 872fc3: fmul qword ptr [0xa18768] */
  ST0 = ST0 * (F64((uint32_t)(0xa18768u)));
/* 872fc9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 872fcc: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 872fcf: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 872fd2: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x872fd8u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 872fd8: mov bl, byte ptr [ebx + 0x8c] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x8cu))) & 0xffu);
/* 872fde: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 872fe1: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 872fe3: jne 0x872ff5 */
  if (!zf) goto L_872ff5;
L_872fe5: /* 872fe5: call 0x99c958 */
  esp -= 4; W32(esp, 0x872feau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 872fea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 872feb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872fed: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 872ff3: jmp 0x87301a */
  goto L_87301a;
L_872ff5: /* 872ff5: cmp bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 872ff8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872ffa: jne 0x87300c */
  if (!zf) goto L_87300c;
L_872ffc: /* 872ffc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 872ffe: call 0x99c958 */
  esp -= 4; W32(esp, 0x873003u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 873003: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 873004: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 87300a: jmp 0x87301c */
  goto L_87301c;
L_87300c: /* 87300c: fchs  */
  ST0 = -ST0;
/* 87300e: call 0x99c958 */
  esp -= 4; W32(esp, 0x873013u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 873013: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 873014: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
L_87301a: /* 87301a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
L_87301c: /* 87301c: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x873022u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 873022: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 873024: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 873026: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 87302b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87302e: mov edi, esp */
  edi = esp;
/* 873030: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 873037: mov ebx, dword ptr [ebp - 0x4c] */
  ebx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 87303a: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 87303c: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 873043: mov ebx, dword ptr [ebp - 0x48] */
  ebx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 873046: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 873049: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 873050: mov ebx, dword ptr [ebp - 0x44] */
  ebx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 873053: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 873056: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 873059: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 87305c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 87305f: mov edi, esp */
  edi = esp;
/* 873061: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 873063: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 873066: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 873069: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 87306c: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 87306f: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 873072: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 873075: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 873077: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 873078: call 0x6c5826 */
  esp -= 4; W32(esp, 0x87307du); SPILL(); f_6c5826(); if (g_unwind) return; RELOAD();
L_87307d: /* 87307d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 873080: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 873081: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 873084: jmp 0x872d80 */
  goto L_872d80;
L_873089: /* 873089: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 87308f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 873093: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x873099u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 873099: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87309c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87309d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87309e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8730a5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8730a6: mov esp, ebp */
  esp = ebp;
/* 8730a8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8730a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8730ac(void) {
  LOAD_REGS();
L_8730ac: /* 8730ac: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 8730af: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8730b4: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 8730b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8730b8: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 8730bb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8730c0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8730c0(); return;
}

void f_8730c0(void) {
  LOAD_REGS();
L_8730c0: /* 8730c0: push 0xa18734 */
  { uint32_t v = 0xa18734u; esp -= 4; W32(esp, v); }
/* 8730c5: push 0xae5c80 */
  { uint32_t v = 0xae5c80u; esp -= 4; W32(esp, v); }
/* 8730ca: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8730d0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8730d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8730d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8730d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8730d7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8730dcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8730dc: guest_badaddr(0x8730dc); return;
}

void f_873200(void) {
  LOAD_REGS();
L_873200: /* 873200: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 873201: mov ebp, esp */
  ebp = esp;
/* 873203: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 873205: push 0x9d483c */
  { uint32_t v = 0x9d483cu; esp -= 4; W32(esp, v); }
/* 87320a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 873210: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 873211: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 873218: sub esp, 0x274 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x274u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87321e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87321f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 873220: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 873221: xor ebx, ebx */
  ebx = 0;
/* 873223: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 873226: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 873229: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 87322c: call 0x6ca272 */
  esp -= 4; W32(esp, 0x873231u); SPILL(); f_6ca272(); if (g_unwind) return; RELOAD();
/* 873231: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 873234: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 873236: lea edx, [ebp - 0x214] */
  edx = (uint32_t)(ebp + 0xfffffdecu);
/* 87323c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87323d: call dword ptr [eax + 0xb8] */
  { uint32_t t = R32((uint32_t)(eax + 0xb8u)); esp -= 4; W32(esp, 0x873243u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 873243: fld dword ptr [ebp - 0x1ec] */
  { double v = F32((uint32_t)(ebp + 0xfffffe14u)); FPUSH(v); }
/* 873249: fchs  */
  ST0 = -ST0;
/* 87324b: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 87324e: fld dword ptr [ebp - 0x1f0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe10u)); FPUSH(v); }
/* 873254: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 873258: fchs  */
  ST0 = -ST0;
/* 87325a: fld dword ptr [ebp - 0x1f4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe0cu)); FPUSH(v); }
/* 873260: fchs  */
  ST0 = -ST0;
/* 873262: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 873265: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 873268: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 87326b: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x873271u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 873271: mov ecx, dword ptr [ebp - 0x200] */
  ecx = R32((uint32_t)(ebp + 0xfffffe00u));
/* 873277: mov eax, dword ptr [ebp - 0x204] */
  eax = R32((uint32_t)(ebp + 0xfffffdfcu));
/* 87327d: mov edx, dword ptr [ebp - 0x1fc] */
  edx = R32((uint32_t)(ebp + 0xfffffe04u));
/* 873283: mov dword ptr [ebp - 0xc0], ecx */
  W32((uint32_t)(ebp + 0xffffff40u), ecx);
/* 873289: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 87328f: mov dword ptr [ebp - 0xc4], eax */
  W32((uint32_t)(ebp + 0xffffff3cu), eax);
/* 873295: mov dword ptr [ebp - 0xbc], edx */
  W32((uint32_t)(ebp + 0xffffff44u), edx);
/* 87329b: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8732a1u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8732a1: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8732a4: cmp dword ptr [eax + 0xd0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xd0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8732aa: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 8732b0: jne 0x8732c6 */
  if (!zf) goto L_8732c6;
L_8732b2: /* 8732b2: push 0x94 */
  { uint32_t v = 0x94u; esp -= 4; W32(esp, v); }
/* 8732b7: push 0xae5960 */
  { uint32_t v = 0xae5960u; esp -= 4; W32(esp, v); }
/* 8732bc: push 0xae5970 */
  { uint32_t v = 0xae5970u; esp -= 4; W32(esp, v); }
/* 8732c1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8732c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8732c3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8732c6: /* 8732c6: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8732c9: mov ecx, dword ptr [ecx + 0xd0] */
  ecx = R32((uint32_t)(ecx + 0xd0u));
/* 8732cf: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8732d1: je 0x8732e2 */
  if (zf) goto L_8732e2;
L_8732d3: /* 8732d3: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 8732d8: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8732deu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8732de: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8732e0: jne 0x8732f6 */
  if (!zf) goto L_8732f6;
L_8732e2: /* 8732e2: push 0x96 */
  { uint32_t v = 0x96u; esp -= 4; W32(esp, v); }
/* 8732e7: push 0xae5978 */
  { uint32_t v = 0xae5978u; esp -= 4; W32(esp, v); }
/* 8732ec: push 0xae5988 */
  { uint32_t v = 0xae5988u; esp -= 4; W32(esp, v); }
/* 8732f1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8732f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8732f3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8732f6: /* 8732f6: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8732f9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8732fb: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x873301u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 873301: mov esi, eax */
  esi = eax;
/* 873303: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 873305: jne 0x87331b */
  if (!zf) goto L_87331b;
L_873307: /* 873307: push 0x99 */
  { uint32_t v = 0x99u; esp -= 4; W32(esp, v); }
/* 87330c: push 0xae5990 */
  { uint32_t v = 0xae5990u; esp -= 4; W32(esp, v); }
/* 873311: push 0xae59a0 */
  { uint32_t v = 0xae59a0u; esp -= 4; W32(esp, v); }
/* 873316: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x873318u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 873318: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_87331b: /* 87331b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87331c: call 0x928730 */
  esp -= 4; W32(esp, 0x873321u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 873321: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 873322: mov dword ptr [ebp - 0x118], eax */
  W32((uint32_t)(ebp + 0xfffffee8u), eax);
/* 873328: call 0x9287f0 */
  esp -= 4; W32(esp, 0x87332du); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 87332d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87332f: jne 0x873345 */
  if (!zf) goto L_873345;
L_873331: /* 873331: push 0x9c */
  { uint32_t v = 0x9cu; esp -= 4; W32(esp, v); }
/* 873336: push 0xae59a8 */
  { uint32_t v = 0xae59a8u; esp -= 4; W32(esp, v); }
/* 87333b: push 0xae59b8 */
  { uint32_t v = 0xae59b8u; esp -= 4; W32(esp, v); }
/* 873340: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x873342u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 873342: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_873345: /* 873345: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 873346: call 0x925ce0 */
  esp -= 4; W32(esp, 0x87334bu); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 87334b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87334d: mov dword ptr [ebp - 0xc8], eax */
  W32((uint32_t)(ebp + 0xffffff38u), eax);
/* 873353: jne 0x873369 */
  if (!zf) goto L_873369;
L_873355: /* 873355: push 0x9e */
  { uint32_t v = 0x9eu; esp -= 4; W32(esp, v); }
/* 87335a: push 0xae59c0 */
  { uint32_t v = 0xae59c0u; esp -= 4; W32(esp, v); }
/* 87335f: push 0xae59d0 */
  { uint32_t v = 0xae59d0u; esp -= 4; W32(esp, v); }
/* 873364: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x873366u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 873366: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_873369: /* 873369: mov dword ptr [ebp - 0x6c], ebx */
  W32((uint32_t)(ebp + 0xffffff94u), ebx);
/* 87336c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_873370: /* 873370: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 873373: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 873376: cmp ecx, dword ptr [eax + 0x59c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x59cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87337c: jge 0x8740c9 */
  if ((sf == of)) goto L_8740c9;
L_873382: /* 873382: mov edx, dword ptr [eax + 0x598] */
  edx = R32((uint32_t)(eax + 0x598u));
/* 873388: mov eax, ecx */
  eax = ecx;
/* 87338a: mov ebx, dword ptr [edx + eax*4] */
  ebx = R32((uint32_t)(edx + eax*4));
/* 87338d: and dword ptr [ebx + 0xb8], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xb8u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebx + 0xb8u), r);
  }
/* 873394: xor eax, eax */
  eax = 0;
/* 873396: mov edx, eax */
  edx = eax;
/* 873398: lea ecx, [ebx + 0xc0] */
  ecx = (uint32_t)(ebx + 0xc0u);
/* 87339e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8733a0: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8733a3: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8733a6: mov dword ptr [ebx + 0xe4], eax */
  W32((uint32_t)(ebx + 0xe4u), eax);
/* 8733ac: mov dword ptr [ebx + 0xbc], eax */
  W32((uint32_t)(ebx + 0xbcu), eax);
/* 8733b2: mov dword ptr [ebx + 0xe0], eax */
  W32((uint32_t)(ebx + 0xe0u), eax);
/* 8733b8: mov dword ptr [ebx + 0xdc], eax */
  W32((uint32_t)(ebx + 0xdcu), eax);
/* 8733be: fld dword ptr [ebx + 0xb0] */
  { double v = F32((uint32_t)(ebx + 0xb0u)); FPUSH(v); }
/* 8733c4: mov ecx, dword ptr [ebx + 0xa8] */
  ecx = R32((uint32_t)(ebx + 0xa8u));
/* 8733ca: fld dword ptr [ebx + 0xac] */
  { double v = F32((uint32_t)(ebx + 0xacu)); FPUSH(v); }
/* 8733d0: fstp dword ptr [ebp - 0x180] */
  WF32((uint32_t)(ebp + 0xfffffe80u), ST0); FPOP();
/* 8733d6: mov dword ptr [ebp - 0x184], ecx */
  W32((uint32_t)(ebp + 0xfffffe7cu), ecx);
/* 8733dc: lea edx, [ebp - 0x184] */
  edx = (uint32_t)(ebp + 0xfffffe7cu);
/* 8733e2: lea ecx, [ebp - 0x214] */
  ecx = (uint32_t)(ebp + 0xfffffdecu);
/* 8733e8: fstp dword ptr [ebp - 0x17c] */
  WF32((uint32_t)(ebp + 0xfffffe84u), ST0); FPOP();
/* 8733ee: mov dword ptr [ebp - 0x13c], eax */
  W32((uint32_t)(ebp + 0xfffffec4u), eax);
/* 8733f4: mov dword ptr [ebp - 0x138], eax */
  W32((uint32_t)(ebp + 0xfffffec8u), eax);
/* 8733fa: mov dword ptr [ebp - 0x134], eax */
  W32((uint32_t)(ebp + 0xfffffeccu), eax);
/* 873400: mov dword ptr [ebp - 0x178], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe88u), 0x3f800000u);
/* 87340a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 87340d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 873410: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 873413: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 873416: lea edi, [ebp - 0x174] */
  edi = (uint32_t)(ebp + 0xfffffe8cu);
/* 87341c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 87341e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 873420: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 873422: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 873425: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 873427: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 87342a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 87342c: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 87342f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 873432: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 873435: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 873438: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 87343b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 87343e: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 873441: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 873444: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 873447: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 873449: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 87344b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 87344d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 87344f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 873451: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 873454: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 873457: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 87345a: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 87345d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 873460: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 873463: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 873466: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 873469: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 87346b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 87346d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 87346f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 873471: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 873473: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 873476: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 873479: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 87347c: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 87347f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 873482: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 873485: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 873488: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 87348b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 87348d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 87348f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 873491: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 873493: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 873495: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 873497: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 873499: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 87349b: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 87349e: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8734a1: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8734a4: fld dword ptr [ebx + 0x7c] */
  { double v = F32((uint32_t)(ebx + 0x7cu)); FPUSH(v); }
/* 8734a7: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8734aa: mov edx, dword ptr [ebp - 0x174] */
  edx = R32((uint32_t)(ebp + 0xfffffe8cu));
/* 8734b0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8734b2: mov ecx, dword ptr [ebp - 0x170] */
  ecx = R32((uint32_t)(ebp + 0xfffffe90u));
/* 8734b8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8734ba: mov dword ptr [ebp - 0xac], edx */
  W32((uint32_t)(ebp + 0xffffff54u), edx);
/* 8734c0: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 8734c3: mov edx, dword ptr [ebp - 0x16c] */
  edx = R32((uint32_t)(ebp + 0xfffffe94u));
/* 8734c9: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8734cb: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 8734d1: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 8734d4: mov dword ptr [ebp - 0xa4], edx */
  W32((uint32_t)(ebp + 0xffffff5cu), edx);
/* 8734da: fld dword ptr [ebp - 0x174] */
  { double v = F32((uint32_t)(ebp + 0xfffffe8cu)); FPUSH(v); }
/* 8734e0: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8734e2: fstp dword ptr [ebp - 0xac] */
  WF32((uint32_t)(ebp + 0xffffff54u), ST0); FPOP();
/* 8734e8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8734ea: fld dword ptr [ebp - 0xa8] */
  { double v = F32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* 8734f0: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8734f2: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 8734f8: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 8734fa: fsubr dword ptr [ebp - 0xa4] */
  ST0 = (F32((uint32_t)(ebp + 0xffffff5cu))) - ST0;
/* 873500: fld dword ptr [ebx + 0x60] */
  { double v = F32((uint32_t)(ebx + 0x60u)); FPUSH(v); }
/* 873503: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 873506: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 873508: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 87350b: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 87350e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 873510: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 873513: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 873516: fstp dword ptr [ebp - 0x22c] */
  WF32((uint32_t)(ebp + 0xfffffdd4u), ST0); FPOP();
/* 87351c: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 87351f: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 873521: fld dword ptr [ebp - 0xa8] */
  { double v = F32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* 873527: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 87352a: fld dword ptr [ebp - 0xac] */
  { double v = F32((uint32_t)(ebp + 0xffffff54u)); FPUSH(v); }
/* 873530: fsub dword ptr [ebp - 0x22c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffdd4u)));
/* 873536: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 87353c: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 873542: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 873548: fld dword ptr [ebx + 0x60] */
  { double v = F32((uint32_t)(ebx + 0x60u)); FPUSH(v); }
/* 87354b: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 87354e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 873550: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 873553: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 873556: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 873558: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 87355b: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 87355e: fstp dword ptr [ebp - 0x220] */
  WF32((uint32_t)(ebp + 0xfffffde0u), ST0); FPOP();
/* 873564: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 873567: fld dword ptr [ebp - 0xa8] */
  { double v = F32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* 87356d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 873570: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 873573: mov esi, esp */
  esi = esp;
/* 873575: fld dword ptr [ebp - 0x220] */
  { double v = F32((uint32_t)(ebp + 0xfffffde0u)); FPUSH(v); }
/* 87357b: mov dword ptr [ebp - 0x148], 0 */
  W32((uint32_t)(ebp + 0xfffffeb8u), 0x0u);
/* 873585: mov edi, dword ptr [ebp - 0x148] */
  edi = R32((uint32_t)(ebp + 0xfffffeb8u));
/* 87358b: fadd dword ptr [ebp - 0xac] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff54u)));
/* 873591: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 873593: mov dword ptr [ebp - 0x144], 0 */
  W32((uint32_t)(ebp + 0xfffffebcu), 0x0u);
/* 87359d: mov edi, dword ptr [ebp - 0x144] */
  edi = R32((uint32_t)(ebp + 0xfffffebcu));
/* 8735a3: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 8735a6: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 8735a9: mov dword ptr [ebp - 0x140], 0 */
  W32((uint32_t)(ebp + 0xfffffec0u), 0x0u);
/* 8735b3: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8735b6: mov edi, dword ptr [ebp - 0x140] */
  edi = R32((uint32_t)(ebp + 0xfffffec0u));
/* 8735bc: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 8735c1: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8735c4: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 8735c7: lea esi, [ebp - 0xa0] */
  esi = (uint32_t)(ebp + 0xffffff60u);
/* 8735cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8735ce: mov dword ptr [ebp - 0x1b4], eax */
  W32((uint32_t)(ebp + 0xfffffe4cu), eax);
/* 8735d4: mov dword ptr [ebp - 0x1b0], eax */
  W32((uint32_t)(ebp + 0xfffffe50u), eax);
/* 8735da: mov dword ptr [ebp - 0x1ac], eax */
  W32((uint32_t)(ebp + 0xfffffe54u), eax);
/* 8735e0: mov dword ptr [ebp - 0x1a8], eax */
  W32((uint32_t)(ebp + 0xfffffe58u), eax);
/* 8735e6: mov dword ptr [ebp - 0x1a4], eax */
  W32((uint32_t)(ebp + 0xfffffe5cu), eax);
/* 8735ec: mov dword ptr [ebp - 0x1a0], eax */
  W32((uint32_t)(ebp + 0xfffffe60u), eax);
/* 8735f2: mov dword ptr [ebp - 0x19c], eax */
  W32((uint32_t)(ebp + 0xfffffe64u), eax);
/* 8735f8: mov dword ptr [ebp - 0x198], eax */
  W32((uint32_t)(ebp + 0xfffffe68u), eax);
/* 8735fe: mov dword ptr [ebp - 0x194], eax */
  W32((uint32_t)(ebp + 0xfffffe6cu), eax);
/* 873604: mov dword ptr [ebp - 0x188], eax */
  W32((uint32_t)(ebp + 0xfffffe78u), eax);
/* 87360a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 87360d: lea esi, [ebp - 0x58] */
  esi = (uint32_t)(ebp + 0xffffffa8u);
/* 873610: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 873611: mov dword ptr [ebp - 0x190], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe70u), 0x3f800000u);
/* 87361b: mov dword ptr [ebp - 0x18c], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffe74u), 0xffffffffu);
/* 873625: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 87362b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87362d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87362e: lea eax, [ebp - 0x1b4] */
  eax = (uint32_t)(ebp + 0xfffffe4cu);
/* 873634: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 873635: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x87363bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87363b: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 873640: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 873642: je 0x873868 */
  if (zf) goto L_873868;
L_873648: /* 873648: mov ecx, dword ptr [eax + 0x15220] */
  ecx = R32((uint32_t)(eax + 0x15220u));
/* 87364e: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 873651: je 0x873868 */
  if (zf) goto L_873868;
L_873657: /* 873657: fld dword ptr [ebp - 0x190] */
  { double v = F32((uint32_t)(ebp + 0xfffffe70u)); FPUSH(v); }
/* 87365d: mov ecx, dword ptr [ebx + 0x60] */
  ecx = R32((uint32_t)(ebx + 0x60u));
/* 873660: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 873662: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 873668: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 87366b: mov byte ptr [ebp - 0x60], 0xff */
  W8((uint32_t)(ebp + 0xffffffa0u), 0xffu);
/* 87366f: mov byte ptr [ebp - 0x5f], 0 */
  W8((uint32_t)(ebp + 0xffffffa1u), 0x0u);
/* 873673: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 873675: mov byte ptr [ebp - 0x5e], 0 */
  W8((uint32_t)(ebp + 0xffffffa2u), 0x0u);
/* 873679: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 87367b: mov byte ptr [ebp - 0x5d], 0xff */
  W8((uint32_t)(ebp + 0xffffffa3u), 0xffu);
/* 87367f: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 873682: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 873685: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 873686: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 873689: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 87368c: mov eax, esp */
  eax = esp;
/* 87368e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 873690: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 873693: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 873696: mov edx, esp */
  edx = esp;
/* 873698: fstp dword ptr [ebp - 0x238] */
  WF32((uint32_t)(ebp + 0xfffffdc8u), ST0); FPOP();
/* 87369e: fmul dword ptr [ebp - 0x88] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff78u)));
/* 8736a4: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8736a7: fmul dword ptr [ebp - 0x88] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff78u)));
/* 8736ad: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8736b0: fld dword ptr [ebp - 0x238] */
  { double v = F32((uint32_t)(ebp + 0xfffffdc8u)); FPUSH(v); }
/* 8736b6: fmul dword ptr [ebp - 0x88] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff78u)));
/* 8736bc: fstp dword ptr [ebp - 0x250] */
  WF32((uint32_t)(ebp + 0xfffffdb0u), ST0); FPOP();
/* 8736c2: fadd dword ptr [ebp - 0x98] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff68u)));
/* 8736c8: fld dword ptr [ebp - 0x9c] */
  { double v = F32((uint32_t)(ebp + 0xffffff64u)); FPUSH(v); }
/* 8736ce: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8736d1: fld dword ptr [ebp - 0x250] */
  { double v = F32((uint32_t)(ebp + 0xfffffdb0u)); FPUSH(v); }
/* 8736d7: fadd dword ptr [ebp - 0xa0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff60u)));
/* 8736dd: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 8736e3: mov esi, dword ptr [ebp - 0xe4] */
  esi = R32((uint32_t)(ebp + 0xffffff1cu));
/* 8736e9: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 8736eb: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 8736f1: mov edi, dword ptr [ebp - 0xe0] */
  edi = R32((uint32_t)(ebp + 0xffffff20u));
/* 8736f7: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 8736fa: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 873700: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 873706: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 873709: mov eax, dword ptr [ebp - 0xa0] */
  eax = R32((uint32_t)(ebp + 0xffffff60u));
/* 87370f: mov ecx, dword ptr [ebp - 0x9c] */
  ecx = R32((uint32_t)(ebp + 0xffffff64u));
/* 873715: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 873717: mov eax, dword ptr [ebp - 0x98] */
  eax = R32((uint32_t)(ebp + 0xffffff68u));
/* 87371d: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 873720: mov ecx, dword ptr [0xcd8a5c] */
  ecx = R32((uint32_t)(0xcd8a5cu));
/* 873726: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 873729: call 0x6c5b37 */
  esp -= 4; W32(esp, 0x87372eu); SPILL(); f_6c5b37(); if (g_unwind) return; RELOAD();
/* 87372e: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 873731: mov byte ptr [ebp - 0x68], 0xff */
  W8((uint32_t)(ebp + 0xffffff98u), 0xffu);
/* 873735: mov byte ptr [ebp - 0x67], 0xff */
  W8((uint32_t)(ebp + 0xffffff99u), 0xffu);
/* 873739: mov byte ptr [ebp - 0x66], 0 */
  W8((uint32_t)(ebp + 0xffffff9au), 0x0u);
/* 87373d: mov byte ptr [ebp - 0x65], 0xff */
  W8((uint32_t)(ebp + 0xffffff9bu), 0xffu);
/* 873741: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 873744: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 873745: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 873748: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87374b: mov edx, esp */
  edx = esp;
/* 87374d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 87374f: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 873752: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 873755: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 873758: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 87375e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 873761: mov ecx, esp */
  ecx = esp;
/* 873763: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 873765: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 873768: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 87376b: mov ecx, dword ptr [0xcd8a5c] */
  ecx = R32((uint32_t)(0xcd8a5cu));
/* 873771: call 0x6c5b37 */
  esp -= 4; W32(esp, 0x873776u); SPILL(); f_6c5b37(); if (g_unwind) return; RELOAD();
/* 873776: fld dword ptr [ebx + 0x78] */
  { double v = F32((uint32_t)(ebx + 0x78u)); FPUSH(v); }
/* 873779: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 87377c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 87377e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 873780: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 873783: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 873786: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 873788: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 87378b: fstp dword ptr [ebp - 0x268] */
  WF32((uint32_t)(ebp + 0xfffffd98u), ST0); FPOP();
/* 873791: mov byte ptr [ebp - 0x64], 0xff */
  W8((uint32_t)(ebp + 0xffffff9cu), 0xffu);
/* 873795: mov byte ptr [ebp - 0x63], 0 */
  W8((uint32_t)(ebp + 0xffffff9du), 0x0u);
/* 873799: fsubr dword ptr [ebp - 0x50] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffb0u))) - ST0;
/* 87379c: mov byte ptr [ebp - 0x62], 0xff */
  W8((uint32_t)(ebp + 0xffffff9eu), 0xffu);
/* 8737a0: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8737a3: mov byte ptr [ebp - 0x61], 0xff */
  W8((uint32_t)(ebp + 0xffffff9fu), 0xffu);
/* 8737a7: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8737aa: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8737ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8737ae: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8737b1: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 8737b4: mov ecx, esp */
  ecx = esp;
/* 8737b6: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 8737b9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8737bc: fsub dword ptr [ebp - 0x268] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffd98u)));
/* 8737c2: fstp dword ptr [ebp - 0xfc] */
  WF32((uint32_t)(ebp + 0xffffff04u), ST0); FPOP();
/* 8737c8: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 8737ce: fst dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0);
/* 8737d4: fld dword ptr [ebp - 0xbc] */
  { double v = F32((uint32_t)(ebp + 0xffffff44u)); FPUSH(v); }
/* 8737da: fmul dword ptr [0xa0c188] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c188u)));
/* 8737e0: fld dword ptr [ebp - 0xc0] */
  { double v = F32((uint32_t)(ebp + 0xffffff40u)); FPUSH(v); }
/* 8737e6: fmul dword ptr [0xa0c188] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c188u)));
/* 8737ec: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8737ef: fld dword ptr [ebp - 0xc4] */
  { double v = F32((uint32_t)(ebp + 0xffffff3cu)); FPUSH(v); }
/* 8737f5: fmul dword ptr [0xa0c188] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c188u)));
/* 8737fb: fstp dword ptr [ebp - 0x280] */
  WF32((uint32_t)(ebp + 0xfffffd80u), ST0); FPOP();
/* 873801: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 873803: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 873806: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 873809: fld dword ptr [ebp - 0x280] */
  { double v = F32((uint32_t)(ebp + 0xfffffd80u)); FPUSH(v); }
/* 87380f: fadd dword ptr [ebp - 0xfc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff04u)));
/* 873815: fstp dword ptr [ebp - 0x164] */
  WF32((uint32_t)(ebp + 0xfffffe9cu), ST0); FPOP();
/* 87381b: mov edx, dword ptr [ebp - 0x164] */
  edx = R32((uint32_t)(ebp + 0xfffffe9cu));
/* 873821: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 873823: fstp dword ptr [ebp - 0x160] */
  WF32((uint32_t)(ebp + 0xfffffea0u), ST0); FPOP();
/* 873829: mov eax, dword ptr [ebp - 0x160] */
  eax = R32((uint32_t)(ebp + 0xfffffea0u));
/* 87382f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 873832: fstp dword ptr [ebp - 0x15c] */
  WF32((uint32_t)(ebp + 0xfffffea4u), ST0); FPOP();
/* 873838: mov edx, dword ptr [ebp - 0x15c] */
  edx = R32((uint32_t)(ebp + 0xfffffea4u));
/* 87383e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 873841: mov ecx, dword ptr [ebp - 0xfc] */
  ecx = R32((uint32_t)(ebp + 0xffffff04u));
/* 873847: mov edx, dword ptr [ebp - 0xf8] */
  edx = R32((uint32_t)(ebp + 0xffffff08u));
/* 87384d: mov eax, esp */
  eax = esp;
/* 87384f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 873851: mov ecx, dword ptr [ebp - 0xf4] */
  ecx = R32((uint32_t)(ebp + 0xffffff0cu));
/* 873857: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 87385a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 87385d: mov ecx, dword ptr [0xcd8a5c] */
  ecx = R32((uint32_t)(0xcd8a5cu));
/* 873863: call 0x6c5b37 */
  esp -= 4; W32(esp, 0x873868u); SPILL(); f_6c5b37(); if (g_unwind) return; RELOAD();
L_873868: /* 873868: fld dword ptr [ebp - 0x190] */
  { double v = F32((uint32_t)(ebp + 0xfffffe70u)); FPUSH(v); }
/* 87386e: mov esi, dword ptr [ebx + 0xec] */
  esi = R32((uint32_t)(ebx + 0xecu));
/* 873874: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 87387a: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 87387d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87387f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 873882: jp 0x874056 */
  if (pf) goto L_874056;
L_873888: /* 873888: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87388a: jne 0x8738e9 */
  if (!zf) goto L_8738e9;
L_87388c: /* 87388c: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 87388f: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 873895: mov eax, dword ptr [eax + 0x115c] */
  eax = R32((uint32_t)(eax + 0x115cu));
/* 87389b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87389c: call 0x90fc60 */
  esp -= 4; W32(esp, 0x8738a1u); SPILL(); f_90fc60(); if (g_unwind) return; RELOAD();
/* 8738a1: mov ecx, dword ptr [ebp - 0xc8] */
  ecx = R32((uint32_t)(ebp + 0xffffff38u));
/* 8738a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8738a9: mov esi, eax */
  esi = eax;
/* 8738ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8738ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8738ad: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8738b0: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x8738b5u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 8738b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8738b6: call 0x90c130 */
  esp -= 4; W32(esp, 0x8738bbu); SPILL(); f_90c130(); if (g_unwind) return; RELOAD();
/* 8738bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8738bc: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x8738c1u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 8738c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8738c2: call 0x90bc20 */
  esp -= 4; W32(esp, 0x8738c7u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
/* 8738c7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8738c9: mov dword ptr [ebx + 0xec], esi */
  W32((uint32_t)(ebx + 0xecu), esi);
/* 8738cf: jne 0x8738e9 */
  if (!zf) goto L_8738e9;
L_8738d1: /* 8738d1: push 0xd5 */
  { uint32_t v = 0xd5u; esp -= 4; W32(esp, v); }
/* 8738d6: push 0xae59d8 */
  { uint32_t v = 0xae59d8u; esp -= 4; W32(esp, v); }
/* 8738db: push 0xae59e8 */
  { uint32_t v = 0xae59e8u; esp -= 4; W32(esp, v); }
/* 8738e0: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8738e6u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8738e6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8738e9: /* 8738e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8738ea: call 0x90fe50 */
  esp -= 4; W32(esp, 0x8738efu); SPILL(); f_90fe50(); if (g_unwind) return; RELOAD();
/* 8738ef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8738f1: jne 0x8738f9 */
  if (!zf) goto L_8738f9;
L_8738f3: /* 8738f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8738f4: call 0x90ff80 */
  esp -= 4; W32(esp, 0x8738f9u); SPILL(); f_90ff80(); if (g_unwind) return; RELOAD();
L_8738f9: /* 8738f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8738fa: call 0x90fe50 */
  esp -= 4; W32(esp, 0x8738ffu); SPILL(); f_90fe50(); if (g_unwind) return; RELOAD();
/* 8738ff: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 873902: je 0x87391c */
  if (zf) goto L_87391c;
L_873904: /* 873904: push 0xda */
  { uint32_t v = 0xdau; esp -= 4; W32(esp, v); }
/* 873909: push 0xae59ec */
  { uint32_t v = 0xae59ecu; esp -= 4; W32(esp, v); }
/* 87390e: push 0xae59fc */
  { uint32_t v = 0xae59fcu; esp -= 4; W32(esp, v); }
/* 873913: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x873919u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 873919: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_87391c: /* 87391c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87391d: call 0x90fe20 */
  esp -= 4; W32(esp, 0x873922u); SPILL(); f_90fe20(); if (g_unwind) return; RELOAD();
/* 873922: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 873923: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 873926: call 0x90f9b0 */
  esp -= 4; W32(esp, 0x87392bu); SPILL(); f_90f9b0(); if (g_unwind) return; RELOAD();
/* 87392b: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 87392e: mov edi, eax */
  edi = eax;
/* 873930: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 873933: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 873936: mov edx, esp */
  edx = esp;
/* 873938: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 87393a: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 87393d: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 873940: lea ecx, [ebp - 0x154] */
  ecx = (uint32_t)(ebp + 0xfffffeacu);
/* 873946: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 873947: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 87394a: call 0x6c882d */
  esp -= 4; W32(esp, 0x87394fu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 87394f: mov edx, dword ptr [ebp - 0x14c] */
  edx = R32((uint32_t)(ebp + 0xfffffeb4u));
/* 873955: mov eax, dword ptr [ebp - 0x150] */
  eax = R32((uint32_t)(ebp + 0xfffffeb0u));
/* 87395b: mov ecx, dword ptr [ebp - 0x154] */
  ecx = R32((uint32_t)(ebp + 0xfffffeacu));
/* 873961: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 873964: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 873965: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 873968: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 873969: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87396a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87396b: call 0x90fae0 */
  esp -= 4; W32(esp, 0x873970u); SPILL(); f_90fae0(); if (g_unwind) return; RELOAD();
/* 873970: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 873973: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 873979: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 87397c: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 87397f: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 873982: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 873988: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 87398b: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 87398e: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 873991: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 873997: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 87399a: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 87399d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87399e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8739a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8739a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8739a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8739a4: call 0x90fb10 */
  esp -= 4; W32(esp, 0x8739a9u); SPILL(); f_90fb10(); if (g_unwind) return; RELOAD();
/* 8739a9: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8739af: fsub dword ptr [ebp - 0x190] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffe70u)));
/* 8739b5: mov ecx, dword ptr [ebx + 0x64] */
  ecx = R32((uint32_t)(ebx + 0x64u));
/* 8739b8: mov dword ptr [ebp - 0xcc], ecx */
  W32((uint32_t)(ebp + 0xffffff34u), ecx);
/* 8739be: fmul dword ptr [ebx + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x60u)));
/* 8739c1: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 8739c3: fst dword ptr [ebx + 0xe4] */
  WF32((uint32_t)(ebx + 0xe4u), ST0);
/* 8739c9: fmul dword ptr [0xa18504] */
  ST0 = ST0 * (F32((uint32_t)(0xa18504u)));
/* 8739cf: fsub dword ptr [0x9f7c0c] */
  ST0 = ST0 - (F32((uint32_t)(0x9f7c0cu)));
/* 8739d5: fld dword ptr [0xa18504] */
  { double v = F32((uint32_t)(0xa18504u)); FPUSH(v); }
/* 8739db: fmul dword ptr [ebx + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x78u)));
/* 8739de: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8739e0: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8739e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8739e4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8739e7: jne 0x8739f3 */
  if (!zf) goto L_8739f3;
L_8739e9: /* 8739e9: mov dword ptr [ebp - 0xcc], 0x3a83126f */
  W32((uint32_t)(ebp + 0xffffff34u), 0x3a83126fu);
L_8739f3: /* 8739f3: fmul dword ptr [ebx + 0x68] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x68u)));
/* 8739f6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8739f9: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8739fc: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8739ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 873a00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 873a01: call 0x90fb40 */
  esp -= 4; W32(esp, 0x873a06u); SPILL(); f_90fb40(); if (g_unwind) return; RELOAD();
/* 873a06: fld dword ptr [ebx + 0x28] */
  { double v = F32((uint32_t)(ebx + 0x28u)); FPUSH(v); }
/* 873a09: fmul dword ptr [0xa187fc] */
  ST0 = ST0 * (F32((uint32_t)(0xa187fcu)));
/* 873a0f: mov eax, dword ptr [ebp - 0x118] */
  eax = R32((uint32_t)(ebp + 0xfffffee8u));
/* 873a15: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 873a18: lea edx, [ebp - 0x1d0] */
  edx = (uint32_t)(ebp + 0xfffffe30u);
/* 873a1e: fmul qword ptr [0xa178a8] */
  ST0 = ST0 * (F64((uint32_t)(0xa178a8u)));
/* 873a24: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 873a2a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 873a2c: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 873a2e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 873a30: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 873a32: fstp dword ptr [ebp - 0x1d0] */
  WF32((uint32_t)(ebp + 0xfffffe30u), ST0); FPOP();
/* 873a38: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 873a3a: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 873a3d: fstp dword ptr [ebp - 0x1cc] */
  WF32((uint32_t)(ebp + 0xfffffe34u), ST0); FPOP();
/* 873a43: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 873a45: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 873a48: fstp dword ptr [ebp - 0x1c8] */
  WF32((uint32_t)(ebp + 0xfffffe38u), ST0); FPOP();
/* 873a4e: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 873a51: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 873a54: fstp dword ptr [ebp - 0x1c4] */
  WF32((uint32_t)(ebp + 0xfffffe3cu), ST0); FPOP();
/* 873a5a: call 0x8721d0 */
  esp -= 4; W32(esp, 0x873a5fu); SPILL(); f_8721d0(); if (g_unwind) return; RELOAD();
/* 873a5f: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 873a62: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 873a63: lea edx, [ebx + 0xcc] */
  edx = (uint32_t)(ebx + 0xccu);
/* 873a69: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 873a6a: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x873a6fu); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 873a6f: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 873a72: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 873a75: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 873a78: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 873a7b: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 873a7e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 873a80: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 873a83: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 873a86: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 873a88: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 873a8e: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 873a91: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 873a93: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 873a96: je 0x873a9a */
  if (zf) goto L_873a9a;
L_873a98: /* 873a98: fchs  */
  ST0 = -ST0;
L_873a9a: /* 873a9a: fcomp dword ptr [0xa187f8] */
  fpu_com(ST0, F32((uint32_t)(0xa187f8u)));
  FPOP();
/* 873aa0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 873aa2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 873aa5: jne 0x873ac0 */
  if (!zf) goto L_873ac0;
L_873aa7: /* 873aa7: lea esi, [ebp - 0xd8] */
  esi = (uint32_t)(ebp + 0xffffff28u);
/* 873aad: lea edx, [ebp - 0x84] */
  edx = (uint32_t)(ebp + 0xffffff7cu);
/* 873ab3: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 873ab6: call 0x8720a0 */
  esp -= 4; W32(esp, 0x873abbu); SPILL(); f_8720a0(); if (g_unwind) return; RELOAD();
/* 873abb: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 873abe: jmp 0x873b3d */
  goto L_873b3d;
L_873ac0: /* 873ac0: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 873ac3: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 873ac9: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 873acc: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 873acf: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 873ad2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 873ad4: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 873ada: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 873add: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 873ae0: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 873ae3: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 873ae6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 873ae8: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 873aeb: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 873aee: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 873af1: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 873af4: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 873af7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 873af9: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 873afc: call 0x872020 */
  esp -= 4; W32(esp, 0x873b01u); SPILL(); f_872020(); if (g_unwind) return; RELOAD();
/* 873b01: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 873b03: lea ecx, [ebp - 0xd8] */
  ecx = (uint32_t)(ebp + 0xffffff28u);
/* 873b09: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 873b0c: fchs  */
  ST0 = -ST0;
/* 873b0e: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 873b11: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 873b13: fadd dword ptr [ebp - 0x78] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff88u)));
/* 873b16: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 873b1c: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 873b1f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 873b21: fadd dword ptr [ebp - 0x74] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 873b24: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 873b2a: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 873b2d: fadd dword ptr [ebp - 0x70] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff90u)));
/* 873b30: fstp dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0); FPOP();
/* 873b36: call 0x872020 */
  esp -= 4; W32(esp, 0x873b3bu); SPILL(); f_872020(); if (g_unwind) return; RELOAD();
/* 873b3b: fstp st(0) */
  STI(0) = ST0; FPOP();
L_873b3d: /* 873b3d: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 873b42: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 873b44: je 0x873d9a */
  if (zf) goto L_873d9a;
L_873b4a: /* 873b4a: mov ecx, dword ptr [eax + 0x15220] */
  ecx = R32((uint32_t)(eax + 0x15220u));
/* 873b50: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 873b53: je 0x873d9a */
  if (zf) goto L_873d9a;
L_873b59: /* 873b59: lea eax, [ebp - 0x154] */
  eax = (uint32_t)(ebp + 0xfffffeacu);
/* 873b5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 873b60: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 873b63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 873b64: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x873b69u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 873b69: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 873b6c: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 873b6f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 873b70: lea eax, [ebp - 0x94] */
  eax = (uint32_t)(ebp + 0xffffff6cu);
/* 873b76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 873b77: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x873b7cu); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 873b7c: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 873b82: fmul dword ptr [0xa0c188] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c188u)));
/* 873b88: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 873b8b: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 873b91: mov byte ptr [ebp - 0x48], 0 */
  W8((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 873b95: fmul dword ptr [0xa0c188] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c188u)));
/* 873b9b: mov byte ptr [ebp - 0x47], 0 */
  W8((uint32_t)(ebp + 0xffffffb9u), 0x0u);
/* 873b9f: mov byte ptr [ebp - 0x46], 0xff */
  W8((uint32_t)(ebp + 0xffffffbau), 0xffu);
/* 873ba3: mov byte ptr [ebp - 0x45], 0xff */
  W8((uint32_t)(ebp + 0xffffffbbu), 0xffu);
/* 873ba7: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 873baa: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 873bad: fld dword ptr [ebp - 0x94] */
  { double v = F32((uint32_t)(ebp + 0xffffff6cu)); FPUSH(v); }
/* 873bb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 873bb4: fmul dword ptr [0xa0c188] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c188u)));
/* 873bba: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 873bbd: mov edx, esp */
  edx = esp;
/* 873bbf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 873bc2: fstp dword ptr [ebp - 0x25c] */
  WF32((uint32_t)(ebp + 0xfffffda4u), ST0); FPOP();
/* 873bc8: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 873bcb: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 873bce: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 873bd1: fld dword ptr [ebp - 0x25c] */
  { double v = F32((uint32_t)(ebp + 0xfffffda4u)); FPUSH(v); }
/* 873bd7: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 873bda: fstp dword ptr [ebp - 0x130] */
  WF32((uint32_t)(ebp + 0xfffffed0u), ST0); FPOP();
/* 873be0: mov eax, dword ptr [ebp - 0x130] */
  eax = R32((uint32_t)(ebp + 0xfffffed0u));
/* 873be6: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 873be8: fstp dword ptr [ebp - 0x12c] */
  WF32((uint32_t)(ebp + 0xfffffed4u), ST0); FPOP();
/* 873bee: mov ecx, dword ptr [ebp - 0x12c] */
  ecx = R32((uint32_t)(ebp + 0xfffffed4u));
/* 873bf4: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 873bf7: fstp dword ptr [ebp - 0x128] */
  WF32((uint32_t)(ebp + 0xfffffed8u), ST0); FPOP();
/* 873bfd: mov eax, dword ptr [ebp - 0x128] */
  eax = R32((uint32_t)(ebp + 0xfffffed8u));
/* 873c03: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 873c06: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 873c09: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 873c0c: mov ecx, esp */
  ecx = esp;
/* 873c0e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 873c10: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 873c13: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 873c16: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 873c19: mov ecx, dword ptr [0xcd8a5c] */
  ecx = R32((uint32_t)(0xcd8a5cu));
/* 873c1f: call 0x6c5b37 */
  esp -= 4; W32(esp, 0x873c24u); SPILL(); f_6c5b37(); if (g_unwind) return; RELOAD();
/* 873c24: lea eax, [ebp - 0x84] */
  eax = (uint32_t)(ebp + 0xffffff7cu);
/* 873c2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 873c2b: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 873c31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 873c32: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x873c37u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 873c37: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 873c3d: fmul dword ptr [0xa0c188] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c188u)));
/* 873c43: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 873c46: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 873c4c: mov byte ptr [ebp - 0x5c], 0 */
  W8((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 873c50: fmul dword ptr [0xa0c188] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c188u)));
/* 873c56: mov byte ptr [ebp - 0x5b], 0xff */
  W8((uint32_t)(ebp + 0xffffffa5u), 0xffu);
/* 873c5a: mov byte ptr [ebp - 0x5a], 0 */
  W8((uint32_t)(ebp + 0xffffffa6u), 0x0u);
/* 873c5e: mov byte ptr [ebp - 0x59], 0xff */
  W8((uint32_t)(ebp + 0xffffffa7u), 0xffu);
/* 873c62: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 873c65: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 873c68: fld dword ptr [ebp - 0x94] */
  { double v = F32((uint32_t)(ebp + 0xffffff6cu)); FPUSH(v); }
/* 873c6e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 873c6f: fmul dword ptr [0xa0c188] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c188u)));
/* 873c75: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 873c78: fstp dword ptr [ebp - 0x244] */
  WF32((uint32_t)(ebp + 0xfffffdbcu), ST0); FPOP();
/* 873c7e: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 873c81: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 873c84: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 873c87: fld dword ptr [ebp - 0x244] */
  { double v = F32((uint32_t)(ebp + 0xfffffdbcu)); FPUSH(v); }
/* 873c8d: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 873c90: fstp dword ptr [ebp - 0x124] */
  WF32((uint32_t)(ebp + 0xfffffedcu), ST0); FPOP();
/* 873c96: fstp dword ptr [ebp - 0x120] */
  WF32((uint32_t)(ebp + 0xfffffee0u), ST0); FPOP();
/* 873c9c: fstp dword ptr [ebp - 0x11c] */
  WF32((uint32_t)(ebp + 0xfffffee4u), ST0); FPOP();
/* 873ca2: mov ecx, dword ptr [ebp - 0x124] */
  ecx = R32((uint32_t)(ebp + 0xfffffedcu));
/* 873ca8: mov edx, dword ptr [ebp - 0x120] */
  edx = R32((uint32_t)(ebp + 0xfffffee0u));
/* 873cae: mov eax, esp */
  eax = esp;
/* 873cb0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 873cb2: mov ecx, dword ptr [ebp - 0x11c] */
  ecx = R32((uint32_t)(ebp + 0xfffffee4u));
/* 873cb8: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 873cbb: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 873cbe: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 873cc1: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 873cc4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 873cc7: mov edx, esp */
  edx = esp;
/* 873cc9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 873ccb: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 873cce: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 873cd1: mov ecx, dword ptr [0xcd8a5c] */
  ecx = R32((uint32_t)(0xcd8a5cu));
/* 873cd7: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 873cda: call 0x6c5b37 */
  esp -= 4; W32(esp, 0x873cdfu); SPILL(); f_6c5b37(); if (g_unwind) return; RELOAD();
/* 873cdf: lea ecx, [ebp - 0xd8] */
  ecx = (uint32_t)(ebp + 0xffffff28u);
/* 873ce5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 873ce6: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 873cec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 873ced: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x873cf2u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 873cf2: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 873cf8: fmul dword ptr [0xa0c188] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c188u)));
/* 873cfe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 873d01: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 873d07: mov byte ptr [ebp - 0x4c], 0xff */
  W8((uint32_t)(ebp + 0xffffffb4u), 0xffu);
/* 873d0b: fmul dword ptr [0xa0c188] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c188u)));
/* 873d11: mov byte ptr [ebp - 0x4b], 0 */
  W8((uint32_t)(ebp + 0xffffffb5u), 0x0u);
/* 873d15: mov byte ptr [ebp - 0x4a], 0 */
  W8((uint32_t)(ebp + 0xffffffb6u), 0x0u);
/* 873d19: mov byte ptr [ebp - 0x49], 0xff */
  W8((uint32_t)(ebp + 0xffffffb7u), 0xffu);
/* 873d1d: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 873d20: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 873d23: fld dword ptr [ebp - 0x94] */
  { double v = F32((uint32_t)(ebp + 0xffffff6cu)); FPUSH(v); }
/* 873d29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 873d2a: fmul dword ptr [0xa0c188] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c188u)));
/* 873d30: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 873d33: mov ecx, esp */
  ecx = esp;
/* 873d35: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 873d38: fstp dword ptr [ebp - 0x274] */
  WF32((uint32_t)(ebp + 0xfffffd8cu), ST0); FPOP();
/* 873d3e: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 873d41: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 873d44: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 873d47: fld dword ptr [ebp - 0x274] */
  { double v = F32((uint32_t)(ebp + 0xfffffd8cu)); FPUSH(v); }
/* 873d4d: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 873d50: fstp dword ptr [ebp - 0x114] */
  WF32((uint32_t)(ebp + 0xfffffeecu), ST0); FPOP();
/* 873d56: mov edx, dword ptr [ebp - 0x114] */
  edx = R32((uint32_t)(ebp + 0xfffffeecu));
/* 873d5c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 873d5e: fstp dword ptr [ebp - 0x110] */
  WF32((uint32_t)(ebp + 0xfffffef0u), ST0); FPOP();
/* 873d64: mov eax, dword ptr [ebp - 0x110] */
  eax = R32((uint32_t)(ebp + 0xfffffef0u));
/* 873d6a: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 873d6d: fstp dword ptr [ebp - 0x10c] */
  WF32((uint32_t)(ebp + 0xfffffef4u), ST0); FPOP();
/* 873d73: mov edx, dword ptr [ebp - 0x10c] */
  edx = R32((uint32_t)(ebp + 0xfffffef4u));
/* 873d79: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 873d7c: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 873d7f: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 873d82: mov eax, esp */
  eax = esp;
/* 873d84: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 873d86: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 873d89: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 873d8c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 873d8f: mov ecx, dword ptr [0xcd8a5c] */
  ecx = R32((uint32_t)(0xcd8a5cu));
/* 873d95: call 0x6c5b37 */
  esp -= 4; W32(esp, 0x873d9au); SPILL(); f_6c5b37(); if (g_unwind) return; RELOAD();
L_873d9a: /* 873d9a: mov edx, dword ptr [ebp - 0xd0] */
  edx = R32((uint32_t)(ebp + 0xffffff30u));
/* 873da0: mov eax, dword ptr [ebp - 0xd4] */
  eax = R32((uint32_t)(ebp + 0xffffff2cu));
/* 873da6: mov ecx, dword ptr [ebp - 0xd8] */
  ecx = R32((uint32_t)(ebp + 0xffffff28u));
/* 873dac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 873dad: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 873db0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 873db1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 873db2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 873db3: call 0x90fba0 */
  esp -= 4; W32(esp, 0x873db8u); SPILL(); f_90fba0(); if (g_unwind) return; RELOAD();
/* 873db8: lea eax, [ebp - 0x84] */
  eax = (uint32_t)(ebp + 0xffffff7cu);
/* 873dbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 873dbf: lea eax, [ebx + 0xc0] */
  eax = (uint32_t)(ebx + 0xc0u);
/* 873dc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 873dc6: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x873dcbu); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 873dcb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 873dce: lea ecx, [ebp - 0x1c0] */
  ecx = (uint32_t)(ebp + 0xfffffe40u);
/* 873dd4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 873dd5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 873dd7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 873dd8: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x873dddu); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 873ddd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 873dde: call 0x90bdc0 */
  esp -= 4; W32(esp, 0x873de3u); SPILL(); f_90bdc0(); if (g_unwind) return; RELOAD();
/* 873de3: fld dword ptr [ebp - 0x1b8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe48u)); FPUSH(v); }
/* 873de9: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 873dec: fld dword ptr [ebp - 0x1bc] */
  { double v = F32((uint32_t)(ebp + 0xfffffe44u)); FPUSH(v); }
/* 873df2: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 873df5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 873df7: fld dword ptr [ebp - 0x1c0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe40u)); FPUSH(v); }
/* 873dfd: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 873e00: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 873e02: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 873e08: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 873e0a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 873e0d: jp 0x873e17 */
  if (pf) goto L_873e17;
L_873e0f: /* 873e0f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 873e11: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_873e17: /* 873e17: fstp dword ptr [ebx + 0xbc] */
  WF32((uint32_t)(ebx + 0xbcu), ST0); FPOP();
/* 873e1d: fld dword ptr [ebx + 0x30] */
  { double v = F32((uint32_t)(ebx + 0x30u)); FPUSH(v); }
/* 873e20: fcomp dword ptr [0x9f7c0c] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c0cu)));
  FPOP();
/* 873e26: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 873e28: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 873e2b: jp 0x873e31 */
  if (pf) goto L_873e31;
L_873e2d: /* 873e2d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 873e2f: jmp 0x873e33 */
  goto L_873e33;
L_873e31: /* 873e31: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
L_873e33: /* 873e33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 873e34: call 0x911f10 */
  esp -= 4; W32(esp, 0x873e39u); SPILL(); f_911f10(); if (g_unwind) return; RELOAD();
/* 873e39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 873e3b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 873e3c: call 0x912000 */
  esp -= 4; W32(esp, 0x873e41u); SPILL(); f_912000(); if (g_unwind) return; RELOAD();
/* 873e41: mov edx, dword ptr [ebx + 0x34] */
  edx = R32((uint32_t)(ebx + 0x34u));
/* 873e44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 873e45: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 873e46: call 0x912130 */
  esp -= 4; W32(esp, 0x873e4bu); SPILL(); f_912130(); if (g_unwind) return; RELOAD();
/* 873e4b: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 873e4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 873e4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 873e50: call 0x9121f0 */
  esp -= 4; W32(esp, 0x873e55u); SPILL(); f_9121f0(); if (g_unwind) return; RELOAD();
/* 873e55: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 873e58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 873e59: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 873e5a: call 0x912150 */
  esp -= 4; W32(esp, 0x873e5fu); SPILL(); f_912150(); if (g_unwind) return; RELOAD();
/* 873e5f: mov edx, dword ptr [ebx + 0x38] */
  edx = R32((uint32_t)(ebx + 0x38u));
/* 873e62: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 873e63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 873e64: call 0x912210 */
  esp -= 4; W32(esp, 0x873e69u); SPILL(); f_912210(); if (g_unwind) return; RELOAD();
/* 873e69: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* 873e6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 873e70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 873e71: call 0x912090 */
  esp -= 4; W32(esp, 0x873e76u); SPILL(); f_912090(); if (g_unwind) return; RELOAD();
/* 873e76: fld dword ptr [0xa18504] */
  { double v = F32((uint32_t)(0xa18504u)); FPUSH(v); }
/* 873e7c: fmul dword ptr [ebx + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x44u)));
/* 873e7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 873e80: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 873e83: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 873e84: call 0x912270 */
  esp -= 4; W32(esp, 0x873e89u); SPILL(); f_912270(); if (g_unwind) return; RELOAD();
/* 873e89: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 873e8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 873e8c: call 0x9121b0 */
  esp -= 4; W32(esp, 0x873e91u); SPILL(); f_9121b0(); if (g_unwind) return; RELOAD();
/* 873e91: mov ecx, dword ptr [ebx + 0x6c] */
  ecx = R32((uint32_t)(ebx + 0x6cu));
/* 873e94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 873e95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 873e96: call 0x912020 */
  esp -= 4; W32(esp, 0x873e9bu); SPILL(); f_912020(); if (g_unwind) return; RELOAD();
/* 873e9b: mov edx, dword ptr [ebx + 0x70] */
  edx = R32((uint32_t)(ebx + 0x70u));
/* 873e9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 873e9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 873ea0: call 0x9120f0 */
  esp -= 4; W32(esp, 0x873ea5u); SPILL(); f_9120f0(); if (g_unwind) return; RELOAD();
/* 873ea5: mov edx, dword ptr [ebp - 0xc8] */
  edx = R32((uint32_t)(ebp + 0xffffff38u));
/* 873eab: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 873eb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 873eb2: lea ecx, [ebp - 0x154] */
  ecx = (uint32_t)(ebp + 0xfffffeacu);
/* 873eb8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 873eb9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 873eba: call 0x90e330 */
  esp -= 4; W32(esp, 0x873ebfu); SPILL(); f_90e330(); if (g_unwind) return; RELOAD();
/* 873ebf: fld dword ptr [ebp - 0xb0] */
  { double v = F32((uint32_t)(ebp + 0xffffff50u)); FPUSH(v); }
/* 873ec5: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 873ec8: fld dword ptr [ebp - 0xb4] */
  { double v = F32((uint32_t)(ebp + 0xffffff4cu)); FPUSH(v); }
/* 873ece: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 873ed1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 873ed3: fld dword ptr [ebp - 0xb8] */
  { double v = F32((uint32_t)(ebp + 0xffffff48u)); FPUSH(v); }
/* 873ed9: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 873edc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 873ede: fchs  */
  ST0 = -ST0;
/* 873ee0: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 873ee3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 873ee5: fadd dword ptr [ebp - 0xb8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff48u)));
/* 873eeb: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 873ef1: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 873ef4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 873ef6: fadd dword ptr [ebp - 0xb4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff4cu)));
/* 873efc: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 873f02: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 873f05: fadd dword ptr [ebp - 0xb0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff50u)));
/* 873f0b: fld dword ptr [ebp - 0xb0] */
  { double v = F32((uint32_t)(ebp + 0xffffff50u)); FPUSH(v); }
/* 873f11: fmul dword ptr [ebp - 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff84u)));
/* 873f14: fld dword ptr [ebp - 0xb4] */
  { double v = F32((uint32_t)(ebp + 0xffffff4cu)); FPUSH(v); }
/* 873f1a: fmul dword ptr [ebp - 0x80] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff80u)));
/* 873f1d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 873f1f: fld dword ptr [ebp - 0xb8] */
  { double v = F32((uint32_t)(ebp + 0xffffff48u)); FPUSH(v); }
/* 873f25: fmul dword ptr [ebp - 0x84] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 873f2b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 873f2d: fmul dword ptr [0xa18500] */
  ST0 = ST0 * (F32((uint32_t)(0xa18500u)));
/* 873f33: fchs  */
  ST0 = -ST0;
/* 873f35: fld dword ptr [ebx + 0xd8] */
  { double v = F32((uint32_t)(ebx + 0xd8u)); FPUSH(v); }
/* 873f3b: fmul dword ptr [ebx + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x60u)));
/* 873f3e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 873f40: fstp dword ptr [ebx + 0xe0] */
  WF32((uint32_t)(ebx + 0xe0u), ST0); FPOP();
/* 873f46: fld dword ptr [ebp - 0xec] */
  { double v = F32((uint32_t)(ebp + 0xffffff14u)); FPUSH(v); }
/* 873f4c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 873f4e: fld dword ptr [ebp - 0xf0] */
  { double v = F32((uint32_t)(ebp + 0xffffff10u)); FPUSH(v); }
/* 873f54: fmul dword ptr [ebp - 0xf0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff10u)));
/* 873f5a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 873f5c: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 873f5e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 873f60: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 873f62: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 873f64: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 873f66: fcomp dword ptr [0xa187f4] */
  fpu_com(ST0, F32((uint32_t)(0xa187f4u)));
  FPOP();
/* 873f6c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 873f6e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 873f70: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 873f73: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 873f75: jp 0x873f88 */
  if (pf) goto L_873f88;
L_873f77: /* 873f77: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 873f79: mov dword ptr [ebx + 0xdc], 0 */
  W32((uint32_t)(ebx + 0xdcu), 0x0u);
/* 873f83: jmp 0x874029 */
  goto L_874029;
L_873f88: /* 873f88: mov ecx, dword ptr [ebp - 0xec] */
  ecx = R32((uint32_t)(ebp + 0xffffff14u));
/* 873f8e: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 873f94: mov eax, dword ptr [ebp - 0xf0] */
  eax = R32((uint32_t)(ebp + 0xffffff10u));
/* 873f9a: mov dword ptr [ebp - 0x104], ecx */
  W32((uint32_t)(ebp + 0xfffffefcu), ecx);
/* 873fa0: lea ecx, [ebp - 0x108] */
  ecx = (uint32_t)(ebp + 0xfffffef8u);
/* 873fa6: mov dword ptr [ebp - 0x108], eax */
  W32((uint32_t)(ebp + 0xfffffef8u), eax);
/* 873fac: call 0x872020 */
  esp -= 4; W32(esp, 0x873fb1u); SPILL(); f_872020(); if (g_unwind) return; RELOAD();
/* 873fb1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 873fb3: fld dword ptr [ebp - 0x100] */
  { double v = F32((uint32_t)(ebp + 0xffffff00u)); FPUSH(v); }
/* 873fb9: fmul dword ptr [ebp - 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff84u)));
/* 873fbc: fld dword ptr [ebp - 0x104] */
  { double v = F32((uint32_t)(ebp + 0xfffffefcu)); FPUSH(v); }
/* 873fc2: fmul dword ptr [ebp - 0x80] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff80u)));
/* 873fc5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 873fc7: fld dword ptr [ebp - 0x108] */
  { double v = F32((uint32_t)(ebp + 0xfffffef8u)); FPUSH(v); }
/* 873fcd: fmul dword ptr [ebp - 0x84] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 873fd3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 873fd5: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 873fd8: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 873fde: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 873fe0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 873fe3: jp 0x873ffe */
  if (pf) goto L_873ffe;
L_873fe5: /* 873fe5: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 873fe8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 873fee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 873ff0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 873ff3: jp 0x873ffe */
  if (pf) goto L_873ffe;
L_873ff5: /* 873ff5: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 873ffc: jmp 0x874015 */
  goto L_874015;
L_873ffe: /* 873ffe: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 874001: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 874007: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 874009: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 87400c: jnp 0x874015 */
  if (!pf) goto L_874015;
L_87400e: /* 87400e: mov dword ptr [ebp - 0x14], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x3f800000u);
L_874015: /* 874015: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 874018: call 0x99cc96 */
  esp -= 4; W32(esp, 0x87401du); SPILL(); hle_CIacos(); RELOAD();
/* 87401d: fmul qword ptr [0xa187e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa187e8u)));
/* 874023: fstp dword ptr [ebx + 0xdc] */
  WF32((uint32_t)(ebx + 0xdcu), ST0); FPOP();
L_874029: /* 874029: mov eax, dword ptr [ebx + 0xb8] */
  eax = R32((uint32_t)(ebx + 0xb8u));
/* 87402f: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 874032: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 874033: mov dword ptr [ebx + 0xb8], eax */
  W32((uint32_t)(ebx + 0xb8u), eax);
/* 874039: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x87403eu); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 87403e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87403f: call 0x90bd20 */
  esp -= 4; W32(esp, 0x874044u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 874044: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 874046: jne 0x8740ae */
  if (!zf) goto L_8740ae;
L_874048: /* 874048: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 874049: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x87404eu); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 87404e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87404f: call 0x90bc20 */
  esp -= 4; W32(esp, 0x874054u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
/* 874054: jmp 0x8740ae */
  goto L_8740ae;
L_874056: /* 874056: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 874058: je 0x8740ae */
  if (zf) goto L_8740ae;
L_87405a: /* 87405a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87405b: call 0x90fe50 */
  esp -= 4; W32(esp, 0x874060u); SPILL(); f_90fe50(); if (g_unwind) return; RELOAD();
/* 874060: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 874063: jl 0x87407d */
  if ((sf != of)) goto L_87407d;
L_874065: /* 874065: push 0x1a1 */
  { uint32_t v = 0x1a1u; esp -= 4; W32(esp, v); }
/* 87406a: push 0xae5a20 */
  { uint32_t v = 0xae5a20u; esp -= 4; W32(esp, v); }
/* 87406f: push 0xae5a30 */
  { uint32_t v = 0xae5a30u; esp -= 4; W32(esp, v); }
/* 874074: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x87407au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 87407a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_87407d: /* 87407d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87407e: call 0x90fe20 */
  esp -= 4; W32(esp, 0x874083u); SPILL(); f_90fe20(); if (g_unwind) return; RELOAD();
/* 874083: cmp eax, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 874089: je 0x874092 */
  if (zf) goto L_874092;
L_87408b: /* 87408b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87408c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87408d: call 0x90ffc0 */
  esp -= 4; W32(esp, 0x874092u); SPILL(); f_90ffc0(); if (g_unwind) return; RELOAD();
L_874092: /* 874092: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 874093: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x874098u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 874098: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 874099: call 0x90bd20 */
  esp -= 4; W32(esp, 0x87409eu); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 87409e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8740a0: je 0x8740ae */
  if (zf) goto L_8740ae;
L_8740a2: /* 8740a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8740a3: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x8740a8u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 8740a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8740a9: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x8740aeu); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
L_8740ae: /* 8740ae: fld dword ptr [ebx + 0x7c] */
  { double v = F32((uint32_t)(ebx + 0x7cu)); FPUSH(v); }
/* 8740b1: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 8740b4: fadd dword ptr [ebx + 0xe4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0xe4u)));
/* 8740ba: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8740bb: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 8740be: fstp dword ptr [ebx + 0xe4] */
  WF32((uint32_t)(ebx + 0xe4u), ST0); FPOP();
/* 8740c4: jmp 0x873370 */
  goto L_873370;
L_8740c9: /* 8740c9: lea ecx, [ebp - 0x214] */
  ecx = (uint32_t)(ebp + 0xfffffdecu);
/* 8740cf: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8740d3: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8740d9u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8740d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8740dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8740dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8740de: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8740e5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8740e6: mov esp, ebp */
  esp = ebp;
/* 8740e8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8740e9: ret  */
  esp += 4; SPILL(); return;
}

void f_8740ea(void) {
  LOAD_REGS();
L_8740ea: /* 8740ea: mov edx, dword ptr [ebp - 0x1d4] */
  edx = R32((uint32_t)(ebp + 0xfffffe2cu));
/* 8740f0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8740f5: lea eax, [ebp - 0x158] */
  eax = (uint32_t)(ebp + 0xfffffea8u);
/* 8740fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8740fc: mov dword ptr [ebp - 0x158], edx */
  W32((uint32_t)(ebp + 0xfffffea8u), edx);
/* 874102: call 0x99caf8 */
  esp -= 4; W32(esp, 0x874107u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_874107(); return;
}

void f_874107(void) {
  LOAD_REGS();
L_874107: /* 874107: push 0xa187a4 */
  { uint32_t v = 0xa187a4u; esp -= 4; W32(esp, v); }
/* 87410c: push 0xae5a50 */
  { uint32_t v = 0xae5a50u; esp -= 4; W32(esp, v); }
/* 874111: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x874117u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 874117: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87411a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87411c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87411e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x874123u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_874123: guest_badaddr(0x874123); return;
}

void f_874500(void) {
  LOAD_REGS();
L_874500: /* 874500: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 874501: mov ebp, esp */
  ebp = esp;
/* 874503: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 874505: push 0x9d48dc */
  { uint32_t v = 0x9d48dcu; esp -= 4; W32(esp, v); }
/* 87450a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 874510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 874511: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 874518: sub esp, 0x374 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x374u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87451e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87451f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 874520: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 874521: xor ebx, ebx */
  ebx = 0;
/* 874523: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 874526: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 874529: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 87452c: call 0x6c3aa8 */
  esp -= 4; W32(esp, 0x874531u); SPILL(); f_6c3aa8(); if (g_unwind) return; RELOAD();
/* 874531: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 874534: cmp dword ptr [eax + 0xd0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xd0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87453a: jne 0x874554 */
  if (!zf) goto L_874554;
L_87453c: /* 87453c: push 0x1ce */
  { uint32_t v = 0x1ceu; esp -= 4; W32(esp, v); }
/* 874541: push 0xae5a58 */
  { uint32_t v = 0xae5a58u; esp -= 4; W32(esp, v); }
/* 874546: push 0xae5a68 */
  { uint32_t v = 0xae5a68u; esp -= 4; W32(esp, v); }
/* 87454b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x874551u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 874551: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_874554: /* 874554: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 874557: mov esi, dword ptr [ecx + 0xd0] */
  esi = R32((uint32_t)(ecx + 0xd0u));
/* 87455d: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87455f: je 0x874577 */
  if (zf) goto L_874577;
L_874561: /* 874561: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 874566: mov ecx, esi */
  ecx = esi;
/* 874568: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87456eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87456e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 874570: je 0x874577 */
  if (zf) goto L_874577;
L_874572: /* 874572: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 874575: jmp 0x874594 */
  goto L_874594;
L_874577: /* 874577: push 0x1d0 */
  { uint32_t v = 0x1d0u; esp -= 4; W32(esp, v); }
/* 87457c: push 0xae5a70 */
  { uint32_t v = 0xae5a70u; esp -= 4; W32(esp, v); }
/* 874581: xor esi, esi */
  esi = 0;
/* 874583: push 0xae5a80 */
  { uint32_t v = 0xae5a80u; esp -= 4; W32(esp, v); }
/* 874588: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 87458b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x874591u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 874591: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_874594: /* 874594: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 874597: fld dword ptr [eax + 0x284] */
  { double v = F32((uint32_t)(eax + 0x284u)); FPUSH(v); }
/* 87459d: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8745a0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8745a2: fmul dword ptr [eax + 0x290] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x290u)));
/* 8745a8: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8745ab: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8745ad: fmul dword ptr [eax + 0x28c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28cu)));
/* 8745b3: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8745b6: fmul dword ptr [eax + 0x288] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x288u)));
/* 8745bc: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 8745bf: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8745c2: fmul dword ptr [esi + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x80u)));
/* 8745c8: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8745cb: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 8745ce: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 8745d1: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 8745d4: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 8745d7: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 8745da: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 8745dd: call dword ptr [0xcfa5c4] */
  esp -= 4; W32(esp, 0x8745e3u); SPILL(); f_4e3d37(); if (g_unwind) return; /* Core!?IsUniform@FVector@@QAEHXZ */ RELOAD();
/* 8745e3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8745e5: jne 0x8745fe */
  if (!zf) goto L_8745fe;
L_8745e7: /* 8745e7: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8745ed: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8745ef: push 0xae5a88 */
  { uint32_t v = 0xae5a88u; esp -= 4; W32(esp, v); }
/* 8745f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8745f5: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8745fbu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8745fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8745fe: /* 8745fe: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 874601: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x874607u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 874607: mov eax, dword ptr [esi + 0x1e0] */
  eax = R32((uint32_t)(esi + 0x1e0u));
/* 87460d: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 87460f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 874610: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 874613: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 874617: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x87461du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 87461d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_874620: /* 874620: cmp ebx, dword ptr [esi + 0x1e0] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 874626: jge 0x874694 */
  if ((sf == of)) goto L_874694;
L_874628: /* 874628: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 87462b: mov edx, dword ptr [ecx + 0x1dc] */
  edx = R32((uint32_t)(ecx + 0x1dcu));
/* 874631: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 874634: mov edi, ebx */
  edi = ebx;
/* 874636: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 874639: shl edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 87463c: lea eax, [edx + edi] */
  eax = (uint32_t)(edx + edi);
/* 87463f: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 874642: lea edx, [esi + ecx] */
  edx = (uint32_t)(esi + ecx);
/* 874645: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 874646: lea ecx, [eax + 0x18] */
  ecx = (uint32_t)(eax + 0x18u);
/* 874649: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87464a: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 87464d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87464e: call 0x6c1cd5 */
  esp -= 4; W32(esp, 0x874653u); SPILL(); f_6c1cd5(); if (g_unwind) return; RELOAD();
/* 874653: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 874656: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 874658: jle 0x87468e */
  if ((zf || sf != of)) goto L_87468e;
L_87465a: /* 87465a: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 87465d: mov eax, dword ptr [edx + 0x1dc] */
  eax = R32((uint32_t)(edx + 0x1dcu));
/* 874663: mov eax, dword ptr [eax + edi + 0x34] */
  eax = R32((uint32_t)(eax + edi + 0x34u));
/* 874667: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 87466a: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 87466d: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 874670: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 874672: lea edi, [esi + ecx] */
  edi = (uint32_t)(esi + ecx);
/* 874675: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 874676: lea eax, [ebp - 0xe4] */
  eax = (uint32_t)(ebp + 0xffffff1cu);
/* 87467c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87467d: mov ecx, edi */
  ecx = edi;
/* 87467f: call dword ptr [0xcfab50] */
  esp -= 4; W32(esp, 0x874685u); SPILL(); f_4e39bd(); if (g_unwind) return; /* Core!?ApplyPivot@FCoords@@QBE?AV1@ABV1@@Z */ RELOAD();
/* 874685: mov ecx, 0xc */
  ecx = 0xcu;
/* 87468a: mov esi, eax */
  esi = eax;
/* 87468c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_87468e: /* 87468e: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 874691: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 874692: jmp 0x874620 */
  goto L_874620;
L_874694: /* 874694: lea ecx, [ebp - 0x180] */
  ecx = (uint32_t)(ebp + 0xfffffe80u);
/* 87469a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87469b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87469c: call 0x872390 */
  esp -= 4; W32(esp, 0x8746a1u); SPILL(); f_872390(); if (g_unwind) return; RELOAD();
/* 8746a1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8746a4: xor eax, eax */
  eax = 0;
/* 8746a6: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8746aa: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 8746b1: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 8746b8: mov dword ptr [ebp - 0x44], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x3f800000u);
/* 8746bf: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8746c2: jmp 0x8746d0 */
  goto L_8746d0;
L_8746d0: /* 8746d0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8746d3: cmp eax, dword ptr [ecx + 0x59c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x59cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8746d9: jge 0x874bb3 */
  if ((sf == of)) goto L_874bb3;
L_8746df: /* 8746df: mov edx, dword ptr [ecx + 0x598] */
  edx = R32((uint32_t)(ecx + 0x598u));
/* 8746e5: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 8746e8: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8746eb: mov eax, dword ptr [eax + 0x50] */
  eax = R32((uint32_t)(eax + 0x50u));
/* 8746ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8746ef: mov ecx, esi */
  ecx = esi;
/* 8746f1: call 0x6c44d5 */
  esp -= 4; W32(esp, 0x8746f6u); SPILL(); f_6c44d5(); if (g_unwind) return; RELOAD();
/* 8746f6: mov ebx, eax */
  ebx = eax;
/* 8746f8: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8746fb: jne 0x874715 */
  if (!zf) goto L_874715;
L_8746fd: /* 8746fd: push 0x1f1 */
  { uint32_t v = 0x1f1u; esp -= 4; W32(esp, v); }
/* 874702: push 0xae5ad0 */
  { uint32_t v = 0xae5ad0u; esp -= 4; W32(esp, v); }
/* 874707: push 0xae5ae0 */
  { uint32_t v = 0xae5ae0u; esp -= 4; W32(esp, v); }
/* 87470c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x874712u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 874712: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_874715: /* 874715: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 874718: lea ebx, [ebx + ebx*2] */
  ebx = (uint32_t)(ebx + ebx*2);
/* 87471b: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* 874721: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 874724: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 874725: lea ecx, [ebx + edx] */
  ecx = (uint32_t)(ebx + edx);
/* 874728: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x87472eu); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 87472e: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 874731: mov edi, esp */
  edi = esp;
/* 874733: mov ecx, 0x10 */
  ecx = 0x10u;
/* 874738: lea esi, [ebp - 0x180] */
  esi = (uint32_t)(ebp + 0xfffffe80u);
/* 87473e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 874740: lea ecx, [ebp - 0x140] */
  ecx = (uint32_t)(ebp + 0xfffffec0u);
/* 874746: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 874747: mov ecx, eax */
  ecx = eax;
/* 874749: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 87474d: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x874753u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 874753: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* 874759: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 87475d: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874763u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 874763: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 874766: lea edx, [ebp - 0x340] */
  edx = (uint32_t)(ebp + 0xfffffcc0u);
/* 87476c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87476d: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* 874770: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x874776u); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 874776: lea ecx, [ebp - 0x2c0] */
  ecx = (uint32_t)(ebp + 0xfffffd40u);
/* 87477c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87477d: mov ecx, eax */
  ecx = eax;
/* 87477f: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 874783: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x874789u); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 874789: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87478c: mov edi, esp */
  edi = esp;
/* 87478e: mov ecx, 0x10 */
  ecx = 0x10u;
/* 874793: lea esi, [ebp - 0x180] */
  esi = (uint32_t)(ebp + 0xfffffe80u);
/* 874799: lea edx, [ebp - 0x200] */
  edx = (uint32_t)(ebp + 0xfffffe00u);
/* 87479f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8747a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8747a2: mov ecx, eax */
  ecx = eax;
/* 8747a4: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8747a8: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8747aeu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8747ae: lea ecx, [ebp - 0x2c0] */
  ecx = (uint32_t)(ebp + 0xfffffd40u);
/* 8747b4: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8747b8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8747beu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8747be: lea ecx, [ebp - 0x340] */
  ecx = (uint32_t)(ebp + 0xfffffcc0u);
/* 8747c4: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8747c8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8747ceu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8747ce: mov eax, dword ptr [ebp - 0x1d0] */
  eax = R32((uint32_t)(ebp + 0xfffffe30u));
/* 8747d4: mov ecx, dword ptr [ebp - 0x1cc] */
  ecx = R32((uint32_t)(ebp + 0xfffffe34u));
/* 8747da: mov edx, dword ptr [ebp - 0x1c8] */
  edx = R32((uint32_t)(ebp + 0xfffffe38u));
/* 8747e0: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8747e3: mov dword ptr [ebp - 0x10c], ecx */
  W32((uint32_t)(ebp + 0xfffffef4u), ecx);
/* 8747e9: mov dword ptr [ebp - 0x108], edx */
  W32((uint32_t)(ebp + 0xfffffef8u), edx);
/* 8747ef: mov dword ptr [ebp - 0x110], eax */
  W32((uint32_t)(ebp + 0xfffffef0u), eax);
/* 8747f5: fld dword ptr [ebx + 0x5c] */
  { double v = F32((uint32_t)(ebx + 0x5cu)); FPUSH(v); }
/* 8747f8: fld dword ptr [ebx + 0x58] */
  { double v = F32((uint32_t)(ebx + 0x58u)); FPUSH(v); }
/* 8747fb: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 8747fe: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 874804: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 87480a: lea edx, [ebp - 0x140] */
  edx = (uint32_t)(ebp + 0xfffffec0u);
/* 874810: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 874816: mov dword ptr [ebp - 0xa0], eax */
  W32((uint32_t)(ebp + 0xffffff60u), eax);
/* 87481c: mov dword ptr [ebp - 0x94], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x3f800000u);
/* 874826: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 874829: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 87482c: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 87482f: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 874832: lea edi, [ebp - 0xb0] */
  edi = (uint32_t)(ebp + 0xffffff50u);
/* 874838: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 87483a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 87483c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 87483e: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 874841: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 874843: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 874846: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 874848: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 87484b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 87484e: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 874851: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 874854: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 874857: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 87485a: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 87485d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 874860: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 874863: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 874865: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 874867: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 874869: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 87486b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 87486d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 874870: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 874873: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 874876: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 874879: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 87487c: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 87487f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 874882: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 874885: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 874887: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 874889: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 87488b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 87488d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 87488f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 874892: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 874895: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 874898: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 87489b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 87489e: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8748a1: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8748a4: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8748a7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8748a9: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8748ab: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8748ad: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8748af: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8748b1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8748b3: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8748b5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8748b7: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8748ba: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8748bd: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8748c0: fld dword ptr [ebp - 0xa8] */
  { double v = F32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* 8748c6: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8748c9: fmul dword ptr [esi + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x80u)));
/* 8748cf: fld dword ptr [ebp - 0xac] */
  { double v = F32((uint32_t)(ebp + 0xffffff54u)); FPUSH(v); }
/* 8748d5: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 8748d8: fld dword ptr [ebp - 0xb0] */
  { double v = F32((uint32_t)(ebp + 0xffffff50u)); FPUSH(v); }
/* 8748de: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 8748e1: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 8748e7: mov ecx, dword ptr [ebp - 0x90] */
  ecx = R32((uint32_t)(ebp + 0xffffff70u));
/* 8748ed: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 8748f3: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* 8748f9: lea eax, [ebx + 0xa8] */
  eax = (uint32_t)(ebx + 0xa8u);
/* 8748ff: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 874905: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 874907: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 87490d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 874910: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 874913: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 874915: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 874918: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87491eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87491e: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 874921: lea edi, [ebx + 0x88] */
  edi = (uint32_t)(ebx + 0x88u);
/* 874927: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 874928: mov ecx, edi */
  ecx = edi;
/* 87492a: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x874930u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 874930: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 874932: je 0x874b84 */
  if (zf) goto L_874b84;
L_874938: /* 874938: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 87493a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87493b: mov ecx, esi */
  ecx = esi;
/* 87493d: call 0x6c44d5 */
  esp -= 4; W32(esp, 0x874942u); SPILL(); f_6c44d5(); if (g_unwind) return; RELOAD();
/* 874942: mov esi, eax */
  esi = eax;
/* 874944: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 874947: jne 0x874961 */
  if (!zf) goto L_874961;
L_874949: /* 874949: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 87494e: push 0xae5af8 */
  { uint32_t v = 0xae5af8u; esp -= 4; W32(esp, v); }
/* 874953: push 0xae5b08 */
  { uint32_t v = 0xae5b08u; esp -= 4; W32(esp, v); }
/* 874958: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x87495eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 87495e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_874961: /* 874961: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 874964: lea ebx, [esi + esi*2] */
  ebx = (uint32_t)(esi + esi*2);
/* 874967: lea ecx, [ebp - 0x280] */
  ecx = (uint32_t)(ebp + 0xfffffd80u);
/* 87496d: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 874970: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 874971: lea ecx, [ebx + edx] */
  ecx = (uint32_t)(ebx + edx);
/* 874974: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x87497au); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 87497a: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87497d: mov edi, esp */
  edi = esp;
/* 87497f: mov ecx, 0x10 */
  ecx = 0x10u;
/* 874984: lea esi, [ebp - 0x180] */
  esi = (uint32_t)(ebp + 0xfffffe80u);
/* 87498a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 87498c: lea ecx, [ebp - 0xf4] */
  ecx = (uint32_t)(ebp + 0xffffff0cu);
/* 874992: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 874993: mov ecx, eax */
  ecx = eax;
/* 874995: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 874999: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x87499fu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 87499f: lea ecx, [ebp - 0x280] */
  ecx = (uint32_t)(ebp + 0xfffffd80u);
/* 8749a5: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 8749a9: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8749afu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8749af: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8749b2: lea edx, [ebp - 0x380] */
  edx = (uint32_t)(ebp + 0xfffffc80u);
/* 8749b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8749b9: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* 8749bc: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x8749c2u); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 8749c2: lea ecx, [ebp - 0x300] */
  ecx = (uint32_t)(ebp + 0xfffffd00u);
/* 8749c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8749c9: mov ecx, eax */
  ecx = eax;
/* 8749cb: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 8749cf: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x8749d5u); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 8749d5: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8749d8: mov edi, esp */
  edi = esp;
/* 8749da: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8749df: lea esi, [ebp - 0x180] */
  esi = (uint32_t)(ebp + 0xfffffe80u);
/* 8749e5: lea edx, [ebp - 0x1c0] */
  edx = (uint32_t)(ebp + 0xfffffe40u);
/* 8749eb: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8749ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8749ee: mov ecx, eax */
  ecx = eax;
/* 8749f0: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 8749f4: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8749fau); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8749fa: lea ecx, [ebp - 0x300] */
  ecx = (uint32_t)(ebp + 0xfffffd00u);
/* 874a00: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 874a04: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874a0au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 874a0a: lea ecx, [ebp - 0x380] */
  ecx = (uint32_t)(ebp + 0xfffffc80u);
/* 874a10: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 874a14: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874a1au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 874a1a: fld dword ptr [ebp - 0x18c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe74u)); FPUSH(v); }
/* 874a20: mov eax, dword ptr [ebp - 0x190] */
  eax = R32((uint32_t)(ebp + 0xfffffe70u));
/* 874a26: fld dword ptr [ebp - 0x188] */
  { double v = F32((uint32_t)(ebp + 0xfffffe78u)); FPUSH(v); }
/* 874a2c: mov ecx, dword ptr [ebp - 0x18c] */
  ecx = R32((uint32_t)(ebp + 0xfffffe74u));
/* 874a32: mov edx, dword ptr [ebp - 0x188] */
  edx = R32((uint32_t)(ebp + 0xfffffe78u));
/* 874a38: mov dword ptr [ebp - 0xc4], eax */
  W32((uint32_t)(ebp + 0xffffff3cu), eax);
/* 874a3e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 874a41: fmul dword ptr [eax + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x80u)));
/* 874a47: mov dword ptr [ebp - 0xc0], ecx */
  W32((uint32_t)(ebp + 0xffffff40u), ecx);
/* 874a4d: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 874a50: mov dword ptr [ebp - 0xbc], edx */
  W32((uint32_t)(ebp + 0xffffff44u), edx);
/* 874a56: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 874a59: fmul dword ptr [eax + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x7cu)));
/* 874a5c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 874a5f: fld dword ptr [ebp - 0x190] */
  { double v = F32((uint32_t)(ebp + 0xfffffe70u)); FPUSH(v); }
/* 874a65: fmul dword ptr [eax + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x78u)));
/* 874a68: mov al, byte ptr [ecx + 0x8c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x8cu))) & 0xffu);
/* 874a6e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 874a70: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 874a76: jne 0x874aa1 */
  if (!zf) goto L_874aa1;
L_874a78: /* 874a78: mov eax, dword ptr [ebp - 0xf4] */
  eax = R32((uint32_t)(ebp + 0xffffff0cu));
/* 874a7e: mov edx, dword ptr [ebp - 0xf0] */
  edx = R32((uint32_t)(ebp + 0xffffff10u));
/* 874a84: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 874a87: mov eax, dword ptr [ebp - 0xec] */
  eax = R32((uint32_t)(ebp + 0xffffff14u));
/* 874a8d: mov dword ptr [ebp - 0x6c], edx */
  W32((uint32_t)(ebp + 0xffffff94u), edx);
/* 874a90: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 874a93: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 874a96: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 874a99: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 874a9c: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 874a9f: jmp 0x874af5 */
  goto L_874af5;
L_874aa1: /* 874aa1: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 874aa3: jne 0x874ace */
  if (!zf) goto L_874ace;
L_874aa5: /* 874aa5: mov eax, dword ptr [ebp - 0xe4] */
  eax = R32((uint32_t)(ebp + 0xffffff1cu));
/* 874aab: mov edx, dword ptr [ebp - 0xe0] */
  edx = R32((uint32_t)(ebp + 0xffffff20u));
/* 874ab1: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 874ab4: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* 874aba: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 874abd: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 874ac0: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 874ac3: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 874ac6: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 874ac9: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 874acc: jmp 0x874af5 */
  goto L_874af5;
L_874ace: /* 874ace: mov eax, dword ptr [ebp - 0xd4] */
  eax = R32((uint32_t)(ebp + 0xffffff2cu));
/* 874ad4: mov edx, dword ptr [ebp - 0xd0] */
  edx = R32((uint32_t)(ebp + 0xffffff30u));
/* 874ada: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 874add: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* 874ae3: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 874ae6: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 874ae9: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 874aec: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 874aef: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 874af2: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
L_874af5: /* 874af5: fld dword ptr [ecx + 0xb0] */
  { double v = F32((uint32_t)(ecx + 0xb0u)); FPUSH(v); }
/* 874afb: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 874afe: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 874b01: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 874b04: fld dword ptr [ecx + 0xac] */
  { double v = F32((uint32_t)(ecx + 0xacu)); FPUSH(v); }
/* 874b0a: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 874b0e: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 874b11: fld dword ptr [ecx + 0xa8] */
  { double v = F32((uint32_t)(ecx + 0xa8u)); FPUSH(v); }
/* 874b17: fsub dword ptr [ebp - 0x100] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff00u)));
/* 874b1d: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 874b20: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 874b22: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 874b24: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 874b27: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 874b29: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 874b2c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 874b2e: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 874b31: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 874b34: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 874b36: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 874b38: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 874b3b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 874b3d: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 874b40: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 874b42: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 874b45: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 874b47: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 874b49: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 874b4b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 874b4d: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 874b50: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 874b53: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 874b56: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 874b59: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 874b5b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 874b5d: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 874b60: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 874b62: fstp dword ptr [ecx + 0xb4] */
  WF32((uint32_t)(ecx + 0xb4u), ST0); FPOP();
/* 874b68: lea ecx, [ebp - 0x1c0] */
  ecx = (uint32_t)(ebp + 0xfffffe40u);
/* 874b6e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874b74u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 874b74: lea ecx, [ebp - 0xf4] */
  ecx = (uint32_t)(ebp + 0xffffff0cu);
/* 874b7a: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 874b7e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874b84u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_874b84: /* 874b84: lea ecx, [ebp - 0x200] */
  ecx = (uint32_t)(ebp + 0xfffffe00u);
/* 874b8a: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 874b8e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874b94u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 874b94: lea ecx, [ebp - 0x140] */
  ecx = (uint32_t)(ebp + 0xfffffec0u);
/* 874b9a: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 874b9e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874ba4u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 874ba4: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 874ba7: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 874baa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 874bab: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 874bae: jmp 0x8746d0 */
  goto L_8746d0;
L_874bb3: /* 874bb3: lea ecx, [ebp - 0x180] */
  ecx = (uint32_t)(ebp + 0xfffffe80u);
/* 874bb9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 874bbd: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874bc3u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 874bc3: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 874bc6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 874bca: call 0x6c31ac */
  esp -= 4; W32(esp, 0x874bcfu); SPILL(); f_6c31ac(); if (g_unwind) return; RELOAD();
/* 874bcf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 874bd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 874bd3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 874bd4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 874bdb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 874bdc: mov esp, ebp */
  esp = ebp;
/* 874bde: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 874bdf: ret  */
  esp += 4; SPILL(); return;
}

void f_8746c4(void) {
  LOAD_REGS();
L_8746c4: /* 8746c4: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8746cb: jmp 0x8746d0 */
  goto L_8746d0;
L_8746d0: /* 8746d0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8746d3: cmp eax, dword ptr [ecx + 0x59c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x59cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8746d9: jge 0x874bb3 */
  if ((sf == of)) goto L_874bb3;
L_8746df: /* 8746df: mov edx, dword ptr [ecx + 0x598] */
  edx = R32((uint32_t)(ecx + 0x598u));
/* 8746e5: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 8746e8: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8746eb: mov eax, dword ptr [eax + 0x50] */
  eax = R32((uint32_t)(eax + 0x50u));
/* 8746ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8746ef: mov ecx, esi */
  ecx = esi;
/* 8746f1: call 0x6c44d5 */
  esp -= 4; W32(esp, 0x8746f6u); SPILL(); f_6c44d5(); if (g_unwind) return; RELOAD();
/* 8746f6: mov ebx, eax */
  ebx = eax;
/* 8746f8: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8746fb: jne 0x874715 */
  if (!zf) goto L_874715;
L_8746fd: /* 8746fd: push 0x1f1 */
  { uint32_t v = 0x1f1u; esp -= 4; W32(esp, v); }
/* 874702: push 0xae5ad0 */
  { uint32_t v = 0xae5ad0u; esp -= 4; W32(esp, v); }
/* 874707: push 0xae5ae0 */
  { uint32_t v = 0xae5ae0u; esp -= 4; W32(esp, v); }
/* 87470c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x874712u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 874712: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_874715: /* 874715: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 874718: lea ebx, [ebx + ebx*2] */
  ebx = (uint32_t)(ebx + ebx*2);
/* 87471b: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* 874721: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 874724: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 874725: lea ecx, [ebx + edx] */
  ecx = (uint32_t)(ebx + edx);
/* 874728: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x87472eu); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 87472e: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 874731: mov edi, esp */
  edi = esp;
/* 874733: mov ecx, 0x10 */
  ecx = 0x10u;
/* 874738: lea esi, [ebp - 0x180] */
  esi = (uint32_t)(ebp + 0xfffffe80u);
/* 87473e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 874740: lea ecx, [ebp - 0x140] */
  ecx = (uint32_t)(ebp + 0xfffffec0u);
/* 874746: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 874747: mov ecx, eax */
  ecx = eax;
/* 874749: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 87474d: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x874753u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 874753: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* 874759: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 87475d: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874763u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 874763: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 874766: lea edx, [ebp - 0x340] */
  edx = (uint32_t)(ebp + 0xfffffcc0u);
/* 87476c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87476d: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* 874770: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x874776u); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 874776: lea ecx, [ebp - 0x2c0] */
  ecx = (uint32_t)(ebp + 0xfffffd40u);
/* 87477c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87477d: mov ecx, eax */
  ecx = eax;
/* 87477f: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 874783: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x874789u); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 874789: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87478c: mov edi, esp */
  edi = esp;
/* 87478e: mov ecx, 0x10 */
  ecx = 0x10u;
/* 874793: lea esi, [ebp - 0x180] */
  esi = (uint32_t)(ebp + 0xfffffe80u);
/* 874799: lea edx, [ebp - 0x200] */
  edx = (uint32_t)(ebp + 0xfffffe00u);
/* 87479f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8747a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8747a2: mov ecx, eax */
  ecx = eax;
/* 8747a4: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8747a8: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8747aeu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8747ae: lea ecx, [ebp - 0x2c0] */
  ecx = (uint32_t)(ebp + 0xfffffd40u);
/* 8747b4: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8747b8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8747beu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8747be: lea ecx, [ebp - 0x340] */
  ecx = (uint32_t)(ebp + 0xfffffcc0u);
/* 8747c4: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8747c8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8747ceu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8747ce: mov eax, dword ptr [ebp - 0x1d0] */
  eax = R32((uint32_t)(ebp + 0xfffffe30u));
/* 8747d4: mov ecx, dword ptr [ebp - 0x1cc] */
  ecx = R32((uint32_t)(ebp + 0xfffffe34u));
/* 8747da: mov edx, dword ptr [ebp - 0x1c8] */
  edx = R32((uint32_t)(ebp + 0xfffffe38u));
/* 8747e0: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8747e3: mov dword ptr [ebp - 0x10c], ecx */
  W32((uint32_t)(ebp + 0xfffffef4u), ecx);
/* 8747e9: mov dword ptr [ebp - 0x108], edx */
  W32((uint32_t)(ebp + 0xfffffef8u), edx);
/* 8747ef: mov dword ptr [ebp - 0x110], eax */
  W32((uint32_t)(ebp + 0xfffffef0u), eax);
/* 8747f5: fld dword ptr [ebx + 0x5c] */
  { double v = F32((uint32_t)(ebx + 0x5cu)); FPUSH(v); }
/* 8747f8: fld dword ptr [ebx + 0x58] */
  { double v = F32((uint32_t)(ebx + 0x58u)); FPUSH(v); }
/* 8747fb: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 8747fe: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 874804: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 87480a: lea edx, [ebp - 0x140] */
  edx = (uint32_t)(ebp + 0xfffffec0u);
/* 874810: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 874816: mov dword ptr [ebp - 0xa0], eax */
  W32((uint32_t)(ebp + 0xffffff60u), eax);
/* 87481c: mov dword ptr [ebp - 0x94], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x3f800000u);
/* 874826: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 874829: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 87482c: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 87482f: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 874832: lea edi, [ebp - 0xb0] */
  edi = (uint32_t)(ebp + 0xffffff50u);
/* 874838: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 87483a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 87483c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 87483e: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 874841: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 874843: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 874846: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 874848: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 87484b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 87484e: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 874851: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 874854: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 874857: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 87485a: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 87485d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 874860: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 874863: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 874865: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 874867: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 874869: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 87486b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 87486d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 874870: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 874873: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 874876: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 874879: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 87487c: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 87487f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 874882: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 874885: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 874887: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 874889: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 87488b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 87488d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 87488f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 874892: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 874895: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 874898: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 87489b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 87489e: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8748a1: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8748a4: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8748a7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8748a9: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8748ab: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8748ad: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8748af: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8748b1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8748b3: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8748b5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8748b7: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8748ba: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8748bd: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8748c0: fld dword ptr [ebp - 0xa8] */
  { double v = F32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* 8748c6: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8748c9: fmul dword ptr [esi + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x80u)));
/* 8748cf: fld dword ptr [ebp - 0xac] */
  { double v = F32((uint32_t)(ebp + 0xffffff54u)); FPUSH(v); }
/* 8748d5: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 8748d8: fld dword ptr [ebp - 0xb0] */
  { double v = F32((uint32_t)(ebp + 0xffffff50u)); FPUSH(v); }
/* 8748de: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 8748e1: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 8748e7: mov ecx, dword ptr [ebp - 0x90] */
  ecx = R32((uint32_t)(ebp + 0xffffff70u));
/* 8748ed: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 8748f3: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* 8748f9: lea eax, [ebx + 0xa8] */
  eax = (uint32_t)(ebx + 0xa8u);
/* 8748ff: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 874905: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 874907: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 87490d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 874910: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 874913: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 874915: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 874918: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87491eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87491e: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 874921: lea edi, [ebx + 0x88] */
  edi = (uint32_t)(ebx + 0x88u);
/* 874927: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 874928: mov ecx, edi */
  ecx = edi;
/* 87492a: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x874930u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 874930: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 874932: je 0x874b84 */
  if (zf) goto L_874b84;
L_874938: /* 874938: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 87493a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87493b: mov ecx, esi */
  ecx = esi;
/* 87493d: call 0x6c44d5 */
  esp -= 4; W32(esp, 0x874942u); SPILL(); f_6c44d5(); if (g_unwind) return; RELOAD();
/* 874942: mov esi, eax */
  esi = eax;
/* 874944: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 874947: jne 0x874961 */
  if (!zf) goto L_874961;
L_874949: /* 874949: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 87494e: push 0xae5af8 */
  { uint32_t v = 0xae5af8u; esp -= 4; W32(esp, v); }
/* 874953: push 0xae5b08 */
  { uint32_t v = 0xae5b08u; esp -= 4; W32(esp, v); }
/* 874958: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x87495eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 87495e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_874961: /* 874961: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 874964: lea ebx, [esi + esi*2] */
  ebx = (uint32_t)(esi + esi*2);
/* 874967: lea ecx, [ebp - 0x280] */
  ecx = (uint32_t)(ebp + 0xfffffd80u);
/* 87496d: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 874970: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 874971: lea ecx, [ebx + edx] */
  ecx = (uint32_t)(ebx + edx);
/* 874974: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x87497au); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 87497a: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87497d: mov edi, esp */
  edi = esp;
/* 87497f: mov ecx, 0x10 */
  ecx = 0x10u;
/* 874984: lea esi, [ebp - 0x180] */
  esi = (uint32_t)(ebp + 0xfffffe80u);
/* 87498a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 87498c: lea ecx, [ebp - 0xf4] */
  ecx = (uint32_t)(ebp + 0xffffff0cu);
/* 874992: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 874993: mov ecx, eax */
  ecx = eax;
/* 874995: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 874999: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x87499fu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 87499f: lea ecx, [ebp - 0x280] */
  ecx = (uint32_t)(ebp + 0xfffffd80u);
/* 8749a5: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 8749a9: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8749afu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8749af: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8749b2: lea edx, [ebp - 0x380] */
  edx = (uint32_t)(ebp + 0xfffffc80u);
/* 8749b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8749b9: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* 8749bc: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x8749c2u); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 8749c2: lea ecx, [ebp - 0x300] */
  ecx = (uint32_t)(ebp + 0xfffffd00u);
/* 8749c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8749c9: mov ecx, eax */
  ecx = eax;
/* 8749cb: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 8749cf: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x8749d5u); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 8749d5: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8749d8: mov edi, esp */
  edi = esp;
/* 8749da: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8749df: lea esi, [ebp - 0x180] */
  esi = (uint32_t)(ebp + 0xfffffe80u);
/* 8749e5: lea edx, [ebp - 0x1c0] */
  edx = (uint32_t)(ebp + 0xfffffe40u);
/* 8749eb: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8749ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8749ee: mov ecx, eax */
  ecx = eax;
/* 8749f0: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 8749f4: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8749fau); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8749fa: lea ecx, [ebp - 0x300] */
  ecx = (uint32_t)(ebp + 0xfffffd00u);
/* 874a00: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 874a04: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874a0au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 874a0a: lea ecx, [ebp - 0x380] */
  ecx = (uint32_t)(ebp + 0xfffffc80u);
/* 874a10: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 874a14: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874a1au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 874a1a: fld dword ptr [ebp - 0x18c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe74u)); FPUSH(v); }
/* 874a20: mov eax, dword ptr [ebp - 0x190] */
  eax = R32((uint32_t)(ebp + 0xfffffe70u));
/* 874a26: fld dword ptr [ebp - 0x188] */
  { double v = F32((uint32_t)(ebp + 0xfffffe78u)); FPUSH(v); }
/* 874a2c: mov ecx, dword ptr [ebp - 0x18c] */
  ecx = R32((uint32_t)(ebp + 0xfffffe74u));
/* 874a32: mov edx, dword ptr [ebp - 0x188] */
  edx = R32((uint32_t)(ebp + 0xfffffe78u));
/* 874a38: mov dword ptr [ebp - 0xc4], eax */
  W32((uint32_t)(ebp + 0xffffff3cu), eax);
/* 874a3e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 874a41: fmul dword ptr [eax + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x80u)));
/* 874a47: mov dword ptr [ebp - 0xc0], ecx */
  W32((uint32_t)(ebp + 0xffffff40u), ecx);
/* 874a4d: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 874a50: mov dword ptr [ebp - 0xbc], edx */
  W32((uint32_t)(ebp + 0xffffff44u), edx);
/* 874a56: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 874a59: fmul dword ptr [eax + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x7cu)));
/* 874a5c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 874a5f: fld dword ptr [ebp - 0x190] */
  { double v = F32((uint32_t)(ebp + 0xfffffe70u)); FPUSH(v); }
/* 874a65: fmul dword ptr [eax + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x78u)));
/* 874a68: mov al, byte ptr [ecx + 0x8c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x8cu))) & 0xffu);
/* 874a6e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 874a70: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 874a76: jne 0x874aa1 */
  if (!zf) goto L_874aa1;
L_874a78: /* 874a78: mov eax, dword ptr [ebp - 0xf4] */
  eax = R32((uint32_t)(ebp + 0xffffff0cu));
/* 874a7e: mov edx, dword ptr [ebp - 0xf0] */
  edx = R32((uint32_t)(ebp + 0xffffff10u));
/* 874a84: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 874a87: mov eax, dword ptr [ebp - 0xec] */
  eax = R32((uint32_t)(ebp + 0xffffff14u));
/* 874a8d: mov dword ptr [ebp - 0x6c], edx */
  W32((uint32_t)(ebp + 0xffffff94u), edx);
/* 874a90: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 874a93: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 874a96: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 874a99: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 874a9c: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 874a9f: jmp 0x874af5 */
  goto L_874af5;
L_874aa1: /* 874aa1: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 874aa3: jne 0x874ace */
  if (!zf) goto L_874ace;
L_874aa5: /* 874aa5: mov eax, dword ptr [ebp - 0xe4] */
  eax = R32((uint32_t)(ebp + 0xffffff1cu));
/* 874aab: mov edx, dword ptr [ebp - 0xe0] */
  edx = R32((uint32_t)(ebp + 0xffffff20u));
/* 874ab1: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 874ab4: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* 874aba: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 874abd: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 874ac0: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 874ac3: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 874ac6: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 874ac9: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 874acc: jmp 0x874af5 */
  goto L_874af5;
L_874ace: /* 874ace: mov eax, dword ptr [ebp - 0xd4] */
  eax = R32((uint32_t)(ebp + 0xffffff2cu));
/* 874ad4: mov edx, dword ptr [ebp - 0xd0] */
  edx = R32((uint32_t)(ebp + 0xffffff30u));
/* 874ada: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 874add: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* 874ae3: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 874ae6: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 874ae9: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 874aec: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 874aef: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 874af2: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
L_874af5: /* 874af5: fld dword ptr [ecx + 0xb0] */
  { double v = F32((uint32_t)(ecx + 0xb0u)); FPUSH(v); }
/* 874afb: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 874afe: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 874b01: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 874b04: fld dword ptr [ecx + 0xac] */
  { double v = F32((uint32_t)(ecx + 0xacu)); FPUSH(v); }
/* 874b0a: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 874b0e: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 874b11: fld dword ptr [ecx + 0xa8] */
  { double v = F32((uint32_t)(ecx + 0xa8u)); FPUSH(v); }
/* 874b17: fsub dword ptr [ebp - 0x100] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff00u)));
/* 874b1d: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 874b20: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 874b22: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 874b24: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 874b27: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 874b29: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 874b2c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 874b2e: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 874b31: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 874b34: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 874b36: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 874b38: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 874b3b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 874b3d: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 874b40: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 874b42: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 874b45: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 874b47: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 874b49: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 874b4b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 874b4d: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 874b50: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 874b53: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 874b56: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 874b59: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 874b5b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 874b5d: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 874b60: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 874b62: fstp dword ptr [ecx + 0xb4] */
  WF32((uint32_t)(ecx + 0xb4u), ST0); FPOP();
/* 874b68: lea ecx, [ebp - 0x1c0] */
  ecx = (uint32_t)(ebp + 0xfffffe40u);
/* 874b6e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874b74u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 874b74: lea ecx, [ebp - 0xf4] */
  ecx = (uint32_t)(ebp + 0xffffff0cu);
/* 874b7a: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 874b7e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874b84u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_874b84: /* 874b84: lea ecx, [ebp - 0x200] */
  ecx = (uint32_t)(ebp + 0xfffffe00u);
/* 874b8a: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 874b8e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874b94u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 874b94: lea ecx, [ebp - 0x140] */
  ecx = (uint32_t)(ebp + 0xfffffec0u);
/* 874b9a: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 874b9e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874ba4u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 874ba4: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 874ba7: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 874baa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 874bab: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 874bae: jmp 0x8746d0 */
  goto L_8746d0;
L_874bb3: /* 874bb3: lea ecx, [ebp - 0x180] */
  ecx = (uint32_t)(ebp + 0xfffffe80u);
/* 874bb9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 874bbd: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874bc3u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 874bc3: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 874bc6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 874bca: call 0x6c31ac */
  esp -= 4; W32(esp, 0x874bcfu); SPILL(); f_6c31ac(); if (g_unwind) return; RELOAD();
/* 874bcf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 874bd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 874bd3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 874bd4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 874bdb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 874bdc: mov esp, ebp */
  esp = ebp;
/* 874bde: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 874bdf: ret  */
  esp += 4; SPILL(); return;
}

void f_8746cd(void) {
  LOAD_REGS();
L_8746cd: /* 8746cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8746d0: /* 8746d0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8746d3: cmp eax, dword ptr [ecx + 0x59c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x59cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8746d9: jge 0x874bb3 */
  if ((sf == of)) goto L_874bb3;
L_8746df: /* 8746df: mov edx, dword ptr [ecx + 0x598] */
  edx = R32((uint32_t)(ecx + 0x598u));
/* 8746e5: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 8746e8: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8746eb: mov eax, dword ptr [eax + 0x50] */
  eax = R32((uint32_t)(eax + 0x50u));
/* 8746ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8746ef: mov ecx, esi */
  ecx = esi;
/* 8746f1: call 0x6c44d5 */
  esp -= 4; W32(esp, 0x8746f6u); SPILL(); f_6c44d5(); if (g_unwind) return; RELOAD();
/* 8746f6: mov ebx, eax */
  ebx = eax;
/* 8746f8: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8746fb: jne 0x874715 */
  if (!zf) goto L_874715;
L_8746fd: /* 8746fd: push 0x1f1 */
  { uint32_t v = 0x1f1u; esp -= 4; W32(esp, v); }
/* 874702: push 0xae5ad0 */
  { uint32_t v = 0xae5ad0u; esp -= 4; W32(esp, v); }
/* 874707: push 0xae5ae0 */
  { uint32_t v = 0xae5ae0u; esp -= 4; W32(esp, v); }
/* 87470c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x874712u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 874712: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_874715: /* 874715: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 874718: lea ebx, [ebx + ebx*2] */
  ebx = (uint32_t)(ebx + ebx*2);
/* 87471b: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* 874721: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 874724: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 874725: lea ecx, [ebx + edx] */
  ecx = (uint32_t)(ebx + edx);
/* 874728: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x87472eu); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 87472e: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 874731: mov edi, esp */
  edi = esp;
/* 874733: mov ecx, 0x10 */
  ecx = 0x10u;
/* 874738: lea esi, [ebp - 0x180] */
  esi = (uint32_t)(ebp + 0xfffffe80u);
/* 87473e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 874740: lea ecx, [ebp - 0x140] */
  ecx = (uint32_t)(ebp + 0xfffffec0u);
/* 874746: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 874747: mov ecx, eax */
  ecx = eax;
/* 874749: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 87474d: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x874753u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 874753: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* 874759: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 87475d: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874763u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 874763: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 874766: lea edx, [ebp - 0x340] */
  edx = (uint32_t)(ebp + 0xfffffcc0u);
/* 87476c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87476d: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* 874770: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x874776u); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 874776: lea ecx, [ebp - 0x2c0] */
  ecx = (uint32_t)(ebp + 0xfffffd40u);
/* 87477c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87477d: mov ecx, eax */
  ecx = eax;
/* 87477f: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 874783: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x874789u); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 874789: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87478c: mov edi, esp */
  edi = esp;
/* 87478e: mov ecx, 0x10 */
  ecx = 0x10u;
/* 874793: lea esi, [ebp - 0x180] */
  esi = (uint32_t)(ebp + 0xfffffe80u);
/* 874799: lea edx, [ebp - 0x200] */
  edx = (uint32_t)(ebp + 0xfffffe00u);
/* 87479f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8747a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8747a2: mov ecx, eax */
  ecx = eax;
/* 8747a4: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8747a8: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8747aeu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8747ae: lea ecx, [ebp - 0x2c0] */
  ecx = (uint32_t)(ebp + 0xfffffd40u);
/* 8747b4: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8747b8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8747beu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8747be: lea ecx, [ebp - 0x340] */
  ecx = (uint32_t)(ebp + 0xfffffcc0u);
/* 8747c4: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8747c8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8747ceu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8747ce: mov eax, dword ptr [ebp - 0x1d0] */
  eax = R32((uint32_t)(ebp + 0xfffffe30u));
/* 8747d4: mov ecx, dword ptr [ebp - 0x1cc] */
  ecx = R32((uint32_t)(ebp + 0xfffffe34u));
/* 8747da: mov edx, dword ptr [ebp - 0x1c8] */
  edx = R32((uint32_t)(ebp + 0xfffffe38u));
/* 8747e0: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8747e3: mov dword ptr [ebp - 0x10c], ecx */
  W32((uint32_t)(ebp + 0xfffffef4u), ecx);
/* 8747e9: mov dword ptr [ebp - 0x108], edx */
  W32((uint32_t)(ebp + 0xfffffef8u), edx);
/* 8747ef: mov dword ptr [ebp - 0x110], eax */
  W32((uint32_t)(ebp + 0xfffffef0u), eax);
/* 8747f5: fld dword ptr [ebx + 0x5c] */
  { double v = F32((uint32_t)(ebx + 0x5cu)); FPUSH(v); }
/* 8747f8: fld dword ptr [ebx + 0x58] */
  { double v = F32((uint32_t)(ebx + 0x58u)); FPUSH(v); }
/* 8747fb: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 8747fe: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 874804: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 87480a: lea edx, [ebp - 0x140] */
  edx = (uint32_t)(ebp + 0xfffffec0u);
/* 874810: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 874816: mov dword ptr [ebp - 0xa0], eax */
  W32((uint32_t)(ebp + 0xffffff60u), eax);
/* 87481c: mov dword ptr [ebp - 0x94], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x3f800000u);
/* 874826: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 874829: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 87482c: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 87482f: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 874832: lea edi, [ebp - 0xb0] */
  edi = (uint32_t)(ebp + 0xffffff50u);
/* 874838: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 87483a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 87483c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 87483e: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 874841: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 874843: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 874846: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 874848: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 87484b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 87484e: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 874851: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 874854: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 874857: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 87485a: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 87485d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 874860: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 874863: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 874865: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 874867: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 874869: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 87486b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 87486d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 874870: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 874873: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 874876: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 874879: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 87487c: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 87487f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 874882: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 874885: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 874887: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 874889: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 87488b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 87488d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 87488f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 874892: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 874895: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 874898: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 87489b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 87489e: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8748a1: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8748a4: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8748a7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8748a9: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8748ab: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8748ad: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8748af: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8748b1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8748b3: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8748b5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8748b7: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8748ba: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8748bd: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8748c0: fld dword ptr [ebp - 0xa8] */
  { double v = F32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* 8748c6: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8748c9: fmul dword ptr [esi + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x80u)));
/* 8748cf: fld dword ptr [ebp - 0xac] */
  { double v = F32((uint32_t)(ebp + 0xffffff54u)); FPUSH(v); }
/* 8748d5: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 8748d8: fld dword ptr [ebp - 0xb0] */
  { double v = F32((uint32_t)(ebp + 0xffffff50u)); FPUSH(v); }
/* 8748de: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 8748e1: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 8748e7: mov ecx, dword ptr [ebp - 0x90] */
  ecx = R32((uint32_t)(ebp + 0xffffff70u));
/* 8748ed: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 8748f3: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* 8748f9: lea eax, [ebx + 0xa8] */
  eax = (uint32_t)(ebx + 0xa8u);
/* 8748ff: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 874905: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 874907: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 87490d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 874910: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 874913: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 874915: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 874918: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87491eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87491e: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 874921: lea edi, [ebx + 0x88] */
  edi = (uint32_t)(ebx + 0x88u);
/* 874927: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 874928: mov ecx, edi */
  ecx = edi;
/* 87492a: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x874930u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 874930: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 874932: je 0x874b84 */
  if (zf) goto L_874b84;
L_874938: /* 874938: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 87493a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87493b: mov ecx, esi */
  ecx = esi;
/* 87493d: call 0x6c44d5 */
  esp -= 4; W32(esp, 0x874942u); SPILL(); f_6c44d5(); if (g_unwind) return; RELOAD();
/* 874942: mov esi, eax */
  esi = eax;
/* 874944: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 874947: jne 0x874961 */
  if (!zf) goto L_874961;
L_874949: /* 874949: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 87494e: push 0xae5af8 */
  { uint32_t v = 0xae5af8u; esp -= 4; W32(esp, v); }
/* 874953: push 0xae5b08 */
  { uint32_t v = 0xae5b08u; esp -= 4; W32(esp, v); }
/* 874958: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x87495eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 87495e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_874961: /* 874961: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 874964: lea ebx, [esi + esi*2] */
  ebx = (uint32_t)(esi + esi*2);
/* 874967: lea ecx, [ebp - 0x280] */
  ecx = (uint32_t)(ebp + 0xfffffd80u);
/* 87496d: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 874970: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 874971: lea ecx, [ebx + edx] */
  ecx = (uint32_t)(ebx + edx);
/* 874974: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x87497au); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 87497a: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87497d: mov edi, esp */
  edi = esp;
/* 87497f: mov ecx, 0x10 */
  ecx = 0x10u;
/* 874984: lea esi, [ebp - 0x180] */
  esi = (uint32_t)(ebp + 0xfffffe80u);
/* 87498a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 87498c: lea ecx, [ebp - 0xf4] */
  ecx = (uint32_t)(ebp + 0xffffff0cu);
/* 874992: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 874993: mov ecx, eax */
  ecx = eax;
/* 874995: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 874999: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x87499fu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 87499f: lea ecx, [ebp - 0x280] */
  ecx = (uint32_t)(ebp + 0xfffffd80u);
/* 8749a5: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 8749a9: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8749afu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8749af: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8749b2: lea edx, [ebp - 0x380] */
  edx = (uint32_t)(ebp + 0xfffffc80u);
/* 8749b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8749b9: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* 8749bc: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x8749c2u); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 8749c2: lea ecx, [ebp - 0x300] */
  ecx = (uint32_t)(ebp + 0xfffffd00u);
/* 8749c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8749c9: mov ecx, eax */
  ecx = eax;
/* 8749cb: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 8749cf: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x8749d5u); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 8749d5: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8749d8: mov edi, esp */
  edi = esp;
/* 8749da: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8749df: lea esi, [ebp - 0x180] */
  esi = (uint32_t)(ebp + 0xfffffe80u);
/* 8749e5: lea edx, [ebp - 0x1c0] */
  edx = (uint32_t)(ebp + 0xfffffe40u);
/* 8749eb: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8749ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8749ee: mov ecx, eax */
  ecx = eax;
/* 8749f0: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 8749f4: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8749fau); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8749fa: lea ecx, [ebp - 0x300] */
  ecx = (uint32_t)(ebp + 0xfffffd00u);
/* 874a00: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 874a04: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874a0au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 874a0a: lea ecx, [ebp - 0x380] */
  ecx = (uint32_t)(ebp + 0xfffffc80u);
/* 874a10: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 874a14: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874a1au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 874a1a: fld dword ptr [ebp - 0x18c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe74u)); FPUSH(v); }
/* 874a20: mov eax, dword ptr [ebp - 0x190] */
  eax = R32((uint32_t)(ebp + 0xfffffe70u));
/* 874a26: fld dword ptr [ebp - 0x188] */
  { double v = F32((uint32_t)(ebp + 0xfffffe78u)); FPUSH(v); }
/* 874a2c: mov ecx, dword ptr [ebp - 0x18c] */
  ecx = R32((uint32_t)(ebp + 0xfffffe74u));
/* 874a32: mov edx, dword ptr [ebp - 0x188] */
  edx = R32((uint32_t)(ebp + 0xfffffe78u));
/* 874a38: mov dword ptr [ebp - 0xc4], eax */
  W32((uint32_t)(ebp + 0xffffff3cu), eax);
/* 874a3e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 874a41: fmul dword ptr [eax + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x80u)));
/* 874a47: mov dword ptr [ebp - 0xc0], ecx */
  W32((uint32_t)(ebp + 0xffffff40u), ecx);
/* 874a4d: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 874a50: mov dword ptr [ebp - 0xbc], edx */
  W32((uint32_t)(ebp + 0xffffff44u), edx);
/* 874a56: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 874a59: fmul dword ptr [eax + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x7cu)));
/* 874a5c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 874a5f: fld dword ptr [ebp - 0x190] */
  { double v = F32((uint32_t)(ebp + 0xfffffe70u)); FPUSH(v); }
/* 874a65: fmul dword ptr [eax + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x78u)));
/* 874a68: mov al, byte ptr [ecx + 0x8c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x8cu))) & 0xffu);
/* 874a6e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 874a70: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 874a76: jne 0x874aa1 */
  if (!zf) goto L_874aa1;
L_874a78: /* 874a78: mov eax, dword ptr [ebp - 0xf4] */
  eax = R32((uint32_t)(ebp + 0xffffff0cu));
/* 874a7e: mov edx, dword ptr [ebp - 0xf0] */
  edx = R32((uint32_t)(ebp + 0xffffff10u));
/* 874a84: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 874a87: mov eax, dword ptr [ebp - 0xec] */
  eax = R32((uint32_t)(ebp + 0xffffff14u));
/* 874a8d: mov dword ptr [ebp - 0x6c], edx */
  W32((uint32_t)(ebp + 0xffffff94u), edx);
/* 874a90: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 874a93: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 874a96: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 874a99: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 874a9c: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 874a9f: jmp 0x874af5 */
  goto L_874af5;
L_874aa1: /* 874aa1: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 874aa3: jne 0x874ace */
  if (!zf) goto L_874ace;
L_874aa5: /* 874aa5: mov eax, dword ptr [ebp - 0xe4] */
  eax = R32((uint32_t)(ebp + 0xffffff1cu));
/* 874aab: mov edx, dword ptr [ebp - 0xe0] */
  edx = R32((uint32_t)(ebp + 0xffffff20u));
/* 874ab1: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 874ab4: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* 874aba: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 874abd: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 874ac0: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 874ac3: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 874ac6: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 874ac9: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 874acc: jmp 0x874af5 */
  goto L_874af5;
L_874ace: /* 874ace: mov eax, dword ptr [ebp - 0xd4] */
  eax = R32((uint32_t)(ebp + 0xffffff2cu));
/* 874ad4: mov edx, dword ptr [ebp - 0xd0] */
  edx = R32((uint32_t)(ebp + 0xffffff30u));
/* 874ada: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 874add: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* 874ae3: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 874ae6: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 874ae9: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 874aec: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 874aef: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 874af2: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
L_874af5: /* 874af5: fld dword ptr [ecx + 0xb0] */
  { double v = F32((uint32_t)(ecx + 0xb0u)); FPUSH(v); }
/* 874afb: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 874afe: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 874b01: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 874b04: fld dword ptr [ecx + 0xac] */
  { double v = F32((uint32_t)(ecx + 0xacu)); FPUSH(v); }
/* 874b0a: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 874b0e: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 874b11: fld dword ptr [ecx + 0xa8] */
  { double v = F32((uint32_t)(ecx + 0xa8u)); FPUSH(v); }
/* 874b17: fsub dword ptr [ebp - 0x100] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff00u)));
/* 874b1d: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 874b20: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 874b22: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 874b24: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 874b27: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 874b29: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 874b2c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 874b2e: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 874b31: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 874b34: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 874b36: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 874b38: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 874b3b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 874b3d: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 874b40: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 874b42: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 874b45: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 874b47: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 874b49: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 874b4b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 874b4d: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 874b50: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 874b53: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 874b56: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 874b59: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 874b5b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 874b5d: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 874b60: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 874b62: fstp dword ptr [ecx + 0xb4] */
  WF32((uint32_t)(ecx + 0xb4u), ST0); FPOP();
/* 874b68: lea ecx, [ebp - 0x1c0] */
  ecx = (uint32_t)(ebp + 0xfffffe40u);
/* 874b6e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874b74u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 874b74: lea ecx, [ebp - 0xf4] */
  ecx = (uint32_t)(ebp + 0xffffff0cu);
/* 874b7a: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 874b7e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874b84u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_874b84: /* 874b84: lea ecx, [ebp - 0x200] */
  ecx = (uint32_t)(ebp + 0xfffffe00u);
/* 874b8a: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 874b8e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874b94u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 874b94: lea ecx, [ebp - 0x140] */
  ecx = (uint32_t)(ebp + 0xfffffec0u);
/* 874b9a: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 874b9e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874ba4u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 874ba4: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 874ba7: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 874baa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 874bab: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 874bae: jmp 0x8746d0 */
  goto L_8746d0;
L_874bb3: /* 874bb3: lea ecx, [ebp - 0x180] */
  ecx = (uint32_t)(ebp + 0xfffffe80u);
/* 874bb9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 874bbd: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x874bc3u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 874bc3: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 874bc6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 874bca: call 0x6c31ac */
  esp -= 4; W32(esp, 0x874bcfu); SPILL(); f_6c31ac(); if (g_unwind) return; RELOAD();
/* 874bcf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 874bd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 874bd3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 874bd4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 874bdb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 874bdc: mov esp, ebp */
  esp = ebp;
/* 874bde: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 874bdf: ret  */
  esp += 4; SPILL(); return;
}

void f_874be0(void) {
  LOAD_REGS();
L_874be0: /* 874be0: mov eax, dword ptr [ebp - 0xb4] */
  eax = R32((uint32_t)(ebp + 0xffffff4cu));
/* 874be6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 874beb: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 874bf1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 874bf2: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 874bf8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x874bfdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_874bfd(); return;
}

void f_874bfd(void) {
  LOAD_REGS();
L_874bfd: /* 874bfd: push 0xa18800 */
  { uint32_t v = 0xa18800u; esp -= 4; W32(esp, v); }
/* 874c02: push 0xae5b24 */
  { uint32_t v = 0xae5b24u; esp -= 4; W32(esp, v); }
/* 874c07: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x874c0du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 874c0d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 874c10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 874c12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 874c14: call 0x99caf8 */
  esp -= 4; W32(esp, 0x874c19u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_874c19: guest_badaddr(0x874c19); return;
}

void f_874df0(void) {
  LOAD_REGS();
L_874df0: /* 874df0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 874df1: mov ebp, esp */
  ebp = esp;
/* 874df3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 874df5: push 0x9d4910 */
  { uint32_t v = 0x9d4910u; esp -= 4; W32(esp, v); }
/* 874dfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 874e00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 874e01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 874e08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 874e0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 874e0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 874e0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 874e0e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 874e11: mov esi, ecx */
  esi = ecx;
/* 874e13: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 874e1a: call dword ptr [0xcfa230] */
  esp -= 4; W32(esp, 0x874e20u); SPILL(); f_4e4110(); if (g_unwind) return; /* Core!?PostLoad@UObject@@UAEXXZ */ RELOAD();
/* 874e20: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 874e23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 874e25: je 0x874e39 */
  if (zf) goto L_874e39;
L_874e27: /* 874e27: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 874e2d: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 874e30: je 0x874e39 */
  if (zf) goto L_874e39;
L_874e32: /* 874e32: mov dword ptr [esi + 0x28], 0 */
  W32((uint32_t)(esi + 0x28u), 0x0u);
L_874e39: /* 874e39: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 874e3c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 874e3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 874e3e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 874e45: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 874e46: mov esp, ebp */
  esp = ebp;
/* 874e48: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 874e49: ret  */
  esp += 4; SPILL(); return;
}

void f_874e4a(void) {
  LOAD_REGS();
L_874e4a: /* 874e4a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 874e4d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 874e52: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 874e55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 874e56: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 874e59: call 0x99caf8 */
  esp -= 4; W32(esp, 0x874e5eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_874e5e(); return;
}

void f_874e5e(void) {
  LOAD_REGS();
L_874e5e: /* 874e5e: push 0xa1883c */
  { uint32_t v = 0xa1883cu; esp -= 4; W32(esp, v); }
/* 874e63: push 0xae5fec */
  { uint32_t v = 0xae5fecu; esp -= 4; W32(esp, v); }
/* 874e68: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x874e6eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 874e6e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 874e71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 874e73: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 874e75: call 0x99caf8 */
  esp -= 4; W32(esp, 0x874e7au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_874e7a: guest_badaddr(0x874e7a); return;
}

void f_874eb0(void) {
  LOAD_REGS();
L_874eb0: /* 874eb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 874eb1: mov ebp, esp */
  ebp = esp;
/* 874eb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 874eb5: push 0x9d4920 */
  { uint32_t v = 0x9d4920u; esp -= 4; W32(esp, v); }
/* 874eba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 874ec0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 874ec1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 874ec8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 874ecb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 874ecc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 874ecd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 874ece: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 874ed1: mov esi, ecx */
  esi = ecx;
/* 874ed3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 874eda: call dword ptr [0xcfa230] */
  esp -= 4; W32(esp, 0x874ee0u); SPILL(); f_4e4110(); if (g_unwind) return; /* Core!?PostLoad@UObject@@UAEXXZ */ RELOAD();
/* 874ee0: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 874ee3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 874ee5: je 0x874ef9 */
  if (zf) goto L_874ef9;
L_874ee7: /* 874ee7: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 874eed: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 874ef0: je 0x874ef9 */
  if (zf) goto L_874ef9;
L_874ef2: /* 874ef2: mov dword ptr [esi + 0x54], 0 */
  W32((uint32_t)(esi + 0x54u), 0x0u);
L_874ef9: /* 874ef9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 874efc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 874efd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 874efe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 874f05: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 874f06: mov esp, ebp */
  esp = ebp;
/* 874f08: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 874f09: ret  */
  esp += 4; SPILL(); return;
}

void f_874f0a(void) {
  LOAD_REGS();
L_874f0a: /* 874f0a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 874f0d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 874f12: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 874f15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 874f16: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 874f19: call 0x99caf8 */
  esp -= 4; W32(esp, 0x874f1eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_874f1e(); return;
}

void f_874f1e(void) {
  LOAD_REGS();
L_874f1e: /* 874f1e: push 0xa18870 */
  { uint32_t v = 0xa18870u; esp -= 4; W32(esp, v); }
/* 874f23: push 0xae5ff4 */
  { uint32_t v = 0xae5ff4u; esp -= 4; W32(esp, v); }
/* 874f28: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x874f2eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 874f2e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 874f31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 874f33: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 874f35: call 0x99caf8 */
  esp -= 4; W32(esp, 0x874f3au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_874f3a: guest_badaddr(0x874f3a); return;
}

void f_874f70(void) {
  LOAD_REGS();
L_874f70: /* 874f70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 874f71: mov esi, ecx */
  esi = ecx;
/* 874f73: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x874f79u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 874f79: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 874f7c: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x874f82u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 874f82: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 874f85: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x874f8bu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 874f8b: mov eax, esi */
  eax = esi;
/* 874f8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 874f8e: ret  */
  esp += 4; SPILL(); return;
}

void f_874fa0(void) {
  LOAD_REGS();
L_874fa0: /* 874fa0: mov eax, ecx */
  eax = ecx;
/* 874fa2: ret  */
  esp += 4; SPILL(); return;
}

void f_874fc0(void) {
  LOAD_REGS();
L_874fc0: /* 874fc0: ret  */
  esp += 4; SPILL(); return;
}

void f_874fe0(void) {
  LOAD_REGS();
L_874fe0: /* 874fe0: mov al, byte ptr [ecx + 0x34] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x34u))) & 0xffu);
/* 874fe3: mov dl, 2 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* 874fe5: cmp al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 874fe7: jne 0x874ff2 */
  if (!zf) goto L_874ff2;
L_874fe9: /* 874fe9: mov byte ptr [ecx + 0x34], 3 */
  W8((uint32_t)(ecx + 0x34u), 0x3u);
/* 874fed: xor eax, eax */
  eax = 0;
/* 874fef: ret 8 */
  esp += 12; SPILL(); return;
L_874ff2: /* 874ff2: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 874ff6: fcomp dword ptr [ecx + 0x44] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x44u)));
  FPOP();
/* 874ff9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 874ffb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 874ffe: jne 0x87501a */
  if (!zf) goto L_87501a;
L_875000: /* 875000: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 875004: fcomp dword ptr [ecx + 0x48] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x48u)));
  FPOP();
/* 875007: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 875009: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 87500c: jp 0x87501a */
  if (pf) goto L_87501a;
L_87500e: /* 87500e: mov byte ptr [ecx + 0x34], 1 */
  W8((uint32_t)(ecx + 0x34u), 0x1u);
/* 875012: mov eax, 1 */
  eax = 0x1u;
/* 875017: ret 8 */
  esp += 12; SPILL(); return;
L_87501a: /* 87501a: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 87501e: fcomp dword ptr [ecx + 0x48] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x48u)));
  FPOP();
/* 875021: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 875023: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 875026: jne 0x87502b */
  if (!zf) goto L_87502b;
L_875028: /* 875028: mov byte ptr [ecx + 0x34], dl */
  W8((uint32_t)(ecx + 0x34u), (edx & 0xffu));
L_87502b: /* 87502b: mov eax, 1 */
  eax = 0x1u;
/* 875030: ret 8 */
  esp += 12; SPILL(); return;
}

void f_875060(void) {
  LOAD_REGS();
L_875060: /* 875060: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 875061: mov al, byte ptr [ecx + 0x34] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x34u))) & 0xffu);
/* 875064: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 875066: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 875067: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 87506f: jne 0x875089 */
  if (!zf) goto L_875089;
L_875071: /* 875071: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 875075: push 0xae6358 */
  { uint32_t v = 0xae6358u; esp -= 4; W32(esp, v); }
/* 87507a: mov ecx, esi */
  ecx = esi;
/* 87507c: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x875082u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 875082: mov eax, esi */
  eax = esi;
/* 875084: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 875085: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 875086: ret 4 */
  esp += 8; SPILL(); return;
L_875089: /* 875089: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87508b: jne 0x8750a5 */
  if (!zf) goto L_8750a5;
L_87508d: /* 87508d: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 875091: push 0xae637c */
  { uint32_t v = 0xae637cu; esp -= 4; W32(esp, v); }
/* 875096: mov ecx, esi */
  ecx = esi;
/* 875098: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x87509eu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 87509e: mov eax, esi */
  eax = esi;
/* 8750a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8750a1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 8750a2: ret 4 */
  esp += 8; SPILL(); return;
L_8750a5: /* 8750a5: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8750a7: jne 0x8750c1 */
  if (!zf) goto L_8750c1;
L_8750a9: /* 8750a9: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8750ad: push 0xae63a0 */
  { uint32_t v = 0xae63a0u; esp -= 4; W32(esp, v); }
/* 8750b2: mov ecx, esi */
  ecx = esi;
/* 8750b4: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8750bau); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8750ba: mov eax, esi */
  eax = esi;
/* 8750bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8750bd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 8750be: ret 4 */
  esp += 8; SPILL(); return;
L_8750c1: /* 8750c1: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8750c3: jne 0x8750dd */
  if (!zf) goto L_8750dd;
L_8750c5: /* 8750c5: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8750c9: push 0xae63c0 */
  { uint32_t v = 0xae63c0u; esp -= 4; W32(esp, v); }
/* 8750ce: mov ecx, esi */
  ecx = esi;
/* 8750d0: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8750d6u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8750d6: mov eax, esi */
  eax = esi;
/* 8750d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8750d9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 8750da: ret 4 */
  esp += 8; SPILL(); return;
L_8750dd: /* 8750dd: push 0x501 */
  { uint32_t v = 0x501u; esp -= 4; W32(esp, v); }
/* 8750e2: push 0xae63e4 */
  { uint32_t v = 0xae63e4u; esp -= 4; W32(esp, v); }
/* 8750e7: push 0xae63f8 */
  { uint32_t v = 0xae63f8u; esp -= 4; W32(esp, v); }
/* 8750ec: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8750f2u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8750f2: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 8750f6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8750f9: push 0xae63fc */
  { uint32_t v = 0xae63fcu; esp -= 4; W32(esp, v); }
/* 8750fe: mov ecx, esi */
  ecx = esi;
/* 875100: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x875106u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 875106: mov eax, esi */
  eax = esi;
/* 875108: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 875109: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87510a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_875140(void) {
  LOAD_REGS();
L_875140: /* 875140: mov al, byte ptr [ecx + 0x34] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x34u))) & 0xffu);
/* 875143: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 875145: je 0x87514e */
  if (zf) goto L_87514e;
L_875147: /* 875147: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 875149: je 0x87514e */
  if (zf) goto L_87514e;
L_87514b: /* 87514b: xor eax, eax */
  eax = 0;
/* 87514d: ret  */
  esp += 4; SPILL(); return;
L_87514e: /* 87514e: mov eax, 1 */
  eax = 0x1u;
/* 875153: ret  */
  esp += 4; SPILL(); return;
}

void f_875170(void) {
  LOAD_REGS();
L_875170: /* 875170: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 875174: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 875177: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 875178: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 87517c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87517d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87517e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87517f: mov edi, ecx */
  edi = ecx;
/* 875181: call 0x6c69fb */
  esp -= 4; W32(esp, 0x875186u); SPILL(); f_6c69fb(); if (g_unwind) return; RELOAD();
/* 875186: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 875188: jne 0x875192 */
  if (!zf) goto L_875192;
L_87518a: /* 87518a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87518b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87518c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87518f: ret 8 */
  esp += 12; SPILL(); return;
L_875192: /* 875192: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 875194: mov ecx, edi */
  ecx = edi;
/* 875196: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x875199u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 875199: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87519b: je 0x8751d7 */
  if (zf) goto L_8751d7;
L_87519d: /* 87519d: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 8751a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8751a2: lea ecx, [edi + 0x50] */
  ecx = (uint32_t)(edi + 0x50u);
/* 8751a5: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x8751abu); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 8751ab: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8751ad: fadd dword ptr [esi + 0x414] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x414u)));
/* 8751b3: fstp dword ptr [esi + 0x414] */
  WF32((uint32_t)(esi + 0x414u), ST0); FPOP();
/* 8751b9: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8751bc: fadd dword ptr [esi + 0x418] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x418u)));
/* 8751c2: fstp dword ptr [esi + 0x418] */
  WF32((uint32_t)(esi + 0x418u), ST0); FPOP();
/* 8751c8: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8751cb: fadd dword ptr [esi + 0x41c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x41cu)));
/* 8751d1: fstp dword ptr [esi + 0x41c] */
  WF32((uint32_t)(esi + 0x41cu), ST0); FPOP();
L_8751d7: /* 8751d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8751d8: mov eax, 1 */
  eax = 0x1u;
/* 8751dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8751de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8751e1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_875210(void) {
  LOAD_REGS();
L_875210: /* 875210: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 875211: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 875212: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 875216: push 0xcda018 */
  { uint32_t v = 0xcda018u; esp -= 4; W32(esp, v); }
/* 87521b: mov ecx, esi */
  ecx = esi;
/* 87521d: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 875225: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x87522bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 87522b: mov eax, esi */
  eax = esi;
/* 87522d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87522e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87522f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_875250(void) {
  LOAD_REGS();
L_875250: /* 875250: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 875254: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 875257: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 875258: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 875259: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 87525d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87525e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87525f: mov esi, ecx */
  esi = ecx;
/* 875261: call 0x6c69fb */
  esp -= 4; W32(esp, 0x875266u); SPILL(); f_6c69fb(); if (g_unwind) return; RELOAD();
/* 875266: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 875268: jne 0x875272 */
  if (!zf) goto L_875272;
L_87526a: /* 87526a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87526b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87526c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87526f: ret 8 */
  esp += 12; SPILL(); return;
L_875272: /* 875272: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 875274: mov ecx, esi */
  ecx = esi;
/* 875276: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x875279u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 875279: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87527b: je 0x875352 */
  if (zf) goto L_875352;
L_875281: /* 875281: or dword ptr [edi + 0x444], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x444u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi + 0x444u), r);
  }
/* 875288: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 87528b: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 87528e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87528f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 875291: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 875294: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 875298: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 87529c: jl 0x8752d6 */
  if ((sf != of)) goto L_8752d6;
L_87529e: /* 87529e: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 8752a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8752a3: lea ecx, [esi + 0x50] */
  ecx = (uint32_t)(esi + 0x50u);
/* 8752a6: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x8752acu); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 8752ac: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8752ae: add edi, 0x438 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x438u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8752b4: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 8752b6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8752b9: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 8752bc: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8752bf: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 8752c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8752c3: mov dword ptr [esi + 0x6c], 0 */
  W32((uint32_t)(esi + 0x6cu), 0x0u);
/* 8752ca: mov eax, 1 */
  eax = 0x1u;
/* 8752cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8752d0: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8752d3: ret 8 */
  esp += 12; SPILL(); return;
L_8752d6: /* 8752d6: fild dword ptr [esp + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8752da: fidiv dword ptr [esp + 0x24] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(esp + 0x24u)));
/* 8752de: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8752e0: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8752e2: fsubr dword ptr [0x9f40f4] */
  ST0 = (F32((uint32_t)(0x9f40f4u))) - ST0;
/* 8752e8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8752ea: fmul dword ptr [edi + 0x438] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x438u)));
/* 8752f0: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8752f4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8752f6: fmul dword ptr [edi + 0x43c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x43cu)));
/* 8752fc: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 875300: fmul dword ptr [edi + 0x440] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x440u)));
/* 875306: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 875308: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 87530a: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 87530e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 875310: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 875314: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 875318: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 87531a: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 87531e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 875320: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 875322: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 875324: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 875326: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 87532a: fadd dword ptr [edi + 0x42c] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x42cu)));
/* 875330: fstp dword ptr [edi + 0x42c] */
  WF32((uint32_t)(edi + 0x42cu), ST0); FPOP();
/* 875336: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 87533a: fadd dword ptr [edi + 0x430] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x430u)));
/* 875340: fstp dword ptr [edi + 0x430] */
  WF32((uint32_t)(edi + 0x430u), ST0); FPOP();
/* 875346: fadd dword ptr [edi + 0x434] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x434u)));
/* 87534c: fstp dword ptr [edi + 0x434] */
  WF32((uint32_t)(edi + 0x434u), ST0); FPOP();
L_875352: /* 875352: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 875353: mov eax, 1 */
  eax = 0x1u;
/* 875358: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 875359: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87535c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8753b0(void) {
  LOAD_REGS();
L_8753b0: /* 8753b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8753b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8753b2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8753b6: push 0xcda01c */
  { uint32_t v = 0xcda01cu; esp -= 4; W32(esp, v); }
/* 8753bb: mov ecx, esi */
  ecx = esi;
/* 8753bd: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 8753c5: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8753cbu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8753cb: mov eax, esi */
  eax = esi;
/* 8753cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8753ce: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 8753cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8753f0(void) {
  LOAD_REGS();
L_8753f0: /* 8753f0: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 8753f5: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8753f8: jne 0x875405 */
  if (!zf) goto L_875405;
L_8753fa: /* 8753fa: mov al, byte ptr [ecx + 0x34] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x34u))) & 0xffu);
/* 8753fd: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8753ff: je 0x875408 */
  if (zf) goto L_875408;
L_875401: /* 875401: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 875403: je 0x875408 */
  if (zf) goto L_875408;
L_875405: /* 875405: xor eax, eax */
  eax = 0;
/* 875407: ret  */
  esp += 4; SPILL(); return;
L_875408: /* 875408: mov eax, 1 */
  eax = 0x1u;
/* 87540d: ret  */
  esp += 4; SPILL(); return;
}

void f_875420(void) {
  LOAD_REGS();
L_875420: /* 875420: inc dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x4u), r);
  }
/* 875423: ret  */
  esp += 4; SPILL(); return;
}

void f_875440(void) {
  LOAD_REGS();
L_875440: /* 875440: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 875442: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 875445: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 875446: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 875449: xor edx, edx */
  edx = 0;
/* 87544b: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87544d: setl dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 875450: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 875451: mov eax, edx */
  eax = edx;
/* 875453: ret  */
  esp += 4; SPILL(); return;
}

void f_875470(void) {
  LOAD_REGS();
L_875470: /* 875470: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 875474: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 875475: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 875477: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x87547du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 87547d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_875490(void) {
  LOAD_REGS();
L_875490: /* 875490: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 875494: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 875495: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 875497: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x87549du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 87549d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8754b0(void) {
  LOAD_REGS();
L_8754b0: /* 8754b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8754b1: mov esi, ecx */
  esi = ecx;
/* 8754b3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8754b9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8754b9: mov eax, esi */
  eax = esi;
/* 8754bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8754bc: ret  */
  esp += 4; SPILL(); return;
}

void f_8754d0(void) {
  LOAD_REGS();
L_8754d0: /* 8754d0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8754d2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8754d6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 8754d9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8754f0(void) {
  LOAD_REGS();
L_8754f0: /* 8754f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8754f1: mov esi, ecx */
  esi = ecx;
/* 8754f3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8754f9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8754f9: mov eax, esi */
  eax = esi;
/* 8754fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8754fc: ret  */
  esp += 4; SPILL(); return;
}

void f_875510(void) {
  LOAD_REGS();
L_875510: /* 875510: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 875514: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 875516: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 875519: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 87551c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_875530(void) {
  LOAD_REGS();
L_875530: /* 875530: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 875534: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 875536: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 875537: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x87553du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 87553d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_875550(void) {
  LOAD_REGS();
L_875550: /* 875550: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 875554: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 875556: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 875557: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x87555du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 87555d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_875570(void) {
  LOAD_REGS();
L_875570: /* 875570: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 875574: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 875576: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 875577: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x87557du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 87557d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_875590(void) {
  LOAD_REGS();
L_875590: /* 875590: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 875594: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 875596: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 875597: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x87559du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 87559d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8755b0(void) {
  LOAD_REGS();
L_8755b0: /* 8755b0: mov eax, 1 */
  eax = 0x1u;
/* 8755b5: ret  */
  esp += 4; SPILL(); return;
}

void f_8755d0(void) {
  LOAD_REGS();
L_8755d0: /* 8755d0: mov eax, 1 */
  eax = 0x1u;
/* 8755d5: ret  */
  esp += 4; SPILL(); return;
}

void f_8755f0(void) {
  LOAD_REGS();
L_8755f0: /* 8755f0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 8755f4: xor edx, edx */
  edx = 0;
/* 8755f6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8755fc: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8755fe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 875600: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 875603: jp 0x875610 */
  if (pf) goto L_875610;
L_875605: /* 875605: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* 87560b: xor eax, eax */
  eax = 0;
/* 87560d: ret 4 */
  esp += 8; SPILL(); return;
L_875610: /* 875610: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 875614: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 875618: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 87561c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 87561f: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 875622: mov edx, eax */
  edx = eax;
/* 875624: fmul dword ptr [0xa0e1c0] */
  ST0 = ST0 * (F32((uint32_t)(0xa0e1c0u)));
/* 87562a: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 87562d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 875630: mov eax, 1 */
  eax = 0x1u;
/* 875635: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 87563b: fstp dword ptr [ecx + 0x14] */
  WF32((uint32_t)(ecx + 0x14u), ST0); FPOP();
/* 87563e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_875670(void) {
  LOAD_REGS();
L_875670: /* 875670: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 875673: ret  */
  esp += 4; SPILL(); return;
}

void f_875690(void) {
  LOAD_REGS();
L_875690: /* 875690: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 875692: ret  */
  esp += 4; SPILL(); return;
}

void f_8756b0(void) {
  LOAD_REGS();
L_8756b0: /* 8756b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8756b4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8756b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8756b7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8756bdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8756bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8756d0(void) {
  LOAD_REGS();
L_8756d0: /* 8756d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8756d1: mov ebp, esp */
  ebp = esp;
/* 8756d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8756d5: push 0x9d4930 */
  { uint32_t v = 0x9d4930u; esp -= 4; W32(esp, v); }
/* 8756da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8756e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8756e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8756e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8756eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8756ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8756ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8756ee: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8756f1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8756f8: xor edx, edx */
  edx = 0;
/* 8756fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_875700: /* 875700: cmp edx, dword ptr [ecx + 0x340] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 875706: jge 0x875739 */
  if ((sf == of)) goto L_875739;
L_875708: /* 875708: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 87570e: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 875711: fld dword ptr [esi + 0x80] */
  { double v = F32((uint32_t)(esi + 0x80u)); FPUSH(v); }
/* 875717: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 87571a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87571c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87571f: jne 0x875736 */
  if (!zf) goto L_875736;
L_875721: /* 875721: mov eax, esi */
  eax = esi;
/* 875723: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 875726: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87572d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87572e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87572f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 875730: mov esp, ebp */
  esp = ebp;
/* 875732: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 875733: ret 4 */
  esp += 8; SPILL(); return;
L_875736: /* 875736: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 875737: jmp 0x875700 */
  goto L_875700;
L_875739: /* 875739: push 0x87 */
  { uint32_t v = 0x87u; esp -= 4; W32(esp, v); }
/* 87573e: push 0xae6014 */
  { uint32_t v = 0xae6014u; esp -= 4; W32(esp, v); }
/* 875743: push 0xae6028 */
  { uint32_t v = 0xae6028u; esp -= 4; W32(esp, v); }
/* 875748: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x87574eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 87574e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 875751: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 875754: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 875755: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 875756: xor eax, eax */
  eax = 0;
/* 875758: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87575f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 875760: mov esp, ebp */
  esp = ebp;
/* 875762: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 875763: ret 4 */
  esp += 8; SPILL(); return;
}

void f_875766(void) {
  LOAD_REGS();
L_875766: /* 875766: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 875769: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 87576e: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 875771: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 875772: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 875775: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87577au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_87577a(); return;
}

void f_87577a(void) {
  LOAD_REGS();
L_87577a: /* 87577a: push 0xa188c0 */
  { uint32_t v = 0xa188c0u; esp -= 4; W32(esp, v); }
/* 87577f: push 0xae602c */
  { uint32_t v = 0xae602cu; esp -= 4; W32(esp, v); }
/* 875784: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x87578au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 87578a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87578d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87578f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 875791: call 0x99caf8 */
  esp -= 4; W32(esp, 0x875796u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_875796: guest_badaddr(0x875796); return;
}

void f_8757e0(void) {
  LOAD_REGS();
L_8757e0: /* 8757e0: mov eax, dword ptr [ecx + 0x340] */
  eax = R32((uint32_t)(ecx + 0x340u));
/* 8757e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8757e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8757e8: xor ebx, ebx */
  ebx = 0;
/* 8757ea: xor edi, edi */
  edi = 0;
/* 8757ec: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8757ee: jle 0x875889 */
  if ((zf || sf != of)) goto L_875889;
L_8757f4: /* 8757f4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8757f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8757f6: jmp 0x875800 */
  goto L_875800;
L_875800: /* 875800: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 875806: mov edx, dword ptr [eax + edi*4] */
  edx = R32((uint32_t)(eax + edi*4));
/* 875809: mov ebp, dword ptr [edx + 0x40] */
  ebp = R32((uint32_t)(edx + 0x40u));
/* 87580c: lea eax, [eax + edi*4] */
  eax = (uint32_t)(eax + edi*4);
/* 87580f: xor esi, esi */
  esi = 0;
/* 875811: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 875813: jle 0x875878 */
  if ((zf || sf != of)) goto L_875878;
L_875815: /* 875815: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 875817: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 87581b: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 87581e: mov edx, dword ptr [edx + esi*4] */
  edx = R32((uint32_t)(edx + esi*4));
/* 875821: fcomp dword ptr [edx + 0x44] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x44u)));
  FPOP();
/* 875824: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 875826: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 875829: jp 0x875830 */
  if (pf) goto L_875830;
L_87582b: /* 87582b: mov byte ptr [edx + 0x34], bl */
  W8((uint32_t)(edx + 0x34u), (ebx & 0xffu));
/* 87582e: jmp 0x875864 */
  goto L_875864;
L_875830: /* 875830: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 875834: fcomp dword ptr [edx + 0x44] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x44u)));
  FPOP();
/* 875837: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 875839: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87583c: jne 0x875852 */
  if (!zf) goto L_875852;
L_87583e: /* 87583e: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 875842: fcomp dword ptr [edx + 0x48] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x48u)));
  FPOP();
/* 875845: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 875847: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 87584a: jp 0x875852 */
  if (pf) goto L_875852;
L_87584c: /* 87584c: mov byte ptr [edx + 0x34], 1 */
  W8((uint32_t)(edx + 0x34u), 0x1u);
/* 875850: jmp 0x875864 */
  goto L_875864;
L_875852: /* 875852: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 875856: fcomp dword ptr [edx + 0x48] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x48u)));
  FPOP();
/* 875859: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87585b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87585e: jne 0x875864 */
  if (!zf) goto L_875864;
L_875860: /* 875860: mov byte ptr [edx + 0x34], 3 */
  W8((uint32_t)(edx + 0x34u), 0x3u);
L_875864: /* 875864: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 87586a: mov edx, dword ptr [eax + edi*4] */
  edx = R32((uint32_t)(eax + edi*4));
/* 87586d: mov ebp, dword ptr [edx + 0x40] */
  ebp = R32((uint32_t)(edx + 0x40u));
/* 875870: lea eax, [eax + edi*4] */
  eax = (uint32_t)(eax + edi*4);
/* 875873: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 875874: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 875876: jl 0x875815 */
  if ((sf != of)) goto L_875815;
L_875878: /* 875878: mov eax, dword ptr [ecx + 0x340] */
  eax = R32((uint32_t)(ecx + 0x340u));
/* 87587e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 87587f: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 875881: jl 0x875800 */
  if ((sf != of)) goto L_875800;
L_875887: /* 875887: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 875888: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_875889: /* 875889: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87588a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87588b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8757f8(void) {
  LOAD_REGS();
L_8757f8: /* 8757f8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8757ff: nop  */
L_875800: /* 875800: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 875806: mov edx, dword ptr [eax + edi*4] */
  edx = R32((uint32_t)(eax + edi*4));
/* 875809: mov ebp, dword ptr [edx + 0x40] */
  ebp = R32((uint32_t)(edx + 0x40u));
/* 87580c: lea eax, [eax + edi*4] */
  eax = (uint32_t)(eax + edi*4);
/* 87580f: xor esi, esi */
  esi = 0;
/* 875811: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 875813: jle 0x875878 */
  if ((zf || sf != of)) goto L_875878;
L_875815: /* 875815: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 875817: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 87581b: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 87581e: mov edx, dword ptr [edx + esi*4] */
  edx = R32((uint32_t)(edx + esi*4));
/* 875821: fcomp dword ptr [edx + 0x44] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x44u)));
  FPOP();
/* 875824: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 875826: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 875829: jp 0x875830 */
  if (pf) goto L_875830;
L_87582b: /* 87582b: mov byte ptr [edx + 0x34], bl */
  W8((uint32_t)(edx + 0x34u), (ebx & 0xffu));
/* 87582e: jmp 0x875864 */
  goto L_875864;
L_875830: /* 875830: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 875834: fcomp dword ptr [edx + 0x44] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x44u)));
  FPOP();
/* 875837: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 875839: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87583c: jne 0x875852 */
  if (!zf) goto L_875852;
L_87583e: /* 87583e: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 875842: fcomp dword ptr [edx + 0x48] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x48u)));
  FPOP();
/* 875845: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 875847: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 87584a: jp 0x875852 */
  if (pf) goto L_875852;
L_87584c: /* 87584c: mov byte ptr [edx + 0x34], 1 */
  W8((uint32_t)(edx + 0x34u), 0x1u);
/* 875850: jmp 0x875864 */
  goto L_875864;
L_875852: /* 875852: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 875856: fcomp dword ptr [edx + 0x48] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x48u)));
  FPOP();
/* 875859: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87585b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87585e: jne 0x875864 */
  if (!zf) goto L_875864;
L_875860: /* 875860: mov byte ptr [edx + 0x34], 3 */
  W8((uint32_t)(edx + 0x34u), 0x3u);
L_875864: /* 875864: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 87586a: mov edx, dword ptr [eax + edi*4] */
  edx = R32((uint32_t)(eax + edi*4));
/* 87586d: mov ebp, dword ptr [edx + 0x40] */
  ebp = R32((uint32_t)(edx + 0x40u));
/* 875870: lea eax, [eax + edi*4] */
  eax = (uint32_t)(eax + edi*4);
/* 875873: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 875874: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 875876: jl 0x875815 */
  if ((sf != of)) goto L_875815;
L_875878: /* 875878: mov eax, dword ptr [ecx + 0x340] */
  eax = R32((uint32_t)(ecx + 0x340u));
/* 87587e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 87587f: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 875881: jl 0x875800 */
  if ((sf != of)) goto L_875800;
L_875887: /* 875887: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 875888: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 875889: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87588a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87588b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8758c0(void) {
  LOAD_REGS();
L_8758c0: /* 8758c0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 8758c4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8758c8: fdiv dword ptr [ecx + 0x368] */
  ST0 = ST0 / (F32((uint32_t)(ecx + 0x368u)));
/* 8758ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8758cf: mov dword ptr [ecx + 0x378], eax */
  W32((uint32_t)(ecx + 0x378u), eax);
/* 8758d5: mov dword ptr [ecx + 0x3e0], 0 */
  W32((uint32_t)(ecx + 0x3e0u), 0x0u);
/* 8758df: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8758e2: call 0x6c228e */
  esp -= 4; W32(esp, 0x8758e7u); SPILL(); f_6c228e(); if (g_unwind) return; RELOAD();
/* 8758e7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_875900(void) {
  LOAD_REGS();
L_875900: /* 875900: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 875901: mov ebp, esp */
  ebp = esp;
/* 875903: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 875905: push 0x9d4940 */
  { uint32_t v = 0x9d4940u; esp -= 4; W32(esp, v); }
/* 87590a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 875910: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 875911: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 875918: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87591b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87591c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87591d: mov esi, ecx */
  esi = ecx;
/* 87591f: mov eax, dword ptr [esi + 0x360] */
  eax = R32((uint32_t)(esi + 0x360u));
/* 875925: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 875927: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 875928: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 87592b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 875932: jne 0x875943 */
  if (!zf) goto L_875943;
L_875934: /* 875934: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 875937: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 875938: call 0x6c9dfe */
  esp -= 4; W32(esp, 0x87593du); SPILL(); f_6c9dfe(); if (g_unwind) return; RELOAD();
/* 87593d: mov dword ptr [esi + 0x360], eax */
  W32((uint32_t)(esi + 0x360u), eax);
L_875943: /* 875943: mov esi, dword ptr [esi + 0x360] */
  esi = R32((uint32_t)(esi + 0x360u));
/* 875949: fld dword ptr [esi + 0x84] */
  { double v = F32((uint32_t)(esi + 0x84u)); FPUSH(v); }
/* 87594f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 875955: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 875957: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 87595a: jnp 0x875994 */
  if (!pf) goto L_875994;
L_87595c: /* 87595c: fld dword ptr [esi + 0x84] */
  { double v = F32((uint32_t)(esi + 0x84u)); FPUSH(v); }
/* 875962: jmp 0x87599a */
  goto L_87599a;
L_875994: /* 875994: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_87599a: /* 87599a: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 87599d: fsub dword ptr [esi + 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x7cu)));
/* 8759a0: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 8759a2: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8759a5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8759a7: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8759aa: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 8759b0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8759b2: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8759b5: jne 0x8759e5 */
  if (!zf) goto L_8759e5;
L_8759b7: /* 8759b7: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8759ba: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8759bd: fcomp dword ptr [0xa09ac8] */
  fpu_com(ST0, F32((uint32_t)(0xa09ac8u)));
  FPOP();
/* 8759c3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8759c5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8759c8: jnp 0x8759d2 */
  if (!pf) goto L_8759d2;
L_8759ca: /* 8759ca: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8759cc: fld dword ptr [0xa09ac8] */
  { double v = F32((uint32_t)(0xa09ac8u)); FPUSH(v); }
L_8759d2: /* 8759d2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8759d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8759dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8759dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8759de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8759df: mov esp, ebp */
  esp = ebp;
/* 8759e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8759e2: ret 4 */
  esp += 8; SPILL(); return;
L_8759e5: /* 8759e5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8759e8: fld dword ptr [0xa087d0] */
  { double v = F32((uint32_t)(0xa087d0u)); FPUSH(v); }
/* 8759ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8759ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8759f0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8759f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8759f8: mov esp, ebp */
  esp = ebp;
/* 8759fa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8759fb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_875964(void) {
  LOAD_REGS();
L_875964: /* 875964: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 875967: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 87596c: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 87596f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 875970: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 875973: call 0x99caf8 */
  esp -= 4; W32(esp, 0x875978u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_875978(); return;
}

void f_875978(void) {
  LOAD_REGS();
L_875978: /* 875978: push 0xa18910 */
  { uint32_t v = 0xa18910u; esp -= 4; W32(esp, v); }
/* 87597d: push 0xae62ac */
  { uint32_t v = 0xae62acu; esp -= 4; W32(esp, v); }
/* 875982: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x875988u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 875988: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87598b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87598d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87598f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x875994u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 875994: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 87599a: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 87599d: fsub dword ptr [esi + 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x7cu)));
/* 8759a0: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 8759a2: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8759a5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8759a7: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8759aa: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 8759b0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8759b2: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8759b5: jne 0x8759e5 */
  if (!zf) goto L_8759e5;
L_8759b7: /* 8759b7: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8759ba: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8759bd: fcomp dword ptr [0xa09ac8] */
  fpu_com(ST0, F32((uint32_t)(0xa09ac8u)));
  FPOP();
/* 8759c3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8759c5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8759c8: jnp 0x8759d2 */
  if (!pf) goto L_8759d2;
L_8759ca: /* 8759ca: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8759cc: fld dword ptr [0xa09ac8] */
  { double v = F32((uint32_t)(0xa09ac8u)); FPUSH(v); }
L_8759d2: /* 8759d2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8759d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8759dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8759dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8759de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8759df: mov esp, ebp */
  esp = ebp;
/* 8759e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8759e2: ret 4 */
  esp += 8; SPILL(); return;
L_8759e5: /* 8759e5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8759e8: fld dword ptr [0xa087d0] */
  { double v = F32((uint32_t)(0xa087d0u)); FPUSH(v); }
/* 8759ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8759ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8759f0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8759f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8759f8: mov esp, ebp */
  esp = ebp;
/* 8759fa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8759fb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_875a40(void) {
  LOAD_REGS();
L_875a40: /* 875a40: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 875a46: mov eax, ecx */
  eax = ecx;
/* 875a48: mov ecx, dword ptr [eax + 0x340] */
  ecx = R32((uint32_t)(eax + 0x340u));
/* 875a4e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 875a50: jle 0x875a63 */
  if ((zf || sf != of)) goto L_875a63;
L_875a52: /* 875a52: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
L_875a58: /* 875a58: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 875a5a: fadd dword ptr [edx + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x38u)));
/* 875a5d: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 875a60: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 875a61: jne 0x875a58 */
  if (!zf) goto L_875a58;
L_875a63: /* 875a63: ret  */
  esp += 4; SPILL(); return;
}

void f_875a80(void) {
  LOAD_REGS();
L_875a80: /* 875a80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 875a81: mov ebp, esp */
  ebp = esp;
/* 875a83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 875a85: push 0x9d4950 */
  { uint32_t v = 0x9d4950u; esp -= 4; W32(esp, v); }
/* 875a8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 875a90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 875a91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 875a98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 875a9b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 875a9e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 875aa1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 875aa2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 875aa3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 875aa4: mov esi, ecx */
  esi = ecx;
/* 875aa6: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 875aa9: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 875aac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 875aad: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 875ab0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 875ab7: jne 0x875ace */
  if (!zf) goto L_875ace;
L_875ab9: /* 875ab9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 875abc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 875abd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 875abf: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 875ac2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 875ac3: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 875ac8: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x875aceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_875ace: /* 875ace: mov ecx, esi */
  ecx = esi;
/* 875ad0: call 0x6c10f0 */
  esp -= 4; W32(esp, 0x875ad5u); SPILL(); f_6c10f0(); if (g_unwind) return; RELOAD();
/* 875ad5: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 875ad8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 875adb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 875adc: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 875ade: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 875ae1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 875ae2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 875ae9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 875aea: mov esp, ebp */
  esp = ebp;
/* 875aec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 875aed: ret 8 */
  esp += 12; SPILL(); return;
}

void f_875af0(void) {
  LOAD_REGS();
L_875af0: /* 875af0: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 875af3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 875af8: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 875afb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 875afc: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 875aff: call 0x99caf8 */
  esp -= 4; W32(esp, 0x875b04u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_875b04(); return;
}

void f_875b04(void) {
  LOAD_REGS();
L_875b04: /* 875b04: push 0xa18970 */
  { uint32_t v = 0xa18970u; esp -= 4; W32(esp, v); }
/* 875b09: push 0xae62c4 */
  { uint32_t v = 0xae62c4u; esp -= 4; W32(esp, v); }
/* 875b0e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x875b14u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 875b14: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 875b17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 875b19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 875b1b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x875b20u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_875b20: guest_badaddr(0x875b20); return;
}

void f_875b60(void) {
  LOAD_REGS();
L_875b60: /* 875b60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 875b61: mov ebp, esp */
  ebp = esp;
/* 875b63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 875b65: push 0x9d4960 */
  { uint32_t v = 0x9d4960u; esp -= 4; W32(esp, v); }
/* 875b6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 875b70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 875b71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 875b78: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 875b7b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 875b7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 875b7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 875b80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 875b81: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 875b84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 875b85: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 875b8c: call 0x6c3dc3 */
  esp -= 4; W32(esp, 0x875b91u); SPILL(); f_6c3dc3(); if (g_unwind) return; RELOAD();
/* 875b91: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 875b94: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 875b97: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 875b9a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 875b9b: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 875b9e: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 875ba1: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 875ba4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 875ba6: call 0x99c958 */
  esp -= 4; W32(esp, 0x875babu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 875bab: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 875bae: fisub dword ptr [ebp + 0x10] */
  ST0 = ST0 - ((double)(int32_t)R32((uint32_t)(ebp + 0x10u)));
/* 875bb1: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 875bb4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 875bb6: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 875bb9: mov edx, ecx */
  edx = ecx;
/* 875bbb: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 875bbd: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 875bc0: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 875bc3: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 875bc9: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 875bcc: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 875bcf: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 875bd2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 875bd4: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 875bd7: jnp 0x875c23 */
  if (!pf) goto L_875c23;
L_875bd9: /* 875bd9: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 875bdc: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 875bdf: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 875be2: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 875be5: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 875be8: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 875beb: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 875bee: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 875bf0: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 875bf3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 875bf5: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 875bf8: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 875bfb: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 875bfd: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 875c00: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 875c02: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 875c04: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 875c07: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 875c0a: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 875c0d: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 875c10: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 875c13: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 875c15: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 875c18: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 875c1b: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 875c1e: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 875c21: jmp 0x875c25 */
  goto L_875c25;
L_875c23: /* 875c23: fstp st(0) */
  STI(0) = ST0; FPOP();
L_875c25: /* 875c25: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 875c28: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 875c2b: mov ecx, eax */
  ecx = eax;
/* 875c2d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 875c2f: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 875c32: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 875c35: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 875c38: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 875c39: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 875c3c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 875c3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 875c40: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 875c47: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 875c48: mov esp, ebp */
  esp = ebp;
/* 875c4a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 875c4b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_875c4e(void) {
  LOAD_REGS();
L_875c4e: /* 875c4e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 875c51: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 875c56: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 875c59: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 875c5a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 875c5d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x875c62u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_875c62(); return;
}

void f_875c62(void) {
  LOAD_REGS();
L_875c62: /* 875c62: push 0xa189c8 */
  { uint32_t v = 0xa189c8u; esp -= 4; W32(esp, v); }
/* 875c67: push 0xae62cc */
  { uint32_t v = 0xae62ccu; esp -= 4; W32(esp, v); }
/* 875c6c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x875c72u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 875c72: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 875c75: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 875c77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 875c79: call 0x99caf8 */
  esp -= 4; W32(esp, 0x875c7eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_875c7e: guest_badaddr(0x875c7e); return;
}

void f_875cd0(void) {
  LOAD_REGS();
L_875cd0: /* 875cd0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 875cd4: cmp eax, 0x63 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 875cd7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 875cd8: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 875cdc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 875cdd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 875cde: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 875ce2: mov esi, ecx */
  esi = ecx;
/* 875ce4: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 875ce6: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 875ce9: jl 0x875cff */
  if ((sf != of)) goto L_875cff;
L_875ceb: /* 875ceb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 875cec: add eax, -0x63 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff9du);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 875cef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 875cf0: mov ecx, 0xb19098 */
  ecx = 0xb19098u;
/* 875cf5: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 875cf7: call 0x6ca5d8 */
  esp -= 4; W32(esp, 0x875cfcu); SPILL(); f_6ca5d8(); if (g_unwind) return; RELOAD();
/* 875cfc: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_875cff: /* 875cff: mov eax, dword ptr [ebx + 0x33c] */
  eax = R32((uint32_t)(ebx + 0x33cu));
/* 875d05: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 875d07: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 875d0a: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 875d0c: mov eax, esi */
  eax = esi;
/* 875d0e: jne 0x875d19 */
  if (!zf) goto L_875d19;
L_875d10: /* 875d10: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 875d13: mov dword ptr [esi], 0x63 */
  W32((uint32_t)(esi), 0x63u);
L_875d19: /* 875d19: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 875d1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 875d1b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 875d1c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_875d40(void) {
  LOAD_REGS();
L_875d40: /* 875d40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 875d41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 875d42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 875d43: mov ebx, ecx */
  ebx = ecx;
/* 875d45: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 875d48: mov edi, esp */
  edi = esp;
/* 875d4a: mov ecx, 0xd */
  ecx = 0xdu;
/* 875d4f: lea esi, [esp + 0x44] */
  esi = (uint32_t)(esp + 0x44u);
/* 875d53: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 875d55: lea ecx, [ebx + 0x394] */
  ecx = (uint32_t)(ebx + 0x394u);
/* 875d5b: call 0x6c7c66 */
  esp -= 4; W32(esp, 0x875d60u); SPILL(); f_6c7c66(); if (g_unwind) return; RELOAD();
/* 875d60: mov eax, dword ptr [ebx + 0x36c] */
  eax = R32((uint32_t)(ebx + 0x36cu));
/* 875d66: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 875d6b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 875d6d: lea ecx, [ebx + 0x3bc] */
  ecx = (uint32_t)(ebx + 0x3bcu);
/* 875d73: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 875d75: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 875d78: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 875d7b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 875d7e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 875d81: mov ecx, dword ptr [ebx + 0x39c] */
  ecx = R32((uint32_t)(ebx + 0x39cu));
/* 875d87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 875d88: lea ecx, [ebx + 0x3fc] */
  ecx = (uint32_t)(ebx + 0x3fcu);
/* 875d8e: call 0x6cc8ba */
  esp -= 4; W32(esp, 0x875d93u); SPILL(); f_6cc8ba(); if (g_unwind) return; RELOAD();
/* 875d93: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 875d94: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 875d95: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 875d96: ret 0x34 */
  esp += 56; SPILL(); return;
}

void f_875dc0(void) {
  LOAD_REGS();
L_875dc0: /* 875dc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 875dc2: push 0x9d499a */
  { uint32_t v = 0x9d499au; esp -= 4; W32(esp, v); }
/* 875dc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 875dcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 875dce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 875dd5: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 875dd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 875dd9: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 875ddd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 875dde: mov esi, ecx */
  esi = ecx;
/* 875de0: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 875de8: call 0x6c4eee */
  esp -= 4; W32(esp, 0x875dedu); SPILL(); f_6c4eee(); if (g_unwind) return; RELOAD();
/* 875ded: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 875df0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 875df3: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 875df7: mov ecx, eax */
  ecx = eax;
/* 875df9: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 875dfc: mov dword ptr [esp + 0x38], 1 */
  W32((uint32_t)(esp + 0x38u), 0x1u);
/* 875e04: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 875e07: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x875e0du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 875e0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 875e0e: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 875e11: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x875e17u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 875e17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 875e18: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 875e1c: push 0xae62e8 */
  { uint32_t v = 0xae62e8u; esp -= 4; W32(esp, v); }
/* 875e21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 875e22: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x875e28u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 875e28: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 875e2b: mov ecx, eax */
  ecx = eax;
/* 875e2d: mov byte ptr [esp + 0x28], 2 */
  W8((uint32_t)(esp + 0x28u), 0x2u);
/* 875e32: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x875e38u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 875e38: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 875e3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 875e3d: mov ecx, esi */
  ecx = esi;
/* 875e3f: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x875e45u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 875e45: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 875e49: mov dword ptr [esp + 4], 1 */
  W32((uint32_t)(esp + 0x4u), 0x1u);
/* 875e51: mov byte ptr [esp + 0x28], 1 */
  W8((uint32_t)(esp + 0x28u), 0x1u);
/* 875e56: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x875e5cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 875e5c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 875e60: mov byte ptr [esp + 0x28], 0 */
  W8((uint32_t)(esp + 0x28u), 0x0u);
/* 875e65: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x875e6bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 875e6b: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 875e6f: mov eax, esi */
  eax = esi;
/* 875e71: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 875e72: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 875e79: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 875e7c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_875eb0(void) {
  LOAD_REGS();
L_875eb0: /* 875eb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 875eb2: push 0x9d49ea */
  { uint32_t v = 0x9d49eau; esp -= 4; W32(esp, v); }
/* 875eb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 875ebd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 875ebe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 875ec5: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 875ec8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 875ec9: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 875ecd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 875ece: mov esi, ecx */
  esi = ecx;
/* 875ed0: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 875ed8: call 0x6cbe7e */
  esp -= 4; W32(esp, 0x875eddu); SPILL(); f_6cbe7e(); if (g_unwind) return; RELOAD();
/* 875edd: lea ecx, [esi + 0x50] */
  ecx = (uint32_t)(esi + 0x50u);
/* 875ee0: mov dword ptr [esp + 0x28], 1 */
  W32((uint32_t)(esp + 0x28u), 0x1u);
/* 875ee8: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x875eeeu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 875eee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 875eef: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 875ef3: push 0xae640c */
  { uint32_t v = 0xae640cu; esp -= 4; W32(esp, v); }
/* 875ef8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 875ef9: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x875effu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 875eff: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 875f02: mov ecx, eax */
  ecx = eax;
/* 875f04: mov byte ptr [esp + 0x28], 2 */
  W8((uint32_t)(esp + 0x28u), 0x2u);
/* 875f09: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x875f0fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 875f0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 875f10: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 875f14: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x875f1au); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* 875f1a: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 875f1e: mov byte ptr [esp + 0x28], 1 */
  W8((uint32_t)(esp + 0x28u), 0x1u);
/* 875f23: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x875f29u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 875f29: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 875f2d: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 875f31: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 875f32: mov ecx, esi */
  ecx = esi;
/* 875f34: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x875f3au); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 875f3a: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 875f3e: mov dword ptr [esp + 4], 1 */
  W32((uint32_t)(esp + 0x4u), 0x1u);
/* 875f46: mov byte ptr [esp + 0x28], 0 */
  W8((uint32_t)(esp + 0x28u), 0x0u);
/* 875f4b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x875f51u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 875f51: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 875f55: mov eax, esi */
  eax = esi;
/* 875f57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 875f58: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 875f5f: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 875f62: ret 4 */
  esp += 8; SPILL(); return;
}

void f_875fa0(void) {
  LOAD_REGS();
L_875fa0: /* 875fa0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 875fa4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 875fa5: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 875fa9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 875faa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 875fab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 875fac: mov esi, ecx */
  esi = ecx;
/* 875fae: call 0x6c69fb */
  esp -= 4; W32(esp, 0x875fb3u); SPILL(); f_6c69fb(); if (g_unwind) return; RELOAD();
/* 875fb3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 875fb5: jne 0x875fbc */
  if (!zf) goto L_875fbc;
L_875fb7: /* 875fb7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 875fb8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 875fb9: ret 8 */
  esp += 12; SPILL(); return;
L_875fbc: /* 875fbc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 875fbe: mov ecx, esi */
  ecx = esi;
/* 875fc0: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x875fc3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 875fc3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 875fc5: je 0x876089 */
  if (zf) goto L_876089;
L_875fcb: /* 875fcb: fld dword ptr [esi + 0x50] */
  { double v = F32((uint32_t)(esi + 0x50u)); FPUSH(v); }
/* 875fce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 875fcf: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 875fd5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 875fd7: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 875fda: jp 0x876000 */
  if (pf) goto L_876000;
L_875fdc: /* 875fdc: mov edi, dword ptr [ebx + 0x36c] */
  edi = R32((uint32_t)(ebx + 0x36cu));
/* 875fe2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 875fe4: je 0x876000 */
  if (zf) goto L_876000;
L_875fe6: /* 875fe6: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 875feb: mov ecx, edi */
  ecx = edi;
/* 875fed: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x875ff3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 875ff3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 875ff5: je 0x876000 */
  if (zf) goto L_876000;
L_875ff7: /* 875ff7: mov eax, dword ptr [edi + 0x348] */
  eax = R32((uint32_t)(edi + 0x348u));
/* 875ffd: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
L_876000: /* 876000: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 876004: fsub dword ptr [esi + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x44u)));
/* 876007: fdiv dword ptr [esi + 0x4c] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x4cu)));
/* 87600a: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 87600e: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 876014: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 876016: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 876019: jne 0x876036 */
  if (!zf) goto L_876036;
L_87601b: /* 87601b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 87601f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 876023: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 876029: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87602b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 87602e: jp 0x876042 */
  if (pf) goto L_876042;
L_876030: /* 876030: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 876034: jmp 0x87604c */
  goto L_87604c;
L_876036: /* 876036: fld dword ptr [0xa087d0] */
  { double v = F32((uint32_t)(0xa087d0u)); FPUSH(v); }
/* 87603c: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 876040: jmp 0x87604c */
  goto L_87604c;
L_876042: /* 876042: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 876044: mov dword ptr [esp + 0x10], 0x3f800000 */
  W32((uint32_t)(esp + 0x10u), 0x3f800000u);
L_87604c: /* 87604c: cmp byte ptr [esi + 0x34], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x34u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 876050: jne 0x87605a */
  if (!zf) goto L_87605a;
L_876052: /* 876052: mov dword ptr [esp + 0x10], 0x3f800000 */
  W32((uint32_t)(esp + 0x10u), 0x3f800000u);
L_87605a: /* 87605a: mov edi, dword ptr [ebx + 0x36c] */
  edi = R32((uint32_t)(ebx + 0x36cu));
/* 876060: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 876062: je 0x876088 */
  if (zf) goto L_876088;
L_876064: /* 876064: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 876069: mov ecx, edi */
  ecx = edi;
/* 87606b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x876071u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 876071: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 876073: je 0x876088 */
  if (zf) goto L_876088;
L_876075: /* 876075: fld dword ptr [esi + 0x54] */
  { double v = F32((uint32_t)(esi + 0x54u)); FPUSH(v); }
/* 876078: fsub dword ptr [esi + 0x50] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x50u)));
/* 87607b: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 87607f: fadd dword ptr [esi + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x50u)));
/* 876082: fstp dword ptr [edi + 0x348] */
  WF32((uint32_t)(edi + 0x348u), ST0); FPOP();
L_876088: /* 876088: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_876089: /* 876089: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87608a: mov eax, 1 */
  eax = 0x1u;
/* 87608f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 876090: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8760e0(void) {
  LOAD_REGS();
L_8760e0: /* 8760e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8760e2: push 0x9d4a3a */
  { uint32_t v = 0x9d4a3au; esp -= 4; W32(esp, v); }
/* 8760e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8760ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8760ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8760f5: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8760f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8760f9: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 8760fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8760fe: mov esi, ecx */
  esi = ecx;
/* 876100: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 876108: call 0x6cbe7e */
  esp -= 4; W32(esp, 0x87610du); SPILL(); f_6cbe7e(); if (g_unwind) return; RELOAD();
/* 87610d: fld dword ptr [esi + 0x54] */
  { double v = F32((uint32_t)(esi + 0x54u)); FPUSH(v); }
/* 876110: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 876113: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 876117: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 87611b: fld dword ptr [esi + 0x50] */
  { double v = F32((uint32_t)(esi + 0x50u)); FPUSH(v); }
/* 87611e: mov dword ptr [esp + 0x38], 1 */
  W32((uint32_t)(esp + 0x38u), 0x1u);
/* 876126: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 876129: push 0xae6428 */
  { uint32_t v = 0xae6428u; esp -= 4; W32(esp, v); }
/* 87612e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87612f: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x876135u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 876135: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 876138: mov ecx, eax */
  ecx = eax;
/* 87613a: mov byte ptr [esp + 0x28], 2 */
  W8((uint32_t)(esp + 0x28u), 0x2u);
/* 87613f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x876145u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 876145: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 876146: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 87614a: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x876150u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* 876150: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 876154: mov byte ptr [esp + 0x28], 1 */
  W8((uint32_t)(esp + 0x28u), 0x1u);
/* 876159: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x87615fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 87615f: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 876163: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 876167: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 876168: mov ecx, esi */
  ecx = esi;
/* 87616a: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x876170u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 876170: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 876174: mov dword ptr [esp + 4], 1 */
  W32((uint32_t)(esp + 0x4u), 0x1u);
/* 87617c: mov byte ptr [esp + 0x28], 0 */
  W8((uint32_t)(esp + 0x28u), 0x0u);
/* 876181: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x876187u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 876187: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 87618b: mov eax, esi */
  eax = esi;
/* 87618d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87618e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 876195: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 876198: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8761d0(void) {
  LOAD_REGS();
L_8761d0: /* 8761d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8761d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8761d5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8761d6: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 8761da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8761db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8761dc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8761dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8761de: mov ebx, ecx */
  ebx = ecx;
/* 8761e0: call 0x6c69fb */
  esp -= 4; W32(esp, 0x8761e5u); SPILL(); f_6c69fb(); if (g_unwind) return; RELOAD();
/* 8761e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8761e7: je 0x87620c */
  if (zf) goto L_87620c;
L_8761e9: /* 8761e9: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8761eb: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x8761eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8761ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8761f0: je 0x876215 */
  if (zf) goto L_876215;
L_8761f2: /* 8761f2: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8761f5: mov edi, esp */
  edi = esp;
/* 8761f7: lea esi, [ebx + 0x50] */
  esi = (uint32_t)(ebx + 0x50u);
/* 8761fa: mov ecx, 0xd */
  ecx = 0xdu;
/* 8761ff: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 876201: mov ecx, ebp */
  ecx = ebp;
/* 876203: call 0x6c452a */
  esp -= 4; W32(esp, 0x876208u); SPILL(); f_6c452a(); if (g_unwind) return; RELOAD();
/* 876208: mov byte ptr [ebx + 0x34], 3 */
  W8((uint32_t)(ebx + 0x34u), 0x3u);
L_87620c: /* 87620c: xor eax, eax */
  eax = 0;
/* 87620e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87620f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 876210: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 876211: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 876212: ret 8 */
  esp += 12; SPILL(); return;
L_876215: /* 876215: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 876216: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 876217: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 876218: mov eax, 1 */
  eax = 0x1u;
/* 87621d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87621e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_876250(void) {
  LOAD_REGS();
L_876250: /* 876250: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 876252: push 0x9d4aab */
  { uint32_t v = 0x9d4aabu; esp -= 4; W32(esp, v); }
/* 876257: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87625d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87625e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 876265: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 876268: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 876269: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87626a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87626b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87626c: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 876270: xor ebx, ebx */
  ebx = 0;
/* 876272: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 876273: mov esi, ecx */
  esi = ecx;
/* 876275: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 876279: call 0x6cbe7e */
  esp -= 4; W32(esp, 0x87627eu); SPILL(); f_6cbe7e(); if (g_unwind) return; RELOAD();
/* 87627e: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 876281: mov ebp, dword ptr [0xcfa540] */
  ebp = R32((uint32_t)(0xcfa540u));
/* 876287: mov eax, 1 */
  eax = 0x1u;
/* 87628c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87628e: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 876292: jne 0x8762d2 */
  if (!zf) goto L_8762d2;
L_876294: /* 876294: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 876297: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 876299: je 0x8762a3 */
  if (zf) goto L_8762a3;
L_87629b: /* 87629b: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8762a1u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8762a1: jmp 0x8762a8 */
  goto L_8762a8;
L_8762a3: /* 8762a3: mov eax, 0xae6464 */
  eax = 0xae6464u;
L_8762a8: /* 8762a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8762a9: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8762ad: push 0xae6470 */
  { uint32_t v = 0xae6470u; esp -= 4; W32(esp, v); }
/* 8762b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8762b3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8762b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8762b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8762b8: mov ebx, 1 */
  ebx = 0x1u;
/* 8762bd: mov ecx, eax */
  ecx = eax;
/* 8762bf: mov byte ptr [esp + 0x4c], 2 */
  W8((uint32_t)(esp + 0x4cu), 0x2u);
/* 8762c4: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 8762c8: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8762ceu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8762ce: mov edi, eax */
  edi = eax;
/* 8762d0: jmp 0x8762d7 */
  goto L_8762d7;
L_8762d2: /* 8762d2: mov edi, 0xcda020 */
  edi = 0xcda020u;
L_8762d7: /* 8762d7: mov edx, dword ptr [esi + 0x50] */
  edx = R32((uint32_t)(esi + 0x50u));
/* 8762da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8762db: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 8762df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8762e0: mov ecx, 0xb19098 */
  ecx = 0xb19098u;
/* 8762e5: call 0x6c81c5 */
  esp -= 4; W32(esp, 0x8762eau); SPILL(); f_6c81c5(); if (g_unwind) return; RELOAD();
/* 8762ea: fld dword ptr [esi + 0x58] */
  { double v = F32((uint32_t)(esi + 0x58u)); FPUSH(v); }
/* 8762ed: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8762f0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8762f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8762f4: mov ecx, eax */
  ecx = eax;
/* 8762f6: mov dword ptr [esp + 0x58], 3 */
  W32((uint32_t)(esp + 0x58u), 0x3u);
/* 8762fe: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x876304u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 876304: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 876305: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 876309: push 0xae6490 */
  { uint32_t v = 0xae6490u; esp -= 4; W32(esp, v); }
/* 87630e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87630f: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x876311u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 876311: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 876314: mov ecx, eax */
  ecx = eax;
/* 876316: mov byte ptr [esp + 0x4c], 4 */
  W8((uint32_t)(esp + 0x4cu), 0x4u);
/* 87631b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x876321u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 876321: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 876322: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 876326: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x87632cu); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* 87632c: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 876330: mov byte ptr [esp + 0x4c], 3 */
  W8((uint32_t)(esp + 0x4cu), 0x3u);
/* 876335: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x87633bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 87633b: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 87633f: mov byte ptr [esp + 0x4c], 2 */
  W8((uint32_t)(esp + 0x4cu), 0x2u);
/* 876344: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x87634au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 87634a: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87634d: mov dword ptr [esp + 0x4c], 1 */
  W32((uint32_t)(esp + 0x4cu), 0x1u);
/* 876355: je 0x876368 */
  if (zf) goto L_876368;
L_876357: /* 876357: and ebx, 0xfffffffe */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 87635a: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 87635e: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 876362: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x876368u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_876368: /* 876368: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 87636c: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 876370: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 876371: mov ecx, esi */
  ecx = esi;
/* 876373: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x876379u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 876379: or ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 87637c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 876380: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 876384: mov byte ptr [esp + 0x4c], 0 */
  W8((uint32_t)(esp + 0x4cu), 0x0u);
/* 876389: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x87638fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 87638f: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 876393: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 876394: mov eax, esi */
  eax = esi;
/* 876396: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 876397: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 876398: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 876399: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8763a0: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8763a3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_876410(void) {
  LOAD_REGS();
L_876410: /* 876410: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 876414: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 876415: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 876416: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 87641a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87641b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87641c: mov esi, ecx */
  esi = ecx;
/* 87641e: call 0x6c69fb */
  esp -= 4; W32(esp, 0x876423u); SPILL(); f_6c69fb(); if (g_unwind) return; RELOAD();
/* 876423: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 876425: jne 0x87642c */
  if (!zf) goto L_87642c;
L_876427: /* 876427: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 876428: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 876429: ret 8 */
  esp += 12; SPILL(); return;
L_87642c: /* 87642c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 87642e: mov ecx, esi */
  ecx = esi;
/* 876430: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x876433u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 876433: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 876435: je 0x8764b5 */
  if (zf) goto L_8764b5;
L_876437: /* 876437: fld dword ptr [esi + 0x50] */
  { double v = F32((uint32_t)(esi + 0x50u)); FPUSH(v); }
/* 87643a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 876440: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 876442: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 876445: jp 0x876456 */
  if (pf) goto L_876456;
L_876447: /* 876447: mov eax, dword ptr [edi + 0xb0] */
  eax = R32((uint32_t)(edi + 0xb0u));
/* 87644d: mov ecx, dword ptr [eax + 0x3a8] */
  ecx = R32((uint32_t)(eax + 0x3a8u));
/* 876453: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
L_876456: /* 876456: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 87645a: fsub dword ptr [esi + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x44u)));
/* 87645d: fdiv dword ptr [esi + 0x4c] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x4cu)));
/* 876460: fst dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0);
/* 876464: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 87646a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87646c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87646f: jne 0x8764bf */
  if (!zf) goto L_8764bf;
L_876471: /* 876471: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 876475: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 876479: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 87647f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 876481: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 876484: jnp 0x87648e */
  if (!pf) goto L_87648e;
L_876486: /* 876486: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 876488: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_87648e: /* 87648e: cmp byte ptr [esi + 0x34], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x34u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 876492: jne 0x87649c */
  if (!zf) goto L_87649c;
L_876494: /* 876494: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 876496: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_87649c: /* 87649c: fld dword ptr [esi + 0x54] */
  { double v = F32((uint32_t)(esi + 0x54u)); FPUSH(v); }
/* 87649f: mov edx, dword ptr [edi + 0xb0] */
  edx = R32((uint32_t)(edi + 0xb0u));
/* 8764a5: fsub dword ptr [esi + 0x50] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x50u)));
/* 8764a8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8764aa: fadd dword ptr [esi + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x50u)));
/* 8764ad: fstp dword ptr [edx + 0x3a8] */
  WF32((uint32_t)(edx + 0x3a8u), ST0); FPOP();
/* 8764b3: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8764b5: /* 8764b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8764b6: mov eax, 1 */
  eax = 0x1u;
/* 8764bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8764bc: ret 8 */
  esp += 12; SPILL(); return;
L_8764bf: /* 8764bf: fld dword ptr [0xa087d0] */
  { double v = F32((uint32_t)(0xa087d0u)); FPUSH(v); }
/* 8764c5: jmp 0x87648e */
  goto L_87648e;
}

void f_876500(void) {
  LOAD_REGS();
L_876500: /* 876500: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 876502: push 0x9d4afa */
  { uint32_t v = 0x9d4afau; esp -= 4; W32(esp, v); }
/* 876507: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87650d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87650e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 876515: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 876518: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 876519: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87651d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87651e: mov esi, ecx */
  esi = ecx;
/* 876520: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 876528: call 0x6cbe7e */
  esp -= 4; W32(esp, 0x87652du); SPILL(); f_6cbe7e(); if (g_unwind) return; RELOAD();
/* 87652d: fld dword ptr [esi + 0x54] */
  { double v = F32((uint32_t)(esi + 0x54u)); FPUSH(v); }
/* 876530: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 876533: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 876537: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 87653b: fld dword ptr [esi + 0x50] */
  { double v = F32((uint32_t)(esi + 0x50u)); FPUSH(v); }
/* 87653e: mov dword ptr [esp + 0x38], 1 */
  W32((uint32_t)(esp + 0x38u), 0x1u);
/* 876546: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 876549: push 0xae64e4 */
  { uint32_t v = 0xae64e4u; esp -= 4; W32(esp, v); }
/* 87654e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87654f: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x876555u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 876555: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 876558: mov ecx, eax */
  ecx = eax;
/* 87655a: mov byte ptr [esp + 0x28], 2 */
  W8((uint32_t)(esp + 0x28u), 0x2u);
/* 87655f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x876565u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 876565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 876566: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 87656a: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x876570u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* 876570: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 876574: mov byte ptr [esp + 0x28], 1 */
  W8((uint32_t)(esp + 0x28u), 0x1u);
/* 876579: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x87657fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 87657f: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 876583: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 876587: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 876588: mov ecx, esi */
  ecx = esi;
/* 87658a: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x876590u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 876590: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 876594: mov dword ptr [esp + 4], 1 */
  W32((uint32_t)(esp + 0x4u), 0x1u);
/* 87659c: mov byte ptr [esp + 0x28], 0 */
  W8((uint32_t)(esp + 0x28u), 0x0u);
/* 8765a1: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8765a7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8765a7: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8765ab: mov eax, esi */
  eax = esi;
/* 8765ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8765ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8765b5: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8765b8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8765f0(void) {
  LOAD_REGS();
L_8765f0: /* 8765f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8765f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8765f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8765f6: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 8765fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8765fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8765fc: mov esi, ecx */
  esi = ecx;
/* 8765fe: call 0x6c69fb */
  esp -= 4; W32(esp, 0x876603u); SPILL(); f_6c69fb(); if (g_unwind) return; RELOAD();
/* 876603: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 876605: jne 0x87660c */
  if (!zf) goto L_87660c;
L_876607: /* 876607: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 876608: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 876609: ret 8 */
  esp += 12; SPILL(); return;
L_87660c: /* 87660c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 87660e: mov ecx, esi */
  ecx = esi;
/* 876610: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x876613u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 876613: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 876615: je 0x876689 */
  if (zf) goto L_876689;
L_876617: /* 876617: fld dword ptr [esi + 0x50] */
  { double v = F32((uint32_t)(esi + 0x50u)); FPUSH(v); }
/* 87661a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 876620: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 876622: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 876625: jp 0x876630 */
  if (pf) goto L_876630;
L_876627: /* 876627: mov eax, dword ptr [edi + 0x364] */
  eax = R32((uint32_t)(edi + 0x364u));
/* 87662d: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
L_876630: /* 876630: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 876634: fsub dword ptr [esi + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x44u)));
/* 876637: fdiv dword ptr [esi + 0x4c] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x4cu)));
/* 87663a: fst dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0);
/* 87663e: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 876644: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 876646: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 876649: jne 0x876693 */
  if (!zf) goto L_876693;
L_87664b: /* 87664b: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 87664f: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 876653: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 876659: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87665b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 87665e: jnp 0x876668 */
  if (!pf) goto L_876668;
L_876660: /* 876660: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 876662: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_876668: /* 876668: cmp byte ptr [esi + 0x34], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x34u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87666c: jne 0x876676 */
  if (!zf) goto L_876676;
L_87666e: /* 87666e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 876670: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_876676: /* 876676: fld dword ptr [esi + 0x54] */
  { double v = F32((uint32_t)(esi + 0x54u)); FPUSH(v); }
/* 876679: fsub dword ptr [esi + 0x50] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x50u)));
/* 87667c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 87667e: fadd dword ptr [esi + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x50u)));
/* 876681: fstp dword ptr [edi + 0x364] */
  WF32((uint32_t)(edi + 0x364u), ST0); FPOP();
/* 876687: fstp st(0) */
  STI(0) = ST0; FPOP();
L_876689: /* 876689: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87668a: mov eax, 1 */
  eax = 0x1u;
/* 87668f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 876690: ret 8 */
  esp += 12; SPILL(); return;
L_876693: /* 876693: fld dword ptr [0xa087d0] */
  { double v = F32((uint32_t)(0xa087d0u)); FPUSH(v); }
/* 876699: jmp 0x876668 */
  goto L_876668;
}

void f_8766d0(void) {
  LOAD_REGS();
L_8766d0: /* 8766d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8766d2: push 0x9d4b4a */
  { uint32_t v = 0x9d4b4au; esp -= 4; W32(esp, v); }
/* 8766d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8766dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8766de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8766e5: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8766e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8766e9: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 8766ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8766ee: mov esi, ecx */
  esi = ecx;
/* 8766f0: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 8766f8: call 0x6cbe7e */
  esp -= 4; W32(esp, 0x8766fdu); SPILL(); f_6cbe7e(); if (g_unwind) return; RELOAD();
/* 8766fd: fld dword ptr [esi + 0x54] */
  { double v = F32((uint32_t)(esi + 0x54u)); FPUSH(v); }
/* 876700: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 876703: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 876707: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 87670b: fld dword ptr [esi + 0x50] */
  { double v = F32((uint32_t)(esi + 0x50u)); FPUSH(v); }
/* 87670e: mov dword ptr [esp + 0x38], 1 */
  W32((uint32_t)(esp + 0x38u), 0x1u);
/* 876716: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 876719: push 0xae6520 */
  { uint32_t v = 0xae6520u; esp -= 4; W32(esp, v); }
/* 87671e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87671f: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x876725u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 876725: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 876728: mov ecx, eax */
  ecx = eax;
/* 87672a: mov byte ptr [esp + 0x28], 2 */
  W8((uint32_t)(esp + 0x28u), 0x2u);
/* 87672f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x876735u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 876735: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 876736: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 87673a: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x876740u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* 876740: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 876744: mov byte ptr [esp + 0x28], 1 */
  W8((uint32_t)(esp + 0x28u), 0x1u);
/* 876749: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x87674fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 87674f: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 876753: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 876757: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 876758: mov ecx, esi */
  ecx = esi;
/* 87675a: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x876760u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 876760: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 876764: mov dword ptr [esp + 4], 1 */
  W32((uint32_t)(esp + 0x4u), 0x1u);
/* 87676c: mov byte ptr [esp + 0x28], 0 */
  W8((uint32_t)(esp + 0x28u), 0x0u);
/* 876771: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x876777u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 876777: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 87677b: mov eax, esi */
  eax = esi;
/* 87677d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87677e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 876785: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 876788: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8767c0(void) {
  LOAD_REGS();
L_8767c0: /* 8767c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8767c4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8767c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8767c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8767c9: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 8767cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8767ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8767cf: mov esi, ecx */
  esi = ecx;
/* 8767d1: call 0x6c69fb */
  esp -= 4; W32(esp, 0x8767d6u); SPILL(); f_6c69fb(); if (g_unwind) return; RELOAD();
/* 8767d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8767d8: je 0x876889 */
  if (zf) goto L_876889;
L_8767de: /* 8767de: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8767e0: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x8767e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8767e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8767e5: je 0x87689b */
  if (zf) goto L_87689b;
L_8767eb: /* 8767eb: mov edi, dword ptr [edi + 0x36c] */
  edi = R32((uint32_t)(edi + 0x36cu));
/* 8767f1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8767f3: je 0x876889 */
  if (zf) goto L_876889;
L_8767f9: /* 8767f9: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 8767fe: mov ecx, edi */
  ecx = edi;
/* 876800: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x876806u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 876806: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 876808: je 0x876889 */
  if (zf) goto L_876889;
L_87680a: /* 87680a: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87680e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87680f: lea ecx, [esi + 0x50] */
  ecx = (uint32_t)(esi + 0x50u);
/* 876812: call 0x6c91c4 */
  esp -= 4; W32(esp, 0x876817u); SPILL(); f_6c91c4(); if (g_unwind) return; RELOAD();
/* 876817: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 87681b: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 87681f: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 876823: lea ecx, [edi + 0x5ec] */
  ecx = (uint32_t)(edi + 0x5ecu);
/* 876829: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 87682b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 87682f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 876832: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 876835: fsub dword ptr [esi + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x44u)));
/* 876838: fdiv dword ptr [esi + 0x4c] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x4cu)));
/* 87683b: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 87683f: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 876845: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 876847: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87684a: jne 0x876893 */
  if (!zf) goto L_876893;
L_87684c: /* 87684c: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 876850: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 876854: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 87685a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87685c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 87685f: jnp 0x876869 */
  if (!pf) goto L_876869;
L_876861: /* 876861: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 876863: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_876869: /* 876869: cmp byte ptr [esi + 0x34], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x34u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87686d: jne 0x876877 */
  if (!zf) goto L_876877;
L_87686f: /* 87686f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 876871: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_876877: /* 876877: test byte ptr [esi + 0x54], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x54u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87687b: je 0x876883 */
  if (zf) goto L_876883;
L_87687d: /* 87687d: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
L_876883: /* 876883: fstp dword ptr [edi + 0x5e0] */
  WF32((uint32_t)(edi + 0x5e0u), ST0); FPOP();
L_876889: /* 876889: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87688a: xor eax, eax */
  eax = 0;
/* 87688c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87688d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 876890: ret 8 */
  esp += 12; SPILL(); return;
L_876893: /* 876893: fld dword ptr [0xa087d0] */
  { double v = F32((uint32_t)(0xa087d0u)); FPUSH(v); }
/* 876899: jmp 0x876869 */
  goto L_876869;
L_87689b: /* 87689b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87689c: mov eax, 1 */
  eax = 0x1u;
/* 8768a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8768a2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8768a5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8768f0(void) {
  LOAD_REGS();
L_8768f0: /* 8768f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8768f2: push 0x9d4b9a */
  { uint32_t v = 0x9d4b9au; esp -= 4; W32(esp, v); }
/* 8768f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8768fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8768fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 876905: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 876908: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 876909: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87690a: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 87690e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87690f: mov esi, ecx */
  esi = ecx;
/* 876911: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 876919: call 0x6cbe7e */
  esp -= 4; W32(esp, 0x87691eu); SPILL(); f_6cbe7e(); if (g_unwind) return; RELOAD();
/* 87691e: mov al, byte ptr [esi + 0x54] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x54u))) & 0xffu);
/* 876921: mov ebx, 1 */
  ebx = 0x1u;
/* 876926: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 876928: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 87692c: mov eax, 0xae655c */
  eax = 0xae655cu;
/* 876931: jne 0x876938 */
  if (!zf) goto L_876938;
L_876933: /* 876933: mov eax, 0xae6564 */
  eax = 0xae6564u;
L_876938: /* 876938: movzx ecx, byte ptr [esi + 0x50] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x50u)));
/* 87693c: movzx edx, byte ptr [esi + 0x51] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0x51u)));
/* 876940: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 876941: movzx ecx, byte ptr [esi + 0x52] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x52u)));
/* 876945: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 876946: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 876947: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 876948: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 87694c: push 0xae656c */
  { uint32_t v = 0xae656cu; esp -= 4; W32(esp, v); }
/* 876951: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 876952: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x876958u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 876958: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87695b: mov ecx, eax */
  ecx = eax;
/* 87695d: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 876962: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x876968u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 876968: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 876969: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 87696d: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x876973u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* 876973: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 876977: mov byte ptr [esp + 0x2c], bl */
  W8((uint32_t)(esp + 0x2cu), (ebx & 0xffu));
/* 87697b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x876981u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 876981: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 876985: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 876989: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87698a: mov ecx, esi */
  ecx = esi;
/* 87698c: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x876992u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 876992: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 876996: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* 87699a: mov byte ptr [esp + 0x2c], 0 */
  W8((uint32_t)(esp + 0x2cu), 0x0u);
/* 87699f: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8769a5u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8769a5: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 8769a9: mov eax, esi */
  eax = esi;
/* 8769ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8769ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8769ad: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8769b4: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8769b7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_876a00(void) {
  LOAD_REGS();
L_876a00: /* 876a00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 876a01: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 876a03: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 876a05: mov esi, ecx */
  esi = ecx;
/* 876a07: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x876a0du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 876a0d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 876a11: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 876a13: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 876a15: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 876a18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 876a19: ret 4 */
  esp += 8; SPILL(); return;
}

void f_876a30(void) {
  LOAD_REGS();
L_876a30: /* 876a30: mov eax, ecx */
  eax = ecx;
/* 876a32: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 876a36: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 876a38: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 876a3f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_876a60(void) {
  LOAD_REGS();
L_876a60: /* 876a60: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 876a63: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 876a65: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 876a67: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 876a6a: ret  */
  esp += 4; SPILL(); return;
}

void f_876a80(void) {
  LOAD_REGS();
L_876a80: /* 876a80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 876a81: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 876a83: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 876a85: mov esi, ecx */
  esi = ecx;
/* 876a87: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x876a8du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 876a8d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 876a91: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 876a93: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 876a95: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 876a98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 876a99: ret 4 */
  esp += 8; SPILL(); return;
}

void f_876ab0(void) {
  LOAD_REGS();
L_876ab0: /* 876ab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 876ab1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 876ab3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 876ab5: mov esi, ecx */
  esi = ecx;
/* 876ab7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x876abdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 876abd: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 876ac1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 876ac3: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 876ac5: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 876ac8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 876ac9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_876ae0(void) {
  LOAD_REGS();
L_876ae0: /* 876ae0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 876ae3: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 876ae9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 876aeb: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 876aee: ret  */
  esp += 4; SPILL(); return;
}

void f_876b00(void) {
  LOAD_REGS();
L_876b00: /* 876b00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 876b01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 876b02: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 876b04: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 876b06: mov esi, ecx */
  esi = ecx;
/* 876b08: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x876b0eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 876b0e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 876b10: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 876b14: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 876b17: lea edi, [edx + ecx*8] */
  edi = (uint32_t)(edx + ecx*8);
/* 876b1a: mov ecx, 6 */
  ecx = 0x6u;
/* 876b1f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 876b21: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 876b22: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 876b23: ret 4 */
  esp += 8; SPILL(); return;
}

void f_876b40(void) {
  LOAD_REGS();
L_876b40: /* 876b40: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 876b43: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 876b49: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 876b4b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 876b4e: ret  */
  esp += 4; SPILL(); return;
}

void f_876b60(void) {
  LOAD_REGS();
L_876b60: /* 876b60: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 876b63: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 876b69: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 876b6b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 876b6e: ret  */
  esp += 4; SPILL(); return;
}

void f_876b80(void) {
  LOAD_REGS();
L_876b80: /* 876b80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 876b81: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 876b82: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 876b88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 876b89: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 876b8a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 876b8e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 876b90: mov esi, ecx */
  esi = ecx;
/* 876b92: jge 0x876ba8 */
  if ((sf == of)) goto L_876ba8;
L_876b94: /* 876b94: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 876b99: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 876b9e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 876ba3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x876ba5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 876ba5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_876ba8: /* 876ba8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 876bab: jle 0x876bc1 */
  if ((zf || sf != of)) goto L_876bc1;
L_876bad: /* 876bad: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 876bb2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 876bb7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 876bbc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x876bbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 876bbe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_876bc1: /* 876bc1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 876bc5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 876bc8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 876bcb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 876bcd: jle 0x876be3 */
  if ((zf || sf != of)) goto L_876be3;
L_876bcf: /* 876bcf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 876bd4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 876bd9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 876bde: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x876be0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 876be0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_876be3: /* 876be3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 876be5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 876be6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 876be7: mov ecx, esi */
  ecx = esi;
/* 876be9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x876befu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 876bef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 876bf0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 876bf1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 876bf2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 876bf3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_876c20(void) {
  LOAD_REGS();
L_876c20: /* 876c20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 876c21: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 876c22: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 876c28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 876c29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 876c2a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 876c2e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 876c30: mov esi, ecx */
  esi = ecx;
/* 876c32: jge 0x876c48 */
  if ((sf == of)) goto L_876c48;
L_876c34: /* 876c34: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 876c39: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 876c3e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 876c43: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x876c45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 876c45: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_876c48: /* 876c48: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 876c4b: jle 0x876c61 */
  if ((zf || sf != of)) goto L_876c61;
L_876c4d: /* 876c4d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 876c52: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 876c57: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 876c5c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x876c5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 876c5e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_876c61: /* 876c61: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 876c65: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 876c68: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 876c6b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 876c6d: jle 0x876c83 */
  if ((zf || sf != of)) goto L_876c83;
L_876c6f: /* 876c6f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 876c74: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 876c79: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 876c7e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x876c80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 876c80: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_876c83: /* 876c83: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 876c85: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 876c86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 876c87: mov ecx, esi */
  ecx = esi;
/* 876c89: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x876c8fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 876c8f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 876c90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 876c91: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 876c92: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 876c93: ret 8 */
  esp += 12; SPILL(); return;
}

void f_876cc0(void) {
  LOAD_REGS();
L_876cc0: /* 876cc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 876cc1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 876cc5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 876cc7: je 0x876cde */
  if (zf) goto L_876cde;
L_876cc9: /* 876cc9: push 0xcdced8 */
  { uint32_t v = 0xcdced8u; esp -= 4; W32(esp, v); }
/* 876cce: mov ecx, esi */
  ecx = esi;
/* 876cd0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x876cd6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 876cd6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 876cd8: je 0x876cde */
  if (zf) goto L_876cde;
L_876cda: /* 876cda: mov eax, esi */
  eax = esi;
/* 876cdc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 876cdd: ret  */
  esp += 4; SPILL(); return;
L_876cde: /* 876cde: xor eax, eax */
  eax = 0;
/* 876ce0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 876ce1: ret  */
  esp += 4; SPILL(); return;
}

void f_876d00(void) {
  LOAD_REGS();
L_876d00: /* 876d00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 876d01: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 876d05: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 876d07: je 0x876d1e */
  if (zf) goto L_876d1e;
L_876d09: /* 876d09: push 0xcde398 */
  { uint32_t v = 0xcde398u; esp -= 4; W32(esp, v); }
/* 876d0e: mov ecx, esi */
  ecx = esi;
/* 876d10: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x876d16u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 876d16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 876d18: je 0x876d1e */
  if (zf) goto L_876d1e;
L_876d1a: /* 876d1a: mov eax, esi */
  eax = esi;
/* 876d1c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 876d1d: ret  */
  esp += 4; SPILL(); return;
L_876d1e: /* 876d1e: xor eax, eax */
  eax = 0;
/* 876d20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 876d21: ret  */
  esp += 4; SPILL(); return;
}

void f_876d40(void) {
  LOAD_REGS();
L_876d40: /* 876d40: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 876d43: jne 0x876d9d */
  if (!zf) goto L_876d9d;
L_876d45: /* 876d45: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 876d48: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* 876d4c: fst dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0);
/* 876d4f: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 876d52: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 876d58: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 876d5a: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 876d5c: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 876d60: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 876d63: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 876d65: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 876d68: jp 0x876d6f */
  if (pf) goto L_876d6f;
L_876d6a: /* 876d6a: fsubr dword ptr [ecx + 0x10] */
  ST0 = (F32((uint32_t)(ecx + 0x10u))) - ST0;
/* 876d6d: jmp 0x876d72 */
  goto L_876d72;
L_876d6f: /* 876d6f: fadd dword ptr [ecx + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x10u)));
L_876d72: /* 876d72: fstp dword ptr [ecx + 0x10] */
  WF32((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 876d75: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 876d79: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 876d7c: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 876d7f: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 876d82: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 876d88: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 876d8a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 876d8d: jp 0x876d99 */
  if (pf) goto L_876d99;
L_876d8f: /* 876d8f: mov eax, 1 */
  eax = 0x1u;
/* 876d94: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 876d96: ret 4 */
  esp += 8; SPILL(); return;
L_876d99: /* 876d99: xor eax, eax */
  eax = 0;
/* 876d9b: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_876d9d: /* 876d9d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_876dc0(void) {
  LOAD_REGS();
L_876dc0: /* 876dc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 876dc1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 876dc3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 876dc5: mov esi, ecx */
  esi = ecx;
/* 876dc7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x876dcdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 876dcd: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 876dd1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 876dd3: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 876dd5: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 876dd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 876dd9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_876df0(void) {
  LOAD_REGS();
L_876df0: /* 876df0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 876df1: mov ebp, esp */
  ebp = esp;
/* 876df3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 876df5: push 0x9d4bc0 */
  { uint32_t v = 0x9d4bc0u; esp -= 4; W32(esp, v); }
/* 876dfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 876e00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 876e01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 876e08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 876e0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 876e0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 876e0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 876e0e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 876e11: mov esi, ecx */
  esi = ecx;
/* 876e13: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 876e1a: xor edi, edi */
  edi = 0;
/* 876e1c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_876e20: /* 876e20: cmp edi, dword ptr [esi + 0x340] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 876e26: jge 0x876e80 */
  if ((sf == of)) goto L_876e80;
L_876e28: /* 876e28: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 876e2e: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 876e31: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 876e34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 876e36: jne 0x876e4d */
  if (!zf) goto L_876e4d;
L_876e38: /* 876e38: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 876e3e: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 876e40: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 876e42: push 0xae5f88 */
  { uint32_t v = 0xae5f88u; esp -= 4; W32(esp, v); }
/* 876e47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 876e48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 876e4a: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x876e4du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_876e4d: /* 876e4d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 876e4e: jmp 0x876e20 */
  goto L_876e20;
L_876e80: /* 876e80: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 876e83: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 876e84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 876e85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 876e8c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 876e8d: mov esp, ebp */
  esp = ebp;
/* 876e8f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 876e90: ret  */
  esp += 4; SPILL(); return;
}

void f_876e50(void) {
  LOAD_REGS();
L_876e50: /* 876e50: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 876e53: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 876e58: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 876e5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 876e5c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 876e5f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x876e64u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_876e64(); return;
}

void f_876e64(void) {
  LOAD_REGS();
L_876e64: /* 876e64: push 0xa18a08 */
  { uint32_t v = 0xa18a08u; esp -= 4; W32(esp, v); }
/* 876e69: push 0xae5fdc */
  { uint32_t v = 0xae5fdcu; esp -= 4; W32(esp, v); }
/* 876e6e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x876e74u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 876e74: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 876e77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 876e79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 876e7b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x876e80u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 876e80: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 876e83: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 876e84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 876e85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 876e8c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 876e8d: mov esp, ebp */
  esp = ebp;
/* 876e8f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 876e90: ret  */
  esp += 4; SPILL(); return;
}

void f_876ed0(void) {
  LOAD_REGS();
L_876ed0: /* 876ed0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 876ed1: mov ebp, esp */
  ebp = esp;
/* 876ed3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 876ed5: push 0x9d4bd0 */
  { uint32_t v = 0x9d4bd0u; esp -= 4; W32(esp, v); }
/* 876eda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 876ee0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 876ee1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 876ee8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 876eeb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 876eec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 876eed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 876eee: xor esi, esi */
  esi = 0;
/* 876ef0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 876ef3: mov edi, ecx */
  edi = ecx;
/* 876ef5: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 876ef8: call 0x6c10f0 */
  esp -= 4; W32(esp, 0x876efdu); SPILL(); f_6c10f0(); if (g_unwind) return; RELOAD();
/* 876efd: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 876f00: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 876f03: mov dword ptr [edi + 0x368], eax */
  W32((uint32_t)(edi + 0x368u), eax);
/* 876f09: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 876f0f: cmp dword ptr [ecx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 876f11: jne 0x876f19 */
  if (!zf) goto L_876f19;
L_876f13: /* 876f13: mov dword ptr [edi + 0x378], esi */
  W32((uint32_t)(edi + 0x378u), esi);
L_876f19: /* 876f19: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 876f20: lea ecx, [edi + 0x388] */
  ecx = (uint32_t)(edi + 0x388u);
/* 876f26: xor eax, eax */
  eax = 0;
L_876f28: /* 876f28: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 876f2b: jge 0x876f30 */
  if ((sf == of)) goto L_876f30;
L_876f2d: /* 876f2d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 876f2e: jmp 0x876f28 */
  goto L_876f28;
L_876f30: /* 876f30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 876f31: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 876f33: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x876f39u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 876f39: xor eax, eax */
  eax = 0;
L_876f3b: /* 876f3b: cmp eax, dword ptr [edi + 0x340] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 876f41: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 876f44: jge 0x87704e */
  if ((sf == of)) goto L_87704e;
L_876f4a: /* 876f4a: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 876f4d: mov edx, dword ptr [edi + 0x33c] */
  edx = R32((uint32_t)(edi + 0x33cu));
/* 876f53: fdiv dword ptr [edi + 0x368] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0x368u)));
/* 876f59: mov ebx, dword ptr [edx + eax*4] */
  ebx = R32((uint32_t)(edx + eax*4));
/* 876f5c: xor eax, eax */
  eax = 0;
/* 876f5e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 876f61: fstp dword ptr [ebx + 0x7c] */
  WF32((uint32_t)(ebx + 0x7cu), ST0); FPOP();
/* 876f64: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 876f67: fadd dword ptr [ebx + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x38u)));
/* 876f6a: fdiv dword ptr [edi + 0x368] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0x368u)));
/* 876f70: fst dword ptr [ebx + 0x80] */
  WF32((uint32_t)(ebx + 0x80u), ST0);
/* 876f76: fsub dword ptr [ebx + 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x7cu)));
/* 876f79: fstp dword ptr [ebx + 0x84] */
  WF32((uint32_t)(ebx + 0x84u), ST0); FPOP();
/* 876f7f: nop  */
L_876f80: /* 876f80: mov ecx, dword ptr [ebx + 0x40] */
  ecx = R32((uint32_t)(ebx + 0x40u));
/* 876f83: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 876f86: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 876f88: jge 0x87700f */
  if ((sf == of)) goto L_87700f;
L_876f8e: /* 876f8e: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 876f91: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 876f94: fadd dword ptr [esi + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x28u)));
/* 876f97: mov byte ptr [esi + 0x34], 0 */
  W8((uint32_t)(esi + 0x34u), 0x0u);
/* 876f9b: push 0xcde398 */
  { uint32_t v = 0xcde398u; esp -= 4; W32(esp, v); }
/* 876fa0: mov ecx, esi */
  ecx = esi;
/* 876fa2: fdiv dword ptr [edi + 0x368] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0x368u)));
/* 876fa8: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 876fab: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 876fae: fadd dword ptr [esi + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x28u)));
/* 876fb1: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 876fb4: fdiv dword ptr [edi + 0x368] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0x368u)));
/* 876fba: fst dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0);
/* 876fbd: fsub dword ptr [esi + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x44u)));
/* 876fc0: fstp dword ptr [esi + 0x4c] */
  WF32((uint32_t)(esi + 0x4cu), ST0); FPOP();
/* 876fc3: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x876fc9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 876fc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 876fcb: je 0x876fea */
  if (zf) goto L_876fea;
L_876fcd: /* 876fcd: mov dword ptr [esi + 0x68], esi */
  W32((uint32_t)(esi + 0x68u), esi);
/* 876fd0: fld dword ptr [esi + 0x44] */
  { double v = F32((uint32_t)(esi + 0x44u)); FPUSH(v); }
/* 876fd3: fst dword ptr [esi + 0x6c] */
  WF32((uint32_t)(esi + 0x6cu), ST0);
/* 876fd6: fld dword ptr [esi + 0x58] */
  { double v = F32((uint32_t)(esi + 0x58u)); FPUSH(v); }
/* 876fd9: fdiv dword ptr [edi + 0x368] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0x368u)));
/* 876fdf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 876fe1: fst dword ptr [esi + 0x70] */
  WF32((uint32_t)(esi + 0x70u), ST0);
/* 876fe4: fsub dword ptr [esi + 0x6c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x6cu)));
/* 876fe7: fstp dword ptr [esi + 0x74] */
  WF32((uint32_t)(esi + 0x74u), ST0); FPOP();
L_876fea: /* 876fea: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 876fec: lea ecx, [edi + 0x388] */
  ecx = (uint32_t)(edi + 0x388u);
/* 876ff2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 876ff4: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x876ffau); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 876ffa: mov edx, dword ptr [edi + 0x388] */
  edx = R32((uint32_t)(edi + 0x388u));
/* 877000: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 877003: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 877006: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 877007: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 87700a: jmp 0x876f80 */
  goto L_876f80;
L_87700f: /* 87700f: fadd dword ptr [ebx + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x38u)));
/* 877012: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 877015: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 877016: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 877019: jmp 0x876f3b */
  goto L_876f3b;
L_87704e: /* 87704e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 877051: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 877052: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 877053: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87705a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87705b: mov esp, ebp */
  esp = ebp;
/* 87705d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87705e: ret  */
  esp += 4; SPILL(); return;
}

void f_87701e(void) {
  LOAD_REGS();
L_87701e: /* 87701e: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 877021: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 877026: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 877029: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87702a: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 87702d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x877032u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_877032(); return;
}

void f_877032(void) {
  LOAD_REGS();
L_877032: /* 877032: push 0xa18a50 */
  { uint32_t v = 0xa18a50u; esp -= 4; W32(esp, v); }
/* 877037: push 0xae624c */
  { uint32_t v = 0xae624cu; esp -= 4; W32(esp, v); }
/* 87703c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x877042u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 877042: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 877045: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 877047: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 877049: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87704eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 87704e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 877051: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 877052: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 877053: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87705a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87705b: mov esp, ebp */
  esp = ebp;
/* 87705d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87705e: ret  */
  esp += 4; SPILL(); return;
}

void f_8770d0(void) {
  LOAD_REGS();
L_8770d0: /* 8770d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8770d1: mov ebp, esp */
  ebp = esp;
/* 8770d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8770d5: push 0x9d4bf3 */
  { uint32_t v = 0x9d4bf3u; esp -= 4; W32(esp, v); }
/* 8770da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8770e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8770e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8770e8: sub esp, 0x8c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8770ee: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 8770f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8770f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8770f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8770f6: mov ebx, ecx */
  ebx = ecx;
/* 8770f8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8770fa: xor edi, edi */
  edi = 0;
/* 8770fc: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8770fe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 877101: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 877104: je 0x8771d5 */
  if (zf) goto L_8771d5;
L_87710a: /* 87710a: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 87710d: mov dword ptr [ebp - 0x98], 2 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x2u);
/* 877117: mov dword ptr [ebp - 0x94], edi */
  W32((uint32_t)(ebp + 0xffffff6cu), edi);
/* 87711d: mov dword ptr [ebp - 0x90], edi */
  W32((uint32_t)(ebp + 0xffffff70u), edi);
/* 877123: mov dword ptr [ebp - 0x8c], edi */
  W32((uint32_t)(ebp + 0xffffff74u), edi);
/* 877129: mov dword ptr [ebp - 0x88], edi */
  W32((uint32_t)(ebp + 0xffffff78u), edi);
/* 87712f: mov dword ptr [ebp - 0x84], edi */
  W32((uint32_t)(ebp + 0xffffff7cu), edi);
/* 877135: mov dword ptr [ebp - 0x80], edi */
  W32((uint32_t)(ebp + 0xffffff80u), edi);
/* 877138: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x87713eu); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
L_87713e: /* 87713e: cmp edi, dword ptr [ebx + 0x38c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x38cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 877144: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 877147: jge 0x877194 */
  if ((sf == of)) goto L_877194;
L_877149: /* 877149: mov ecx, dword ptr [ebx + 0x388] */
  ecx = R32((uint32_t)(ebx + 0x388u));
/* 87714f: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 877152: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 877154: je 0x877191 */
  if (zf) goto L_877191;
L_877156: /* 877156: push 0xcde398 */
  { uint32_t v = 0xcde398u; esp -= 4; W32(esp, v); }
/* 87715b: mov ecx, esi */
  ecx = esi;
/* 87715d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x877163u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 877163: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 877165: je 0x877191 */
  if (zf) goto L_877191;
L_877167: /* 877167: fld dword ptr [esi + 0x44] */
  { double v = F32((uint32_t)(esi + 0x44u)); FPUSH(v); }
/* 87716a: fcomp dword ptr [ebp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x10u)));
  FPOP();
/* 87716d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87716f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 877172: jp 0x877191 */
  if (pf) goto L_877191;
L_877174: /* 877174: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 877177: add esi, 0x50 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 87717a: mov edi, esp */
  edi = esp;
/* 87717c: mov ecx, 0xd */
  ecx = 0xdu;
/* 877181: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 877183: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 877189: call 0x6c7c66 */
  esp -= 4; W32(esp, 0x87718eu); SPILL(); f_6c7c66(); if (g_unwind) return; RELOAD();
/* 87718e: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
L_877191: /* 877191: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 877192: jmp 0x87713e */
  goto L_87713e;
L_877194: /* 877194: mov edx, dword ptr [ebp - 0x80] */
  edx = R32((uint32_t)(ebp + 0xffffff80u));
/* 877197: cmp edx, dword ptr [ebx + 0x3e0] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x3e0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87719d: je 0x8771d5 */
  if (zf) goto L_8771d5;
L_87719f: /* 87719f: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8771a2: mov edi, esp */
  edi = esp;
/* 8771a4: mov ecx, 0xd */
  ecx = 0xdu;
/* 8771a9: lea esi, [ebp - 0x98] */
  esi = (uint32_t)(ebp + 0xffffff68u);
/* 8771af: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8771b1: lea ecx, [ebx + 0x3c8] */
  ecx = (uint32_t)(ebx + 0x3c8u);
/* 8771b7: call 0x6c7c66 */
  esp -= 4; W32(esp, 0x8771bcu); SPILL(); f_6c7c66(); if (g_unwind) return; RELOAD();
/* 8771bc: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8771bf: mov edi, esp */
  edi = esp;
/* 8771c1: mov ecx, 0xd */
  ecx = 0xdu;
/* 8771c6: lea esi, [ebp - 0x98] */
  esi = (uint32_t)(ebp + 0xffffff68u);
/* 8771cc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8771ce: mov ecx, ebx */
  ecx = ebx;
/* 8771d0: call 0x6c452a */
  esp -= 4; W32(esp, 0x8771d5u); SPILL(); f_6c452a(); if (g_unwind) return; RELOAD();
L_8771d5: /* 8771d5: fild dword ptr [ebp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 8771d8: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8771db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8771dc: mov ecx, ebx */
  ecx = ebx;
/* 8771de: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8771e1: fild dword ptr [ebp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 8771e4: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8771e7: fild dword ptr [ebp + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 8771ea: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8771ed: call 0x6c3dc3 */
  esp -= 4; W32(esp, 0x8771f2u); SPILL(); f_6c3dc3(); if (g_unwind) return; RELOAD();
/* 8771f2: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8771f5: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8771f8: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 8771fb: mov ecx, dword ptr [ebx + 0x394] */
  ecx = R32((uint32_t)(ebx + 0x394u));
/* 877201: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 877204: jne 0x877417 */
  if (!zf) goto L_877417;
L_87720a: /* 87720a: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 87720d: fmul dword ptr [0xa18ae0] */
  ST0 = ST0 * (F32((uint32_t)(0xa18ae0u)));
/* 877213: fst dword ptr [ebp + 0x28] */
  WF32((uint32_t)(ebp + 0x28u), ST0);
/* 877216: call 0x99c958 */
  esp -= 4; W32(esp, 0x87721bu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 87721b: push 0x6cb3bb */
  { uint32_t v = 0x6cb3bbu; esp -= 4; W32(esp, v); }
/* 877220: push 0x6c532b */
  { uint32_t v = 0x6c532bu; esp -= 4; W32(esp, v); }
/* 877225: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 877227: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 877229: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 87722c: mov esi, eax */
  esi = eax;
/* 87722e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87722f: mov dword ptr [ebp + 0x10], esi */
  W32((uint32_t)(ebp + 0x10u), esi);
/* 877232: call 0x99cafe */
  esp -= 4; W32(esp, 0x877237u); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 877237: mov edi, dword ptr [ebp + 0x2c] */
  edi = R32((uint32_t)(ebp + 0x2cu));
/* 87723a: mov ecx, esi */
  ecx = esi;
/* 87723c: cmp ecx, 0x63 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87723f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 877243: mov eax, edi */
  eax = edi;
/* 877245: jl 0x877259 */
  if ((sf != of)) goto L_877259;
L_877247: /* 877247: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 877248: lea esi, [ecx - 0x63] */
  esi = (uint32_t)(ecx + 0xffffff9du);
/* 87724b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87724c: mov ecx, 0xb19098 */
  ecx = 0xb19098u;
/* 877251: call 0x6ca5d8 */
  esp -= 4; W32(esp, 0x877256u); SPILL(); f_6ca5d8(); if (g_unwind) return; RELOAD();
/* 877256: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
L_877259: /* 877259: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 87725f: cmp eax, dword ptr [edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 877261: jne 0x87726a */
  if (!zf) goto L_87726a;
L_877263: /* 877263: mov eax, edi */
  eax = edi;
/* 877265: mov esi, 0x63 */
  esi = 0x63u;
L_87726a: /* 87726a: mov dword ptr [ebp - 0x5c], esi */
  W32((uint32_t)(ebp + 0xffffffa4u), esi);
/* 87726d: lea esi, [ecx + 1] */
  esi = (uint32_t)(ecx + 0x1u);
/* 877270: cmp esi, 0x63 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 877273: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 877276: mov eax, edi */
  eax = edi;
/* 877278: jl 0x877289 */
  if ((sf != of)) goto L_877289;
L_87727a: /* 87727a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87727b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87727c: mov ecx, 0xb19098 */
  ecx = 0xb19098u;
/* 877281: sub esi, 0x63 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 877284: call 0x6ca5d8 */
  esp -= 4; W32(esp, 0x877289u); SPILL(); f_6ca5d8(); if (g_unwind) return; RELOAD();
L_877289: /* 877289: mov ecx, dword ptr [ebx + 0x33c] */
  ecx = R32((uint32_t)(ebx + 0x33cu));
/* 87728f: cmp eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 877291: jne 0x87729a */
  if (!zf) goto L_87729a;
L_877293: /* 877293: mov eax, edi */
  eax = edi;
/* 877295: mov esi, 0x63 */
  esi = 0x63u;
L_87729a: /* 87729a: mov ecx, esi */
  ecx = esi;
/* 87729c: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 87729f: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8772a2: cmp esi, 0x63 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8772a5: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 8772a8: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 8772ab: mov eax, edi */
  eax = edi;
/* 8772ad: jl 0x8772c1 */
  if ((sf != of)) goto L_8772c1;
L_8772af: /* 8772af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8772b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8772b1: mov ecx, 0xb19098 */
  ecx = 0xb19098u;
/* 8772b6: sub esi, 0x63 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8772b9: call 0x6ca5d8 */
  esp -= 4; W32(esp, 0x8772beu); SPILL(); f_6ca5d8(); if (g_unwind) return; RELOAD();
/* 8772be: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
L_8772c1: /* 8772c1: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 8772c7: cmp eax, dword ptr [edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8772c9: jne 0x8772d2 */
  if (!zf) goto L_8772d2;
L_8772cb: /* 8772cb: mov eax, edi */
  eax = edi;
/* 8772cd: mov esi, 0x63 */
  esi = 0x63u;
L_8772d2: /* 8772d2: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8772d5: mov edi, dword ptr [ebp - 0x58] */
  edi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8772d8: mov dword ptr [ebp - 0x4c], esi */
  W32((uint32_t)(ebp + 0xffffffb4u), esi);
/* 8772db: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 8772de: mov edi, dword ptr [edi + 0x70] */
  edi = R32((uint32_t)(edi + 0x70u));
/* 8772e1: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 8772e4: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 8772e7: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 8772e9: mov eax, dword ptr [eax + 0x70] */
  eax = R32((uint32_t)(eax + 0x70u));
/* 8772ec: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 8772ef: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 8772f2: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8772f5: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8772f8: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8772fb: mov edx, dword ptr [edx + 0x70] */
  edx = R32((uint32_t)(edx + 0x70u));
/* 8772fe: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 877301: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 877304: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 877306: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
/* 877309: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 87730c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 87730f: mov dword ptr [ebp + 0x1c], ecx */
  W32((uint32_t)(ebp + 0x1cu), ecx);
/* 877312: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 877315: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 877318: mov dword ptr [ebp + 0x18], edx */
  W32((uint32_t)(ebp + 0x18u), edx);
/* 87731b: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 87731e: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 877321: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 877324: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 877326: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 877329: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 87732c: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 87732f: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 877332: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 877335: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 877338: fsub dword ptr [ebp - 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 87733b: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 87733e: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 877341: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 877344: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 877347: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 877348: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 87734b: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 87734e: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 877351: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 877354: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 877357: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* 87735a: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 87735d: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 877360: fsubr dword ptr [ebp + 0x28] */
  ST0 = (F32((uint32_t)(ebp + 0x28u))) - ST0;
/* 877363: fst dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0);
/* 877366: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 877369: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 87736b: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 87736e: fstp dword ptr [ebp + 0x28] */
  WF32((uint32_t)(ebp + 0x28u), ST0); FPOP();
/* 877371: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 877374: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 877377: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 87737a: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 87737d: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 877380: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 877386: fsub dword ptr [ebp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x2cu)));
/* 877389: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 87738c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 87738e: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 877391: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 877394: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 877397: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 87739a: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 87739d: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8773a0: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8773a3: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 8773a6: fadd dword ptr [ebp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x28u)));
/* 8773a9: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 8773ac: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8773af: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8773b2: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8773b5: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 8773b8: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 8773bb: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 8773be: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 8773c1: call dword ptr [0xcfaa94] */
  esp -= 4; W32(esp, 0x8773c7u); SPILL(); f_4e2dfb(); if (g_unwind) return; /* Core!?Rotation@FVector@@QAE?AVFRotator@@XZ */ RELOAD();
/* 8773c7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8773c9: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8773cc: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8773cf: mov dword ptr [ebp + 0x20], ecx */
  W32((uint32_t)(ebp + 0x20u), ecx);
/* 8773d2: fild dword ptr [ebp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 8773d5: mov dword ptr [ebp + 0x24], edx */
  W32((uint32_t)(ebp + 0x24u), edx);
/* 8773d8: mov dword ptr [ebp + 0x28], eax */
  W32((uint32_t)(ebp + 0x28u), eax);
/* 8773db: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 8773de: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8773e1: fild dword ptr [ebp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 8773e4: push 0x6cb3bb */
  { uint32_t v = 0x6cb3bbu; esp -= 4; W32(esp, v); }
/* 8773e9: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 8773eb: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8773ee: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 8773f1: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8773f4: fild dword ptr [ebp + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 8773f7: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8773f9: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8773fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8773fd: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 877400: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 877403: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 877406: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 877409: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 87740d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x877412u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 877412: jmp 0x877557 */
  goto L_877557;
L_877417: /* 877417: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87741a: jne 0x877491 */
  if (!zf) goto L_877491;
L_87741c: /* 87741c: mov eax, dword ptr [ebx + 0x398] */
  eax = R32((uint32_t)(ebx + 0x398u));
/* 877422: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 877424: je 0x877491 */
  if (zf) goto L_877491;
L_877426: /* 877426: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 87742c: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 87742f: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 877432: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 877433: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 877439: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 87743c: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 87743f: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 877445: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* 877448: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 87744b: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 87744e: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 877451: call dword ptr [0xcfaa94] */
  esp -= 4; W32(esp, 0x877457u); SPILL(); f_4e2dfb(); if (g_unwind) return; /* Core!?Rotation@FVector@@QAE?AVFRotator@@XZ */ RELOAD();
/* 877457: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 877459: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 87745c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 87745f: mov dword ptr [ebp + 0x20], ecx */
  W32((uint32_t)(ebp + 0x20u), ecx);
/* 877462: fild dword ptr [ebp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 877465: mov dword ptr [ebp + 0x24], edx */
  W32((uint32_t)(ebp + 0x24u), edx);
/* 877468: mov dword ptr [ebp + 0x28], eax */
  W32((uint32_t)(ebp + 0x28u), eax);
/* 87746b: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 87746e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 877471: fild dword ptr [ebp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 877474: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 877477: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 87747a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 87747d: fild dword ptr [ebp + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 877480: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 877483: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 877486: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 877489: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 87748c: jmp 0x877557 */
  goto L_877557;
L_877491: /* 877491: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 877494: jne 0x877557 */
  if (!zf) goto L_877557;
L_87749a: /* 87749a: mov edi, dword ptr [ebp + 0x2c] */
  edi = R32((uint32_t)(ebp + 0x2cu));
/* 87749d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87749e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87749f: mov ecx, 0xb19098 */
  ecx = 0xb19098u;
/* 8774a4: call 0x6c6541 */
  esp -= 4; W32(esp, 0x8774a9u); SPILL(); f_6c6541(); if (g_unwind) return; RELOAD();
/* 8774a9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8774ab: mov esi, eax */
  esi = eax;
/* 8774ad: je 0x877557 */
  if (zf) goto L_877557;
L_8774b3: /* 8774b3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8774b5: je 0x877557 */
  if (zf) goto L_877557;
L_8774bb: /* 8774bb: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8774be: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8774c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8774c5: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 8774c8: lea edx, [ebp + 0x14] */
  edx = (uint32_t)(ebp + 0x14u);
/* 8774cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8774cc: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8774d2: call dword ptr [0xcfaad4] */
  esp -= 4; W32(esp, 0x8774d8u); SPILL(); f_4e4174(); if (g_unwind) return; /* Core!??GFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 8774d8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8774da: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8774dd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8774e0: mov dword ptr [ebp + 0x20], ecx */
  W32((uint32_t)(ebp + 0x20u), ecx);
/* 8774e3: fild dword ptr [ebp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 8774e6: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8774e9: mov dword ptr [ebp + 0x24], edx */
  W32((uint32_t)(ebp + 0x24u), edx);
/* 8774ec: fild dword ptr [ebp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 8774ef: mov dword ptr [ebp + 0x28], eax */
  W32((uint32_t)(ebp + 0x28u), eax);
/* 8774f2: fild dword ptr [ebp + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 8774f5: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8774fb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8774fd: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 877500: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 877503: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 877506: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
/* 877509: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 87750c: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
/* 87750f: mov dword ptr [ebp + 0x1c], ecx */
  W32((uint32_t)(ebp + 0x1cu), ecx);
/* 877512: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 877515: fstp dword ptr [ebp + 0x28] */
  WF32((uint32_t)(ebp + 0x28u), ST0); FPOP();
/* 877518: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 87751b: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 87751e: fild dword ptr [ebp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 877521: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 877524: fild dword ptr [ebp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 877527: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 87752a: fild dword ptr [ebp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 87752d: fadd dword ptr [ebp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x2cu)));
/* 877530: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 877533: fadd dword ptr [ebp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x28u)));
/* 877536: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 877539: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 87753c: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* 87753f: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 877542: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 877545: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 877548: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 87754b: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 87754e: fstp dword ptr [ebp + 0x28] */
  WF32((uint32_t)(ebp + 0x28u), ST0); FPOP();
/* 877551: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 877554: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
L_877557: /* 877557: fld dword ptr [ebx + 0x400] */
  { double v = F32((uint32_t)(ebx + 0x400u)); FPUSH(v); }
/* 87755d: lea ecx, [ebx + 0x3bc] */
  ecx = (uint32_t)(ebx + 0x3bcu);
/* 877563: mov edx, ecx */
  edx = ecx;
/* 877565: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 877567: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
/* 87756a: fild dword ptr [ebp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 87756d: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 877570: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 877573: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* 877576: fild dword ptr [ebp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 877579: mov dword ptr [ebp + 0x28], edx */
  W32((uint32_t)(ebp + 0x28u), edx);
/* 87757c: fild dword ptr [ebp + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 87757f: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 877582: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 877584: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 877587: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 877589: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 87758c: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 87758e: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 877591: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 877594: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 877596: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* 877599: mov eax, dword ptr [ebx + 0x3a0] */
  eax = R32((uint32_t)(ebx + 0x3a0u));
/* 87759f: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 8775a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8775a4: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 8775a7: je 0x8775ca */
  if (zf) goto L_8775ca;
L_8775a9: /* 8775a9: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8775ab: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8775b1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8775b3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8775b5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8775b8: jp 0x8775c2 */
  if (pf) goto L_8775c2;
L_8775ba: /* 8775ba: fadd dword ptr [0xa14724] */
  ST0 = ST0 + (F32((uint32_t)(0xa14724u)));
/* 8775c0: jmp 0x8775c8 */
  goto L_8775c8;
L_8775c2: /* 8775c2: fsub dword ptr [0xa14724] */
  ST0 = ST0 - (F32((uint32_t)(0xa14724u)));
L_8775c8: /* 8775c8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
L_8775ca: /* 8775ca: mov eax, dword ptr [ebx + 0x3a4] */
  eax = R32((uint32_t)(ebx + 0x3a4u));
/* 8775d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8775d2: je 0x8775f8 */
  if (zf) goto L_8775f8;
L_8775d4: /* 8775d4: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8775d7: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8775dd: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8775e0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8775e2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8775e5: jp 0x8775ef */
  if (pf) goto L_8775ef;
L_8775e7: /* 8775e7: fadd dword ptr [0xa14724] */
  ST0 = ST0 + (F32((uint32_t)(0xa14724u)));
/* 8775ed: jmp 0x8775f5 */
  goto L_8775f5;
L_8775ef: /* 8775ef: fsub dword ptr [0xa14724] */
  ST0 = ST0 - (F32((uint32_t)(0xa14724u)));
L_8775f5: /* 8775f5: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
L_8775f8: /* 8775f8: mov eax, dword ptr [ebx + 0x3a8] */
  eax = R32((uint32_t)(ebx + 0x3a8u));
/* 8775fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 877600: je 0x877625 */
  if (zf) goto L_877625;
L_877602: /* 877602: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 877604: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 877607: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 87760d: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 877610: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 877612: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 877615: jp 0x87761f */
  if (pf) goto L_87761f;
L_877617: /* 877617: fadd dword ptr [0xa14724] */
  ST0 = ST0 + (F32((uint32_t)(0xa14724u)));
/* 87761d: jmp 0x877625 */
  goto L_877625;
L_87761f: /* 87761f: fsub dword ptr [0xa14724] */
  ST0 = ST0 - (F32((uint32_t)(0xa14724u)));
L_877625: /* 877625: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 877627: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 877629: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 87762c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 87762f: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 877632: mov dword ptr [ebp + 0x20], edx */
  W32((uint32_t)(ebp + 0x20u), edx);
/* 877635: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 877638: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* 87763b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 87763d: mov dword ptr [ebp + 0x28], ecx */
  W32((uint32_t)(ebp + 0x28u), ecx);
/* 877640: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 877643: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 877645: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 877648: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 87764a: fild dword ptr [ebp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 87764d: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 877650: fild dword ptr [ebp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 877653: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 877656: fild dword ptr [ebp + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 877659: fadd dword ptr [ebp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x10u)));
/* 87765c: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 87765f: fadd dword ptr [ebp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x2cu)));
/* 877662: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 877665: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 877668: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 87766b: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 87766e: mov dword ptr [ebp + 0x20], edx */
  W32((uint32_t)(ebp + 0x20u), edx);
/* 877671: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 877674: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 877677: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* 87767a: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 87767d: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 877680: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 877683: mov dword ptr [ebp + 0x28], ecx */
  W32((uint32_t)(ebp + 0x28u), ecx);
/* 877686: fadd dword ptr [ebx + 0x414] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x414u)));
/* 87768c: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 87768f: fadd dword ptr [ebx + 0x418] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x418u)));
/* 877695: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 877698: fadd dword ptr [ebx + 0x41c] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x41cu)));
/* 87769e: fstp dword ptr [ebp + 0x28] */
  WF32((uint32_t)(ebp + 0x28u), ST0); FPOP();
/* 8776a1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8776a3: fadd dword ptr [ebx + 0x42c] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x42cu)));
/* 8776a9: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* 8776ac: fadd dword ptr [ebx + 0x430] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x430u)));
/* 8776b2: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 8776b5: fadd dword ptr [ebx + 0x434] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x434u)));
/* 8776bb: call 0x99c958 */
  esp -= 4; W32(esp, 0x8776c0u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8776c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8776c1: call 0x99c958 */
  esp -= 4; W32(esp, 0x8776c6u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8776c6: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 8776c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8776ca: call 0x99c958 */
  esp -= 4; W32(esp, 0x8776cfu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8776cf: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8776d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8776d3: mov ecx, esi */
  ecx = esi;
/* 8776d5: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x8776dbu); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 8776db: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8776de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8776df: mov eax, esi */
  eax = esi;
/* 8776e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8776e2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8776e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8776ea: mov esp, ebp */
  esp = ebp;
/* 8776ec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8776ed: ret 0x2c */
  esp += 48; SPILL(); return;
}
