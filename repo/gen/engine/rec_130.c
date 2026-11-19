#include "recomp.h"
#include "rec_mod.h"

void f_941010(void) {
  LOAD_REGS();
L_941010: /* 941010: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 941013: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 941014: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 941015: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 941016: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 94101a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 94101c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94101d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94101e: call 0x928730 */
  esp -= 4; W32(esp, 0x941023u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 941023: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 941026: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941027: mov ebx, eax */
  ebx = eax;
/* 941029: call 0x928730 */
  esp -= 4; W32(esp, 0x94102eu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 94102e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 941030: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941031: mov edi, eax */
  edi = eax;
/* 941033: call 0x928610 */
  esp -= 4; W32(esp, 0x941038u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 941038: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 94103c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 94103f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941040: call 0x928610 */
  esp -= 4; W32(esp, 0x941045u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 941045: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 941049: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94104b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94104c: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 941050: call 0x9287f0 */
  esp -= 4; W32(esp, 0x941055u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 941055: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 941058: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941059: mov ebp, eax */
  ebp = eax;
/* 94105b: call 0x9287f0 */
  esp -= 4; W32(esp, 0x941060u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 941060: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 941064: xor eax, eax */
  eax = 0;
/* 941066: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 941067: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 94106a: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 94106d: call 0x92d570 */
  esp -= 4; W32(esp, 0x941072u); SPILL(); f_92d570(); if (g_unwind) return; RELOAD();
/* 941072: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 941076: fld dword ptr [ebx + 0x30] */
  { double v = F32((uint32_t)(ebx + 0x30u)); FPUSH(v); }
/* 941079: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 94107c: fsub dword ptr [edi + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x30u)));
/* 94107f: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* 941082: fld dword ptr [ebx + 0x34] */
  { double v = F32((uint32_t)(ebx + 0x34u)); FPUSH(v); }
/* 941085: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 941088: fsub dword ptr [edi + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x34u)));
/* 94108b: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 94108f: fld dword ptr [ebx + 0x38] */
  { double v = F32((uint32_t)(ebx + 0x38u)); FPUSH(v); }
/* 941092: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 941096: fsub dword ptr [edi + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x38u)));
/* 941099: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 94109d: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9410a1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9410a3: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 9410a7: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9410a9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9410ab: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 9410ad: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 9410b1: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 9410b3: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9410b5: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 9410b9: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 9410bb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9410bd: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 9410c1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9410c3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9410c6: jne 0x9410d6 */
  if (!zf) goto L_9410d6;
L_9410c8: /* 9410c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9410c9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9410cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9410cc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9410cd: xor eax, eax */
  eax = 0;
/* 9410cf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9410d0: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9410d3: ret 8 */
  esp += 12; SPILL(); return;
L_9410d6: /* 9410d6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 9410d9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9410db: mov eax, 1 */
  eax = 0x1u;
/* 9410e0: jle 0x94117b */
  if ((zf || sf != of)) goto L_94117b;
L_9410e6: /* 9410e6: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9410e9: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9410ed: mov word ptr [ecx + 0x1c], 0x203 */
  W16((uint32_t)(ecx + 0x1cu), 0x203u);
/* 9410f3: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9410f6: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 9410f9: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9410fd: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 941100: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 941104: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 941107: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94110a: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 94110d: fstp dword ptr [ecx + 0x18] */
  WF32((uint32_t)(ecx + 0x18u), ST0); FPOP();
/* 941110: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 941113: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 941117: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 941118: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 94111c: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 941120: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 941124: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 941128: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94112c: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 941130: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 941134: fsubr dword ptr [ebx + 0x30] */
  ST0 = (F32((uint32_t)(ebx + 0x30u))) - ST0;
/* 941137: fld dword ptr [ebx + 0x34] */
  { double v = F32((uint32_t)(ebx + 0x34u)); FPUSH(v); }
/* 94113a: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 94113e: fld dword ptr [ebx + 0x38] */
  { double v = F32((uint32_t)(ebx + 0x38u)); FPUSH(v); }
/* 941141: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 941145: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 941149: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 94114d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94114f: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 941151: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 941154: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 941158: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 94115b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 94115f: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 941162: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 941166: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 941169: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 94116c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 94116f: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 941172: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 941173: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 941174: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 941175: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941178: ret 8 */
  esp += 12; SPILL(); return;
L_94117b: /* 94117b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94117c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94117e: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 941181: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 941182: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 941183: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 941184: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941187: ret 8 */
  esp += 12; SPILL(); return;
}

void f_941190(void) {
  LOAD_REGS();
L_941190: /* 941190: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 941193: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 941197: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 94119b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94119c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94119d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94119e: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 9411a2: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 9411a4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 9411a7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9411a9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 9411ab: mov ecx, dword ptr [edx + 0x80] */
  ecx = R32((uint32_t)(edx + 0x80u));
/* 9411b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9411b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9411b3: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 9411b7: call 0x928760 */
  esp -= 4; W32(esp, 0x9411bcu); SPILL(); f_928760(); if (g_unwind) return; RELOAD();
/* 9411bc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9411be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9411bf: mov edi, eax */
  edi = eax;
/* 9411c1: call 0x928730 */
  esp -= 4; W32(esp, 0x9411c6u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 9411c6: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9411ca: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9411cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9411ce: call 0x928760 */
  esp -= 4; W32(esp, 0x9411d3u); SPILL(); f_928760(); if (g_unwind) return; RELOAD();
/* 9411d3: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9411d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9411d7: mov ebx, eax */
  ebx = eax;
/* 9411d9: call 0x928730 */
  esp -= 4; W32(esp, 0x9411deu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 9411de: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9411e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9411e1: call 0x9287f0 */
  esp -= 4; W32(esp, 0x9411e6u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 9411e6: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 9411ea: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9411ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9411ee: call 0x9287f0 */
  esp -= 4; W32(esp, 0x9411f3u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 9411f3: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 9411f5: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 9411f9: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 9411fd: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 941200: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941201: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 941205: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 941208: mov ebp, eax */
  ebp = eax;
/* 94120a: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 94120e: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 941210: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 941214: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 941217: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 94121b: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 94121e: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 941222: call 0x92d570 */
  esp -= 4; W32(esp, 0x941227u); SPILL(); f_92d570(); if (g_unwind) return; RELOAD();
/* 941227: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 94122b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 94122e: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 941232: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941233: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941234: call 0x928730 */
  esp -= 4; W32(esp, 0x941239u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 941239: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94123a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94123b: call 0x945150 */
  esp -= 4; W32(esp, 0x941240u); SPILL(); f_945150(); if (g_unwind) return; RELOAD();
/* 941240: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 941244: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 941248: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 94124c: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 94124f: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 941252: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 941256: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 94125a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94125b: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 94125f: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 941263: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 941267: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 94126b: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 94126f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941270: call 0x928730 */
  esp -= 4; W32(esp, 0x941275u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 941275: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941276: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 941277: call 0x945190 */
  esp -= 4; W32(esp, 0x94127cu); SPILL(); f_945190(); if (g_unwind) return; RELOAD();
/* 94127c: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 941280: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 941284: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 941285: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 941289: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94128a: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 94128e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94128f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 941290: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 941292: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 941296: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 94129a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94129c: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 9412a0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9412a2: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9412a6: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9412a8: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9412ac: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9412ae: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9412b0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9412b2: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9412b4: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9412b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9412b8: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 9412ba: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 9412bc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9412be: fsqrt  */
  ST0 = sqrt(ST0);
/* 9412c0: fstp st(4) */
  STI(4) = ST0; FPOP();
/* 9412c2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9412c4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9412c6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9412c8: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9412cc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9412ce: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 9412d2: fmul qword ptr [0xa1f978] */
  ST0 = ST0 * (F64((uint32_t)(0xa1f978u)));
/* 9412d8: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 9412da: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9412dc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9412df: jne 0x9412ed */
  if (!zf) goto L_9412ed;
L_9412e1: /* 9412e1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9412e3: xor eax, eax */
  eax = 0;
/* 9412e5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9412e7: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9412ea: ret 0xc */
  esp += 16; SPILL(); return;
L_9412ed: /* 9412ed: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9412ef: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 9412f3: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 9412f7: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 9412f9: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 9412fc: mov eax, 1 */
  eax = 0x1u;
/* 941301: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 941303: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941306: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_941310(void) {
  LOAD_REGS();
L_941310: /* 941310: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 941313: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 941317: xor eax, eax */
  eax = 0;
/* 941319: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 94131d: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 941321: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 941325: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 941329: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 94132d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94132e: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 941330: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 941332: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941333: mov dword ptr [esp + 0x18], 0x941010 */
  W32((uint32_t)(esp + 0x18u), 0x941010u);
/* 94133b: mov dword ptr [esp + 0x1c], 0x941190 */
  W32((uint32_t)(esp + 0x1cu), 0x941190u);
/* 941343: call 0x929df0 */
  esp -= 4; W32(esp, 0x941348u); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 941348: mov eax, 1 */
  eax = 0x1u;
/* 94134d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941350: ret 4 */
  esp += 8; SPILL(); return;
}

void f_941360(void) {
  LOAD_REGS();
L_941360: /* 941360: sub esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 941366: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 941367: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 941368: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 941369: mov esi, dword ptr [esp + 0xa8] */
  esi = R32((uint32_t)(esp + 0xa8u));
/* 941370: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 941372: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 941373: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941374: call 0x928730 */
  esp -= 4; W32(esp, 0x941379u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 941379: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 94137c: mov ebp, eax */
  ebp = eax;
/* 94137e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94137f: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 941383: call 0x928730 */
  esp -= 4; W32(esp, 0x941388u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 941388: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 94138a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94138b: mov ebx, eax */
  ebx = eax;
/* 94138d: call 0x928610 */
  esp -= 4; W32(esp, 0x941392u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 941392: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 941396: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 941399: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94139a: call 0x928610 */
  esp -= 4; W32(esp, 0x94139fu); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 94139f: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 9413a3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9413a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9413a6: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 9413aa: call 0x9287f0 */
  esp -= 4; W32(esp, 0x9413afu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 9413af: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 9413b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9413b3: mov edi, eax */
  edi = eax;
/* 9413b5: call 0x9287f0 */
  esp -= 4; W32(esp, 0x9413bau); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 9413ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9413bb: mov esi, eax */
  esi = eax;
/* 9413bd: call 0x92de80 */
  esp -= 4; W32(esp, 0x9413c2u); SPILL(); f_92de80(); if (g_unwind) return; RELOAD();
/* 9413c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9413c3: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9413c7: call 0x92d570 */
  esp -= 4; W32(esp, 0x9413ccu); SPILL(); f_92d570(); if (g_unwind) return; RELOAD();
/* 9413cc: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 9413d0: mov edi, dword ptr [esp + 0xb0] */
  edi = R32((uint32_t)(esp + 0xb0u));
/* 9413d7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9413d8: xor esi, esi */
  esi = 0;
/* 9413da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9413db: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 9413df: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 9413e2: mov dword ptr [edi + 0x10], esi */
  W32((uint32_t)(edi + 0x10u), esi);
/* 9413e5: call 0x93bb50 */
  esp -= 4; W32(esp, 0x9413eau); SPILL(); f_93bb50(); if (g_unwind) return; RELOAD();
/* 9413ea: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9413f0: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 9413f4: xor ebx, ebx */
  ebx = 0;
/* 9413f6: mov esi, ebp */
  esi = ebp;
/* 9413f8: lea eax, [esp + 0x68] */
  eax = (uint32_t)(esp + 0x68u);
/* 9413fc: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 9413fe: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 941402: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 941406: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 94140a: xor edx, edx */
  edx = 0;
/* 94140c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_941410: /* 941410: fld dword ptr [esp + edx + 0x68] */
  { double v = F32((uint32_t)(esp + edx + 0x68u)); FPUSH(v); }
/* 941414: lea ecx, [esp + edx + 0x68] */
  ecx = (uint32_t)(esp + edx + 0x68u);
/* 941418: fcomp dword ptr [esi + ecx] */
  fpu_com(ST0, F32((uint32_t)(esi + ecx)));
  FPOP();
/* 94141b: fld dword ptr [esi + ecx] */
  { double v = F32((uint32_t)(esi + ecx)); FPUSH(v); }
/* 94141e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 941420: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 941423: jne 0x941434 */
  if (!zf) goto L_941434;
L_941425: /* 941425: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 941427: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 941428: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94142a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94142c: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 94142e: fstp dword ptr [esp + edx + 0x1c] */
  WF32((uint32_t)(esp + edx + 0x1cu), ST0); FPOP();
/* 941432: jmp 0x941450 */
  goto L_941450;
L_941434: /* 941434: fchs  */
  ST0 = -ST0;
/* 941436: fcom dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
/* 941438: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94143a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94143d: jne 0x94144e */
  if (!zf) goto L_94144e;
L_94143f: /* 94143f: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 941441: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 941442: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 941444: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 941446: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 941448: fstp dword ptr [esp + edx + 0x1c] */
  WF32((uint32_t)(esp + edx + 0x1cu), ST0); FPOP();
/* 94144c: jmp 0x941450 */
  goto L_941450;
L_94144e: /* 94144e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_941450: /* 941450: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 941453: cmp edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 941456: jl 0x941410 */
  if ((sf != of)) goto L_941410;
L_941458: /* 941458: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94145c: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 941460: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 941462: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 941464: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 941466: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 941468: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94146a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94146c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94146f: je 0x941639 */
  if (zf) goto L_941639;
L_941475: /* 941475: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 941479: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 94147d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94147f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 941481: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 941483: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 941486: jne 0x94157f */
  if (!zf) goto L_94157f;
L_94148c: /* 94148c: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 941490: mov ebp, 3 */
  ebp = 0x3u;
/* 941495: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941496: sub ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 941498: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 94149c: or ebp, 0x300 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x300u);
  uint32_t r = (uint32_t)(a | b);
  ebp = r;
  }
/* 9414a2: call 0x92e280 */
  esp -= 4; W32(esp, 0x9414a7u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 9414a7: fsqrt  */
  ST0 = sqrt(ST0);
/* 9414a9: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9414ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9414ae: lea eax, [esp + 0x94] */
  eax = (uint32_t)(esp + 0x94u);
/* 9414b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9414b6: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 9414ba: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 9414be: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9414c4: fdiv dword ptr [esp + 0x18] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x18u)));
/* 9414c8: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9414cc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9414ce: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 9414d2: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9414d6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9414d8: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 9414dc: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 9414e0: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 9414e4: call 0x941650 */
  esp -= 4; W32(esp, 0x9414e9u); SPILL(); f_941650(); if (g_unwind) return; RELOAD();
/* 9414e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9414ea: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* 9414f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9414f2: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* 9414f6: call 0x9349c0 */
  esp -= 4; W32(esp, 0x9414fbu); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 9414fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9414fc: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 941500: call 0x933e40 */
  esp -= 4; W32(esp, 0x941505u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 941505: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 941509: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 94150d: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
L_941511: /* 941511: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 941514: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 941516: jle 0x94156a */
  if ((zf || sf != of)) goto L_94156a;
L_941518: /* 941518: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 94151c: lea esi, [edi + 0x14] */
  esi = (uint32_t)(edi + 0x14u);
/* 94151f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 941520: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 941524: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941525: mov ecx, ebx */
  ecx = ebx;
/* 941527: call 0x933f50 */
  esp -= 4; W32(esp, 0x94152cu); SPILL(); f_933f50(); if (g_unwind) return; RELOAD();
/* 94152c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 94152f: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 941533: mov word ptr [eax + 0x1c], bp */
  W16((uint32_t)(eax + 0x1cu), (ebp & 0xffffu));
/* 941537: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 94153a: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 94153d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 941540: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941541: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 941545: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941546: mov ecx, ebx */
  ecx = ebx;
/* 941548: call 0x933ef0 */
  esp -= 4; W32(esp, 0x94154du); SPILL(); f_933ef0(); if (g_unwind) return; RELOAD();
/* 94154d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 941550: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 941552: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 941555: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 941557: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 94155a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 94155d: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 941560: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 941563: mov dword ptr [edi + 0xc], 1 */
  W32((uint32_t)(edi + 0xcu), 0x1u);
L_94156a: /* 94156a: mov eax, 1 */
  eax = 0x1u;
/* 94156f: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 941572: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 941573: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 941574: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 941575: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 941576: add esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94157c: ret 8 */
  esp += 12; SPILL(); return;
L_94157f: /* 94157f: fld dword ptr [0xa13bbc] */
  { double v = F32((uint32_t)(0xa13bbcu)); FPUSH(v); }
/* 941585: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 941589: lea ebx, [esp + 0x68] */
  ebx = (uint32_t)(esp + 0x68u);
/* 94158d: xor ecx, ecx */
  ecx = 0;
/* 94158f: mov edx, ebp */
  edx = ebp;
/* 941591: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
L_941593: /* 941593: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 941595: fsub dword ptr [ebx + edx] */
  ST0 = ST0 - (F32((uint32_t)(ebx + edx)));
/* 941598: fabs  */
  ST0 = fabs(ST0);
/* 94159a: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 94159e: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 9415a0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9415a2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9415a5: jp 0x9415b7 */
  if (pf) goto L_9415b7;
L_9415a7: /* 9415a7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9415a9: mov esi, ecx */
  esi = ecx;
/* 9415ab: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9415af: mov dword ptr [esp + 0x10], 0xbf800000 */
  W32((uint32_t)(esp + 0x10u), 0xbf800000u);
L_9415b7: /* 9415b7: fld dword ptr [ebx + edx] */
  { double v = F32((uint32_t)(ebx + edx)); FPUSH(v); }
/* 9415ba: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 9415bc: fabs  */
  ST0 = fabs(ST0);
/* 9415be: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 9415c2: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 9415c4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9415c6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9415c9: jp 0x9415db */
  if (pf) goto L_9415db;
L_9415cb: /* 9415cb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9415cd: mov esi, ecx */
  esi = ecx;
/* 9415cf: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9415d3: mov dword ptr [esp + 0x10], 0x3f800000 */
  W32((uint32_t)(esp + 0x10u), 0x3f800000u);
L_9415db: /* 9415db: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9415dc: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9415df: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9415e2: jl 0x941593 */
  if ((sf != of)) goto L_941593;
L_9415e4: /* 9415e4: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9415e8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9415ea: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9415ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9415ef: fstp dword ptr [esp + esi*4 + 0x20] */
  WF32((uint32_t)(esp + esi*4 + 0x20u), ST0); FPOP();
/* 9415f3: lea eax, [esp + 0x7c] */
  eax = (uint32_t)(esp + 0x7cu);
/* 9415f7: fld dword ptr [esp + esi*4 + 0x6c] */
  { double v = F32((uint32_t)(esp + esi*4 + 0x6cu)); FPUSH(v); }
/* 9415fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9415fc: fabs  */
  ST0 = fabs(ST0);
/* 9415fe: fsub dword ptr [ebp + esi*4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + esi*4)));
/* 941602: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 941606: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 94160a: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 94160e: call 0x941650 */
  esp -= 4; W32(esp, 0x941613u); SPILL(); f_941650(); if (g_unwind) return; RELOAD();
/* 941613: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941614: lea ecx, [esp + 0x88] */
  ecx = (uint32_t)(esp + 0x88u);
/* 94161b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94161c: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* 941620: call 0x9349c0 */
  esp -= 4; W32(esp, 0x941625u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 941625: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941626: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 94162a: call 0x933e40 */
  esp -= 4; W32(esp, 0x94162fu); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
/* 94162f: mov ebp, 0x302 */
  ebp = 0x302u;
/* 941634: jmp 0x941511 */
  goto L_941511;
L_941639: /* 941639: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94163a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94163c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94163d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94163e: xor eax, eax */
  eax = 0;
/* 941640: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 941641: add esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941647: ret 8 */
  esp += 12; SPILL(); return;
}

void f_941650(void) {
  LOAD_REGS();
L_941650: /* 941650: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 941654: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 941658: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94165b: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 94165f: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 941662: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 941666: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 941668: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 94166a: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 94166d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 941670: ret 8 */
  esp += 12; SPILL(); return;
}

void f_941680(void) {
  LOAD_REGS();
L_941680: /* 941680: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 941683: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 941687: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 941688: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 941689: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94168a: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 94168e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94168f: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 941693: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 941695: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 941698: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94169a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94169b: call 0x928760 */
  esp -= 4; W32(esp, 0x9416a0u); SPILL(); f_928760(); if (g_unwind) return; RELOAD();
/* 9416a0: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 9416a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9416a4: mov ebx, eax */
  ebx = eax;
/* 9416a6: call 0x928760 */
  esp -= 4; W32(esp, 0x9416abu); SPILL(); f_928760(); if (g_unwind) return; RELOAD();
/* 9416ab: mov ebp, eax */
  ebp = eax;
/* 9416ad: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9416af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9416b0: call 0x928730 */
  esp -= 4; W32(esp, 0x9416b5u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 9416b5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9416b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9416b9: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9416bd: call 0x928730 */
  esp -= 4; W32(esp, 0x9416c2u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 9416c2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 9416c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9416c5: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9416c9: call 0x9287f0 */
  esp -= 4; W32(esp, 0x9416ceu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 9416ce: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 9416d2: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9416d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9416d6: call 0x9287f0 */
  esp -= 4; W32(esp, 0x9416dbu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 9416db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9416dc: call 0x92d570 */
  esp -= 4; W32(esp, 0x9416e1u); SPILL(); f_92d570(); if (g_unwind) return; RELOAD();
/* 9416e1: fld qword ptr [0xa14fa0] */
  { double v = F64((uint32_t)(0xa14fa0u)); FPUSH(v); }
/* 9416e7: fsqrt  */
  ST0 = sqrt(ST0);
/* 9416e9: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 9416ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9416ee: fst dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0);
/* 9416f2: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 9416f8: fdivr dword ptr [0xa0b130] */
  ST0 = (F32((uint32_t)(0xa0b130u))) / ST0;
/* 9416fe: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 941700: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 941704: call 0x92de80 */
  esp -= 4; W32(esp, 0x941709u); SPILL(); f_92de80(); if (g_unwind) return; RELOAD();
/* 941709: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 94170d: mov ecx, edx */
  ecx = edx;
/* 94170f: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 941713: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 941717: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 94171b: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 94171f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941720: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 941724: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 941728: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941729: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 94172d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94172e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94172f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941730: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 941734: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 941738: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941739: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94173a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94173b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94173c: call 0x93fe10 */
  esp -= 4; W32(esp, 0x941741u); SPILL(); f_93fe10(); if (g_unwind) return; RELOAD();
/* 941741: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941744: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 941746: je 0x941759 */
  if (zf) goto L_941759;
L_941748: /* 941748: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 94174c: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 94174f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 941750: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 941751: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 941752: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 941753: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941756: ret 0xc */
  esp += 16; SPILL(); return;
L_941759: /* 941759: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 94175d: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 941760: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 941761: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 941762: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 941763: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 941764: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941767: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_941770(void) {
  LOAD_REGS();
L_941770: /* 941770: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 941773: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 941777: xor eax, eax */
  eax = 0;
/* 941779: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 94177d: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 941781: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 941785: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 941789: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 94178d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94178e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 941790: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 941792: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941793: mov dword ptr [esp + 0x18], 0x941360 */
  W32((uint32_t)(esp + 0x18u), 0x941360u);
/* 94179b: mov dword ptr [esp + 0x1c], 0x941680 */
  W32((uint32_t)(esp + 0x1cu), 0x941680u);
/* 9417a3: call 0x929df0 */
  esp -= 4; W32(esp, 0x9417a8u); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 9417a8: mov eax, 1 */
  eax = 0x1u;
/* 9417ad: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9417b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9417c0(void) {
  LOAD_REGS();
L_9417c0: /* 9417c0: sub esp, 0x174 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x174u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9417c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9417c7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9417c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9417c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9417ca: mov edi, dword ptr [esp + 0x188] */
  edi = R32((uint32_t)(esp + 0x188u));
/* 9417d1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9417d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9417d4: call 0x928730 */
  esp -= 4; W32(esp, 0x9417d9u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 9417d9: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 9417dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9417dd: mov ebx, eax */
  ebx = eax;
/* 9417df: call 0x928730 */
  esp -= 4; W32(esp, 0x9417e4u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 9417e4: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 9417e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9417e7: mov esi, eax */
  esi = eax;
/* 9417e9: call 0x9287f0 */
  esp -= 4; W32(esp, 0x9417eeu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 9417ee: mov ebp, eax */
  ebp = eax;
/* 9417f0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9417f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9417f3: call 0x928610 */
  esp -= 4; W32(esp, 0x9417f8u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 9417f8: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9417fc: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 9417ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941800: call 0x928610 */
  esp -= 4; W32(esp, 0x941805u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 941805: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 941809: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94180a: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 94180e: call 0x92de80 */
  esp -= 4; W32(esp, 0x941813u); SPILL(); f_92de80(); if (g_unwind) return; RELOAD();
/* 941813: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 941814: lea edx, [esp + 0x68] */
  edx = (uint32_t)(esp + 0x68u);
/* 941818: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 941819: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 94181d: mov edi, eax */
  edi = eax;
/* 94181f: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 941823: call 0x93bb50 */
  esp -= 4; W32(esp, 0x941828u); SPILL(); f_93bb50(); if (g_unwind) return; RELOAD();
/* 941828: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 94182c: fabs  */
  ST0 = fabs(ST0);
/* 94182e: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 941832: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 941836: fabs  */
  ST0 = fabs(ST0);
/* 941838: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 94183c: fabs  */
  ST0 = fabs(ST0);
/* 94183e: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 941842: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 941844: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 941847: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94184b: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 94184e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 941850: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 941854: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 941856: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 941858: fsubr dword ptr [esp + 0x5c] */
  ST0 = (F32((uint32_t)(esp + 0x5cu))) - ST0;
/* 94185c: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 941860: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 941862: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 941865: jne 0x941873 */
  if (!zf) goto L_941873;
L_941867: /* 941867: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 94186b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94186d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94186f: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 941871: jmp 0x9418e0 */
  goto L_9418e0;
L_941873: /* 941873: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 941877: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94187b: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 941881: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 941883: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 941886: jp 0x94188f */
  if (pf) goto L_94188f;
L_941888: /* 941888: mov edx, 1 */
  edx = 0x1u;
/* 94188d: jmp 0x941891 */
  goto L_941891;
L_94188f: /* 94188f: xor edx, edx */
  edx = 0;
L_941891: /* 941891: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 941897: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 941899: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94189c: jp 0x9418a5 */
  if (pf) goto L_9418a5;
L_94189e: /* 94189e: mov ecx, 1 */
  ecx = 0x1u;
/* 9418a3: jmp 0x9418a7 */
  goto L_9418a7;
L_9418a5: /* 9418a5: xor ecx, ecx */
  ecx = 0;
L_9418a7: /* 9418a7: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9418ab: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 9418b1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9418b3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9418b6: jp 0x9418bf */
  if (pf) goto L_9418bf;
L_9418b8: /* 9418b8: mov ebp, 1 */
  ebp = 0x1u;
/* 9418bd: jmp 0x9418c1 */
  goto L_9418c1;
L_9418bf: /* 9418bf: xor ebp, ebp */
  ebp = 0;
L_9418c1: /* 9418c1: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9418c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9418c4: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 9418c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9418c9: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 9418cd: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9418cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9418d0: or ebp, 0x200 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  ebp = r;
  }
/* 9418d6: call 0x941a00 */
  esp -= 4; W32(esp, 0x9418dbu); SPILL(); f_941a00(); if (g_unwind) return; RELOAD();
/* 9418db: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9418de: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_9418e0: /* 9418e0: mov edi, dword ptr [esp + 0x18c] */
  edi = R32((uint32_t)(esp + 0x18cu));
/* 9418e7: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 9418ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9418ec: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 9418ef: jne 0x941901 */
  if (!zf) goto L_941901;
L_9418f1: /* 9418f1: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 9418f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9418f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9418f6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9418f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9418f8: add esp, 0x174 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x174u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9418fe: ret 8 */
  esp += 12; SPILL(); return;
L_941901: /* 941901: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 941904: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 941908: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 94190e: mov dword ptr [edi + 0x14], edx */
  W32((uint32_t)(edi + 0x14u), edx);
/* 941911: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 941914: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
/* 941917: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 94191a: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94191e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 941922: lea edx, [esp + 0x64] */
  edx = (uint32_t)(esp + 0x64u);
/* 941926: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 941928: mov dword ptr [edi + 0x1c], ecx */
  W32((uint32_t)(edi + 0x1cu), ecx);
/* 94192b: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 94192e: mov dword ptr [edi + 0xc], 0 */
  W32((uint32_t)(edi + 0xcu), 0x0u);
/* 941935: je 0x9419e1 */
  if (zf) goto L_9419e1;
L_94193b: /* 94193b: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 94193f: lea edx, [ebx + 0x14] */
  edx = (uint32_t)(ebx + 0x14u);
L_941942: /* 941942: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 941945: cmp eax, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 941948: jge 0x9419e1 */
  if ((sf == of)) goto L_9419e1;
L_94194e: /* 94194e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 941950: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 941954: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 941956: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 941959: jp 0x9419cf */
  if (pf) goto L_9419cf;
L_94195b: /* 94195b: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 94195e: add ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 941961: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 941964: add edx, 0x28 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 941967: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 941969: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 94196c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94196e: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 941971: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 941973: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 941975: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 941978: fstp dword ptr [ebx - 0x28] */
  WF32((uint32_t)(ebx + 0xffffffd8u), ST0); FPOP();
/* 94197b: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 94197e: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 941980: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 941983: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 941986: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 941988: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 94198b: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 94198e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 941990: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 941993: fstp dword ptr [edx - 0x38] */
  WF32((uint32_t)(edx + 0xffffffc8u), ST0); FPOP();
/* 941996: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 941999: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94199b: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 94199e: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 9419a1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9419a3: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 9419a6: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 9419a9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9419ab: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 9419ae: mov word ptr [edx - 0x20], bp */
  W16((uint32_t)(edx + 0xffffffe0u), (ebp & 0xffffu));
/* 9419b2: fstp dword ptr [edx - 0x34] */
  WF32((uint32_t)(edx + 0xffffffccu), ST0); FPOP();
/* 9419b5: fstp dword ptr [edx - 0x24] */
  WF32((uint32_t)(edx + 0xffffffdcu), ST0); FPOP();
/* 9419b8: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 9419bb: mov dword ptr [edx - 0x30], eax */
  W32((uint32_t)(edx + 0xffffffd0u), eax);
/* 9419be: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 9419c1: mov dword ptr [edx - 0x2c], eax */
  W32((uint32_t)(edx + 0xffffffd4u), eax);
/* 9419c4: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 9419c7: mov dword ptr [edx - 0x28], eax */
  W32((uint32_t)(edx + 0xffffffd8u), eax);
/* 9419ca: inc dword ptr [edi + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi + 0xcu), r);
  }
/* 9419cd: jmp 0x9419d1 */
  goto L_9419d1;
L_9419cf: /* 9419cf: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9419d1: /* 9419d1: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9419d4: lea eax, [ecx - 8] */
  eax = (uint32_t)(ecx + 0xfffffff8u);
/* 9419d7: cmp eax, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9419db: jne 0x941942 */
  if (!zf) goto L_941942;
L_9419e1: /* 9419e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9419e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9419e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9419e4: mov eax, 1 */
  eax = 0x1u;
/* 9419e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9419ea: add esp, 0x174 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x174u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9419f0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_941a00(void) {
  LOAD_REGS();
L_941a00: /* 941a00: sub esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 941a03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 941a04: mov ebx, dword ptr [esp + 0x7c] */
  ebx = R32((uint32_t)(esp + 0x7cu));
/* 941a08: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 941a0a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 941a0b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 941a0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 941a0e: mov esi, dword ptr [esp + 0x80] */
  esi = R32((uint32_t)(esp + 0x80u));
/* 941a15: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 941a18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 941a19: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 941a1c: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 941a20: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 941a24: lea edi, [esi + 0x30] */
  edi = (uint32_t)(esi + 0x30u);
/* 941a27: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 941a29: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 941a2c: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 941a30: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 941a32: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 941a35: call 0x92ec40 */
  esp -= 4; W32(esp, 0x941a3au); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 941a3a: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 941a3d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 941a40: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 941a42: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 941a46: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 941a49: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 941a4d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 941a4f: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 941a52: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 941a56: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 941a59: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 941a5c: call 0x92ec40 */
  esp -= 4; W32(esp, 0x941a61u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 941a61: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 941a64: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 941a67: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 941a69: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 941a6d: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 941a70: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 941a74: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 941a76: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 941a79: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 941a7d: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 941a80: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 941a83: call 0x92ec40 */
  esp -= 4; W32(esp, 0x941a88u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 941a88: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 941a8e: fcomp dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
  FPOP();
/* 941a92: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 941a94: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 941a97: jnp 0x941aa9 */
  if (!pf) goto L_941aa9;
L_941a99: /* 941a99: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 941a9f: fdiv dword ptr [esp + 0x3c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x3cu)));
/* 941aa3: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 941aa7: jmp 0x941ab1 */
  goto L_941ab1;
L_941aa9: /* 941aa9: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
L_941ab1: /* 941ab1: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 941ab7: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 941abb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 941abd: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 941ac0: jnp 0x941ad2 */
  if (!pf) goto L_941ad2;
L_941ac2: /* 941ac2: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 941ac8: fdiv dword ptr [esp + 0x30] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x30u)));
/* 941acc: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 941ad0: jmp 0x941ada */
  goto L_941ada;
L_941ad2: /* 941ad2: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_941ada: /* 941ada: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 941ae0: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 941ae4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 941ae6: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 941ae9: jnp 0x941afb */
  if (!pf) goto L_941afb;
L_941aeb: /* 941aeb: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 941af1: fdiv dword ptr [esp + 0x24] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x24u)));
/* 941af5: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 941af9: jmp 0x941b03 */
  goto L_941b03;
L_941afb: /* 941afb: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
L_941b03: /* 941b03: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 941b07: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 941b0a: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 941b0d: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 941b11: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 941b15: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 941b19: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 941b1c: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 941b20: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 941b24: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 941b26: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 941b29: call 0x92ec40 */
  esp -= 4; W32(esp, 0x941b2eu); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 941b2e: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 941b31: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 941b34: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 941b38: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 941b3c: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 941b40: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 941b43: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 941b47: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 941b4b: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 941b4d: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 941b51: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 941b54: call 0x92ec40 */
  esp -= 4; W32(esp, 0x941b59u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 941b59: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 941b5d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 941b60: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 941b64: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 941b68: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 941b6c: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 941b70: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 941b74: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 941b78: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 941b7c: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 941b80: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 941b83: call 0x92ec40 */
  esp -= 4; W32(esp, 0x941b88u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 941b88: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 941b8c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 941b8d: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 941b91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941b92: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 941b96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941b97: lea edx, [esp + 0x94] */
  edx = (uint32_t)(esp + 0x94u);
/* 941b9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941b9f: lea eax, [esp + 0x94] */
  eax = (uint32_t)(esp + 0x94u);
/* 941ba6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941ba7: mov dword ptr [esp + 0x98], 0xbf800000 */
  W32((uint32_t)(esp + 0x98u), 0xbf800000u);
/* 941bb2: mov dword ptr [esp + 0x9c], 0x3f800000 */
  W32((uint32_t)(esp + 0x9cu), 0x3f800000u);
/* 941bbd: call 0x942010 */
  esp -= 4; W32(esp, 0x941bc2u); SPILL(); f_942010(); if (g_unwind) return; RELOAD();
/* 941bc2: mov esi, dword ptr [esp + 0x94] */
  esi = R32((uint32_t)(esp + 0x94u));
/* 941bc9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941bcc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 941bce: je 0x941c6c */
  if (zf) goto L_941c6c;
L_941bd4: /* 941bd4: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 941bdb: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 941be1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 941be3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 941be6: jne 0x941c20 */
  if (!zf) goto L_941c20;
L_941be8: /* 941be8: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 941bea: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* 941bf1: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 941bf5: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* 941bf8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941bf9: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 941bfb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941bfc: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 941c00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941c01: call 0x934a30 */
  esp -= 4; W32(esp, 0x941c06u); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 941c06: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941c09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941c0a: lea edx, [esp + 0x74] */
  edx = (uint32_t)(esp + 0x74u);
/* 941c0e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941c0f: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 941c13: call 0x9349c0 */
  esp -= 4; W32(esp, 0x941c18u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 941c18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941c19: mov ecx, ebx */
  ecx = ebx;
/* 941c1b: call 0x933e40 */
  esp -= 4; W32(esp, 0x941c20u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
L_941c20: /* 941c20: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 941c27: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 941c2d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 941c2f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 941c32: jp 0x941c6c */
  if (pf) goto L_941c6c;
L_941c34: /* 941c34: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 941c36: mov edx, dword ptr [esp + 0x88] */
  edx = R32((uint32_t)(esp + 0x88u));
/* 941c3d: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 941c41: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 941c44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941c45: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 941c47: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941c48: lea eax, [esp + 0x78] */
  eax = (uint32_t)(esp + 0x78u);
/* 941c4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941c4d: call 0x934a30 */
  esp -= 4; W32(esp, 0x941c52u); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 941c52: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941c55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941c56: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 941c5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941c5b: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 941c5f: call 0x9349c0 */
  esp -= 4; W32(esp, 0x941c64u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 941c64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941c65: mov ecx, ebx */
  ecx = ebx;
/* 941c67: call 0x933e40 */
  esp -= 4; W32(esp, 0x941c6cu); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
L_941c6c: /* 941c6c: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 941c70: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 941c73: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 941c77: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 941c7b: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 941c7f: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 941c83: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 941c87: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 941c8b: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 941c8f: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 941c93: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 941c96: call 0x92ec40 */
  esp -= 4; W32(esp, 0x941c9bu); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 941c9b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 941c9c: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 941ca0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941ca1: lea eax, [esp + 0x60] */
  eax = (uint32_t)(esp + 0x60u);
/* 941ca5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941ca6: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 941cad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941cae: lea edx, [esp + 0x94] */
  edx = (uint32_t)(esp + 0x94u);
/* 941cb5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941cb6: mov dword ptr [esp + 0x98], 0xbf800000 */
  W32((uint32_t)(esp + 0x98u), 0xbf800000u);
/* 941cc1: mov dword ptr [esp + 0x9c], 0x3f800000 */
  W32((uint32_t)(esp + 0x9cu), 0x3f800000u);
/* 941ccc: call 0x942010 */
  esp -= 4; W32(esp, 0x941cd1u); SPILL(); f_942010(); if (g_unwind) return; RELOAD();
/* 941cd1: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941cd4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 941cd6: je 0x941d74 */
  if (zf) goto L_941d74;
L_941cdc: /* 941cdc: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 941ce3: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 941ce9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 941ceb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 941cee: jne 0x941d28 */
  if (!zf) goto L_941d28;
L_941cf0: /* 941cf0: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 941cf2: mov edx, dword ptr [esp + 0x84] */
  edx = R32((uint32_t)(esp + 0x84u));
/* 941cf9: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 941cfd: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 941d00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941d01: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 941d03: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941d04: lea eax, [esp + 0x78] */
  eax = (uint32_t)(esp + 0x78u);
/* 941d08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941d09: call 0x934a30 */
  esp -= 4; W32(esp, 0x941d0eu); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 941d0e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941d11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941d12: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 941d16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941d17: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 941d1b: call 0x9349c0 */
  esp -= 4; W32(esp, 0x941d20u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 941d20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941d21: mov ecx, ebx */
  ecx = ebx;
/* 941d23: call 0x933e40 */
  esp -= 4; W32(esp, 0x941d28u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
L_941d28: /* 941d28: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 941d2f: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 941d35: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 941d37: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 941d3a: jp 0x941d74 */
  if (pf) goto L_941d74;
L_941d3c: /* 941d3c: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 941d3e: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 941d45: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 941d49: lea edx, [ebx + 0xc] */
  edx = (uint32_t)(ebx + 0xcu);
/* 941d4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941d4d: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 941d4f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941d50: lea edx, [esp + 0x78] */
  edx = (uint32_t)(esp + 0x78u);
/* 941d54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941d55: call 0x934a30 */
  esp -= 4; W32(esp, 0x941d5au); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 941d5a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941d5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941d5e: lea eax, [esp + 0x68] */
  eax = (uint32_t)(esp + 0x68u);
/* 941d62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941d63: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 941d67: call 0x9349c0 */
  esp -= 4; W32(esp, 0x941d6cu); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 941d6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941d6d: mov ecx, ebx */
  ecx = ebx;
/* 941d6f: call 0x933e40 */
  esp -= 4; W32(esp, 0x941d74u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
L_941d74: /* 941d74: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 941d78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 941d7b: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 941d7f: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 941d83: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 941d87: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 941d8b: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 941d8f: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 941d93: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 941d97: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 941d9b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 941d9e: call 0x92ec40 */
  esp -= 4; W32(esp, 0x941da3u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 941da3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 941da4: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 941da8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941da9: lea edx, [esp + 0x60] */
  edx = (uint32_t)(esp + 0x60u);
/* 941dad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941dae: lea eax, [esp + 0x94] */
  eax = (uint32_t)(esp + 0x94u);
/* 941db5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941db6: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 941dbd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941dbe: mov dword ptr [esp + 0x98], 0xbf800000 */
  W32((uint32_t)(esp + 0x98u), 0xbf800000u);
/* 941dc9: mov dword ptr [esp + 0x9c], 0x3f800000 */
  W32((uint32_t)(esp + 0x9cu), 0x3f800000u);
/* 941dd4: call 0x942010 */
  esp -= 4; W32(esp, 0x941dd9u); SPILL(); f_942010(); if (g_unwind) return; RELOAD();
/* 941dd9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941ddc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 941dde: je 0x941e7c */
  if (zf) goto L_941e7c;
L_941de4: /* 941de4: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 941deb: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 941df1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 941df3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 941df6: jne 0x941e30 */
  if (!zf) goto L_941e30;
L_941df8: /* 941df8: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 941dfa: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* 941e01: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 941e05: lea edx, [ebx + 0xc] */
  edx = (uint32_t)(ebx + 0xcu);
/* 941e08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941e09: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 941e0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941e0c: lea edx, [esp + 0x78] */
  edx = (uint32_t)(esp + 0x78u);
/* 941e10: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941e11: call 0x934a30 */
  esp -= 4; W32(esp, 0x941e16u); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 941e16: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941e19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941e1a: lea eax, [esp + 0x68] */
  eax = (uint32_t)(esp + 0x68u);
/* 941e1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941e1f: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 941e23: call 0x9349c0 */
  esp -= 4; W32(esp, 0x941e28u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 941e28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941e29: mov ecx, ebx */
  ecx = ebx;
/* 941e2b: call 0x933e40 */
  esp -= 4; W32(esp, 0x941e30u); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
L_941e30: /* 941e30: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 941e37: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 941e3d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 941e3f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 941e42: jp 0x941e7c */
  if (pf) goto L_941e7c;
L_941e44: /* 941e44: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 941e46: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 941e4d: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 941e51: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* 941e54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941e55: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 941e57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941e58: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 941e5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941e5d: call 0x934a30 */
  esp -= 4; W32(esp, 0x941e62u); SPILL(); f_934a30(); if (g_unwind) return; RELOAD();
/* 941e62: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941e65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941e66: lea edx, [esp + 0x68] */
  edx = (uint32_t)(esp + 0x68u);
/* 941e6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941e6b: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 941e6f: call 0x9349c0 */
  esp -= 4; W32(esp, 0x941e74u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 941e74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941e75: mov ecx, ebx */
  ecx = ebx;
/* 941e77: call 0x933e40 */
  esp -= 4; W32(esp, 0x941e7cu); SPILL(); f_933e40(); if (g_unwind) return; RELOAD();
L_941e7c: /* 941e7c: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 941e80: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 941e83: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 941e87: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 941e8b: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 941e8f: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 941e93: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 941e97: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 941e9b: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 941e9f: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 941ea3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 941ea6: call 0x92ec40 */
  esp -= 4; W32(esp, 0x941eabu); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 941eab: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 941eac: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 941eb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941eb1: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 941eb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941eb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 941eb7: call 0x9420a0 */
  esp -= 4; W32(esp, 0x941ebcu); SPILL(); f_9420a0(); if (g_unwind) return; RELOAD();
/* 941ebc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941ebf: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 941ec3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941ec4: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 941ec8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941ec9: mov ecx, edi */
  ecx = edi;
/* 941ecb: call 0x9349c0 */
  esp -= 4; W32(esp, 0x941ed0u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 941ed0: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 941ed4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941ed5: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* 941ed9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941eda: mov ecx, edi */
  ecx = edi;
/* 941edc: call 0x933ec0 */
  esp -= 4; W32(esp, 0x941ee1u); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 941ee1: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 941ee5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 941ee6: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 941eea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941eeb: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 941eef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941ef0: lea edx, [esp + 0x7c] */
  edx = (uint32_t)(esp + 0x7cu);
/* 941ef4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941ef5: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 941ef9: call 0x9349c0 */
  esp -= 4; W32(esp, 0x941efeu); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 941efe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941eff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 941f00: call 0x9420a0 */
  esp -= 4; W32(esp, 0x941f05u); SPILL(); f_9420a0(); if (g_unwind) return; RELOAD();
/* 941f05: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941f08: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 941f09: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 941f0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941f0e: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 941f12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941f13: lea edx, [esp + 0x7c] */
  edx = (uint32_t)(esp + 0x7cu);
/* 941f17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941f18: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 941f1c: call 0x9349c0 */
  esp -= 4; W32(esp, 0x941f21u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 941f21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941f22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 941f23: call 0x9420a0 */
  esp -= 4; W32(esp, 0x941f28u); SPILL(); f_9420a0(); if (g_unwind) return; RELOAD();
/* 941f28: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941f2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 941f2c: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 941f30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941f31: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 941f35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941f36: lea edx, [esp + 0x7c] */
  edx = (uint32_t)(esp + 0x7cu);
/* 941f3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941f3b: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 941f3f: call 0x933ec0 */
  esp -= 4; W32(esp, 0x941f44u); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 941f44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941f45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 941f46: call 0x9420a0 */
  esp -= 4; W32(esp, 0x941f4bu); SPILL(); f_9420a0(); if (g_unwind) return; RELOAD();
/* 941f4b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941f4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 941f4f: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 941f53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941f54: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 941f58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941f59: lea edx, [esp + 0x7c] */
  edx = (uint32_t)(esp + 0x7cu);
/* 941f5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941f5e: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 941f62: call 0x933ec0 */
  esp -= 4; W32(esp, 0x941f67u); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 941f67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941f68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 941f69: call 0x9420a0 */
  esp -= 4; W32(esp, 0x941f6eu); SPILL(); f_9420a0(); if (g_unwind) return; RELOAD();
/* 941f6e: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 941f72: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941f75: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 941f76: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 941f7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941f7b: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 941f7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941f80: lea edx, [esp + 0x7c] */
  edx = (uint32_t)(esp + 0x7cu);
/* 941f84: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941f85: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 941f89: call 0x9349c0 */
  esp -= 4; W32(esp, 0x941f8eu); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 941f8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941f8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 941f90: call 0x942200 */
  esp -= 4; W32(esp, 0x941f95u); SPILL(); f_942200(); if (g_unwind) return; RELOAD();
/* 941f95: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941f98: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 941f99: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 941f9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941f9e: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 941fa2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941fa3: lea edx, [esp + 0x7c] */
  edx = (uint32_t)(esp + 0x7cu);
/* 941fa7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941fa8: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 941fac: call 0x933ec0 */
  esp -= 4; W32(esp, 0x941fb1u); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 941fb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941fb2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 941fb3: call 0x942200 */
  esp -= 4; W32(esp, 0x941fb8u); SPILL(); f_942200(); if (g_unwind) return; RELOAD();
/* 941fb8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941fbb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 941fbc: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 941fc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941fc1: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 941fc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941fc6: lea edx, [esp + 0x7c] */
  edx = (uint32_t)(esp + 0x7cu);
/* 941fca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941fcb: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 941fcf: call 0x933ec0 */
  esp -= 4; W32(esp, 0x941fd4u); SPILL(); f_933ec0(); if (g_unwind) return; RELOAD();
/* 941fd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941fd5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 941fd6: call 0x942200 */
  esp -= 4; W32(esp, 0x941fdbu); SPILL(); f_942200(); if (g_unwind) return; RELOAD();
/* 941fdb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 941fde: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 941fdf: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 941fe3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941fe4: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 941fe8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 941fe9: lea edx, [esp + 0x7c] */
  edx = (uint32_t)(esp + 0x7cu);
/* 941fed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 941fee: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 941ff2: call 0x9349c0 */
  esp -= 4; W32(esp, 0x941ff7u); SPILL(); f_9349c0(); if (g_unwind) return; RELOAD();
/* 941ff7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 941ff8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 941ff9: call 0x942200 */
  esp -= 4; W32(esp, 0x941ffeu); SPILL(); f_942200(); if (g_unwind) return; RELOAD();
/* 941ffe: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 942001: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 942002: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 942003: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 942004: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 942005: add esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 942008: ret  */
  esp += 4; SPILL(); return;
}

void f_942010(void) {
  LOAD_REGS();
L_942010: /* 942010: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 942014: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 942017: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 94201b: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94201f: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 942023: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 942026: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 942027: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 94202b: fchs  */
  ST0 = -ST0;
/* 94202d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 942031: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 942037: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 942039: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94203c: jne 0x942055 */
  if (!zf) goto L_942055;
L_94203e: /* 94203e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 942040: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 942044: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 942046: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 942048: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94204b: jp 0x942087 */
  if (pf) goto L_942087;
L_94204d: /* 94204d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 942051: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 942053: jmp 0x942087 */
  goto L_942087;
L_942055: /* 942055: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94205b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94205d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 942060: jp 0x942077 */
  if (pf) goto L_942077;
L_942062: /* 942062: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 942066: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* 942068: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94206a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94206d: jne 0x942087 */
  if (!zf) goto L_942087;
L_94206f: /* 94206f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 942073: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 942075: jmp 0x942087 */
  goto L_942087;
L_942077: /* 942077: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 94207a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 942080: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 942082: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 942085: je 0x942099 */
  if (zf) goto L_942099;
L_942087: /* 942087: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 942089: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* 94208b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94208d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 942090: jne 0x942099 */
  if (!zf) goto L_942099;
L_942092: /* 942092: mov eax, 1 */
  eax = 0x1u;
/* 942097: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 942098: ret  */
  esp += 4; SPILL(); return;
L_942099: /* 942099: xor eax, eax */
  eax = 0;
/* 94209b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94209c: ret  */
  esp += 4; SPILL(); return;
}

void f_9420a0(void) {
  LOAD_REGS();
L_9420a0: /* 9420a0: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9420a3: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 9420a7: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 9420aa: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 9420ae: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9420b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9420b3: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 9420b6: mov dword ptr [esp + 4], 0xbf800000 */
  W32((uint32_t)(esp + 0x4u), 0xbf800000u);
/* 9420be: mov dword ptr [esp + 8], 0x3f800000 */
  W32((uint32_t)(esp + 0x8u), 0x3f800000u);
/* 9420c6: fchs  */
  ST0 = -ST0;
/* 9420c8: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 9420cc: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 9420d2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9420d4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9420d7: jne 0x9421c6 */
  if (!zf) goto L_9421c6;
L_9420dd: /* 9420dd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9420df: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9420e3: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 9420e9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9420eb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9420ee: jp 0x9421c1 */
  if (pf) goto L_9421c1;
L_9420f4: /* 9420f4: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9420f8: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
L_9420fc: /* 9420fc: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 942100: fcomp dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
  FPOP();
/* 942104: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 942106: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 942109: jne 0x9421c1 */
  if (!zf) goto L_9421c1;
L_94210f: /* 94210f: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 942113: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 942117: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 94211d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94211f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 942122: jne 0x94216b */
  if (!zf) goto L_94216b;
L_942124: /* 942124: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 942128: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 94212a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 94212c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94212d: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 942131: lea edi, [eax + 0xc] */
  edi = (uint32_t)(eax + 0xcu);
/* 942134: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 942137: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 94213b: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 94213f: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 942142: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 942146: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 942148: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94214c: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 94214f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 942153: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 942156: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 942158: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 94215c: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 942160: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 942162: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 942164: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 942167: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 942168: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
L_94216b: /* 94216b: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 94216f: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 942175: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 942177: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94217a: jp 0x9421c1 */
  if (pf) goto L_9421c1;
L_94217c: /* 94217c: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 942180: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 942182: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 942184: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 942188: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 94218b: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94218f: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 942193: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 942196: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 94219a: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 94219c: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9421a0: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 9421a3: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9421a7: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 9421aa: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 9421ad: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 9421af: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 9421b3: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9421b7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9421b9: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9421bb: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 9421be: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
L_9421c1: /* 9421c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9421c2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9421c5: ret  */
  esp += 4; SPILL(); return;
L_9421c6: /* 9421c6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9421cc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9421ce: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9421d1: jp 0x9421f1 */
  if (pf) goto L_9421f1;
L_9421d3: /* 9421d3: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9421d7: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 9421dd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9421df: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9421e2: jne 0x9421c1 */
  if (!zf) goto L_9421c1;
L_9421e4: /* 9421e4: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9421e8: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 9421ec: jmp 0x9420fc */
  goto L_9420fc;
L_9421f1: /* 9421f1: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 9421f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9421f5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9421fb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9421fe: ret  */
  esp += 4; SPILL(); return;
}

void f_942200(void) {
  LOAD_REGS();
L_942200: /* 942200: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 942203: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 942207: fld dword ptr [0xa08220] */
  { double v = F32((uint32_t)(0xa08220u)); FPUSH(v); }
/* 94220d: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 942210: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 942214: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 942218: mov dword ptr [esp], 0x3f800000 */
  W32((uint32_t)(esp), 0x3f800000u);
/* 942220: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 942223: fchs  */
  ST0 = -ST0;
/* 942225: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 942229: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 94222f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 942231: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 942234: jne 0x9422f6 */
  if (!zf) goto L_9422f6;
L_94223a: /* 94223a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94223c: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 942240: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 942246: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 942248: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94224b: jp 0x942266 */
  if (pf) goto L_942266;
L_94224d: /* 94224d: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 942251: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
L_942255: /* 942255: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 942259: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 94225b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94225d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 942260: jne 0x942337 */
  if (!zf) goto L_942337;
L_942266: /* 942266: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 942268: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 942269: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 94226b: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 94226f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 942271: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 942273: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 942276: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 942277: lea edi, [eax + 0xc] */
  edi = (uint32_t)(eax + 0xcu);
/* 94227a: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94227e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 942280: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 942283: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 942287: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 942289: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94228d: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 942290: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 942294: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 942297: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 942299: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 94229d: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 9422a1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9422a3: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9422a5: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 9422a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9422a9: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 9422ac: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9422ae: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 9422b2: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 9422b4: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 9422b8: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 9422bb: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 9422bf: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 9422c3: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 9422c6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9422ca: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 9422cc: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9422d0: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 9422d3: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9422d7: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 9422da: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 9422dd: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 9422df: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9422e3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9422e7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9422e9: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9422eb: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 9422ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9422ef: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 9422f2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9422f5: ret  */
  esp += 4; SPILL(); return;
L_9422f6: /* 9422f6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9422fc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9422fe: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 942301: jp 0x942323 */
  if (pf) goto L_942323;
L_942303: /* 942303: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 942307: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 94230d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94230f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 942312: jne 0x942266 */
  if (!zf) goto L_942266;
L_942318: /* 942318: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94231a: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94231e: jmp 0x942255 */
  goto L_942255;
L_942323: /* 942323: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 942326: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94232c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94232e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 942331: jne 0x942266 */
  if (!zf) goto L_942266;
L_942337: /* 942337: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 942339: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94233c: ret  */
  esp += 4; SPILL(); return;
}

void f_942340(void) {
  LOAD_REGS();
L_942340: /* 942340: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 942343: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 942344: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 942345: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 942349: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94234a: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 94234e: mov dword ptr [ebp], esi */
  W32((uint32_t)(ebp), esi);
/* 942351: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 942353: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 942354: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 942355: call 0x9287f0 */
  esp -= 4; W32(esp, 0x94235au); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 94235a: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 94235d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94235e: call 0x9287f0 */
  esp -= 4; W32(esp, 0x942363u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 942363: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 942366: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 942367: mov ebx, eax */
  ebx = eax;
/* 942369: call 0x928730 */
  esp -= 4; W32(esp, 0x94236eu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 94236e: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 942372: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 942375: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 942376: call 0x928760 */
  esp -= 4; W32(esp, 0x94237bu); SPILL(); f_928760(); if (g_unwind) return; RELOAD();
/* 94237b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94237d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94237e: mov edi, eax */
  edi = eax;
/* 942380: call 0x928760 */
  esp -= 4; W32(esp, 0x942385u); SPILL(); f_928760(); if (g_unwind) return; RELOAD();
/* 942385: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 942387: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 942389: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94238d: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 942390: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 942393: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 942397: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 94239a: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 94239d: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 9423a1: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 9423a5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9423a9: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 9423ad: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9423af: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9423b3: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 9423b7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9423b9: fsqrt  */
  ST0 = sqrt(ST0);
/* 9423bb: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 9423bf: fcomp qword ptr [0xa09718] */
  fpu_com(ST0, F64((uint32_t)(0xa09718u)));
  FPOP();
/* 9423c5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9423c7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9423ca: jp 0x9423df */
  if (pf) goto L_9423df;
L_9423cc: /* 9423cc: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 9423d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9423d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9423d2: mov dword ptr [ebp + 4], edx */
  W32((uint32_t)(ebp + 0x4u), edx);
/* 9423d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9423d6: xor eax, eax */
  eax = 0;
/* 9423d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9423d9: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9423dc: ret 0xc */
  esp += 16; SPILL(); return;
L_9423df: /* 9423df: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9423e2: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 9423e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9423e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9423e8: call 0x928730 */
  esp -= 4; W32(esp, 0x9423edu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 9423ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9423ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9423ef: call 0x945150 */
  esp -= 4; W32(esp, 0x9423f4u); SPILL(); f_945150(); if (g_unwind) return; RELOAD();
/* 9423f4: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9423f8: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 9423fe: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 942400: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 942404: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 942405: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 942409: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 94240d: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 942411: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 942412: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 942418: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 942419: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 94241d: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 942421: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 942427: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 94242b: call 0x928720 */
  esp -= 4; W32(esp, 0x942430u); SPILL(); f_928720(); if (g_unwind) return; RELOAD();
/* 942430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 942431: call 0x92e190 */
  esp -= 4; W32(esp, 0x942436u); SPILL(); f_92e190(); if (g_unwind) return; RELOAD();
/* 942436: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 94243a: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 94243e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94243f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 942440: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 942441: call 0x945190 */
  esp -= 4; W32(esp, 0x942446u); SPILL(); f_945190(); if (g_unwind) return; RELOAD();
/* 942446: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 94244a: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 94244e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94244f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 942453: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 942454: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 942458: mov eax, 1 */
  eax = 0x1u;
/* 94245d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94245f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 942463: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 942467: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 942469: fdivr st(1) */
  ST0 = STI(1) / ST0;
/* 94246b: fstp dword ptr [ebp + 4] */
  WF32((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* 94246e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94246f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 942470: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 942472: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 942475: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_942480(void) {
  LOAD_REGS();
L_942480: /* 942480: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 942483: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 942487: xor eax, eax */
  eax = 0;
/* 942489: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 94248d: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 942491: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 942495: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 942499: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94249a: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 94249c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 94249e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94249f: mov dword ptr [esp + 0x18], 0x9417c0 */
  W32((uint32_t)(esp + 0x18u), 0x9417c0u);
/* 9424a7: mov dword ptr [esp + 0x1c], 0x942340 */
  W32((uint32_t)(esp + 0x1cu), 0x942340u);
/* 9424af: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 9424b7: call 0x929df0 */
  esp -= 4; W32(esp, 0x9424bcu); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 9424bc: mov eax, 1 */
  eax = 0x1u;
/* 9424c1: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9424c4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9424d0(void) {
  LOAD_REGS();
L_9424d0: /* 9424d0: jmp 0x9424e0 */
  SPILL(); f_9424e0(); return;
}

void f_9424e0(void) {
  LOAD_REGS();
L_9424e0: /* 9424e0: mov dword ptr [0xcf2ef0], 0xbf800000 */
  W32((uint32_t)(0xcf2ef0u), 0xbf800000u);
/* 9424ea: mov dword ptr [0xcf2ef4], 0xbf800000 */
  W32((uint32_t)(0xcf2ef4u), 0xbf800000u);
/* 9424f4: mov dword ptr [0xcf2ef8], 0xbf800000 */
  W32((uint32_t)(0xcf2ef8u), 0xbf800000u);
/* 9424fe: mov dword ptr [0xcf2efc], 0xbf800000 */
  W32((uint32_t)(0xcf2efcu), 0xbf800000u);
/* 942508: ret  */
  esp += 4; SPILL(); return;
}

void f_942510(void) {
  LOAD_REGS();
L_942510: /* 942510: jmp 0x942520 */
  SPILL(); f_942520(); return;
}

void f_942520(void) {
  LOAD_REGS();
L_942520: /* 942520: mov dword ptr [0xcf2f00], 0x3f800000 */
  W32((uint32_t)(0xcf2f00u), 0x3f800000u);
/* 94252a: mov dword ptr [0xcf2f04], 0x3f800000 */
  W32((uint32_t)(0xcf2f04u), 0x3f800000u);
/* 942534: mov dword ptr [0xcf2f08], 0x3f800000 */
  W32((uint32_t)(0xcf2f08u), 0x3f800000u);
/* 94253e: mov dword ptr [0xcf2f0c], 0x3f800000 */
  W32((uint32_t)(0xcf2f0cu), 0x3f800000u);
/* 942548: ret  */
  esp += 4; SPILL(); return;
}

void f_942550(void) {
  LOAD_REGS();
L_942550: /* 942550: jmp 0x942560 */
  SPILL(); f_942560(); return;
}

void f_942560(void) {
  LOAD_REGS();
L_942560: /* 942560: mov dword ptr [0xcf2ee0], 0 */
  W32((uint32_t)(0xcf2ee0u), 0x0u);
/* 94256a: mov dword ptr [0xcf2ee4], 0 */
  W32((uint32_t)(0xcf2ee4u), 0x0u);
/* 942574: mov dword ptr [0xcf2ee8], 0 */
  W32((uint32_t)(0xcf2ee8u), 0x0u);
/* 94257e: mov dword ptr [0xcf2eec], 0 */
  W32((uint32_t)(0xcf2eecu), 0x0u);
/* 942588: ret  */
  esp += 4; SPILL(); return;
}

void f_942590(void) {
  LOAD_REGS();
L_942590: /* 942590: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 942591: mov ebp, esp */
  ebp = esp;
/* 942593: sub esp, 0x2dc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2dcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 942599: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 94259c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 94259e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94259f: call 0x928730 */
  esp -= 4; W32(esp, 0x9425a4u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 9425a4: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 9425a7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 9425aa: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 9425ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9425ae: call 0x928730 */
  esp -= 4; W32(esp, 0x9425b3u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 9425b3: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 9425b6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 9425b9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 9425bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9425bc: call 0x928610 */
  esp -= 4; W32(esp, 0x9425c1u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 9425c1: fstp dword ptr [ebp - 0x2dc] */
  WF32((uint32_t)(ebp + 0xfffffd24u), ST0); FPOP();
/* 9425c7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 9425ca: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 9425cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9425ce: call 0x928610 */
  esp -= 4; W32(esp, 0x9425d3u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 9425d3: fadd dword ptr [ebp - 0x2dc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffd24u)));
/* 9425d9: fstp dword ptr [ebp - 0x2c0] */
  WF32((uint32_t)(ebp + 0xfffffd40u), ST0); FPOP();
/* 9425df: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 9425e2: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 9425e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9425e5: call 0x9287f0 */
  esp -= 4; W32(esp, 0x9425eau); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 9425ea: mov dword ptr [ebp - 0x2d4], eax */
  W32((uint32_t)(ebp + 0xfffffd2cu), eax);
/* 9425f0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 9425f3: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 9425f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9425f7: call 0x9287f0 */
  esp -= 4; W32(esp, 0x9425fcu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 9425fc: mov dword ptr [ebp - 0x2c4], eax */
  W32((uint32_t)(ebp + 0xfffffd3cu), eax);
/* 942602: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 942605: mov dword ptr [eax + 0x10], 0 */
  W32((uint32_t)(eax + 0x10u), 0x0u);
/* 94260c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 94260f: mov dword ptr [ecx + 0xc], 0 */
  W32((uint32_t)(ecx + 0xcu), 0x0u);
/* 942616: mov edx, dword ptr [ebp - 0x2d4] */
  edx = R32((uint32_t)(ebp + 0xfffffd2cu));
/* 94261c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94261d: call 0x92de80 */
  esp -= 4; W32(esp, 0x942622u); SPILL(); f_92de80(); if (g_unwind) return; RELOAD();
/* 942622: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 942625: mov eax, dword ptr [ebp - 0x2c4] */
  eax = R32((uint32_t)(ebp + 0xfffffd3cu));
/* 94262b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94262c: call 0x92de80 */
  esp -= 4; W32(esp, 0x942631u); SPILL(); f_92de80(); if (g_unwind) return; RELOAD();
/* 942631: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 942634: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 942637: call 0x942900 */
  esp -= 4; W32(esp, 0x94263cu); SPILL(); f_942900(); if (g_unwind) return; RELOAD();
/* 94263c: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 94263f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 942640: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 942643: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 942644: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 942647: call 0x93bb50 */
  esp -= 4; W32(esp, 0x94264cu); SPILL(); f_93bb50(); if (g_unwind) return; RELOAD();
/* 94264c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 94264f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 942651: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 942653: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 942656: lea ecx, [ebp - 0x2d0] */
  ecx = (uint32_t)(ebp + 0xfffffd30u);
/* 94265c: call 0x9428f0 */
  esp -= 4; W32(esp, 0x942661u); SPILL(); f_9428f0(); if (g_unwind) return; RELOAD();
/* 942661: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 942664: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 942665: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 942668: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 942669: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 94266c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94266d: mov eax, dword ptr [ebp - 0x2c0] */
  eax = R32((uint32_t)(ebp + 0xfffffd40u));
/* 942673: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 942674: lea ecx, [ebp - 0x2ba] */
  ecx = (uint32_t)(ebp + 0xfffffd46u);
/* 94267a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94267b: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 94267e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94267f: lea eax, [ebp - 0x2d0] */
  eax = (uint32_t)(ebp + 0xfffffd30u);
/* 942685: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 942686: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 942689: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94268a: call 0x942910 */
  esp -= 4; W32(esp, 0x94268fu); SPILL(); f_942910(); if (g_unwind) return; RELOAD();
/* 94268f: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 942692: xor edx, edx */
  edx = 0;
/* 942694: mov dl, al */
  edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 942696: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 942698: jne 0x9426a1 */
  if (!zf) goto L_9426a1;
L_94269a: /* 94269a: xor eax, eax */
  eax = 0;
/* 94269c: jmp 0x9427e7 */
  goto L_9427e7;
L_9426a1: /* 9426a1: push 0x9428f0 */
  { uint32_t v = 0x9428f0u; esp -= 4; W32(esp, v); }
/* 9426a6: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 9426a8: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 9426aa: lea eax, [ebp - 0x2b8] */
  eax = (uint32_t)(ebp + 0xfffffd48u);
/* 9426b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9426b1: call 0x92c0e0 */
  esp -= 4; W32(esp, 0x9426b6u); SPILL(); f_92c0e0(); if (g_unwind) return; RELOAD();
/* 9426b6: lea ecx, [ebp - 0x2b8] */
  ecx = (uint32_t)(ebp + 0xfffffd48u);
/* 9426bc: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* 9426bf: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9426c2: mov eax, dword ptr [edx + 0x80] */
  eax = R32((uint32_t)(edx + 0x80u));
/* 9426c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9426c9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 9426cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9426cd: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 9426d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9426d1: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 9426d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9426d5: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 9426d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9426d9: call 0x942f90 */
  esp -= 4; W32(esp, 0x9426deu); SPILL(); f_942f90(); if (g_unwind) return; RELOAD();
/* 9426de: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 9426e1: lea edx, [ebp - 0x2b8] */
  edx = (uint32_t)(ebp + 0xfffffd48u);
/* 9426e7: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9426e9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9426ea: mov ecx, 0xc */
  ecx = 0xcu;
/* 9426ef: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x9426ef);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 9426f1: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 9426f4: lea edx, [ebp - 0x2b8] */
  edx = (uint32_t)(ebp + 0xfffffd48u);
/* 9426fa: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 9426fd: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 942700: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 942703: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 942706: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 942709: mov dword ptr [edx + 0xc], 0 */
  W32((uint32_t)(edx + 0xcu), 0x0u);
/* 942710: lea eax, [ebp - 0x2d0] */
  eax = (uint32_t)(ebp + 0xfffffd30u);
/* 942716: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 942717: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 94271a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94271b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 94271e: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 942721: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 942722: call 0x942890 */
  esp -= 4; W32(esp, 0x942727u); SPILL(); f_942890(); if (g_unwind) return; RELOAD();
/* 942727: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 94272e: jmp 0x942739 */
  goto L_942739;
L_942730: /* 942730: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 942733: add eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 942736: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
L_942739: /* 942739: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 94273c: cmp ecx, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 94273f: jae 0x9427d8 */
  if (!cf) goto L_9427d8;
L_942745: /* 942745: lea edx, [ebp - 0x2d0] */
  edx = (uint32_t)(ebp + 0xfffffd30u);
/* 94274b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94274c: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 94274f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 942750: call 0x942810 */
  esp -= 4; W32(esp, 0x942755u); SPILL(); f_942810(); if (g_unwind) return; RELOAD();
/* 942755: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 942758: fstp dword ptr [ebp - 0x2d8] */
  WF32((uint32_t)(ebp + 0xfffffd28u), ST0); FPOP();
/* 94275e: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 942761: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 942767: fcomp dword ptr [ebp - 0x2d8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xfffffd28u)));
  FPOP();
/* 94276d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94276f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 942772: jne 0x9427ca */
  if (!zf) goto L_9427ca;
L_942774: /* 942774: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 942777: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 942778: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* 94277b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94277c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 94277f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 942780: call 0x942830 */
  esp -= 4; W32(esp, 0x942785u); SPILL(); f_942830(); if (g_unwind) return; RELOAD();
/* 942785: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 942788: mov dx, word ptr [ebp - 0x2ba] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffd46u))) & 0xffffu);
/* 94278f: mov word ptr [ecx + 0x1c], dx */
  W16((uint32_t)(ecx + 0x1cu), (edx & 0xffffu));
/* 942793: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 942796: mov ecx, dword ptr [ebp - 0x2d8] */
  ecx = R32((uint32_t)(ebp + 0xfffffd28u));
/* 94279c: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 94279f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 9427a2: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9427a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9427a6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 9427a9: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9427ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9427ad: call 0x9427f0 */
  esp -= 4; W32(esp, 0x9427b2u); SPILL(); f_9427f0(); if (g_unwind) return; RELOAD();
/* 9427b2: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9427b5: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 9427b8: add edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9427bb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 9427be: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 9427c1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 9427c4: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9427c7: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
L_9427ca: /* 9427ca: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 9427cd: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9427d0: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 9427d3: jmp 0x942730 */
  goto L_942730;
L_9427d8: /* 9427d8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 9427db: mov dword ptr [eax + 0x10], 1 */
  W32((uint32_t)(eax + 0x10u), 0x1u);
/* 9427e2: mov eax, 1 */
  eax = 0x1u;
L_9427e7: /* 9427e7: mov esp, ebp */
  esp = ebp;
/* 9427e9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9427ea: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9427f0(void) {
  LOAD_REGS();
L_9427f0: /* 9427f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9427f4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 9427f6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 9427fa: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9427fc: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 9427ff: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 942802: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 942805: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 942808: ret 8 */
  esp += 12; SPILL(); return;
}

void f_942810(void) {
  LOAD_REGS();
L_942810: /* 942810: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 942814: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 942818: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 94281b: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94281e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 942821: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 942824: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 942826: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 942828: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94282a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94282c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_942830(void) {
  LOAD_REGS();
L_942830: /* 942830: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 942834: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 942838: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 94283b: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94283e: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 942842: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 942845: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 942848: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94284a: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 94284c: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94284e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 942850: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 942853: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 942855: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 942858: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94285b: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 94285e: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 942860: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 942862: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 942865: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 942868: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94286a: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 94286d: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 942870: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 942873: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 942876: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 942879: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94287b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94287d: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 942880: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 942883: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 942885: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 942888: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 94288b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_942890(void) {
  LOAD_REGS();
L_942890: /* 942890: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 942894: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 942898: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 94289b: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 94289e: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 9428a2: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 9428a5: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9428a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9428aa: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9428ac: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9428ae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9428b0: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 9428b2: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 9428b5: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9428b8: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 9428bb: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9428bd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9428bf: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 9428c2: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9428c5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9428c7: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 9428ca: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 9428cd: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9428d0: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 9428d3: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9428d5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9428d7: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 9428da: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9428dd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9428df: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 9428e2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_9428f0(void) {
  LOAD_REGS();
L_9428f0: /* 9428f0: mov eax, ecx */
  eax = ecx;
/* 9428f2: ret  */
  esp += 4; SPILL(); return;
}

void f_942900(void) {
  LOAD_REGS();
L_942900: /* 942900: mov eax, ecx */
  eax = ecx;
/* 942902: ret  */
  esp += 4; SPILL(); return;
}

void f_942910(void) {
  LOAD_REGS();
L_942910: /* 942910: sub esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 942916: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 942917: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 942918: mov ebp, dword ptr [esp + 0xc0] */
  ebp = R32((uint32_t)(esp + 0xc0u));
/* 94291f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 942920: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 942921: push 0x9384b0 */
  { uint32_t v = 0x9384b0u; esp -= 4; W32(esp, v); }
/* 942926: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 942928: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 94292a: lea eax, [esp + 0x74] */
  eax = (uint32_t)(esp + 0x74u);
/* 94292e: mov bl, 0xf */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xfu) & 0xffu);
/* 942930: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 942931: mov dword ptr [esp + 0x30], 0xff7fffff */
  W32((uint32_t)(esp + 0x30u), 0xff7fffffu);
/* 942939: mov dword ptr [esp + 0x2c], 0x3f800000 */
  W32((uint32_t)(esp + 0x2cu), 0x3f800000u);
/* 942941: mov byte ptr [esp + 0x23], bl */
  W8((uint32_t)(esp + 0x23u), (ebx & 0xffu));
/* 942945: mov dword ptr [esp + 0x38], 0x3f800000 */
  W32((uint32_t)(esp + 0x38u), 0x3f800000u);
/* 94294d: call 0x92c0e0 */
  esp -= 4; W32(esp, 0x942952u); SPILL(); f_92c0e0(); if (g_unwind) return; RELOAD();
/* 942952: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 942955: fabs  */
  ST0 = fabs(ST0);
/* 942957: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 94295b: fld dword ptr [ebp + 4] */
  { double v = F32((uint32_t)(ebp + 0x4u)); FPUSH(v); }
/* 94295e: mov esi, dword ptr [esp + 0xc0] */
  esi = R32((uint32_t)(esp + 0xc0u));
/* 942965: fabs  */
  ST0 = fabs(ST0);
/* 942967: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 94296b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 94296e: lea eax, [ebp + 0x30] */
  eax = (uint32_t)(ebp + 0x30u);
/* 942971: fabs  */
  ST0 = fabs(ST0);
/* 942973: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 942977: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 94297a: xor ecx, ecx */
  ecx = 0;
/* 94297c: fabs  */
  ST0 = fabs(ST0);
/* 94297e: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 942982: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 942985: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 942987: fabs  */
  ST0 = fabs(ST0);
/* 942989: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 94298d: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 942990: mov edx, esi */
  edx = esi;
/* 942992: fabs  */
  ST0 = fabs(ST0);
/* 942994: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 94299b: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 94299e: lea edi, [esp + 0x78] */
  edi = (uint32_t)(esp + 0x78u);
/* 9429a2: fabs  */
  ST0 = fabs(ST0);
/* 9429a4: fstp dword ptr [esp + 0x88] */
  WF32((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 9429ab: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 9429ae: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 9429b2: fabs  */
  ST0 = fabs(ST0);
/* 9429b4: fstp dword ptr [esp + 0x8c] */
  WF32((uint32_t)(esp + 0x8cu), ST0); FPOP();
/* 9429bb: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 9429be: fabs  */
  ST0 = fabs(ST0);
/* 9429c0: fstp dword ptr [esp + 0x90] */
  WF32((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 9429c7: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9429cb: jmp 0x9429d1 */
  goto L_9429d1;
L_9429cd: /* 9429cd: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
L_9429d1: /* 9429d1: fld dword ptr [eax + edx] */
  { double v = F32((uint32_t)(eax + edx)); FPUSH(v); }
/* 9429d4: mov eax, dword ptr [esp + 0xc4] */
  eax = R32((uint32_t)(esp + 0xc4u));
/* 9429db: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 9429df: fabs  */
  ST0 = fabs(ST0);
/* 9429e1: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 9429e4: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9429e7: fld dword ptr [edi - 0x10] */
  { double v = F32((uint32_t)(edi + 0xfffffff0u)); FPUSH(v); }
/* 9429ea: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9429ec: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9429ee: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9429f1: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 9429f3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9429f5: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 9429f7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9429f9: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 9429fd: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* 942a01: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 942a03: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 942a06: jne 0x942a3d */
  if (!zf) goto L_942a3d;
L_942a08: /* 942a08: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 942a0c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 942a0e: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 942a10: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 942a14: fchs  */
  ST0 = -ST0;
/* 942a16: mov bl, cl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 942a18: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 942a1c: or bl, 0xc */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 942a1f: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 942a23: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 942a27: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 942a2b: fcomp dword ptr [esp + 0xbc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xbcu)));
  FPOP();
/* 942a32: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 942a34: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 942a37: je 0x942c90 */
  if (zf) goto L_942c90;
L_942a3d: /* 942a3d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 942a3e: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 942a41: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 942a44: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 942a47: jl 0x9429cd */
  if ((sf != of)) goto L_9429cd;
L_942a49: /* 942a49: lea eax, [esp + 0x68] */
  eax = (uint32_t)(esp + 0x68u);
/* 942a4d: xor edx, edx */
  edx = 0;
/* 942a4f: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 942a51: mov byte ptr [esp + 0x13], bl */
  W8((uint32_t)(esp + 0x13u), (ebx & 0xffu));
/* 942a55: lea edi, [esp + 0x68] */
  edi = (uint32_t)(esp + 0x68u);
/* 942a59: lea ecx, [ebp + 4] */
  ecx = (uint32_t)(ebp + 0x4u);
/* 942a5c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 942a60: jmp 0x942a66 */
  goto L_942a66;
L_942a62: /* 942a62: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
L_942a66: /* 942a66: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 942a69: fmul dword ptr [ebp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x30u)));
/* 942a6c: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 942a6f: fmul dword ptr [ebp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x38u)));
/* 942a72: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 942a74: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 942a76: fmul dword ptr [ebp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x34u)));
/* 942a79: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 942a7b: fst dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0);
/* 942a7f: fabs  */
  ST0 = fabs(ST0);
/* 942a81: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 942a85: fld dword ptr [eax + ecx] */
  { double v = F32((uint32_t)(eax + ecx)); FPUSH(v); }
/* 942a88: mov eax, dword ptr [esp + 0xc4] */
  eax = R32((uint32_t)(esp + 0xc4u));
/* 942a8f: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 942a92: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 942a95: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 942a98: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 942a9a: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 942a9c: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 942a9e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 942aa0: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 942aa3: fsubr dword ptr [esp + 0x14] */
  ST0 = (F32((uint32_t)(esp + 0x14u))) - ST0;
/* 942aa7: fst dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0);
/* 942aab: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* 942aaf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 942ab1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 942ab4: jne 0x942af4 */
  if (!zf) goto L_942af4;
L_942ab6: /* 942ab6: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 942aba: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 942abc: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 942ac0: mov eax, dword ptr [esp + 0xc4] */
  eax = R32((uint32_t)(esp + 0xc4u));
/* 942ac7: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 942aca: mov bl, dl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 942acc: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 942ad0: shl bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 942ad3: or bl, 3 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 942ad6: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 942ada: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 942ade: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 942ae2: fcomp dword ptr [esp + 0xbc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xbcu)));
  FPOP();
/* 942ae9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 942aeb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 942aee: je 0x942c90 */
  if (zf) goto L_942c90;
L_942af4: /* 942af4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 942af5: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 942af8: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 942afb: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 942afe: jl 0x942a62 */
  if ((sf != of)) goto L_942a62;
L_942b04: /* 942b04: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 942b08: xor ecx, ecx */
  ecx = 0;
/* 942b0a: fadd dword ptr [esp + 0xbc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xbcu)));
/* 942b11: lea eax, [esp + 0x68] */
  eax = (uint32_t)(esp + 0x68u);
/* 942b15: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  eax = r;
  }
/* 942b17: mov byte ptr [esp + 0x13], bl */
  W8((uint32_t)(esp + 0x13u), (ebx & 0xffu));
/* 942b1b: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 942b1f: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 942b23: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
L_942b27: /* 942b27: mov esi, 1 */
  esi = 0x1u;
/* 942b2c: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 942b2e: mov edi, 1 */
  edi = 0x1u;
/* 942b33: and esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  esi = r;
  }
/* 942b36: mov ecx, esi */
  ecx = esi;
/* 942b38: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 942b3a: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 942b3d: lea edx, [esp + ecx + 0x68] */
  edx = (uint32_t)(esp + ecx + 0x68u);
/* 942b41: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 942b45: and edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 942b48: mov eax, edi */
  eax = edi;
/* 942b4a: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 942b4d: lea eax, [esp + eax + 0x68] */
  eax = (uint32_t)(esp + eax + 0x68u);
/* 942b51: mov edx, ebp */
  edx = ebp;
/* 942b53: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 942b55: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 942b59: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 942b5d: xor ecx, ecx */
  ecx = 0;
/* 942b5f: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 942b61: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 942b65: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 942b69: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* 942b6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_942b70: /* 942b70: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 942b74: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 942b78: fld dword ptr [edx + eax] */
  { double v = F32((uint32_t)(edx + eax)); FPUSH(v); }
/* 942b7b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 942b7d: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 942b7f: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 942b85: fcom dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
/* 942b8b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 942b8d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 942b90: jne 0x942ca3 */
  if (!zf) goto L_942ca3;
L_942b96: /* 942b96: mov ebx, dword ptr [esp + 0x64] */
  ebx = R32((uint32_t)(esp + 0x64u));
/* 942b9a: mov eax, 1 */
  eax = 0x1u;
/* 942b9f: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 942ba1: mov edx, 1 */
  edx = 0x1u;
/* 942ba6: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  eax = r;
  }
/* 942ba9: mov ecx, eax */
  ecx = eax;
/* 942bab: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 942bad: mov ecx, dword ptr [esp + 0xc4] */
  ecx = R32((uint32_t)(esp + 0xc4u));
/* 942bb4: fld dword ptr [ecx + edi*4] */
  { double v = F32((uint32_t)(ecx + edi*4)); FPUSH(v); }
/* 942bb7: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 942bbb: fmul dword ptr [ebx + ecx] */
  ST0 = ST0 * (F32((uint32_t)(ebx + ecx)));
/* 942bbe: mov ebx, dword ptr [esp + 0xc4] */
  ebx = R32((uint32_t)(esp + 0xc4u));
/* 942bc5: fld dword ptr [ebx + esi*4] */
  { double v = F32((uint32_t)(ebx + esi*4)); FPUSH(v); }
/* 942bc8: mov ebx, dword ptr [esp + 0xc0] */
  ebx = R32((uint32_t)(esp + 0xc0u));
/* 942bcf: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 942bd1: mov ecx, dword ptr [esp + 0xc8] */
  ecx = R32((uint32_t)(esp + 0xc8u));
/* 942bd8: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 942bdb: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 942bde: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 942be0: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 942be4: fld dword ptr [ebp + eax*4] */
  { double v = F32((uint32_t)(ebp + eax*4)); FPUSH(v); }
/* 942be8: fmul dword ptr [ecx + edx*4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + edx*4)));
/* 942beb: fld dword ptr [ebp + edx*4] */
  { double v = F32((uint32_t)(ebp + edx*4)); FPUSH(v); }
/* 942bef: fmul dword ptr [ecx + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + eax*4)));
/* 942bf2: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 942bf6: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 942bf8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 942bfa: fst dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0);
/* 942bfe: fabs  */
  ST0 = fabs(ST0);
/* 942c00: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 942c04: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 942c07: fmul dword ptr [ebx + edx*4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + edx*4)));
/* 942c0a: fld dword ptr [ecx + edx*4] */
  { double v = F32((uint32_t)(ecx + edx*4)); FPUSH(v); }
/* 942c0d: fmul dword ptr [ebx + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + eax*4)));
/* 942c10: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 942c12: fsubr dword ptr [esp + 0x1c] */
  ST0 = (F32((uint32_t)(esp + 0x1cu))) - ST0;
/* 942c16: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 942c1a: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 942c1e: fsqrt  */
  ST0 = sqrt(ST0);
/* 942c20: fst dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0);
/* 942c24: fmul dword ptr [esp + 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xbcu)));
/* 942c2b: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 942c2f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 942c31: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 942c34: jnp 0x942c94 */
  if (!pf) goto L_942c94;
L_942c36: /* 942c36: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 942c3a: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 942c3e: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 942c42: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 942c46: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 942c48: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 942c4b: jp 0x942ca7 */
  if (pf) goto L_942ca7;
L_942c4d: /* 942c4d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 942c4f: mov bl, byte ptr [esp + 0x14] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x14u))) & 0xffu);
/* 942c53: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 942c59: shl bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 942c5c: fdiv dword ptr [esp + 0x44] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x44u)));
/* 942c60: or bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 942c62: mov byte ptr [esp + 0x13], bl */
  W8((uint32_t)(esp + 0x13u), (ebx & 0xffu));
/* 942c66: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 942c6a: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 942c6e: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 942c72: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 942c76: fst dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0);
/* 942c7a: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 942c7e: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 942c82: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 942c86: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 942c8a: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 942c8e: jmp 0x942cab */
  goto L_942cab;
L_942c90: /* 942c90: mov byte ptr [esp + 0x13], bl */
  W8((uint32_t)(esp + 0x13u), (ebx & 0xffu));
L_942c94: /* 942c94: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 942c95: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 942c97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 942c98: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 942c99: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 942c9b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 942c9c: add esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 942ca2: ret  */
  esp += 4; SPILL(); return;
L_942ca3: /* 942ca3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 942ca5: jmp 0x942cab */
  goto L_942cab;
L_942ca7: /* 942ca7: mov bl, byte ptr [esp + 0x13] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu);
L_942cab: /* 942cab: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 942caf: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 942cb0: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 942cb3: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 942cb6: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 942cba: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 942cbe: jl 0x942b70 */
  if ((sf != of)) goto L_942b70;
L_942cc4: /* 942cc4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 942cc8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 942cc9: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 942ccc: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 942ccf: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 942cd3: jl 0x942b27 */
  if ((sf != of)) goto L_942b27;
L_942cd9: /* 942cd9: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 942cdd: mov edx, dword ptr [esp + 0xac] */
  edx = R32((uint32_t)(esp + 0xacu));
/* 942ce4: mov eax, dword ptr [esp + 0xb4] */
  eax = R32((uint32_t)(esp + 0xb4u));
/* 942ceb: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 942ced: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 942cf1: mov cl, bl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 942cf3: and cl, 0xc */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 942cf6: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 942cf8: cmp cl, 0xc */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 942cfb: jne 0x942da9 */
  if (!zf) goto L_942da9;
L_942d01: /* 942d01: and bl, 3 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 942d04: movsx esi, bl */
  esi = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 942d07: fld dword ptr [esp + esi*4 + 0x68] */
  { double v = F32((uint32_t)(esp + esi*4 + 0x68u)); FPUSH(v); }
/* 942d0b: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 942d11: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 942d13: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 942d16: jp 0x942d1f */
  if (pf) goto L_942d1f;
L_942d18: /* 942d18: mov edx, 1 */
  edx = 0x1u;
/* 942d1d: jmp 0x942d21 */
  goto L_942d21;
L_942d1f: /* 942d1f: xor edx, edx */
  edx = 0;
L_942d21: /* 942d21: fld dword ptr [esp + esi*4 + 0x78] */
  { double v = F32((uint32_t)(esp + esi*4 + 0x78u)); FPUSH(v); }
/* 942d25: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 942d2b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 942d2d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 942d30: jp 0x942d39 */
  if (pf) goto L_942d39;
L_942d32: /* 942d32: mov ecx, 1 */
  ecx = 0x1u;
/* 942d37: jmp 0x942d3b */
  goto L_942d3b;
L_942d39: /* 942d39: xor ecx, ecx */
  ecx = 0;
L_942d3b: /* 942d3b: fld dword ptr [esp + esi*4 + 0x88] */
  { double v = F32((uint32_t)(esp + esi*4 + 0x88u)); FPUSH(v); }
/* 942d42: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 942d48: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 942d4a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 942d4d: jp 0x942d56 */
  if (pf) goto L_942d56;
L_942d4f: /* 942d4f: mov eax, 1 */
  eax = 0x1u;
/* 942d54: jmp 0x942d58 */
  goto L_942d58;
L_942d56: /* 942d56: xor eax, eax */
  eax = 0;
L_942d58: /* 942d58: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 942d5e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 942d60: xor eax, eax */
  eax = 0;
/* 942d62: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 942d64: mov edx, dword ptr [esp + 0xb0] */
  edx = R32((uint32_t)(esp + 0xb0u));
/* 942d6b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 942d6d: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 942d70: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 942d73: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 942d75: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 942d78: jp 0x942d82 */
  if (pf) goto L_942d82;
L_942d7a: /* 942d7a: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 942d80: jmp 0x942d88 */
  goto L_942d88;
L_942d82: /* 942d82: fld dword ptr [0xa08220] */
  { double v = F32((uint32_t)(0xa08220u)); FPUSH(v); }
L_942d88: /* 942d88: mov eax, dword ptr [esp + 0xb8] */
  eax = R32((uint32_t)(esp + 0xb8u));
/* 942d8f: fstp dword ptr [edx + esi*4] */
  WF32((uint32_t)(edx + esi*4), ST0); FPOP();
/* 942d92: xor edx, edx */
  edx = 0;
/* 942d94: mov dh, cl */
  edx = (edx & 0xffff00ffu) | (((uint32_t)((ecx & 0xffu)) & 0xffu) << 8);
/* 942d96: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 942d97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 942d98: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 942d99: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 942d9a: or edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 942d9d: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 942da0: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 942da2: add esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 942da8: ret  */
  esp += 4; SPILL(); return;
L_942da9: /* 942da9: mov cl, bl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 942dab: and cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 942dae: cmp cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 942db1: jne 0x942e81 */
  if (!zf) goto L_942e81;
L_942db7: /* 942db7: shr bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 942dba: and bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 942dbc: movsx ecx, bl */
  ecx = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 942dbf: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 942dc2: fld dword ptr [esp + ecx + 0x68] */
  { double v = F32((uint32_t)(esp + ecx + 0x68u)); FPUSH(v); }
/* 942dc6: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 942dcc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 942dce: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 942dd1: jp 0x942dda */
  if (pf) goto L_942dda;
L_942dd3: /* 942dd3: mov esi, 1 */
  esi = 0x1u;
/* 942dd8: jmp 0x942ddc */
  goto L_942ddc;
L_942dda: /* 942dda: xor esi, esi */
  esi = 0;
L_942ddc: /* 942ddc: fld dword ptr [esp + ecx + 0x6c] */
  { double v = F32((uint32_t)(esp + ecx + 0x6cu)); FPUSH(v); }
/* 942de0: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 942de6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 942de8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 942deb: jp 0x942df4 */
  if (pf) goto L_942df4;
L_942ded: /* 942ded: mov edx, 1 */
  edx = 0x1u;
/* 942df2: jmp 0x942df6 */
  goto L_942df6;
L_942df4: /* 942df4: xor edx, edx */
  edx = 0;
L_942df6: /* 942df6: fld dword ptr [esp + ecx + 0x70] */
  { double v = F32((uint32_t)(esp + ecx + 0x70u)); FPUSH(v); }
/* 942dfa: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 942e00: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 942e02: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 942e05: jp 0x942e0e */
  if (pf) goto L_942e0e;
L_942e07: /* 942e07: mov eax, 1 */
  eax = 0x1u;
/* 942e0c: jmp 0x942e10 */
  goto L_942e10;
L_942e0e: /* 942e0e: xor eax, eax */
  eax = 0;
L_942e10: /* 942e10: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 942e16: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 942e18: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 942e1a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 942e1c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 942e1f: mov eax, dword ptr [esp + 0xc8] */
  eax = R32((uint32_t)(esp + 0xc8u));
/* 942e26: jne 0x942e4b */
  if (!zf) goto L_942e4b;
L_942e28: /* 942e28: fld dword ptr [ecx + eax] */
  { double v = F32((uint32_t)(ecx + eax)); FPUSH(v); }
/* 942e2b: fchs  */
  ST0 = -ST0;
/* 942e2d: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 942e31: fld dword ptr [ecx + eax + 4] */
  { double v = F32((uint32_t)(ecx + eax + 0x4u)); FPUSH(v); }
/* 942e35: fchs  */
  ST0 = -ST0;
/* 942e37: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 942e3b: fld dword ptr [ecx + eax + 8] */
  { double v = F32((uint32_t)(ecx + eax + 0x8u)); FPUSH(v); }
/* 942e3f: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 942e43: fchs  */
  ST0 = -ST0;
/* 942e45: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 942e49: jmp 0x942e4d */
  goto L_942e4d;
L_942e4b: /* 942e4b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_942e4d: /* 942e4d: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 942e4f: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 942e56: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 942e58: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 942e5b: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 942e5e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 942e61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 942e62: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 942e65: mov ecx, dword ptr [esp + 0xb4] */
  ecx = R32((uint32_t)(esp + 0xb4u));
/* 942e6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 942e6d: or edx, 0x200 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 942e73: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 942e74: mov word ptr [ecx], dx */
  W16((uint32_t)(ecx), (edx & 0xffffu));
/* 942e77: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 942e79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 942e7a: add esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 942e80: ret  */
  esp += 4; SPILL(); return;
L_942e81: /* 942e81: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 942e87: mov esi, 1 */
  esi = 0x1u;
/* 942e8c: mov edx, esi */
  edx = esi;
/* 942e8e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 942e90: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 942e93: jp 0x942ef0 */
  if (pf) goto L_942ef0;
L_942e95: /* 942e95: xor ecx, ecx */
  ecx = 0;
/* 942e97: mov cl, bl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 942e99: mov ebx, dword ptr [esp + 0xc8] */
  ebx = R32((uint32_t)(esp + 0xc8u));
/* 942ea0: mov eax, ecx */
  eax = ecx;
/* 942ea2: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 942ea5: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 942ea7: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 942eaa: mov edi, ecx */
  edi = ecx;
/* 942eac: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 942eaf: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 942eb2: mov ecx, edx */
  ecx = edx;
/* 942eb4: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 942eb6: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 942eb9: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 942ebb: mov dword ptr [esp + edi*4 + 0x30], 0 */
  W32((uint32_t)(esp + edi*4 + 0x30u), 0x0u);
/* 942ec3: and esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 942ec6: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 942ec9: fchs  */
  ST0 = -ST0;
/* 942ecb: fstp dword ptr [esp + edx*4 + 0x30] */
  WF32((uint32_t)(esp + edx*4 + 0x30u), ST0); FPOP();
/* 942ecf: mov edx, dword ptr [eax + edx*4] */
  edx = R32((uint32_t)(eax + edx*4));
/* 942ed2: mov dword ptr [esp + esi*4 + 0x30], edx */
  W32((uint32_t)(esp + esi*4 + 0x30u), edx);
/* 942ed6: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 942eda: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 942ede: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 942ee2: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 942ee6: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 942eea: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 942eee: jmp 0x942f49 */
  goto L_942f49;
L_942ef0: /* 942ef0: xor eax, eax */
  eax = 0;
/* 942ef2: mov al, bl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 942ef4: mov ebx, dword ptr [esp + 0xc8] */
  ebx = R32((uint32_t)(esp + 0xc8u));
/* 942efb: mov edi, eax */
  edi = eax;
/* 942efd: and edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 942f00: mov ecx, edi */
  ecx = edi;
/* 942f02: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 942f04: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 942f07: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 942f0a: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 942f0d: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 942f10: mov ecx, edx */
  ecx = edx;
/* 942f12: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 942f14: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 942f16: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 942f19: mov dword ptr [esp + edi*4 + 0x30], 0 */
  W32((uint32_t)(esp + edi*4 + 0x30u), 0x0u);
/* 942f21: fchs  */
  ST0 = -ST0;
/* 942f23: and esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 942f26: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 942f29: mov dword ptr [esp + edx*4 + 0x30], ecx */
  W32((uint32_t)(esp + edx*4 + 0x30u), ecx);
/* 942f2d: fstp dword ptr [esp + esi*4 + 0x30] */
  WF32((uint32_t)(esp + esi*4 + 0x30u), ST0); FPOP();
/* 942f31: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 942f35: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 942f39: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 942f3d: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 942f41: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 942f45: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
L_942f49: /* 942f49: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 942f4d: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 942f54: mov edx, dword ptr [esp + 0xb8] */
  edx = R32((uint32_t)(esp + 0xb8u));
/* 942f5b: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 942f5f: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 942f61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 942f62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 942f63: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 942f64: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 942f66: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 942f67: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 942f6b: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 942f6e: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 942f71: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 942f75: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 942f78: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 942f7a: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 942f7d: mov word ptr [edx], 0x101 */
  W16((uint32_t)(edx), 0x101u);
/* 942f82: add esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 942f88: ret  */
  esp += 4; SPILL(); return;
}

void f_942f90(void) {
  LOAD_REGS();
L_942f90: /* 942f90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 942f91: mov ebp, esp */
  ebp = esp;
/* 942f93: sub esp, 0x17c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 942f99: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 942f9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 942f9d: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 942fa0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 942fa1: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 942fa4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 942fa5: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 942fa8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 942fa9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 942fac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 942fad: call 0x943110 */
  esp -= 4; W32(esp, 0x942fb2u); SPILL(); f_943110(); if (g_unwind) return; RELOAD();
/* 942fb2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 942fb5: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 942fb8: call 0x942900 */
  esp -= 4; W32(esp, 0x942fbdu); SPILL(); f_942900(); if (g_unwind) return; RELOAD();
/* 942fbd: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 942fc0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 942fc1: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 942fc4: call 0x943080 */
  esp -= 4; W32(esp, 0x942fc9u); SPILL(); f_943080(); if (g_unwind) return; RELOAD();
/* 942fc9: push 0x9428f0 */
  { uint32_t v = 0x9428f0u; esp -= 4; W32(esp, v); }
/* 942fce: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 942fd0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 942fd2: lea eax, [ebp - 0x160] */
  eax = (uint32_t)(ebp + 0xfffffea0u);
/* 942fd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 942fd9: call 0x92c0e0 */
  esp -= 4; W32(esp, 0x942fdeu); SPILL(); f_92c0e0(); if (g_unwind) return; RELOAD();
/* 942fde: lea ecx, [ebp - 0x160] */
  ecx = (uint32_t)(ebp + 0xfffffea0u);
/* 942fe4: mov dword ptr [ebp - 0x164], ecx */
  W32((uint32_t)(ebp + 0xfffffe9cu), ecx);
/* 942fea: lea edx, [ebp - 0x160] */
  edx = (uint32_t)(ebp + 0xfffffea0u);
/* 942ff0: mov dword ptr [ebp - 0x168], edx */
  W32((uint32_t)(ebp + 0xfffffe98u), edx);
/* 942ff6: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 942ff9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 942ffa: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 942ffd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 942ffe: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 943001: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 943002: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 943005: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 943006: lea ecx, [ebp - 0x164] */
  ecx = (uint32_t)(ebp + 0xfffffe9cu);
/* 94300c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94300d: call 0x943110 */
  esp -= 4; W32(esp, 0x943012u); SPILL(); f_943110(); if (g_unwind) return; RELOAD();
/* 943012: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_943015: /* 943015: mov edx, dword ptr [ebp - 0x168] */
  edx = R32((uint32_t)(ebp + 0xfffffe98u));
/* 94301b: cmp edx, dword ptr [ebp - 0x164] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe9cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 943021: je 0x94306e */
  if (zf) goto L_94306e;
L_943023: /* 943023: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 943026: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 943028: mov dword ptr [ebp - 0x178], ecx */
  W32((uint32_t)(ebp + 0xfffffe88u), ecx);
/* 94302e: mov edx, dword ptr [ebp - 0x178] */
  edx = R32((uint32_t)(ebp + 0xfffffe88u));
/* 943034: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 943035: mov eax, dword ptr [ebp - 0x168] */
  eax = R32((uint32_t)(ebp + 0xfffffe98u));
/* 94303b: mov dword ptr [ebp - 0x17c], eax */
  W32((uint32_t)(ebp + 0xfffffe84u), eax);
/* 943041: mov ecx, dword ptr [ebp - 0x17c] */
  ecx = R32((uint32_t)(ebp + 0xfffffe84u));
/* 943047: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 943048: mov edx, dword ptr [ebp - 0x168] */
  edx = R32((uint32_t)(ebp + 0xfffffe98u));
/* 94304e: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 943051: mov dword ptr [ebp - 0x168], edx */
  W32((uint32_t)(ebp + 0xfffffe98u), edx);
/* 943057: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 94305a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 94305c: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94305f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 943062: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 943064: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 943067: call 0x933ef0 */
  esp -= 4; W32(esp, 0x94306cu); SPILL(); f_933ef0(); if (g_unwind) return; RELOAD();
/* 94306c: jmp 0x943015 */
  goto L_943015;
L_94306e: /* 94306e: mov esp, ebp */
  esp = ebp;
/* 943070: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 943071: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_943080(void) {
  LOAD_REGS();
L_943080: /* 943080: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 943084: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 943086: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 943088: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 94308b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 94308e: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 943091: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 943094: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 943097: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 94309a: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 94309d: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 9430a0: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 9430a3: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 9430a6: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 9430a9: mov dword ptr [ecx + 0x20], edx */
  W32((uint32_t)(ecx + 0x20u), edx);
/* 9430ac: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 9430af: mov dword ptr [ecx + 0x24], edx */
  W32((uint32_t)(ecx + 0x24u), edx);
/* 9430b2: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 9430b5: mov dword ptr [ecx + 0x28], edx */
  W32((uint32_t)(ecx + 0x28u), edx);
/* 9430b8: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 9430bb: fchs  */
  ST0 = -ST0;
/* 9430bd: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* 9430c0: fchs  */
  ST0 = -ST0;
/* 9430c2: fld dword ptr [eax + 0x38] */
  { double v = F32((uint32_t)(eax + 0x38u)); FPUSH(v); }
/* 9430c5: fchs  */
  ST0 = -ST0;
/* 9430c7: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9430c9: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 9430cc: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9430ce: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 9430d1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9430d3: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 9430d5: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9430d7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9430d9: fstp dword ptr [ecx + 0x30] */
  WF32((uint32_t)(ecx + 0x30u), ST0); FPOP();
/* 9430dc: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9430de: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 9430e1: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9430e3: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 9430e6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9430e8: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 9430ea: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 9430ed: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9430ef: fstp dword ptr [ecx + 0x34] */
  WF32((uint32_t)(ecx + 0x34u), ST0); FPOP();
/* 9430f2: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 9430f5: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9430f7: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 9430fa: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9430fc: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 9430ff: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 943101: fstp dword ptr [ecx + 0x38] */
  WF32((uint32_t)(ecx + 0x38u), ST0); FPOP();
/* 943104: ret 4 */
  esp += 8; SPILL(); return;
}

void f_943110(void) {
  LOAD_REGS();
L_943110: /* 943110: sub esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 943113: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 943114: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 943115: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 943116: mov esi, dword ptr [esp + 0x78] */
  esi = R32((uint32_t)(esp + 0x78u));
/* 94311a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94311b: mov edi, dword ptr [esp + 0x84] */
  edi = R32((uint32_t)(esp + 0x84u));
/* 943122: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 943124: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 943127: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 943129: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 94312d: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 943130: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 943134: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 943136: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 943139: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 94313d: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 94313f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 943142: call 0x92ec40 */
  esp -= 4; W32(esp, 0x943147u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 943147: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 94314a: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 94314e: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 943152: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 943154: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 943157: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 94315b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94315e: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 943162: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 943166: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 94316a: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 94316e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 943170: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 943174: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 943177: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 94317b: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 94317e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 943181: call 0x92ec40 */
  esp -= 4; W32(esp, 0x943186u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 943186: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 943189: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 94318d: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 943191: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 943193: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 943196: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 94319a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94319d: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 9431a1: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 9431a5: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 9431a9: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 9431ad: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9431af: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 9431b3: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 9431b6: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 9431ba: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 9431bd: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9431c0: call 0x92ec40 */
  esp -= 4; W32(esp, 0x9431c5u); SPILL(); f_92ec40(); if (g_unwind) return; RELOAD();
/* 9431c5: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9431cb: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 9431cf: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 9431d3: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 9431d7: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 9431db: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 9431df: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 9431e3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9431e5: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 9431e9: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9431ec: jnp 0x9431fa */
  if (!pf) goto L_9431fa;
L_9431ee: /* 9431ee: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9431f4: fdiv dword ptr [esp + 0x28] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x28u)));
/* 9431f8: jmp 0x943200 */
  goto L_943200;
L_9431fa: /* 9431fa: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_943200: /* 943200: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 943206: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 94320a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94320c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94320f: jnp 0x94321d */
  if (!pf) goto L_94321d;
L_943211: /* 943211: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 943217: fdiv dword ptr [esp + 0x24] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x24u)));
/* 94321b: jmp 0x943223 */
  goto L_943223;
L_94321d: /* 94321d: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_943223: /* 943223: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 943229: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* 94322d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94322f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 943232: jnp 0x943240 */
  if (!pf) goto L_943240;
L_943234: /* 943234: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 94323a: fdiv dword ptr [esp + 0x20] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x20u)));
/* 94323e: jmp 0x943246 */
  goto L_943246;
L_943240: /* 943240: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_943246: /* 943246: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 94324a: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 94324e: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 943252: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 943258: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 94325c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94325e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 943261: jnp 0x94326f */
  if (!pf) goto L_94326f;
L_943263: /* 943263: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 943269: fdiv dword ptr [esp + 0x34] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x34u)));
/* 94326d: jmp 0x943275 */
  goto L_943275;
L_94326f: /* 94326f: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_943275: /* 943275: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 94327b: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 94327f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943281: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 943284: jnp 0x943292 */
  if (!pf) goto L_943292;
L_943286: /* 943286: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 94328c: fdiv dword ptr [esp + 0x30] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x30u)));
/* 943290: jmp 0x943298 */
  goto L_943298;
L_943292: /* 943292: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_943298: /* 943298: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 94329e: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 9432a2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9432a4: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9432a7: jnp 0x9432b5 */
  if (!pf) goto L_9432b5;
L_9432a9: /* 9432a9: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9432af: fdiv dword ptr [esp + 0x2c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x2cu)));
/* 9432b3: jmp 0x9432bb */
  goto L_9432bb;
L_9432b5: /* 9432b5: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_9432bb: /* 9432bb: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 9432bf: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 9432c3: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 9432c7: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9432cd: fcomp dword ptr [esp + 0x4c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4cu)));
  FPOP();
/* 9432d1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9432d3: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9432d6: jnp 0x9432e4 */
  if (!pf) goto L_9432e4;
L_9432d8: /* 9432d8: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9432de: fdiv dword ptr [esp + 0x4c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x4cu)));
/* 9432e2: jmp 0x9432ea */
  goto L_9432ea;
L_9432e4: /* 9432e4: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_9432ea: /* 9432ea: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9432f0: fcomp dword ptr [esp + 0x48] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x48u)));
  FPOP();
/* 9432f4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9432f6: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9432f9: jnp 0x943307 */
  if (!pf) goto L_943307;
L_9432fb: /* 9432fb: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 943301: fdiv dword ptr [esp + 0x48] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x48u)));
/* 943305: jmp 0x94330d */
  goto L_94330d;
L_943307: /* 943307: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_94330d: /* 94330d: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 943313: fcomp dword ptr [esp + 0x44] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x44u)));
  FPOP();
/* 943317: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943319: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94331c: jnp 0x94332a */
  if (!pf) goto L_94332a;
L_94331e: /* 94331e: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 943324: fdiv dword ptr [esp + 0x44] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x44u)));
/* 943328: jmp 0x943330 */
  goto L_943330;
L_94332a: /* 94332a: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_943330: /* 943330: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 943334: mov ebx, dword ptr [esp + 0x80] */
  ebx = R32((uint32_t)(esp + 0x80u));
/* 94333b: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 94333f: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 943343: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 943347: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 94334b: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 94334f: mov dword ptr [esp + 0x84], 0xbf800000 */
  W32((uint32_t)(esp + 0x84u), 0xbf800000u);
/* 94335a: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 94335e: mov dword ptr [esp + 0x7c], 0x3f800000 */
  W32((uint32_t)(esp + 0x7cu), 0x3f800000u);
/* 943366: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 943369: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 94336d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 943371: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 943375: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 943379: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 94337c: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 943380: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 943384: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 943387: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 94338b: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 94338f: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 943396: fmul dword ptr [0xa20e08] */
  ST0 = ST0 * (F32((uint32_t)(0xa20e08u)));
/* 94339c: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9433a0: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 9433a4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9433a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9433a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9433a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9433a8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9433a9: lea eax, [esp + 0x90] */
  eax = (uint32_t)(esp + 0x90u);
/* 9433b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9433b1: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* 9433b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9433b9: call 0x943f70 */
  esp -= 4; W32(esp, 0x9433beu); SPILL(); f_943f70(); if (g_unwind) return; RELOAD();
/* 9433be: mov edi, dword ptr [esp + 0x94] */
  edi = R32((uint32_t)(esp + 0x94u));
/* 9433c5: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9433c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9433ca: je 0x9434a1 */
  if (zf) goto L_9434a1;
L_9433d0: /* 9433d0: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 9433d7: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 9433dd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9433df: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9433e2: jne 0x94343d */
  if (!zf) goto L_94343d;
L_9433e4: /* 9433e4: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 9433eb: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 9433f1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9433f3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9433f6: jp 0x94343d */
  if (pf) goto L_94343d;
L_9433f8: /* 9433f8: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9433fc: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 9433fe: fmul dword ptr [esp + 0x84] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x84u)));
/* 943405: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 943408: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 94340c: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 943410: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 943414: fmul dword ptr [esp + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x90u)));
/* 94341b: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 94341f: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 943423: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 94342a: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 94342e: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 943432: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 943435: call 0x93da90 */
  esp -= 4; W32(esp, 0x94343au); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
/* 94343a: add dword ptr [edi], 0xc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
L_94343d: /* 94343d: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 943441: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 943447: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943449: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94344c: jne 0x9434a1 */
  if (!zf) goto L_9434a1;
L_94344e: /* 94344e: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 943452: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 943458: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94345a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94345d: jp 0x9434a1 */
  if (pf) goto L_9434a1;
L_94345f: /* 94345f: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 943463: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 943465: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 943469: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94346c: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 943470: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 943474: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 943478: fmul dword ptr [esp + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x88u)));
/* 94347f: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 943483: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 943487: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 94348e: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 943492: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 943496: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 943499: call 0x93da90 */
  esp -= 4; W32(esp, 0x94349eu); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
/* 94349e: add dword ptr [edi], 0xc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
L_9434a1: /* 9434a1: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 9434a4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9434a5: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 9434a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9434aa: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 9434ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9434af: fadd dword ptr [esp + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x44u)));
/* 9434b3: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 9434b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9434b8: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 9434bc: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 9434c0: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* 9434c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9434c4: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 9434c8: lea edx, [esp + 0x90] */
  edx = (uint32_t)(esp + 0x90u);
/* 9434cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9434d0: lea eax, [esp + 0x9c] */
  eax = (uint32_t)(esp + 0x9cu);
/* 9434d7: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 9434db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9434dc: mov dword ptr [esp + 0xa0], 0xbf800000 */
  W32((uint32_t)(esp + 0xa0u), 0xbf800000u);
/* 9434e7: mov dword ptr [esp + 0x98], 0x3f800000 */
  W32((uint32_t)(esp + 0x98u), 0x3f800000u);
/* 9434f2: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 9434f6: fld dword ptr [esi + 0x38] */
  { double v = F32((uint32_t)(esi + 0x38u)); FPUSH(v); }
/* 9434f9: fsub dword ptr [esp + 0x50] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x50u)));
/* 9434fd: fadd dword ptr [esp + 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x5cu)));
/* 943501: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 943505: call 0x943f70 */
  esp -= 4; W32(esp, 0x94350au); SPILL(); f_943f70(); if (g_unwind) return; RELOAD();
/* 94350a: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94350d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94350f: je 0x9435e6 */
  if (zf) goto L_9435e6;
L_943515: /* 943515: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 94351c: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 943522: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943524: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 943527: jne 0x943582 */
  if (!zf) goto L_943582;
L_943529: /* 943529: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 943530: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 943536: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943538: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94353b: jp 0x943582 */
  if (pf) goto L_943582;
L_94353d: /* 94353d: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 943541: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 943543: fmul dword ptr [esp + 0x84] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x84u)));
/* 94354a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94354d: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 943551: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 943555: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 943559: fmul dword ptr [esp + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x90u)));
/* 943560: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 943564: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 943568: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 94356f: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 943573: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 943577: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 94357a: call 0x93da90 */
  esp -= 4; W32(esp, 0x94357fu); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
/* 94357f: add dword ptr [edi], 0xc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
L_943582: /* 943582: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 943586: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 94358c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94358e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 943591: jne 0x9435e6 */
  if (!zf) goto L_9435e6;
L_943593: /* 943593: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 943597: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 94359d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94359f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9435a2: jp 0x9435e6 */
  if (pf) goto L_9435e6;
L_9435a4: /* 9435a4: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9435a8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 9435aa: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 9435ae: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9435b1: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 9435b5: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 9435b9: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9435bd: fmul dword ptr [esp + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x88u)));
/* 9435c4: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 9435c8: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 9435cc: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 9435d3: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 9435d7: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 9435db: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9435de: call 0x93da90 */
  esp -= 4; W32(esp, 0x9435e3u); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
/* 9435e3: add dword ptr [edi], 0xc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
L_9435e6: /* 9435e6: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 9435ea: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9435eb: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 9435ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9435ef: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 9435f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9435f4: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 9435f8: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 9435fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9435fd: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 943601: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 943605: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 943609: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94360a: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 94360d: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 943614: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 943615: lea edx, [esp + 0x9c] */
  edx = (uint32_t)(esp + 0x9cu);
/* 94361c: fsub dword ptr [esp + 0x54] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x54u)));
/* 943620: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 943621: mov dword ptr [esp + 0xa0], 0xbf800000 */
  W32((uint32_t)(esp + 0xa0u), 0xbf800000u);
/* 94362c: mov dword ptr [esp + 0x98], 0x3f800000 */
  W32((uint32_t)(esp + 0x98u), 0x3f800000u);
/* 943637: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 94363b: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 94363f: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 943642: fsub dword ptr [esp + 0x5c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x5cu)));
/* 943646: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 94364a: call 0x943f70 */
  esp -= 4; W32(esp, 0x94364fu); SPILL(); f_943f70(); if (g_unwind) return; RELOAD();
/* 94364f: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 943652: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 943654: je 0x94372b */
  if (zf) goto L_94372b;
L_94365a: /* 94365a: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 943661: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 943667: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943669: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94366c: jne 0x9436c7 */
  if (!zf) goto L_9436c7;
L_94366e: /* 94366e: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 943675: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 94367b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94367d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 943680: jp 0x9436c7 */
  if (pf) goto L_9436c7;
L_943682: /* 943682: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 943686: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 943688: fmul dword ptr [esp + 0x84] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x84u)));
/* 94368f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 943692: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 943696: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 94369a: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 94369e: fmul dword ptr [esp + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x90u)));
/* 9436a5: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 9436a9: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 9436ad: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 9436b4: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 9436b8: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 9436bc: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9436bf: call 0x93da90 */
  esp -= 4; W32(esp, 0x9436c4u); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
/* 9436c4: add dword ptr [edi], 0xc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
L_9436c7: /* 9436c7: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 9436cb: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 9436d1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9436d3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9436d6: jne 0x94372b */
  if (!zf) goto L_94372b;
L_9436d8: /* 9436d8: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 9436dc: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 9436e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9436e4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9436e7: jp 0x94372b */
  if (pf) goto L_94372b;
L_9436e9: /* 9436e9: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9436ed: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 9436ef: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 9436f3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9436f6: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 9436fa: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 9436fe: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 943702: fmul dword ptr [esp + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x88u)));
/* 943709: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 94370d: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 943711: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 943718: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 94371c: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 943720: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 943723: call 0x93da90 */
  esp -= 4; W32(esp, 0x943728u); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
/* 943728: add dword ptr [edi], 0xc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
L_94372b: /* 94372b: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 94372e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94372f: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 943733: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 943734: lea eax, [esp + 0x58] */
  eax = (uint32_t)(esp + 0x58u);
/* 943738: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 943739: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 94373d: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 943741: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 943742: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 943746: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 94374a: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* 94374d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94374e: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 943752: lea eax, [esp + 0x90] */
  eax = (uint32_t)(esp + 0x90u);
/* 943759: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94375a: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* 943761: fsub dword ptr [esp + 0x54] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x54u)));
/* 943765: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 943766: mov dword ptr [esp + 0xa0], 0xbf800000 */
  W32((uint32_t)(esp + 0xa0u), 0xbf800000u);
/* 943771: mov dword ptr [esp + 0x98], 0x3f800000 */
  W32((uint32_t)(esp + 0x98u), 0x3f800000u);
/* 94377c: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 943780: fld dword ptr [esi + 0x38] */
  { double v = F32((uint32_t)(esi + 0x38u)); FPUSH(v); }
/* 943783: fsub dword ptr [esp + 0x50] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x50u)));
/* 943787: fsub dword ptr [esp + 0x5c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x5cu)));
/* 94378b: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 94378f: call 0x943f70 */
  esp -= 4; W32(esp, 0x943794u); SPILL(); f_943f70(); if (g_unwind) return; RELOAD();
/* 943794: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 943797: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 943799: je 0x943870 */
  if (zf) goto L_943870;
L_94379f: /* 94379f: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 9437a6: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 9437ac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9437ae: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9437b1: jne 0x94380c */
  if (!zf) goto L_94380c;
L_9437b3: /* 9437b3: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 9437ba: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 9437c0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9437c2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9437c5: jp 0x94380c */
  if (pf) goto L_94380c;
L_9437c7: /* 9437c7: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9437cb: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 9437cd: fmul dword ptr [esp + 0x84] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x84u)));
/* 9437d4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9437d7: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 9437db: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 9437df: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9437e3: fmul dword ptr [esp + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x90u)));
/* 9437ea: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 9437ee: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 9437f2: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 9437f9: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 9437fd: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 943801: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 943804: call 0x93da90 */
  esp -= 4; W32(esp, 0x943809u); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
/* 943809: add dword ptr [edi], 0xc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
L_94380c: /* 94380c: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 943810: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 943816: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943818: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94381b: jne 0x943870 */
  if (!zf) goto L_943870;
L_94381d: /* 94381d: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 943821: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 943827: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943829: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94382c: jp 0x943870 */
  if (pf) goto L_943870;
L_94382e: /* 94382e: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 943832: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 943834: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 943838: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94383b: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 94383f: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 943843: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 943847: fmul dword ptr [esp + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x88u)));
/* 94384e: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 943852: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 943856: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 94385d: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 943861: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 943865: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 943868: call 0x93da90 */
  esp -= 4; W32(esp, 0x94386du); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
/* 94386d: add dword ptr [edi], 0xc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
L_943870: /* 943870: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 943874: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 943875: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 943878: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 943879: lea edx, [esp + 0x64] */
  edx = (uint32_t)(esp + 0x64u);
/* 94387d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94387e: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 943882: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 943886: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 943887: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 94388b: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 94388f: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 943893: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 943894: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 943898: lea edx, [esp + 0x90] */
  edx = (uint32_t)(esp + 0x90u);
/* 94389f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9438a0: lea eax, [esp + 0x9c] */
  eax = (uint32_t)(esp + 0x9cu);
/* 9438a7: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 9438aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9438ab: mov dword ptr [esp + 0xa0], 0xbf800000 */
  W32((uint32_t)(esp + 0xa0u), 0xbf800000u);
/* 9438b6: mov dword ptr [esp + 0x98], 0x3f800000 */
  W32((uint32_t)(esp + 0x98u), 0x3f800000u);
/* 9438c1: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 9438c5: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 9438c9: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 9438cc: fadd dword ptr [esp + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x44u)));
/* 9438d0: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 9438d4: call 0x943f70 */
  esp -= 4; W32(esp, 0x9438d9u); SPILL(); f_943f70(); if (g_unwind) return; RELOAD();
/* 9438d9: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9438dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9438de: je 0x9439b5 */
  if (zf) goto L_9439b5;
L_9438e4: /* 9438e4: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 9438eb: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 9438f1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9438f3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9438f6: jne 0x943951 */
  if (!zf) goto L_943951;
L_9438f8: /* 9438f8: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 9438ff: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 943905: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943907: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94390a: jp 0x943951 */
  if (pf) goto L_943951;
L_94390c: /* 94390c: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 943910: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 943912: fmul dword ptr [esp + 0x84] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x84u)));
/* 943919: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94391c: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 943920: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 943924: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 943928: fmul dword ptr [esp + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x90u)));
/* 94392f: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 943933: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 943937: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 94393e: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 943942: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 943946: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 943949: call 0x93da90 */
  esp -= 4; W32(esp, 0x94394eu); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
/* 94394e: add dword ptr [edi], 0xc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
L_943951: /* 943951: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 943955: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 94395b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94395d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 943960: jne 0x9439b5 */
  if (!zf) goto L_9439b5;
L_943962: /* 943962: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 943966: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 94396c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94396e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 943971: jp 0x9439b5 */
  if (pf) goto L_9439b5;
L_943973: /* 943973: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 943977: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 943979: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 94397d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 943980: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 943984: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 943988: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 94398c: fmul dword ptr [esp + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x88u)));
/* 943993: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 943997: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 94399b: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 9439a2: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 9439a6: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 9439aa: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9439ad: call 0x93da90 */
  esp -= 4; W32(esp, 0x9439b2u); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
/* 9439b2: add dword ptr [edi], 0xc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
L_9439b5: /* 9439b5: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 9439b8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9439b9: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 9439bd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9439be: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 9439c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9439c3: fadd dword ptr [esp + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x44u)));
/* 9439c7: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 9439cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9439cc: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 9439d0: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 9439d4: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* 9439d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9439d8: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 9439dc: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 9439e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9439e4: lea edx, [esp + 0x9c] */
  edx = (uint32_t)(esp + 0x9cu);
/* 9439eb: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 9439ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9439f0: mov dword ptr [esp + 0xa0], 0xbf800000 */
  W32((uint32_t)(esp + 0xa0u), 0xbf800000u);
/* 9439fb: mov dword ptr [esp + 0x98], 0x3f800000 */
  W32((uint32_t)(esp + 0x98u), 0x3f800000u);
/* 943a06: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 943a0a: fld dword ptr [esi + 0x38] */
  { double v = F32((uint32_t)(esi + 0x38u)); FPUSH(v); }
/* 943a0d: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 943a11: fadd dword ptr [esp + 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x5cu)));
/* 943a15: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 943a19: call 0x943f70 */
  esp -= 4; W32(esp, 0x943a1eu); SPILL(); f_943f70(); if (g_unwind) return; RELOAD();
/* 943a1e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 943a21: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 943a23: je 0x943afa */
  if (zf) goto L_943afa;
L_943a29: /* 943a29: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 943a30: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 943a36: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943a38: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 943a3b: jne 0x943a96 */
  if (!zf) goto L_943a96;
L_943a3d: /* 943a3d: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 943a44: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 943a4a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943a4c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 943a4f: jp 0x943a96 */
  if (pf) goto L_943a96;
L_943a51: /* 943a51: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 943a55: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 943a57: fmul dword ptr [esp + 0x84] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x84u)));
/* 943a5e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 943a61: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 943a65: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 943a69: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 943a6d: fmul dword ptr [esp + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x90u)));
/* 943a74: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 943a78: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 943a7c: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 943a83: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 943a87: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 943a8b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 943a8e: call 0x93da90 */
  esp -= 4; W32(esp, 0x943a93u); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
/* 943a93: add dword ptr [edi], 0xc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
L_943a96: /* 943a96: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 943a9a: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 943aa0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943aa2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 943aa5: jne 0x943afa */
  if (!zf) goto L_943afa;
L_943aa7: /* 943aa7: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 943aab: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 943ab1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943ab3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 943ab6: jp 0x943afa */
  if (pf) goto L_943afa;
L_943ab8: /* 943ab8: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 943abc: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 943abe: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 943ac2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 943ac5: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 943ac9: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 943acd: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 943ad1: fmul dword ptr [esp + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x88u)));
/* 943ad8: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 943adc: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 943ae0: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 943ae7: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 943aeb: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 943aef: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 943af2: call 0x93da90 */
  esp -= 4; W32(esp, 0x943af7u); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
/* 943af7: add dword ptr [edi], 0xc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
L_943afa: /* 943afa: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 943afe: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 943aff: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 943b02: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 943b03: lea eax, [esp + 0x64] */
  eax = (uint32_t)(esp + 0x64u);
/* 943b07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 943b08: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 943b0c: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 943b10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 943b11: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 943b15: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 943b19: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 943b1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 943b1e: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 943b21: lea eax, [esp + 0x90] */
  eax = (uint32_t)(esp + 0x90u);
/* 943b28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 943b29: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* 943b30: fsub dword ptr [esp + 0x54] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x54u)));
/* 943b34: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 943b35: mov dword ptr [esp + 0xa0], 0xbf800000 */
  W32((uint32_t)(esp + 0xa0u), 0xbf800000u);
/* 943b40: mov dword ptr [esp + 0x98], 0x3f800000 */
  W32((uint32_t)(esp + 0x98u), 0x3f800000u);
/* 943b4b: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 943b4f: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 943b53: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 943b56: fsub dword ptr [esp + 0x5c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x5cu)));
/* 943b5a: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 943b5e: call 0x943f70 */
  esp -= 4; W32(esp, 0x943b63u); SPILL(); f_943f70(); if (g_unwind) return; RELOAD();
/* 943b63: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 943b66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 943b68: je 0x943c3f */
  if (zf) goto L_943c3f;
L_943b6e: /* 943b6e: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 943b75: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 943b7b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943b7d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 943b80: jne 0x943bdb */
  if (!zf) goto L_943bdb;
L_943b82: /* 943b82: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 943b89: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 943b8f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943b91: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 943b94: jp 0x943bdb */
  if (pf) goto L_943bdb;
L_943b96: /* 943b96: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 943b9a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 943b9c: fmul dword ptr [esp + 0x84] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x84u)));
/* 943ba3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 943ba6: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 943baa: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 943bae: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 943bb2: fmul dword ptr [esp + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x90u)));
/* 943bb9: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 943bbd: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 943bc1: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 943bc8: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 943bcc: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 943bd0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 943bd3: call 0x93da90 */
  esp -= 4; W32(esp, 0x943bd8u); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
/* 943bd8: add dword ptr [edi], 0xc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
L_943bdb: /* 943bdb: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 943bdf: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 943be5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943be7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 943bea: jne 0x943c3f */
  if (!zf) goto L_943c3f;
L_943bec: /* 943bec: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 943bf0: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 943bf6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943bf8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 943bfb: jp 0x943c3f */
  if (pf) goto L_943c3f;
L_943bfd: /* 943bfd: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 943c01: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 943c03: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 943c07: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 943c0a: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 943c0e: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 943c12: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 943c16: fmul dword ptr [esp + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x88u)));
/* 943c1d: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 943c21: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 943c25: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 943c2c: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 943c30: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 943c34: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 943c37: call 0x93da90 */
  esp -= 4; W32(esp, 0x943c3cu); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
/* 943c3c: add dword ptr [edi], 0xc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
L_943c3f: /* 943c3f: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 943c42: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 943c43: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 943c47: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 943c48: lea edx, [esp + 0x64] */
  edx = (uint32_t)(esp + 0x64u);
/* 943c4c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 943c4d: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 943c51: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 943c55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 943c56: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 943c5a: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 943c5e: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* 943c61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 943c62: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 943c66: lea edx, [esp + 0x90] */
  edx = (uint32_t)(esp + 0x90u);
/* 943c6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 943c6e: lea eax, [esp + 0x9c] */
  eax = (uint32_t)(esp + 0x9cu);
/* 943c75: fsub dword ptr [esp + 0x54] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x54u)));
/* 943c79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 943c7a: mov dword ptr [esp + 0xa0], 0xbf800000 */
  W32((uint32_t)(esp + 0xa0u), 0xbf800000u);
/* 943c85: mov dword ptr [esp + 0x98], 0x3f800000 */
  W32((uint32_t)(esp + 0x98u), 0x3f800000u);
/* 943c90: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 943c94: fld dword ptr [esi + 0x38] */
  { double v = F32((uint32_t)(esi + 0x38u)); FPUSH(v); }
/* 943c97: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 943c9b: fsub dword ptr [esp + 0x5c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x5cu)));
/* 943c9f: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 943ca3: call 0x943f70 */
  esp -= 4; W32(esp, 0x943ca8u); SPILL(); f_943f70(); if (g_unwind) return; RELOAD();
/* 943ca8: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 943cab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 943cad: je 0x943d84 */
  if (zf) goto L_943d84;
L_943cb3: /* 943cb3: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 943cba: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 943cc0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943cc2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 943cc5: jne 0x943d20 */
  if (!zf) goto L_943d20;
L_943cc7: /* 943cc7: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 943cce: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 943cd4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943cd6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 943cd9: jp 0x943d20 */
  if (pf) goto L_943d20;
L_943cdb: /* 943cdb: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 943cdf: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 943ce1: fmul dword ptr [esp + 0x84] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x84u)));
/* 943ce8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 943ceb: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 943cef: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 943cf3: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 943cf7: fmul dword ptr [esp + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x90u)));
/* 943cfe: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 943d02: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 943d06: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 943d0d: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 943d11: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 943d15: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 943d18: call 0x93da90 */
  esp -= 4; W32(esp, 0x943d1du); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
/* 943d1d: add dword ptr [edi], 0xc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
L_943d20: /* 943d20: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 943d24: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 943d2a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943d2c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 943d2f: jne 0x943d84 */
  if (!zf) goto L_943d84;
L_943d31: /* 943d31: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 943d35: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 943d3b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943d3d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 943d40: jp 0x943d84 */
  if (pf) goto L_943d84;
L_943d42: /* 943d42: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 943d46: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 943d48: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 943d4c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 943d4f: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 943d53: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 943d57: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 943d5b: fmul dword ptr [esp + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x88u)));
/* 943d62: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 943d66: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 943d6a: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 943d71: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 943d75: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 943d79: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 943d7c: call 0x93da90 */
  esp -= 4; W32(esp, 0x943d81u); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
/* 943d81: add dword ptr [edi], 0xc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
L_943d84: /* 943d84: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 943d88: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 943d89: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 943d8c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 943d8d: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* 943d91: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 943d92: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 943d96: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* 943d9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 943d9b: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 943d9f: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 943da3: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 943da7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 943da8: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 943dac: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 943db3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 943db4: lea edx, [esp + 0x9c] */
  edx = (uint32_t)(esp + 0x9cu);
/* 943dbb: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 943dbe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 943dbf: mov dword ptr [esp + 0xa0], 0xbf800000 */
  W32((uint32_t)(esp + 0xa0u), 0xbf800000u);
/* 943dca: mov dword ptr [esp + 0x98], 0x3f800000 */
  W32((uint32_t)(esp + 0x98u), 0x3f800000u);
/* 943dd5: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 943dd9: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 943ddd: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 943de0: fadd dword ptr [esp + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x44u)));
/* 943de4: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 943de8: call 0x943f70 */
  esp -= 4; W32(esp, 0x943dedu); SPILL(); f_943f70(); if (g_unwind) return; RELOAD();
/* 943ded: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 943df0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 943df2: je 0x943e81 */
  if (zf) goto L_943e81;
L_943df8: /* 943df8: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 943dfc: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 943dfe: fmul dword ptr [esp + 0x84] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x84u)));
/* 943e05: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 943e08: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 943e0c: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 943e10: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 943e14: fmul dword ptr [esp + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x90u)));
/* 943e1b: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 943e1f: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 943e23: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 943e2a: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 943e2e: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 943e32: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 943e35: call 0x93da90 */
  esp -= 4; W32(esp, 0x943e3au); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
/* 943e3a: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 943e3e: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 943e40: fmul dword ptr [esp + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x7cu)));
/* 943e44: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 943e47: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 943e4a: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 943e4c: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 943e50: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 943e54: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 943e58: fmul dword ptr [esp + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x88u)));
/* 943e5f: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 943e63: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 943e67: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 943e6e: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 943e72: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 943e76: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 943e79: call 0x93da90 */
  esp -= 4; W32(esp, 0x943e7eu); SPILL(); f_93da90(); if (g_unwind) return; RELOAD();
/* 943e7e: add dword ptr [edi], 0xc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
L_943e81: /* 943e81: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 943e84: mov ebp, dword ptr [esp + 0x88] */
  ebp = R32((uint32_t)(esp + 0x88u));
/* 943e8b: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 943e8f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 943e90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 943e91: lea eax, [esp + 0x70] */
  eax = (uint32_t)(esp + 0x70u);
/* 943e95: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 943e99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 943e9a: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 943e9e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 943e9f: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 943ea3: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* 943ea6: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 943eaa: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 943eae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 943eaf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 943eb0: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 943eb4: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 943eb8: fld dword ptr [esi + 0x38] */
  { double v = F32((uint32_t)(esi + 0x38u)); FPUSH(v); }
/* 943ebb: fsub dword ptr [esp + 0x40] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x40u)));
/* 943ebf: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 943ec3: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 943ec7: call 0x944020 */
  esp -= 4; W32(esp, 0x943eccu); SPILL(); f_944020(); if (g_unwind) return; RELOAD();
/* 943ecc: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 943ed0: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 943ed3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 943ed4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 943ed5: lea eax, [esp + 0x88] */
  eax = (uint32_t)(esp + 0x88u);
/* 943edc: fsub dword ptr [esp + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4cu)));
/* 943ee0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 943ee1: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 943ee5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 943ee6: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 943eea: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 943eee: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 943ef2: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 943ef5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 943ef6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 943ef7: fsub dword ptr [esp + 0x60] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x60u)));
/* 943efb: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 943eff: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 943f03: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 943f06: fsub dword ptr [esp + 0x64] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x64u)));
/* 943f0a: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 943f0e: call 0x944020 */
  esp -= 4; W32(esp, 0x943f13u); SPILL(); f_944020(); if (g_unwind) return; RELOAD();
/* 943f13: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 943f16: fsub dword ptr [esp + 0x50] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x50u)));
/* 943f1a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 943f1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 943f1c: lea eax, [esp + 0xa0] */
  eax = (uint32_t)(esp + 0xa0u);
/* 943f23: fsub dword ptr [esp + 0x64] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x64u)));
/* 943f27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 943f28: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 943f2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 943f2d: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 943f31: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* 943f34: lea edx, [esp + 0x54] */
  edx = (uint32_t)(esp + 0x54u);
/* 943f38: fsub dword ptr [esp + 0x64] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x64u)));
/* 943f3c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 943f3d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 943f3e: fsub dword ptr [esp + 0x78] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x78u)));
/* 943f42: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 943f46: fld dword ptr [esi + 0x38] */
  { double v = F32((uint32_t)(esi + 0x38u)); FPUSH(v); }
/* 943f49: fsub dword ptr [esp + 0x70] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x70u)));
/* 943f4d: fsub dword ptr [esp + 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x7cu)));
/* 943f51: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 943f55: call 0x944020 */
  esp -= 4; W32(esp, 0x943f5au); SPILL(); f_944020(); if (g_unwind) return; RELOAD();
/* 943f5a: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 943f5d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 943f5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 943f5f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 943f60: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 943f61: add esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 943f64: ret  */
  esp += 4; SPILL(); return;
}

void f_943f70(void) {
  LOAD_REGS();
L_943f70: /* 943f70: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 943f74: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 943f78: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 943f79: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 943f7d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 943f7e: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 943f82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 943f83: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 943f87: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 943f88: xor edi, edi */
  edi = 0;
/* 943f8a: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 943f8c: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 943f8e: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_943f90: /* 943f90: fld dword ptr [ecx + ebp] */
  { double v = F32((uint32_t)(ecx + ebp)); FPUSH(v); }
/* 943f93: fabs  */
  ST0 = fabs(ST0);
/* 943f95: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 943f99: fld dword ptr [esi + ecx] */
  { double v = F32((uint32_t)(esi + ecx)); FPUSH(v); }
/* 943f9c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943f9e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 943fa1: jp 0x943fb5 */
  if (pf) goto L_943fb5;
L_943fa3: /* 943fa3: fabs  */
  ST0 = fabs(ST0);
/* 943fa5: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 943fa7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943fa9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 943fac: jnp 0x944006 */
  if (!pf) goto L_944006;
L_943fae: /* 943fae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 943faf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 943fb0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 943fb1: xor eax, eax */
  eax = 0;
/* 943fb3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 943fb4: ret  */
  esp += 4; SPILL(); return;
L_943fb5: /* 943fb5: fmul dword ptr [edx + ecx] */
  ST0 = ST0 * (F32((uint32_t)(edx + ecx)));
/* 943fb8: fld dword ptr [edx + ecx] */
  { double v = F32((uint32_t)(edx + ecx)); FPUSH(v); }
/* 943fbb: fabs  */
  ST0 = fabs(ST0);
/* 943fbd: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 943fbf: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 943fc1: fchs  */
  ST0 = -ST0;
/* 943fc3: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 943fc5: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 943fc9: fsubrp st(1) */
  STI(1) = ST0 - STI(1);
  FPOP();
/* 943fcb: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 943fcf: fcomp dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
  FPOP();
/* 943fd1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943fd3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 943fd6: jne 0x943fde */
  if (!zf) goto L_943fde;
L_943fd8: /* 943fd8: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 943fdc: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
L_943fde: /* 943fde: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 943fe2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 943fe4: fcomp dword ptr [eax] */
  fpu_com(ST0, F32((uint32_t)(eax)));
  FPOP();
/* 943fe6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 943fe8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 943feb: jp 0x943ff5 */
  if (pf) goto L_943ff5;
L_943fed: /* 943fed: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 943ff1: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 943ff3: jmp 0x943ff7 */
  goto L_943ff7;
L_943ff5: /* 943ff5: fstp st(0) */
  STI(0) = ST0; FPOP();
L_943ff7: /* 943ff7: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 943ffb: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 943ffd: fcomp dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
  FPOP();
/* 943fff: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 944001: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 944004: jnp 0x943fae */
  if (!pf) goto L_943fae;
L_944006: /* 944006: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 944007: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94400a: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94400d: jl 0x943f90 */
  if ((sf != of)) goto L_943f90;
L_94400f: /* 94400f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 944010: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 944011: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 944012: mov eax, 1 */
  eax = 0x1u;
/* 944017: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 944018: ret  */
  esp += 4; SPILL(); return;
}

void f_944020(void) {
  LOAD_REGS();
L_944020: /* 944020: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 944023: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 944027: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 94402b: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 94402f: fmul dword ptr [0xa20e08] */
  ST0 = ST0 * (F32((uint32_t)(0xa20e08u)));
/* 944035: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 944036: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 94403a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94403b: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94403f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 944040: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 944044: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 944045: mov eax, edx */
  eax = edx;
/* 944047: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 944049: mov edi, esi */
  edi = esi;
/* 94404b: xor ebp, ebp */
  ebp = 0;
/* 94404d: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 94404f: mov dword ptr [esp + 0x10], 0xbf800000 */
  W32((uint32_t)(esp + 0x10u), 0xbf800000u);
/* 944057: mov dword ptr [esp + 0x14], 0x3f800000 */
  W32((uint32_t)(esp + 0x14u), 0x3f800000u);
/* 94405f: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 944063: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 944065: jmp 0x944070 */
  goto L_944070;
L_944067: /* 944067: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 94406b: nop  */
/* 94406c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_944070: /* 944070: fld dword ptr [eax + ecx] */
  { double v = F32((uint32_t)(eax + ecx)); FPUSH(v); }
/* 944073: fabs  */
  ST0 = fabs(ST0);
/* 944075: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 944079: fld dword ptr [edi + ecx] */
  { double v = F32((uint32_t)(edi + ecx)); FPUSH(v); }
/* 94407c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94407e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 944081: jp 0x944094 */
  if (pf) goto L_944094;
L_944083: /* 944083: fabs  */
  ST0 = fabs(ST0);
/* 944085: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 944087: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 944089: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94408c: jp 0x94414e */
  if (pf) goto L_94414e;
L_944092: /* 944092: jmp 0x9440e3 */
  goto L_9440e3;
L_944094: /* 944094: fmul dword ptr [ebx + ecx] */
  ST0 = ST0 * (F32((uint32_t)(ebx + ecx)));
/* 944097: fld dword ptr [ebx + ecx] */
  { double v = F32((uint32_t)(ebx + ecx)); FPUSH(v); }
/* 94409a: fabs  */
  ST0 = fabs(ST0);
/* 94409c: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94409e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9440a0: fchs  */
  ST0 = -ST0;
/* 9440a2: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9440a4: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 9440a8: fsubrp st(1) */
  STI(1) = ST0 - STI(1);
  FPOP();
/* 9440aa: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 9440ae: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 9440b2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9440b4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9440b7: jne 0x9440c1 */
  if (!zf) goto L_9440c1;
L_9440b9: /* 9440b9: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 9440bd: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_9440c1: /* 9440c1: fcom dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
/* 9440c5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9440c7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9440ca: jp 0x9440d2 */
  if (pf) goto L_9440d2;
L_9440cc: /* 9440cc: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 9440d0: jmp 0x9440d4 */
  goto L_9440d4;
L_9440d2: /* 9440d2: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9440d4: /* 9440d4: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9440d8: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 9440dc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9440de: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9440e1: jnp 0x94414e */
  if (!pf) goto L_94414e;
L_9440e3: /* 9440e3: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 9440e4: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9440e7: cmp ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9440ea: jl 0x944067 */
  if ((sf != of)) goto L_944067;
L_9440f0: /* 9440f0: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9440f4: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9440f8: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 9440fb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9440fd: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 944100: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 944104: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 944107: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 94410a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94410e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 944110: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 944112: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 944114: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 944117: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 94411a: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 94411c: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 944120: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 944123: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 944125: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 944128: mov ecx, edi */
  ecx = edi;
/* 94412a: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 94412d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 944131: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 944134: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 944137: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94413b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 94413d: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 94413f: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 944141: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 944144: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 944147: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 944149: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94414c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_94414e: /* 94414e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94414f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 944150: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 944151: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 944152: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 944155: ret  */
  esp += 4; SPILL(); return;
}

void f_944160(void) {
  LOAD_REGS();
L_944160: /* 944160: sub esp, 0x110 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 944166: mov eax, dword ptr [esp + 0x11c] */
  eax = R32((uint32_t)(esp + 0x11cu));
/* 94416d: mov ecx, dword ptr [esp + 0x118] */
  ecx = R32((uint32_t)(esp + 0x118u));
/* 944174: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 944175: mov ebx, dword ptr [esp + 0x118] */
  ebx = R32((uint32_t)(esp + 0x118u));
/* 94417c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94417d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94417e: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 944180: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 944183: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 944185: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 944186: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 944187: call 0x928760 */
  esp -= 4; W32(esp, 0x94418cu); SPILL(); f_928760(); if (g_unwind) return; RELOAD();
/* 94418c: mov esi, eax */
  esi = eax;
/* 94418e: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 944191: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 944192: mov dword ptr [esp + 0x68], esi */
  W32((uint32_t)(esp + 0x68u), esi);
/* 944196: call 0x928760 */
  esp -= 4; W32(esp, 0x94419bu); SPILL(); f_928760(); if (g_unwind) return; RELOAD();
/* 94419b: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 94419d: mov edi, eax */
  edi = eax;
/* 94419f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9441a0: mov dword ptr [esp + 0x6c], edi */
  W32((uint32_t)(esp + 0x6cu), edi);
/* 9441a4: call 0x928780 */
  esp -= 4; W32(esp, 0x9441a9u); SPILL(); f_928780(); if (g_unwind) return; RELOAD();
/* 9441a9: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 9441ac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9441ad: mov ebp, eax */
  ebp = eax;
/* 9441af: call 0x928780 */
  esp -= 4; W32(esp, 0x9441b4u); SPILL(); f_928780(); if (g_unwind) return; RELOAD();
/* 9441b4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9441b6: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 9441ba: je 0x9447f0 */
  if (zf) goto L_9447f0;
L_9441c0: /* 9441c0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9441c2: je 0x9447f0 */
  if (zf) goto L_9447f0;
L_9441c8: /* 9441c8: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9441ca: je 0x9447f0 */
  if (zf) goto L_9447f0;
L_9441d0: /* 9441d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9441d2: je 0x9447f0 */
  if (zf) goto L_9447f0;
L_9441d8: /* 9441d8: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 9441da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9441db: call 0x928730 */
  esp -= 4; W32(esp, 0x9441e0u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 9441e0: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 9441e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9441e4: mov esi, eax */
  esi = eax;
/* 9441e6: call 0x928730 */
  esp -= 4; W32(esp, 0x9441ebu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 9441eb: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 9441ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9441ee: mov edi, eax */
  edi = eax;
/* 9441f0: call 0x9287f0 */
  esp -= 4; W32(esp, 0x9441f5u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 9441f5: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 9441f9: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 9441fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9441fd: call 0x9287f0 */
  esp -= 4; W32(esp, 0x944202u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 944202: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 944206: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 944207: mov ebx, eax */
  ebx = eax;
/* 944209: call 0x92de80 */
  esp -= 4; W32(esp, 0x94420eu); SPILL(); f_92de80(); if (g_unwind) return; RELOAD();
/* 94420e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94420f: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 944213: call 0x92de80 */
  esp -= 4; W32(esp, 0x944218u); SPILL(); f_92de80(); if (g_unwind) return; RELOAD();
/* 944218: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 94421c: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 94421f: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 944222: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 944225: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 944228: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 94422a: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 94422e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 944230: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 944234: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 944236: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 944239: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 94423b: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 94423f: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 944241: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 944245: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 944247: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 944249: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 94424b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94424d: fsqrt  */
  ST0 = sqrt(ST0);
/* 94424f: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 944251: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 944253: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 944255: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 944259: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 94425d: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 944261: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 944265: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 944267: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94426b: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 94426f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 944271: fsqrt  */
  ST0 = sqrt(ST0);
/* 944273: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 944275: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 944277: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 944279: fdiv dword ptr [0xaf3fe4] */
  ST0 = ST0 / (F32((uint32_t)(0xaf3fe4u)));
/* 94427f: fmul dword ptr [esp + 0x128] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x128u)));
/* 944286: call 0x99ceac */
  esp -= 4; W32(esp, 0x94428bu); SPILL(); hle_ftol(); RELOAD();
/* 94428b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94428c: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 944290: fild dword ptr [esp + 0x38] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 944294: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 944296: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* 94429a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 94429d: fdivr dword ptr [esp + 0x128] */
  ST0 = (F32((uint32_t)(esp + 0x128u))) / ST0;
/* 9442a4: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 9442a8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 9442ab: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 9442af: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 9442b2: mov dword ptr [esp + 0x80], edx */
  W32((uint32_t)(esp + 0x80u), edx);
/* 9442b9: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 9442bc: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 9442c4: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9442c8: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
/* 9442cf: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 9442d2: mov dword ptr [esp + 0x88], ecx */
  W32((uint32_t)(esp + 0x88u), ecx);
/* 9442d9: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 9442dc: mov dword ptr [esp + 0x8c], edx */
  W32((uint32_t)(esp + 0x8cu), edx);
/* 9442e3: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 9442e6: mov dword ptr [esp + 0x90], eax */
  W32((uint32_t)(esp + 0x90u), eax);
/* 9442ed: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 9442f0: mov dword ptr [esp + 0x94], ecx */
  W32((uint32_t)(esp + 0x94u), ecx);
/* 9442f7: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 9442fa: mov dword ptr [esp + 0x98], edx */
  W32((uint32_t)(esp + 0x98u), edx);
/* 944301: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 944304: mov dword ptr [esp + 0x9c], eax */
  W32((uint32_t)(esp + 0x9cu), eax);
/* 94430b: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 94430e: mov dword ptr [esp + 0xa0], ecx */
  W32((uint32_t)(esp + 0xa0u), ecx);
/* 944315: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 944318: mov dword ptr [esp + 0xa4], edx */
  W32((uint32_t)(esp + 0xa4u), edx);
/* 94431f: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 944322: mov dword ptr [esp + 0xa8], eax */
  W32((uint32_t)(esp + 0xa8u), eax);
/* 944329: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 94432c: mov dword ptr [esp + 0xac], ecx */
  W32((uint32_t)(esp + 0xacu), ecx);
/* 944333: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 944336: mov dword ptr [esp + 0xb0], edx */
  W32((uint32_t)(esp + 0xb0u), edx);
/* 94433d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 94433f: mov dword ptr [esp + 0xb4], eax */
  W32((uint32_t)(esp + 0xb4u), eax);
/* 944346: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 944349: mov dword ptr [esp + 0xb8], ecx */
  W32((uint32_t)(esp + 0xb8u), ecx);
/* 944350: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 944353: mov dword ptr [esp + 0xbc], edx */
  W32((uint32_t)(esp + 0xbcu), edx);
/* 94435a: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 94435d: mov dword ptr [esp + 0xc0], eax */
  W32((uint32_t)(esp + 0xc0u), eax);
/* 944364: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 944367: mov dword ptr [esp + 0xc4], ecx */
  W32((uint32_t)(esp + 0xc4u), ecx);
/* 94436e: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 944371: mov dword ptr [esp + 0xc8], edx */
  W32((uint32_t)(esp + 0xc8u), edx);
/* 944378: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 94437b: mov dword ptr [esp + 0xcc], eax */
  W32((uint32_t)(esp + 0xccu), eax);
/* 944382: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 944385: mov dword ptr [esp + 0xd0], ecx */
  W32((uint32_t)(esp + 0xd0u), ecx);
/* 94438c: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 94438f: mov dword ptr [esp + 0xd4], edx */
  W32((uint32_t)(esp + 0xd4u), edx);
/* 944396: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 944399: mov dword ptr [esp + 0xd8], eax */
  W32((uint32_t)(esp + 0xd8u), eax);
/* 9443a0: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 9443a3: mov dword ptr [esp + 0xdc], ecx */
  W32((uint32_t)(esp + 0xdcu), ecx);
/* 9443aa: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 9443ad: mov dword ptr [esp + 0xe0], edx */
  W32((uint32_t)(esp + 0xe0u), edx);
/* 9443b4: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 9443b7: mov dword ptr [esp + 0xe4], eax */
  W32((uint32_t)(esp + 0xe4u), eax);
/* 9443be: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 9443c1: mov dword ptr [esp + 0xe8], ecx */
  W32((uint32_t)(esp + 0xe8u), ecx);
/* 9443c8: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 9443cb: mov dword ptr [esp + 0xec], edx */
  W32((uint32_t)(esp + 0xecu), edx);
/* 9443d2: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 9443d5: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 9443d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9443da: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 9443de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9443df: mov dword ptr [esp + 0xf8], eax */
  W32((uint32_t)(esp + 0xf8u), eax);
/* 9443e6: call 0x972d20 */
  esp -= 4; W32(esp, 0x9443ebu); SPILL(); f_972d20(); if (g_unwind) return; RELOAD();
/* 9443eb: lea eax, [esp + 0xb4] */
  eax = (uint32_t)(esp + 0xb4u);
/* 9443f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9443f3: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 9443f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9443f8: call 0x972d20 */
  esp -= 4; W32(esp, 0x9443fdu); SPILL(); f_972d20(); if (g_unwind) return; RELOAD();
/* 9443fd: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 944401: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 944403: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 94440b: jle 0x9447df */
  if ((zf || sf != of)) goto L_9447df;
L_944411: /* 944411: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 944415: mov edi, dword ptr [esp + 0x68] */
  edi = R32((uint32_t)(esp + 0x68u));
/* 944419: mov esi, dword ptr [esp + 0x64] */
  esi = R32((uint32_t)(esp + 0x64u));
/* 94441d: lea edx, [esp + 0x114] */
  edx = (uint32_t)(esp + 0x114u);
/* 944424: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 944425: lea eax, [esp + 0x74] */
  eax = (uint32_t)(esp + 0x74u);
/* 944429: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94442a: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 94442e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94442f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 944430: lea edx, [esp + 0xc4] */
  edx = (uint32_t)(esp + 0xc4u);
/* 944437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 944438: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 94443c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94443d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94443e: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 944445: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 944446: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 944447: call 0x93fe10 */
  esp -= 4; W32(esp, 0x94444cu); SPILL(); f_93fe10(); if (g_unwind) return; RELOAD();
/* 94444c: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94444f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 944451: jne 0x9447bb */
  if (!zf) goto L_9447bb;
L_944457: /* 944457: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 94445b: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 94445f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 944460: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 944462: jge 0x944795 */
  if ((sf == of)) goto L_944795;
L_944468: /* 944468: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94446c: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 94446f: fchs  */
  ST0 = -ST0;
/* 944471: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 944475: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 944478: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94447a: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94447e: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 944481: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 944483: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 944489: fstp dword ptr [esp + 0xf4] */
  WF32((uint32_t)(esp + 0xf4u), ST0); FPOP();
/* 944490: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 944494: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 944497: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94449b: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 94449e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9444a0: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 9444a4: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 9444a7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9444a9: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 9444af: fstp dword ptr [esp + 0xf8] */
  WF32((uint32_t)(esp + 0xf8u), ST0); FPOP();
/* 9444b6: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9444ba: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 9444bd: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9444c1: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 9444c4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9444c6: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9444ca: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 9444cd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9444cf: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 9444d5: fstp dword ptr [esp + 0xfc] */
  WF32((uint32_t)(esp + 0xfcu), ST0); FPOP();
/* 9444dc: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 9444e0: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 9444e3: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9444e7: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 9444ea: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9444ec: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9444f0: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 9444f3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9444f5: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 9444fb: fstp dword ptr [esp + 0x100] */
  WF32((uint32_t)(esp + 0x100u), ST0); FPOP();
/* 944502: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 944506: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 944508: fchs  */
  ST0 = -ST0;
/* 94450a: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 94450e: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 944511: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 944513: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 944517: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 94451a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94451c: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 944522: fstp dword ptr [esp + 0x104] */
  WF32((uint32_t)(esp + 0x104u), ST0); FPOP();
/* 944529: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 94452d: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 944530: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 944534: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 944536: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 944538: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 94453c: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 94453f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 944541: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 944547: fstp dword ptr [esp + 0x108] */
  WF32((uint32_t)(esp + 0x108u), ST0); FPOP();
/* 94454e: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 944552: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 944555: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 944559: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 94455b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94455d: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 944561: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 944564: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 944566: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 94456c: fstp dword ptr [esp + 0x10c] */
  WF32((uint32_t)(esp + 0x10cu), ST0); FPOP();
/* 944573: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 944577: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 944579: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 94457d: xor eax, eax */
  eax = 0;
/* 94457f: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 944582: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 944584: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 944588: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 94458b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94458d: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 944593: fstp dword ptr [esp + 0x110] */
  WF32((uint32_t)(esp + 0x110u), ST0); FPOP();
/* 94459a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_9445a0: /* 9445a0: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9445a4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9445a7: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9445aa: fmul dword ptr [esp + eax + 0xf0] */
  ST0 = ST0 * (F32((uint32_t)(esp + eax + 0xf0u)));
/* 9445b1: fadd dword ptr [esp + eax + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + eax + 0xcu)));
/* 9445b5: fstp dword ptr [esp + eax + 0xc] */
  WF32((uint32_t)(esp + eax + 0xcu), ST0); FPOP();
/* 9445b9: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9445bd: fmul dword ptr [esp + eax + 0x100] */
  ST0 = ST0 * (F32((uint32_t)(esp + eax + 0x100u)));
/* 9445c4: fadd dword ptr [esp + eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + eax + 0x38u)));
/* 9445c8: fstp dword ptr [esp + eax + 0x38] */
  WF32((uint32_t)(esp + eax + 0x38u), ST0); FPOP();
/* 9445cc: jl 0x9445a0 */
  if ((sf != of)) goto L_9445a0;
L_9445ce: /* 9445ce: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9445d4: xor eax, eax */
  eax = 0;
/* 9445d6: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9445dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9445e0: /* 9445e0: fld dword ptr [esp + eax + 0x10] */
  { double v = F32((uint32_t)(esp + eax + 0x10u)); FPUSH(v); }
/* 9445e4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9445e7: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9445ea: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9445ec: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9445ee: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 9445f0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9445f2: fld dword ptr [esp + eax + 0x38] */
  { double v = F32((uint32_t)(esp + eax + 0x38u)); FPUSH(v); }
/* 9445f6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9445f8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9445fa: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9445fc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9445fe: jl 0x9445e0 */
  if ((sf != of)) goto L_9445e0;
L_944600: /* 944600: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 944602: xor eax, eax */
  eax = 0;
/* 944604: fsqrt  */
  ST0 = sqrt(ST0);
/* 944606: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 94460c: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 944610: fsqrt  */
  ST0 = sqrt(ST0);
/* 944612: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
L_944618: /* 944618: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 94461c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94461f: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 944622: fmul dword ptr [esp + eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + eax + 0xcu)));
/* 944626: fstp dword ptr [esp + eax + 0xc] */
  WF32((uint32_t)(esp + eax + 0xcu), ST0); FPOP();
/* 94462a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94462c: fmul dword ptr [esp + eax + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + eax + 0x38u)));
/* 944630: fstp dword ptr [esp + eax + 0x38] */
  WF32((uint32_t)(esp + eax + 0x38u), ST0); FPOP();
/* 944634: jl 0x944618 */
  if ((sf != of)) goto L_944618;
L_944636: /* 944636: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 944638: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 94463c: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 944640: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 944641: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 944645: lea edx, [esp + 0xb8] */
  edx = (uint32_t)(esp + 0xb8u);
/* 94464c: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 944650: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 944651: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 944655: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 944659: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 94465d: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 944661: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 944665: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 944669: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 94466d: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 944671: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 944673: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 944677: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 944679: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94467d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 94467f: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 944683: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 944687: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 944689: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 94468d: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 944691: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 944693: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 944697: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94469b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94469d: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 9446a1: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9446a5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9446a7: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 9446ab: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9446ad: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9446af: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9446b3: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 9446b7: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9446b9: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 9446bd: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9446bf: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9446c1: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 9446c5: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 9446c9: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 9446cd: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 9446d1: fsub dword ptr [esp + 0x64] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x64u)));
/* 9446d5: fstp dword ptr [esp + 0x8c] */
  WF32((uint32_t)(esp + 0x8cu), ST0); FPOP();
/* 9446dc: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 9446e0: fadd dword ptr [esp + 0x60] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x60u)));
/* 9446e4: fstp dword ptr [esp + 0x9c] */
  WF32((uint32_t)(esp + 0x9cu), ST0); FPOP();
/* 9446eb: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 9446ef: fadd dword ptr [esp + 0x64] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x64u)));
/* 9446f3: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 9446fa: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9446fc: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 944700: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 944702: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 944706: fstp dword ptr [esp + 0x90] */
  WF32((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 94470d: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 944711: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 944715: fstp dword ptr [esp + 0xa0] */
  WF32((uint32_t)(esp + 0xa0u), ST0); FPOP();
/* 94471c: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 944720: fsub dword ptr [esp + 0x60] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x60u)));
/* 944724: fstp dword ptr [esp + 0x84] */
  WF32((uint32_t)(esp + 0x84u), ST0); FPOP();
/* 94472b: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 94472f: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 944733: fstp dword ptr [esp + 0x94] */
  WF32((uint32_t)(esp + 0x94u), ST0); FPOP();
/* 94473a: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 94473e: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 944742: fstp dword ptr [esp + 0xa4] */
  WF32((uint32_t)(esp + 0xa4u), ST0); FPOP();
/* 944749: call 0x944800 */
  esp -= 4; W32(esp, 0x94474eu); SPILL(); f_944800(); if (g_unwind) return; RELOAD();
/* 94474e: mov edx, esi */
  edx = esi;
/* 944750: lea ecx, [esp + 0xa4] */
  ecx = (uint32_t)(esp + 0xa4u);
/* 944757: lea eax, [esp + 0xa4] */
  eax = (uint32_t)(esp + 0xa4u);
/* 94475e: mov esi, edi */
  esi = edi;
/* 944760: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 944762: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 944764: xor ecx, ecx */
  ecx = 0;
L_944766: /* 944766: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 94476a: lea eax, [esp + ecx + 0xa4] */
  eax = (uint32_t)(esp + ecx + 0xa4u);
/* 944771: fmul dword ptr [edx + eax] */
  ST0 = ST0 * (F32((uint32_t)(edx + eax)));
/* 944774: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 944777: cmp ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94477a: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 94477c: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 94477e: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 944782: fmul dword ptr [esi + eax] */
  ST0 = ST0 * (F32((uint32_t)(esi + eax)));
/* 944785: fadd dword ptr [esp + ecx + 0xe0] */
  ST0 = ST0 + (F32((uint32_t)(esp + ecx + 0xe0u)));
/* 94478c: fstp dword ptr [esp + ecx + 0xe0] */
  WF32((uint32_t)(esp + ecx + 0xe0u), ST0); FPOP();
/* 944793: jl 0x944766 */
  if ((sf != of)) goto L_944766;
L_944795: /* 944795: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 944799: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 94479d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94479e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9447a0: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 9447a4: jl 0x944411 */
  if ((sf != of)) goto L_944411;
L_9447aa: /* 9447aa: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 9447ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9447af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9447b0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9447b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9447b2: add esp, 0x110 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9447b8: ret 0xc */
  esp += 16; SPILL(); return;
L_9447bb: /* 9447bb: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9447bf: mov edx, dword ptr [esp + 0x12c] */
  edx = R32((uint32_t)(esp + 0x12cu));
/* 9447c6: mov dword ptr [esp + 0x34], 1 */
  W32((uint32_t)(esp + 0x34u), 0x1u);
/* 9447ce: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 9447d2: fadd dword ptr [esp + 0x70] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x70u)));
/* 9447d6: fadd dword ptr [0xa20e08] */
  ST0 = ST0 + (F32((uint32_t)(0xa20e08u)));
/* 9447dc: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
L_9447df: /* 9447df: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 9447e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9447e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9447e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9447e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9447e7: add esp, 0x110 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9447ed: ret 0xc */
  esp += 16; SPILL(); return;
L_9447f0: /* 9447f0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9447f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9447f2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9447f3: xor eax, eax */
  eax = 0;
/* 9447f5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9447f6: add esp, 0x110 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9447fc: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_944800(void) {
  LOAD_REGS();
L_944800: /* 944800: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 944803: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 944807: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 944809: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94480b: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 94480d: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 944810: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 944812: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 944814: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 944817: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 944819: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94481b: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 94481f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 944821: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 944824: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 944826: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 944828: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 94482c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94482e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 944830: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 944832: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 944835: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 944837: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 944839: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 94483c: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 944840: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 944842: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 944845: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 944849: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94484b: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 94484e: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 944852: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 944854: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 944857: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 94485b: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 94485e: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 944862: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 944865: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 944868: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 94486c: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 94486e: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 944872: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 944874: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 944876: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 94487a: fsub dword ptr [esp] */
  ST0 = ST0 - (F32((uint32_t)(esp)));
/* 94487e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 944880: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 944884: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* 944888: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 94488b: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 94488f: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 944893: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 944896: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 94489a: fadd dword ptr [esp + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8u)));
/* 94489e: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 9448a1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9448a3: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9448a7: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9448a9: fsub dword ptr [esp] */
  ST0 = ST0 - (F32((uint32_t)(esp)));
/* 9448ad: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 9448b0: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9448b4: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 9448b8: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 9448bb: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 9448bf: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 9448c3: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 9448c6: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9448ca: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 9448ce: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 9448d1: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 9448d5: fadd dword ptr [esp] */
  ST0 = ST0 + (F32((uint32_t)(esp)));
/* 9448d9: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
/* 9448dc: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9448df: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9448f0(void) {
  LOAD_REGS();
L_9448f0: /* 9448f0: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9448f3: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9448f7: xor eax, eax */
  eax = 0;
/* 9448f9: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 9448fd: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 944901: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 944905: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 944909: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94490a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 94490c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 94490e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94490f: mov dword ptr [esp + 0x18], 0x942590 */
  W32((uint32_t)(esp + 0x18u), 0x942590u);
/* 944917: mov dword ptr [esp + 0x1c], 0x944160 */
  W32((uint32_t)(esp + 0x1cu), 0x944160u);
/* 94491f: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 944927: call 0x929df0 */
  esp -= 4; W32(esp, 0x94492cu); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 94492c: mov eax, 1 */
  eax = 0x1u;
/* 944931: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 944934: ret 4 */
  esp += 8; SPILL(); return;
}

void f_944940(void) {
  LOAD_REGS();
L_944940: /* 944940: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 944943: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 944944: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 944945: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 944946: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 94494a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 94494c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94494d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94494e: call 0x928730 */
  esp -= 4; W32(esp, 0x944953u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 944953: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 944956: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 944957: mov edi, eax */
  edi = eax;
/* 944959: call 0x928730 */
  esp -= 4; W32(esp, 0x94495eu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 94495e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 944960: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 944961: mov ebx, eax */
  ebx = eax;
/* 944963: call 0x928610 */
  esp -= 4; W32(esp, 0x944968u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 944968: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 94496c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 94496f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 944970: call 0x928610 */
  esp -= 4; W32(esp, 0x944975u); SPILL(); f_928610(); if (g_unwind) return; RELOAD();
/* 944975: fadd dword ptr [esp + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x40u)));
/* 944979: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94497b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94497c: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 944980: call 0x9287f0 */
  esp -= 4; W32(esp, 0x944985u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 944985: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 944988: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 944989: mov ebp, eax */
  ebp = eax;
/* 94498b: call 0x9287f0 */
  esp -= 4; W32(esp, 0x944990u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 944990: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 944994: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 944998: xor eax, eax */
  eax = 0;
/* 94499a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94499b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 94499e: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 9449a1: call 0x92d570 */
  esp -= 4; W32(esp, 0x9449a6u); SPILL(); f_92d570(); if (g_unwind) return; RELOAD();
/* 9449a6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9449aa: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 9449ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9449af: call 0x92d570 */
  esp -= 4; W32(esp, 0x9449b4u); SPILL(); f_92d570(); if (g_unwind) return; RELOAD();
/* 9449b4: fst dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0);
/* 9449b8: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 9449bc: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 9449c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9449c1: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 9449c5: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 9449c9: fld dword ptr [edi + 0x38] */
  { double v = F32((uint32_t)(edi + 0x38u)); FPUSH(v); }
/* 9449cc: fsub dword ptr [ebx + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x38u)));
/* 9449cf: fld dword ptr [edi + 0x34] */
  { double v = F32((uint32_t)(edi + 0x34u)); FPUSH(v); }
/* 9449d2: fsub dword ptr [ebx + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x34u)));
/* 9449d5: fld dword ptr [edi + 0x30] */
  { double v = F32((uint32_t)(edi + 0x30u)); FPUSH(v); }
/* 9449d8: fsub dword ptr [ebx + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x30u)));
/* 9449db: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 9449df: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 9449e3: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 9449e7: call 0x92e280 */
  esp -= 4; W32(esp, 0x9449ecu); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 9449ec: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 9449f2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9449f4: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9449f7: jp 0x944a13 */
  if (pf) goto L_944a13;
L_9449f9: /* 9449f9: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 944a01: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 944a09: mov dword ptr [esp + 0x20], 0x3f800000 */
  W32((uint32_t)(esp + 0x20u), 0x3f800000u);
/* 944a11: jmp 0x944a54 */
  goto L_944a54;
L_944a13: /* 944a13: fsqrt  */
  ST0 = sqrt(ST0);
/* 944a15: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 944a1b: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 944a1d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 944a1f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 944a22: jnp 0x944a2e */
  if (!pf) goto L_944a2e;
L_944a24: /* 944a24: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 944a2a: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 944a2c: jmp 0x944a34 */
  goto L_944a34;
L_944a2e: /* 944a2e: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_944a34: /* 944a34: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 944a38: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 944a3a: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 944a3e: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 944a42: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 944a44: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 944a48: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 944a4c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 944a4e: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 944a52: fstp st(0) */
  STI(0) = ST0; FPOP();
L_944a54: /* 944a54: fsub dword ptr [esp + 0x40] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x40u)));
/* 944a58: fcom dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
/* 944a5c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 944a5e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 944a61: jne 0x944a71 */
  if (!zf) goto L_944a71;
L_944a63: /* 944a63: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 944a64: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 944a66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 944a67: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 944a68: xor eax, eax */
  eax = 0;
/* 944a6a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 944a6b: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 944a6e: ret 8 */
  esp += 12; SPILL(); return;
L_944a71: /* 944a71: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 944a74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 944a76: mov ecx, 1 */
  ecx = 0x1u;
/* 944a7b: jle 0x944b57 */
  if ((zf || sf != of)) goto L_944b57;
L_944a81: /* 944a81: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 944a84: mov word ptr [edx + 0x1c], 0x303 */
  W16((uint32_t)(edx + 0x1cu), 0x303u);
/* 944a8a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 944a8d: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 944a91: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 944a94: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 944a96: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 944a9a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 944a9d: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 944aa1: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 944aa4: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 944aa7: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 944aaa: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 944ab0: fcomp dword ptr [esp + 0x40] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x40u)));
  FPOP();
/* 944ab4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 944ab6: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 944ab9: jnp 0x944ac7 */
  if (!pf) goto L_944ac7;
L_944abb: /* 944abb: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 944ac1: fdiv dword ptr [esp + 0x40] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x40u)));
/* 944ac5: jmp 0x944acd */
  goto L_944acd;
L_944ac7: /* 944ac7: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_944acd: /* 944acd: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 944ad1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 944ad4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 944ad6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 944ad8: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 944adc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 944ade: fmul dword ptr [ebx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x30u)));
/* 944ae1: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 944ae5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 944ae7: fmul dword ptr [ebx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x34u)));
/* 944aea: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 944aee: fmul dword ptr [ebx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x38u)));
/* 944af1: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 944af5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 944af7: fmul dword ptr [edi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x30u)));
/* 944afa: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 944afe: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 944b00: fmul dword ptr [edi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x34u)));
/* 944b03: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 944b07: fmul dword ptr [edi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x38u)));
/* 944b0a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 944b0b: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 944b0f: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 944b13: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 944b17: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 944b1b: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 944b1d: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 944b21: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 944b25: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 944b29: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 944b2b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 944b2e: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 944b31: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 944b35: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 944b39: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 944b3c: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 944b40: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 944b43: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 944b46: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 944b49: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 944b4c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 944b4d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 944b4e: mov eax, ecx */
  eax = ecx;
/* 944b50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 944b51: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 944b54: ret 8 */
  esp += 12; SPILL(); return;
L_944b57: /* 944b57: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 944b58: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 944b5a: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 944b61: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 944b64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 944b65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 944b66: mov eax, ecx */
  eax = ecx;
/* 944b68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 944b69: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 944b6c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_944b70(void) {
  LOAD_REGS();
L_944b70: /* 944b70: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 944b73: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 944b77: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 944b7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 944b7c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 944b7d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 944b7e: mov esi, dword ptr [esp + 0x50] */
  esi = R32((uint32_t)(esp + 0x50u));
/* 944b82: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 944b84: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 944b87: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 944b89: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 944b8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 944b8b: call 0x928760 */
  esp -= 4; W32(esp, 0x944b90u); SPILL(); f_928760(); if (g_unwind) return; RELOAD();
/* 944b90: mov edi, eax */
  edi = eax;
/* 944b92: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 944b94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 944b95: call 0x928730 */
  esp -= 4; W32(esp, 0x944b9au); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 944b9a: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 944b9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 944b9e: mov ebx, eax */
  ebx = eax;
/* 944ba0: call 0x928760 */
  esp -= 4; W32(esp, 0x944ba5u); SPILL(); f_928760(); if (g_unwind) return; RELOAD();
/* 944ba5: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 944ba8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 944ba9: mov ebp, eax */
  ebp = eax;
/* 944bab: call 0x928730 */
  esp -= 4; W32(esp, 0x944bb0u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 944bb0: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 944bb2: mov ecx, dword ptr [ebx + 0x30] */
  ecx = R32((uint32_t)(ebx + 0x30u));
/* 944bb5: mov edx, dword ptr [ebx + 0x34] */
  edx = R32((uint32_t)(ebx + 0x34u));
/* 944bb8: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 944bbc: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 944bbf: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 944bc3: mov ecx, dword ptr [ebx + 0x38] */
  ecx = R32((uint32_t)(ebx + 0x38u));
/* 944bc6: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 944bca: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 944bcd: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 944bd1: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 944bd4: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 944bd8: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 944bdb: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 944bdf: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 944be2: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 944be6: fld dword ptr [ebp + 4] */
  { double v = F32((uint32_t)(ebp + 0x4u)); FPUSH(v); }
/* 944be9: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 944bed: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 944bf0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 944bf2: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 944bf6: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 944bf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 944bfa: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 944bfe: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 944c02: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 944c06: call 0x9287f0 */
  esp -= 4; W32(esp, 0x944c0bu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 944c0b: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 944c0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 944c0f: mov edi, eax */
  edi = eax;
/* 944c11: call 0x9287f0 */
  esp -= 4; W32(esp, 0x944c16u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 944c16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 944c17: mov esi, eax */
  esi = eax;
/* 944c19: call 0x92d570 */
  esp -= 4; W32(esp, 0x944c1eu); SPILL(); f_92d570(); if (g_unwind) return; RELOAD();
/* 944c1e: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 944c22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 944c23: call 0x92d570 */
  esp -= 4; W32(esp, 0x944c28u); SPILL(); f_92d570(); if (g_unwind) return; RELOAD();
/* 944c28: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 944c2c: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 944c30: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 944c34: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 944c38: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 944c3c: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 944c40: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 944c44: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 944c48: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 944c4c: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 944c50: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 944c54: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 944c58: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 944c5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 944c5d: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 944c61: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 944c65: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 944c69: fsub dword ptr [esp + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4cu)));
/* 944c6d: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 944c71: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 944c75: fsub dword ptr [esp + 0x50] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x50u)));
/* 944c79: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 944c7d: call 0x92e280 */
  esp -= 4; W32(esp, 0x944c82u); SPILL(); f_92e280(); if (g_unwind) return; RELOAD();
/* 944c82: fsqrt  */
  ST0 = sqrt(ST0);
/* 944c84: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 944c85: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 944c86: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 944c87: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 944c88: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 944c8c: fcomp qword ptr [0xa1f978] */
  fpu_com(ST0, F64((uint32_t)(0xa1f978u)));
  FPOP();
/* 944c92: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 944c94: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 944c97: jnp 0x944d2f */
  if (!pf) goto L_944d2f;
L_944c9d: /* 944c9d: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 944ca1: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 944ca5: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 944ca9: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 944cad: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 944caf: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 944cb3: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 944cb7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 944cb9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 944cbf: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 944cc3: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 944cc7: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 944ccb: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 944ccf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 944cd1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 944cd3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 944cd6: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 944cda: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 944cde: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 944ce0: fsqrt  */
  ST0 = sqrt(ST0);
/* 944ce2: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 944ce6: fsub dword ptr [esp] */
  ST0 = ST0 - (F32((uint32_t)(esp)));
/* 944cea: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 944cee: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 944cf2: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 944cf6: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 944cfa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 944cfc: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 944d00: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 944d04: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 944d06: fsqrt  */
  ST0 = sqrt(ST0);
/* 944d08: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 944d0a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 944d0c: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 944d0e: jp 0x944d22 */
  if (pf) goto L_944d22;
L_944d10: /* 944d10: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 944d14: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 944d17: mov eax, 1 */
  eax = 0x1u;
/* 944d1c: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 944d1f: ret 0xc */
  esp += 16; SPILL(); return;
L_944d22: /* 944d22: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 944d28: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 944d2c: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
L_944d2f: /* 944d2f: xor eax, eax */
  eax = 0;
/* 944d31: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 944d34: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_944d40(void) {
  LOAD_REGS();
L_944d40: /* 944d40: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 944d43: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 944d47: xor eax, eax */
  eax = 0;
/* 944d49: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 944d4d: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 944d51: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 944d55: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 944d59: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 944d5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 944d5e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 944d60: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 944d62: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 944d63: mov dword ptr [esp + 0x18], 0x944940 */
  W32((uint32_t)(esp + 0x18u), 0x944940u);
/* 944d6b: mov dword ptr [esp + 0x1c], 0x944b70 */
  W32((uint32_t)(esp + 0x1cu), 0x944b70u);
/* 944d73: call 0x929df0 */
  esp -= 4; W32(esp, 0x944d78u); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 944d78: mov eax, 1 */
  eax = 0x1u;
/* 944d7d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 944d80: ret 4 */
  esp += 8; SPILL(); return;
}

void f_944d90(void) {
  LOAD_REGS();
L_944d90: /* 944d90: mov ax, 3 */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0x3u) & 0xffffu);
/* 944d94: ret  */
  esp += 4; SPILL(); return;
}

void f_944da0(void) {
  LOAD_REGS();
L_944da0: /* 944da0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 944da4: push 0x9451f0 */
  { uint32_t v = 0x9451f0u; esp -= 4; W32(esp, v); }
/* 944da9: push 0x9450f0 */
  { uint32_t v = 0x9450f0u; esp -= 4; W32(esp, v); }
/* 944dae: push 0x945070 */
  { uint32_t v = 0x945070u; esp -= 4; W32(esp, v); }
/* 944db3: push 0x945050 */
  { uint32_t v = 0x945050u; esp -= 4; W32(esp, v); }
/* 944db8: push 0x944e20 */
  { uint32_t v = 0x944e20u; esp -= 4; W32(esp, v); }
/* 944dbd: push 0x944e10 */
  { uint32_t v = 0x944e10u; esp -= 4; W32(esp, v); }
/* 944dc2: push 0xaf3fec */
  { uint32_t v = 0xaf3fecu; esp -= 4; W32(esp, v); }
/* 944dc7: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 944dc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 944dca: call 0x929d50 */
  esp -= 4; W32(esp, 0x944dcfu); SPILL(); f_929d50(); if (g_unwind) return; RELOAD();
/* 944dcf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_944de0(void) {
  LOAD_REGS();
L_944de0: /* 944de0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 944de1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 944de3: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 944de5: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x944debu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 944deb: mov esi, eax */
  esi = eax;
/* 944ded: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 944def: je 0x944dfe */
  if (zf) goto L_944dfe;
L_944df1: /* 944df1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 944df5: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 944df7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 944df8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 944df9: call 0x92a720 */
  esp -= 4; W32(esp, 0x944dfeu); SPILL(); f_92a720(); if (g_unwind) return; RELOAD();
L_944dfe: /* 944dfe: mov eax, esi */
  eax = esi;
/* 944e00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 944e01: ret 4 */
  esp += 8; SPILL(); return;
}

void f_944e10(void) {
  LOAD_REGS();
L_944e10: /* 944e10: jmp 0x92a770 */
  SPILL(); f_92a770(); return;
}

void f_944e20(void) {
  LOAD_REGS();
L_944e20: /* 944e20: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 944e23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 944e24: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 944e28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 944e29: call 0x92ad70 */
  esp -= 4; W32(esp, 0x944e2eu); SPILL(); f_92ad70(); if (g_unwind) return; RELOAD();
/* 944e2e: mov ecx, eax */
  ecx = eax;
/* 944e30: mov eax, 0xff7fffff */
  eax = 0xff7fffffu;
/* 944e35: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 944e38: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 944e3b: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 944e3e: mov eax, 0x7f7fffff */
  eax = 0x7f7fffffu;
/* 944e43: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 944e46: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 944e49: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 944e4c: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 944e4f: fcomp dword ptr [0xa21514] */
  fpu_com(ST0, F32((uint32_t)(0xa21514u)));
  FPOP();
/* 944e55: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 944e57: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 944e5a: jne 0x944e64 */
  if (!zf) goto L_944e64;
L_944e5c: /* 944e5c: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 944e5f: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 944e62: jmp 0x944eda */
  goto L_944eda;
L_944e64: /* 944e64: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 944e67: fcomp dword ptr [0xa21510] */
  fpu_com(ST0, F32((uint32_t)(0xa21510u)));
  FPOP();
/* 944e6d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 944e6f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 944e72: jp 0x944e7c */
  if (pf) goto L_944e7c;
L_944e74: /* 944e74: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 944e77: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 944e7a: jmp 0x944eda */
  goto L_944eda;
L_944e7c: /* 944e7c: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 944e7f: fcomp dword ptr [0xa21514] */
  fpu_com(ST0, F32((uint32_t)(0xa21514u)));
  FPOP();
/* 944e85: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 944e87: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 944e8a: jne 0x944e94 */
  if (!zf) goto L_944e94;
L_944e8c: /* 944e8c: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 944e8f: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 944e92: jmp 0x944eda */
  goto L_944eda;
L_944e94: /* 944e94: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 944e97: fcomp dword ptr [0xa21510] */
  fpu_com(ST0, F32((uint32_t)(0xa21510u)));
  FPOP();
/* 944e9d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 944e9f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 944ea2: jp 0x944eac */
  if (pf) goto L_944eac;
L_944ea4: /* 944ea4: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 944ea7: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 944eaa: jmp 0x944eda */
  goto L_944eda;
L_944eac: /* 944eac: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 944eaf: fcomp dword ptr [0xa21514] */
  fpu_com(ST0, F32((uint32_t)(0xa21514u)));
  FPOP();
/* 944eb5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 944eb7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 944eba: jne 0x944ec4 */
  if (!zf) goto L_944ec4;
L_944ebc: /* 944ebc: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 944ebf: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 944ec2: jmp 0x944eda */
  goto L_944eda;
L_944ec4: /* 944ec4: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 944ec7: fcomp dword ptr [0xa21510] */
  fpu_com(ST0, F32((uint32_t)(0xa21510u)));
  FPOP();
/* 944ecd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 944ecf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 944ed2: jp 0x944eda */
  if (pf) goto L_944eda;
L_944ed4: /* 944ed4: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 944ed7: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
L_944eda: /* 944eda: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 944ede: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 944ee0: je 0x945042 */
  if (zf) goto L_945042;
L_944ee6: /* 944ee6: fld dword ptr [0xa13bb8] */
  { double v = F32((uint32_t)(0xa13bb8u)); FPUSH(v); }
/* 944eec: mov dword ptr [esp + 0x10], 0xff7fffff */
  W32((uint32_t)(esp + 0x10u), 0xff7fffffu);
/* 944ef4: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 944ef7: mov dword ptr [esp + 0x14], 0xff7fffff */
  W32((uint32_t)(esp + 0x14u), 0xff7fffffu);
/* 944eff: fcomp dword ptr [0xa21514] */
  fpu_com(ST0, F32((uint32_t)(0xa21514u)));
  FPOP();
/* 944f05: mov dword ptr [esp + 4], 0x7f7fffff */
  W32((uint32_t)(esp + 0x4u), 0x7f7fffffu);
/* 944f0d: mov dword ptr [esp + 8], 0x7f7fffff */
  W32((uint32_t)(esp + 0x8u), 0x7f7fffffu);
/* 944f15: mov dword ptr [esp + 0xc], 0x7f7fffff */
  W32((uint32_t)(esp + 0xcu), 0x7f7fffffu);
/* 944f1d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 944f1f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 944f22: jne 0x944f2d */
  if (!zf) goto L_944f2d;
L_944f24: /* 944f24: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 944f27: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 944f2b: jmp 0x944fa6 */
  goto L_944fa6;
L_944f2d: /* 944f2d: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 944f30: fcomp dword ptr [0xa21510] */
  fpu_com(ST0, F32((uint32_t)(0xa21510u)));
  FPOP();
/* 944f36: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 944f38: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 944f3b: jp 0x944f46 */
  if (pf) goto L_944f46;
L_944f3d: /* 944f3d: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 944f40: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 944f44: jmp 0x944fa6 */
  goto L_944fa6;
L_944f46: /* 944f46: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 944f49: fcomp dword ptr [0xa21514] */
  fpu_com(ST0, F32((uint32_t)(0xa21514u)));
  FPOP();
/* 944f4f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 944f51: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 944f54: jne 0x944f5f */
  if (!zf) goto L_944f5f;
L_944f56: /* 944f56: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 944f59: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 944f5d: jmp 0x944fa6 */
  goto L_944fa6;
L_944f5f: /* 944f5f: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 944f62: fcomp dword ptr [0xa21510] */
  fpu_com(ST0, F32((uint32_t)(0xa21510u)));
  FPOP();
/* 944f68: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 944f6a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 944f6d: jp 0x944f78 */
  if (pf) goto L_944f78;
L_944f6f: /* 944f6f: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 944f72: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 944f76: jmp 0x944fa6 */
  goto L_944fa6;
L_944f78: /* 944f78: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 944f7b: fcomp dword ptr [0xa21514] */
  fpu_com(ST0, F32((uint32_t)(0xa21514u)));
  FPOP();
/* 944f81: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 944f83: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 944f86: jne 0x944f91 */
  if (!zf) goto L_944f91;
L_944f88: /* 944f88: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 944f8b: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 944f8f: jmp 0x944fa6 */
  goto L_944fa6;
L_944f91: /* 944f91: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 944f94: fcomp dword ptr [0xa21510] */
  fpu_com(ST0, F32((uint32_t)(0xa21510u)));
  FPOP();
/* 944f9a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 944f9c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 944f9f: jp 0x944fa6 */
  if (pf) goto L_944fa6;
L_944fa1: /* 944fa1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 944fa3: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
L_944fa6: /* 944fa6: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 944fa9: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 944fad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 944faf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 944fb2: jp 0x944fb9 */
  if (pf) goto L_944fb9;
L_944fb4: /* 944fb4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 944fb7: jmp 0x944fbd */
  goto L_944fbd;
L_944fb9: /* 944fb9: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_944fbd: /* 944fbd: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 944fc0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 944fc3: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 944fc7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 944fc9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 944fcc: jp 0x944fd3 */
  if (pf) goto L_944fd3;
L_944fce: /* 944fce: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 944fd1: jmp 0x944fd7 */
  goto L_944fd7;
L_944fd3: /* 944fd3: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
L_944fd7: /* 944fd7: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 944fda: fcom dword ptr [esi + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x10u)));
/* 944fdd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 944fdf: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 944fe2: jne 0x944fe9 */
  if (!zf) goto L_944fe9;
L_944fe4: /* 944fe4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 944fe6: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
L_944fe9: /* 944fe9: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 944fec: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 944fef: fcomp dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
  FPOP();
/* 944ff3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 944ff5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 944ff8: jne 0x944fff */
  if (!zf) goto L_944fff;
L_944ffa: /* 944ffa: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 944ffd: jmp 0x945003 */
  goto L_945003;
L_944fff: /* 944fff: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
L_945003: /* 945003: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 945006: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 945009: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 94500d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94500f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 945012: jne 0x945019 */
  if (!zf) goto L_945019;
L_945014: /* 945014: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 945017: jmp 0x94501d */
  goto L_94501d;
L_945019: /* 945019: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_94501d: /* 94501d: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* 945020: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 945023: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 945027: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 945029: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94502c: jne 0x94503b */
  if (!zf) goto L_94503b;
L_94502e: /* 94502e: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 945031: fstp dword ptr [esi + 0x1c] */
  WF32((uint32_t)(esi + 0x1cu), ST0); FPOP();
/* 945034: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 945035: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 945038: ret 0xc */
  esp += 16; SPILL(); return;
L_94503b: /* 94503b: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 94503f: fstp dword ptr [esi + 0x1c] */
  WF32((uint32_t)(esi + 0x1cu), ST0); FPOP();
L_945042: /* 945042: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 945043: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 945046: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_945050(void) {
  LOAD_REGS();
L_945050: /* 945050: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 945054: xor ecx, ecx */
  ecx = 0;
/* 945056: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 945059: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 94505c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 94505e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 945062: mov dword ptr [eax], 0x7f7fffff */
  W32((uint32_t)(eax), 0x7f7fffffu);
/* 945068: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_945070(void) {
  LOAD_REGS();
L_945070: /* 945070: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 945074: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 945075: call 0x92ad70 */
  esp -= 4; W32(esp, 0x94507au); SPILL(); f_92ad70(); if (g_unwind) return; RELOAD();
/* 94507a: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 94507e: mov ecx, eax */
  ecx = eax;
/* 945080: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 945083: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 945086: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 945089: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 94508c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94508e: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 945090: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 945093: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 945095: fcomp dword ptr [0xa21514] */
  fpu_com(ST0, F32((uint32_t)(0xa21514u)));
  FPOP();
/* 94509b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94509d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9450a0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 9450a4: jne 0x9450ba */
  if (!zf) goto L_9450ba;
L_9450a6: /* 9450a6: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 9450a9: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 9450ab: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 9450ae: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 9450b1: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 9450b4: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 9450b7: ret 0xc */
  esp += 16; SPILL(); return;
L_9450ba: /* 9450ba: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9450bc: fmul dword ptr [0xa13bbc] */
  ST0 = ST0 * (F32((uint32_t)(0xa13bbcu)));
/* 9450c2: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 9450c5: fmul dword ptr [0xa13bbc] */
  ST0 = ST0 * (F32((uint32_t)(0xa13bbcu)));
/* 9450cb: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 9450ce: fmul dword ptr [0xa13bbc] */
  ST0 = ST0 * (F32((uint32_t)(0xa13bbcu)));
/* 9450d4: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9450d6: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9450d8: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 9450db: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 9450de: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_9450f0(void) {
  LOAD_REGS();
L_9450f0: /* 9450f0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 9450f4: xor ecx, ecx */
  ecx = 0;
/* 9450f6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 9450f9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 9450fc: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 9450ff: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 945102: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 945105: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 945108: mov edx, 0x3f800000 */
  edx = 0x3f800000u;
/* 94510d: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 94510f: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 945112: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 945115: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 945119: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 94511b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 94511e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 945121: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 945124: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 945127: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 94512a: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 94512d: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 945130: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 945133: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 945136: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 945139: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 94513c: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 94513f: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 945142: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 945145: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 945148: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
/* 94514b: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_945150(void) {
  LOAD_REGS();
L_945150: /* 945150: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 945154: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 945156: je 0x945170 */
  if (zf) goto L_945170;
L_945158: /* 945158: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 94515b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 94515f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 945161: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 945164: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 945167: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 94516a: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 94516d: ret 0xc */
  esp += 16; SPILL(); return;
L_945170: /* 945170: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 945174: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 94517a: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 945181: mov dword ptr [eax + 8], 0x3f800000 */
  W32((uint32_t)(eax + 0x8u), 0x3f800000u);
/* 945188: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_945190(void) {
  LOAD_REGS();
L_945190: /* 945190: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 945194: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 945197: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 945198: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 94519c: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 9451a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9451a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9451a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9451a3: call 0x945150 */
  esp -= 4; W32(esp, 0x9451a8u); SPILL(); f_945150(); if (g_unwind) return; RELOAD();
/* 9451a8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9451aa: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9451ae: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9451b0: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9451b3: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 9451b6: je 0x9451c9 */
  if (zf) goto L_9451c9;
L_9451b8: /* 9451b8: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9451ba: fsub dword ptr [esi + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x30u)));
/* 9451bd: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9451bf: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9451c1: fsub dword ptr [esi + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x34u)));
/* 9451c4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9451c6: fsub dword ptr [esi + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x38u)));
L_9451c9: /* 9451c9: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 9451cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9451ce: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9451d0: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 9451d4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9451d6: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 9451da: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9451dc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9451de: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 9451e0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9451e3: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_9451f0(void) {
  LOAD_REGS();
L_9451f0: /* 9451f0: mov eax, dword ptr [0xaf3fe8] */
  eax = R32((uint32_t)(0xaf3fe8u));
/* 9451f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9451f7: je 0x945208 */
  if (zf) goto L_945208;
L_9451f9: /* 9451f9: push 0xaf3ff8 */
  { uint32_t v = 0xaf3ff8u; esp -= 4; W32(esp, v); }
/* 9451fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 945200: call 0x971e20 */
  esp -= 4; W32(esp, 0x945205u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 945205: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_945208: /* 945208: mov dword ptr [0xaf3fe8], 0 */
  W32((uint32_t)(0xaf3fe8u), 0x0u);
/* 945212: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_945220(void) {
  LOAD_REGS();
L_945220: /* 945220: mov ax, 7 */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0x7u) & 0xffffu);
/* 945224: ret  */
  esp += 4; SPILL(); return;
}

void f_945230(void) {
  LOAD_REGS();
L_945230: /* 945230: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 945234: push 0x9458d0 */
  { uint32_t v = 0x9458d0u; esp -= 4; W32(esp, v); }
/* 945239: push 0x945b00 */
  { uint32_t v = 0x945b00u; esp -= 4; W32(esp, v); }
/* 94523e: push 0x9457b0 */
  { uint32_t v = 0x9457b0u; esp -= 4; W32(esp, v); }
/* 945243: push 0x945780 */
  { uint32_t v = 0x945780u; esp -= 4; W32(esp, v); }
/* 945248: push 0x945560 */
  { uint32_t v = 0x945560u; esp -= 4; W32(esp, v); }
/* 94524d: push 0x945540 */
  { uint32_t v = 0x945540u; esp -= 4; W32(esp, v); }
/* 945252: push 0xaf402c */
  { uint32_t v = 0xaf402cu; esp -= 4; W32(esp, v); }
/* 945257: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 945259: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94525a: call 0x929d50 */
  esp -= 4; W32(esp, 0x94525fu); SPILL(); f_929d50(); if (g_unwind) return; RELOAD();
/* 94525f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_945270(void) {
  LOAD_REGS();
L_945270: /* 945270: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 945273: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 945274: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 945278: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94527a: je 0x94546f */
  if (zf) goto L_94546f;
L_945280: /* 945280: xor eax, eax */
  eax = 0;
/* 945282: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 945286: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 94528a: xor ecx, ecx */
  ecx = 0;
/* 94528c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94528d: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 945291: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 945295: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 945299: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 94529d: mov edx, ebx */
  edx = ebx;
/* 94529f: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 9452a3: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 9452a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9452a6: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 9452aa: xor eax, eax */
  eax = 0;
/* 9452ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9452b0: /* 9452b0: lea ecx, [esp + eax + 0xc] */
  ecx = (uint32_t)(esp + eax + 0xcu);
/* 9452b4: fld dword ptr [edx + ecx] */
  { double v = F32((uint32_t)(edx + ecx)); FPUSH(v); }
/* 9452b7: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9452ba: cmp eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9452bd: fst dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0);
/* 9452bf: fstp dword ptr [esp + eax + 0x2c] */
  WF32((uint32_t)(esp + eax + 0x2cu), ST0); FPOP();
/* 9452c3: jl 0x9452b0 */
  if ((sf != of)) goto L_9452b0;
L_9452c5: /* 9452c5: mov esi, 1 */
  esi = 0x1u;
/* 9452ca: cmp ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9452cc: jle 0x94531a */
  if ((zf || sf != of)) goto L_94531a;
L_9452ce: /* 9452ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9452cf: lea edi, [ebx + 0x10] */
  edi = (uint32_t)(ebx + 0x10u);
L_9452d2: /* 9452d2: mov edx, edi */
  edx = edi;
/* 9452d4: xor ecx, ecx */
  ecx = 0;
L_9452d6: /* 9452d6: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9452d8: fcomp dword ptr [esp + ecx + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + ecx + 0x34u)));
  FPOP();
/* 9452dc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9452de: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9452e1: jp 0x9452ef */
  if (pf) goto L_9452ef;
L_9452e3: /* 9452e3: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 9452e5: mov dword ptr [esp + ecx + 0x34], eax */
  W32((uint32_t)(esp + ecx + 0x34u), eax);
/* 9452e9: mov dword ptr [esp + ecx + 0x1c], esi */
  W32((uint32_t)(esp + ecx + 0x1cu), esi);
/* 9452ed: jmp 0x945306 */
  goto L_945306;
L_9452ef: /* 9452ef: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 9452f1: fcomp dword ptr [esp + ecx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + ecx + 0x10u)));
  FPOP();
/* 9452f5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9452f7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9452fa: jne 0x945306 */
  if (!zf) goto L_945306;
L_9452fc: /* 9452fc: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 9452fe: mov dword ptr [esp + ecx + 0x10], eax */
  W32((uint32_t)(esp + ecx + 0x10u), eax);
/* 945302: mov dword ptr [esp + ecx + 0x28], esi */
  W32((uint32_t)(esp + ecx + 0x28u), esi);
L_945306: /* 945306: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 945309: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94530c: cmp ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94530f: jl 0x9452d6 */
  if ((sf != of)) goto L_9452d6;
L_945311: /* 945311: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 945312: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 945315: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 945317: jl 0x9452d2 */
  if ((sf != of)) goto L_9452d2;
L_945319: /* 945319: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_94531a: /* 94531a: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 945320: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 945324: xor edx, edx */
  edx = 0;
L_945326: /* 945326: mov eax, dword ptr [esp + edx + 0x24] */
  eax = R32((uint32_t)(esp + edx + 0x24u));
/* 94532a: mov ecx, dword ptr [esp + edx + 0x18] */
  ecx = R32((uint32_t)(esp + edx + 0x18u));
/* 94532e: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 945331: fld dword ptr [eax + ebx] */
  { double v = F32((uint32_t)(eax + ebx)); FPUSH(v); }
/* 945334: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 945336: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 945339: fsub dword ptr [ecx + ebx] */
  ST0 = ST0 - (F32((uint32_t)(ecx + ebx)));
/* 94533c: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94533e: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 945342: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 945345: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 945348: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94534c: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 94534f: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 945352: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 945356: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94535a: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94535e: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 945362: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 945366: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 945368: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 94536a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94536c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94536e: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 945370: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 945372: fst dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0);
/* 945376: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 945378: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94537a: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 94537c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94537e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 945381: jne 0x9453b7 */
  if (!zf) goto L_9453b7;
L_945383: /* 945383: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 945385: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 945389: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 94538d: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 945393: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 945395: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 945397: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94539b: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 9453a1: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 9453a4: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 9453a7: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9453ab: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 9453b1: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 9453b4: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
L_9453b7: /* 9453b7: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9453ba: cmp edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9453bd: jl 0x945326 */
  if ((sf != of)) goto L_945326;
L_9453c3: /* 9453c3: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9453c5: fsqrt  */
  ST0 = sqrt(ST0);
/* 9453c7: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 9453cd: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9453cf: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9453d1: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 9453d5: jle 0x945467 */
  if ((zf || sf != of)) goto L_945467;
L_9453db: /* 9453db: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 9453de: mov edx, ebp */
  edx = ebp;
L_9453e0: /* 9453e0: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 9453e3: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 9453e5: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 9453e8: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 9453eb: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 9453ef: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9453f1: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 9453f4: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 9453f8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9453fa: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 9453fc: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 9453fe: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 945400: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 945402: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 945404: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 945406: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 945408: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94540a: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 94540c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94540e: fcom dword ptr [esp + 0x44] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x44u)));
/* 945412: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 945414: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 945417: jne 0x945457 */
  if (!zf) goto L_945457;
L_945419: /* 945419: fsqrt  */
  ST0 = sqrt(ST0);
/* 94541b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94541d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 94541f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 945421: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 945427: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 945429: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 94542b: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 94542d: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 945431: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 945433: fsub st(4) */
  ST0 = ST0 - STI(4);
/* 945435: fdivrp st(1) */
  STI(1) = ST0 / STI(1);
  FPOP();
/* 945437: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 945439: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 94543b: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 94543d: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 94543f: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 945443: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 945445: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 945448: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 94544b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94544d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94544f: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 945452: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 945455: jmp 0x945459 */
  goto L_945459;
L_945457: /* 945457: fstp st(0) */
  STI(0) = ST0; FPOP();
L_945459: /* 945459: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94545b: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94545e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 94545f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 945461: jne 0x9453e0 */
  if (!zf) goto L_9453e0;
L_945467: /* 945467: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 94546b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94546c: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 94546e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_94546f: /* 94546f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 945470: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 945473: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_945480(void) {
  LOAD_REGS();
L_945480: /* 945480: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 945481: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 945482: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 945483: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 945485: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 945487: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x94548du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 94548d: mov ebx, eax */
  ebx = eax;
/* 94548f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 945493: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 945495: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 945496: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 945497: call 0x92a720 */
  esp -= 4; W32(esp, 0x94549cu); SPILL(); f_92a720(); if (g_unwind) return; RELOAD();
/* 94549c: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 9454a0: lea eax, [ebx + 0x10] */
  eax = (uint32_t)(ebx + 0x10u);
/* 9454a3: mov edi, eax */
  edi = eax;
/* 9454a5: mov ecx, 7 */
  ecx = 0x7u;
/* 9454aa: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 9454ac: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9454b0: lea esi, [ebx + 0x30] */
  esi = (uint32_t)(ebx + 0x30u);
/* 9454b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9454b4: lea edx, [ebx + 0x34] */
  edx = (uint32_t)(ebx + 0x34u);
/* 9454b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9454b8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 9454ba: mov dword ptr [ebx + 0x2c], ecx */
  W32((uint32_t)(ebx + 0x2cu), ecx);
/* 9454bd: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 9454c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9454c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9454c2: call 0x945270 */
  esp -= 4; W32(esp, 0x9454c7u); SPILL(); f_945270(); if (g_unwind) return; RELOAD();
/* 9454c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9454c8: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9454cc: mov eax, ebx */
  eax = ebx;
/* 9454ce: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 9454d0: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 9454d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9454d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9454d4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_9454e0(void) {
  LOAD_REGS();
L_9454e0: /* 9454e0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9454e4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 9454e8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9454eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9454ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9454ed: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 9454f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9454f2: call 0x94e410 */
  esp -= 4; W32(esp, 0x9454f7u); SPILL(); f_94e410(); if (g_unwind) return; RELOAD();
/* 9454f7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9454fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9454fc: jne 0x945504 */
  if (!zf) goto L_945504;
L_9454fe: /* 9454fe: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 945501: ret 0x10 */
  esp += 20; SPILL(); return;
L_945504: /* 945504: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 945508: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 94550c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94550d: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 945511: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 945512: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 945513: call 0x945480 */
  esp -= 4; W32(esp, 0x945518u); SPILL(); f_945480(); if (g_unwind) return; RELOAD();
/* 945518: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94551b: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_945520(void) {
  LOAD_REGS();
L_945520: /* 945520: push 0xaf403c */
  { uint32_t v = 0xaf403cu; esp -= 4; W32(esp, v); }
/* 945525: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 945527: call 0x971e20 */
  esp -= 4; W32(esp, 0x94552cu); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 94552c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94552f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_945540(void) {
  LOAD_REGS();
L_945540: /* 945540: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 945541: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 945545: lea eax, [esi + 0x10] */
  eax = (uint32_t)(esi + 0x10u);
/* 945548: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 945549: call 0x94e010 */
  esp -= 4; W32(esp, 0x94554eu); SPILL(); f_94e010(); if (g_unwind) return; RELOAD();
/* 94554e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 945551: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 945552: call 0x92a770 */
  esp -= 4; W32(esp, 0x945557u); SPILL(); f_92a770(); if (g_unwind) return; RELOAD();
/* 945557: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 945558: ret 4 */
  esp += 8; SPILL(); return;
}

void f_945560(void) {
  LOAD_REGS();
L_945560: /* 945560: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 945563: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 945564: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 945565: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 945569: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94556a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94556b: call 0x92acc0 */
  esp -= 4; W32(esp, 0x945570u); SPILL(); f_92acc0(); if (g_unwind) return; RELOAD();
/* 945570: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 945571: mov ebx, eax */
  ebx = eax;
/* 945573: call 0x92ad70 */
  esp -= 4; W32(esp, 0x945578u); SPILL(); f_92ad70(); if (g_unwind) return; RELOAD();
/* 945578: lea edi, [esi + 0x14] */
  edi = (uint32_t)(esi + 0x14u);
/* 94557b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94557c: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 94557f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 945580: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 945581: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 945582: call 0x945660 */
  esp -= 4; W32(esp, 0x945587u); SPILL(); f_945660(); if (g_unwind) return; RELOAD();
/* 945587: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 94558b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94558e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 945590: je 0x94564a */
  if (zf) goto L_94564a;
L_945596: /* 945596: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 94559a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94559b: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 94559f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9455a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9455a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9455a2: call 0x945660 */
  esp -= 4; W32(esp, 0x9455a7u); SPILL(); f_945660(); if (g_unwind) return; RELOAD();
/* 9455a7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 9455a9: fcomp dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
  FPOP();
/* 9455ad: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9455b0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9455b2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9455b5: jp 0x9455bb */
  if (pf) goto L_9455bb;
L_9455b7: /* 9455b7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 9455b9: jmp 0x9455bf */
  goto L_9455bf;
L_9455bb: /* 9455bb: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
L_9455bf: /* 9455bf: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 9455c1: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 9455c4: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 9455c8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9455ca: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9455cd: jp 0x9455d4 */
  if (pf) goto L_9455d4;
L_9455cf: /* 9455cf: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 9455d2: jmp 0x9455d8 */
  goto L_9455d8;
L_9455d4: /* 9455d4: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_9455d8: /* 9455d8: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 9455db: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 9455de: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 9455e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9455e4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9455e7: jp 0x9455ee */
  if (pf) goto L_9455ee;
L_9455e9: /* 9455e9: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 9455ec: jmp 0x9455f2 */
  goto L_9455f2;
L_9455ee: /* 9455ee: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
L_9455f2: /* 9455f2: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 9455f5: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 9455f7: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 9455fb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9455fd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 945600: jne 0x945606 */
  if (!zf) goto L_945606;
L_945602: /* 945602: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 945604: jmp 0x94560a */
  goto L_94560a;
L_945606: /* 945606: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
L_94560a: /* 94560a: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 94560c: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 94560f: fcomp dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
  FPOP();
/* 945613: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 945615: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 945618: jne 0x94561f */
  if (!zf) goto L_94561f;
L_94561a: /* 94561a: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 94561d: jmp 0x945623 */
  goto L_945623;
L_94561f: /* 94561f: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
L_945623: /* 945623: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 945626: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 945629: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* 94562d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94562f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 945632: jne 0x945643 */
  if (!zf) goto L_945643;
L_945634: /* 945634: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 945637: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 94563a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94563b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94563c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94563d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 945640: ret 0xc */
  esp += 16; SPILL(); return;
L_945643: /* 945643: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 945647: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
L_94564a: /* 94564a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94564b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94564c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94564d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 945650: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_945660(void) {
  LOAD_REGS();
L_945660: /* 945660: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 945663: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 945667: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 945668: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 945669: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 94566d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94566e: lea esi, [eax + 0x20] */
  esi = (uint32_t)(eax + 0x20u);
/* 945671: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 945675: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 945677: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 945678: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 94567c: mov ebx, ebp */
  ebx = ebp;
/* 94567e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 945682: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 94568a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_945690: /* 945690: fld dword ptr [esi - 0x20] */
  { double v = F32((uint32_t)(esi + 0xffffffe0u)); FPUSH(v); }
/* 945693: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 945697: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 945698: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 94569c: fld dword ptr [esi - 0x10] */
  { double v = F32((uint32_t)(esi + 0xfffffff0u)); FPUSH(v); }
/* 94569f: push 0x7f7fffff */
  { uint32_t v = 0x7f7fffffu; esp -= 4; W32(esp, v); }
/* 9456a4: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 9456a8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 9456aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9456ac: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 9456b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9456b1: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 9456b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9456b6: call 0x946510 */
  esp -= 4; W32(esp, 0x9456bbu); SPILL(); f_946510(); if (g_unwind) return; RELOAD();
/* 9456bb: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9456bf: fstp dword ptr [eax + ebx] */
  WF32((uint32_t)(eax + ebx), ST0); FPOP();
/* 9456c2: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 9456c6: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9456ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9456cb: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 9456d1: push 0x7f7fffff */
  { uint32_t v = 0x7f7fffffu; esp -= 4; W32(esp, v); }
/* 9456d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9456d8: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 9456dc: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 9456e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9456e1: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 9456e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9456e6: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 9456ec: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 9456f0: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 9456f4: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 9456fa: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 9456fe: call 0x946510 */
  esp -= 4; W32(esp, 0x945703u); SPILL(); f_946510(); if (g_unwind) return; RELOAD();
/* 945703: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 945707: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 945709: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94570c: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 94570f: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 945712: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 945713: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 945717: jne 0x945690 */
  if (!zf) goto L_945690;
L_94571d: /* 94571d: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 945721: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 945724: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 945728: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 94572b: fsub dword ptr [edi + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x2cu)));
/* 94572e: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 945731: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* 945734: fsub dword ptr [ebp + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x4u)));
/* 945737: fsub dword ptr [edi + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x2cu)));
/* 94573a: fstp dword ptr [ebp + 4] */
  WF32((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* 94573d: fld dword ptr [eax + 0x38] */
  { double v = F32((uint32_t)(eax + 0x38u)); FPUSH(v); }
/* 945740: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 945743: fsub dword ptr [edi + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x2cu)));
/* 945746: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 945749: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 94574c: fadd dword ptr [edi + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x2cu)));
/* 94574f: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 945751: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 945753: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 945756: fadd dword ptr [edi + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x2cu)));
/* 945759: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 94575c: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 94575f: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 945762: fadd dword ptr [edi + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x2cu)));
/* 945765: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 945766: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 945767: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 945768: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 94576b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94576c: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 94576f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 945772: ret  */
  esp += 4; SPILL(); return;
}

void f_945780(void) {
  LOAD_REGS();
L_945780: /* 945780: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 945784: mov edx, dword ptr [eax + 0x34] */
  edx = R32((uint32_t)(eax + 0x34u));
/* 945787: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 94578b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 94578d: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 945790: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 945793: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 945796: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 945799: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 94579c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 9457a0: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 9457a2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_9457b0(void) {
  LOAD_REGS();
L_9457b0: /* 9457b0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 9457b4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 9457b8: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 9457bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9457bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9457be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9457bf: call 0x946650 */
  esp -= 4; W32(esp, 0x9457c4u); SPILL(); f_946650(); if (g_unwind) return; RELOAD();
/* 9457c4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9457c6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_9457d0(void) {
  LOAD_REGS();
L_9457d0: /* 9457d0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_9457e0(void) {
  LOAD_REGS();
L_9457e0: /* 9457e0: mov eax, 7 */
  eax = 0x7u;
/* 9457e5: ret  */
  esp += 4; SPILL(); return;
}

void f_9457f0(void) {
  LOAD_REGS();
L_9457f0: /* 9457f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9457f4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 9457f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9457f9: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9457fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9457fd: call 0x94e590 */
  esp -= 4; W32(esp, 0x945802u); SPILL(); f_94e590(); if (g_unwind) return; RELOAD();
/* 945802: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 945805: ret 8 */
  esp += 12; SPILL(); return;
}

void f_945810(void) {
  LOAD_REGS();
L_945810: /* 945810: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 945814: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 945817: ret 4 */
  esp += 8; SPILL(); return;
}

void f_945820(void) {
  LOAD_REGS();
L_945820: /* 945820: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 945824: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 945828: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 94582c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94582d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94582e: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 945831: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 945832: call 0x94e620 */
  esp -= 4; W32(esp, 0x945837u); SPILL(); f_94e620(); if (g_unwind) return; RELOAD();
/* 945837: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 945839: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 94583d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 94583f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 945842: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 945845: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 945848: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94584b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 94584e: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_945860(void) {
  LOAD_REGS();
L_945860: /* 945860: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 945864: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 945868: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 94586c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94586d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94586e: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 945871: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 945872: call 0x94e620 */
  esp -= 4; W32(esp, 0x945877u); SPILL(); f_94e620(); if (g_unwind) return; RELOAD();
/* 945877: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94587a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_945880(void) {
  LOAD_REGS();
L_945880: /* 945880: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 945884: fld dword ptr [eax + 0x2c] */
  { double v = F32((uint32_t)(eax + 0x2cu)); FPUSH(v); }
/* 945887: ret 4 */
  esp += 8; SPILL(); return;
}

void f_945890(void) {
  LOAD_REGS();
L_945890: /* 945890: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 945894: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 945897: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 94589b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 94589f: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9458a2: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9458a4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 9458a6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9458a8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 9458ab: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 9458ae: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 9458b1: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 9458b4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_9458c0(void) {
  LOAD_REGS();
L_9458c0: /* 9458c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9458c4: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 9458c7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9458d0(void) {
  LOAD_REGS();
L_9458d0: /* 9458d0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_9458e0(void) {
  LOAD_REGS();
L_9458e0: /* 9458e0: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9458e3: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9458e7: xor eax, eax */
  eax = 0;
/* 9458e9: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 9458ed: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9458f1: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 9458f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9458f6: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 9458f8: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 9458fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9458fb: mov dword ptr [esp + 0x10], 0x946940 */
  W32((uint32_t)(esp + 0x10u), 0x946940u);
/* 945903: mov dword ptr [esp + 0x14], 0x946990 */
  W32((uint32_t)(esp + 0x14u), 0x946990u);
/* 94590b: mov dword ptr [esp + 0x18], 0x948400 */
  W32((uint32_t)(esp + 0x18u), 0x948400u);
/* 945913: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 94591b: call 0x929df0 */
  esp -= 4; W32(esp, 0x945920u); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 945920: mov eax, 1 */
  eax = 0x1u;
/* 945925: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 945928: ret 4 */
  esp += 8; SPILL(); return;
}

void f_945930(void) {
  LOAD_REGS();
L_945930: /* 945930: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 945933: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 945937: xor eax, eax */
  eax = 0;
/* 945939: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 94593d: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 945941: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 945945: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 945946: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 945948: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 94594a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94594b: mov dword ptr [esp + 0x10], 0x946940 */
  W32((uint32_t)(esp + 0x10u), 0x946940u);
/* 945953: mov dword ptr [esp + 0x14], 0x946990 */
  W32((uint32_t)(esp + 0x14u), 0x946990u);
/* 94595b: mov dword ptr [esp + 0x18], 0x948400 */
  W32((uint32_t)(esp + 0x18u), 0x948400u);
/* 945963: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 94596b: call 0x929df0 */
  esp -= 4; W32(esp, 0x945970u); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 945970: mov eax, 1 */
  eax = 0x1u;
/* 945975: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 945978: ret 4 */
  esp += 8; SPILL(); return;
}

void f_945980(void) {
  LOAD_REGS();
L_945980: /* 945980: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 945983: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 945987: xor eax, eax */
  eax = 0;
/* 945989: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 94598d: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 945991: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 945995: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 945999: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 94599d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94599e: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 9459a0: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 9459a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9459a3: mov dword ptr [esp + 0x18], 0x948420 */
  W32((uint32_t)(esp + 0x18u), 0x948420u);
/* 9459ab: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 9459b3: call 0x929df0 */
  esp -= 4; W32(esp, 0x9459b8u); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 9459b8: mov eax, 1 */
  eax = 0x1u;
/* 9459bd: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9459c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9459d0(void) {
  LOAD_REGS();
L_9459d0: /* 9459d0: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9459d3: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9459d7: xor eax, eax */
  eax = 0;
/* 9459d9: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 9459dd: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9459e1: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 9459e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9459e6: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 9459e8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9459ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9459eb: mov dword ptr [esp + 0x10], 0x946940 */
  W32((uint32_t)(esp + 0x10u), 0x946940u);
/* 9459f3: mov dword ptr [esp + 0x14], 0x946990 */
  W32((uint32_t)(esp + 0x14u), 0x946990u);
/* 9459fb: mov dword ptr [esp + 0x18], 0x948400 */
  W32((uint32_t)(esp + 0x18u), 0x948400u);
/* 945a03: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 945a0b: call 0x929df0 */
  esp -= 4; W32(esp, 0x945a10u); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 945a10: mov eax, 1 */
  eax = 0x1u;
/* 945a15: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 945a18: ret 4 */
  esp += 8; SPILL(); return;
}

void f_945a20(void) {
  LOAD_REGS();
L_945a20: /* 945a20: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 945a23: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 945a27: xor eax, eax */
  eax = 0;
/* 945a29: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 945a2d: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 945a31: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 945a35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 945a36: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 945a38: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 945a3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 945a3b: mov dword ptr [esp + 0x10], 0x946940 */
  W32((uint32_t)(esp + 0x10u), 0x946940u);
/* 945a43: mov dword ptr [esp + 0x14], 0x946990 */
  W32((uint32_t)(esp + 0x14u), 0x946990u);
/* 945a4b: mov dword ptr [esp + 0x18], 0x948400 */
  W32((uint32_t)(esp + 0x18u), 0x948400u);
/* 945a53: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 945a5b: call 0x929df0 */
  esp -= 4; W32(esp, 0x945a60u); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 945a60: mov eax, 1 */
  eax = 0x1u;
/* 945a65: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 945a68: ret 4 */
  esp += 8; SPILL(); return;
}

void f_945a70(void) {
  LOAD_REGS();
L_945a70: /* 945a70: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 945a73: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 945a77: xor eax, eax */
  eax = 0;
/* 945a79: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 945a7d: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 945a81: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 945a85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 945a86: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 945a88: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 945a8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 945a8b: mov dword ptr [esp + 0x10], 0x946940 */
  W32((uint32_t)(esp + 0x10u), 0x946940u);
/* 945a93: mov dword ptr [esp + 0x14], 0x946990 */
  W32((uint32_t)(esp + 0x14u), 0x946990u);
/* 945a9b: mov dword ptr [esp + 0x18], 0x948400 */
  W32((uint32_t)(esp + 0x18u), 0x948400u);
/* 945aa3: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 945aab: call 0x929df0 */
  esp -= 4; W32(esp, 0x945ab0u); SPILL(); f_929df0(); if (g_unwind) return; RELOAD();
/* 945ab0: mov eax, 1 */
  eax = 0x1u;
/* 945ab5: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 945ab8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_945ac0(void) {
  LOAD_REGS();
L_945ac0: /* 945ac0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 945ac1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 945ac5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 945ac6: call 0x9458e0 */
  esp -= 4; W32(esp, 0x945acbu); SPILL(); f_9458e0(); if (g_unwind) return; RELOAD();
/* 945acb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 945acc: call 0x945a70 */
  esp -= 4; W32(esp, 0x945ad1u); SPILL(); f_945a70(); if (g_unwind) return; RELOAD();
/* 945ad1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 945ad2: call 0x9459d0 */
  esp -= 4; W32(esp, 0x945ad7u); SPILL(); f_9459d0(); if (g_unwind) return; RELOAD();
/* 945ad7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 945ad8: call 0x945a20 */
  esp -= 4; W32(esp, 0x945addu); SPILL(); f_945a20(); if (g_unwind) return; RELOAD();
/* 945add: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 945ade: call 0x949b30 */
  esp -= 4; W32(esp, 0x945ae3u); SPILL(); f_949b30(); if (g_unwind) return; RELOAD();
/* 945ae3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 945ae4: call 0x945930 */
  esp -= 4; W32(esp, 0x945ae9u); SPILL(); f_945930(); if (g_unwind) return; RELOAD();
/* 945ae9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 945aea: call 0x948a60 */
  esp -= 4; W32(esp, 0x945aefu); SPILL(); f_948a60(); if (g_unwind) return; RELOAD();
/* 945aef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 945af0: call 0x945980 */
  esp -= 4; W32(esp, 0x945af5u); SPILL(); f_945980(); if (g_unwind) return; RELOAD();
/* 945af5: mov eax, 1 */
  eax = 0x1u;
/* 945afa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 945afb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_945b00(void) {
  LOAD_REGS();
L_945b00: /* 945b00: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 945b03: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 945b07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 945b08: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 945b0c: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 945b10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 945b11: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 945b15: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 945b16: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 945b19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 945b1a: call 0x945c80 */
  esp -= 4; W32(esp, 0x945b1fu); SPILL(); f_945c80(); if (g_unwind) return; RELOAD();
/* 945b1f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 945b21: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 945b25: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 945b29: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 945b2b: xor ecx, ecx */
  ecx = 0;
/* 945b2d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 945b30: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 945b36: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 945b39: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 945b3c: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 945b3f: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 945b42: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 945b45: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 945b48: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 945b4b: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 945b4e: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 945b51: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 945b54: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 945b57: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 945b5b: mov edx, 0x3f800000 */
  edx = 0x3f800000u;
/* 945b60: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 945b62: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 945b65: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 945b68: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 945b6b: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 945b6f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 945b71: fstp dword ptr [eax + 0x30] */
  WF32((uint32_t)(eax + 0x30u), ST0); FPOP();
/* 945b74: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 945b78: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 945b7a: fstp dword ptr [eax + 0x34] */
  WF32((uint32_t)(eax + 0x34u), ST0); FPOP();
/* 945b7d: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 945b81: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 945b83: fstp dword ptr [eax + 0x38] */
  WF32((uint32_t)(eax + 0x38u), ST0); FPOP();
/* 945b86: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 945b8a: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 945b8e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 945b90: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 945b92: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 945b94: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 945b98: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 945b9c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 945b9e: fst dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0);
/* 945ba2: fstp dword ptr [ecx + 0x10] */
  WF32((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 945ba5: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 945ba9: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 945bad: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 945baf: fst dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0);
/* 945bb3: fstp dword ptr [ecx + 0x20] */
  WF32((uint32_t)(ecx + 0x20u), ST0); FPOP();
/* 945bb6: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 945bba: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 945bbc: fchs  */
  ST0 = -ST0;
/* 945bbe: fst dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0);
/* 945bc2: fst dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0);
/* 945bc5: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 945bc8: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 945bcc: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 945bce: fchs  */
  ST0 = -ST0;
/* 945bd0: fst dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0);
/* 945bd4: fst dword ptr [ecx + 0x1c] */
  WF32((uint32_t)(ecx + 0x1cu), ST0);
/* 945bd7: fstp dword ptr [ecx + 0x14] */
  WF32((uint32_t)(ecx + 0x14u), ST0); FPOP();
/* 945bda: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 945bde: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 945be0: fchs  */
  ST0 = -ST0;
/* 945be2: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 945be6: fst dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0);
/* 945be9: fstp dword ptr [ecx + 0x18] */
  WF32((uint32_t)(ecx + 0x18u), ST0); FPOP();
/* 945bec: fld dword ptr [eax + 0x38] */
  { double v = F32((uint32_t)(eax + 0x38u)); FPUSH(v); }
/* 945bef: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* 945bf2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 945bf4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 945bf6: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 945bf8: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 945bfa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 945bfc: fsubr st(3) */
  ST0 = STI(3) - ST0;
/* 945bfe: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 945c00: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 945c02: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 945c04: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 945c06: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 945c08: fld dword ptr [eax + 0x38] */
  { double v = F32((uint32_t)(eax + 0x38u)); FPUSH(v); }
/* 945c0b: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 945c0e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 945c10: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 945c12: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 945c14: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 945c16: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 945c18: fsubr dword ptr [esp + 0x3c] */
  ST0 = (F32((uint32_t)(esp + 0x3cu))) - ST0;
/* 945c1c: fstp dword ptr [ecx + 0x10] */
  WF32((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 945c1f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 945c21: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 945c23: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* 945c26: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 945c29: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 945c2b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 945c2d: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 945c2f: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 945c31: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 945c33: fsubr dword ptr [esp + 0x48] */
  ST0 = (F32((uint32_t)(esp + 0x48u))) - ST0;
/* 945c37: fstp dword ptr [ecx + 0x20] */
  WF32((uint32_t)(ecx + 0x20u), ST0); FPOP();
/* 945c3a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 945c3c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 945c3e: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 945c41: fmul dword ptr [eax + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x34u)));
/* 945c44: fadd dword ptr [esp + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x40u)));
/* 945c48: fst dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0);
/* 945c4b: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 945c4e: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* 945c51: fmul dword ptr [eax + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x38u)));
/* 945c54: fadd dword ptr [esp + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x44u)));
/* 945c58: fst dword ptr [ecx + 0x1c] */
  WF32((uint32_t)(ecx + 0x1cu), ST0);
/* 945c5b: fstp dword ptr [ecx + 0x14] */
  WF32((uint32_t)(ecx + 0x14u), ST0); FPOP();
/* 945c5e: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 945c61: fmul dword ptr [eax + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x38u)));
/* 945c64: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
/* 945c67: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 945c6b: fst dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0);
/* 945c6e: fstp dword ptr [ecx + 0x18] */
  WF32((uint32_t)(ecx + 0x18u), ST0); FPOP();
/* 945c71: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 945c74: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_945c80(void) {
  LOAD_REGS();
L_945c80: /* 945c80: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 945c83: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 945c8a: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* 945c91: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 945c98: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 945c99: xor ebx, ebx */
  ebx = 0;
/* 945c9b: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 945c9e: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 945ca1: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 945ca3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 945ca4: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 945ca7: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 945caa: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 945cac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 945cad: mov edi, dword ptr [esp + 0x88] */
  edi = R32((uint32_t)(esp + 0x88u));
/* 945cb4: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 945cb7: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 945cba: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 945cbc: cmp dword ptr [edi + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 945cbf: mov dword ptr [esp + 0x5c], ebx */
  W32((uint32_t)(esp + 0x5cu), ebx);
/* 945cc3: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 945cc7: jle 0x946330 */
  if ((zf || sf != of)) goto L_946330;
L_945ccd: /* 945ccd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 945cce: xor ebp, ebp */
  ebp = 0;
/* 945cd0: mov dword ptr [esp + 0x5c], ebp */
  W32((uint32_t)(esp + 0x5cu), ebp);
/* 945cd4: jmp 0x945ce5 */
  goto L_945ce5;
L_945cd6: /* 945cd6: mov ebp, dword ptr [esp + 0x5c] */
  ebp = R32((uint32_t)(esp + 0x5cu));
/* 945cda: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 945cde: mov edi, dword ptr [esp + 0x8c] */
  edi = R32((uint32_t)(esp + 0x8cu));
L_945ce5: /* 945ce5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 945ce6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 945ce7: call 0x94e590 */
  esp -= 4; W32(esp, 0x945cecu); SPILL(); f_94e590(); if (g_unwind) return; RELOAD();
/* 945cec: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 945cef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 945cf1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 945cf2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 945cf3: mov dword ptr [esp + 0x98], eax */
  W32((uint32_t)(esp + 0x98u), eax);
/* 945cfa: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 945cfc: call 0x94e620 */
  esp -= 4; W32(esp, 0x945d01u); SPILL(); f_94e620(); if (g_unwind) return; RELOAD();
/* 945d01: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 945d04: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 945d07: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 945d0a: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 945d0d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 945d0f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 945d11: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 945d14: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 945d16: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 945d18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 945d19: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 945d1b: fchs  */
  ST0 = -ST0;
/* 945d1d: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 945d21: call 0x949d60 */
  esp -= 4; W32(esp, 0x945d26u); SPILL(); f_949d60(); if (g_unwind) return; RELOAD();
/* 945d26: mov ebp, eax */
  ebp = eax;
/* 945d28: lea eax, [ebp + 1] */
  eax = (uint32_t)(ebp + 0x1u);
/* 945d2b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 945d2c: mov ecx, 3 */
  ecx = 0x3u;
/* 945d31: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x945d31);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 945d33: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 945d36: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 945d3e: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 945d46: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 945d4e: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 945d56: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
/* 945d5e: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 945d66: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* 945d6e: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 945d76: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 945d7e: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 945d86: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 945d8e: mov edi, edx */
  edi = edx;
/* 945d90: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 945d93: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 945d94: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x945d94);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 945d96: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* 945d9d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 945d9f: mov ebx, edx */
  ebx = edx;
/* 945da1: jle 0x945ffd */
  if ((zf || sf != of)) goto L_945ffd;
L_945da7: /* 945da7: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 945dab: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 945daf: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* 945db6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 945db7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 945db8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 945db9: call 0x94e5b0 */
  esp -= 4; W32(esp, 0x945dbeu); SPILL(); f_94e5b0(); if (g_unwind) return; RELOAD();
/* 945dbe: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 945dc1: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 945dc8: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 945dcb: mov dword ptr [esp + 0x8c], eax */
  W32((uint32_t)(esp + 0x8cu), eax);
/* 945dd2: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 945dd4: lea edx, [ecx + edi] */
  edx = (uint32_t)(ecx + edi);
/* 945dd7: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 945dda: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 945ddc: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 945ddf: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* 945de6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 945de9: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 945dec: lea edx, [ecx + edi] */
  edx = (uint32_t)(ecx + edi);
/* 945def: fld dword ptr [eax + edx*4] */
  { double v = F32((uint32_t)(eax + edx*4)); FPUSH(v); }
/* 945df2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 945df5: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 945df9: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 945dfb: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 945dfe: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 945e02: fsub st(3) */
  ST0 = ST0 - STI(3);
/* 945e04: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 945e08: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 945e0a: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 945e0c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 945e0e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 945e10: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 945e12: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 945e14: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 945e18: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 945e1a: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 945e1c: fst dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0);
/* 945e20: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 945e22: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 945e26: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 945e2a: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 945e2e: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 945e32: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 945e34: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 945e36: fst dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0);
/* 945e3a: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 945e3c: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 945e43: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 945e47: fadd st(5) */
  ST0 = ST0 + STI(5);
/* 945e49: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 945e4d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 945e4f: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 945e51: fst dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0);
/* 945e55: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 945e59: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 945e5d: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 945e61: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 945e63: fadd st(5) */
  ST0 = ST0 + STI(5);
/* 945e65: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 945e67: fadd dword ptr [esp + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x40u)));
/* 945e6b: fst dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0);
/* 945e6f: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 945e71: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 945e75: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 945e79: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 945e7d: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 945e7f: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 945e81: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 945e85: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 945e8b: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 945e8d: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 945e8f: fstp dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0); FPOP();
/* 945e93: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 945e95: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 945e9b: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 945e9d: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 945ea1: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 945ea5: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 945ea7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 945ea9: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 945ead: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 945eb1: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 945eb5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 945eb7: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 945ebb: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 945ebf: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 945ec3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 945ec5: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 945ec9: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 945ecd: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 945ed1: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 945ed3: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 945ed7: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 945edb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 945edd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 945edf: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 945ee3: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 945ee7: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 945eeb: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 945eef: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 945ef3: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 945ef7: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 945efb: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 945eff: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 945f03: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 945f07: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 945f0b: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 945f0d: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 945f11: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 945f13: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 945f15: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 945f19: fadd dword ptr [esp + 0x58] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x58u)));
/* 945f1d: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 945f21: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 945f25: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 945f27: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 945f2b: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 945f2d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 945f2f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 945f31: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 945f35: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 945f39: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 945f3d: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 945f41: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 945f47: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 945f4b: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 945f4d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 945f4f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 945f51: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 945f55: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 945f59: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 945f5d: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 945f63: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 945f65: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 945f67: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 945f69: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 945f6b: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 945f6f: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 945f73: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 945f75: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 945f79: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 945f7b: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 945f7f: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 945f83: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 945f85: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 945f87: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 945f89: fld dword ptr [0x9f40f4] */
  { double v = F32((uint32_t)(0x9f40f4u)); FPUSH(v); }
/* 945f8f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 945f91: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 945f95: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 945f97: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 945f99: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 945f9d: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 945fa1: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 945fa7: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* 945fae: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 945faf: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 945fb1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 945fb3: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 945fb7: fadd dword ptr [esp + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x80u)));
/* 945fbe: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 945fc0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 945fc2: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 945fc4: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 945fc8: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 945fce: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 945fd0: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 945fd7: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 945fdd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 945fdf: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 945fe3: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 945fe7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 945fe9: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 945fed: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 945ff1: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 945ff5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 945ff7: jl 0x945da7 */
  if ((sf != of)) goto L_945da7;
L_945ffd: /* 945ffd: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 946001: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 946007: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94600b: fmul qword ptr [0xa21550] */
  ST0 = ST0 * (F64((uint32_t)(0xa21550u)));
/* 946011: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 946015: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 946019: fmul qword ptr [0xa211c8] */
  ST0 = ST0 * (F64((uint32_t)(0xa211c8u)));
/* 94601f: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 946023: fmul qword ptr [0xa21548] */
  ST0 = ST0 * (F64((uint32_t)(0xa21548u)));
/* 946029: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 94602d: fmul qword ptr [0xa21540] */
  ST0 = ST0 * (F64((uint32_t)(0xa21540u)));
/* 946033: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 946037: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 94603b: fmul qword ptr [0xa21538] */
  ST0 = ST0 * (F64((uint32_t)(0xa21538u)));
/* 946041: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 946045: fmul qword ptr [0xa21530] */
  ST0 = ST0 * (F64((uint32_t)(0xa21530u)));
/* 94604b: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 94604f: fmul qword ptr [0xa21528] */
  ST0 = ST0 * (F64((uint32_t)(0xa21528u)));
/* 946055: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 946059: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94605d: fmul qword ptr [0xa21520] */
  ST0 = ST0 * (F64((uint32_t)(0xa21520u)));
/* 946063: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 946067: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94606b: fmul qword ptr [0xa21518] */
  ST0 = ST0 * (F64((uint32_t)(0xa21518u)));
/* 946071: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 946075: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 94607b: fdiv dword ptr [esi + ebp*4] */
  ST0 = ST0 / (F32((uint32_t)(esi + ebp*4)));
/* 94607e: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 946082: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 946086: fst dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0);
/* 94608a: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 94608e: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 946092: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 946096: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 946098: fstp dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0); FPOP();
/* 94609c: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9460a0: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9460a2: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 9460a6: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9460aa: fmul dword ptr [esi + ebx*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + ebx*4)));
/* 9460ad: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9460b1: fmul dword ptr [esi + edi*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + edi*4)));
/* 9460b4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9460b6: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 9460ba: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 9460bc: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 9460c0: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 9460c4: fld dword ptr [esi + ebx*4] */
  { double v = F32((uint32_t)(esi + ebx*4)); FPUSH(v); }
/* 9460c7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9460c9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9460cb: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 9460cf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9460d1: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 9460d5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9460d7: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 9460db: fld dword ptr [esi + edi*4] */
  { double v = F32((uint32_t)(esi + edi*4)); FPUSH(v); }
/* 9460de: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9460e0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9460e2: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9460e6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9460e8: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9460ec: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9460ee: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 9460f5: fld dword ptr [esi + ebx*4] */
  { double v = F32((uint32_t)(esi + ebx*4)); FPUSH(v); }
/* 9460f8: fmul dword ptr [esi + edi*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + edi*4)));
/* 9460fb: fst dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0);
/* 9460ff: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 946103: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 946105: fstp dword ptr [esp + 0x84] */
  WF32((uint32_t)(esp + 0x84u), ST0); FPOP();
/* 94610c: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 946110: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 946112: fadd dword ptr [esp + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x40u)));
/* 946116: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 94611a: fadd dword ptr [esp + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x84u)));
/* 946121: fadd dword ptr [esp + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x80u)));
/* 946128: fadd dword ptr [esp + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x7cu)));
/* 94612c: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 946130: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 946134: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 946138: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 94613a: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 94613e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 946142: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 946144: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 946148: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 94614c: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 946152: fadd dword ptr [esp + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x40u)));
/* 946156: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 94615a: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 946161: fadd dword ptr [esp + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x80u)));
/* 946168: fadd dword ptr [esp + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x7cu)));
/* 94616c: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 946172: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 946174: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 946178: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 94617c: fmul dword ptr [esi + ebx*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + ebx*4)));
/* 94617f: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 946183: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 946187: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 94618b: fmul dword ptr [esi + edi*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + edi*4)));
/* 94618e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 946190: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 946196: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 946198: fld dword ptr [esi + ebx*4] */
  { double v = F32((uint32_t)(esi + ebx*4)); FPUSH(v); }
/* 94619b: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 94619f: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 9461a1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9461a3: fld dword ptr [esi + edi*4] */
  { double v = F32((uint32_t)(esi + edi*4)); FPUSH(v); }
/* 9461a6: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 9461aa: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9461ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9461ae: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 9461b2: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 9461b6: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 9461b8: fchs  */
  ST0 = -ST0;
/* 9461ba: fstp dword ptr [esp + 0x84] */
  WF32((uint32_t)(esp + 0x84u), ST0); FPOP();
/* 9461c1: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9461c5: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 9461c9: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 9461d0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 9461d2: fmul dword ptr [esi + ebx*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + ebx*4)));
/* 9461d5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 9461d7: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 9461db: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 9461dd: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9461e1: fmul dword ptr [esi + edi*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + edi*4)));
/* 9461e4: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 9461e6: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9461e8: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 9461ec: fchs  */
  ST0 = -ST0;
/* 9461ee: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 9461f2: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9461f6: fmul dword ptr [esi + ebx*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + ebx*4)));
/* 9461f9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9461fb: fmul dword ptr [esi + edi*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + edi*4)));
/* 9461fe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 946200: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 946202: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 946206: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 94620a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94620c: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 946210: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 946214: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 946218: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 94621a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94621c: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 946220: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 946222: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 946224: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 946226: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 94622a: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 94622e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 946230: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 946234: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 946236: jne 0x946242 */
  if (!zf) goto L_946242;
L_946238: /* 946238: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94623c: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 946240: jmp 0x94625e */
  goto L_94625e;
L_946242: /* 946242: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 946244: jne 0x946250 */
  if (!zf) goto L_946250;
L_946246: /* 946246: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94624a: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 94624e: jmp 0x94625e */
  goto L_94625e;
L_946250: /* 946250: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 946254: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 946258: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 94625c: fchs  */
  ST0 = -ST0;
L_94625e: /* 94625e: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 946265: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 946267: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* 94626e: fadd dword ptr [esp + 0x60] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x60u)));
/* 946272: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 946276: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 94627a: fmul dword ptr [esi + edi*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + edi*4)));
/* 94627d: fadd dword ptr [eax + edi*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi*4)));
/* 946280: fstp dword ptr [eax + edi*4] */
  WF32((uint32_t)(eax + edi*4), ST0); FPOP();
/* 946283: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 946287: fmul dword ptr [esi + ebx*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + ebx*4)));
/* 94628a: fadd dword ptr [eax + ebx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + ebx*4)));
/* 94628d: fstp dword ptr [eax + ebx*4] */
  WF32((uint32_t)(eax + ebx*4), ST0); FPOP();
/* 946290: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 946294: fmul dword ptr [esi + ebp*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + ebp*4)));
/* 946297: fadd dword ptr [eax + ebp*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + ebp*4)));
/* 94629a: fstp dword ptr [eax + ebp*4] */
  WF32((uint32_t)(eax + ebp*4), ST0); FPOP();
/* 94629d: mov eax, dword ptr [esp + 0x94] */
  eax = R32((uint32_t)(esp + 0x94u));
/* 9462a4: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 9462a8: fmul dword ptr [esi + edi*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + edi*4)));
/* 9462ab: fadd dword ptr [eax + edi*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi*4)));
/* 9462ae: fstp dword ptr [eax + edi*4] */
  WF32((uint32_t)(eax + edi*4), ST0); FPOP();
/* 9462b1: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 9462b5: fmul dword ptr [esi + ebx*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + ebx*4)));
/* 9462b8: fadd dword ptr [eax + ebx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + ebx*4)));
/* 9462bb: fstp dword ptr [eax + ebx*4] */
  WF32((uint32_t)(eax + ebx*4), ST0); FPOP();
/* 9462be: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 9462c5: fmul dword ptr [esi + ebp*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + ebp*4)));
/* 9462c8: fadd dword ptr [eax + ebp*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + ebp*4)));
/* 9462cb: fstp dword ptr [eax + ebp*4] */
  WF32((uint32_t)(eax + ebp*4), ST0); FPOP();
/* 9462ce: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* 9462d5: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 9462dc: fmul dword ptr [esi + edi*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + edi*4)));
/* 9462df: fadd dword ptr [eax + edi*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi*4)));
/* 9462e2: fstp dword ptr [eax + edi*4] */
  WF32((uint32_t)(eax + edi*4), ST0); FPOP();
/* 9462e5: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 9462e9: fmul dword ptr [esi + ebx*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + ebx*4)));
/* 9462ec: fadd dword ptr [eax + ebx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + ebx*4)));
/* 9462ef: fstp dword ptr [eax + ebx*4] */
  WF32((uint32_t)(eax + ebx*4), ST0); FPOP();
/* 9462f2: fmul dword ptr [esi + ebp*4] */
  ST0 = ST0 * (F32((uint32_t)(esi + ebp*4)));
/* 9462f5: mov esi, dword ptr [esp + 0x5c] */
  esi = R32((uint32_t)(esp + 0x5cu));
/* 9462f9: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9462fc: mov dword ptr [esp + 0x5c], esi */
  W32((uint32_t)(esp + 0x5cu), esi);
/* 946300: fadd dword ptr [eax + ebp*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + ebp*4)));
/* 946303: fstp dword ptr [eax + ebp*4] */
  WF32((uint32_t)(eax + ebp*4), ST0); FPOP();
/* 946306: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 94630a: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 94630d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94630e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 946310: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 946314: jl 0x945cd6 */
  if ((sf != of)) goto L_945cd6;
L_94631a: /* 94631a: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 946321: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 946328: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* 94632f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_946330: /* 946330: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 946332: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 946333: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 946339: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94633a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94633b: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 94633d: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 946340: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 946346: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 946349: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 94634c: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 946352: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 946355: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 946357: fmul dword ptr [0xa12538] */
  ST0 = ST0 * (F32((uint32_t)(0xa12538u)));
/* 94635d: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 94635f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 946362: fmul dword ptr [0xa12538] */
  ST0 = ST0 * (F32((uint32_t)(0xa12538u)));
/* 946368: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 94636b: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 94636e: fmul dword ptr [0xa12538] */
  ST0 = ST0 * (F32((uint32_t)(0xa12538u)));
/* 946374: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 946377: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 946379: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 94637f: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 946381: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 946384: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 94638a: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 94638d: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 946390: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 946396: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 946399: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 94639d: add esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9463a0: ret  */
  esp += 4; SPILL(); return;
}
