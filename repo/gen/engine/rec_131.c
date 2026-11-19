#include "recomp.h"
#include "rec_mod.h"

void f_9463b0(void) {
  LOAD_REGS();
L_9463b0: /* 9463b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9463b4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9463b6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9463b8: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9463bd: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9463be: je 0x9463d5 */
  if (zf) goto L_9463d5;
L_9463c0: /* 9463c0: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 9463c3: je 0x9463d5 */
  if (zf) goto L_9463d5;
L_9463c5: /* 9463c5: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 9463c8: je 0x9463d1 */
  if (zf) goto L_9463d1;
L_9463ca: /* 9463ca: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9463d0: ret  */
  esp += 4; SPILL(); return;
L_9463d1: /* 9463d1: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 9463d4: ret  */
  esp += 4; SPILL(); return;
L_9463d5: /* 9463d5: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 9463d8: ret  */
  esp += 4; SPILL(); return;
}

void f_9463e0(void) {
  LOAD_REGS();
L_9463e0: /* 9463e0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9463e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9463e4: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 9463e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9463e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9463ea: call 0x92acc0 */
  esp -= 4; W32(esp, 0x9463efu); SPILL(); f_92acc0(); if (g_unwind) return; RELOAD();
/* 9463ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9463f0: mov edi, eax */
  edi = eax;
/* 9463f2: call 0x92ad70 */
  esp -= 4; W32(esp, 0x9463f7u); SPILL(); f_92ad70(); if (g_unwind) return; RELOAD();
/* 9463f7: mov ecx, eax */
  ecx = eax;
/* 9463f9: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 9463fd: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 946400: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 946403: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 946406: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 946409: mov edx, 1 */
  edx = 0x1u;
/* 94640e: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 946411: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 946415: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 946417: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 946419: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94641b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94641d: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 946421: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 946424: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 946427: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 94642a: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 94642d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94642f: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 946432: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 946434: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 946436: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 946439: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 94643c: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 94643f: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 946442: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 946444: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 946446: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 946449: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94644b: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94644f: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 946453: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 946459: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94645b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94645e: jnp 0x946464 */
  if (!pf) goto L_946464;
L_946460: /* 946460: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
L_946464: /* 946464: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 946468: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 94646c: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* 94646f: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 946473: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 946479: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94647b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94647e: jnp 0x946484 */
  if (!pf) goto L_946484;
L_946480: /* 946480: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
L_946484: /* 946484: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 946488: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 94648c: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 94648f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 946493: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 946499: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94649b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94649e: jnp 0x9464a4 */
  if (!pf) goto L_9464a4;
L_9464a0: /* 9464a0: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
L_9464a4: /* 9464a4: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9464a8: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9464ac: fmul dword ptr [edi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x18u)));
/* 9464af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9464b0: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9464b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9464b5: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9464b7: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9464b9: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 9464bc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9464be: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9464c0: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 9464c3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9464c5: fadd dword ptr [ecx + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x30u)));
/* 9464c8: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9464ca: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9464cc: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 9464cf: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9464d3: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 9464d6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9464d8: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9464da: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 9464dd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9464df: fadd dword ptr [ecx + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x34u)));
/* 9464e2: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 9464e5: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 9464e8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9464ea: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 9464ed: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9464ef: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9464f3: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 9464f6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9464f8: fadd dword ptr [ecx + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x38u)));
/* 9464fb: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 9464fe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 946501: ret  */
  esp += 4; SPILL(); return;
}

void f_946510(void) {
  LOAD_REGS();
L_946510: /* 946510: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 946513: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 946517: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 94651a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94651b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94651c: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 946520: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 946522: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 946525: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 946526: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 946528: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 946529: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 94652d: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 946531: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 946535: jl 0x94653b */
  if ((sf != of)) goto L_94653b;
L_946537: /* 946537: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 946539: jl 0x94653d */
  if ((sf != of)) goto L_94653d;
L_94653b: /* 94653b: xor ebp, ebp */
  ebp = 0;
L_94653d: /* 94653d: mov eax, ebp */
  eax = ebp;
/* 94653f: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 946542: fld dword ptr [eax + esi + 8] */
  { double v = F32((uint32_t)(eax + esi + 0x8u)); FPUSH(v); }
/* 946546: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 946548: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 94654c: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 94654f: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 946552: cmp edx, -2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 946555: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 946558: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 94655b: mov dword ptr [esp + 0x2c], 0xfffffffe */
  W32((uint32_t)(esp + 0x2cu), 0xfffffffeu);
/* 946563: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 946565: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 946567: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 946569: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94656b: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 94656f: jg 0x946587 */
  if ((!zf && sf == of)) goto L_946587;
L_946571: /* 946571: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 946575: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 946579: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94657a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94657b: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 94657d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94657e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94657f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 946582: ret  */
  esp += 4; SPILL(); return;
L_946583: /* 946583: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_946587: /* 946587: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 946589: je 0x94662c */
  if (zf) goto L_94662c;
L_94658f: /* 94658f: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 946593: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 946597: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946599: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94659c: je 0x94663e */
  if (zf) goto L_94663e;
L_9465a2: /* 9465a2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9465a3: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 9465a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9465a8: mov edi, ebp */
  edi = ebp;
/* 9465aa: call 0x94e630 */
  esp -= 4; W32(esp, 0x9465afu); SPILL(); f_94e630(); if (g_unwind) return; RELOAD();
/* 9465af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9465b2: xor ebx, ebx */
  ebx = 0;
/* 9465b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9465b6: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9465ba: jle 0x946617 */
  if ((zf || sf != of)) goto L_946617;
L_9465bc: /* 9465bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9465c0: /* 9465c0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9465c4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9465c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9465c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9465c7: call 0x94e6a0 */
  esp -= 4; W32(esp, 0x9465ccu); SPILL(); f_94e6a0(); if (g_unwind) return; RELOAD();
/* 9465cc: mov ecx, eax */
  ecx = eax;
/* 9465ce: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 9465d2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9465d5: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9465d7: je 0x94660e */
  if (zf) goto L_94660e;
L_9465d9: /* 9465d9: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9465dd: mov eax, ecx */
  eax = ecx;
/* 9465df: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9465e2: fld dword ptr [eax + edx + 8] */
  { double v = F32((uint32_t)(eax + edx + 0x8u)); FPUSH(v); }
/* 9465e6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9465e8: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 9465eb: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9465ee: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 9465f1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9465f3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 9465f5: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9465f7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9465f9: fcom dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
/* 9465fd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9465ff: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 946602: jne 0x94660c */
  if (!zf) goto L_94660c;
L_946604: /* 946604: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 946608: mov ebp, ecx */
  ebp = ecx;
/* 94660a: jmp 0x94660e */
  goto L_94660e;
L_94660c: /* 94660c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_94660e: /* 94660e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 946612: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 946613: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 946615: jl 0x9465c0 */
  if ((sf != of)) goto L_9465c0;
L_946617: /* 946617: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 94661b: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 94661f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 946620: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 946622: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 946626: jl 0x946583 */
  if ((sf != of)) goto L_946583;
L_94662c: /* 94662c: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 946630: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 946634: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 946635: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 946636: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 946638: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 946639: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94663a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94663d: ret  */
  esp += 4; SPILL(); return;
L_94663e: /* 94663e: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 946642: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 946646: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 946647: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 946648: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 94664a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94664b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94664c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94664f: ret  */
  esp += 4; SPILL(); return;
}

void f_946650(void) {
  LOAD_REGS();
L_946650: /* 946650: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 946653: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 946654: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 946658: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 946659: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94665a: call 0x92acc0 */
  esp -= 4; W32(esp, 0x94665fu); SPILL(); f_92acc0(); if (g_unwind) return; RELOAD();
/* 94665f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 946660: mov edi, eax */
  edi = eax;
/* 946662: call 0x92ad70 */
  esp -= 4; W32(esp, 0x946667u); SPILL(); f_92ad70(); if (g_unwind) return; RELOAD();
/* 946667: mov esi, eax */
  esi = eax;
/* 946669: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 94666d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 946670: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 946673: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 946677: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 94667a: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 94667d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94667f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 946681: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 946683: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 946685: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 946689: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 94668c: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 94668f: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 946692: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 946695: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 946697: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 94669a: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94669c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94669e: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 9466a2: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 9466a5: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9466a8: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 9466ab: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9466ae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9466b0: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9466b2: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 9466b6: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 9466b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9466ba: push 0x7f7fffff */
  { uint32_t v = 0x7f7fffffu; esp -= 4; W32(esp, v); }
/* 9466bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9466c1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9466c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9466c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9466c5: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 9466c9: call 0x946510 */
  esp -= 4; W32(esp, 0x9466ceu); SPILL(); f_946510(); if (g_unwind) return; RELOAD();
/* 9466ce: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 9466d1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 9466d3: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9466d7: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9466da: fmul dword ptr [eax + ecx] */
  ST0 = ST0 * (F32((uint32_t)(eax + ecx)));
/* 9466dd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9466e0: fld dword ptr [eax + ecx + 8] */
  { double v = F32((uint32_t)(eax + ecx + 0x8u)); FPUSH(v); }
/* 9466e4: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9466e6: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 9466e9: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9466ed: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9466ef: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9466f2: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 9466f5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9466f7: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 9466fa: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 9466fc: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 9466ff: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 946702: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 946705: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 946708: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94670a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 94670d: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94670f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 946711: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 946714: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 946717: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 94671a: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 94671d: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 94671f: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 946722: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 946724: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 946727: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 94672a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94672c: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 94672f: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 946732: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 946733: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 946734: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 946737: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_946740(void) {
  LOAD_REGS();
L_946740: /* 946740: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 946741: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 946745: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 946747: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 946749: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 94674f: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
/* 946752: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 946755: ja 0x9467e5 */
  if ((!cf && !zf)) goto L_9467e5;
L_94675b: /* 94675b: jmp dword ptr [eax*4 + 0x9467f8] */
  switch (R32((uint32_t)(eax*4 + 0x9467f8u))) {
    case 0x946762u: goto L_946762;
    case 0x94677fu: goto L_94677f;
    case 0x9467bcu: goto L_9467bc;
    case 0x9467d1u: goto L_9467d1;
    case 0x9467e5u: goto L_9467e5;
    default: guest_badjump(0x94675b, R32((uint32_t)(eax*4 + 0x9467f8u))); return;
  }
L_946762: /* 946762: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 946765: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 946768: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 94676c: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94676f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 946771: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 946774: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 946777: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 94677a: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 94677d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94677e: ret  */
  esp += 4; SPILL(); return;
L_94677f: /* 94677f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 946780: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 946784: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 946785: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 946789: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94678a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94678b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94678c: call 0x92ad00 */
  esp -= 4; W32(esp, 0x946791u); SPILL(); f_92ad00(); if (g_unwind) return; RELOAD();
/* 946791: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 946792: call 0x9463b0 */
  esp -= 4; W32(esp, 0x946797u); SPILL(); f_9463b0(); if (g_unwind) return; RELOAD();
/* 946797: fchs  */
  ST0 = -ST0;
/* 946799: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94679b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94679e: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 9467a0: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 9467a2: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 9467a4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9467a6: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 9467a9: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 9467ac: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 9467af: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 9467b2: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 9467b5: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 9467b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9467b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9467ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9467bb: ret  */
  esp += 4; SPILL(); return;
L_9467bc: /* 9467bc: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9467c0: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 9467c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9467c5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9467c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9467c7: call 0x9463e0 */
  esp -= 4; W32(esp, 0x9467ccu); SPILL(); f_9463e0(); if (g_unwind) return; RELOAD();
/* 9467cc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9467cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9467d0: ret  */
  esp += 4; SPILL(); return;
L_9467d1: /* 9467d1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9467d5: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 9467d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9467da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9467db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9467dc: call 0x946650 */
  esp -= 4; W32(esp, 0x9467e1u); SPILL(); f_946650(); if (g_unwind) return; RELOAD();
/* 9467e1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9467e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9467e4: ret  */
  esp += 4; SPILL(); return;
L_9467e5: /* 9467e5: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9467e9: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 9467ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9467ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9467ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9467f0: call 0x92ad00 */
  esp -= 4; W32(esp, 0x9467f5u); SPILL(); f_92ad00(); if (g_unwind) return; RELOAD();
/* 9467f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9467f6: ret  */
  esp += 4; SPILL(); return;
}

void f_946820(void) {
  LOAD_REGS();
L_946820: /* 946820: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 946821: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 946822: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 946823: mov edi, dword ptr [0xcfb08c] */
  edi = R32((uint32_t)(0xcfb08cu));
/* 946829: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x94682bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 94682b: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 94682f: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 946833: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 946837: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 946839: fmul dword ptr [0xa19c10] */
  ST0 = ST0 * (F32((uint32_t)(0xa19c10u)));
/* 94683f: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 946845: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 946847: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x946849u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 946849: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 94684d: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 946851: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 946853: fmul dword ptr [0xa19c10] */
  ST0 = ST0 * (F32((uint32_t)(0xa19c10u)));
/* 946859: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 94685f: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 946862: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x946864u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 946864: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 946868: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94686c: xor ecx, ecx */
  ecx = 0;
/* 94686e: xor eax, eax */
  eax = 0;
/* 946870: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 946872: fmul dword ptr [0xa19c10] */
  ST0 = ST0 * (F32((uint32_t)(0xa19c10u)));
/* 946878: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 94687e: fst dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0);
/* 946881: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_946887: /* 946887: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 94688a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94688b: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94688e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 946890: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 946892: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 946894: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 946896: jl 0x946887 */
  if ((sf != of)) goto L_946887;
L_946898: /* 946898: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 94689e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9468a0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9468a3: jne 0x9468c8 */
  if (!zf) goto L_9468c8;
L_9468a5: /* 9468a5: fsqrt  */
  ST0 = sqrt(ST0);
/* 9468a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9468a8: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 9468ae: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9468b0: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 9468b2: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 9468b4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9468b6: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 9468b9: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 9468bc: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9468be: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9468c0: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 9468c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9468c4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9468c6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9468c7: ret  */
  esp += 4; SPILL(); return;
L_9468c8: /* 9468c8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9468ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9468cb: mov dword ptr [esi], 0x3f800000 */
  W32((uint32_t)(esi), 0x3f800000u);
/* 9468d1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9468d3: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 9468d6: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 9468d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9468da: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9468db: ret  */
  esp += 4; SPILL(); return;
}

void f_9468e0(void) {
  LOAD_REGS();
L_9468e0: /* 9468e0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9468e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9468e6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 9468e9: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 9468ec: fadd dword ptr [edx + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x18u)));
/* 9468ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9468f0: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 9468f4: fstp dword ptr [esi + 0x2c] */
  WF32((uint32_t)(esi + 0x2cu), ST0); FPOP();
/* 9468f7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9468f9: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9468fc: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* 9468ff: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 946902: mov eax, ecx */
  eax = ecx;
/* 946904: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 946907: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 946908: mov dword ptr [esi + 0x38], edx */
  W32((uint32_t)(esi + 0x38u), edx);
/* 94690b: call 0x9463b0 */
  esp -= 4; W32(esp, 0x946910u); SPILL(); f_9463b0(); if (g_unwind) return; RELOAD();
/* 946910: fstp dword ptr [esi + 0x24] */
  WF32((uint32_t)(esi + 0x24u), ST0); FPOP();
/* 946913: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 946916: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 946917: call 0x9463b0 */
  esp -= 4; W32(esp, 0x94691cu); SPILL(); f_9463b0(); if (g_unwind) return; RELOAD();
/* 94691c: fstp dword ptr [esi + 0x28] */
  WF32((uint32_t)(esi + 0x28u), ST0); FPOP();
/* 94691f: xor eax, eax */
  eax = 0;
/* 946921: mov ecx, 0x3f800000 */
  ecx = 0x3f800000u;
/* 946926: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 946929: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 94692b: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 94692e: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 946931: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 946934: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 946937: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 94693a: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 94693d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94693e: ret  */
  esp += 4; SPILL(); return;
}

void f_946940(void) {
  LOAD_REGS();
L_946940: /* 946940: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 946941: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 946942: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 946946: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 946948: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 94694a: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 94694d: add esi, 0x24 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 946950: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 946952: jne 0x946961 */
  if (!zf) goto L_946961;
L_946954: /* 946954: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 946956: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 946958: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 94695a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94695b: call dword ptr [0xb02224] */
  { uint32_t t = R32((uint32_t)(0xb02224u)); esp -= 4; W32(esp, 0x946961u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_946961: /* 946961: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 946962: call dword ptr [0xb02230] */
  { uint32_t t = R32((uint32_t)(0xb02230u)); esp -= 4; W32(esp, 0x946968u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 946968: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94696a: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* 94696d: je 0x946979 */
  if (zf) goto L_946979;
L_94696f: /* 94696f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 946970: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 946971: call 0x9468e0 */
  esp -= 4; W32(esp, 0x946976u); SPILL(); f_9468e0(); if (g_unwind) return; RELOAD();
/* 946976: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_946979: /* 946979: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94697a: mov eax, 1 */
  eax = 0x1u;
/* 94697f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 946980: ret 4 */
  esp += 8; SPILL(); return;
}

void f_946990(void) {
  LOAD_REGS();
L_946990: /* 946990: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 946991: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 946995: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 946998: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94699a: je 0x9469ab */
  if (zf) goto L_9469ab;
L_94699c: /* 94699c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94699d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 94699f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9469a1: add ecx, 0x24 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9469a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9469a5: call dword ptr [0xb02234] */
  { uint32_t t = R32((uint32_t)(0xb02234u)); esp -= 4; W32(esp, 0x9469abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_9469ab: /* 9469ab: mov dword ptr [esi + 0x14], 0 */
  W32((uint32_t)(esi + 0x14u), 0x0u);
/* 9469b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9469b3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9469c0(void) {
  LOAD_REGS();
L_9469c0: /* 9469c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 9469c4: mov eax, dword ptr [ecx + 0x1c8] */
  eax = R32((uint32_t)(ecx + 0x1c8u));
/* 9469ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9469cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9469cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9469ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9469cf: jne 0x946ac6 */
  if (!zf) goto L_946ac6;
L_9469d5: /* 9469d5: mov eax, dword ptr [ecx + 0x1c4] */
  eax = R32((uint32_t)(ecx + 0x1c4u));
/* 9469db: cmp eax, dword ptr [ecx + 0x1bc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1bcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9469e1: jge 0x946ac6 */
  if ((sf == of)) goto L_946ac6;
L_9469e7: /* 9469e7: fld dword ptr [ecx + 0x60] */
  { double v = F32((uint32_t)(ecx + 0x60u)); FPUSH(v); }
/* 9469ea: fabs  */
  ST0 = fabs(ST0);
/* 9469ec: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 9469f2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9469f4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9469f7: mov eax, dword ptr [ecx + 0x1c0] */
  eax = R32((uint32_t)(ecx + 0x1c0u));
/* 9469fd: jp 0x946a1c */
  if (pf) goto L_946a1c;
L_9469ff: /* 9469ff: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 946a02: fld dword ptr [ecx + edx*8] */
  { double v = F32((uint32_t)(ecx + edx*8)); FPUSH(v); }
/* 946a05: lea edx, [ecx + edx*8] */
  edx = (uint32_t)(ecx + edx*8);
/* 946a08: fabs  */
  ST0 = fabs(ST0);
/* 946a0a: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946a10: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946a12: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946a15: jnp 0x946a3a */
  if (!pf) goto L_946a3a;
L_946a17: /* 946a17: jmp 0x946aa3 */
  goto L_946aa3;
L_946a1c: /* 946a1c: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 946a1f: fld dword ptr [ecx + eax*8] */
  { double v = F32((uint32_t)(ecx + eax*8)); FPUSH(v); }
/* 946a22: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* 946a25: fsub dword ptr [ecx + 0x60] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x60u)));
/* 946a28: fdiv dword ptr [ecx + 0x60] */
  ST0 = ST0 / (F32((uint32_t)(ecx + 0x60u)));
/* 946a2b: fabs  */
  ST0 = fabs(ST0);
/* 946a2d: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946a33: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946a35: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946a38: jp 0x946aa3 */
  if (pf) goto L_946aa3;
L_946a3a: /* 946a3a: fld dword ptr [ecx + 0x64] */
  { double v = F32((uint32_t)(ecx + 0x64u)); FPUSH(v); }
/* 946a3d: fabs  */
  ST0 = fabs(ST0);
/* 946a3f: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946a45: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 946a48: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946a4a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946a4d: jp 0x946a60 */
  if (pf) goto L_946a60;
L_946a4f: /* 946a4f: fabs  */
  ST0 = fabs(ST0);
/* 946a51: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946a57: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946a59: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946a5c: jnp 0x946a75 */
  if (!pf) goto L_946a75;
L_946a5e: /* 946a5e: jmp 0x946aa3 */
  goto L_946aa3;
L_946a60: /* 946a60: fsub dword ptr [ecx + 0x64] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x64u)));
/* 946a63: fdiv dword ptr [ecx + 0x64] */
  ST0 = ST0 / (F32((uint32_t)(ecx + 0x64u)));
/* 946a66: fabs  */
  ST0 = fabs(ST0);
/* 946a68: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946a6e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946a70: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946a73: jp 0x946aa3 */
  if (pf) goto L_946aa3;
L_946a75: /* 946a75: fld dword ptr [ecx + 0x68] */
  { double v = F32((uint32_t)(ecx + 0x68u)); FPUSH(v); }
/* 946a78: fabs  */
  ST0 = fabs(ST0);
/* 946a7a: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946a80: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 946a83: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946a85: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946a88: jnp 0x946a90 */
  if (!pf) goto L_946a90;
L_946a8a: /* 946a8a: fsub dword ptr [ecx + 0x68] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x68u)));
/* 946a8d: fdiv dword ptr [ecx + 0x68] */
  ST0 = ST0 / (F32((uint32_t)(ecx + 0x68u)));
L_946a90: /* 946a90: fabs  */
  ST0 = fabs(ST0);
/* 946a92: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946a98: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946a9a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946a9d: jnp 0x946bbe */
  if (!pf) goto L_946bbe;
L_946aa3: /* 946aa3: fld dword ptr [ecx + 0x6c] */
  { double v = F32((uint32_t)(ecx + 0x6cu)); FPUSH(v); }
/* 946aa6: fabs  */
  ST0 = fabs(ST0);
/* 946aa8: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946aae: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 946ab0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946ab2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946ab5: jp 0x946b25 */
  if (pf) goto L_946b25;
L_946ab7: /* 946ab7: fabs  */
  ST0 = fabs(ST0);
/* 946ab9: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946abf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946ac1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946ac4: jnp 0x946b3a */
  if (!pf) goto L_946b3a;
L_946ac6: /* 946ac6: mov ebx, dword ptr [ecx + 0x1bc] */
  ebx = R32((uint32_t)(ecx + 0x1bcu));
/* 946acc: mov edi, 1 */
  edi = 0x1u;
/* 946ad1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 946ad3: jl 0x946c4b */
  if ((sf != of)) goto L_946c4b;
L_946ad9: /* 946ad9: lea edx, [ecx + 8] */
  edx = (uint32_t)(ecx + 0x8u);
/* 946adc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_946ae0: /* 946ae0: test edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 946ae2: je 0x946c3e */
  if (zf) goto L_946c3e;
L_946ae8: /* 946ae8: fld dword ptr [edx - 8] */
  { double v = F32((uint32_t)(edx + 0xfffffff8u)); FPUSH(v); }
/* 946aeb: fabs  */
  ST0 = fabs(ST0);
/* 946aed: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946af3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946af5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946af8: mov eax, dword ptr [ecx + 0x1c0] */
  eax = R32((uint32_t)(ecx + 0x1c0u));
/* 946afe: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 946b01: fld dword ptr [ecx + eax*8] */
  { double v = F32((uint32_t)(ecx + eax*8)); FPUSH(v); }
/* 946b04: lea esi, [ecx + eax*8] */
  esi = (uint32_t)(ecx + eax*8);
/* 946b07: jp 0x946bc7 */
  if (pf) goto L_946bc7;
L_946b0d: /* 946b0d: fabs  */
  ST0 = fabs(ST0);
/* 946b0f: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946b15: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946b17: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946b1a: jnp 0x946bdc */
  if (!pf) goto L_946bdc;
L_946b20: /* 946b20: jmp 0x946c3e */
  goto L_946c3e;
L_946b25: /* 946b25: fsub dword ptr [ecx + 0x6c] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x6cu)));
/* 946b28: fdiv dword ptr [ecx + 0x6c] */
  ST0 = ST0 / (F32((uint32_t)(ecx + 0x6cu)));
/* 946b2b: fabs  */
  ST0 = fabs(ST0);
/* 946b2d: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946b33: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946b35: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946b38: jp 0x946ac6 */
  if (pf) goto L_946ac6;
L_946b3a: /* 946b3a: fld dword ptr [ecx + 0x70] */
  { double v = F32((uint32_t)(ecx + 0x70u)); FPUSH(v); }
/* 946b3d: fabs  */
  ST0 = fabs(ST0);
/* 946b3f: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946b45: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 946b48: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946b4a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946b4d: jp 0x946b63 */
  if (pf) goto L_946b63;
L_946b4f: /* 946b4f: fabs  */
  ST0 = fabs(ST0);
/* 946b51: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946b57: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946b59: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946b5c: jnp 0x946b7c */
  if (!pf) goto L_946b7c;
L_946b5e: /* 946b5e: jmp 0x946ac6 */
  goto L_946ac6;
L_946b63: /* 946b63: fsub dword ptr [ecx + 0x70] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x70u)));
/* 946b66: fdiv dword ptr [ecx + 0x70] */
  ST0 = ST0 / (F32((uint32_t)(ecx + 0x70u)));
/* 946b69: fabs  */
  ST0 = fabs(ST0);
/* 946b6b: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946b71: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946b73: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946b76: jp 0x946ac6 */
  if (pf) goto L_946ac6;
L_946b7c: /* 946b7c: fld dword ptr [ecx + 0x74] */
  { double v = F32((uint32_t)(ecx + 0x74u)); FPUSH(v); }
/* 946b7f: fabs  */
  ST0 = fabs(ST0);
/* 946b81: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946b87: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 946b8a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946b8c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946b8f: jp 0x946ba5 */
  if (pf) goto L_946ba5;
L_946b91: /* 946b91: fabs  */
  ST0 = fabs(ST0);
/* 946b93: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946b99: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946b9b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946b9e: jnp 0x946bbe */
  if (!pf) goto L_946bbe;
L_946ba0: /* 946ba0: jmp 0x946ac6 */
  goto L_946ac6;
L_946ba5: /* 946ba5: fsub dword ptr [ecx + 0x74] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x74u)));
/* 946ba8: fdiv dword ptr [ecx + 0x74] */
  ST0 = ST0 / (F32((uint32_t)(ecx + 0x74u)));
/* 946bab: fabs  */
  ST0 = fabs(ST0);
/* 946bad: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946bb3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946bb5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946bb8: jp 0x946ac6 */
  if (pf) goto L_946ac6;
L_946bbe: /* 946bbe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 946bbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 946bc0: mov eax, 1 */
  eax = 0x1u;
/* 946bc5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 946bc6: ret  */
  esp += 4; SPILL(); return;
L_946bc7: /* 946bc7: fsub dword ptr [edx - 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0xfffffff8u)));
/* 946bca: fdiv dword ptr [edx - 8] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0xfffffff8u)));
/* 946bcd: fabs  */
  ST0 = fabs(ST0);
/* 946bcf: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946bd5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946bd7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946bda: jp 0x946c3e */
  if (pf) goto L_946c3e;
L_946bdc: /* 946bdc: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 946bdf: fabs  */
  ST0 = fabs(ST0);
/* 946be1: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946be7: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 946bea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946bec: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946bef: jp 0x946c02 */
  if (pf) goto L_946c02;
L_946bf1: /* 946bf1: fabs  */
  ST0 = fabs(ST0);
/* 946bf3: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946bf9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946bfb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946bfe: jnp 0x946c17 */
  if (!pf) goto L_946c17;
L_946c00: /* 946c00: jmp 0x946c3e */
  goto L_946c3e;
L_946c02: /* 946c02: fsub dword ptr [edx - 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0xfffffffcu)));
/* 946c05: fdiv dword ptr [edx - 4] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0xfffffffcu)));
/* 946c08: fabs  */
  ST0 = fabs(ST0);
/* 946c0a: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946c10: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946c12: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946c15: jp 0x946c3e */
  if (pf) goto L_946c3e;
L_946c17: /* 946c17: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 946c19: fabs  */
  ST0 = fabs(ST0);
/* 946c1b: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946c21: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 946c24: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946c26: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946c29: jnp 0x946c2f */
  if (!pf) goto L_946c2f;
L_946c2b: /* 946c2b: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 946c2d: fdiv dword ptr [edx] */
  ST0 = ST0 / (F32((uint32_t)(edx)));
L_946c2f: /* 946c2f: fabs  */
  ST0 = fabs(ST0);
/* 946c31: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 946c37: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946c39: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946c3c: jnp 0x946bbe */
  if (!pf) goto L_946bbe;
L_946c3e: /* 946c3e: shl edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 946c40: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 946c43: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 946c45: jle 0x946ae0 */
  if ((zf || sf != of)) goto L_946ae0;
L_946c4b: /* 946c4b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 946c4c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 946c4d: xor eax, eax */
  eax = 0;
/* 946c4f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 946c50: ret  */
  esp += 4; SPILL(); return;
}

void f_946c60(void) {
  LOAD_REGS();
L_946c60: /* 946c60: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 946c63: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 946c67: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 946c6d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 946c6e: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 946c72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 946c73: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 946c77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 946c78: xor edi, edi */
  edi = 0;
/* 946c7a: mov edx, 1 */
  edx = 0x1u;
/* 946c7f: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 946c81: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 946c89: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 946c91: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 946c93: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 946c96: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 946c99: jl 0x946d51 */
  if ((sf != of)) goto L_946d51;
L_946c9f: /* 946c9f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 946ca0: mov ebx, ebp */
  ebx = ebp;
L_946ca2: /* 946ca2: test esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 946ca4: je 0x946d17 */
  if (zf) goto L_946d17;
L_946ca6: /* 946ca6: lea eax, [edi + esi*4] */
  eax = (uint32_t)(edi + esi*4);
/* 946ca9: fld dword ptr [ebp + eax*4 + 0xb8] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xb8u)); FPUSH(v); }
/* 946cb0: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 946cb4: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 946cb6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946cb8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946cbb: jp 0x946cc3 */
  if (pf) goto L_946cc3;
L_946cbd: /* 946cbd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 946cbf: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
L_946cc3: /* 946cc3: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 946cc7: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 946ccb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946ccd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 946cd0: jne 0x946cda */
  if (!zf) goto L_946cda;
L_946cd2: /* 946cd2: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 946cd6: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_946cda: /* 946cda: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 946cde: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 946ce2: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 946ce6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 946ce8: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 946ceb: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 946cef: jne 0x946cf3 */
  if (!zf) goto L_946cf3;
L_946cf1: /* 946cf1: mov eax, ebx */
  eax = ebx;
L_946cf3: /* 946cf3: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 946cf7: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 946cf9: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 946cfb: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 946cfd: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 946d01: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 946d04: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 946d07: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 946d0a: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 946d0e: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 946d11: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 946d14: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
L_946d17: /* 946d17: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 946d19: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 946d1a: add ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 946d1d: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 946d1f: jle 0x946ca2 */
  if ((zf || sf != of)) goto L_946ca2;
L_946d21: /* 946d21: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 946d25: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 946d26: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 946d2c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946d2e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946d31: jnp 0x946d51 */
  if (!pf) goto L_946d51;
L_946d33: /* 946d33: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 946d39: fdiv dword ptr [esp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0xcu)));
/* 946d3d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 946d3f: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 946d41: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 946d43: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 946d45: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 946d48: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 946d4b: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 946d4e: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
L_946d51: /* 946d51: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 946d55: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 946d56: fmul dword ptr [ebp + 0x1b8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1b8u)));
/* 946d5c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 946d5d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 946d5e: fchs  */
  ST0 = -ST0;
/* 946d60: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 946d62: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 946d64: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946d66: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946d69: jnp 0x946d74 */
  if (!pf) goto L_946d74;
L_946d6b: /* 946d6b: mov eax, 1 */
  eax = 0x1u;
/* 946d70: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 946d73: ret  */
  esp += 4; SPILL(); return;
L_946d74: /* 946d74: xor eax, eax */
  eax = 0;
/* 946d76: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 946d79: ret  */
  esp += 4; SPILL(); return;
}

void f_946d80(void) {
  LOAD_REGS();
L_946d80: /* 946d80: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 946d84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 946d86: jne 0x946dc3 */
  if (!zf) goto L_946dc3;
L_946d88: /* 946d88: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 946d8c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 946d90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 946d92: mov eax, dword ptr [ecx + 0x1c0] */
  eax = R32((uint32_t)(ecx + 0x1c0u));
/* 946d98: je 0x946da3 */
  if (zf) goto L_946da3;
L_946d9a: /* 946d9a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 946d9d: lea eax, [ecx + eax*8 + 0xc] */
  eax = (uint32_t)(ecx + eax*8 + 0xcu);
/* 946da1: jmp 0x946da9 */
  goto L_946da9;
L_946da3: /* 946da3: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 946da6: lea eax, [ecx + edx*8] */
  eax = (uint32_t)(ecx + edx*8);
L_946da9: /* 946da9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 946dab: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 946daf: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 946db1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 946db4: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 946db7: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 946dba: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 946dbd: mov eax, 1 */
  eax = 0x1u;
/* 946dc2: ret  */
  esp += 4; SPILL(); return;
L_946dc3: /* 946dc3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 946dc7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 946dcb: mov eax, dword ptr [eax + 0x1c4] */
  eax = R32((uint32_t)(eax + 0x1c4u));
/* 946dd1: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 946dd3: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 946dd7: jmp 0x946c60 */
  SPILL(); f_946c60(); return;
}

void f_946de0(void) {
  LOAD_REGS();
L_946de0: /* 946de0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 946de4: mov edx, dword ptr [ecx + 0x1bc] */
  edx = R32((uint32_t)(ecx + 0x1bcu));
/* 946dea: mov eax, 1 */
  eax = 0x1u;
/* 946def: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 946df0: xor esi, esi */
  esi = 0;
/* 946df2: test al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 946df4: mov dword ptr [ecx + 0x1c0], esi */
  W32((uint32_t)(ecx + 0x1c0u), esi);
/* 946dfa: mov dword ptr [ecx + 0x1c4], eax */
  W32((uint32_t)(ecx + 0x1c4u), eax);
/* 946e00: je 0x946e15 */
  if (zf) goto L_946e15;
L_946e02: /* 946e02: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 946e04: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 946e05: test eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 946e07: jne 0x946e02 */
  if (!zf) goto L_946e02;
L_946e09: /* 946e09: mov dword ptr [ecx + 0x1c0], esi */
  W32((uint32_t)(ecx + 0x1c0u), esi);
/* 946e0f: mov dword ptr [ecx + 0x1c4], eax */
  W32((uint32_t)(ecx + 0x1c4u), eax);
L_946e15: /* 946e15: mov eax, dword ptr [ecx + 0x1c0] */
  eax = R32((uint32_t)(ecx + 0x1c0u));
/* 946e1b: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 946e1e: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 946e21: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 946e22: ret  */
  esp += 4; SPILL(); return;
}

void f_946e30(void) {
  LOAD_REGS();
L_946e30: /* 946e30: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 946e34: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 946e37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 946e38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 946e39: mov esi, dword ptr [edx + 0x1bc] */
  esi = R32((uint32_t)(edx + 0x1bcu));
/* 946e3f: xor eax, eax */
  eax = 0;
/* 946e41: cmp esi, 0xe */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 946e44: jne 0x946e4f */
  if (!zf) goto L_946e4f;
L_946e46: /* 946e46: mov ebx, edx */
  ebx = edx;
/* 946e48: mov eax, 1 */
  eax = 0x1u;
/* 946e4d: jmp 0x946e53 */
  goto L_946e53;
L_946e4f: /* 946e4f: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
L_946e53: /* 946e53: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 946e56: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 946e57: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 946e58: cmp esi, 0xd */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 946e5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 946e5c: lea ebp, [edx + ecx*8] */
  ebp = (uint32_t)(edx + ecx*8);
/* 946e5f: jne 0x946e68 */
  if (!zf) goto L_946e68;
L_946e61: /* 946e61: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 946e64: lea ebx, [edx + ecx*8] */
  ebx = (uint32_t)(edx + ecx*8);
/* 946e67: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_946e68: /* 946e68: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 946e6b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 946e6c: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 946e6f: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 946e72: jne 0x946e7b */
  if (!zf) goto L_946e7b;
L_946e74: /* 946e74: lea edi, [eax + eax*2] */
  edi = (uint32_t)(eax + eax*2);
/* 946e77: lea ebx, [edx + edi*8] */
  ebx = (uint32_t)(edx + edi*8);
/* 946e7a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_946e7b: /* 946e7b: cmp esi, 7 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 946e7e: lea edi, [eax + eax*2] */
  edi = (uint32_t)(eax + eax*2);
/* 946e81: lea edi, [edx + edi*8] */
  edi = (uint32_t)(edx + edi*8);
/* 946e84: jne 0x946e8d */
  if (!zf) goto L_946e8d;
L_946e86: /* 946e86: lea eax, [eax + eax*2 + 3] */
  eax = (uint32_t)(eax + eax*2 + 0x3u);
/* 946e8a: lea ebx, [edx + eax*8] */
  ebx = (uint32_t)(edx + eax*8);
L_946e8d: /* 946e8d: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 946e90: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 946e94: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 946e96: fld dword ptr [ebp + 4] */
  { double v = F32((uint32_t)(ebp + 0x4u)); FPUSH(v); }
/* 946e99: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 946e9c: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 946ea0: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 946ea3: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 946ea6: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 946eaa: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 946eac: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 946eae: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 946eb1: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 946eb4: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 946eb7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 946eb8: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 946ebb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 946ebc: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 946ec0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 946ec2: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 946ec4: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 946ec8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 946eca: fst dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0);
/* 946ece: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 946ed0: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 946ed4: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 946ed6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 946ed8: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 946eda: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 946edc: fst dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0);
/* 946ee0: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 946ee3: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 946ee5: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 946ee9: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 946eeb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 946eed: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 946eef: fst dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0);
/* 946ef2: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 946ef6: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 946efa: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 946efe: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 946f00: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 946f02: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 946f04: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 946f06: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 946f08: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 946f0a: fsqrt  */
  ST0 = sqrt(ST0);
/* 946f0c: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 946f0e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 946f10: fst dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0);
/* 946f14: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 946f1a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946f1c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946f1f: jp 0x946fb7 */
  if (pf) goto L_946fb7;
L_946f25: /* 946f25: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 946f29: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 946f2d: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 946f31: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 946f35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 946f36: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 946f3a: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 946f3e: call 0x947020 */
  esp -= 4; W32(esp, 0x946f43u); SPILL(); f_947020(); if (g_unwind) return; RELOAD();
/* 946f43: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 946f45: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 946f49: fcomp dword ptr [0x9f7194] */
  fpu_com(ST0, F32((uint32_t)(0x9f7194u)));
  FPOP();
/* 946f4f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946f51: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 946f54: jp 0x946f8f */
  if (pf) goto L_946f8f;
L_946f56: /* 946f56: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 946f5a: fcomp dword ptr [0xa07ebc] */
  fpu_com(ST0, F32((uint32_t)(0xa07ebcu)));
  FPOP();
/* 946f60: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946f62: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 946f65: jne 0x946f8f */
  if (!zf) goto L_946f8f;
L_946f67: /* 946f67: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 946f6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 946f6c: fchs  */
  ST0 = -ST0;
/* 946f6e: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 946f75: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 946f77: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 946f7b: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 946f7e: call 0x947020 */
  esp -= 4; W32(esp, 0x946f83u); SPILL(); f_947020(); if (g_unwind) return; RELOAD();
/* 946f83: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 946f85: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 946f89: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 946f8a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 946f8b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 946f8e: ret  */
  esp += 4; SPILL(); return;
L_946f8f: /* 946f8f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 946f93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 946f94: fchs  */
  ST0 = -ST0;
/* 946f96: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 946f9d: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 946f9f: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 946fa3: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 946fa6: call 0x947020 */
  esp -= 4; W32(esp, 0x946fabu); SPILL(); f_947020(); if (g_unwind) return; RELOAD();
/* 946fab: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 946fad: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 946fb1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 946fb2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 946fb3: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 946fb6: ret  */
  esp += 4; SPILL(); return;
L_946fb7: /* 946fb7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 946fb9: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 946fbb: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 946fbd: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 946fc0: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 946fc3: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 946fc6: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 946fc9: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 946fcc: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 946fce: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 946fd1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 946fd3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 946fd5: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 946fd7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 946fd9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 946fdf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 946fe1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 946fe4: jne 0x946fee */
  if (!zf) goto L_946fee;
L_946fe6: /* 946fe6: fld dword ptr [0xa08220] */
  { double v = F32((uint32_t)(0xa08220u)); FPUSH(v); }
/* 946fec: jmp 0x946ff4 */
  goto L_946ff4;
L_946fee: /* 946fee: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_946ff4: /* 946ff4: fdiv dword ptr [esp + 0x28] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x28u)));
/* 946ff8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 946ffa: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 946ffc: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 946ffe: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 947000: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 947003: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 947006: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 947009: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 94700c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94700d: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 947011: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 947012: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 947015: ret  */
  esp += 4; SPILL(); return;
}

void f_947020(void) {
  LOAD_REGS();
L_947020: /* 947020: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 947026: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 94702a: xor edx, edx */
  edx = 0;
/* 94702c: xor eax, eax */
  eax = 0;
/* 94702e: mov edi, edi */
  edi = edi;
L_947030: /* 947030: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 947033: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 947034: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 947037: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 947039: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94703b: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 94703d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94703f: jl 0x947030 */
  if ((sf != of)) goto L_947030;
L_947041: /* 947041: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 947047: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 947049: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94704c: jne 0x94706f */
  if (!zf) goto L_94706f;
L_94704e: /* 94704e: fsqrt  */
  ST0 = sqrt(ST0);
/* 947050: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 947056: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 947058: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94705a: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94705c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 94705e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 947060: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 947063: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 947066: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 947069: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 94706c: ret 4 */
  esp += 8; SPILL(); return;
L_94706f: /* 94706f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 947071: mov dword ptr [ecx], 0x3f800000 */
  W32((uint32_t)(ecx), 0x3f800000u);
/* 947077: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 94707d: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 947080: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 947083: ret 4 */
  esp += 8; SPILL(); return;
}

void f_947090(void) {
  LOAD_REGS();
L_947090: /* 947090: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 947094: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 947097: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 947098: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 94709c: fcomp dword ptr [ebp + 0x1b8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x1b8u)));
  FPOP();
/* 9470a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9470a3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9470a5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9470a8: je 0x9472ce */
  if (zf) goto L_9472ce;
L_9470ae: /* 9470ae: mov eax, dword ptr [ebp + 0x1bc] */
  eax = R32((uint32_t)(ebp + 0x1bcu));
/* 9470b4: xor esi, esi */
  esi = 0;
/* 9470b6: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9470b8: je 0x9472ce */
  if (zf) goto L_9472ce;
L_9470be: /* 9470be: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9470c1: je 0x9470d2 */
  if (zf) goto L_9470d2;
L_9470c3: /* 9470c3: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9470c6: je 0x9470d2 */
  if (zf) goto L_9470d2;
L_9470c8: /* 9470c8: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9470cb: je 0x9470d2 */
  if (zf) goto L_9470d2;
L_9470cd: /* 9470cd: cmp eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9470d0: jne 0x947148 */
  if (!zf) goto L_947148;
L_9470d2: /* 9470d2: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 9470d6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9470d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9470d8: call 0x946e30 */
  esp -= 4; W32(esp, 0x9470ddu); SPILL(); f_946e30(); if (g_unwind) return; RELOAD();
/* 9470dd: fcom dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
/* 9470e3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9470e6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9470e8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9470eb: jne 0x947146 */
  if (!zf) goto L_947146;
L_9470ed: /* 9470ed: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9470f1: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9470f5: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 9470f8: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9470fc: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 9470ff: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 947101: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 947105: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 947107: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 947109: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94710f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 947111: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 947114: jp 0x94711e */
  if (pf) goto L_94711e;
L_947116: /* 947116: fdivr dword ptr [0xa08220] */
  ST0 = (F32((uint32_t)(0xa08220u))) / ST0;
/* 94711c: jmp 0x947124 */
  goto L_947124;
L_94711e: /* 94711e: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
L_947124: /* 947124: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 947128: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 947129: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94712b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94712c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 94712e: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 947132: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 947134: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 947137: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 94713b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94713d: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 947140: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 947142: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 947145: ret  */
  esp += 4; SPILL(); return;
L_947146: /* 947146: fstp st(0) */
  STI(0) = ST0; FPOP();
L_947148: /* 947148: mov edx, dword ptr [ebp + 0x1bc] */
  edx = R32((uint32_t)(ebp + 0x1bcu));
/* 94714e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94714f: xor ebx, ebx */
  ebx = 0;
/* 947151: mov ecx, 1 */
  ecx = 0x1u;
/* 947156: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 947158: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 94715c: jl 0x9471a6 */
  if ((sf != of)) goto L_9471a6;
L_94715e: /* 94715e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94715f: lea edi, [ebp + 8] */
  edi = (uint32_t)(ebp + 0x8u);
L_947162: /* 947162: test ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 947164: je 0x947199 */
  if (zf) goto L_947199;
L_947166: /* 947166: fld dword ptr [edi - 4] */
  { double v = F32((uint32_t)(edi + 0xfffffffcu)); FPUSH(v); }
/* 947169: fld dword ptr [edi - 8] */
  { double v = F32((uint32_t)(edi + 0xfffffff8u)); FPUSH(v); }
/* 94716c: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 94716e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 947170: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 947172: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 947174: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 947176: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 947178: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94717a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 94717c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94717e: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 947180: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 947182: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 947184: fcom dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
/* 947188: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94718a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94718d: jne 0x947197 */
  if (!zf) goto L_947197;
L_94718f: /* 94718f: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 947193: mov ebx, esi */
  ebx = esi;
/* 947195: jmp 0x947199 */
  goto L_947199;
L_947197: /* 947197: fstp st(0) */
  STI(0) = ST0; FPOP();
L_947199: /* 947199: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 94719b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 94719c: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 94719f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9471a1: jle 0x947162 */
  if ((zf || sf != of)) goto L_947162;
L_9471a3: /* 9471a3: xor esi, esi */
  esi = 0;
/* 9471a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_9471a6: /* 9471a6: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9471ac: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 9471af: mov edx, dword ptr [ebp + ecx*8] */
  edx = R32((uint32_t)(ebp + ecx*8));
/* 9471b3: lea eax, [ebp + ecx*8] */
  eax = (uint32_t)(ebp + ecx*8);
/* 9471b7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 9471ba: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 9471be: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 9471c1: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9471c5: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 9471c9: xor eax, eax */
  eax = 0;
/* 9471cb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9471cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9471d0: /* 9471d0: fld dword ptr [esp + eax*4 + 8] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x8u)); FPUSH(v); }
/* 9471d4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9471d5: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9471d8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9471da: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9471dc: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9471de: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9471e0: jl 0x9471d0 */
  if ((sf != of)) goto L_9471d0;
L_9471e2: /* 9471e2: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 9471e8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9471ea: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9471ed: jne 0x947245 */
  if (!zf) goto L_947245;
L_9471ef: /* 9471ef: fsqrt  */
  ST0 = sqrt(ST0);
/* 9471f1: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 9471f7: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 9471fb: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 9471ff: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 947203: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 947207: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94720b: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 94720f: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 947213: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 947217: fcomp dword ptr [0x9f7194] */
  fpu_com(ST0, F32((uint32_t)(0x9f7194u)));
  FPOP();
/* 94721d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94721f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 947222: jp 0x947263 */
  if (pf) goto L_947263;
L_947224: /* 947224: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 947228: fcomp dword ptr [0xa07ebc] */
  fpu_com(ST0, F32((uint32_t)(0xa07ebcu)));
  FPOP();
/* 94722e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 947230: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 947233: jne 0x947263 */
  if (!zf) goto L_947263;
L_947235: /* 947235: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 947239: fchs  */
  ST0 = -ST0;
/* 94723b: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 94723d: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 947240: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 947243: jmp 0x947277 */
  goto L_947277;
L_947245: /* 947245: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 947249: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94724b: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 947251: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 947254: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 94725a: fchs  */
  ST0 = -ST0;
/* 94725c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 94725e: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 947261: jmp 0x947277 */
  goto L_947277;
L_947263: /* 947263: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 947267: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 947269: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94726d: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 947270: fchs  */
  ST0 = -ST0;
/* 947272: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 947274: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
L_947277: /* 947277: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 94727d: xor eax, eax */
  eax = 0;
/* 94727f: nop  */
L_947280: /* 947280: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 947283: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 947284: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 947287: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 947289: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94728b: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 94728d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94728f: jl 0x947280 */
  if ((sf != of)) goto L_947280;
L_947291: /* 947291: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 947297: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 947299: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94729c: jne 0x9472c0 */
  if (!zf) goto L_9472c0;
L_94729e: /* 94729e: fsqrt  */
  ST0 = sqrt(ST0);
/* 9472a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9472a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9472a2: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 9472a8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9472aa: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9472ac: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 9472ae: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9472b0: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 9472b3: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 9472b6: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 9472b9: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 9472bc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9472bf: ret  */
  esp += 4; SPILL(); return;
L_9472c0: /* 9472c0: mov dword ptr [ecx], 0x3f800000 */
  W32((uint32_t)(ecx), 0x3f800000u);
/* 9472c6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9472c8: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 9472cb: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
L_9472ce: /* 9472ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9472cf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9472d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9472d3: ret  */
  esp += 4; SPILL(); return;
}

void f_9472e0(void) {
  LOAD_REGS();
L_9472e0: /* 9472e0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9472e3: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9472e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9472e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9472ea: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9472eb: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 9472ef: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 9472f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9472f3: fchs  */
  ST0 = -ST0;
/* 9472f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9472f6: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 9472fa: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9472fe: fld dword ptr [ebp + 4] */
  { double v = F32((uint32_t)(ebp + 0x4u)); FPUSH(v); }
/* 947301: fchs  */
  ST0 = -ST0;
/* 947303: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 947307: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 94730a: fchs  */
  ST0 = -ST0;
/* 94730c: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 947310: jle 0x947334 */
  if ((zf || sf != of)) goto L_947334;
L_947312: /* 947312: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 947315: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 947319: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94731a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94731b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94731c: call 0x946740 */
  esp -= 4; W32(esp, 0x947321u); SPILL(); f_946740(); if (g_unwind) return; RELOAD();
/* 947321: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 947325: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 947328: lea ebx, [esi + 0xc] */
  ebx = (uint32_t)(esi + 0xcu);
/* 94732b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94732c: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 947330: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 947331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 947332: jmp 0x947354 */
  goto L_947354;
L_947334: /* 947334: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 947337: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 94733b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94733c: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 947340: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 947341: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 947342: call 0x946740 */
  esp -= 4; W32(esp, 0x947347u); SPILL(); f_946740(); if (g_unwind) return; RELOAD();
/* 947347: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 94734b: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 94734e: lea ebx, [esi + 0xc] */
  ebx = (uint32_t)(esi + 0xcu);
/* 947351: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 947352: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 947353: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_947354: /* 947354: call 0x946740 */
  esp -= 4; W32(esp, 0x947359u); SPILL(); f_946740(); if (g_unwind) return; RELOAD();
/* 947359: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 94735d: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 94735f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 947362: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 947364: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 947368: fsub dword ptr [ebx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x4u)));
/* 94736b: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 94736e: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 947372: fsub dword ptr [ebx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x8u)));
/* 947375: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 947378: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 94737b: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 94737d: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 94737f: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 947382: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 947385: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 947388: fld dword ptr [edi + 0x20] */
  { double v = F32((uint32_t)(edi + 0x20u)); FPUSH(v); }
/* 94738b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94738c: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 94738f: fst dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0);
/* 947392: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 947395: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 947398: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 94739a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94739b: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 94739e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9473a0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9473a2: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 9473a5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9473a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9473a7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9473a9: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9473ac: ret  */
  esp += 4; SPILL(); return;
}

void f_9473b0(void) {
  LOAD_REGS();
L_9473b0: /* 9473b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9473b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9473b2: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 9473b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9473b7: call 0x946de0 */
  esp -= 4; W32(esp, 0x9473bcu); SPILL(); f_946de0(); if (g_unwind) return; RELOAD();
/* 9473bc: mov esi, eax */
  esi = eax;
/* 9473be: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9473c2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9473c4: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9473c7: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9473ca: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 9473cd: lea eax, [edi + eax*4] */
  eax = (uint32_t)(edi + eax*4);
/* 9473d0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9473d2: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 9473d5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 9473d8: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9473dc: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 9473df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9473e0: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 9473e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9473e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9473e6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 9473e9: call 0x947090 */
  esp -= 4; W32(esp, 0x9473eeu); SPILL(); f_947090(); if (g_unwind) return; RELOAD();
/* 9473ee: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9473f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9473f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9473f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9473f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9473f7: call 0x9472e0 */
  esp -= 4; W32(esp, 0x9473fcu); SPILL(); f_9472e0(); if (g_unwind) return; RELOAD();
/* 9473fc: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9473ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 947400: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 947401: ret  */
  esp += 4; SPILL(); return;
}

void f_947410(void) {
  LOAD_REGS();
L_947410: /* 947410: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 947414: mov ecx, dword ptr [eax + 0x1bc] */
  ecx = R32((uint32_t)(eax + 0x1bcu));
/* 94741a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94741b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94741c: mov edi, dword ptr [eax + 0x1c4] */
  edi = R32((uint32_t)(eax + 0x1c4u));
/* 947422: mov ebx, 1 */
  ebx = 0x1u;
/* 947427: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 947429: xor edx, edx */
  edx = 0;
/* 94742b: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94742d: jl 0x94748c */
  if ((sf != of)) goto L_94748c;
L_94742f: /* 94742f: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 947432: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_947433: /* 947433: test ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 947435: je 0x947473 */
  if (zf) goto L_947473;
L_947437: /* 947437: mov ecx, dword ptr [eax + 0x1c0] */
  ecx = R32((uint32_t)(eax + 0x1c0u));
/* 94743d: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 947440: lea esi, [ecx + ecx*2] */
  esi = (uint32_t)(ecx + ecx*2);
/* 947443: fmul dword ptr [eax + esi*8 + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + esi*8 + 0x8u)));
/* 947447: lea esi, [eax + esi*8] */
  esi = (uint32_t)(eax + esi*8);
/* 94744a: fld dword ptr [edi - 4] */
  { double v = F32((uint32_t)(edi + 0xfffffffcu)); FPUSH(v); }
/* 94744d: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 947450: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 947452: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 947454: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 947457: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 947459: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94745b: fstp dword ptr [eax + ecx*4 + 0x78] */
  WF32((uint32_t)(eax + ecx*4 + 0x78u), ST0); FPOP();
/* 94745f: mov ecx, dword ptr [eax + 0x1c0] */
  ecx = R32((uint32_t)(eax + 0x1c0u));
/* 947465: lea esi, [ecx + edx*4] */
  esi = (uint32_t)(ecx + edx*4);
/* 947468: mov esi, dword ptr [eax + esi*4 + 0x78] */
  esi = R32((uint32_t)(eax + esi*4 + 0x78u));
/* 94746c: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 94746f: mov dword ptr [eax + ecx*4 + 0x78], esi */
  W32((uint32_t)(eax + ecx*4 + 0x78u), esi);
L_947473: /* 947473: mov ecx, dword ptr [eax + 0x1bc] */
  ecx = R32((uint32_t)(eax + 0x1bcu));
/* 947479: mov esi, dword ptr [eax + 0x1c4] */
  esi = R32((uint32_t)(eax + 0x1c4u));
/* 94747f: shl ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 947481: or ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 947483: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 947484: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 947487: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 947489: jle 0x947433 */
  if ((zf || sf != of)) goto L_947433;
L_94748b: /* 94748b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_94748c: /* 94748c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94748d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94748e: ret  */
  esp += 4; SPILL(); return;
}

void f_947490(void) {
  LOAD_REGS();
L_947490: /* 947490: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 947493: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 947497: mov edx, dword ptr [eax + 0x1c0] */
  edx = R32((uint32_t)(eax + 0x1c0u));
/* 94749d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94749e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94749f: mov ebp, dword ptr [eax + 0x1c4] */
  ebp = R32((uint32_t)(eax + 0x1c4u));
/* 9474a5: lea ecx, [edx + ebp*4] */
  ecx = (uint32_t)(edx + ebp*4);
/* 9474a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9474a9: mov dword ptr [eax + ecx*4 + 0xb8], 0x3f800000 */
  W32((uint32_t)(eax + ecx*4 + 0xb8u), 0x3f800000u);
/* 9474b4: mov ecx, dword ptr [eax + 0x1bc] */
  ecx = R32((uint32_t)(eax + 0x1bcu));
/* 9474ba: mov ebx, 1 */
  ebx = 0x1u;
/* 9474bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9474c0: xor edi, edi */
  edi = 0;
/* 9474c2: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9474c4: lea esi, [eax + 0x78] */
  esi = (uint32_t)(eax + 0x78u);
/* 9474c7: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 9474cb: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 9474cf: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 9474d3: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 9474d7: jl 0x947705 */
  if ((sf != of)) goto L_947705;
L_9474dd: /* 9474dd: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* 9474e1: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 9474e5: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 9474e9: lea esi, [esi + edx*4] */
  esi = (uint32_t)(esi + edx*4);
/* 9474ec: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* 9474f0: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
L_9474f4: /* 9474f4: test ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9474f6: je 0x9476b5 */
  if (zf) goto L_9476b5;
L_9474fc: /* 9474fc: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 947500: mov ecx, ebx */
  ecx = ebx;
/* 947502: or ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 947504: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 947508: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 94750b: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 94750f: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 947512: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 947515: lea esi, [ecx + edx] */
  esi = (uint32_t)(ecx + edx);
/* 947518: lea esi, [eax + esi*4 + 0xb8] */
  esi = (uint32_t)(eax + esi*4 + 0xb8u);
/* 94751f: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 947521: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 947523: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
/* 947527: lea esi, [edi + edx*4] */
  esi = (uint32_t)(edi + edx*4);
/* 94752a: lea ebp, [eax + 0x78] */
  ebp = (uint32_t)(eax + 0x78u);
/* 94752d: lea edi, [edx + edx*4] */
  edi = (uint32_t)(edx + edx*4);
/* 947530: fld dword ptr [ebp + edi*4] */
  { double v = F32((uint32_t)(ebp + edi*4)); FPUSH(v); }
/* 947534: lea esi, [ebp + esi*4] */
  esi = (uint32_t)(ebp + esi*4);
/* 947538: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 94753a: lea ecx, [eax + ecx*4 + 0xb8] */
  ecx = (uint32_t)(eax + ecx*4 + 0xb8u);
/* 947541: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 947545: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 947549: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 94754b: mov ecx, dword ptr [eax + 0x1bc] */
  ecx = R32((uint32_t)(eax + 0x1bcu));
/* 947551: mov edi, 1 */
  edi = 0x1u;
/* 947556: xor esi, esi */
  esi = 0;
/* 947558: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94755a: jl 0x9476b5 */
  if ((sf != of)) goto L_9476b5;
L_947560: /* 947560: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 947564: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 947568: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 94756c: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 94756f: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 947571: mov dword ptr [esp + 0x54], ebp */
  W32((uint32_t)(esp + 0x54u), ebp);
/* 947575: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 947579: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 94757d: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 947581: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 947585: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 947589: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_947590: /* 947590: test edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 947592: je 0x94766a */
  if (zf) goto L_94766a;
L_947598: /* 947598: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94759a: jge 0x9476b1 */
  if ((sf == of)) goto L_9476b1;
L_9475a0: /* 9475a0: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 9475a4: mov edx, edi */
  edx = edi;
/* 9475a6: or edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 9475a8: mov ecx, edx */
  ecx = edx;
/* 9475aa: or ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9475ac: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 9475b0: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 9475b3: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 9475b7: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 9475ba: lea ebx, [esi + edx*4] */
  ebx = (uint32_t)(esi + edx*4);
/* 9475bd: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 9475c1: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 9475c4: fmul dword ptr [eax + ebx*4 + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + ebx*4 + 0xb8u)));
/* 9475cb: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 9475cf: lea edx, [ebx + edx*4] */
  edx = (uint32_t)(ebx + edx*4);
/* 9475d2: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 9475d6: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 9475d8: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 9475dc: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 9475de: fmul dword ptr [eax + edx*4 + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + edx*4 + 0xb8u)));
/* 9475e5: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9475e9: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9475eb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9475ed: fstp dword ptr [eax + edx*4 + 0xb8] */
  WF32((uint32_t)(eax + edx*4 + 0xb8u), ST0); FPOP();
/* 9475f4: mov edx, edi */
  edx = edi;
/* 9475f6: or edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 9475f8: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 9475fc: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 9475ff: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 947603: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 947606: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 947609: lea ebx, [edx + esi] */
  ebx = (uint32_t)(edx + esi);
/* 94760c: fmul dword ptr [eax + ebx*4 + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + ebx*4 + 0xb8u)));
/* 947613: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 947617: lea ebp, [edx + ebx] */
  ebp = (uint32_t)(edx + ebx);
/* 94761a: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 94761e: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 947620: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 947624: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 947626: fmul dword ptr [eax + ebp*4 + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + ebp*4 + 0xb8u)));
/* 94762d: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 947631: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 947633: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 947635: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 947637: fstp dword ptr [eax + ebp*4 + 0xb8] */
  WF32((uint32_t)(eax + ebp*4 + 0xb8u), ST0); FPOP();
/* 94763e: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 947642: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 947645: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 947649: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 94764c: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 947650: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 947653: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 947655: mov ebx, dword ptr [esp + 0x4c] */
  ebx = R32((uint32_t)(esp + 0x4cu));
/* 947659: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 94765b: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 94765d: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 947661: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 947663: fstp dword ptr [eax + ecx*4 + 0xb8] */
  WF32((uint32_t)(eax + ecx*4 + 0xb8u), ST0); FPOP();
L_94766a: /* 94766a: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 94766e: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 947672: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 947675: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 947679: mov ecx, 0x10 */
  ecx = 0x10u;
/* 94767e: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 947680: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 947684: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 947688: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 94768a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 94768e: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 947691: shl edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 947693: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 947697: mov ecx, dword ptr [eax + 0x1bc] */
  ecx = R32((uint32_t)(eax + 0x1bcu));
/* 94769d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9476a0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9476a1: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9476a3: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 9476a7: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 9476ab: jle 0x947590 */
  if ((zf || sf != of)) goto L_947590;
L_9476b1: /* 9476b1: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
L_9476b5: /* 9476b5: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 9476b9: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 9476bd: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 9476c1: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 9476c5: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9476c8: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 9476cc: mov ecx, 0x10 */
  ecx = 0x10u;
/* 9476d1: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9476d3: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 9476d7: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 9476db: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9476dd: mov ecx, dword ptr [eax + 0x1bc] */
  ecx = R32((uint32_t)(eax + 0x1bcu));
/* 9476e3: shl ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 9476e5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9476e6: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9476e9: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9476eb: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 9476ef: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 9476f3: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 9476f7: mov dword ptr [esp + 0x34], ebp */
  W32((uint32_t)(esp + 0x34u), ebp);
/* 9476fb: jle 0x9474f4 */
  if ((zf || sf != of)) goto L_9474f4;
L_947701: /* 947701: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
L_947705: /* 947705: mov ecx, dword ptr [eax + 0x1bc] */
  ecx = R32((uint32_t)(eax + 0x1bcu));
/* 94770b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94770c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94770d: or ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 94770f: cmp ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 947712: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 947713: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 947714: jne 0x94781c */
  if (!zf) goto L_94781c;
L_94771a: /* 94771a: mov ecx, dword ptr [eax + 0x1c8] */
  ecx = R32((uint32_t)(eax + 0x1c8u));
/* 947720: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 947722: jne 0x94781c */
  if (!zf) goto L_94781c;
L_947728: /* 947728: fld dword ptr [eax + 0x8c] */
  { double v = F32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 94772e: fsub dword ptr [eax + 0x88] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x88u)));
/* 947734: fmul dword ptr [eax + 0x19c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x19cu)));
/* 94773a: fld dword ptr [eax + 0xac] */
  { double v = F32((uint32_t)(eax + 0xacu)); FPUSH(v); }
/* 947740: fsub dword ptr [eax + 0xa8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xa8u)));
/* 947746: fmul dword ptr [eax + 0x1a4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1a4u)));
/* 94774c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94774e: fld dword ptr [eax + 0x9c] */
  { double v = F32((uint32_t)(eax + 0x9cu)); FPUSH(v); }
/* 947754: fsub dword ptr [eax + 0x98] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x98u)));
/* 94775a: fmul dword ptr [eax + 0x1a0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1a0u)));
/* 947760: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 947762: fstp dword ptr [eax + 0x1a8] */
  WF32((uint32_t)(eax + 0x1a8u), ST0); FPOP();
/* 947768: fld dword ptr [eax + 0x78] */
  { double v = F32((uint32_t)(eax + 0x78u)); FPUSH(v); }
/* 94776b: fsub dword ptr [eax + 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x7cu)));
/* 94776e: fmul dword ptr [eax + 0x188] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x188u)));
/* 947774: fld dword ptr [eax + 0xa8] */
  { double v = F32((uint32_t)(eax + 0xa8u)); FPUSH(v); }
/* 94777a: fsub dword ptr [eax + 0xac] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xacu)));
/* 947780: fmul dword ptr [eax + 0x194] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x194u)));
/* 947786: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 947788: fld dword ptr [eax + 0x98] */
  { double v = F32((uint32_t)(eax + 0x98u)); FPUSH(v); }
/* 94778e: fsub dword ptr [eax + 0x9c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x9cu)));
/* 947794: fmul dword ptr [eax + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x190u)));
/* 94779a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94779c: fstp dword ptr [eax + 0x1ac] */
  WF32((uint32_t)(eax + 0x1acu), ST0); FPOP();
/* 9477a2: fld dword ptr [eax + 0x88] */
  { double v = F32((uint32_t)(eax + 0x88u)); FPUSH(v); }
/* 9477a8: fsub dword ptr [eax + 0x90] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x90u)));
/* 9477ae: fmul dword ptr [eax + 0x16c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x16cu)));
/* 9477b4: fld dword ptr [eax + 0xa8] */
  { double v = F32((uint32_t)(eax + 0xa8u)); FPUSH(v); }
/* 9477ba: fsub dword ptr [eax + 0xb0] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xb0u)));
/* 9477c0: fmul dword ptr [eax + 0x174] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x174u)));
/* 9477c6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9477c8: fld dword ptr [eax + 0x78] */
  { double v = F32((uint32_t)(eax + 0x78u)); FPUSH(v); }
/* 9477cb: fsub dword ptr [eax + 0x80] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x80u)));
/* 9477d1: fmul dword ptr [eax + 0x168] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x168u)));
/* 9477d7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9477d9: fstp dword ptr [eax + 0x1b0] */
  WF32((uint32_t)(eax + 0x1b0u), ST0); FPOP();
/* 9477df: fld dword ptr [eax + 0x88] */
  { double v = F32((uint32_t)(eax + 0x88u)); FPUSH(v); }
/* 9477e5: fsub dword ptr [eax + 0x94] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x94u)));
/* 9477eb: fmul dword ptr [eax + 0x12c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x12cu)));
/* 9477f1: fld dword ptr [eax + 0x98] */
  { double v = F32((uint32_t)(eax + 0x98u)); FPUSH(v); }
/* 9477f7: fsub dword ptr [eax + 0xa4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xa4u)));
/* 9477fd: fmul dword ptr [eax + 0x130] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x130u)));
/* 947803: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 947805: fld dword ptr [eax + 0x78] */
  { double v = F32((uint32_t)(eax + 0x78u)); FPUSH(v); }
/* 947808: fsub dword ptr [eax + 0x84] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x84u)));
/* 94780e: fmul dword ptr [eax + 0x128] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x128u)));
/* 947814: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 947816: fstp dword ptr [eax + 0x1b4] */
  WF32((uint32_t)(eax + 0x1b4u), ST0); FPOP();
L_94781c: /* 94781c: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94781f: ret  */
  esp += 4; SPILL(); return;
}

void f_947820(void) {
  LOAD_REGS();
L_947820: /* 947820: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 947823: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 947824: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 947828: fld dword ptr [ebx + 0x24] */
  { double v = F32((uint32_t)(ebx + 0x24u)); FPUSH(v); }
/* 94782b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94782c: fadd dword ptr [ebx + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x28u)));
/* 94782f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 947830: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 947834: xor ebp, ebp */
  ebp = 0;
/* 947836: mov dword ptr [esi + 0x1bc], ebp */
  W32((uint32_t)(esi + 0x1bcu), ebp);
/* 94783c: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 947840: mov dword ptr [esi + 0x1c8], ebp */
  W32((uint32_t)(esi + 0x1c8u), ebp);
/* 947846: mov eax, dword ptr [ebx + 0x34] */
  eax = R32((uint32_t)(ebx + 0x34u));
/* 947849: mov dword ptr [esp + 0x28], 0x3f000000 */
  W32((uint32_t)(esp + 0x28u), 0x3f000000u);
/* 947851: mov dword ptr [esp + 0x2c], 0x3f19999a */
  W32((uint32_t)(esp + 0x2cu), 0x3f19999au);
/* 947859: mov dword ptr [esp + 0x30], 0x3f1fdf3b */
  W32((uint32_t)(esp + 0x30u), 0x3f1fdf3bu);
/* 947861: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 947863: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 947866: fld dword ptr [edx + 0x80] */
  { double v = F32((uint32_t)(edx + 0x80u)); FPUSH(v); }
/* 94786c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94786d: fmul dword ptr [0xa087d0] */
  ST0 = ST0 * (F32((uint32_t)(0xa087d0u)));
/* 947873: mov edi, 1 */
  edi = 0x1u;
/* 947878: mov dword ptr [esp + 0x10], 0x358637bd */
  W32((uint32_t)(esp + 0x10u), 0x358637bdu);
/* 947880: mov dword ptr [esp + 0x3c], 0x3f800000 */
  W32((uint32_t)(esp + 0x3cu), 0x3f800000u);
/* 947888: fst dword ptr [esi + 0x1b8] */
  WF32((uint32_t)(esi + 0x1b8u), ST0);
/* 94788e: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 947894: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 947896: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 947898: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94789a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94789d: jne 0x947b6f */
  if (!zf) goto L_947b6f;
L_9478a3: /* 9478a3: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 9478a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9478a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9478a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9478aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9478ab: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 9478af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9478b0: call 0x9473b0 */
  esp -= 4; W32(esp, 0x9478b5u); SPILL(); f_9473b0(); if (g_unwind) return; RELOAD();
/* 9478b5: fst dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0);
/* 9478b9: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 9478bd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9478c0: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 9478c4: fstp dword ptr [ebx + 0x30] */
  WF32((uint32_t)(ebx + 0x30u), ST0); FPOP();
/* 9478c7: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9478cb: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 9478cf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9478d1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9478d4: jne 0x9478de */
  if (!zf) goto L_9478de;
L_9478d6: /* 9478d6: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 9478da: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
L_9478de: /* 9478de: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9478df: cmp edi, 0x32 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x32u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9478e2: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 9478e6: jg 0x947af4 */
  if ((!zf && sf == of)) goto L_947af4;
L_9478ec: /* 9478ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9478ed: call 0x9469c0 */
  esp -= 4; W32(esp, 0x9478f2u); SPILL(); f_9469c0(); if (g_unwind) return; RELOAD();
/* 9478f2: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9478f6: fcomp dword ptr [ebx + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x2cu)));
  FPOP();
/* 9478f9: mov ecx, eax */
  ecx = eax;
/* 9478fb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9478fe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 947900: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 947903: je 0x947a96 */
  if (zf) goto L_947a96;
L_947909: /* 947909: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94790d: fadd dword ptr [esi + 0x1b8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x1b8u)));
/* 947913: fcomp dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
  FPOP();
/* 947917: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 947919: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94791c: je 0x947a96 */
  if (zf) goto L_947a96;
L_947922: /* 947922: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 947924: jne 0x947a7b */
  if (!zf) goto L_947a7b;
L_94792a: /* 94792a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94792b: call 0x947410 */
  esp -= 4; W32(esp, 0x947930u); SPILL(); f_947410(); if (g_unwind) return; RELOAD();
/* 947930: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 947931: call 0x947490 */
  esp -= 4; W32(esp, 0x947936u); SPILL(); f_947490(); if (g_unwind) return; RELOAD();
/* 947936: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 947939: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 94793d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_947940: /* 947940: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 947942: mov eax, dword ptr [esi + 0x1bc] */
  eax = R32((uint32_t)(esi + 0x1bcu));
/* 947948: mov ecx, dword ptr [eax*4 + 0xaf4078] */
  ecx = R32((uint32_t)(eax*4 + 0xaf4078u));
/* 94794f: mov edi, dword ptr [ecx + ebp*4] */
  edi = R32((uint32_t)(ecx + ebp*4));
/* 947952: jne 0x947976 */
  if (!zf) goto L_947976;
L_947954: /* 947954: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 947958: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 94795e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 947960: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 947963: jne 0x947976 */
  if (!zf) goto L_947976;
L_947965: /* 947965: mov edx, dword ptr [esi + 0x1c4] */
  edx = R32((uint32_t)(esi + 0x1c4u));
/* 94796b: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 94796d: cmp edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 947970: je 0x947a39 */
  if (zf) goto L_947a39;
L_947976: /* 947976: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 947977: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 947979: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 94797d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94797e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94797f: call 0x946d80 */
  esp -= 4; W32(esp, 0x947984u); SPILL(); f_946d80(); if (g_unwind) return; RELOAD();
/* 947984: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 947987: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 947989: je 0x947a39 */
  if (zf) goto L_947a39;
L_94798f: /* 94798f: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 947995: xor eax, eax */
  eax = 0;
L_947997: /* 947997: fld dword ptr [esp + eax*4 + 0x20] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x20u)); FPUSH(v); }
/* 94799b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94799c: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94799f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9479a1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9479a3: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9479a5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9479a7: jl 0x947997 */
  if ((sf != of)) goto L_947997;
L_9479a9: /* 9479a9: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 9479af: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9479b1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9479b4: jne 0x9479e2 */
  if (!zf) goto L_9479e2;
L_9479b6: /* 9479b6: fsqrt  */
  ST0 = sqrt(ST0);
/* 9479b8: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9479be: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 9479c0: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9479c4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9479c6: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 9479ca: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9479ce: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9479d0: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 9479d4: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9479d8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9479da: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 9479de: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9479e0: jmp 0x947a02 */
  goto L_947a02;
L_9479e2: /* 9479e2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9479e4: mov dword ptr [esp + 0x20], 0x3f800000 */
  W32((uint32_t)(esp + 0x20u), 0x3f800000u);
/* 9479ec: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9479f2: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 9479fa: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
L_947a02: /* 947a02: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 947a06: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 947a08: je 0x947a15 */
  if (zf) goto L_947a15;
L_947a0a: /* 947a0a: fcom dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
/* 947a0e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 947a10: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 947a13: jp 0x947a37 */
  if (pf) goto L_947a37;
L_947a15: /* 947a15: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 947a19: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 947a1d: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 947a21: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 947a25: mov dword ptr [esp + 0x40], edi */
  W32((uint32_t)(esp + 0x40u), edi);
/* 947a29: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 947a2d: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 947a31: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 947a35: jmp 0x947a39 */
  goto L_947a39;
L_947a37: /* 947a37: fstp st(0) */
  STI(0) = ST0; FPOP();
L_947a39: /* 947a39: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 947a3a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 947a3c: jne 0x947940 */
  if (!zf) goto L_947940;
L_947a42: /* 947a42: mov eax, dword ptr [esi + 0x1c4] */
  eax = R32((uint32_t)(esi + 0x1c4u));
/* 947a48: or eax, dword ptr [esp + 0x40] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x40u)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 947a4c: cmp eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 947a4f: mov dword ptr [esi + 0x1bc], eax */
  W32((uint32_t)(esi + 0x1bcu), eax);
/* 947a55: je 0x947b6f */
  if (zf) goto L_947b6f;
L_947a5b: /* 947a5b: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 947a5f: fcomp dword ptr [esi + 0x1b8] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x1b8u)));
  FPOP();
/* 947a65: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 947a67: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 947a6a: jne 0x947b6f */
  if (!zf) goto L_947b6f;
L_947a70: /* 947a70: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 947a74: xor ebp, ebp */
  ebp = 0;
/* 947a76: jmp 0x9478a3 */
  goto L_9478a3;
L_947a7b: /* 947a7b: fld dword ptr [esi + 0x1b8] */
  { double v = F32((uint32_t)(esi + 0x1b8u)); FPUSH(v); }
/* 947a81: fmul dword ptr [0xa09ac8] */
  ST0 = ST0 * (F32((uint32_t)(0xa09ac8u)));
/* 947a87: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 947a8b: fcomp dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
  FPOP();
/* 947a8f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 947a91: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 947a94: jne 0x947afb */
  if (!zf) goto L_947afb;
L_947a96: /* 947a96: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 947a9a: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 947aa0: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 947aa4: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 947aa8: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 947aab: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 947aad: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 947ab0: xor eax, eax */
  eax = 0;
L_947ab2: /* 947ab2: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* 947ab5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 947ab6: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 947ab9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 947abb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 947abd: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 947abf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 947ac1: jl 0x947ab2 */
  if ((sf != of)) goto L_947ab2;
L_947ac3: /* 947ac3: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 947ac9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 947acb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 947ace: jne 0x947b08 */
  if (!zf) goto L_947b08;
L_947ad0: /* 947ad0: fsqrt  */
  ST0 = sqrt(ST0);
/* 947ad2: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 947ad8: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 947adc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 947ade: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 947ae0: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 947ae4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 947ae6: fstp dword ptr [ebx + 4] */
  WF32((uint32_t)(ebx + 0x4u), ST0); FPOP();
/* 947ae9: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 947aed: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 947aef: fstp dword ptr [ebx + 8] */
  WF32((uint32_t)(ebx + 0x8u), ST0); FPOP();
/* 947af2: jmp 0x947b14 */
  goto L_947b14;
L_947af4: /* 947af4: mov dword ptr [ebx + 0x30], 0x3f800000 */
  W32((uint32_t)(ebx + 0x30u), 0x3f800000u);
L_947afb: /* 947afb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 947afc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 947afd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 947afe: mov eax, 2 */
  eax = 0x2u;
/* 947b03: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 947b04: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 947b07: ret  */
  esp += 4; SPILL(); return;
L_947b08: /* 947b08: mov dword ptr [ebx], 0x3f800000 */
  W32((uint32_t)(ebx), 0x3f800000u);
/* 947b0e: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 947b11: mov dword ptr [ebx + 8], ebp */
  W32((uint32_t)(ebx + 0x8u), ebp);
L_947b14: /* 947b14: mov ecx, dword ptr [esi + 0x1bc] */
  ecx = R32((uint32_t)(esi + 0x1bcu));
/* 947b1a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 947b1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 947b1d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 947b1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 947b20: lea edi, [ebx + 0xc] */
  edi = (uint32_t)(ebx + 0xcu);
/* 947b23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 947b24: call 0x946c60 */
  esp -= 4; W32(esp, 0x947b29u); SPILL(); f_946c60(); if (g_unwind) return; RELOAD();
/* 947b29: fld dword ptr [ebx + 0x30] */
  { double v = F32((uint32_t)(ebx + 0x30u)); FPUSH(v); }
/* 947b2c: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 947b32: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 947b35: fadd dword ptr [ebx + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x28u)));
/* 947b38: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 947b3a: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 947b3c: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 947b3e: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 947b40: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 947b42: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 947b45: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 947b48: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 947b4b: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 947b4e: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 947b51: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 947b54: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 947b58: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 947b5e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 947b60: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 947b63: jnp 0x947b6f */
  if (!pf) goto L_947b6f;
L_947b65: /* 947b65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 947b66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 947b67: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 947b68: xor eax, eax */
  eax = 0;
/* 947b6a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 947b6b: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 947b6e: ret  */
  esp += 4; SPILL(); return;
L_947b6f: /* 947b6f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 947b70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 947b71: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 947b72: mov eax, 1 */
  eax = 0x1u;
/* 947b77: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 947b78: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 947b7b: ret  */
  esp += 4; SPILL(); return;
}

void f_947b80(void) {
  LOAD_REGS();
L_947b80: /* 947b80: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 947b83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 947b84: mov ebx, dword ptr [esp + 0x6c] */
  ebx = R32((uint32_t)(esp + 0x6cu));
/* 947b88: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 947b89: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 947b8a: mov esi, dword ptr [esp + 0x70] */
  esi = R32((uint32_t)(esp + 0x70u));
/* 947b8e: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 947b91: lea ebp, [esi + 0x18] */
  ebp = (uint32_t)(esi + 0x18u);
/* 947b94: xor ecx, ecx */
  ecx = 0;
/* 947b96: mov edx, ebp */
  edx = ebp;
/* 947b98: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 947b9a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 947b9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 947b9e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 947ba2: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 947ba5: xor edi, edi */
  edi = 0;
L_947ba7: /* 947ba7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 947ba8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 947ba9: call 0x947820 */
  esp -= 4; W32(esp, 0x947baeu); SPILL(); f_947820(); if (g_unwind) return; RELOAD();
/* 947bae: mov ecx, eax */
  ecx = eax;
/* 947bb0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 947bb3: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 947bb6: jne 0x947bd6 */
  if (!zf) goto L_947bd6;
L_947bb8: /* 947bb8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 947bb9: call 0x947f40 */
  esp -= 4; W32(esp, 0x947bbeu); SPILL(); f_947f40(); if (g_unwind) return; RELOAD();
/* 947bbe: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 947bc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 947bc3: je 0x947bde */
  if (zf) goto L_947bde;
L_947bc5: /* 947bc5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 947bc6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 947bc7: call 0x94ae30 */
  esp -= 4; W32(esp, 0x947bccu); SPILL(); f_94ae30(); if (g_unwind) return; RELOAD();
/* 947bcc: mov ecx, 1 */
  ecx = 0x1u;
/* 947bd1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 947bd4: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_947bd6: /* 947bd6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 947bd8: je 0x947e57 */
  if (zf) goto L_947e57;
L_947bde: /* 947bde: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 947be0: jne 0x947e48 */
  if (!zf) goto L_947e48;
L_947be6: /* 947be6: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 947be9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 947bea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 947beb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 947bec: call 0x92acd0 */
  esp -= 4; W32(esp, 0x947bf1u); SPILL(); f_92acd0(); if (g_unwind) return; RELOAD();
/* 947bf1: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 947bf4: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 947bf8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 947bf9: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 947bfd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 947bfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 947bff: call 0x92ad30 */
  esp -= 4; W32(esp, 0x947c04u); SPILL(); f_92ad30(); if (g_unwind) return; RELOAD();
/* 947c04: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 947c08: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 947c0c: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 947c10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 947c11: lea edx, [esp + 0x5c] */
  edx = (uint32_t)(esp + 0x5cu);
/* 947c15: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 947c19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 947c1a: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 947c1e: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 947c22: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 947c26: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 947c2a: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 947c2e: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 947c32: call 0x947f20 */
  esp -= 4; W32(esp, 0x947c37u); SPILL(); f_947f20(); if (g_unwind) return; RELOAD();
/* 947c37: fsqrt  */
  ST0 = sqrt(ST0);
/* 947c39: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 947c3c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 947c3d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 947c3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 947c3f: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 947c45: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 947c49: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 947c4d: fadd dword ptr [esp + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x40u)));
/* 947c51: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 947c55: fadd dword ptr [esp + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x44u)));
/* 947c59: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 947c5d: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 947c61: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 947c65: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 947c67: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 947c6d: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 947c71: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 947c77: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 947c7b: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 947c7f: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 947c85: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 947c89: call 0x92acd0 */
  esp -= 4; W32(esp, 0x947c8eu); SPILL(); f_92acd0(); if (g_unwind) return; RELOAD();
/* 947c8e: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 947c91: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 947c95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 947c96: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 947c9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 947c9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 947c9c: call 0x92ad30 */
  esp -= 4; W32(esp, 0x947ca1u); SPILL(); f_92ad30(); if (g_unwind) return; RELOAD();
/* 947ca1: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 947ca5: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 947ca9: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 947cad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 947cae: lea edx, [esp + 0x68] */
  edx = (uint32_t)(esp + 0x68u);
/* 947cb2: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 947cb6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 947cb7: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 947cbb: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 947cbf: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 947cc3: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 947cc7: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 947ccb: fstp dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0); FPOP();
/* 947ccf: call 0x947f20 */
  esp -= 4; W32(esp, 0x947cd4u); SPILL(); f_947f20(); if (g_unwind) return; RELOAD();
/* 947cd4: fsqrt  */
  ST0 = sqrt(ST0);
/* 947cd6: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 947cdc: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 947ce0: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 947ce4: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 947ce8: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 947cec: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 947cf0: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 947cf4: xor eax, eax */
  eax = 0;
/* 947cf6: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 947cfa: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 947cfe: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 947d00: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 947d06: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 947d0a: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 947d10: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 947d14: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 947d18: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 947d1e: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 947d22: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 947d26: fsub dword ptr [esp + 0x40] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x40u)));
/* 947d2a: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 947d2e: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 947d32: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 947d36: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 947d3a: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 947d3e: fsub dword ptr [esp + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x48u)));
/* 947d42: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 947d46: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 947d4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_947d50: /* 947d50: fld dword ptr [esp + eax*4 + 0x1c] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x1cu)); FPUSH(v); }
/* 947d54: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 947d55: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 947d58: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 947d5a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 947d5c: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 947d5e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 947d60: jl 0x947d50 */
  if ((sf != of)) goto L_947d50;
L_947d62: /* 947d62: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 947d68: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 947d6a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 947d6d: jne 0x947d9b */
  if (!zf) goto L_947d9b;
L_947d6f: /* 947d6f: fsqrt  */
  ST0 = sqrt(ST0);
/* 947d71: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 947d77: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 947d79: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 947d7d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 947d7f: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 947d83: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 947d87: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 947d89: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 947d8d: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 947d91: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 947d93: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 947d97: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 947d99: jmp 0x947dbb */
  goto L_947dbb;
L_947d9b: /* 947d9b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 947d9d: mov dword ptr [esp + 0x1c], 0x3f800000 */
  W32((uint32_t)(esp + 0x1cu), 0x3f800000u);
/* 947da5: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 947dab: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 947db3: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
L_947dbb: /* 947dbb: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 947dbf: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 947dc5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 947dc7: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 947dca: jp 0x947dd8 */
  if (pf) goto L_947dd8;
L_947dcc: /* 947dcc: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 947dd0: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 947dd4: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_947dd8: /* 947dd8: lea eax, [edi + edi] */
  eax = (uint32_t)(edi + edi);
/* 947ddb: mov ecx, 1 */
  ecx = 0x1u;
/* 947de0: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 947de2: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 947de6: fild dword ptr [esp + 0x74] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 947dea: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 947dee: fmul dword ptr [0xa110dc] */
  ST0 = ST0 * (F32((uint32_t)(0xa110dcu)));
L_947df4: /* 947df4: fstp dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0); FPOP();
/* 947df8: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 947dfc: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 947e00: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 947e04: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 947e07: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 947e0b: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 947e0f: fstp dword ptr [ebp + 4] */
  WF32((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* 947e12: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 947e16: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 947e1a: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 947e1d: mov dword ptr [esi + 0x2c], edx */
  W32((uint32_t)(esi + 0x2cu), edx);
/* 947e20: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 947e24: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 947e2a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 947e2c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 947e2f: jne 0x947e3c */
  if (!zf) goto L_947e3c;
L_947e31: /* 947e31: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 947e35: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 947e39: fstp dword ptr [esi + 0x2c] */
  WF32((uint32_t)(esi + 0x2cu), ST0); FPOP();
L_947e3c: /* 947e3c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 947e3d: cmp edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 947e40: jl 0x947ba7 */
  if ((sf != of)) goto L_947ba7;
L_947e46: /* 947e46: jmp 0x947ebb */
  goto L_947ebb;
L_947e48: /* 947e48: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 947e4b: jne 0x947dd8 */
  if (!zf) goto L_947dd8;
L_947e4d: /* 947e4d: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 947e51: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 947e55: jmp 0x947df4 */
  goto L_947df4;
L_947e57: /* 947e57: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 947e59: je 0x947eae */
  if (zf) goto L_947eae;
L_947e5b: /* 947e5b: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 947e5f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 947e63: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 947e65: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 947e69: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 947e6c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 947e6e: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 947e72: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 947e75: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 947e77: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 947e7b: fld dword ptr [0xa07ebc] */
  { double v = F32((uint32_t)(0xa07ebcu)); FPUSH(v); }
/* 947e81: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 947e83: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 947e85: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 947e87: fadd dword ptr [esi + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xcu)));
/* 947e8a: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 947e8d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 947e8f: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 947e92: fadd dword ptr [esi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x10u)));
/* 947e95: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 947e98: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 947e9b: fadd dword ptr [esi + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x14u)));
/* 947e9e: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 947ea1: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 947ea4: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 947ea7: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 947ea9: fstp dword ptr [esi + 0x30] */
  WF32((uint32_t)(esi + 0x30u), ST0); FPOP();
/* 947eac: fstp st(0) */
  STI(0) = ST0; FPOP();
L_947eae: /* 947eae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 947eaf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 947eb0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 947eb1: mov eax, 1 */
  eax = 0x1u;
/* 947eb6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 947eb7: add esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 947eba: ret  */
  esp += 4; SPILL(); return;
L_947ebb: /* 947ebb: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 947ebf: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 947ec3: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 947ec7: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 947ecb: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 947ecf: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 947ed2: fdivr dword ptr [esp + 0x78] */
  ST0 = (F32((uint32_t)(esp + 0x78u))) / ST0;
/* 947ed6: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 947eda: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 947edd: mov dword ptr [esi + 0x30], 0 */
  W32((uint32_t)(esi + 0x30u), 0x0u);
/* 947ee4: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 947ee6: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 947ee9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 947eea: xor eax, eax */
  eax = 0;
/* 947eec: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 947ef0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 947ef2: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 947ef6: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 947ef9: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 947efd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 947eff: fadd dword ptr [esp + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x40u)));
/* 947f03: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 947f06: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 947f0a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 947f0c: fadd dword ptr [esp + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x44u)));
/* 947f10: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 947f13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 947f14: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 947f15: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 947f17: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 947f18: add esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 947f1b: ret  */
  esp += 4; SPILL(); return;
}

void f_947f20(void) {
  LOAD_REGS();
L_947f20: /* 947f20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 947f24: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 947f28: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 947f2b: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 947f2e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 947f31: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 947f34: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 947f36: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 947f38: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 947f3a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 947f3c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_947f40(void) {
  LOAD_REGS();
L_947f40: /* 947f40: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 947f44: cmp dword ptr [ecx + 0x1bc], 0xf */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1bcu))); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 947f4b: jne 0x947f9f */
  if (!zf) goto L_947f9f;
L_947f4d: /* 947f4d: fld dword ptr [ecx + 0x1a8] */
  { double v = F32((uint32_t)(ecx + 0x1a8u)); FPUSH(v); }
/* 947f53: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 947f59: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 947f5b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 947f5e: jne 0x947f9f */
  if (!zf) goto L_947f9f;
L_947f60: /* 947f60: fld dword ptr [ecx + 0x1ac] */
  { double v = F32((uint32_t)(ecx + 0x1acu)); FPUSH(v); }
/* 947f66: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 947f6c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 947f6e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 947f71: jne 0x947f9f */
  if (!zf) goto L_947f9f;
L_947f73: /* 947f73: fld dword ptr [ecx + 0x1b0] */
  { double v = F32((uint32_t)(ecx + 0x1b0u)); FPUSH(v); }
/* 947f79: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 947f7f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 947f81: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 947f84: jne 0x947f9f */
  if (!zf) goto L_947f9f;
L_947f86: /* 947f86: fld dword ptr [ecx + 0x1b4] */
  { double v = F32((uint32_t)(ecx + 0x1b4u)); FPUSH(v); }
/* 947f8c: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 947f92: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 947f94: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 947f97: jne 0x947f9f */
  if (!zf) goto L_947f9f;
L_947f99: /* 947f99: mov eax, 1 */
  eax = 0x1u;
/* 947f9e: ret  */
  esp += 4; SPILL(); return;
L_947f9f: /* 947f9f: xor eax, eax */
  eax = 0;
/* 947fa1: ret  */
  esp += 4; SPILL(); return;
}

void f_947fb0(void) {
  LOAD_REGS();
L_947fb0: /* 947fb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 947fb4: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 947fba: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 947fbd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 947fbe: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 947fc1: xor eax, eax */
  eax = 0;
L_947fc3: /* 947fc3: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 947fc6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 947fc7: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 947fca: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 947fcc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 947fce: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 947fd0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 947fd2: jl 0x947fc3 */
  if ((sf != of)) goto L_947fc3;
L_947fd4: /* 947fd4: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 947fda: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 947fdc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 947fdf: jne 0x947fff */
  if (!zf) goto L_947fff;
L_947fe1: /* 947fe1: fsqrt  */
  ST0 = sqrt(ST0);
/* 947fe3: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 947fe9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 947feb: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 947fed: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 947fef: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 947ff1: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 947ff4: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 947ff7: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 947ffa: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 947ffd: jmp 0x948015 */
  goto L_948015;
L_947fff: /* 947fff: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 948001: mov dword ptr [esi], 0x3f800000 */
  W32((uint32_t)(esi), 0x3f800000u);
/* 948007: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 94800e: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
L_948015: /* 948015: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 948016: xor ecx, ecx */
  ecx = 0;
/* 948018: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 94801b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 94801d: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 948021: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 948024: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 948025: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 948026: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 948029: call 0x9472e0 */
  esp -= 4; W32(esp, 0x94802eu); SPILL(); f_9472e0(); if (g_unwind) return; RELOAD();
/* 94802e: fst dword ptr [esi + 0x30] */
  WF32((uint32_t)(esi + 0x30u), ST0);
/* 948031: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 948034: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 948037: fadd dword ptr [esi + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x24u)));
/* 94803a: fadd dword ptr [esi + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x28u)));
/* 94803d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94803f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 948041: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 948043: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 948046: jne 0x94809b */
  if (!zf) goto L_94809b;
L_948048: /* 948048: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 94804c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 94804f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 948053: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 948056: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 94805a: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 94805d: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 948060: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 948066: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 94806a: fadd dword ptr [esi + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x28u)));
/* 94806d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94806f: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 948071: fadd dword ptr [esi + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xcu)));
/* 948074: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 948077: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 948079: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 94807c: fadd dword ptr [esi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x10u)));
/* 94807f: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 948082: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 948085: fadd dword ptr [esi + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x14u)));
/* 948088: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 94808b: mov dword ptr [eax + 0x10], 0 */
  W32((uint32_t)(eax + 0x10u), 0x0u);
/* 948092: xor eax, eax */
  eax = 0;
/* 948094: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 948095: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 948098: ret 8 */
  esp += 12; SPILL(); return;
L_94809b: /* 94809b: mov eax, 1 */
  eax = 0x1u;
/* 9480a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9480a1: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9480a4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9480b0(void) {
  LOAD_REGS();
L_9480b0: /* 9480b0: sub esp, 0x4d0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4d0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9480b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9480b7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9480b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9480b9: mov esi, dword ptr [esp + 0x4e0] */
  esi = R32((uint32_t)(esp + 0x4e0u));
/* 9480c0: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 9480c3: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 9480c6: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 9480c9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9480cb: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 9480ce: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 9480d1: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 9480d4: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 9480d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9480d9: mov edi, 1 */
  edi = 0x1u;
/* 9480de: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9480e0: xor ecx, ecx */
  ecx = 0;
/* 9480e2: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 9480e5: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 9480e9: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 9480eb: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 9480ef: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9480f1: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 9480f5: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 9480f8: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 9480fc: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 948102: fabs  */
  ST0 = fabs(ST0);
/* 948104: fld dword ptr [edx + 0x80] */
  { double v = F32((uint32_t)(edx + 0x80u)); FPUSH(v); }
/* 94810a: fmul dword ptr [0xa0892c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0892cu)));
/* 948110: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 948114: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948116: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 94811a: jmp 0x948120 */
  goto L_948120;
L_94811c: /* 94811c: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_948120: /* 948120: cmp edi, -2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 948123: jle 0x94821e */
  if ((zf || sf != of)) goto L_94821e;
L_948129: /* 948129: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94812b: jne 0x94821e */
  if (!zf) goto L_94821e;
L_948131: /* 948131: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 948135: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 948138: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 94813c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94813d: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 948141: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 948145: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 948146: push 0x21 */
  { uint32_t v = 0x21u; esp -= 4; W32(esp, v); }
/* 948148: fadd dword ptr [esi + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x24u)));
/* 94814b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94814c: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 948150: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 948153: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 948154: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 948155: call 0x94c320 */
  esp -= 4; W32(esp, 0x94815au); SPILL(); f_94c320(); if (g_unwind) return; RELOAD();
/* 94815a: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 94815e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 948161: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 948163: je 0x948208 */
  if (zf) goto L_948208;
L_948169: /* 948169: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 94816d: jmp 0x948173 */
  goto L_948173;
L_94816f: /* 94816f: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
L_948173: /* 948173: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 948177: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 948179: jne 0x94820c */
  if (!zf) goto L_94820c;
L_94817f: /* 94817f: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 948183: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 948186: fsub dword ptr [esi + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x28u)));
/* 948189: lea edx, [esp + ecx*4 + 0x30] */
  edx = (uint32_t)(esp + ecx*4 + 0x30u);
/* 94818d: fild dword ptr [esp + 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 948191: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 948192: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 948196: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 948197: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 94819b: mov edx, 0x32 */
  edx = 0x32u;
/* 9481a0: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 9481a2: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 9481a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9481a6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9481a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9481a9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9481ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9481ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9481ae: call 0x94c320 */
  esp -= 4; W32(esp, 0x9481b3u); SPILL(); f_94c320(); if (g_unwind) return; RELOAD();
/* 9481b3: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 9481b7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9481ba: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9481bc: jne 0x9481cd */
  if (!zf) goto L_9481cd;
L_9481be: /* 9481be: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9481c2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9481c4: jne 0x9481fa */
  if (!zf) goto L_9481fa;
L_9481c6: /* 9481c6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9481c7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9481cb: jmp 0x9481fa */
  goto L_9481fa;
L_9481cd: /* 9481cd: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9481d1: lea ecx, [edx + eax] */
  ecx = (uint32_t)(edx + eax);
/* 9481d4: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 9481d7: lea ebp, [esp + ecx*4 + 0x30] */
  ebp = (uint32_t)(esp + ecx*4 + 0x30u);
/* 9481db: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9481dc: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 9481e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9481e1: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 9481e4: lea ecx, [esp + ecx*4 + 0x38] */
  ecx = (uint32_t)(esp + ecx*4 + 0x38u);
/* 9481e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9481e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9481ea: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 9481ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9481ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9481f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9481f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9481f2: call 0x94a040 */
  esp -= 4; W32(esp, 0x9481f7u); SPILL(); f_94a040(); if (g_unwind) return; RELOAD();
/* 9481f7: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9481fa: /* 9481fa: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 9481fb: cmp edi, -2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9481fe: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 948202: jg 0x94816f */
  if ((!zf && sf == of)) goto L_94816f;
L_948208: /* 948208: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
L_94820c: /* 94820c: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 948210: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 948211: cmp eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 948214: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 948218: jg 0x94811c */
  if ((!zf && sf == of)) goto L_94811c;
L_94821e: /* 94821e: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 948221: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 948227: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 948229: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94822c: jne 0x948235 */
  if (!zf) goto L_948235;
L_94822e: /* 94822e: mov dword ptr [esi + 0x30], 0 */
  W32((uint32_t)(esi + 0x30u), 0x0u);
L_948235: /* 948235: xor ebx, ebx */
  ebx = 0;
/* 948237: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 948239: jle 0x9482a1 */
  if ((zf || sf != of)) goto L_9482a1;
L_94823b: /* 94823b: mov edi, dword ptr [esp + 0x4e8] */
  edi = R32((uint32_t)(esp + 0x4e8u));
/* 948242: xor edx, edx */
  edx = 0;
/* 948244: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
L_948247: /* 948247: cmp ebx, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94824a: jge 0x948293 */
  if ((sf == of)) goto L_948293;
L_94824c: /* 94824c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 94824f: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 948251: mov dword ptr [eax + edx + 0xc], ebp */
  W32((uint32_t)(eax + edx + 0xcu), ebp);
/* 948255: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* 948258: lea eax, [eax + edx + 0xc] */
  eax = (uint32_t)(eax + edx + 0xcu);
/* 94825c: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* 94825f: mov ebp, dword ptr [esi + 8] */
  ebp = R32((uint32_t)(esi + 0x8u));
/* 948262: mov dword ptr [eax + 8], ebp */
  W32((uint32_t)(eax + 0x8u), ebp);
/* 948265: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 948268: mov ebp, dword ptr [ecx - 8] */
  ebp = R32((uint32_t)(ecx + 0xfffffff8u));
/* 94826b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94826d: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 94826f: mov ebp, dword ptr [ecx - 4] */
  ebp = R32((uint32_t)(ecx + 0xfffffffcu));
/* 948272: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* 948275: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 948277: mov dword ptr [eax + 8], ebp */
  W32((uint32_t)(eax + 0x8u), ebp);
/* 94827a: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 94827d: mov ebp, dword ptr [esi + 0x30] */
  ebp = R32((uint32_t)(esi + 0x30u));
/* 948280: mov dword ptr [eax + edx + 0x18], ebp */
  W32((uint32_t)(eax + edx + 0x18u), ebp);
/* 948284: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 948288: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 948289: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94828c: add edx, 0x28 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94828f: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 948291: jl 0x948247 */
  if ((sf != of)) goto L_948247;
L_948293: /* 948293: mov dword ptr [edi + 0xc], ebx */
  W32((uint32_t)(edi + 0xcu), ebx);
/* 948296: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 948297: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 948298: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 948299: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94829a: add esp, 0x4d0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4d0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9482a0: ret  */
  esp += 4; SPILL(); return;
L_9482a1: /* 9482a1: mov ecx, dword ptr [esp + 0x4e8] */
  ecx = R32((uint32_t)(esp + 0x4e8u));
/* 9482a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9482a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9482aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9482ab: mov dword ptr [ecx + 0xc], ebx */
  W32((uint32_t)(ecx + 0xcu), ebx);
/* 9482ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9482af: add esp, 0x4d0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4d0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9482b5: ret  */
  esp += 4; SPILL(); return;
}

void f_9482c0(void) {
  LOAD_REGS();
L_9482c0: /* 9482c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9482c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9482c6: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 9482c9: sub esp, 0x208 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9482cf: cmp byte ptr [edx], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9482d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9482d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9482d4: mov edi, dword ptr [eax + 0x14] */
  edi = R32((uint32_t)(eax + 0x14u));
/* 9482d7: jne 0x9482f7 */
  if (!zf) goto L_9482f7;
L_9482d9: /* 9482d9: mov edx, dword ptr [esp + 0x218] */
  edx = R32((uint32_t)(esp + 0x218u));
/* 9482e0: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 9482e3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9482e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9482e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9482e6: call 0x94c430 */
  esp -= 4; W32(esp, 0x9482ebu); SPILL(); f_94c430(); if (g_unwind) return; RELOAD();
/* 9482eb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9482ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9482ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9482f0: add esp, 0x208 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9482f6: ret  */
  esp += 4; SPILL(); return;
L_9482f7: /* 9482f7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 9482fa: mov esi, dword ptr [edx + 0x40] */
  esi = R32((uint32_t)(edx + 0x40u));
/* 9482fd: cmp byte ptr [esi], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 948300: jne 0x94831d */
  if (!zf) goto L_94831d;
L_948302: /* 948302: mov eax, dword ptr [esp + 0x218] */
  eax = R32((uint32_t)(esp + 0x218u));
/* 948309: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94830a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94830b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94830c: call 0x94c430 */
  esp -= 4; W32(esp, 0x948311u); SPILL(); f_94c430(); if (g_unwind) return; RELOAD();
/* 948311: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 948314: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 948315: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 948316: add esp, 0x208 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94831c: ret  */
  esp += 4; SPILL(); return;
L_94831d: /* 94831d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94831f: mov esi, dword ptr [esp + 0x218] */
  esi = R32((uint32_t)(esp + 0x218u));
/* 948326: jne 0x94835c */
  if (!zf) goto L_94835c;
L_948328: /* 948328: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 948329: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 94832d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94832e: lea edi, [esp + 0x10] */
  edi = (uint32_t)(esp + 0x10u);
/* 948332: call 0x9468e0 */
  esp -= 4; W32(esp, 0x948337u); SPILL(); f_9468e0(); if (g_unwind) return; RELOAD();
/* 948337: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94833a: /* 94833a: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* 94833e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94833f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 948340: call 0x947b80 */
  esp -= 4; W32(esp, 0x948345u); SPILL(); f_947b80(); if (g_unwind) return; RELOAD();
/* 948345: fld dword ptr [edi + 0x30] */
  { double v = F32((uint32_t)(edi + 0x30u)); FPUSH(v); }
/* 948348: fcomp dword ptr [edi + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x2cu)));
  FPOP();
/* 94834b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94834e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 948350: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 948353: jp 0x948370 */
  if (pf) goto L_948370;
L_948355: /* 948355: mov eax, 1 */
  eax = 0x1u;
/* 94835a: jmp 0x948372 */
  goto L_948372;
L_94835c: /* 94835c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94835d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94835e: call 0x947fb0 */
  esp -= 4; W32(esp, 0x948363u); SPILL(); f_947fb0(); if (g_unwind) return; RELOAD();
/* 948363: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 948365: jne 0x94833a */
  if (!zf) goto L_94833a;
L_948367: /* 948367: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 948368: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 948369: add esp, 0x208 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94836f: ret  */
  esp += 4; SPILL(); return;
L_948370: /* 948370: xor eax, eax */
  eax = 0;
L_948372: /* 948372: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 948375: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 94837c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 94837e: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 948381: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 948384: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 948387: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 94838a: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 94838d: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 948390: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 948392: je 0x9483f3 */
  if (zf) goto L_9483f3;
L_948394: /* 948394: cmp dword ptr [esi + 8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 948398: jl 0x9483f3 */
  if ((sf != of)) goto L_9483f3;
L_94839a: /* 94839a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94839b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94839c: call 0x9480b0 */
  esp -= 4; W32(esp, 0x9483a1u); SPILL(); f_9480b0(); if (g_unwind) return; RELOAD();
/* 9483a1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 9483a4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9483a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9483a9: jne 0x9483f0 */
  if (!zf) goto L_9483f0;
L_9483ab: /* 9483ab: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9483ae: mov dword ptr [esi + 0xc], 1 */
  W32((uint32_t)(esi + 0xcu), 0x1u);
/* 9483b5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 9483b7: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 9483ba: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 9483bd: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 9483c0: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 9483c3: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9483c6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 9483c9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9483cc: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 9483cf: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 9483d1: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 9483d4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 9483d7: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 9483da: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 9483dd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9483e0: mov dword ptr [eax + 0x18], 0 */
  W32((uint32_t)(eax + 0x18u), 0x0u);
/* 9483e7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9483ea: mov word ptr [ecx + 0x1c], 0 */
  W16((uint32_t)(ecx + 0x1cu), 0x0u);
L_9483f0: /* 9483f0: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
L_9483f3: /* 9483f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9483f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9483f5: add esp, 0x208 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9483fb: ret  */
  esp += 4; SPILL(); return;
}

void f_948400(void) {
  LOAD_REGS();
L_948400: /* 948400: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 948404: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 948408: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 948409: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94840a: call 0x9482c0 */
  esp -= 4; W32(esp, 0x94840fu); SPILL(); f_9482c0(); if (g_unwind) return; RELOAD();
/* 94840f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 948412: ret 8 */
  esp += 12; SPILL(); return;
}

void f_948420(void) {
  LOAD_REGS();
L_948420: /* 948420: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 948423: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 948424: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 948425: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 948426: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 948427: mov edi, dword ptr [esp + 0x60] */
  edi = R32((uint32_t)(esp + 0x60u));
/* 94842b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 94842d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94842e: call 0x928730 */
  esp -= 4; W32(esp, 0x948433u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 948433: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 948436: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 948437: mov ebx, eax */
  ebx = eax;
/* 948439: call 0x928730 */
  esp -= 4; W32(esp, 0x94843eu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 94843e: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 948440: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 948441: mov esi, eax */
  esi = eax;
/* 948443: call 0x928610 */
  esp -= 4; W32(esp, 0x948448u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 948448: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 94844c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 94844f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 948450: call 0x928610 */
  esp -= 4; W32(esp, 0x948455u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 948455: fadd dword ptr [esp + 0x60] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x60u)));
/* 948459: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 94845b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94845c: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 948460: call 0x9287f0 */
  esp -= 4; W32(esp, 0x948465u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 948465: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 948468: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 948469: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 94846d: call 0x9287f0 */
  esp -= 4; W32(esp, 0x948472u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 948472: mov ebp, dword ptr [esp + 0x64] */
  ebp = R32((uint32_t)(esp + 0x64u));
/* 948476: lea edi, [ebx + 0x20] */
  edi = (uint32_t)(ebx + 0x20u);
/* 948479: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 94847d: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 948480: xor ecx, ecx */
  ecx = 0;
/* 948482: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 948485: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 948488: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 94848b: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 94848e: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 948490: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 948492: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948494: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 948497: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 94849a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94849c: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 9484a0: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 9484a2: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 9484a5: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 9484a8: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 9484ab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9484ad: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 9484b0: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 9484b3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9484b5: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 9484b9: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 9484bc: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 9484bf: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 9484c1: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 9484c4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9484c6: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 9484c9: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 9484cc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9484ce: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 9484d2: fld dword ptr [ebx + 0x30] */
  { double v = F32((uint32_t)(ebx + 0x30u)); FPUSH(v); }
/* 9484d5: fsub dword ptr [esi + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x30u)));
/* 9484d8: fld dword ptr [ebx + 0x34] */
  { double v = F32((uint32_t)(ebx + 0x34u)); FPUSH(v); }
/* 9484db: fsub dword ptr [esi + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x34u)));
/* 9484de: fld dword ptr [ebx + 0x38] */
  { double v = F32((uint32_t)(ebx + 0x38u)); FPUSH(v); }
/* 9484e1: fsub dword ptr [esi + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x38u)));
/* 9484e4: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9484e6: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 9484e8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9484ea: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 9484ed: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9484ef: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9484f1: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 9484f4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9484f6: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 9484fa: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9484fc: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 9484ff: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 948501: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 948504: mov ebx, dword ptr [esp + 0x60] */
  ebx = R32((uint32_t)(esp + 0x60u));
/* 948508: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 94850c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94850d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94850f: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 948513: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 948515: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 948516: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 948519: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 94851d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94851e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948520: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 948524: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 948527: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 948529: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 94852c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94852e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 948530: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 948533: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948535: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 948539: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* 94853c: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 94853f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 948540: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 948541: fchs  */
  ST0 = -ST0;
/* 948543: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 948546: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 94854a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94854b: lea edx, [esp + 0x5c] */
  edx = (uint32_t)(esp + 0x5cu);
/* 94854f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 948550: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 948551: call 0x94d3e0 */
  esp -= 4; W32(esp, 0x948556u); SPILL(); f_94d3e0(); if (g_unwind) return; RELOAD();
/* 948556: fstp dword ptr [esp + 0x84] */
  WF32((uint32_t)(esp + 0x84u), ST0); FPOP();
/* 94855d: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 948561: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 948564: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 948568: fadd dword ptr [esp + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x44u)));
/* 94856c: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 948570: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 948574: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 948578: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 94857c: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 948580: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 948584: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 948588: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94858a: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 94858e: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 948592: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 948596: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 94859a: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 94859e: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 9485a2: fst dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0);
/* 9485a6: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 9485aa: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9485ae: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 9485b2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9485b4: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9485b8: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 9485bc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9485be: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9485c2: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 9485c6: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9485c8: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 9485ca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9485cc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9485cf: jne 0x948607 */
  if (!zf) goto L_948607;
L_9485d1: /* 9485d1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9485d3: fsqrt  */
  ST0 = sqrt(ST0);
/* 9485d5: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 9485db: fst dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0);
/* 9485df: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 9485e1: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9485e5: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 9485e9: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 9485ed: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9485f1: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 9485f5: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 9485f9: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9485fd: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 948601: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 948605: jmp 0x94863f */
  goto L_94863f;
L_948607: /* 948607: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 94860b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94860d: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 948610: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 948611: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 948615: fchs  */
  ST0 = -ST0;
/* 948617: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 94861b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94861c: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* 94861f: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 948623: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 948624: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 948627: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 948628: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 948629: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94862a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 94862d: lea edx, [esp + 0x50] */
  edx = (uint32_t)(esp + 0x50u);
/* 948631: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 948632: lea eax, [esp + 0x60] */
  eax = (uint32_t)(esp + 0x60u);
/* 948636: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 948637: call 0x94c6f0 */
  esp -= 4; W32(esp, 0x94863cu); SPILL(); f_94c6f0(); if (g_unwind) return; RELOAD();
/* 94863c: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94863f: /* 94863f: fld dword ptr [ebx + 0x10] */
  { double v = F32((uint32_t)(ebx + 0x10u)); FPUSH(v); }
/* 948642: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 948646: fadd dword ptr [ecx + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x2cu)));
/* 948649: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94864b: fst dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0);
/* 94864f: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 948653: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 948655: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 948658: jp 0x9486ba */
  if (pf) goto L_9486ba;
L_94865a: /* 94865a: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 94865d: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 948661: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 948665: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 948669: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94866b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94866c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94866d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94866e: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 948672: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 948673: xor eax, eax */
  eax = 0;
/* 948675: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 948679: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94867a: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94867e: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 948681: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 948683: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
/* 948686: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 948689: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 94868d: fadd dword ptr [esp + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x44u)));
/* 948691: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 948693: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 948694: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 948698: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 94869c: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 9486a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9486a1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9486a3: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* 9486a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9486a8: fadd dword ptr [esp + 0x58] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x58u)));
/* 9486ac: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 9486b0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9486b2: call 0x92f5a0 */
  esp -= 4; W32(esp, 0x9486b7u); SPILL(); f_92f5a0(); if (g_unwind) return; RELOAD();
/* 9486b7: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9486ba: /* 9486ba: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 9486bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9486be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9486bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9486c0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9486c1: add esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9486c4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9486d0(void) {
  LOAD_REGS();
L_9486d0: /* 9486d0: sub esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9486d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9486d4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9486d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9486d6: mov esi, dword ptr [esp + 0x68] */
  esi = R32((uint32_t)(esp + 0x68u));
/* 9486da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9486db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9486dc: call 0x9287f0 */
  esp -= 4; W32(esp, 0x9486e1u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 9486e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9486e2: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 9486e6: call 0x928730 */
  esp -= 4; W32(esp, 0x9486ebu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 9486eb: mov esi, dword ptr [esp + 0x70] */
  esi = R32((uint32_t)(esp + 0x70u));
/* 9486ef: mov ebp, eax */
  ebp = eax;
/* 9486f1: lea edi, [ebp + 0x30] */
  edi = (uint32_t)(ebp + 0x30u);
/* 9486f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9486f5: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* 9486f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9486fa: mov ecx, esi */
  ecx = esi;
/* 9486fc: call 0x933ec0 */
  esp -= 4; W32(esp, 0x948701u); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 948701: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 948702: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 948706: call 0x92e280 */
  esp -= 4; W32(esp, 0x94870bu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 94870b: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 94870f: lea ebx, [ebp + 0x10] */
  ebx = (uint32_t)(ebp + 0x10u);
/* 948712: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 948713: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 948717: call 0x92e280 */
  esp -= 4; W32(esp, 0x94871cu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 94871c: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 948720: lea eax, [ebp + 0x20] */
  eax = (uint32_t)(ebp + 0x20u);
/* 948723: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 948724: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 948728: call 0x92e280 */
  esp -= 4; W32(esp, 0x94872du); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 94872d: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 948731: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 948732: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 948736: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 948737: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 94873b: call 0x933ec0 */
  esp -= 4; W32(esp, 0x948740u); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 948740: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 948741: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 948745: call 0x92e280 */
  esp -= 4; W32(esp, 0x94874au); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 94874a: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 94874e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94874f: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 948753: call 0x92e280 */
  esp -= 4; W32(esp, 0x948758u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 948758: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 94875c: lea eax, [ebp + 0x20] */
  eax = (uint32_t)(ebp + 0x20u);
/* 94875f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 948760: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 948764: call 0x92e280 */
  esp -= 4; W32(esp, 0x948769u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 948769: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 94876d: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 948771: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 948775: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 948776: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 94877a: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 94877e: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 948782: fsub dword ptr [esp + 0x40] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x40u)));
/* 948786: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 94878a: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 94878e: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 948792: call 0x92e280 */
  esp -= 4; W32(esp, 0x948797u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 948797: fsqrt  */
  ST0 = sqrt(ST0);
/* 948799: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 94879d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9487a3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9487a5: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9487a8: jnp 0x9487d4 */
  if (!pf) goto L_9487d4;
L_9487aa: /* 9487aa: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9487b0: fdiv dword ptr [esp + 0x18] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x18u)));
/* 9487b4: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 9487b8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9487ba: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 9487be: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9487c2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9487c4: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9487c8: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 9487cc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9487ce: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 9487d2: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9487d4: /* 9487d4: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9487d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9487d9: call 0x945810 */
  esp -= 4; W32(esp, 0x9487deu); SPILL(); f_945810(); if (g_unwind) return; RELOAD();
/* 9487de: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9487e2: mov edi, eax */
  edi = eax;
/* 9487e4: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 9487e7: xor ebx, ebx */
  ebx = 0;
/* 9487e9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9487eb: mov dword ptr [esp + 0x14], 0xe0ad78ec */
  W32((uint32_t)(esp + 0x14u), 0xe0ad78ecu);
/* 9487f3: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9487f7: jle 0x948915 */
  if ((zf || sf != of)) goto L_948915;
L_9487fd: /* 9487fd: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
L_948801: /* 948801: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 948804: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 948808: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94880a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94880b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94880c: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 94880e: call 0x94e620 */
  esp -= 4; W32(esp, 0x948813u); SPILL(); f_94e620(); if (g_unwind) return; RELOAD();
/* 948813: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 948817: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 948819: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94881c: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 948820: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 948823: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948825: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 948829: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 94882c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94882e: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 948832: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 948836: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 948838: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 94883c: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 94883f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948841: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 948845: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 948848: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94884a: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 94884d: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 948850: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 948853: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 948856: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948858: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 94885a: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 94885c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94885e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 948860: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 948864: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 948868: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94886a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94886d: je 0x94893e */
  if (zf) goto L_94893e;
L_948873: /* 948873: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 948877: fabs  */
  ST0 = fabs(ST0);
/* 948879: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 94887f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 948881: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 948884: jp 0x94889f */
  if (pf) goto L_94889f;
L_948886: /* 948886: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 94888c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94888e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 948891: jne 0x9488fa */
  if (!zf) goto L_9488fa;
L_948893: /* 948893: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 948894: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 948895: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 948896: xor eax, eax */
  eax = 0;
/* 948898: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 948899: add esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94889c: ret 0x10 */
  esp += 20; SPILL(); return;
L_94889f: /* 94889f: fdiv dword ptr [esp + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x1cu)));
/* 9488a3: fchs  */
  ST0 = -ST0;
/* 9488a5: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9488a9: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 9488af: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9488b1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9488b4: jp 0x9488d6 */
  if (pf) goto L_9488d6;
L_9488b6: /* 9488b6: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 9488ba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9488bc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9488bf: je 0x94893e */
  if (zf) goto L_94893e;
L_9488c1: /* 9488c1: fcom dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
/* 9488c5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9488c7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9488ca: jne 0x9488f8 */
  if (!zf) goto L_9488f8;
L_9488cc: /* 9488cc: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 9488d0: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 9488d4: jmp 0x9488fa */
  goto L_9488fa;
L_9488d6: /* 9488d6: fcom qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
/* 9488dc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9488de: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9488e1: jnp 0x94893e */
  if (!pf) goto L_94893e;
L_9488e3: /* 9488e3: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 9488e7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9488e9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9488ec: jp 0x9488f8 */
  if (pf) goto L_9488f8;
L_9488ee: /* 9488ee: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9488f2: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 9488f6: jmp 0x9488fa */
  goto L_9488fa;
L_9488f8: /* 9488f8: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9488fa: /* 9488fa: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9488fe: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 948901: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 948902: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 948905: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 948907: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 94890b: jl 0x948801 */
  if ((sf != of)) goto L_948801;
L_948911: /* 948911: mov esi, dword ptr [esp + 0x70] */
  esi = R32((uint32_t)(esp + 0x70u));
L_948915: /* 948915: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 948919: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 94891f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 948921: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 948924: jne 0x94894c */
  if (!zf) goto L_94894c;
L_948926: /* 948926: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 94892a: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 94892d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 948931: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 948934: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 948936: mov edi, eax */
  edi = eax;
/* 948938: mov dword ptr [esp + 0x70], edx */
  W32((uint32_t)(esp + 0x70u), edx);
/* 94893c: jmp 0x948975 */
  goto L_948975;
L_94893e: /* 94893e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94893f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 948941: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 948942: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 948943: xor eax, eax */
  eax = 0;
/* 948945: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 948946: add esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 948949: ret 0x10 */
  esp += 20; SPILL(); return;
L_94894c: /* 94894c: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 948950: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 948954: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 948956: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 948959: jp 0x948893 */
  if (pf) goto L_948893;
L_94895f: /* 94895f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 948963: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 948966: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 948969: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94896b: mov edi, eax */
  edi = eax;
/* 94896d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 948971: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
L_948975: /* 948975: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 948979: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 94897c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94897f: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 948982: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 948986: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 94898a: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 94898d: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 948990: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 948994: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 948996: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 948998: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 94899b: call 0x92ec40 */
  esp -= 4; W32(esp, 0x9489a0u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 9489a0: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 9489a4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9489a7: fdiv dword ptr [esp + 0x24] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x24u)));
/* 9489ab: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 9489af: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 9489b3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9489b5: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 9489b9: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 9489bd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9489bf: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 9489c3: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 9489c7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9489c9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9489cc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9489ce: call 0x92ec40 */
  esp -= 4; W32(esp, 0x9489d3u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 9489d3: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 9489d7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9489da: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 9489dd: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 9489e1: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 9489e5: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 9489e9: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 9489ec: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 9489f0: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 9489f4: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 9489f6: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9489f9: call 0x92ec40 */
  esp -= 4; W32(esp, 0x9489feu); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 9489fe: mov esi, dword ptr [esp + 0x78] */
  esi = R32((uint32_t)(esp + 0x78u));
/* 948a02: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 948a06: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 948a0a: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 948a0e: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 948a11: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 948a15: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 948a18: lea edx, [esp + 0x5c] */
  edx = (uint32_t)(esp + 0x5cu);
/* 948a1c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 948a1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 948a20: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 948a23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 948a24: mov ecx, ebp */
  ecx = ebp;
/* 948a26: call 0x933f50 */
  esp -= 4; W32(esp, 0x948a2bu); SPILL(); f_933f50(); if (g_unwind) return; RELOAD();
/* 948a2b: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 948a2f: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 948a33: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 948a37: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 948a3a: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 948a3e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 948a3f: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 948a42: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 948a45: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 948a47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 948a48: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 948a49: mov eax, 1 */
  eax = 0x1u;
/* 948a4e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 948a4f: add esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 948a52: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_948a60(void) {
  LOAD_REGS();
L_948a60: /* 948a60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 948a64: push 0x9486d0 */
  { uint32_t v = 0x9486d0u; esp -= 4; W32(esp, v); }
/* 948a69: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 948a6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 948a6c: call 0x929ec0 */
  esp -= 4; W32(esp, 0x948a71u); SPILL(); f_929ec0(); if (g_unwind) return; RELOAD();
/* 948a71: ret 4 */
  esp += 8; SPILL(); return;
}

void f_948a80(void) {
  LOAD_REGS();
L_948a80: /* 948a80: mov eax, 0x1338 */
  eax = 0x1338u;
/* 948a85: call 0x99cc00 */
  esp -= 4; W32(esp, 0x948a8au); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 948a8a: cmp dword ptr [esp + 0x134c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x134cu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 948a92: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 948a93: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 948a94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 948a95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 948a96: mov edi, dword ptr [esp + 0x1360] */
  edi = R32((uint32_t)(esp + 0x1360u));
/* 948a9d: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* 948aa3: jl 0x948d7d */
  if ((sf != of)) goto L_948d7d;
L_948aa9: /* 948aa9: mov ebp, dword ptr [esp + 0x1350] */
  ebp = R32((uint32_t)(esp + 0x1350u));
/* 948ab0: mov esi, dword ptr [esp + 0x134c] */
  esi = R32((uint32_t)(esp + 0x134cu));
/* 948ab7: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 948abb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 948abc: push 0x7f7fffff */
  { uint32_t v = 0x7f7fffffu; esp -= 4; W32(esp, v); }
/* 948ac1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 948ac3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 948ac4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 948ac5: call 0x948d90 */
  esp -= 4; W32(esp, 0x948acau); SPILL(); f_948d90(); if (g_unwind) return; RELOAD();
/* 948aca: fcomp dword ptr [esp + 0x1368] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1368u)));
  FPOP();
/* 948ad1: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 948ad4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 948ad6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 948ad9: jnp 0x948d7d */
  if (!pf) goto L_948d7d;
L_948adf: /* 948adf: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 948ae1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 948ae3: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 948ae8: lea edx, [esp + 0x90] */
  edx = (uint32_t)(esp + 0x90u);
/* 948aef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 948af0: lea eax, [esp + 0x44] */
  eax = (uint32_t)(esp + 0x44u);
/* 948af4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 948af5: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 948af9: call 0x977b50 */
  esp -= 4; W32(esp, 0x948afeu); SPILL(); f_977b50(); if (g_unwind) return; RELOAD();
/* 948afe: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 948b02: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 948b03: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* 948b07: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 948b08: call 0x977be0 */
  esp -= 4; W32(esp, 0x948b0du); SPILL(); f_977be0(); if (g_unwind) return; RELOAD();
/* 948b0d: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* 948b14: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 948b17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 948b19: je 0x948d7d */
  if (zf) goto L_948d7d;
L_948b1f: /* 948b1f: mov ebx, dword ptr [esp + 0x1358] */
  ebx = R32((uint32_t)(esp + 0x1358u));
/* 948b26: and ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 948b29: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 948b2d: jmp 0x948b33 */
  goto L_948b33;
L_948b2f: /* 948b2f: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
L_948b33: /* 948b33: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 948b37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 948b38: call 0x977ce0 */
  esp -= 4; W32(esp, 0x948b3du); SPILL(); f_977ce0(); if (g_unwind) return; RELOAD();
/* 948b3d: mov ecx, eax */
  ecx = eax;
/* 948b3f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 948b43: mov edx, ecx */
  edx = ecx;
/* 948b45: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 948b48: fld dword ptr [edx + eax + 4] */
  { double v = F32((uint32_t)(edx + eax + 0x4u)); FPUSH(v); }
/* 948b4c: lea esi, [edx + eax] */
  esi = (uint32_t)(edx + eax);
/* 948b4f: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 948b52: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 948b55: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 948b57: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 948b5a: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 948b5d: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 948b61: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948b63: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 948b66: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 948b68: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948b6a: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 948b6e: je 0x948ba5 */
  if (zf) goto L_948ba5;
L_948b70: /* 948b70: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 948b72: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 948b75: mov eax, dword ptr [esp + 0x1364] */
  eax = R32((uint32_t)(esp + 0x1364u));
/* 948b7c: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 948b7f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 948b81: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 948b83: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 948b86: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 948b89: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 948b8c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 948b8f: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 948b91: mov eax, dword ptr [esp + 0x135c] */
  eax = R32((uint32_t)(esp + 0x135cu));
/* 948b98: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 948b99: mov edx, ebx */
  edx = ebx;
/* 948b9b: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 948b9d: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 948b9f: je 0x948d7d */
  if (zf) goto L_948d7d;
L_948ba5: /* 948ba5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 948ba6: mov ecx, dword ptr [esp + 0x1350] */
  ecx = R32((uint32_t)(esp + 0x1350u));
/* 948bad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 948bae: call 0x94e630 */
  esp -= 4; W32(esp, 0x948bb3u); SPILL(); f_94e630(); if (g_unwind) return; RELOAD();
/* 948bb3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 948bb6: xor ebx, ebx */
  ebx = 0;
/* 948bb8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 948bba: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 948bbe: jle 0x948d6e */
  if ((zf || sf != of)) goto L_948d6e;
L_948bc4: /* 948bc4: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 948bc8: mov eax, dword ptr [esp + 0x134c] */
  eax = R32((uint32_t)(esp + 0x134cu));
/* 948bcf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 948bd0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 948bd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 948bd2: call 0x94e6a0 */
  esp -= 4; W32(esp, 0x948bd7u); SPILL(); f_94e6a0(); if (g_unwind) return; RELOAD();
/* 948bd7: mov edx, eax */
  edx = eax;
/* 948bd9: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 948bdd: mov ecx, edx */
  ecx = edx;
/* 948bdf: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 948be2: fld dword ptr [ecx + eax + 4] */
  { double v = F32((uint32_t)(ecx + eax + 0x4u)); FPUSH(v); }
/* 948be6: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 948be8: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 948beb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 948bee: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 948bf1: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 948bf4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948bf6: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 948bf9: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 948bfb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948bfd: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 948c01: fcomp dword ptr [esp + 0x1354] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1354u)));
  FPOP();
/* 948c08: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 948c0a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 948c0d: jne 0x948c22 */
  if (!zf) goto L_948c22;
L_948c0f: /* 948c0f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 948c10: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 948c14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 948c15: call 0x977be0 */
  esp -= 4; W32(esp, 0x948c1au); SPILL(); f_977be0(); if (g_unwind) return; RELOAD();
/* 948c1a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 948c1d: jmp 0x948d61 */
  goto L_948d61;
L_948c22: /* 948c22: test byte ptr [esp + 0x1358], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x1358u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 948c2a: je 0x948d61 */
  if (zf) goto L_948d61;
L_948c30: /* 948c30: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 948c34: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 948c36: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 948c3a: mov edx, dword ptr [esp + 0x1364] */
  edx = R32((uint32_t)(esp + 0x1364u));
/* 948c41: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 948c45: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 948c48: fsub dword ptr [esp + 0x1354] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1354u)));
/* 948c4f: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 948c52: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 948c54: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 948c56: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 948c58: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 948c5c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 948c5e: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 948c61: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 948c65: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 948c68: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 948c6c: fld dword ptr [esp + 0x1354] */
  { double v = F32((uint32_t)(esp + 0x1354u)); FPUSH(v); }
/* 948c73: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 948c77: fdivrp st(1) */
  STI(1) = ST0 / STI(1);
  FPOP();
/* 948c79: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 948c7b: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 948c7d: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 948c81: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 948c83: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 948c86: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 948c8a: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 948c8c: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 948c8f: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 948c93: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 948c97: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 948c9b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 948c9e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 948ca0: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 948ca3: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 948ca5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 948ca7: je 0x948d53 */
  if (zf) goto L_948d53;
L_948cad: /* 948cad: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 948cb0: fld dword ptr [edx + eax*4 - 0xc] */
  { double v = F32((uint32_t)(edx + eax*4 + 0xfffffff4u)); FPUSH(v); }
/* 948cb4: lea edx, [edx + eax*4] */
  edx = (uint32_t)(edx + eax*4);
/* 948cb7: fabs  */
  ST0 = fabs(ST0);
/* 948cb9: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 948cbf: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 948cc1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 948cc3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 948cc6: jp 0x948cd9 */
  if (pf) goto L_948cd9;
L_948cc8: /* 948cc8: fabs  */
  ST0 = fabs(ST0);
/* 948cca: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 948cd0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 948cd2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 948cd5: jnp 0x948cee */
  if (!pf) goto L_948cee;
L_948cd7: /* 948cd7: jmp 0x948d53 */
  goto L_948d53;
L_948cd9: /* 948cd9: fsub dword ptr [edx - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0xfffffff4u)));
/* 948cdc: fdiv dword ptr [edx - 0xc] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0xfffffff4u)));
/* 948cdf: fabs  */
  ST0 = fabs(ST0);
/* 948ce1: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 948ce7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 948ce9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 948cec: jp 0x948d53 */
  if (pf) goto L_948d53;
L_948cee: /* 948cee: fld dword ptr [edx - 8] */
  { double v = F32((uint32_t)(edx + 0xfffffff8u)); FPUSH(v); }
/* 948cf1: fabs  */
  ST0 = fabs(ST0);
/* 948cf3: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 948cf9: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 948cfc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 948cfe: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 948d01: jp 0x948d14 */
  if (pf) goto L_948d14;
L_948d03: /* 948d03: fabs  */
  ST0 = fabs(ST0);
/* 948d05: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 948d0b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 948d0d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 948d10: jnp 0x948d29 */
  if (!pf) goto L_948d29;
L_948d12: /* 948d12: jmp 0x948d53 */
  goto L_948d53;
L_948d14: /* 948d14: fsub dword ptr [edx - 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0xfffffff8u)));
/* 948d17: fdiv dword ptr [edx - 8] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0xfffffff8u)));
/* 948d1a: fabs  */
  ST0 = fabs(ST0);
/* 948d1c: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 948d22: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 948d24: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 948d27: jp 0x948d53 */
  if (pf) goto L_948d53;
L_948d29: /* 948d29: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 948d2c: fabs  */
  ST0 = fabs(ST0);
/* 948d2e: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 948d34: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 948d37: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 948d39: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 948d3c: jnp 0x948d44 */
  if (!pf) goto L_948d44;
L_948d3e: /* 948d3e: fsub dword ptr [edx - 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0xfffffffcu)));
/* 948d41: fdiv dword ptr [edx - 4] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0xfffffffcu)));
L_948d44: /* 948d44: fabs  */
  ST0 = fabs(ST0);
/* 948d46: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 948d4c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 948d4e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 948d51: jnp 0x948d61 */
  if (!pf) goto L_948d61;
L_948d53: /* 948d53: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* 948d56: cmp eax, dword ptr [esp + 0x135c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x135cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 948d5d: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 948d5f: je 0x948d7d */
  if (zf) goto L_948d7d;
L_948d61: /* 948d61: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 948d65: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 948d66: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 948d68: jl 0x948bc4 */
  if ((sf != of)) goto L_948bc4;
L_948d6e: /* 948d6e: mov eax, dword ptr [esp + 0x80] */
  eax = R32((uint32_t)(esp + 0x80u));
/* 948d75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 948d77: jne 0x948b2f */
  if (!zf) goto L_948b2f;
L_948d7d: /* 948d7d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 948d7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 948d7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 948d80: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 948d81: add esp, 0x1338 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1338u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 948d87: ret  */
  esp += 4; SPILL(); return;
}

void f_948d90(void) {
  LOAD_REGS();
L_948d90: /* 948d90: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 948d93: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 948d97: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 948d9a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 948d9b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 948d9c: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 948da0: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 948da2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 948da3: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 948da5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 948da6: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 948daa: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 948dae: jl 0x948db4 */
  if ((sf != of)) goto L_948db4;
L_948db0: /* 948db0: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 948db2: jl 0x948db6 */
  if ((sf != of)) goto L_948db6;
L_948db4: /* 948db4: xor ebp, ebp */
  ebp = 0;
L_948db6: /* 948db6: mov eax, ebp */
  eax = ebp;
/* 948db8: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 948dbb: fld dword ptr [eax + esi + 4] */
  { double v = F32((uint32_t)(eax + esi + 0x4u)); FPUSH(v); }
/* 948dbf: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 948dc1: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 948dc5: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 948dc8: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 948dcb: cmp edx, -2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 948dce: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 948dd1: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 948dd4: mov dword ptr [esp + 0x28], 0xfffffffe */
  W32((uint32_t)(esp + 0x28u), 0xfffffffeu);
/* 948ddc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948dde: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 948de0: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 948de2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948de4: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 948de8: jg 0x948e00 */
  if ((!zf && sf == of)) goto L_948e00;
L_948dea: /* 948dea: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 948dee: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 948df2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 948df3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 948df4: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 948df6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 948df7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 948df8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 948dfb: ret  */
  esp += 4; SPILL(); return;
L_948dfc: /* 948dfc: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
L_948e00: /* 948e00: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 948e02: je 0x948ea1 */
  if (zf) goto L_948ea1;
L_948e08: /* 948e08: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 948e0c: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 948e10: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 948e12: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 948e15: je 0x948eb3 */
  if (zf) goto L_948eb3;
L_948e1b: /* 948e1b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 948e1c: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 948e20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 948e21: mov edi, ebp */
  edi = ebp;
/* 948e23: call 0x94e630 */
  esp -= 4; W32(esp, 0x948e28u); SPILL(); f_94e630(); if (g_unwind) return; RELOAD();
/* 948e28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 948e2b: xor ebx, ebx */
  ebx = 0;
/* 948e2d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 948e2f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 948e33: jle 0x948e8c */
  if ((zf || sf != of)) goto L_948e8c;
L_948e35: /* 948e35: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 948e39: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 948e3a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 948e3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 948e3c: call 0x94e6a0 */
  esp -= 4; W32(esp, 0x948e41u); SPILL(); f_94e6a0(); if (g_unwind) return; RELOAD();
/* 948e41: mov ecx, eax */
  ecx = eax;
/* 948e43: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 948e47: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 948e4a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 948e4c: je 0x948e83 */
  if (zf) goto L_948e83;
L_948e4e: /* 948e4e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 948e52: mov eax, ecx */
  eax = ecx;
/* 948e54: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 948e57: fld dword ptr [eax + edx + 4] */
  { double v = F32((uint32_t)(eax + edx + 0x4u)); FPUSH(v); }
/* 948e5b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 948e5d: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 948e60: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 948e63: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 948e66: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948e68: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 948e6a: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 948e6c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948e6e: fcom dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
/* 948e72: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 948e74: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 948e77: jne 0x948e81 */
  if (!zf) goto L_948e81;
L_948e79: /* 948e79: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 948e7d: mov ebp, ecx */
  ebp = ecx;
/* 948e7f: jmp 0x948e83 */
  goto L_948e83;
L_948e81: /* 948e81: fstp st(0) */
  STI(0) = ST0; FPOP();
L_948e83: /* 948e83: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 948e87: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 948e88: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 948e8a: jl 0x948e35 */
  if ((sf != of)) goto L_948e35;
L_948e8c: /* 948e8c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 948e90: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 948e94: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 948e95: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 948e97: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 948e9b: jl 0x948dfc */
  if ((sf != of)) goto L_948dfc;
L_948ea1: /* 948ea1: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 948ea5: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 948ea9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 948eaa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 948eab: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 948ead: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 948eae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 948eaf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 948eb2: ret  */
  esp += 4; SPILL(); return;
L_948eb3: /* 948eb3: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 948eb7: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 948ebb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 948ebc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 948ebd: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 948ebf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 948ec0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 948ec1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 948ec4: ret  */
  esp += 4; SPILL(); return;
}

void f_948ed0(void) {
  LOAD_REGS();
L_948ed0: /* 948ed0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 948ed1: mov ebp, esp */
  ebp = esp;
/* 948ed3: sub esp, 0xb0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 948ed9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 948eda: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 948edd: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 948edf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 948ee0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 948ee1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 948ee2: call 0x928730 */
  esp -= 4; W32(esp, 0x948ee7u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 948ee7: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 948eea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 948eeb: mov esi, eax */
  esi = eax;
/* 948eed: call 0x928730 */
  esp -= 4; W32(esp, 0x948ef2u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 948ef2: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 948ef4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 948ef5: mov edi, eax */
  edi = eax;
/* 948ef7: call 0x928610 */
  esp -= 4; W32(esp, 0x948efcu); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 948efc: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 948eff: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 948f02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 948f03: call 0x928610 */
  esp -= 4; W32(esp, 0x948f08u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 948f08: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 948f0b: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 948f0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 948f0e: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 948f14: call 0x9287f0 */
  esp -= 4; W32(esp, 0x948f19u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 948f19: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 948f1c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 948f1d: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 948f20: call 0x9287f0 */
  esp -= 4; W32(esp, 0x948f25u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 948f25: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 948f28: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 948f2b: xor ecx, ecx */
  ecx = 0;
/* 948f2d: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 948f30: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 948f33: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 948f36: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 948f39: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 948f3c: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 948f3f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948f41: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 948f43: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 948f45: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948f47: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 948f4a: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 948f4d: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 948f50: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 948f53: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 948f56: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948f58: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 948f5a: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 948f5d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948f5f: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 948f62: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 948f65: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 948f68: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 948f6b: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 948f6d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948f6f: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 948f72: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 948f75: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948f77: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 948f7a: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 948f7d: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 948f7f: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 948f82: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 948f85: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948f87: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 948f8a: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 948f8d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948f8f: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 948f92: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 948f95: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 948f98: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 948f9b: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 948f9e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948fa0: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 948fa3: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 948fa6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948fa8: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 948fab: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 948fae: fmul dword ptr [edi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x18u)));
/* 948fb1: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 948fb4: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 948fb7: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 948fba: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 948fc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 948fc1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948fc3: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 948fc9: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 948fcc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 948fcd: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* 948fd0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 948fd1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948fd3: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 948fd6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 948fd9: fmul dword ptr [edi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x24u)));
/* 948fdc: fld dword ptr [edi + 0x28] */
  { double v = F32((uint32_t)(edi + 0x28u)); FPUSH(v); }
/* 948fdf: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 948fe2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948fe4: fld dword ptr [edi + 0x20] */
  { double v = F32((uint32_t)(edi + 0x20u)); FPUSH(v); }
/* 948fe7: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 948fe9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948feb: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 948fee: fld dword ptr [edi + 0x28] */
  { double v = F32((uint32_t)(edi + 0x28u)); FPUSH(v); }
/* 948ff1: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 948ff4: fld dword ptr [edi + 0x24] */
  { double v = F32((uint32_t)(edi + 0x24u)); FPUSH(v); }
/* 948ff7: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 948ffa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 948ffc: fld dword ptr [edi + 0x20] */
  { double v = F32((uint32_t)(edi + 0x20u)); FPUSH(v); }
/* 948fff: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 949002: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 949004: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 949007: fld dword ptr [edi + 0x28] */
  { double v = F32((uint32_t)(edi + 0x28u)); FPUSH(v); }
/* 94900a: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 94900d: fld dword ptr [edi + 0x24] */
  { double v = F32((uint32_t)(edi + 0x24u)); FPUSH(v); }
/* 949010: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 949013: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 949015: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 949018: fmul dword ptr [edi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x20u)));
/* 94901b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94901d: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 949020: fld dword ptr [edi + 0x30] */
  { double v = F32((uint32_t)(edi + 0x30u)); FPUSH(v); }
/* 949023: fsub dword ptr [esi + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x30u)));
/* 949026: fld dword ptr [edi + 0x34] */
  { double v = F32((uint32_t)(edi + 0x34u)); FPUSH(v); }
/* 949029: fsub dword ptr [esi + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x34u)));
/* 94902c: fld dword ptr [edi + 0x38] */
  { double v = F32((uint32_t)(edi + 0x38u)); FPUSH(v); }
/* 94902f: fsub dword ptr [esi + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x38u)));
/* 949032: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 949034: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 949036: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 949038: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 94903b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94903d: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 94903f: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 949042: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 949044: fstp dword ptr [ebp - 0x10] */
  WF32((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 949047: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 949049: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 94904c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94904e: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 949051: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 949053: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 949055: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 949058: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94905a: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 94905d: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 949060: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 949062: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 949065: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 949067: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 949069: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 94906c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94906e: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 949071: call 0x945780 */
  esp -= 4; W32(esp, 0x949076u); SPILL(); f_945780(); if (g_unwind) return; RELOAD();
/* 949076: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 94907c: fsub dword ptr [ebp - 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffff0u)));
/* 94907f: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 949082: fsub dword ptr [ebp - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffff4u)));
/* 949085: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 949088: fsub dword ptr [ebp - 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffff8u)));
/* 94908b: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 94908e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 949090: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 949093: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 949095: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 949098: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94909a: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 94909c: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 94909f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9490a1: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 9490a7: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 9490aa: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9490ac: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 9490af: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9490b1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9490b3: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 9490b6: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 9490b8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9490ba: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 9490c0: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 9490c3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9490c5: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 9490c8: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9490ca: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9490cc: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 9490cf: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 9490d1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9490d3: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 9490d9: mov edi, dword ptr [eax + 0x28] */
  edi = R32((uint32_t)(eax + 0x28u));
/* 9490dc: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 9490df: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9490e2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9490e4: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9490e7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9490e9: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9490ec: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9490ee: call 0x99cc00 */
  esp -= 4; W32(esp, 0x9490f3u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 9490f3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 9490f6: mov eax, esp */
  eax = esp;
/* 9490f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9490f9: mov dword ptr [ecx + 0x34], eax */
  W32((uint32_t)(ecx + 0x34u), eax);
/* 9490fc: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* 949102: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 949103: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 949109: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94910a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94910b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94910c: call dword ptr [ecx + 0x30] */
  { uint32_t t = R32((uint32_t)(ecx + 0x30u)); esp -= 4; W32(esp, 0x94910fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 94910f: xor edi, edi */
  edi = 0;
/* 949111: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 949113: jne 0x949126 */
  if (!zf) goto L_949126;
L_949115: /* 949115: xor eax, eax */
  eax = 0;
/* 949117: lea esp, [ebp - 0xbc] */
  esp = (uint32_t)(ebp + 0xffffff44u);
/* 94911d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94911e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94911f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 949120: mov esp, ebp */
  esp = ebp;
/* 949122: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 949123: ret 8 */
  esp += 12; SPILL(); return;
L_949126: /* 949126: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 949128: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 94912b: mov dword ptr [edx + 0x14], edi */
  W32((uint32_t)(edx + 0x14u), edi);
/* 94912e: mov dword ptr [edx + 0x18], edi */
  W32((uint32_t)(edx + 0x18u), edi);
/* 949131: mov dword ptr [edx + 0x1c], edi */
  W32((uint32_t)(edx + 0x1cu), edi);
/* 949134: jle 0x9493ab */
  if ((zf || sf != of)) goto L_9493ab;
L_94913a: /* 94913a: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 94913d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_949140: /* 949140: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 949143: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 949146: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 949149: mov eax, dword ptr [ecx + edi + 0x10] */
  eax = R32((uint32_t)(ecx + edi + 0x10u));
/* 94914d: mov ebx, dword ptr [ecx + edi + 0x14] */
  ebx = R32((uint32_t)(ecx + edi + 0x14u));
/* 949151: mov dword ptr [ebp - 0xa0], eax */
  W32((uint32_t)(ebp + 0xffffff60u), eax);
/* 949157: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 949159: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94915c: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 94915f: mov dword ptr [ebp - 0xa4], eax */
  W32((uint32_t)(ebp + 0xffffff5cu), eax);
/* 949165: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 949168: mov dword ptr [ebp - 0xb0], eax */
  W32((uint32_t)(ebp + 0xffffff50u), eax);
/* 94916e: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 949171: mov dword ptr [ebp - 0xac], eax */
  W32((uint32_t)(ebp + 0xffffff54u), eax);
/* 949177: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 94917a: mov dword ptr [ebp - 0xa8], eax */
  W32((uint32_t)(ebp + 0xffffff58u), eax);
/* 949180: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 949183: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 949185: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 949188: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 94918b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94918d: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 949190: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 949193: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 949195: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 949198: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 94919b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94919d: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 9491a0: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9491a3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9491a5: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 9491a8: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9491ab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9491ad: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 9491b0: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 9491b3: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9491b6: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 9491b9: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9491bc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9491be: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 9491c1: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9491c3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9491c5: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 9491c8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9491ca: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 9491cd: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9491cf: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 9491d2: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9491d5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9491d7: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 9491da: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9491dd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9491df: fadd dword ptr [ebp - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffff0u)));
/* 9491e2: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 9491e5: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 9491e8: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9491ea: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 9491ed: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9491f0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9491f2: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 9491f5: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9491f8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9491fa: fadd dword ptr [ebp - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffff4u)));
/* 9491fd: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 949200: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 949203: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 949205: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 949208: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 94920b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94920d: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 949210: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 949213: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 949215: fadd dword ptr [ebp - 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffff8u)));
/* 949218: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 94921b: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 949221: fsub dword ptr [ebp - 0x6c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff94u)));
/* 949224: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 949227: fsub dword ptr [ebp - 0x68] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff98u)));
/* 94922a: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 94922d: fsub dword ptr [ebp - 0x64] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 949230: je 0x949285 */
  if (zf) goto L_949285;
L_949232: /* 949232: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 949235: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 949237: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 949239: fmul dword ptr [ebp - 0x74] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 94923c: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 94923e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 949240: fmul dword ptr [ebp - 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff88u)));
/* 949243: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 949245: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94924b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94924d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94924f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 949252: je 0x94928b */
  if (zf) goto L_94928b;
L_949254: /* 949254: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 949257: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 949258: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 94925b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94925c: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 94925f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 949260: call 0x949420 */
  esp -= 4; W32(esp, 0x949265u); SPILL(); f_949420(); if (g_unwind) return; RELOAD();
/* 949265: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 949268: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 94926b: mov eax, dword ptr [edi + edx + 8] */
  eax = R32((uint32_t)(edi + edx + 0x8u));
/* 94926f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 949270: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 949273: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 949274: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 949277: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 949278: call 0x949420 */
  esp -= 4; W32(esp, 0x94927du); SPILL(); f_949420(); if (g_unwind) return; RELOAD();
/* 94927d: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 949280: jmp 0x94936f */
  goto L_94936f;
L_949285: /* 949285: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 949287: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 949289: fstp st(0) */
  STI(0) = ST0; FPOP();
L_94928b: /* 94928b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 94928e: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 949291: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 949293: and ebx, 0xffffffeb */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffebu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 949296: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 949299: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 94929c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94929e: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 9492a1: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9492a4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9492a6: fadd dword ptr [ebp - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffff0u)));
/* 9492a9: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 9492ac: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 9492af: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9492b1: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 9492b4: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9492b7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9492b9: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 9492bc: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9492bf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9492c1: fadd dword ptr [ebp - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffff4u)));
/* 9492c4: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 9492c7: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 9492ca: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9492cd: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 9492d0: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9492d3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9492d5: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 9492d8: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9492da: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9492dc: fadd dword ptr [ebp - 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffff8u)));
/* 9492df: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 9492e2: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 9492e5: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 9492e8: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9492ea: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 9492ed: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9492f0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9492f2: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 9492f5: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9492f8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9492fa: fadd dword ptr [ebp - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffff0u)));
/* 9492fd: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 949300: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 949303: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 949305: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 949308: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 94930b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94930d: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 949310: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 949313: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 949315: fadd dword ptr [ebp - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffff4u)));
/* 949318: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 94931b: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 94931e: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 949320: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 949323: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 949326: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 949328: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 94932b: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 94932e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 949330: fadd dword ptr [ebp - 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffff8u)));
/* 949333: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 949336: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 949339: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94933f: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 949342: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 949345: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94934b: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 94934e: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 949351: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 949357: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 94935a: mov ecx, dword ptr [ecx + 0x14] */
  ecx = R32((uint32_t)(ecx + 0x14u));
/* 94935d: mov eax, ecx */
  eax = ecx;
/* 94935f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 949362: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 949365: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 949368: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 94936b: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 94936d: or ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_94936f: /* 94936f: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 949375: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 949378: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 949379: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 94937c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94937d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94937e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94937f: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 949382: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 949383: lea eax, [ebp - 0xb0] */
  eax = (uint32_t)(ebp + 0xffffff50u);
/* 949389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94938a: mov dword ptr [ebp - 0x9c], ebx */
  W32((uint32_t)(ebp + 0xffffff64u), ebx);
/* 949390: call 0x949480 */
  esp -= 4; W32(esp, 0x949395u); SPILL(); f_949480(); if (g_unwind) return; RELOAD();
/* 949395: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 949398: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 94939b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94939e: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9493a1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9493a2: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 9493a5: jne 0x949140 */
  if (!zf) goto L_949140;
L_9493ab: /* 9493ab: fld dword ptr [edx + 0x1c] */
  { double v = F32((uint32_t)(edx + 0x1cu)); FPUSH(v); }
/* 9493ae: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 9493b1: fld dword ptr [edx + 0x18] */
  { double v = F32((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* 9493b4: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 9493b7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9493b9: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 9493bc: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 9493bf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9493c1: fcom dword ptr [0xa214e4] */
  fpu_com(ST0, F32((uint32_t)(0xa214e4u)));
/* 9493c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9493c9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9493cc: jne 0x9493fe */
  if (!zf) goto L_9493fe;
L_9493ce: /* 9493ce: fsqrt  */
  ST0 = sqrt(ST0);
/* 9493d0: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 9493d6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9493d8: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 9493db: fstp dword ptr [edx + 0x14] */
  WF32((uint32_t)(edx + 0x14u), ST0); FPOP();
/* 9493de: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9493e0: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 9493e3: fstp dword ptr [edx + 0x18] */
  WF32((uint32_t)(edx + 0x18u), ST0); FPOP();
/* 9493e6: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 9493e9: fstp dword ptr [edx + 0x1c] */
  WF32((uint32_t)(edx + 0x1cu), ST0); FPOP();
/* 9493ec: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 9493ef: lea esp, [ebp - 0xbc] */
  esp = (uint32_t)(ebp + 0xffffff44u);
/* 9493f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9493f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9493f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9493f8: mov esp, ebp */
  esp = ebp;
/* 9493fa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9493fb: ret 8 */
  esp += 12; SPILL(); return;
L_9493fe: /* 9493fe: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 949400: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 949403: lea esp, [ebp - 0xbc] */
  esp = (uint32_t)(ebp + 0xffffff44u);
/* 949409: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94940a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94940b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94940c: mov esp, ebp */
  esp = ebp;
/* 94940e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94940f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_949420(void) {
  LOAD_REGS();
L_949420: /* 949420: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 949424: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 949428: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 94942b: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94942e: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 949432: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 949435: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 949438: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94943a: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 94943c: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94943e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 949440: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 949443: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 949445: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 949448: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94944b: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 94944e: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 949450: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 949452: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 949455: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 949458: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94945a: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 94945d: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 949460: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 949463: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 949466: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 949469: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94946b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94946d: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 949470: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 949473: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 949475: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 949478: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 94947b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_949480(void) {
  LOAD_REGS();
L_949480: /* 949480: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 949481: mov ebp, esp */
  ebp = esp;
/* 949483: sub esp, 0x70 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 949486: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 949487: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 94948a: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 94948c: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 94948f: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 949491: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 949494: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 949496: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 949497: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 949498: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 94949b: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 94949e: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 9494a1: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 9494a4: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 9494a7: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 9494aa: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 9494ad: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9494af: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 9494b1: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 9494b4: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 9494b7: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 9494ba: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 9494bd: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 9494c0: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 9494c3: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 9494c6: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 9494c9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9494cb: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 9494cd: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 9494d0: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9494d3: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 9494d6: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 9494d9: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 9494dc: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 9494df: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 9494e2: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 9494e5: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 9494e8: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9494eb: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 9494ee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9494f0: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9494f2: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 9494f5: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9494f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9494f8: push 0x7f7fffff */
  { uint32_t v = 0x7f7fffffu; esp -= 4; W32(esp, v); }
/* 9494fd: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9494ff: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 949501: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 949502: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 949505: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 949506: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 949509: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 94950c: call 0x948d90 */
  esp -= 4; W32(esp, 0x949511u); SPILL(); f_948d90(); if (g_unwind) return; RELOAD();
/* 949511: fchs  */
  ST0 = -ST0;
/* 949513: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 949516: fst dword ptr [ebp - 0x10] */
  WF32((uint32_t)(ebp + 0xfffffff0u), ST0);
/* 949519: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 94951c: fst dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0);
/* 94951f: fcomp dword ptr [ebp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x18u)));
  FPOP();
/* 949522: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 949524: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 949527: je 0x949b25 */
  if (zf) goto L_949b25;
L_94952d: /* 94952d: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 949530: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 949532: xor esi, esi */
  esi = 0;
/* 949534: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94953a: lea edi, [ebp - 0x68] */
  edi = (uint32_t)(ebp + 0xffffff98u);
/* 94953d: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 949540: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 949543: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 949549: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 94954c: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 94954f: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 949555: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
L_949558: /* 949558: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 94955b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94955c: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 94955f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 949560: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 949563: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 949566: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 949567: mov edx, dword ptr [ebx + esi*4] */
  edx = R32((uint32_t)(ebx + esi*4));
/* 94956a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94956b: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 949570: lea eax, [edi - 8] */
  eax = (uint32_t)(edi + 0xfffffff8u);
/* 949573: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 949575: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 949576: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 949577: call 0x94c6f0 */
  esp -= 4; W32(esp, 0x94957cu); SPILL(); f_94c6f0(); if (g_unwind) return; RELOAD();
/* 94957c: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 94957f: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 949582: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 949585: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94958b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94958d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 949590: je 0x94975a */
  if (zf) goto L_94975a;
L_949596: /* 949596: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 949599: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 94959f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9495a1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 9495a4: jnp 0x94975a */
  if (!pf) goto L_94975a;
L_9495aa: /* 9495aa: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 9495ad: fmul dword ptr [edi - 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffffcu)));
/* 9495b0: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 9495b3: fmul dword ptr [edi - 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff8u)));
/* 9495b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9495b8: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 9495bb: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 9495bd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9495bf: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9495c5: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 9495c8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9495ca: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 9495cd: jp 0x9495f7 */
  if (pf) goto L_9495f7;
L_9495cf: /* 9495cf: mov eax, 1 */
  eax = 0x1u;
/* 9495d4: mov ecx, esi */
  ecx = esi;
/* 9495d6: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 9495d8: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9495db: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 9495de: fmul dword ptr [ebp + eax*4 - 0x68] */
  ST0 = ST0 * (F32((uint32_t)(ebp + eax*4 + 0xffffff98u)));
/* 9495e2: lea eax, [ebp + eax*4 - 0x70] */
  eax = (uint32_t)(ebp + eax*4 + 0xffffff90u);
/* 9495e6: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 9495e9: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9495ec: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9495ee: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 9495f1: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9495f3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9495f5: jmp 0x949620 */
  goto L_949620;
L_9495f7: /* 9495f7: lea ecx, [esi - 1] */
  ecx = (uint32_t)(esi + 0xffffffffu);
/* 9495fa: mov eax, ecx */
  eax = ecx;
/* 9495fc: sar eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9495ff: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 949602: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 949604: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 949607: fmul dword ptr [ebp + ecx*4 - 0x68] */
  ST0 = ST0 * (F32((uint32_t)(ebp + ecx*4 + 0xffffff98u)));
/* 94960b: lea eax, [ebp + ecx*4 - 0x70] */
  eax = (uint32_t)(ebp + ecx*4 + 0xffffff90u);
/* 94960f: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 949612: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 949615: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 949617: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 94961a: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94961c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94961e: fchs  */
  ST0 = -ST0;
L_949620: /* 949620: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 949626: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 949628: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94962b: jnp 0x949783 */
  if (!pf) goto L_949783;
L_949631: /* 949631: fstp st(0) */
  STI(0) = ST0; FPOP();
L_949633: /* 949633: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* 949636: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 949638: fcomp dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
  FPOP();
/* 94963e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 949640: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 949643: jne 0x9496ac */
  if (!zf) goto L_9496ac;
L_949645: /* 949645: fcom dword ptr [ebp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x18u)));
/* 949648: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94964a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94964d: je 0x949b23 */
  if (zf) goto L_949b23;
L_949653: /* 949653: fst dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0);
/* 949656: mov eax, dword ptr [ebx + esi*4] */
  eax = R32((uint32_t)(ebx + esi*4));
/* 949659: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 94965c: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 949662: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 949665: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 949668: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94966e: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 949671: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 949674: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94967a: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 94967d: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 949680: fmul dword ptr [edi - 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff8u)));
/* 949683: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 949685: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 949688: fmul dword ptr [edi - 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffffcu)));
/* 94968b: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 94968e: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 949691: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 949693: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 949696: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 949699: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94969b: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 94969e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9496a0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9496a2: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 9496a5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9496a7: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9496a9: fstp dword ptr [ebp - 0x10] */
  WF32((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
L_9496ac: /* 9496ac: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9496ad: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9496af: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9496b2: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9496b5: jl 0x949558 */
  if ((sf != of)) goto L_949558;
L_9496bb: /* 9496bb: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 9496be: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 9496c1: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 9496c4: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 9496c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9496c8: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 9496cb: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 9496ce: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 9496d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9496d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9496d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9496d4: call 0x94cef0 */
  esp -= 4; W32(esp, 0x9496d9u); SPILL(); f_94cef0(); if (g_unwind) return; RELOAD();
/* 9496d9: mov esi, dword ptr [esi + 0x10] */
  esi = R32((uint32_t)(esi + 0x10u));
/* 9496dc: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 9496df: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 9496e2: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9496e5: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9496e8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9496eb: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9496ee: call 0x99cc00 */
  esp -= 4; W32(esp, 0x9496f3u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 9496f3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 9496f6: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 9496f9: mov edi, esp */
  edi = esp;
/* 9496fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9496fc: lea edx, [ebp - 8] */
  edx = (uint32_t)(ebp + 0xfffffff8u);
/* 9496ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 949700: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 949703: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 949704: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 949706: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 949707: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 949708: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 949709: mov dword ptr [ebp - 8], 0 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x0u);
/* 949710: call 0x948a80 */
  esp -= 4; W32(esp, 0x949715u); SPILL(); f_948a80(); if (g_unwind) return; RELOAD();
/* 949715: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 949718: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94971b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94971d: jle 0x94988d */
  if ((zf || sf != of)) goto L_94988d;
L_949723: /* 949723: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 949726: lea esi, [edi + 8] */
  esi = (uint32_t)(edi + 0x8u);
/* 949729: fchs  */
  ST0 = -ST0;
/* 94972b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 94972e: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 949731: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 949733: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 949736: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 949739: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94973b: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 94973e: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 949741: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 949743: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 949746: fstp st(0) */
  STI(0) = ST0; FPOP();
L_949748: /* 949748: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 94974b: mov dword ptr [ebp - 8], 0 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x0u);
/* 949752: lea edi, [esi - 8] */
  edi = (uint32_t)(esi + 0xfffffff8u);
/* 949755: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 949758: jmp 0x9497a0 */
  goto L_9497a0;
L_94975a: /* 94975a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 94975d: mov eax, 1 */
  eax = 0x1u;
/* 949762: mov ecx, esi */
  ecx = esi;
/* 949764: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 949766: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 949769: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 94976c: fmul dword ptr [ebp + edx*4 - 0x68] */
  ST0 = ST0 * (F32((uint32_t)(ebp + edx*4 + 0xffffff98u)));
/* 949770: lea eax, [ebp + edx*4 - 0x70] */
  eax = (uint32_t)(ebp + edx*4 + 0xffffff90u);
/* 949774: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 949777: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 94977a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94977c: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 94977f: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 949781: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
L_949783: /* 949783: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 949789: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94978b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94978e: jp 0x949631 */
  if (pf) goto L_949631;
L_949794: /* 949794: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 949796: jmp 0x949633 */
  goto L_949633;
L_94979b: /* 94979b: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 94979e: mov edi, edi */
  edi = edi;
L_9497a0: /* 9497a0: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 9497a3: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 9497a5: mov eax, dword ptr [ebx + eax*4] */
  eax = R32((uint32_t)(ebx + eax*4));
/* 9497a8: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 9497aa: fld dword ptr [esi - 4] */
  { double v = F32((uint32_t)(esi + 0xfffffffcu)); FPUSH(v); }
/* 9497ad: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 9497b0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 9497b2: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 9497b5: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9497b7: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 9497ba: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9497bc: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9497be: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9497c0: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 9497c3: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 9497c6: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9497c8: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 9497cb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9497cd: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 9497d0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9497d2: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9497d4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9497d6: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 9497d9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9497db: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 9497de: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 9497e1: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 9497e4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9497e6: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 9497e9: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 9497eb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9497ed: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 9497f3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9497f5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9497f8: je 0x949838 */
  if (zf) goto L_949838;
L_9497fa: /* 9497fa: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9497fc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9497fe: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 949801: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 949804: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 949806: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 949808: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94980a: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 94980d: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 949810: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 949812: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 949815: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 949818: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 94981a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94981c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94981e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 949821: je 0x94983a */
  if (zf) goto L_94983a;
L_949823: /* 949823: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 949826: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 949827: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94982a: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94982d: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 949830: jl 0x94979b */
  if ((sf != of)) goto L_94979b;
L_949836: /* 949836: jmp 0x94983a */
  goto L_94983a;
L_949838: /* 949838: fstp st(0) */
  STI(0) = ST0; FPOP();
L_94983a: /* 94983a: cmp dword ptr [ebp - 8], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94983e: jne 0x94987a */
  if (!zf) goto L_94987a;
L_949840: /* 949840: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 949843: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 949846: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 949848: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 94984b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 94984e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94984f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 949852: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 949854: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 949857: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 949858: fadd dword ptr [esi - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xfffffffcu)));
/* 94985b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94985d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94985f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 949860: fstp dword ptr [esi - 4] */
  WF32((uint32_t)(esi + 0xfffffffcu), ST0); FPOP();
/* 949863: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 949865: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 949868: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 949869: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 94986b: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 94986e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94986f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 949870: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 949872: call 0x92f5a0 */
  esp -= 4; W32(esp, 0x949877u); SPILL(); f_92f5a0(); if (g_unwind) return; RELOAD();
/* 949877: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94987a: /* 94987a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 94987d: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 949880: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 949883: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 949884: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 949887: jne 0x949748 */
  if (!zf) goto L_949748;
L_94988d: /* 94988d: lea edi, [ebp - 0x68] */
  edi = (uint32_t)(ebp + 0xffffff98u);
/* 949890: xor esi, esi */
  esi = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 949892: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_949895: /* 949895: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 949898: lea ecx, [esi + 2] */
  ecx = (uint32_t)(esi + 0x2u);
/* 94989b: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 94989d: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94989f: je 0x949ae3 */
  if (zf) goto L_949ae3;
L_9498a5: /* 9498a5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9498a7: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9498ad: mov ecx, dword ptr [edi - 8] */
  ecx = R32((uint32_t)(edi + 0xfffffff8u));
/* 9498b0: mov edx, dword ptr [edi - 4] */
  edx = R32((uint32_t)(edi + 0xfffffffcu));
/* 9498b3: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 9498b6: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 9498b9: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 9498bc: xor eax, eax */
  eax = 0;
/* 9498be: mov edi, edi */
  edi = edi;
L_9498c0: /* 9498c0: fld dword ptr [ebp + eax*4 - 0x28] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xffffffd8u)); FPUSH(v); }
/* 9498c4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9498c5: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9498c8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9498ca: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9498cc: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9498ce: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9498d0: jl 0x9498c0 */
  if ((sf != of)) goto L_9498c0;
L_9498d2: /* 9498d2: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 9498d8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9498da: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9498dd: jne 0x949907 */
  if (!zf) goto L_949907;
L_9498df: /* 9498df: fsqrt  */
  ST0 = sqrt(ST0);
/* 9498e1: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 9498e4: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9498ea: fdiv dword ptr [ebp - 0xc] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xfffffff4u)));
/* 9498ed: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 9498f0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9498f2: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 9498f5: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 9498f8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9498fa: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 9498fd: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 949900: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 949902: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 949905: jmp 0x949923 */
  goto L_949923;
L_949907: /* 949907: mov dword ptr [ebp - 0x28], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x3f800000u);
/* 94990e: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 949915: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 94991c: mov dword ptr [ebp - 0xc], 0 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x0u);
L_949923: /* 949923: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 949926: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 949928: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 949929: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 94992c: lea edx, [ebp - 4] */
  edx = (uint32_t)(ebp + 0xfffffffcu);
/* 94992f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 949930: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 949933: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 949934: mov eax, dword ptr [ebx + esi*4] */
  eax = R32((uint32_t)(ebx + esi*4));
/* 949937: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 949938: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 94993b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94993d: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 949940: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 949941: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 949942: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 949943: call 0x94d3e0 */
  esp -= 4; W32(esp, 0x949948u); SPILL(); f_94d3e0(); if (g_unwind) return; RELOAD();
/* 949948: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 94994b: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 94994e: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 949951: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 949957: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 949959: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94995c: jne 0x949972 */
  if (!zf) goto L_949972;
L_94995e: /* 94995e: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 949961: fcomp dword ptr [ebp - 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xfffffff4u)));
  FPOP();
/* 949964: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 949966: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 949969: jp 0x949972 */
  if (pf) goto L_949972;
L_94996b: /* 94996b: mov edi, 1 */
  edi = 0x1u;
/* 949970: jmp 0x949974 */
  goto L_949974;
L_949972: /* 949972: xor edi, edi */
  edi = 0;
L_949974: /* 949974: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 949977: mov eax, dword ptr [ebx + esi*4] */
  eax = R32((uint32_t)(ebx + esi*4));
/* 94997a: fmul dword ptr [ebp - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffffcu)));
/* 94997d: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 94997f: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 949982: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 949985: fmul dword ptr [ebp - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffffcu)));
/* 949988: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 94998b: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 94998e: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 949991: fmul dword ptr [ebp - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffffcu)));
/* 949994: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 949997: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 94999a: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 94999d: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 9499a0: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 9499a3: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 9499a6: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 9499a9: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 9499ac: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9499ae: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9499b0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9499b2: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9499b4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9499b6: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9499b8: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9499ba: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9499bc: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 9499bf: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 9499c2: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* 9499c5: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 9499c7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9499c9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9499cb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9499cd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9499d0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9499d2: jne 0x949ae0 */
  if (!zf) goto L_949ae0;
L_9499d8: /* 9499d8: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 9499db: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9499e1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9499e3: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9499e6: jp 0x949a13 */
  if (pf) goto L_949a13;
L_9499e8: /* 9499e8: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 9499eb: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 9499ee: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 9499f1: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 9499f4: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 9499f7: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 9499fa: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 9499fd: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 949a00: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 949a03: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 949a06: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 949a0d: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 949a10: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
L_949a13: /* 949a13: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 949a16: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 949a19: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 949a1c: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 949a1f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 949a21: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 949a24: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 949a27: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 949a29: fsubr dword ptr [ebp - 0x10] */
  ST0 = (F32((uint32_t)(ebp + 0xfffffff0u))) - ST0;
/* 949a2c: fst dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0);
/* 949a2f: fcomp dword ptr [ebp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x18u)));
  FPOP();
/* 949a32: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 949a34: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 949a37: jp 0x949a5e */
  if (pf) goto L_949a5e;
L_949a39: /* 949a39: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 949a3c: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 949a3f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 949a42: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 949a43: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 949a46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 949a47: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 949a49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 949a4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 949a4c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 949a4d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 949a4e: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 949a51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 949a52: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 949a55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 949a56: call 0x92f5a0 */
  esp -= 4; W32(esp, 0x949a5bu); SPILL(); f_92f5a0(); if (g_unwind) return; RELOAD();
/* 949a5b: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_949a5e: /* 949a5e: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 949a61: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 949a67: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 949a69: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 949a6c: jne 0x949ae0 */
  if (!zf) goto L_949ae0;
L_949a6e: /* 949a6e: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 949a71: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 949a74: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 949a77: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 949a7a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 949a7c: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 949a7f: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 949a82: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 949a84: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 949a87: fsubr dword ptr [ebp - 8] */
  ST0 = (F32((uint32_t)(ebp + 0xfffffff8u))) - ST0;
/* 949a8a: fst dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0);
/* 949a8d: fcomp dword ptr [ebp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x18u)));
  FPOP();
/* 949a90: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 949a92: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 949a95: jp 0x949ae0 */
  if (pf) goto L_949ae0;
L_949a97: /* 949a97: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 949a9a: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 949a9d: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 949aa0: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 949aa3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 949aa6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 949aa7: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 949aaa: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 949aad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 949aae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 949ab0: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 949ab3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 949ab5: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 949ab8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 949ab9: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 949abc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 949abd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 949abe: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 949ac1: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 949ac4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 949ac5: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 949ac8: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 949acb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 949acc: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 949acf: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 949ad2: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 949ad5: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 949ad8: call 0x92f5a0 */
  esp -= 4; W32(esp, 0x949addu); SPILL(); f_92f5a0(); if (g_unwind) return; RELOAD();
/* 949add: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_949ae0: /* 949ae0: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_949ae3: /* 949ae3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 949ae4: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 949ae7: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 949aea: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 949aed: jl 0x949895 */
  if ((sf != of)) goto L_949895;
L_949af3: /* 949af3: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 949af6: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 949af9: cmp ecx, dword ptr [edx + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 949afc: jge 0x949b25 */
  if ((sf == of)) goto L_949b25;
L_949afe: /* 949afe: lea eax, [ecx + ecx*4] */
  eax = (uint32_t)(ecx + ecx*4);
/* 949b01: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
L_949b04: /* 949b04: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 949b07: mov edi, dword ptr [ebx + 0x10] */
  edi = R32((uint32_t)(ebx + 0x10u));
/* 949b0a: mov dword ptr [eax + esi + 0x24], edi */
  W32((uint32_t)(eax + esi + 0x24u), edi);
/* 949b0e: mov esi, dword ptr [edx + 0xc] */
  esi = R32((uint32_t)(edx + 0xcu));
/* 949b11: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 949b12: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 949b15: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 949b17: jl 0x949b04 */
  if ((sf != of)) goto L_949b04;
L_949b19: /* 949b19: lea esp, [ebp - 0x7c] */
  esp = (uint32_t)(ebp + 0xffffff84u);
/* 949b1c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 949b1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 949b1e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 949b1f: mov esp, ebp */
  esp = ebp;
/* 949b21: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 949b22: ret  */
  esp += 4; SPILL(); return;
L_949b23: /* 949b23: fstp st(0) */
  STI(0) = ST0; FPOP();
L_949b25: /* 949b25: lea esp, [ebp - 0x7c] */
  esp = (uint32_t)(ebp + 0xffffff84u);
/* 949b28: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 949b29: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 949b2a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 949b2b: mov esp, ebp */
  esp = ebp;
/* 949b2d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 949b2e: ret  */
  esp += 4; SPILL(); return;
}

void f_949b30(void) {
  LOAD_REGS();
L_949b30: /* 949b30: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 949b33: xor eax, eax */
  eax = 0;
/* 949b35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 949b36: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 949b3a: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 949b3e: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 949b42: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 949b46: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 949b4a: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 949b4e: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 949b52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 949b53: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 949b55: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 949b57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 949b58: mov dword ptr [esp + 0x1c], 0x948ed0 */
  W32((uint32_t)(esp + 0x1cu), 0x948ed0u);
/* 949b60: mov dword ptr [esp + 0x28], 1 */
  W32((uint32_t)(esp + 0x28u), 0x1u);
/* 949b68: call 0x929df0 */
  esp -= 4; W32(esp, 0x949b6du); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 949b6d: push 0x949b90 */
  { uint32_t v = 0x949b90u; esp -= 4; W32(esp, v); }
/* 949b72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 949b73: call 0x929bc0 */
  esp -= 4; W32(esp, 0x949b78u); SPILL(); f_929bc0(); if (g_unwind) return; RELOAD();
/* 949b78: mov eax, 1 */
  eax = 0x1u;
/* 949b7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 949b7e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 949b81: ret 4 */
  esp += 8; SPILL(); return;
}

void f_949b90(void) {
  LOAD_REGS();
L_949b90: /* 949b90: ret  */
  esp += 4; SPILL(); return;
}

void f_949ba0(void) {
  LOAD_REGS();
L_949ba0: /* 949ba0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 949ba4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 949ba8: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 949bab: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 949baf: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* 949bb3: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 949bb6: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* 949bba: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 949bbe: fcom dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
/* 949bc4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 949bc6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 949bc9: jp 0x949c00 */
  if (pf) goto L_949c00;
L_949bcb: /* 949bcb: fcomp dword ptr [0xa16220] */
  fpu_com(ST0, F32((uint32_t)(0xa16220u)));
  FPOP();
/* 949bd1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 949bd3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 949bd6: jne 0x949c02 */
  if (!zf) goto L_949c02;
L_949bd8: /* 949bd8: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 949bdc: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 949be2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 949be4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 949be7: jp 0x949c02 */
  if (pf) goto L_949c02;
L_949be9: /* 949be9: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 949bed: fcomp dword ptr [0xa16220] */
  fpu_com(ST0, F32((uint32_t)(0xa16220u)));
  FPOP();
/* 949bf3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 949bf5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 949bf8: jne 0x949c02 */
  if (!zf) goto L_949c02;
L_949bfa: /* 949bfa: mov eax, 1 */
  eax = 0x1u;
/* 949bff: ret  */
  esp += 4; SPILL(); return;
L_949c00: /* 949c00: fstp st(0) */
  STI(0) = ST0; FPOP();
L_949c02: /* 949c02: xor eax, eax */
  eax = 0;
/* 949c04: ret  */
  esp += 4; SPILL(); return;
}

void f_949c10(void) {
  LOAD_REGS();
L_949c10: /* 949c10: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 949c14: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 949c18: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 949c1b: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 949c1f: fsub dword ptr [edx + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(edx + eax*4)));
/* 949c22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 949c23: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 949c27: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 949c2a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 949c2e: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 949c31: fsub dword ptr [edx + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(edx + eax*4)));
/* 949c34: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 949c37: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 949c38: ret  */
  esp += 4; SPILL(); return;
}

void f_949c40(void) {
  LOAD_REGS();
L_949c40: /* 949c40: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 949c44: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 949c48: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 949c4b: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 949c4f: fadd dword ptr [edx + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(edx + eax*4)));
/* 949c52: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 949c53: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 949c57: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 949c5a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 949c5e: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 949c61: fadd dword ptr [edx + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(edx + eax*4)));
/* 949c64: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 949c67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 949c68: ret  */
  esp += 4; SPILL(); return;
}

void f_949c70(void) {
  LOAD_REGS();
L_949c70: /* 949c70: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 949c74: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 949c78: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 949c7c: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* 949c7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 949c80: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 949c84: fmul dword ptr [esi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax*4)));
/* 949c87: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 949c8a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 949c8b: fmul dword ptr [edx + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edx + eax*4)));
/* 949c8e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 949c90: ret  */
  esp += 4; SPILL(); return;
}

void f_949ca0(void) {
  LOAD_REGS();
L_949ca0: /* 949ca0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 949ca4: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 949ca6: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 949caa: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 949cac: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 949cb2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 949cb4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 949cb7: jp 0x949cc1 */
  if (pf) goto L_949cc1;
L_949cb9: /* 949cb9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 949cbb: mov eax, 0xffffffff */
  eax = 0xffffffffu;
/* 949cc0: ret  */
  esp += 4; SPILL(); return;
L_949cc1: /* 949cc1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 949cc7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 949cc9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 949ccc: jne 0x949cd4 */
  if (!zf) goto L_949cd4;
L_949cce: /* 949cce: mov eax, 1 */
  eax = 0x1u;
/* 949cd3: ret  */
  esp += 4; SPILL(); return;
L_949cd4: /* 949cd4: xor eax, eax */
  eax = 0;
/* 949cd6: ret  */
  esp += 4; SPILL(); return;
}

void f_949ce0(void) {
  LOAD_REGS();
L_949ce0: /* 949ce0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 949ce4: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 949ce7: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 949ceb: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 949cee: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 949cf4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 949cf6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 949cf9: jp 0x949d03 */
  if (pf) goto L_949d03;
L_949cfb: /* 949cfb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 949cfd: mov eax, 0xffffffff */
  eax = 0xffffffffu;
/* 949d02: ret  */
  esp += 4; SPILL(); return;
L_949d03: /* 949d03: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 949d09: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 949d0b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 949d0e: jne 0x949d16 */
  if (!zf) goto L_949d16;
L_949d10: /* 949d10: mov eax, 1 */
  eax = 0x1u;
/* 949d15: ret  */
  esp += 4; SPILL(); return;
L_949d16: /* 949d16: xor eax, eax */
  eax = 0;
/* 949d18: ret  */
  esp += 4; SPILL(); return;
}

void f_949d20(void) {
  LOAD_REGS();
L_949d20: /* 949d20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 949d24: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 949d27: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 949d2b: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 949d2e: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 949d34: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 949d36: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 949d39: jp 0x949d43 */
  if (pf) goto L_949d43;
L_949d3b: /* 949d3b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 949d3d: mov eax, 0xffffffff */
  eax = 0xffffffffu;
/* 949d42: ret  */
  esp += 4; SPILL(); return;
L_949d43: /* 949d43: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 949d49: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 949d4b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 949d4e: jne 0x949d56 */
  if (!zf) goto L_949d56;
L_949d50: /* 949d50: mov eax, 1 */
  eax = 0x1u;
/* 949d55: ret  */
  esp += 4; SPILL(); return;
L_949d56: /* 949d56: xor eax, eax */
  eax = 0;
/* 949d58: ret  */
  esp += 4; SPILL(); return;
}

void f_949d60(void) {
  LOAD_REGS();
L_949d60: /* 949d60: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 949d63: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 949d67: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 949d69: fabs  */
  ST0 = fabs(ST0);
/* 949d6b: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 949d6e: fabs  */
  ST0 = fabs(ST0);
/* 949d70: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 949d74: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 949d77: fabs  */
  ST0 = fabs(ST0);
/* 949d79: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 949d7d: fcom dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
/* 949d81: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 949d83: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 949d86: jne 0x949d99 */
  if (!zf) goto L_949d99;
L_949d88: /* 949d88: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 949d8c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 949d8e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 949d91: jne 0x949daf */
  if (!zf) goto L_949daf;
L_949d93: /* 949d93: xor eax, eax */
  eax = 0;
/* 949d95: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 949d98: ret  */
  esp += 4; SPILL(); return;
L_949d99: /* 949d99: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 949d9b: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 949d9f: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 949da3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 949da5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 949da8: mov eax, 1 */
  eax = 0x1u;
/* 949dad: je 0x949db4 */
  if (zf) goto L_949db4;
L_949daf: /* 949daf: mov eax, 2 */
  eax = 0x2u;
L_949db4: /* 949db4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 949db7: ret  */
  esp += 4; SPILL(); return;
}

void f_949dc0(void) {
  LOAD_REGS();
L_949dc0: /* 949dc0: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 949dc3: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 949dc7: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 949dca: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 949dd2: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 949dda: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 949de2: jl 0x949ecd */
  if ((sf != of)) goto L_949ecd;
L_949de8: /* 949de8: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 949dec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 949ded: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 949dee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 949def: mov esi, 1 */
  esi = 0x1u;
/* 949df4: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 949df6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 949df7: mov edi, 1 */
  edi = 0x1u;
/* 949dfc: and esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  esi = r;
  }
/* 949dff: mov ecx, esi */
  ecx = esi;
/* 949e01: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 949e03: and edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 949e06: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 949e08: jle 0x949e2f */
  if ((zf || sf != of)) goto L_949e2f;
L_949e0a: /* 949e0a: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 949e0e: mov ebp, eax */
  ebp = eax;
L_949e10: /* 949e10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 949e11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 949e12: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 949e13: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 949e17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 949e18: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 949e1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 949e1d: call 0x949c40 */
  esp -= 4; W32(esp, 0x949e22u); SPILL(); f_949c40(); if (g_unwind) return; RELOAD();
/* 949e22: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 949e25: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 949e28: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 949e29: jne 0x949e10 */
  if (!zf) goto L_949e10;
L_949e2b: /* 949e2b: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
L_949e2f: /* 949e2f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 949e31: fild dword ptr [esp + 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 949e35: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 949e3b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 949e3d: fmul dword ptr [esp + esi*4 + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + esi*4 + 0x14u)));
/* 949e41: fstp dword ptr [esp + esi*4 + 0x14] */
  WF32((uint32_t)(esp + esi*4 + 0x14u), ST0); FPOP();
/* 949e45: fmul dword ptr [esp + edi*4 + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + edi*4 + 0x14u)));
/* 949e49: fstp dword ptr [esp + edi*4 + 0x14] */
  WF32((uint32_t)(esp + edi*4 + 0x14u), ST0); FPOP();
/* 949e4d: jle 0x949e97 */
  if ((zf || sf != of)) goto L_949e97;
L_949e4f: /* 949e4f: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 949e53: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 949e57: lea ebp, [ebx + edx*4] */
  ebp = (uint32_t)(ebx + edx*4);
/* 949e5a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 949e5e: mov edi, edi */
  edi = edi;
L_949e60: /* 949e60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 949e61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 949e62: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 949e66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 949e67: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 949e6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 949e6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 949e6d: call 0x949c10 */
  esp -= 4; W32(esp, 0x949e72u); SPILL(); f_949c10(); if (g_unwind) return; RELOAD();
/* 949e72: fld dword ptr [esp + edi*4 + 0x34] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x34u)); FPUSH(v); }
/* 949e76: fld dword ptr [esp + esi*4 + 0x34] */
  { double v = F32((uint32_t)(esp + esi*4 + 0x34u)); FPUSH(v); }
/* 949e7a: fpatan  */
  STI(1) = atan2(STI(1), ST0); FPOP();
/* 949e7c: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 949e80: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 949e83: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 949e86: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 949e89: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 949e8a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 949e8e: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 949e91: jne 0x949e60 */
  if (!zf) goto L_949e60;
L_949e93: /* 949e93: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
L_949e97: /* 949e97: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 949e9b: mov dword ptr [esp + 0x14], 0x949ca0 */
  W32((uint32_t)(esp + 0x14u), 0x949ca0u);
/* 949ea3: mov dword ptr [esp + 0x18], 0x949ce0 */
  W32((uint32_t)(esp + 0x18u), 0x949ce0u);
/* 949eab: mov dword ptr [esp + 0x1c], 0x949d20 */
  W32((uint32_t)(esp + 0x1cu), 0x949d20u);
/* 949eb3: mov ecx, dword ptr [esp + edx*4 + 0x14] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x14u));
/* 949eb7: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 949ebb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 949ebc: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 949ebe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 949ebf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 949ec0: call dword ptr [0xcfb068] */
  esp -= 4; W32(esp, 0x949ec6u); SPILL(); f_40317f(); if (g_unwind) return; /* MSVCR70!qsort */ RELOAD();
/* 949ec6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 949ec9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 949eca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 949ecb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 949ecc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_949ecd: /* 949ecd: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 949ed0: ret  */
  esp += 4; SPILL(); return;
}

void f_949ee0(void) {
  LOAD_REGS();
L_949ee0: /* 949ee0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 949ee4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 949ee5: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 949ee9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 949eea: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 949eee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 949eef: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 949ef1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 949ef3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 949ef4: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 949ef8: jle 0x949f1a */
  if ((zf || sf != of)) goto L_949f1a;
L_949efa: /* 949efa: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 949efe: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 949f02: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 949f03: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 949f04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 949f05: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 949f08: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 949f09: lea ecx, [edi + eax*4 - 0xc] */
  ecx = (uint32_t)(edi + eax*4 + 0xfffffff4u);
/* 949f0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 949f0e: call 0x949ba0 */
  esp -= 4; W32(esp, 0x949f13u); SPILL(); f_949ba0(); if (g_unwind) return; RELOAD();
/* 949f13: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 949f16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 949f18: jne 0x949f5e */
  if (!zf) goto L_949f5e;
L_949f1a: /* 949f1a: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 949f1d: jle 0x949f42 */
  if ((zf || sf != of)) goto L_949f42;
L_949f1f: /* 949f1f: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 949f23: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 949f27: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 949f28: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 949f29: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 949f2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 949f2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 949f2c: call 0x949ba0 */
  esp -= 4; W32(esp, 0x949f31u); SPILL(); f_949ba0(); if (g_unwind) return; RELOAD();
/* 949f31: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 949f34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 949f36: je 0x949f42 */
  if (zf) goto L_949f42;
L_949f38: /* 949f38: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 949f39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 949f3a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 949f3b: mov eax, 1 */
  eax = 0x1u;
/* 949f40: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 949f41: ret  */
  esp += 4; SPILL(); return;
L_949f42: /* 949f42: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 949f46: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 949f49: lea ecx, [eax + ebp] */
  ecx = (uint32_t)(eax + ebp);
/* 949f4c: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 949f4f: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 949f51: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 949f55: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 949f58: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 949f5c: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
L_949f5e: /* 949f5e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 949f5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 949f60: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 949f61: xor eax, eax */
  eax = 0;
/* 949f63: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 949f64: ret  */
  esp += 4; SPILL(); return;
}

void f_949f70(void) {
  LOAD_REGS();
L_949f70: /* 949f70: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 949f74: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 949f78: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  esp = r;
  }
/* 949f7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 949f7c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 949f7d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 949f7e: mov esi, 1 */
  esi = 0x1u;
/* 949f83: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 949f85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 949f86: mov edi, 1 */
  edi = 0x1u;
/* 949f8b: xor ebx, ebx */
  ebx = 0;
/* 949f8d: and esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  esi = r;
  }
/* 949f90: mov ecx, esi */
  ecx = esi;
/* 949f92: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 949f94: and edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 949f97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 949f99: jle 0x94a01d */
  if ((zf || sf != of)) goto L_94a01d;
L_949f9f: /* 949f9f: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 949fa3: mov ecx, 1 */
  ecx = 0x1u;
/* 949fa8: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 949faa: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 949fae: mov edi, edi */
  edi = edi;
L_949fb0: /* 949fb0: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 949fb4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 949fb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 949fb6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 949fb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 949fb8: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 949fbc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 949fbd: call 0x949c10 */
  esp -= 4; W32(esp, 0x949fc2u); SPILL(); f_949c10(); if (g_unwind) return; RELOAD();
/* 949fc2: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 949fc6: lea eax, [edx + ebx] */
  eax = (uint32_t)(edx + ebx);
/* 949fc9: sar eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 949fcc: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 949fcf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 949fd0: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 949fd2: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 949fd6: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 949fda: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 949fdb: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 949fde: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 949fe1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 949fe2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 949fe3: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 949fe7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 949fe8: call 0x949c10 */
  esp -= 4; W32(esp, 0x949fedu); SPILL(); f_949c10(); if (g_unwind) return; RELOAD();
/* 949fed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 949fee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 949fef: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 949ff3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 949ff4: lea edx, [esp + 0x54] */
  edx = (uint32_t)(esp + 0x54u);
/* 949ff8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 949ff9: call 0x949c70 */
  esp -= 4; W32(esp, 0x949ffeu); SPILL(); f_949c70(); if (g_unwind) return; RELOAD();
/* 949ffe: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94a004: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94a007: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a009: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94a00c: je 0x94a02a */
  if (zf) goto L_94a02a;
L_94a00e: /* 94a00e: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 94a012: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 94a016: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 94a019: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94a01b: jl 0x949fb0 */
  if ((sf != of)) goto L_949fb0;
L_94a01d: /* 94a01d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94a01e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94a01f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94a020: mov eax, 1 */
  eax = 0x1u;
/* 94a025: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94a026: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94a029: ret  */
  esp += 4; SPILL(); return;
L_94a02a: /* 94a02a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94a02b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94a02c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94a02d: xor eax, eax */
  eax = 0;
/* 94a02f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94a030: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94a033: ret  */
  esp += 4; SPILL(); return;
}

void f_94a040(void) {
  LOAD_REGS();
L_94a040: /* 94a040: sub esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94a046: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* 94a04d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94a04e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94a04f: mov ebp, dword ptr [esp + 0xa4] */
  ebp = R32((uint32_t)(esp + 0xa4u));
/* 94a056: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94a057: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94a058: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94a059: mov dword ptr [ebp], 0 */
  W32((uint32_t)(ebp), 0x0u);
/* 94a060: call 0x949d60 */
  esp -= 4; W32(esp, 0x94a065u); SPILL(); f_949d60(); if (g_unwind) return; RELOAD();
/* 94a065: mov edi, dword ptr [esp + 0xa4] */
  edi = R32((uint32_t)(esp + 0xa4u));
/* 94a06c: mov ecx, dword ptr [esp + 0xa0] */
  ecx = R32((uint32_t)(esp + 0xa0u));
/* 94a073: mov esi, eax */
  esi = eax;
/* 94a075: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94a076: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94a077: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94a078: mov dword ptr [esp + 0x5c], esi */
  W32((uint32_t)(esp + 0x5cu), esi);
/* 94a07c: call 0x949dc0 */
  esp -= 4; W32(esp, 0x94a081u); SPILL(); f_949dc0(); if (g_unwind) return; RELOAD();
/* 94a081: mov ebx, dword ptr [esp + 0xb8] */
  ebx = R32((uint32_t)(esp + 0xb8u));
/* 94a088: mov edx, dword ptr [esp + 0xb4] */
  edx = R32((uint32_t)(esp + 0xb4u));
/* 94a08f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94a090: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94a091: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94a092: call 0x949dc0 */
  esp -= 4; W32(esp, 0x94a097u); SPILL(); f_949dc0(); if (g_unwind) return; RELOAD();
/* 94a097: mov eax, dword ptr [esp + 0xb8] */
  eax = R32((uint32_t)(esp + 0xb8u));
/* 94a09e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94a0a1: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94a0a4: jne 0x94a0ec */
  if (!zf) goto L_94a0ec;
L_94a0a6: /* 94a0a6: mov eax, dword ptr [esp + 0xa4] */
  eax = R32((uint32_t)(esp + 0xa4u));
/* 94a0ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94a0ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94a0af: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94a0b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94a0b1: call 0x949f70 */
  esp -= 4; W32(esp, 0x94a0b6u); SPILL(); f_949f70(); if (g_unwind) return; RELOAD();
/* 94a0b6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94a0b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94a0bb: je 0x94a0ec */
  if (zf) goto L_94a0ec;
L_94a0bd: /* 94a0bd: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 94a0c0: mov edx, dword ptr [esp + 0xb0] */
  edx = R32((uint32_t)(esp + 0xb0u));
/* 94a0c7: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 94a0ca: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94a0cb: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 94a0ce: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 94a0d0: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 94a0d3: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 94a0d5: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 94a0d8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 94a0db: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 94a0de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94a0df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94a0e0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94a0e1: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 94a0e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94a0e5: add esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94a0eb: ret  */
  esp += 4; SPILL(); return;
L_94a0ec: /* 94a0ec: cmp dword ptr [esp + 0xa4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xa4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94a0f4: jne 0x94a131 */
  if (!zf) goto L_94a131;
L_94a0f6: /* 94a0f6: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 94a0fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94a0fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94a0ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94a100: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94a101: call 0x949f70 */
  esp -= 4; W32(esp, 0x94a106u); SPILL(); f_949f70(); if (g_unwind) return; RELOAD();
/* 94a106: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94a109: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94a10b: je 0x94a131 */
  if (zf) goto L_94a131;
L_94a10d: /* 94a10d: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 94a110: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 94a117: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 94a11a: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 94a11d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94a11e: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 94a121: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 94a123: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 94a125: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 94a128: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 94a12b: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 94a12e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_94a131: /* 94a131: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 94a138: mov eax, 2 */
  eax = 0x2u;
/* 94a13d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94a13f: jl 0x94a732 */
  if ((sf != of)) goto L_94a732;
L_94a145: /* 94a145: cmp dword ptr [esp + 0xa4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xa4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94a14c: jl 0x94a732 */
  if ((sf != of)) goto L_94a732;
L_94a152: /* 94a152: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 94a159: mov ecx, esi */
  ecx = esi;
/* 94a15b: mov ebx, 1 */
  ebx = 0x1u;
/* 94a160: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 94a162: mov ebp, 1 */
  ebp = 0x1u;
/* 94a167: xor esi, esi */
  esi = 0;
/* 94a169: mov eax, 1 */
  eax = 0x1u;
/* 94a16e: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebx = r;
  }
/* 94a171: mov ecx, ebx */
  ecx = ebx;
/* 94a173: shl ebp, cl */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
  }
/* 94a175: xor ecx, ecx */
  ecx = 0;
/* 94a177: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 94a17b: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 94a17f: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 94a183: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 94a187: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 94a18b: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 94a18f: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 94a196: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94a198: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 94a19c: add ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94a19e: and ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 94a1a1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94a1a3: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 94a1a7: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 94a1ab: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 94a1af: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 94a1b3: jl 0x94a6c7 */
  if ((sf != of)) goto L_94a6c7;
L_94a1b9: /* 94a1b9: jmp 0x94a1bf */
  goto L_94a1bf;
L_94a1bb: /* 94a1bb: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
L_94a1bf: /* 94a1bf: cmp dword ptr [esp + 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94a1c4: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 94a1c8: je 0x94a1eb */
  if (zf) goto L_94a1eb;
L_94a1ca: /* 94a1ca: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94a1cb: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 94a1ce: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 94a1d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94a1d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94a1d3: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 94a1d6: lea ecx, [edi + eax*4] */
  ecx = (uint32_t)(edi + eax*4);
/* 94a1d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94a1da: lea edx, [esp + 0x64] */
  edx = (uint32_t)(esp + 0x64u);
/* 94a1de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94a1df: call 0x949c10 */
  esp -= 4; W32(esp, 0x94a1e4u); SPILL(); f_949c10(); if (g_unwind) return; RELOAD();
/* 94a1e4: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 94a1e8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94a1eb: /* 94a1eb: cmp dword ptr [esp + 0x14], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94a1f0: je 0x94a21e */
  if (zf) goto L_94a21e;
L_94a1f2: /* 94a1f2: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 94a1f6: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 94a1f9: mov ecx, dword ptr [esp + 0xa8] */
  ecx = R32((uint32_t)(esp + 0xa8u));
/* 94a200: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94a201: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 94a204: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94a205: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94a206: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 94a209: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 94a20c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94a20d: lea edx, [esp + 0x70] */
  edx = (uint32_t)(esp + 0x70u);
/* 94a211: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94a212: call 0x949c10 */
  esp -= 4; W32(esp, 0x94a217u); SPILL(); f_949c10(); if (g_unwind) return; RELOAD();
/* 94a217: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 94a21b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94a21e: /* 94a21e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94a21f: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 94a222: mov eax, dword ptr [esp + 0xac] */
  eax = R32((uint32_t)(esp + 0xacu));
/* 94a229: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 94a22c: lea ecx, [edi + ecx*4] */
  ecx = (uint32_t)(edi + ecx*4);
/* 94a22f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94a230: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94a231: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 94a235: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 94a238: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94a239: lea edx, [esp + 0x88] */
  edx = (uint32_t)(esp + 0x88u);
/* 94a240: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94a241: call 0x949c10 */
  esp -= 4; W32(esp, 0x94a246u); SPILL(); f_949c10(); if (g_unwind) return; RELOAD();
/* 94a246: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 94a24a: mov ecx, dword ptr [esp + 0xbc] */
  ecx = R32((uint32_t)(esp + 0xbcu));
/* 94a251: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 94a254: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 94a257: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94a258: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94a259: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94a25a: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 94a25e: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 94a262: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 94a265: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 94a268: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94a269: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* 94a270: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94a271: call 0x949c10 */
  esp -= 4; W32(esp, 0x94a276u); SPILL(); f_949c10(); if (g_unwind) return; RELOAD();
/* 94a276: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94a277: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94a278: lea edx, [esp + 0x90] */
  edx = (uint32_t)(esp + 0x90u);
/* 94a27f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94a280: lea eax, [esp + 0x88] */
  eax = (uint32_t)(esp + 0x88u);
/* 94a287: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94a288: call 0x949c70 */
  esp -= 4; W32(esp, 0x94a28du); SPILL(); f_949c70(); if (g_unwind) return; RELOAD();
/* 94a28d: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 94a291: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94a292: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94a293: lea ecx, [esp + 0xb8] */
  ecx = (uint32_t)(esp + 0xb8u);
/* 94a29a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94a29b: lea edx, [esp + 0x98] */
  edx = (uint32_t)(esp + 0x98u);
/* 94a2a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94a2a3: call 0x949c70 */
  esp -= 4; W32(esp, 0x94a2a8u); SPILL(); f_949c70(); if (g_unwind) return; RELOAD();
/* 94a2a8: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 94a2ac: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94a2af: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94a2b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94a2b1: lea eax, [esp + 0x8c] */
  eax = (uint32_t)(esp + 0x8cu);
/* 94a2b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94a2b9: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 94a2bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94a2be: call 0x949c70 */
  esp -= 4; W32(esp, 0x94a2c3u); SPILL(); f_949c70(); if (g_unwind) return; RELOAD();
/* 94a2c3: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 94a2c7: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 94a2cb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94a2ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94a2d0: je 0x94a431 */
  if (zf) goto L_94a431;
L_94a2d6: /* 94a2d6: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94a2da: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 94a2de: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94a2e4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a2e6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94a2e9: jnp 0x94a304 */
  if (!pf) goto L_94a304;
L_94a2eb: /* 94a2eb: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94a2ef: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 94a2f3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94a2f9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a2fb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94a2fe: jp 0x94a431 */
  if (pf) goto L_94a431;
L_94a304: /* 94a304: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 94a308: fabs  */
  ST0 = fabs(ST0);
/* 94a30a: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 94a310: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a312: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94a315: jnp 0x94a431 */
  if (!pf) goto L_94a431;
L_94a31b: /* 94a31b: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 94a31f: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 94a323: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94a324: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94a325: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94a326: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94a327: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 94a32b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94a32c: call 0x949c10 */
  esp -= 4; W32(esp, 0x94a331u); SPILL(); f_949c10(); if (g_unwind) return; RELOAD();
/* 94a331: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 94a337: fdiv dword ptr [esp + 0x40] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x40u)));
/* 94a33b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94a33c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94a33d: lea edx, [esp + 0x88] */
  edx = (uint32_t)(esp + 0x88u);
/* 94a344: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94a345: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 94a34c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94a34d: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 94a351: call 0x949c70 */
  esp -= 4; W32(esp, 0x94a356u); SPILL(); f_949c70(); if (g_unwind) return; RELOAD();
/* 94a356: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 94a35a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94a35b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94a35c: lea ecx, [esp + 0x98] */
  ecx = (uint32_t)(esp + 0x98u);
/* 94a363: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94a364: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 94a368: lea edx, [esp + 0x84] */
  edx = (uint32_t)(esp + 0x84u);
/* 94a36f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94a370: call 0x949c70 */
  esp -= 4; W32(esp, 0x94a375u); SPILL(); f_949c70(); if (g_unwind) return; RELOAD();
/* 94a375: fmul dword ptr [esp + 0x70] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x70u)));
/* 94a379: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94a37c: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 94a380: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94a384: fcomp dword ptr [0xa216a4] */
  fpu_com(ST0, F32((uint32_t)(0xa216a4u)));
  FPOP();
/* 94a38a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a38c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94a38f: jne 0x94a431 */
  if (!zf) goto L_94a431;
L_94a395: /* 94a395: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94a399: fcomp dword ptr [0xa216a0] */
  fpu_com(ST0, F32((uint32_t)(0xa216a0u)));
  FPOP();
/* 94a39f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a3a1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94a3a4: jp 0x94a431 */
  if (pf) goto L_94a431;
L_94a3aa: /* 94a3aa: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 94a3ae: fcomp dword ptr [0xa216a4] */
  fpu_com(ST0, F32((uint32_t)(0xa216a4u)));
  FPOP();
/* 94a3b4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a3b6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94a3b9: jne 0x94a431 */
  if (!zf) goto L_94a431;
L_94a3bb: /* 94a3bb: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 94a3bf: fcomp dword ptr [0xa216a0] */
  fpu_com(ST0, F32((uint32_t)(0xa216a0u)));
  FPOP();
/* 94a3c5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a3c7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94a3ca: jp 0x94a431 */
  if (pf) goto L_94a431;
L_94a3cc: /* 94a3cc: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94a3d0: mov edx, dword ptr [esp + 0xb0] */
  edx = R32((uint32_t)(esp + 0xb0u));
/* 94a3d7: fmul dword ptr [esp + ebp*4 + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(esp + ebp*4 + 0x54u)));
/* 94a3db: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 94a3de: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94a3df: lea ecx, [eax + ebp] */
  ecx = (uint32_t)(eax + ebp);
/* 94a3e2: fadd dword ptr [edi + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + ecx*4)));
/* 94a3e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94a3e6: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94a3e9: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94a3eb: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 94a3ef: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 94a3f3: fmul dword ptr [esp + ebx*4 + 0x64] */
  ST0 = ST0 * (F32((uint32_t)(esp + ebx*4 + 0x64u)));
/* 94a3f7: fadd dword ptr [edi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + eax*4)));
/* 94a3fa: mov eax, dword ptr [esp + 0xbc] */
  eax = R32((uint32_t)(esp + 0xbcu));
/* 94a401: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 94a404: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94a405: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94a406: call 0x949ee0 */
  esp -= 4; W32(esp, 0x94a40bu); SPILL(); f_949ee0(); if (g_unwind) return; RELOAD();
/* 94a40b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94a40e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94a410: jne 0x94a6c7 */
  if (!zf) goto L_94a6c7;
L_94a416: /* 94a416: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 94a41a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94a420: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a422: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94a425: jp 0x94a45a */
  if (pf) goto L_94a45a;
L_94a427: /* 94a427: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 94a42f: jmp 0x94a438 */
  goto L_94a438;
L_94a431: /* 94a431: cmp dword ptr [esp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94a436: jne 0x94a464 */
  if (!zf) goto L_94a464;
L_94a438: /* 94a438: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94a43c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94a442: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a444: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94a447: jp 0x94a49f */
  if (pf) goto L_94a49f;
L_94a449: /* 94a449: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94a44d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94a453: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a455: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94a458: jne 0x94a49f */
  if (!zf) goto L_94a49f;
L_94a45a: /* 94a45a: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 94a462: jmp 0x94a46b */
  goto L_94a46b;
L_94a464: /* 94a464: cmp dword ptr [esp + 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94a469: jne 0x94a497 */
  if (!zf) goto L_94a497;
L_94a46b: /* 94a46b: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94a46f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94a475: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a477: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94a47a: jp 0x94a4c9 */
  if (pf) goto L_94a4c9;
L_94a47c: /* 94a47c: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94a480: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94a486: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a488: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94a48b: jne 0x94a49f */
  if (!zf) goto L_94a49f;
L_94a48d: /* 94a48d: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 94a495: jmp 0x94a49f */
  goto L_94a49f;
L_94a497: /* 94a497: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 94a49b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94a49d: je 0x94a4c9 */
  if (zf) goto L_94a4c9;
L_94a49f: /* 94a49f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94a4a3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94a4a9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a4ab: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94a4ae: jp 0x94a4c9 */
  if (pf) goto L_94a4c9;
L_94a4b0: /* 94a4b0: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94a4b4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94a4ba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a4bc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94a4bf: jp 0x94a4c9 */
  if (pf) goto L_94a4c9;
L_94a4c1: /* 94a4c1: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
L_94a4c9: /* 94a4c9: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 94a4cd: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94a4d3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a4d5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94a4d8: jne 0x94a4f5 */
  if (!zf) goto L_94a4f5;
L_94a4da: /* 94a4da: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94a4de: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94a4e4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a4e6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94a4e9: je 0x94a50e */
  if (zf) goto L_94a50e;
L_94a4eb: /* 94a4eb: mov dword ptr [esp + 0x14], 2 */
  W32((uint32_t)(esp + 0x14u), 0x2u);
/* 94a4f3: jmp 0x94a516 */
  goto L_94a516;
L_94a4f5: /* 94a4f5: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94a4f9: mov dword ptr [esp + 0x14], 2 */
  W32((uint32_t)(esp + 0x14u), 0x2u);
/* 94a501: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94a507: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a509: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94a50c: je 0x94a516 */
  if (zf) goto L_94a516;
L_94a50e: /* 94a50e: mov dword ptr [esp + 0x14], 1 */
  W32((uint32_t)(esp + 0x14u), 0x1u);
L_94a516: /* 94a516: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94a51a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94a520: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a522: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94a525: jp 0x94a549 */
  if (pf) goto L_94a549;
L_94a527: /* 94a527: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94a52b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94a531: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a533: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94a536: jp 0x94a549 */
  if (pf) goto L_94a549;
L_94a538: /* 94a538: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 94a53c: xor ecx, ecx */
  ecx = 0;
/* 94a53e: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94a541: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 94a544: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 94a545: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
L_94a549: /* 94a549: cmp dword ptr [esp + 0x14], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94a54e: jne 0x94a582 */
  if (!zf) goto L_94a582;
L_94a550: /* 94a550: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 94a554: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 94a55b: mov esi, eax */
  esi = eax;
/* 94a55d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94a55e: mov edx, eax */
  edx = eax;
/* 94a560: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 94a562: sar edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 94a565: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 94a567: cmp dword ptr [esp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94a56c: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 94a570: jne 0x94a5e2 */
  if (!zf) goto L_94a5e2;
L_94a572: /* 94a572: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 94a575: lea ecx, [eax + ebp] */
  ecx = (uint32_t)(eax + ebp);
/* 94a578: mov edx, dword ptr [edi + ecx*4] */
  edx = R32((uint32_t)(edi + ecx*4));
/* 94a57b: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94a57d: mov eax, dword ptr [edi + eax*4] */
  eax = R32((uint32_t)(edi + eax*4));
/* 94a580: jmp 0x94a5be */
  goto L_94a5be;
L_94a582: /* 94a582: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 94a586: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* 94a589: mov edx, eax */
  edx = eax;
/* 94a58b: sub edx, dword ptr [esp + 0xa4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xa4u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 94a592: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 94a596: sar edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 94a599: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 94a59b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 94a59f: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 94a5a3: cmp dword ptr [esp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94a5a7: jne 0x94a5e2 */
  if (!zf) goto L_94a5e2;
L_94a5a9: /* 94a5a9: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 94a5ac: mov ecx, dword ptr [esp + 0xa8] */
  ecx = R32((uint32_t)(esp + 0xa8u));
/* 94a5b3: lea edx, [eax + ebp] */
  edx = (uint32_t)(eax + ebp);
/* 94a5b6: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 94a5b9: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94a5bb: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
L_94a5be: /* 94a5be: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 94a5c5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94a5c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94a5c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94a5c8: mov edx, dword ptr [esp + 0xb8] */
  edx = R32((uint32_t)(esp + 0xb8u));
/* 94a5cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94a5d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94a5d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94a5d2: call 0x949ee0 */
  esp -= 4; W32(esp, 0x94a5d7u); SPILL(); f_949ee0(); if (g_unwind) return; RELOAD();
/* 94a5d7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94a5da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94a5dc: jne 0x94a6c7 */
  if (!zf) goto L_94a6c7;
L_94a5e2: /* 94a5e2: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94a5e6: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 94a5ea: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94a5f0: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 94a5f4: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 94a5f8: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 94a5fc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a5fe: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94a601: jp 0x94a60a */
  if (pf) goto L_94a60a;
L_94a603: /* 94a603: mov eax, 1 */
  eax = 0x1u;
/* 94a608: jmp 0x94a60c */
  goto L_94a60c;
L_94a60a: /* 94a60a: xor eax, eax */
  eax = 0;
L_94a60c: /* 94a60c: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94a610: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 94a614: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94a61a: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 94a61c: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 94a620: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a622: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94a625: jp 0x94a62e */
  if (pf) goto L_94a62e;
L_94a627: /* 94a627: mov eax, 1 */
  eax = 0x1u;
/* 94a62c: jmp 0x94a630 */
  goto L_94a630;
L_94a62e: /* 94a62e: xor eax, eax */
  eax = 0;
L_94a630: /* 94a630: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 94a634: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 94a636: mov eax, dword ptr [esp + 0xac] */
  eax = R32((uint32_t)(esp + 0xacu));
/* 94a63d: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94a640: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 94a644: jne 0x94a650 */
  if (!zf) goto L_94a650;
L_94a646: /* 94a646: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 94a64a: cmp edx, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94a64e: jg 0x94a669 */
  if ((!zf && sf == of)) goto L_94a669;
L_94a650: /* 94a650: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 94a654: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 94a658: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 94a659: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94a65b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94a65d: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 94a661: jle 0x94a1bb */
  if ((zf || sf != of)) goto L_94a1bb;
L_94a667: /* 94a667: jmp 0x94a6c7 */
  goto L_94a6c7;
L_94a669: /* 94a669: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 94a66d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94a66f: jne 0x94a694 */
  if (!zf) goto L_94a694;
L_94a671: /* 94a671: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 94a678: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 94a67a: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 94a67d: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 94a680: mov edx, ecx */
  edx = ecx;
/* 94a682: mov esi, edi */
  esi = edi;
/* 94a684: mov edi, dword ptr [esp + 0xb0] */
  edi = R32((uint32_t)(esp + 0xb0u));
/* 94a68b: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 94a68e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 94a690: mov ecx, edx */
  ecx = edx;
/* 94a692: jmp 0x94a6c2 */
  goto L_94a6c2;
L_94a694: /* 94a694: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 94a698: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94a69a: jne 0x94a6c7 */
  if (!zf) goto L_94a6c7;
L_94a69c: /* 94a69c: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 94a6a3: mov esi, dword ptr [esp + 0xa8] */
  esi = R32((uint32_t)(esp + 0xa8u));
/* 94a6aa: mov edi, dword ptr [esp + 0xb0] */
  edi = R32((uint32_t)(esp + 0xb0u));
/* 94a6b1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 94a6b3: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 94a6b6: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 94a6b9: mov eax, ecx */
  eax = ecx;
/* 94a6bb: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 94a6be: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 94a6c0: mov ecx, eax */
  ecx = eax;
L_94a6c2: /* 94a6c2: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 94a6c5: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
L_94a6c7: /* 94a6c7: mov ecx, dword ptr [esp + 0xac] */
  ecx = R32((uint32_t)(esp + 0xacu));
/* 94a6ce: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94a6d1: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 94a6d9: jle 0x94a732 */
  if ((zf || sf != of)) goto L_94a732;
L_94a6db: /* 94a6db: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 94a6e2: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 94a6e6: lea esi, [ecx + edx*4] */
  esi = (uint32_t)(ecx + edx*4);
/* 94a6e9: lea edx, [ecx + ebp*4] */
  edx = (uint32_t)(ecx + ebp*4);
/* 94a6ec: lea ecx, [ecx + ebx*4] */
  ecx = (uint32_t)(ecx + ebx*4);
/* 94a6ef: nop  */
L_94a6f0: /* 94a6f0: mov eax, dword ptr [esp + 0x94] */
  eax = R32((uint32_t)(esp + 0x94u));
/* 94a6f7: fld dword ptr [eax + ebx*4] */
  { double v = F32((uint32_t)(eax + ebx*4)); FPUSH(v); }
/* 94a6fa: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
/* 94a6fe: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94a700: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94a703: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94a706: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 94a709: fsubr dword ptr [esp + 0x98] */
  ST0 = (F32((uint32_t)(esp + 0x98u))) - ST0;
/* 94a710: fld dword ptr [eax + ebp*4] */
  { double v = F32((uint32_t)(eax + ebp*4)); FPUSH(v); }
/* 94a713: fmul dword ptr [edx - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff4u)));
/* 94a716: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94a718: fdiv dword ptr [eax + edi*4] */
  ST0 = ST0 / (F32((uint32_t)(eax + edi*4)));
/* 94a71b: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 94a71f: mov edi, dword ptr [esp + 0xac] */
  edi = R32((uint32_t)(esp + 0xacu));
/* 94a726: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94a727: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 94a72b: fstp dword ptr [esi - 0xc] */
  WF32((uint32_t)(esi + 0xfffffff4u), ST0); FPOP();
/* 94a72e: cmp eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94a730: jl 0x94a6f0 */
  if ((sf != of)) goto L_94a6f0;
L_94a732: /* 94a732: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94a733: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94a734: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94a735: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94a736: add esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94a73c: ret  */
  esp += 4; SPILL(); return;
}

void f_94a740(void) {
  LOAD_REGS();
L_94a740: /* 94a740: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 94a744: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 94a748: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94a749: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 94a74b: lea ecx, [edx + edx*2] */
  ecx = (uint32_t)(edx + edx*2);
/* 94a74e: lea esi, [esi + ecx*8] */
  esi = (uint32_t)(esi + ecx*8);
/* 94a751: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 94a754: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94a755: mov edi, dword ptr [eax + 0x34] */
  edi = R32((uint32_t)(eax + 0x34u));
/* 94a758: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 94a75b: lea edi, [edi + ecx*8] */
  edi = (uint32_t)(edi + ecx*8);
/* 94a75e: mov ecx, 6 */
  ecx = 0x6u;
/* 94a763: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 94a765: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 94a768: mov dword ptr [eax + edx*4 + 0x38], ecx */
  W32((uint32_t)(eax + edx*4 + 0x38u), ecx);
/* 94a76c: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 94a76f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 94a770: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94a771: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 94a774: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94a775: ret  */
  esp += 4; SPILL(); return;
}

void f_94a780(void) {
  LOAD_REGS();
L_94a780: /* 94a780: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 94a784: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 94a787: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 94a78b: fcomp dword ptr [ecx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xcu)));
  FPOP();
/* 94a78e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a790: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94a793: jp 0x94a79b */
  if (pf) goto L_94a79b;
L_94a795: /* 94a795: mov eax, 1 */
  eax = 0x1u;
/* 94a79a: ret  */
  esp += 4; SPILL(); return;
L_94a79b: /* 94a79b: xor eax, eax */
  eax = 0;
/* 94a79d: ret  */
  esp += 4; SPILL(); return;
}

void f_94a7a0(void) {
  LOAD_REGS();
L_94a7a0: /* 94a7a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94a7a1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 94a7a5: lea eax, [esi + 0x14] */
  eax = (uint32_t)(esi + 0x14u);
/* 94a7a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94a7a9: call 0x977da0 */
  esp -= 4; W32(esp, 0x94a7aeu); SPILL(); f_977da0(); if (g_unwind) return; RELOAD();
/* 94a7ae: mov ecx, eax */
  ecx = eax;
/* 94a7b0: xor edx, edx */
  edx = 0;
/* 94a7b2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94a7b5: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94a7b7: je 0x94a86f */
  if (zf) goto L_94a86f;
L_94a7bd: /* 94a7bd: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 94a7c1: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 94a7c7: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 94a7ca: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 94a7ce: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 94a7d1: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 94a7d5: mov dword ptr [ecx + 0x28], eax */
  W32((uint32_t)(ecx + 0x28u), eax);
/* 94a7d8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 94a7dc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94a7dd: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 94a7df: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 94a7e1: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 94a7e4: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 94a7e7: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 94a7ea: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 94a7ed: xor eax, eax */
  eax = 0;
/* 94a7ef: nop  */
L_94a7f0: /* 94a7f0: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 94a7f3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94a7f4: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94a7f7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94a7f9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94a7fb: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 94a7fd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94a7ff: jl 0x94a7f0 */
  if ((sf != of)) goto L_94a7f0;
L_94a801: /* 94a801: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 94a807: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a809: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94a80c: jne 0x94a82e */
  if (!zf) goto L_94a82e;
L_94a80e: /* 94a80e: fsqrt  */
  ST0 = sqrt(ST0);
/* 94a810: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 94a816: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 94a818: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94a81a: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94a81c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 94a81e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94a820: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94a823: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 94a826: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94a829: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 94a82c: jmp 0x94a842 */
  goto L_94a842;
L_94a82e: /* 94a82e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94a830: mov dword ptr [ecx], 0x3f800000 */
  W32((uint32_t)(ecx), 0x3f800000u);
/* 94a836: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 94a83c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 94a83f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_94a842: /* 94a842: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 94a845: lea edx, [esi + 0x38] */
  edx = (uint32_t)(esi + 0x38u);
/* 94a848: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 94a84a: lea eax, [ecx + 0x18] */
  eax = (uint32_t)(ecx + 0x18u);
/* 94a84d: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 94a84f: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 94a852: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 94a855: mov edi, dword ptr [edx + 8] */
  edi = R32((uint32_t)(edx + 0x8u));
/* 94a858: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 94a85b: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 94a85e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94a85f: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 94a862: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94a863: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 94a866: call 0x975a10 */
  esp -= 4; W32(esp, 0x94a86bu); SPILL(); f_975a10(); if (g_unwind) return; RELOAD();
/* 94a86b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94a86e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_94a86f: /* 94a86f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94a870: ret  */
  esp += 4; SPILL(); return;
}

void f_94a880(void) {
  LOAD_REGS();
L_94a880: /* 94a880: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94a881: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 94a885: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 94a888: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94a889: call 0x975a80 */
  esp -= 4; W32(esp, 0x94a88eu); SPILL(); f_975a80(); if (g_unwind) return; RELOAD();
/* 94a88e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94a891: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 94a894: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94a895: ret  */
  esp += 4; SPILL(); return;
}

void f_94a8a0(void) {
  LOAD_REGS();
L_94a8a0: /* 94a8a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94a8a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94a8a4: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 94a8a8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94a8a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94a8aa: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 94a8ae: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 94a8b1: xor edx, edx */
  edx = 0;
/* 94a8b3: mov eax, 1 */
  eax = 0x1u;
/* 94a8b8: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94a8ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94a8bb: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 94a8bf: jl 0x94a8e8 */
  if ((sf != of)) goto L_94a8e8;
L_94a8c1: /* 94a8c1: lea ebp, [esi + 0x18] */
  ebp = (uint32_t)(esi + 0x18u);
/* 94a8c4: lea esi, [ebx + 0x38] */
  esi = (uint32_t)(ebx + 0x38u);
L_94a8c7: /* 94a8c7: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94a8c9: je 0x94a8d4 */
  if (zf) goto L_94a8d4;
L_94a8cb: /* 94a8cb: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 94a8ce: cmp edi, dword ptr [esi] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94a8d0: je 0x94a8d4 */
  if (zf) goto L_94a8d4;
L_94a8d2: /* 94a8d2: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
L_94a8d4: /* 94a8d4: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94a8d6: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 94a8d9: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 94a8dc: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94a8de: jle 0x94a8c7 */
  if ((zf || sf != of)) goto L_94a8c7;
L_94a8e0: /* 94a8e0: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 94a8e4: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_94a8e8: /* 94a8e8: mov eax, edx */
  eax = edx;
/* 94a8ea: not eax */
  eax = ~eax;
/* 94a8ec: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 94a8ee: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 94a8f0: mov dword ptr [ecx + 0x1bc], eax */
  W32((uint32_t)(ecx + 0x1bcu), eax);
/* 94a8f6: xor eax, eax */
  eax = 0;
/* 94a8f8: mov ebp, 1 */
  ebp = 0x1u;
/* 94a8fd: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94a8ff: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 94a903: jl 0x94a9b3 */
  if ((sf != of)) goto L_94a9b3;
L_94a909: /* 94a909: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 94a90d: lea eax, [ebx + 0x38] */
  eax = (uint32_t)(ebx + 0x38u);
/* 94a910: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 94a914: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 94a917: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 94a91b: nop  */
/* 94a91c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_94a920: /* 94a920: test edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94a922: je 0x94a983 */
  if (zf) goto L_94a983;
L_94a924: /* 94a924: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 94a926: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 94a92a: mov dword ptr [ecx + 0x1c0], edx */
  W32((uint32_t)(ecx + 0x1c0u), edx);
/* 94a930: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 94a932: mov dword ptr [ecx + 0x1c4], ebp */
  W32((uint32_t)(ecx + 0x1c4u), ebp);
/* 94a938: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 94a93a: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 94a93c: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 94a93f: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 94a942: lea esi, [ecx + edx*8] */
  esi = (uint32_t)(ecx + edx*8);
/* 94a945: add edi, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 94a949: mov ecx, 6 */
  ecx = 0x6u;
/* 94a94e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 94a950: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 94a952: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 94a956: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 94a958: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 94a95a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94a95b: call 0x947410 */
  esp -= 4; W32(esp, 0x94a960u); SPILL(); f_947410(); if (g_unwind) return; RELOAD();
/* 94a960: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 94a962: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94a963: call 0x947490 */
  esp -= 4; W32(esp, 0x94a968u); SPILL(); f_947490(); if (g_unwind) return; RELOAD();
/* 94a968: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 94a96a: mov ecx, dword ptr [eax + 0x1bc] */
  ecx = R32((uint32_t)(eax + 0x1bcu));
/* 94a970: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 94a974: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94a977: or ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 94a979: mov dword ptr [eax + 0x1bc], ecx */
  W32((uint32_t)(eax + 0x1bcu), ecx);
/* 94a97f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
L_94a983: /* 94a983: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 94a987: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 94a98b: shl ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 94a98d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 94a98e: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 94a992: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 94a996: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94a999: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 94a99c: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 94a99f: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94a9a1: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 94a9a5: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 94a9a9: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 94a9ad: jle 0x94a920 */
  if ((zf || sf != of)) goto L_94a920;
L_94a9b3: /* 94a9b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94a9b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94a9b5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94a9b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94a9b7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94a9ba: ret  */
  esp += 4; SPILL(); return;
}

void f_94a9c0(void) {
  LOAD_REGS();
L_94a9c0: /* 94a9c0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94a9c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94a9c4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94a9c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94a9c6: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 94a9ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94a9cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94a9cc: call 0x946de0 */
  esp -= 4; W32(esp, 0x94a9d1u); SPILL(); f_946de0(); if (g_unwind) return; RELOAD();
/* 94a9d1: fld dword ptr [esi + 0x1b8] */
  { double v = F32((uint32_t)(esi + 0x1b8u)); FPUSH(v); }
/* 94a9d7: fmul dword ptr [0xa0c188] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c188u)));
/* 94a9dd: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 94a9e1: mov ebp, eax */
  ebp = eax;
/* 94a9e3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94a9e6: fcomp dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
  FPOP();
/* 94a9ea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94a9ec: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94a9ef: jne 0x94a9fd */
  if (!zf) goto L_94a9fd;
L_94a9f1: /* 94a9f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94a9f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94a9f3: call 0x946e30 */
  esp -= 4; W32(esp, 0x94a9f8u); SPILL(); f_946e30(); if (g_unwind) return; RELOAD();
/* 94a9f8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94a9fa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94a9fd: /* 94a9fd: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 94aa01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94aa02: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 94aa04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94aa05: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94aa06: call 0x9472e0 */
  esp -= 4; W32(esp, 0x94aa0bu); SPILL(); f_9472e0(); if (g_unwind) return; RELOAD();
/* 94aa0b: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 94aa0f: fld dword ptr [esi + 0x1b8] */
  { double v = F32((uint32_t)(esi + 0x1b8u)); FPUSH(v); }
/* 94aa15: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94aa18: fmul dword ptr [0xa0c188] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c188u)));
/* 94aa1e: fcomp dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
  FPOP();
/* 94aa22: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94aa24: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94aa27: jne 0x94aab3 */
  if (!zf) goto L_94aab3;
L_94aa2d: /* 94aa2d: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 94aa2f: mov ecx, 6 */
  ecx = 0x6u;
/* 94aa34: fchs  */
  ST0 = -ST0;
/* 94aa36: mov esi, ebp */
  esi = ebp;
/* 94aa38: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94aa3c: lea edi, [esp + 0x1c] */
  edi = (uint32_t)(esp + 0x1cu);
/* 94aa40: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 94aa43: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 94aa45: fchs  */
  ST0 = -ST0;
/* 94aa47: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 94aa4b: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 94aa4e: fchs  */
  ST0 = -ST0;
/* 94aa50: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 94aa54: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 94aa58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94aa59: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 94aa5b: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 94aa5f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94aa60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94aa61: call 0x9472e0 */
  esp -= 4; W32(esp, 0x94aa66u); SPILL(); f_9472e0(); if (g_unwind) return; RELOAD();
/* 94aa66: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 94aa6a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94aa6d: fld dword ptr [eax + 0x1b8] */
  { double v = F32((uint32_t)(eax + 0x1b8u)); FPUSH(v); }
/* 94aa73: fmul dword ptr [0xa0c188] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c188u)));
/* 94aa79: fsubr dword ptr [esp + 0x38] */
  ST0 = (F32((uint32_t)(esp + 0x38u))) - ST0;
/* 94aa7d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94aa7f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 94aa81: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94aa83: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94aa86: jp 0x94aaa4 */
  if (pf) goto L_94aaa4;
L_94aa88: /* 94aa88: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 94aa8c: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 94aa90: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 94aa94: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94aa95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94aa96: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94aa97: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 94aa99: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 94aa9c: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 94aa9f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94aaa0: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94aaa3: ret  */
  esp += 4; SPILL(); return;
L_94aaa4: /* 94aaa4: mov ecx, 6 */
  ecx = 0x6u;
/* 94aaa9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94aaab: lea esi, [esp + 0x1c] */
  esi = (uint32_t)(esp + 0x1cu);
/* 94aaaf: mov edi, ebp */
  edi = ebp;
/* 94aab1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_94aab3: /* 94aab3: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94aab7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94aab8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94aab9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94aaba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94aabb: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94aabe: ret  */
  esp += 4; SPILL(); return;
}

void f_94aac0(void) {
  LOAD_REGS();
L_94aac0: /* 94aac0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94aac3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94aac4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94aac5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94aac6: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 94aaca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94aacb: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 94aacf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94aad1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94aad2: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 94aad4: mov dword ptr [esi + 0x28], 0 */
  W32((uint32_t)(esi + 0x28u), 0x0u);
/* 94aadb: call 0x94a740 */
  esp -= 4; W32(esp, 0x94aae0u); SPILL(); f_94a740(); if (g_unwind) return; RELOAD();
/* 94aae0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 94aae2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94aae3: call 0x94a740 */
  esp -= 4; W32(esp, 0x94aae8u); SPILL(); f_94a740(); if (g_unwind) return; RELOAD();
/* 94aae8: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 94aaea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94aaeb: call 0x94a740 */
  esp -= 4; W32(esp, 0x94aaf0u); SPILL(); f_94a740(); if (g_unwind) return; RELOAD();
/* 94aaf0: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 94aaf2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94aaf3: call 0x94a740 */
  esp -= 4; W32(esp, 0x94aaf8u); SPILL(); f_94a740(); if (g_unwind) return; RELOAD();
/* 94aaf8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94aafb: mov ebp, 4 */
  ebp = 0x4u;
L_94ab00: /* 94ab00: mov eax, dword ptr [0xaf40b4] */
  eax = R32((uint32_t)(0xaf40b4u));
/* 94ab05: mov ebx, dword ptr [eax + ebp] */
  ebx = R32((uint32_t)(eax + ebp));
/* 94ab08: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94ab09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94ab0b: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 94ab0f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94ab10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94ab11: call 0x946c60 */
  esp -= 4; W32(esp, 0x94ab16u); SPILL(); f_946c60(); if (g_unwind) return; RELOAD();
/* 94ab16: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ab19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ab1b: je 0x94ab26 */
  if (zf) goto L_94ab26;
L_94ab1d: /* 94ab1d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94ab1f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94ab21: jmp 0x94abd7 */
  goto L_94abd7;
L_94ab26: /* 94ab26: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94ab29: je 0x94ab56 */
  if (zf) goto L_94ab56;
L_94ab2b: /* 94ab2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94ab2c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94ab2e: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* 94ab31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94ab32: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 94ab36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94ab37: call 0x946c60 */
  esp -= 4; W32(esp, 0x94ab3cu); SPILL(); f_946c60(); if (g_unwind) return; RELOAD();
/* 94ab3c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ab3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ab41: je 0x94ab56 */
  if (zf) goto L_94ab56;
L_94ab43: /* 94ab43: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94ab45: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 94ab47: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94ab48: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 94ab4c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94ab4d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94ab4e: call 0x94a7a0 */
  esp -= 4; W32(esp, 0x94ab53u); SPILL(); f_94a7a0(); if (g_unwind) return; RELOAD();
/* 94ab53: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94ab56: /* 94ab56: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94ab59: je 0x94ab86 */
  if (zf) goto L_94ab86;
L_94ab5b: /* 94ab5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94ab5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94ab5e: lea eax, [ebx - 2] */
  eax = (uint32_t)(ebx + 0xfffffffeu);
/* 94ab61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94ab62: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 94ab66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94ab67: call 0x946c60 */
  esp -= 4; W32(esp, 0x94ab6cu); SPILL(); f_946c60(); if (g_unwind) return; RELOAD();
/* 94ab6c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ab6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ab71: je 0x94ab86 */
  if (zf) goto L_94ab86;
L_94ab73: /* 94ab73: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94ab75: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 94ab77: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94ab78: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 94ab7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94ab7d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94ab7e: call 0x94a7a0 */
  esp -= 4; W32(esp, 0x94ab83u); SPILL(); f_94a7a0(); if (g_unwind) return; RELOAD();
/* 94ab83: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94ab86: /* 94ab86: test bl, 4 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94ab89: je 0x94abb6 */
  if (zf) goto L_94abb6;
L_94ab8b: /* 94ab8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94ab8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94ab8e: lea eax, [ebx - 4] */
  eax = (uint32_t)(ebx + 0xfffffffcu);
/* 94ab91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94ab92: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 94ab96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94ab97: call 0x946c60 */
  esp -= 4; W32(esp, 0x94ab9cu); SPILL(); f_946c60(); if (g_unwind) return; RELOAD();
/* 94ab9c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ab9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94aba1: je 0x94abb6 */
  if (zf) goto L_94abb6;
L_94aba3: /* 94aba3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94aba5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 94aba7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94aba8: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 94abac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94abad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94abae: call 0x94a7a0 */
  esp -= 4; W32(esp, 0x94abb3u); SPILL(); f_94a7a0(); if (g_unwind) return; RELOAD();
/* 94abb3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94abb6: /* 94abb6: test bl, 8 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94abb9: je 0x94abe6 */
  if (zf) goto L_94abe6;
L_94abbb: /* 94abbb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94abbc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94abbe: lea eax, [ebx - 8] */
  eax = (uint32_t)(ebx + 0xfffffff8u);
/* 94abc1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94abc2: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 94abc6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94abc7: call 0x946c60 */
  esp -= 4; W32(esp, 0x94abccu); SPILL(); f_946c60(); if (g_unwind) return; RELOAD();
/* 94abcc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94abcf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94abd1: je 0x94abe6 */
  if (zf) goto L_94abe6;
L_94abd3: /* 94abd3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94abd5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
L_94abd7: /* 94abd7: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 94abdb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94abdc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94abdd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94abde: call 0x94a7a0 */
  esp -= 4; W32(esp, 0x94abe3u); SPILL(); f_94a7a0(); if (g_unwind) return; RELOAD();
/* 94abe3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94abe6: /* 94abe6: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 94abe9: cmp ebp, 0x14 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94abec: jl 0x94ab00 */
  if ((sf != of)) goto L_94ab00;
L_94abf2: /* 94abf2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94abf3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94abf4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94abf5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94abf6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94abf9: ret  */
  esp += 4; SPILL(); return;
}
